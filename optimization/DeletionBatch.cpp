//Not sure this is worth it... There's not much of a difference in terms of frame rate
#include "DeletionBatch.hpp"

#include <mutex>
#include <Server.hpp>

std::mutex mu;

boost::json::array array;

uint64_t curr_size=0;
int curr_len=0;

std::unordered_map<uint64_t, uint32_t> handle_to_size;

#define ACQUIRE_LOCK std::unique_lock<std::mutex> lk(mu);
#define SIZE_LIMIT 5*1000*1000 //5 MB
#define LEN_LIMIT 100

void addToDeletionBatch(uint64_t handle, boost::json::object json){
	ACQUIRE_LOCK
	auto node=handle_to_size.extract(handle);
	if (!node.empty()){
		curr_size+=node.mapped();
	}
	curr_len+=1;

	array.push_back(json);
}

bool pushHintDeletionBatch(){
	ACQUIRE_LOCK
	return (curr_size>=SIZE_LIMIT) || (curr_len >= LEN_LIMIT);
}

void sendDeletionBatch(){
	boost::json::object json;
	json["stream_type"]=CMD_BUFFER_BATCH;
	ACQUIRE_LOCK
	
	printf("Deleting! Size is %lu\n", array.size());

	json["cmds"]=array;
	writeToConn(json);

	array.clear();
	curr_size=0;
	curr_len=0;
}


void updateDeletionBatchPushHint(uint64_t handle, uint32_t size){
	ACQUIRE_LOCK
	handle_to_size[handle]=size;
}
