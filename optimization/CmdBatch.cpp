#include <boost/json.hpp>
#include <mutex>

#include "CmdBatch.hpp"
#include <Server.hpp>

static std::mutex mu;

typedef struct {
	boost::json::array array;
	std::recursive_mutex mu;
} info;
std::unordered_map<VkCommandBuffer, info> map;

#define GET_BATCH\
	mu.lock();\
	auto& info = map[commandBuffer];\
	mu.unlock();\
	auto& array = info.array;\
	auto lock = std::unique_lock(info.mu);

void addToCmdBatch(VkCommandBuffer commandBuffer, boost::json::object json){
	GET_BATCH;
	array.push_back(json);
}

bool pushHintCmdBatch(VkCommandBuffer commandBuffer){
	GET_BATCH
	
	 //return array.size() >= 100; //PROFILE: Maybe this should be profiled to find the best value
	return false; //Never push Cmd. Offers the best performance, at the cost of potentially being non-compliant.
	//return true; //Always push Cmd
}

void sendCmdBatch(VkCommandBuffer commandBuffer){
	GET_BATCH

	boost::json::object json;

	json["stream_type"] = CMD_BUFFER_BATCH;

	json["cmds"]=array;
	
	writeToConn(json);

	clearCmdBatch(commandBuffer);
}

void clearCmdBatch(VkCommandBuffer commandBuffer){	
	GET_BATCH
	
	array.clear();
}



