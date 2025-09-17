package liveOppServation.examples;

simple TicToc
{
    parameters:
       @display("i=block/routing");
       @class(TicToc);

       @signal[arrival](type="long");
        @statistic[hopCount](title="hop count"; source="arrival"; record=vector,stats; interpolationmode=none);

    gates:
        inout gate[];
}