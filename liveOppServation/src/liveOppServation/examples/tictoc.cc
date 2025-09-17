#import "tictoc.h"

Define_Module(TicToc);

void TicToc::initialize()
{
    arrivalSignal = registerSignal("arrival");
    // Module 0 sends the first message
    if (getIndex() == 0) {
        // Boot the process scheduling the initial message as a self-message.
        TicTocMsg  *msg = generateMessage();
        scheduleAt(0.0, msg);
    }
    //hopCountStat.setName("HopCount");
}

void TicToc::handleMessage(omnetpp::cMessage *msg)
{
    TicTocMsg *ttmsg = check_and_cast<TicTocMsg *>(msg);

    if (ttmsg->getDestination() == getIndex()) {
        // Message arrived
        int hopcount = ttmsg->getHopCount();
        // send a signal
        emit(arrivalSignal, hopcount);
        //hopCountStat.record(hopcount);

        EV << "Message " << ttmsg << " arrived after " << hopcount << " hops.\n";
        bubble("ARRIVED, starting new one!");

        delete ttmsg;

        // Generate another one.
        EV << "Generating another message: ";
        TicTocMsg *newmsg = generateMessage();
        EV << newmsg << omnetpp::endl;
        forwardMessage(newmsg);
    }
    else {
        // We need to forward the message.
        forwardMessage(ttmsg);
    }
}

TicTocMsg *TicToc::generateMessage()
{
    // Produce source and destination addresses.
    int src = getIndex();
    int n = getVectorSize();
    int dest = intuniform(0, n-2);
    if (dest >= src)
        dest++;

    char msgname[20];
    snprintf(msgname, sizeof(msgname), "tic-%d-to-%d", src, dest);

    // Create message object and set source and destination field.
    TicTocMsg *msg = new TicTocMsg(msgname);
    msg->setSource(src);
    msg->setDestination(dest);
    return msg;
}

void TicToc::forwardMessage(TicTocMsg *msg)
{
    // Increment hop count.
    msg->setHopCount(msg->getHopCount()+1);

    // Same routing as before: random gate.
    int n = gateSize("gate");
    int k = intuniform(0, n-1);

    EV << "Forwarding message " << msg << " on gate[" << k << "]\n";
    send(msg, "gate$o", k);
}