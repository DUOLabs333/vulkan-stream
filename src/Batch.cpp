#include <boost/json.hpp>
#include <mutex>
#include <tuple>

#include "Batch.hpp"
#include "Server.hpp"

std::mutex mu;

typedef struct {
	boost::json::array array;
	std::mutex mu;
} info;
std::unordered_map<VkCommandBuffer, info> map;
std::tuple<boost::json::array&, std::unique_lock<std::mutex>> getBatch(VkCommandBuffer commandBuffer){
	mu.lock();	
	auto& item = map[commandBuffer];
	mu.unlock();

	return std::forward_as_tuple(item.array, std::unique_lock<std::mutex>(item.mu));
}
void addToBatch(VkCommandBuffer commandBuffer, boost::json::object json){

	auto [array, lock ] = getBatch(commandBuffer);

	array.push_back(json);
}

std::size_t lengthOfBatch(VkCommandBuffer commandBuffer){
	auto [array, lock ] = getBatch(commandBuffer);

	return array.size();
}

void sendBatch(VkCommandBuffer commandBuffer){
	auto [array, lock ] = getBatch(commandBuffer);

	boost::json::object json;

	json["stream_type"] = CMD_BUFFER_BATCH;

	json["cmds"]=array;
	
	writeToConn(json);
}

void clearBatch(VkCommandBuffer commandBuffer){	
	auto [array, lock ] = getBatch(commandBuffer);
	array.clear();
}



