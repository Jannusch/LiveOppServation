package liveOppServation.modules;

module StatisticsRecorder
{
    parameters:
        @class(StatisticsRecorder);
        bool hotRun = default(false); // disables the file writer acces, no results will be stored by the simulation
        bool debug = default(false); // Activates "test suit"

}