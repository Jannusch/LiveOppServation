
#include "OmnetppOutputVectorManagergRPC.h"
#include <cstdint>
#include "ranges"
#include <cstdio>
#include <ostream>
#include <string>
#include <utility>
#include <vector>
#include "algorithm"

namespace omnetpp {


Register_Class(OmnetppOutputVectorManagergRPC);

void * OmnetppOutputVectorManagergRPC::registerVector(const char *modulename, const char *vectorname, opp_string_map *attributes) {

    VectorData *vp = new VectorData();
    
    vp->id = nextVectorId++;
    vectors.push_back(vp);
    // create metaData struct
    VectorMetaData *vmd = new VectorMetaData();
    vmd->id = vp->id;
    vmd->modulePath = std::string(modulename);
    vmd->name = std::string(vectorname);
    vmd->vec_handle = &vp;
    vectorsMetaData.push_back(vmd);

    // return id to the vector
    return vp;

};

void OmnetppOutputVectorManagergRPC::setDebugWatch(uint64_t vector_id, const std::string& operator_, double value)
{
    
    for( auto vector : vectors)
    {
        if (vector->id == vector_id)
        {
            vector->debugTraps.push_back(std::pair<std::string, double>(operator_, value));
            return;
        }
    }

    // If we reach here, the vector was not found
    throw std::runtime_error("No vector registered with this ID");
}

void OmnetppOutputVectorManagergRPC::deregisterVector(void *vechandle)
{
    vectors.erase(find(vectors.begin(), vectors.end(), vechandle));
};

void stopSimulation(VectorData* vp, simtime_t t, double value)
{
    EV << "Debug watch hit for vector " << vp->id << " at time "<<  t << " with value " << value << "\n";
    getSimulation()->requestTrapOnNextEvent();
}

bool OmnetppOutputVectorManagergRPC::record(void *vechandle, simtime_t t, double value)
{
    VectorData *vp = (VectorData *)vechandle;
    ASSERT2(vp, "Vector not registerd");
    
    Sample *sample = new Sample(t, getSimulation()->getEventNumber(), value);
    vp->samples.push_back(sample);
    // check if vector has watch list
    for (auto [op, val] : vp->debugTraps) {
        if (op == "==") {
            if (value == val) {
                stopSimulation(vp, t, value);
            }
        } else if (op == "<") {
            if (value < val) {
                stopSimulation(vp, t, value);
            }
        } else if (op == ">") {
            if (value > val) {
                stopSimulation(vp, t, value);
            }
        } else if (op == "<=") {
            if (value <= val) {
                stopSimulation(vp, t, value);
            }
        } else if (op == ">=") {
            if (value >= val) {
                stopSimulation(vp, t, value);
            }
        } else {
            throw std::runtime_error("Unknown operator for debug watch");
        }
    }
    return true;
}



// This function searches through the vector and returns the samples which are in the given time interval.
// TODO: find way how to return a slice of the vector
VectorData & OmnetppOutputVectorManagergRPC::queryVectors(uint64_t id, simtime_t start, simtime_t end)
{
    for (auto vector : vectors) {
        if (vector->id == id) {
            return *vector;
        }
    }

    // This should never be reached...
    // TODO: add some proper error handling
    throw std::runtime_error("No vector registered with this ID");

    // TODO: restructure this function, to make it
    // Problem(?): what happens if the results are not in order in the vector and I do lazy evaluation
    // auto filtered_samples = vp->samples | 
    //     std::ranges::views::filter([&](const auto& sample) {
    //         return sample->simtime >= start && sample->simtime <= end;
    //     });

    // EV_DEBUG << "Results from vector:\n";
    // for (auto s : filtered_samples)
    //     EV_DEBUG << "At: " << s->simtime << " value: " << s->value;
    // EV_DEBUG << std::endl;
    
}


VectorsMetaData OmnetppOutputVectorManagergRPC::getMetaData()
{
    return vectorsMetaData;
}
}  // namespace omnetpp

