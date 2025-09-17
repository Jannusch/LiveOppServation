#pragma once
#include <cstdint>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include "grpcpp/server_context.h"
#include "grpcpp/support/server_callback.h"
#include "liveoppservation.grpc.pb.h"
#include "liveOppServation/modules/liveoppservation.pb.h"

#include <iostream>
#include <memory>

#include <omnetpp.h>

#include <liveOppServation/recorder/OmnetppOutputVectorManagergRPC.h>
#include <string>
#include <vector>


using grpc::CallbackServerContext;
using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::ServerUnaryReactor;
using grpc::Status;
using liveOppServation::Greeter;
using liveOppServation::VectorMetaData;
using liveOppServation::MetaMessage;
using liveOppServation::VectorDataRequest;
using liveOppServation::DataList;
using liveOppServation::Data;
using liveOppServation::TimeInfo;
using liveOppServation::UuidSetRequest;
using liveOppServation::UuidSetReply;
using liveOppServation::DebugData;

class StatisticsRecorder final : public omnetpp::cSimpleModule, public Greeter::CallbackService {
public:
    void initialize() override;
    void finish() override;
    omnetpp::VectorsMetaData getStatisticsMetaData();
    template<typename outputVectorManager> bool attachToListener();

    // gRPC methods    
    ServerUnaryReactor* RequestTimeInfo(CallbackServerContext* context, const MetaMessage* metaMessage, TimeInfo* reply) override;
    
    grpc::ServerWriteReactor<VectorMetaData>* RequestVectorsMetaData(CallbackServerContext* context, const MetaMessage* metaMessage) override;

    ServerUnaryReactor* RequestVectorData(CallbackServerContext* context, const VectorDataRequest * request, DataList* reply) override;

    ServerUnaryReactor* SetUuid(CallbackServerContext* contex, const UuidSetRequest* request, UuidSetReply* reply) override;

    ServerUnaryReactor* SetDebugWatch(CallbackServerContext* context, const DebugData* request, Data* reply) override;

    

private:
    void run_gRPC_Server();
    std::unique_ptr<Server> server;
    omnetpp::OmnetppOutputVectorManagergRPC* recorder;
    std::string sim_id = "";
    std::vector<std::string> front_ids;
};
