#include <boost/json/fwd.hpp>
#include <vulkan/vulkan.h>
void addToBatch(VkCommandBuffer commandBuffer, boost::json::object json);

void addToBatch(VkCommandBuffer commandBuffer, boost::json::object json);

std::size_t lengthOfBatch(VkCommandBuffer commandBuffer);

void sendBatch(VkCommandBuffer commandBuffer);

void clearBatch(VkCommandBuffer commandBuffer);
