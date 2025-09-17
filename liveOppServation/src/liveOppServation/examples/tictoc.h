#pragma once
#import "omnetpp.h"
#import "tictoc_m.h"

class TicToc: public omnetpp::cSimpleModule{
   private:
    omnetpp::simsignal_t arrivalSignal;
    omnetpp::cOutVector hopCountStat;

  protected:
    virtual TicTocMsg *generateMessage();
    virtual void forwardMessage(TicTocMsg *msg);
    virtual void initialize() override;
    virtual void handleMessage(omnetpp::cMessage *msg) override;
};