
#include "StatisticsRecorder.h"
#include <cstdlib>
#include <iostream>
#include <memory>
#include "envir/envirbase.h"
#include "grpcpp/server_context.h"
#include "grpcpp/support/server_callback.h"

Define_Module(StatisticsRecorder);

void StatisticsRecorder::initialize()
{
    // std::thread t(&StatisticsRecorder::run_gRPC_Server, this);
    // t.detach();
    run_gRPC_Server();
    // this could be changed for other outputVectorManagers
    attachToListener<omnetpp::OmnetppOutputVectorManagergRPC*>();
    ASSERT2(recorder, "Couldn't attach to the requested recorder :(");

    // TODO: Debug point
    scheduleAt(omnetpp::SimTime(1, omnetpp::SIMTIME_S), new omnetpp::cMessage("debug", 1));
}

template <typename outputVectorManager>
bool StatisticsRecorder::attachToListener()
{
    auto envir = dynamic_cast<omnetpp::envir::EnvirBase*>(omnetpp::getEnvir());
    ASSERT2(envir, "Wrong base envir, sorry. But your envir needs to inherit from EnvirBase");
    auto listeners = envir->getLifecycleListeners();

    // try to find correct listener
    for (auto listener : listeners) {
        recorder = dynamic_cast<outputVectorManager>(listener);
        if (recorder)
            return true;
    }
    return false;
}

void StatisticsRecorder::finish()
{
    omnetpp::cModule::finish();
    server->Shutdown();
}

omnetpp::VectorsMetaData StatisticsRecorder::getStatisticsMetaData()
{
    // TODO: I need to figure out what and why I was doing this :D
    auto resultRecorders = getResultRecorders();

    return recorder->getMetaData();
}

void StatisticsRecorder::run_gRPC_Server()
{
    std::string server_address = absl::StrFormat("0.0.0.0:%d", 13151);

    grpc::EnableDefaultHealthCheckService(true);

    ServerBuilder builder;
    // Listen on the given address without any authentication mechanism.
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    // Register "service" as the instance through which we'll communicate with
    // clients. In this case it corresponds to an *synchronous* service.
    builder.RegisterService(this);
    // Finally assemble the server.

    server = builder.BuildAndStart();
    std::cout << "Server listening on " << server_address << std::endl;

    // Wait for the server to shutdown. Note that some other thread must be
    // responsible for shutting down the server for this call to ever return.
    // server->Wait();
}


grpc::ServerWriteReactor<VectorMetaData>* StatisticsRecorder::RequestVectorsMetaData(CallbackServerContext* context, const MetaMessage* metaMessage)
{
    class Lister : public grpc::ServerWriteReactor<VectorMetaData> {
    public:
        // TODO: Die klasse hier muss überschrieben werden. I'm not sure, if the Lister class is from gRPC; check the doku
        Lister(omnetpp::VectorsMetaData metaData)
        {
            metaDataVector = metaData;
            next_feature_ = metaDataVector.begin();
            NextWrite();
        }

        void OnWriteDone(bool ok) override
        {
            if (!ok) {
                Finish(Status(grpc::StatusCode::UNKNOWN, "Unexpected Failure"));
            }
            NextWrite();
        }

        void OnDone() override
        {
            delete this;
        }

        void OnCancel() override
        {
            std::cout << "RPC Cancelled";
        }

    private:
        void NextWrite()
        {
            while (next_feature_ != metaDataVector.end()) {
                auto f = *next_feature_;
                next_feature_++;
                auto reply = new VectorMetaData();
                reply->set_id(f->id);
                reply->set_name(f->name);
                reply->set_path(f->modulePath);
                reply->set_vec_handle(reinterpret_cast<uint64_t>(f->vec_handle));
                StartWrite(reply);
                return;
            }
            // Didn't write anything, all is done.
            Finish(Status::OK);
        }
        omnetpp::VectorsMetaData metaDataVector;
        // clang has a porblem to expand omnetpp::VectorsMetaData correctly? TODO: fix (only visual)
        std::vector<omnetpp::VectorMetaData*>::iterator next_feature_;
    };
    return new Lister(getStatisticsMetaData());
}

// TODO: Value for start and end, which indicate that we want the values from the begin, respectiv up to the end
ServerUnaryReactor* StatisticsRecorder::RequestVectorData(CallbackServerContext* context, const VectorDataRequest* request, DataList* reply)
{
    auto now = omnetpp::simTime().raw();

    auto vec_id = request->id();
    auto start = omnetpp::SimTime().fromRaw(request->start());
    auto end = omnetpp::SimTime().fromRaw(request->end());

    // get the data, currently it is the unfiltered data, and we do this here
    // TODO: we want to filter in the recorder as an abstraction, the problem is, that the view points to the wrong base address?
    auto data = recorder->queryVectors(vec_id, start, end);

    for (auto sample : data.samples) {
        // TODO: check if this could be done with raw values directly
        // TODO: TEST
        // Check if sample is in range of requested times, end==0 means no end time
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wlogical-op-parentheses"
        if (sample->simtime >= start && (sample->simtime <= end || end == 0))
#pragma clang diagnostic pop
        {
            reply->add_data(sample->value);
            reply->add_time(sample->simtime.raw());
        }
    }

    reply->set_id(data.id);
    reply->set_type("double");
    reply->set_simtime(now);

    ServerUnaryReactor* reactor = context->DefaultReactor();
    reactor->Finish(Status::OK);
    return reactor;
}

ServerUnaryReactor* StatisticsRecorder::SetDebugWatch(CallbackServerContext* context, const DebugData* request, Data* reply)
{
    // Extract information from the request
    auto vector_id = request->id();
    auto operator_type = request->operator_type();
    auto value = request->value();

    // Set the debug watch in the recorder
    recorder->setDebugWatch(vector_id, operator_type, value);

    // Prepare the reply
    reply->set_data(vector_id);

    ServerUnaryReactor* reactor = context->DefaultReactor();
    reactor->Finish(Status::OK);
    return reactor;
}

ServerUnaryReactor* StatisticsRecorder::RequestTimeInfo(CallbackServerContext* context, const MetaMessage* metaMessage, TimeInfo* reply)
{

    auto expo = omnetpp::SimTime::getScaleExp();
    // TODO: TEST, i'm not sure if this lossless
    reply->set_scaleexp(expo);

    ServerUnaryReactor* reactor = context->DefaultReactor();
    reactor->Finish(Status::OK);
    return reactor;
}

// We return the simulation ID we have. This might be either the one we received or one we received earlyer indicating there is already another frontend
ServerUnaryReactor* StatisticsRecorder::SetUuid(CallbackServerContext* contex, const UuidSetRequest* request, UuidSetReply* reply)
{
    if (sim_id.empty()) {
        sim_id = request->sim_uuid();
    }

    reply->set_sim_uuid(sim_id);

    front_ids.push_back(request->front_uuid());

    ServerUnaryReactor* reactor = contex->DefaultReactor();
    reactor->Finish(Status::OK);
    return reactor;
}