from __future__ import print_function

import logging
import uuid

import pandas as pd

import grpc
import liveoppservation_pb2
import liveoppservation_pb2_grpc

import random

# make thins true inits the logic objects with dummy data that can be used to test functionality without the need of an active simulation
DEBUG = False

# global dict that stores a uuid as key with a corresponding object
sim_map: dict[str, any] = {
    "1289394" : {"name": "opp", "value": 10, "ip": "192.168.0.3", "port": 80},
    "124" : {"name": "opp", "value": 10, "ip": "192.168.0.4", "port": 80},
    "948989" : {"name": "opp", "value": 10, "ip": "192.168.0.5", "port": 80},
}

# Initialize logging configuration
logging.basicConfig(level=logging.DEBUG, format='%(asctime)s - %(levelname)s - %(message)s')

def connect(ip, port) -> str:
        logging.info("Connecting to server at ip: {} and port: {}".format(ip, port))
        logicObj = Logic()
        logicObj.ip = ip
        logicObj.port = port
        logicObj.sim_uuid = logicObj.set_uuid(uuid.uuid4())
        global sim_map
        sim_map[logicObj.sim_uuid] = {"name": "opp", "value": 10, "ip": logicObj.ip, "port": logicObj.port, "logic_obj": logicObj}
        logging.debug("Sim map: %s", sim_map)
        return logicObj.sim_uuid

