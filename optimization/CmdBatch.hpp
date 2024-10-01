#include <boost/json/fwd.hpp>
#include <vulkan/vulkan.h>
void addToCmdBatch(VkCommandBuffer commandBuffer, boost::json::object json);

void addToCmdBatch(VkCommandBuffer commandBuffer, boost::json::object json);

bool pushHintCmdBatch(VkCommandBuffer commandBuffer);

void sendCmdBatch(VkCommandBuffer commandBuffer);

void clearCmdBatch(VkCommandBuffer commandBuffer);
