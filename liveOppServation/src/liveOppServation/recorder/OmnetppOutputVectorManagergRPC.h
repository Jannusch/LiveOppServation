#include "omnetpp.h"
#include "omnetpp/envirext.h"
#include <cstdint>
#include <string>

namespace omnetpp {

struct Sample {
    simtime_t simtime;
    uint64_t eventNumber;
    double value;

    Sample(simtime_t t, uint64_t eventNumber, double value)
        : simtime(t)
        , eventNumber(eventNumber)
        , value(value)
    {
    }
};
struct VectorData {
    uint64_t id;
    std::vector<Sample*> samples;
    // debug trap
    std::vector<std::pair<std::string, double>> debugTraps;
};

struct VectorMetaData {
    uint64_t id;
    std::string name;
    std::string modulePath;
    void* vec_handle;
};

typedef std::vector<VectorData*> Vectors;
typedef std::vector<VectorMetaData*> VectorsMetaData;

class OmnetppOutputVectorManagergRPC : public cIOutputVectorManager {

protected:
private:
    // we need to start with 1, gRPC (or protobuf) treats 0 not as part of uintXX
    uint64_t nextVectorId = 1;
    Vectors vectors;
    VectorsMetaData vectorsMetaData;

public:
    // classic functions
    OmnetppOutputVectorManagergRPC() {};
    ~OmnetppOutputVectorManagergRPC() {};
    void startRun() override {};
    void endRun() override {};
    void* registerVector(const char* modulename, const char* vectorname, opp_string_map* attributes = nullptr) override;
    void deregisterVector(void* vechandle) override;
    bool record(void* vechandle, simtime_t t, double value) override;
    const char* getFileName() const override
    {
        return "file::memory:";
    };
    void flush() override {};

    void setDebugWatch(uint64_t vector_id, const std::string& operator_, double value);

    // gRPC extension
    VectorData& queryVectors(uint64_t id, simtime_t start, simtime_t end);
    // This returns the meta data stuct. The Statistics module needs to hanlde the conversion and serialization with gRPC
    VectorsMetaData getMetaData();
};
} // namespace omnetpp