class Logic():
    """This class represents the logic of an individual simulation."""
    def __init__(self):
        ### Data
        
        
        if DEBUG:
            value = [random.uniform(5, 15) for _ in range(20)]
            time = []
            id = []
            current = 0
            for distance in value:
                current += distance
                time.append(current)
                id.append(1)

            values = []
            for distance in value:
                if distance > 10:
                    values.append(distance+50)
                else:
                    values.append(distance + 5)
                id.append(5)
            
            value = value + values
            time = time + time
            print(f"Values: {value}")
            print(f"Times: {time}")
            print(f"Ids: {id}")

            

            self.index = {
                "id": id,
                "time": time,
                "value": value,
            }

            self.vectors = pd.DataFrame(self.index)

            self.index_meta = {
                "id": [1, 2, 3, 4, 5], # the ID in the OppVecRecorder
                "name": ["arrivalTimeWirelessJitter", "queueTime", "queueTime", "travelTime", "arrivalTimeJitter"], # The name of the vector
                "path": ["car[1].nic[0]", "car[1].switch.queue[1]", "car[1].queue[0]", "car[1].ecu", "car[1].ecu"], # The full path of the module emiting the vector
                "last_update": [max(self.vectors.query('id == 1')['time']),"-", "-", "-", max(self.vectors.query('id == 5')['time'])], # the last sim_time (as raw value) when a vector was queried
                "type": ["double", "double", "double", "int", "double"], # the data type reported by omnetpp
            }
        else:
            self.index = {
                "id": [],
                "time": [],
                "value": [],
            }

            self.vectors = pd.DataFrame(self.index)

            self.index_meta = {
                "id": [], # the ID in the OppVecRecorder
                "name": [], # The name of the vector
                "path": [], # The full path of the module emiting the vector
                # TODO: I need to set this, but is this realy the best idea or should I instead set the last time, the value got updated (but this is easy filterable in the raw_value table...) How to make sure, that this is actual the last time. I do not request in a fixed periode in sim_time. I request in a fixed interval in real time. But maybe its worth to write a push in fixed simtime in the statisitc module.
                "last_update": [], # the last sim_time (as raw value) when a vector was queried
                "type": [], # the data type reported by omnetpp
            }
                

        self.vectors_meta = pd.DataFrame(self.index_meta)

        self.front_uuid = uuid.uuid4()
        self.sim_uuid: uuid = None
        
        # Connection Details
        self.ip = None
        self.port = None
    


    
    
    # TODO: change return type to uuid and check that in the rest of code thats not a problem
    def set_uuid(self, new_uuid: uuid.UUID) -> str:
        with grpc.insecure_channel(f"{self.ip}:{self.port}") as channel:
            stub = liveoppservation_pb2_grpc.GreeterStub(channel)
            sim = str(new_uuid)
            front = str(self.front_uuid)
            result = stub.SetUuid(liveoppservation_pb2.UuidSetRequest(sim_uuid=sim, front_uuid=front))
            logging.info("Sim UUID type: %s", type(result.sim_uuid))
            if type(result.sim_uuid) == str:
                self.sim_uuid = uuid.UUID(result.sim_uuid)
                return result.sim_uuid
            else:
                raise ValueError("returned uuid is not a string")

    def update_vector_metadata(self):
        with grpc.insecure_channel(f"{self.ip}:{self.port}") as channel:
            stub = liveoppservation_pb2_grpc.GreeterStub(channel)
            ids = self.vectors_meta['id'].to_list()
            for id in stub.RequestVectorsMetaData(liveoppservation_pb2.MetaMessage()):
                    # TODO: Type request
                    if id.id not in ids:
                        self.vectors_meta.loc[len(self.vectors_meta)] = [id.id, id.name, id.path, None, "doubel"]
            logging.debug(f"Vector meta data df: {self.vectors_meta}")

    def setdebugwatch(self, vector_id, operator, value):
        logging.debug(f"Setting debug watch for vector id {vector_id} with operator {operator} and value {value}")
        with grpc.insecure_channel(f"{self.ip}:{self.port}") as channel:
            stub = liveoppservation_pb2_grpc.GreeterStub(channel)
            reply = stub.SetDebugWatch(liveoppservation_pb2.DebugData(id=vector_id, operator_type=operator, value=value))
            logging.debug(f"Set debug watch reply: {reply}")

    ### TODO: check for async
    def update_vectors(self, vector_ids):
        logging.debug(f"Vector ids: {vector_ids}")
        with grpc.insecure_channel(f"{self.ip}:{self.port}") as channel:
            stub = liveoppservation_pb2_grpc.GreeterStub(channel)
            for vid in vector_ids:

                start_time = self.vectors_meta.loc[self.vectors_meta['id'] == vid, 'last_update'].iat[0]
                if start_time is None:
                    start_time = 0
                print((start_time))
                reply = stub.RequestVectorData(liveoppservation_pb2.VectorDataRequest(client=str(self.front_uuid), id=vid, start=start_time, end=0))
                values = reply.data
                times = reply.time

                self.vectors_meta.loc[self.vectors_meta['id'] == vid, 'last_update'] = reply.simtime

                # logging.debug(f"Values: {values}, times: {times}")
                for i in range(0, len(values)):
                    self.vectors.loc[len(self.vectors)] = [vid, times[i] * 10 ** self.time_scale_exp , values[i]]
                 
                



    def check_connection(self):
        # NOTE(gRPC Python Team): .close() is possible on a channel and should be
        # used in circumstances in which the with statement does not fit the needs
        # of the code.
        print("Will try to greet world ...")
        with grpc.insecure_channel(f"{self.ip}:{self.port}") as channel:
            stub = liveoppservation_pb2_grpc.GreeterStub(channel)
            vec_handle = None
            for id in stub.RequestVectorsMetaData(liveoppservation_pb2.MetaMessage()):
                logging.debug(id)
                if (id.id == 2):
                    vec_handle = id.vec_handle

            result = stub.RequestVectorData(liveoppservation_pb2.VectorDataRequest(client=1, id=2, start=1, end=0))
            print("Second: ", result.data)
    
    # TODO: some error handling
    def get_time_info(self):
        with grpc.insecure_channel(f"{self.ip}:{self.port}") as channel:
            stub = liveoppservation_pb2_grpc.GreeterStub(channel)
            result = stub.RequestTimeInfo(liveoppservation_pb2.MetaMessage())
            logging.debug(f"Time info: {result.scaleexp}")
            self.time_scale_exp = int(result.scaleexp)
            
            


if __name__ == "__main__":
    pass

