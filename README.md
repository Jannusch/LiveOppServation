# LiveOppServatoin
## An Interactive Live Frontend for OMNeT++

LiveOppServation provides an open-source Dash-based frontend for OMNeT++ simulations.
It allows for continous result evaluation during runtime and setting debug traps based on statisitc values.
A more detailed description can be found in the [publication](https://www.cms-labs.org/bib/bigge2025liveoppservation/).

### Building
TL;DR
```bash
# Requirements:
#     - Poetry - python-poetry.org
$ ./configure --install-omnetpp
```
The project consist of five subparts - all included in this repository:
- [LiveOppServationFrontend](https://github.com/Jannusch/LiveOppServation/tree/main/liveOppServationFrontend) - the Dash application for visualization, creating the frontend.
- [LiveOppServation](https://github.com/Jannusch/LiveOppServation/tree/main/liveOppServation) - the resultrecorder and statistics module for OMNeT++, creating the backend. It also contains an example simulation.
- [LiveOppServation.prot](https://github.com/Jannusch/LiveOppServation/blob/main/liveOppServation/src/liveOppServation/modules/liveoppservation.proto) - the protobuf file specifying the common API between the frontend and the backend.
- [OMNeT++](https://github.com/omnetpp/omnetpp) - the simulation enviroment itself. It is included as it is necessary to link agains internal files of OMNeT++
- gRPC - used for the connection between the frontend and the backend

If you execute the configure script in the top level directory all the dependent projects are build.
