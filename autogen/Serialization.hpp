#include <vulkan/vulkan.h>

typedef struct StreamStructure{
    VkStructureType sType;
    const void* pNext;
} StreamStructure;

#include <debug.hpp>
typedef void* pNext;
void* memdup(const void* mem, size_t size);
void* copyVkStruct (const void* data);

        yyjson::writer::object serialize_VkBaseOutStructure(VkBaseOutStructure name);
        VkBaseOutStructure deserialize_VkBaseOutStructure(rjson name);
    

        yyjson::writer::object serialize_VkBaseInStructure(VkBaseInStructure name);
        VkBaseInStructure deserialize_VkBaseInStructure(rjson name);
    

        yyjson::writer::object serialize_VkOffset2D(VkOffset2D name);
        VkOffset2D deserialize_VkOffset2D(rjson name);
    

        yyjson::writer::object serialize_VkOffset3D(VkOffset3D name);
        VkOffset3D deserialize_VkOffset3D(rjson name);
    

        yyjson::writer::object serialize_VkExtent2D(VkExtent2D name);
        VkExtent2D deserialize_VkExtent2D(rjson name);
    

        yyjson::writer::object serialize_VkExtent3D(VkExtent3D name);
        VkExtent3D deserialize_VkExtent3D(rjson name);
    

        yyjson::writer::object serialize_VkViewport(VkViewport name);
        VkViewport deserialize_VkViewport(rjson name);
    

        yyjson::writer::object serialize_VkRect2D(VkRect2D name);
        VkRect2D deserialize_VkRect2D(rjson name);
    

        yyjson::writer::object serialize_VkClearRect(VkClearRect name);
        VkClearRect deserialize_VkClearRect(rjson name);
    

        yyjson::writer::object serialize_VkComponentMapping(VkComponentMapping name);
        VkComponentMapping deserialize_VkComponentMapping(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceProperties(VkPhysicalDeviceProperties name);
        VkPhysicalDeviceProperties deserialize_VkPhysicalDeviceProperties(rjson name);
    

        yyjson::writer::object serialize_VkExtensionProperties(VkExtensionProperties name);
        VkExtensionProperties deserialize_VkExtensionProperties(rjson name);
    

        yyjson::writer::object serialize_VkLayerProperties(VkLayerProperties name);
        VkLayerProperties deserialize_VkLayerProperties(rjson name);
    

        yyjson::writer::object serialize_VkApplicationInfo(VkApplicationInfo name);
        VkApplicationInfo deserialize_VkApplicationInfo(rjson name);
    

        yyjson::writer::object serialize_VkAllocationCallbacks(VkAllocationCallbacks name);
        VkAllocationCallbacks deserialize_VkAllocationCallbacks(rjson name);
    

        yyjson::writer::object serialize_VkDeviceQueueCreateInfo(VkDeviceQueueCreateInfo name);
        VkDeviceQueueCreateInfo deserialize_VkDeviceQueueCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkDeviceCreateInfo(VkDeviceCreateInfo name);
        VkDeviceCreateInfo deserialize_VkDeviceCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkInstanceCreateInfo(VkInstanceCreateInfo name);
        VkInstanceCreateInfo deserialize_VkInstanceCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkQueueFamilyProperties(VkQueueFamilyProperties name);
        VkQueueFamilyProperties deserialize_VkQueueFamilyProperties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMemoryProperties(VkPhysicalDeviceMemoryProperties name);
        VkPhysicalDeviceMemoryProperties deserialize_VkPhysicalDeviceMemoryProperties(rjson name);
    

        yyjson::writer::object serialize_VkMemoryAllocateInfo(VkMemoryAllocateInfo name);
        VkMemoryAllocateInfo deserialize_VkMemoryAllocateInfo(rjson name);
    

        yyjson::writer::object serialize_VkMemoryRequirements(VkMemoryRequirements name);
        VkMemoryRequirements deserialize_VkMemoryRequirements(rjson name);
    

        yyjson::writer::object serialize_VkSparseImageFormatProperties(VkSparseImageFormatProperties name);
        VkSparseImageFormatProperties deserialize_VkSparseImageFormatProperties(rjson name);
    

        yyjson::writer::object serialize_VkSparseImageMemoryRequirements(VkSparseImageMemoryRequirements name);
        VkSparseImageMemoryRequirements deserialize_VkSparseImageMemoryRequirements(rjson name);
    

        yyjson::writer::object serialize_VkMemoryType(VkMemoryType name);
        VkMemoryType deserialize_VkMemoryType(rjson name);
    

        yyjson::writer::object serialize_VkMemoryHeap(VkMemoryHeap name);
        VkMemoryHeap deserialize_VkMemoryHeap(rjson name);
    

        yyjson::writer::object serialize_VkMappedMemoryRange(VkMappedMemoryRange name);
        VkMappedMemoryRange deserialize_VkMappedMemoryRange(rjson name);
    

        yyjson::writer::object serialize_VkFormatProperties(VkFormatProperties name);
        VkFormatProperties deserialize_VkFormatProperties(rjson name);
    

        yyjson::writer::object serialize_VkImageFormatProperties(VkImageFormatProperties name);
        VkImageFormatProperties deserialize_VkImageFormatProperties(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorBufferInfo(VkDescriptorBufferInfo name);
        VkDescriptorBufferInfo deserialize_VkDescriptorBufferInfo(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorImageInfo(VkDescriptorImageInfo name);
        VkDescriptorImageInfo deserialize_VkDescriptorImageInfo(rjson name);
    

        yyjson::writer::object serialize_VkWriteDescriptorSet(VkWriteDescriptorSet name);
        VkWriteDescriptorSet deserialize_VkWriteDescriptorSet(rjson name);
    

        yyjson::writer::object serialize_VkCopyDescriptorSet(VkCopyDescriptorSet name);
        VkCopyDescriptorSet deserialize_VkCopyDescriptorSet(rjson name);
    

        yyjson::writer::object serialize_VkBufferUsageFlags2CreateInfoKHR(VkBufferUsageFlags2CreateInfoKHR name);
        VkBufferUsageFlags2CreateInfoKHR deserialize_VkBufferUsageFlags2CreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkBufferCreateInfo(VkBufferCreateInfo name);
        VkBufferCreateInfo deserialize_VkBufferCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkBufferViewCreateInfo(VkBufferViewCreateInfo name);
        VkBufferViewCreateInfo deserialize_VkBufferViewCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkImageSubresource(VkImageSubresource name);
        VkImageSubresource deserialize_VkImageSubresource(rjson name);
    

        yyjson::writer::object serialize_VkImageSubresourceLayers(VkImageSubresourceLayers name);
        VkImageSubresourceLayers deserialize_VkImageSubresourceLayers(rjson name);
    

        yyjson::writer::object serialize_VkImageSubresourceRange(VkImageSubresourceRange name);
        VkImageSubresourceRange deserialize_VkImageSubresourceRange(rjson name);
    

        yyjson::writer::object serialize_VkMemoryBarrier(VkMemoryBarrier name);
        VkMemoryBarrier deserialize_VkMemoryBarrier(rjson name);
    

        yyjson::writer::object serialize_VkBufferMemoryBarrier(VkBufferMemoryBarrier name);
        VkBufferMemoryBarrier deserialize_VkBufferMemoryBarrier(rjson name);
    

        yyjson::writer::object serialize_VkImageMemoryBarrier(VkImageMemoryBarrier name);
        VkImageMemoryBarrier deserialize_VkImageMemoryBarrier(rjson name);
    

        yyjson::writer::object serialize_VkImageCreateInfo(VkImageCreateInfo name);
        VkImageCreateInfo deserialize_VkImageCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkSubresourceLayout(VkSubresourceLayout name);
        VkSubresourceLayout deserialize_VkSubresourceLayout(rjson name);
    

        yyjson::writer::object serialize_VkImageViewCreateInfo(VkImageViewCreateInfo name);
        VkImageViewCreateInfo deserialize_VkImageViewCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkBufferCopy(VkBufferCopy name);
        VkBufferCopy deserialize_VkBufferCopy(rjson name);
    

        yyjson::writer::object serialize_VkSparseMemoryBind(VkSparseMemoryBind name);
        VkSparseMemoryBind deserialize_VkSparseMemoryBind(rjson name);
    

        yyjson::writer::object serialize_VkSparseImageMemoryBind(VkSparseImageMemoryBind name);
        VkSparseImageMemoryBind deserialize_VkSparseImageMemoryBind(rjson name);
    

        yyjson::writer::object serialize_VkSparseBufferMemoryBindInfo(VkSparseBufferMemoryBindInfo name);
        VkSparseBufferMemoryBindInfo deserialize_VkSparseBufferMemoryBindInfo(rjson name);
    

        yyjson::writer::object serialize_VkSparseImageOpaqueMemoryBindInfo(VkSparseImageOpaqueMemoryBindInfo name);
        VkSparseImageOpaqueMemoryBindInfo deserialize_VkSparseImageOpaqueMemoryBindInfo(rjson name);
    

        yyjson::writer::object serialize_VkSparseImageMemoryBindInfo(VkSparseImageMemoryBindInfo name);
        VkSparseImageMemoryBindInfo deserialize_VkSparseImageMemoryBindInfo(rjson name);
    

        yyjson::writer::object serialize_VkBindSparseInfo(VkBindSparseInfo name);
        VkBindSparseInfo deserialize_VkBindSparseInfo(rjson name);
    

        yyjson::writer::object serialize_VkImageCopy(VkImageCopy name);
        VkImageCopy deserialize_VkImageCopy(rjson name);
    

        yyjson::writer::object serialize_VkImageBlit(VkImageBlit name);
        VkImageBlit deserialize_VkImageBlit(rjson name);
    

        yyjson::writer::object serialize_VkBufferImageCopy(VkBufferImageCopy name);
        VkBufferImageCopy deserialize_VkBufferImageCopy(rjson name);
    

        yyjson::writer::object serialize_VkCopyMemoryIndirectCommandNV(VkCopyMemoryIndirectCommandNV name);
        VkCopyMemoryIndirectCommandNV deserialize_VkCopyMemoryIndirectCommandNV(rjson name);
    

        yyjson::writer::object serialize_VkCopyMemoryToImageIndirectCommandNV(VkCopyMemoryToImageIndirectCommandNV name);
        VkCopyMemoryToImageIndirectCommandNV deserialize_VkCopyMemoryToImageIndirectCommandNV(rjson name);
    

        yyjson::writer::object serialize_VkImageResolve(VkImageResolve name);
        VkImageResolve deserialize_VkImageResolve(rjson name);
    

        yyjson::writer::object serialize_VkShaderModuleCreateInfo(VkShaderModuleCreateInfo name);
        VkShaderModuleCreateInfo deserialize_VkShaderModuleCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorSetLayoutBinding(VkDescriptorSetLayoutBinding name);
        VkDescriptorSetLayoutBinding deserialize_VkDescriptorSetLayoutBinding(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorSetLayoutCreateInfo(VkDescriptorSetLayoutCreateInfo name);
        VkDescriptorSetLayoutCreateInfo deserialize_VkDescriptorSetLayoutCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorPoolSize(VkDescriptorPoolSize name);
        VkDescriptorPoolSize deserialize_VkDescriptorPoolSize(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorPoolCreateInfo(VkDescriptorPoolCreateInfo name);
        VkDescriptorPoolCreateInfo deserialize_VkDescriptorPoolCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorSetAllocateInfo(VkDescriptorSetAllocateInfo name);
        VkDescriptorSetAllocateInfo deserialize_VkDescriptorSetAllocateInfo(rjson name);
    

        yyjson::writer::object serialize_VkSpecializationMapEntry(VkSpecializationMapEntry name);
        VkSpecializationMapEntry deserialize_VkSpecializationMapEntry(rjson name);
    

        yyjson::writer::object serialize_VkSpecializationInfo(VkSpecializationInfo name);
        VkSpecializationInfo deserialize_VkSpecializationInfo(rjson name);
    

        yyjson::writer::object serialize_VkPipelineShaderStageCreateInfo(VkPipelineShaderStageCreateInfo name);
        VkPipelineShaderStageCreateInfo deserialize_VkPipelineShaderStageCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkComputePipelineCreateInfo(VkComputePipelineCreateInfo name);
        VkComputePipelineCreateInfo deserialize_VkComputePipelineCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkComputePipelineIndirectBufferInfoNV(VkComputePipelineIndirectBufferInfoNV name);
        VkComputePipelineIndirectBufferInfoNV deserialize_VkComputePipelineIndirectBufferInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCreateFlags2CreateInfoKHR(VkPipelineCreateFlags2CreateInfoKHR name);
        VkPipelineCreateFlags2CreateInfoKHR deserialize_VkPipelineCreateFlags2CreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVertexInputBindingDescription(VkVertexInputBindingDescription name);
        VkVertexInputBindingDescription deserialize_VkVertexInputBindingDescription(rjson name);
    

        yyjson::writer::object serialize_VkVertexInputAttributeDescription(VkVertexInputAttributeDescription name);
        VkVertexInputAttributeDescription deserialize_VkVertexInputAttributeDescription(rjson name);
    

        yyjson::writer::object serialize_VkPipelineVertexInputStateCreateInfo(VkPipelineVertexInputStateCreateInfo name);
        VkPipelineVertexInputStateCreateInfo deserialize_VkPipelineVertexInputStateCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkPipelineInputAssemblyStateCreateInfo(VkPipelineInputAssemblyStateCreateInfo name);
        VkPipelineInputAssemblyStateCreateInfo deserialize_VkPipelineInputAssemblyStateCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkPipelineTessellationStateCreateInfo(VkPipelineTessellationStateCreateInfo name);
        VkPipelineTessellationStateCreateInfo deserialize_VkPipelineTessellationStateCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkPipelineViewportStateCreateInfo(VkPipelineViewportStateCreateInfo name);
        VkPipelineViewportStateCreateInfo deserialize_VkPipelineViewportStateCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkPipelineRasterizationStateCreateInfo(VkPipelineRasterizationStateCreateInfo name);
        VkPipelineRasterizationStateCreateInfo deserialize_VkPipelineRasterizationStateCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkPipelineMultisampleStateCreateInfo(VkPipelineMultisampleStateCreateInfo name);
        VkPipelineMultisampleStateCreateInfo deserialize_VkPipelineMultisampleStateCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkPipelineColorBlendAttachmentState(VkPipelineColorBlendAttachmentState name);
        VkPipelineColorBlendAttachmentState deserialize_VkPipelineColorBlendAttachmentState(rjson name);
    

        yyjson::writer::object serialize_VkPipelineColorBlendStateCreateInfo(VkPipelineColorBlendStateCreateInfo name);
        VkPipelineColorBlendStateCreateInfo deserialize_VkPipelineColorBlendStateCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkPipelineDynamicStateCreateInfo(VkPipelineDynamicStateCreateInfo name);
        VkPipelineDynamicStateCreateInfo deserialize_VkPipelineDynamicStateCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkStencilOpState(VkStencilOpState name);
        VkStencilOpState deserialize_VkStencilOpState(rjson name);
    

        yyjson::writer::object serialize_VkPipelineDepthStencilStateCreateInfo(VkPipelineDepthStencilStateCreateInfo name);
        VkPipelineDepthStencilStateCreateInfo deserialize_VkPipelineDepthStencilStateCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkGraphicsPipelineCreateInfo(VkGraphicsPipelineCreateInfo name);
        VkGraphicsPipelineCreateInfo deserialize_VkGraphicsPipelineCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCacheCreateInfo(VkPipelineCacheCreateInfo name);
        VkPipelineCacheCreateInfo deserialize_VkPipelineCacheCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCacheHeaderVersionOne(VkPipelineCacheHeaderVersionOne name);
        VkPipelineCacheHeaderVersionOne deserialize_VkPipelineCacheHeaderVersionOne(rjson name);
    

        yyjson::writer::object serialize_VkPushConstantRange(VkPushConstantRange name);
        VkPushConstantRange deserialize_VkPushConstantRange(rjson name);
    

        yyjson::writer::object serialize_VkPipelineLayoutCreateInfo(VkPipelineLayoutCreateInfo name);
        VkPipelineLayoutCreateInfo deserialize_VkPipelineLayoutCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkSamplerCreateInfo(VkSamplerCreateInfo name);
        VkSamplerCreateInfo deserialize_VkSamplerCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkCommandPoolCreateInfo(VkCommandPoolCreateInfo name);
        VkCommandPoolCreateInfo deserialize_VkCommandPoolCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkCommandBufferAllocateInfo(VkCommandBufferAllocateInfo name);
        VkCommandBufferAllocateInfo deserialize_VkCommandBufferAllocateInfo(rjson name);
    

        yyjson::writer::object serialize_VkCommandBufferInheritanceInfo(VkCommandBufferInheritanceInfo name);
        VkCommandBufferInheritanceInfo deserialize_VkCommandBufferInheritanceInfo(rjson name);
    

        yyjson::writer::object serialize_VkCommandBufferBeginInfo(VkCommandBufferBeginInfo name);
        VkCommandBufferBeginInfo deserialize_VkCommandBufferBeginInfo(rjson name);
    

        yyjson::writer::object serialize_VkRenderPassBeginInfo(VkRenderPassBeginInfo name);
        VkRenderPassBeginInfo deserialize_VkRenderPassBeginInfo(rjson name);
    

        yyjson::writer::object serialize_VkClearColorValue(VkClearColorValue name);
        VkClearColorValue deserialize_VkClearColorValue(rjson name);
    

        yyjson::writer::object serialize_VkClearDepthStencilValue(VkClearDepthStencilValue name);
        VkClearDepthStencilValue deserialize_VkClearDepthStencilValue(rjson name);
    

        yyjson::writer::object serialize_VkClearValue(VkClearValue name);
        VkClearValue deserialize_VkClearValue(rjson name);
    

        yyjson::writer::object serialize_VkClearAttachment(VkClearAttachment name);
        VkClearAttachment deserialize_VkClearAttachment(rjson name);
    

        yyjson::writer::object serialize_VkAttachmentDescription(VkAttachmentDescription name);
        VkAttachmentDescription deserialize_VkAttachmentDescription(rjson name);
    

        yyjson::writer::object serialize_VkAttachmentReference(VkAttachmentReference name);
        VkAttachmentReference deserialize_VkAttachmentReference(rjson name);
    

        yyjson::writer::object serialize_VkSubpassDescription(VkSubpassDescription name);
        VkSubpassDescription deserialize_VkSubpassDescription(rjson name);
    

        yyjson::writer::object serialize_VkSubpassDependency(VkSubpassDependency name);
        VkSubpassDependency deserialize_VkSubpassDependency(rjson name);
    

        yyjson::writer::object serialize_VkRenderPassCreateInfo(VkRenderPassCreateInfo name);
        VkRenderPassCreateInfo deserialize_VkRenderPassCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkEventCreateInfo(VkEventCreateInfo name);
        VkEventCreateInfo deserialize_VkEventCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkFenceCreateInfo(VkFenceCreateInfo name);
        VkFenceCreateInfo deserialize_VkFenceCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFeatures(VkPhysicalDeviceFeatures name);
        VkPhysicalDeviceFeatures deserialize_VkPhysicalDeviceFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSparseProperties(VkPhysicalDeviceSparseProperties name);
        VkPhysicalDeviceSparseProperties deserialize_VkPhysicalDeviceSparseProperties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceLimits(VkPhysicalDeviceLimits name);
        VkPhysicalDeviceLimits deserialize_VkPhysicalDeviceLimits(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreCreateInfo(VkSemaphoreCreateInfo name);
        VkSemaphoreCreateInfo deserialize_VkSemaphoreCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkQueryPoolCreateInfo(VkQueryPoolCreateInfo name);
        VkQueryPoolCreateInfo deserialize_VkQueryPoolCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkFramebufferCreateInfo(VkFramebufferCreateInfo name);
        VkFramebufferCreateInfo deserialize_VkFramebufferCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkDrawIndirectCommand(VkDrawIndirectCommand name);
        VkDrawIndirectCommand deserialize_VkDrawIndirectCommand(rjson name);
    

        yyjson::writer::object serialize_VkDrawIndexedIndirectCommand(VkDrawIndexedIndirectCommand name);
        VkDrawIndexedIndirectCommand deserialize_VkDrawIndexedIndirectCommand(rjson name);
    

        yyjson::writer::object serialize_VkDispatchIndirectCommand(VkDispatchIndirectCommand name);
        VkDispatchIndirectCommand deserialize_VkDispatchIndirectCommand(rjson name);
    

        yyjson::writer::object serialize_VkMultiDrawInfoEXT(VkMultiDrawInfoEXT name);
        VkMultiDrawInfoEXT deserialize_VkMultiDrawInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkMultiDrawIndexedInfoEXT(VkMultiDrawIndexedInfoEXT name);
        VkMultiDrawIndexedInfoEXT deserialize_VkMultiDrawIndexedInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkSubmitInfo(VkSubmitInfo name);
        VkSubmitInfo deserialize_VkSubmitInfo(rjson name);
    

        yyjson::writer::object serialize_VkDisplayPropertiesKHR(VkDisplayPropertiesKHR name);
        VkDisplayPropertiesKHR deserialize_VkDisplayPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkDisplayPlanePropertiesKHR(VkDisplayPlanePropertiesKHR name);
        VkDisplayPlanePropertiesKHR deserialize_VkDisplayPlanePropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkDisplayModeParametersKHR(VkDisplayModeParametersKHR name);
        VkDisplayModeParametersKHR deserialize_VkDisplayModeParametersKHR(rjson name);
    

        yyjson::writer::object serialize_VkDisplayModePropertiesKHR(VkDisplayModePropertiesKHR name);
        VkDisplayModePropertiesKHR deserialize_VkDisplayModePropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkDisplayModeCreateInfoKHR(VkDisplayModeCreateInfoKHR name);
        VkDisplayModeCreateInfoKHR deserialize_VkDisplayModeCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkDisplayPlaneCapabilitiesKHR(VkDisplayPlaneCapabilitiesKHR name);
        VkDisplayPlaneCapabilitiesKHR deserialize_VkDisplayPlaneCapabilitiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkDisplaySurfaceCreateInfoKHR(VkDisplaySurfaceCreateInfoKHR name);
        VkDisplaySurfaceCreateInfoKHR deserialize_VkDisplaySurfaceCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkDisplayPresentInfoKHR(VkDisplayPresentInfoKHR name);
        VkDisplayPresentInfoKHR deserialize_VkDisplayPresentInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkSurfaceCapabilitiesKHR(VkSurfaceCapabilitiesKHR name);
        VkSurfaceCapabilitiesKHR deserialize_VkSurfaceCapabilitiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkXlibSurfaceCreateInfoKHR(VkXlibSurfaceCreateInfoKHR name);
        VkXlibSurfaceCreateInfoKHR deserialize_VkXlibSurfaceCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkXcbSurfaceCreateInfoKHR(VkXcbSurfaceCreateInfoKHR name);
        VkXcbSurfaceCreateInfoKHR deserialize_VkXcbSurfaceCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkSurfaceFormatKHR(VkSurfaceFormatKHR name);
        VkSurfaceFormatKHR deserialize_VkSurfaceFormatKHR(rjson name);
    

        yyjson::writer::object serialize_VkSwapchainCreateInfoKHR(VkSwapchainCreateInfoKHR name);
        VkSwapchainCreateInfoKHR deserialize_VkSwapchainCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPresentInfoKHR(VkPresentInfoKHR name);
        VkPresentInfoKHR deserialize_VkPresentInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkDebugReportCallbackCreateInfoEXT(VkDebugReportCallbackCreateInfoEXT name);
        VkDebugReportCallbackCreateInfoEXT deserialize_VkDebugReportCallbackCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkValidationFlagsEXT(VkValidationFlagsEXT name);
        VkValidationFlagsEXT deserialize_VkValidationFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkValidationFeaturesEXT(VkValidationFeaturesEXT name);
        VkValidationFeaturesEXT deserialize_VkValidationFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineRasterizationStateRasterizationOrderAMD(VkPipelineRasterizationStateRasterizationOrderAMD name);
        VkPipelineRasterizationStateRasterizationOrderAMD deserialize_VkPipelineRasterizationStateRasterizationOrderAMD(rjson name);
    

        yyjson::writer::object serialize_VkDebugMarkerObjectNameInfoEXT(VkDebugMarkerObjectNameInfoEXT name);
        VkDebugMarkerObjectNameInfoEXT deserialize_VkDebugMarkerObjectNameInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkDebugMarkerObjectTagInfoEXT(VkDebugMarkerObjectTagInfoEXT name);
        VkDebugMarkerObjectTagInfoEXT deserialize_VkDebugMarkerObjectTagInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkDebugMarkerMarkerInfoEXT(VkDebugMarkerMarkerInfoEXT name);
        VkDebugMarkerMarkerInfoEXT deserialize_VkDebugMarkerMarkerInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkDedicatedAllocationImageCreateInfoNV(VkDedicatedAllocationImageCreateInfoNV name);
        VkDedicatedAllocationImageCreateInfoNV deserialize_VkDedicatedAllocationImageCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkDedicatedAllocationBufferCreateInfoNV(VkDedicatedAllocationBufferCreateInfoNV name);
        VkDedicatedAllocationBufferCreateInfoNV deserialize_VkDedicatedAllocationBufferCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkDedicatedAllocationMemoryAllocateInfoNV(VkDedicatedAllocationMemoryAllocateInfoNV name);
        VkDedicatedAllocationMemoryAllocateInfoNV deserialize_VkDedicatedAllocationMemoryAllocateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkExternalImageFormatPropertiesNV(VkExternalImageFormatPropertiesNV name);
        VkExternalImageFormatPropertiesNV deserialize_VkExternalImageFormatPropertiesNV(rjson name);
    

        yyjson::writer::object serialize_VkExternalMemoryImageCreateInfoNV(VkExternalMemoryImageCreateInfoNV name);
        VkExternalMemoryImageCreateInfoNV deserialize_VkExternalMemoryImageCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkExportMemoryAllocateInfoNV(VkExportMemoryAllocateInfoNV name);
        VkExportMemoryAllocateInfoNV deserialize_VkExportMemoryAllocateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV name);
        VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV deserialize_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV name);
        VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV deserialize_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkDevicePrivateDataCreateInfo(VkDevicePrivateDataCreateInfo name);
        VkDevicePrivateDataCreateInfo deserialize_VkDevicePrivateDataCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkDevicePrivateDataCreateInfoEXT(VkDevicePrivateDataCreateInfoEXT name);
        VkDevicePrivateDataCreateInfoEXT deserialize_VkDevicePrivateDataCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPrivateDataSlotCreateInfo(VkPrivateDataSlotCreateInfo name);
        VkPrivateDataSlotCreateInfo deserialize_VkPrivateDataSlotCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkPrivateDataSlotCreateInfoEXT(VkPrivateDataSlotCreateInfoEXT name);
        VkPrivateDataSlotCreateInfoEXT deserialize_VkPrivateDataSlotCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePrivateDataFeatures(VkPhysicalDevicePrivateDataFeatures name);
        VkPhysicalDevicePrivateDataFeatures deserialize_VkPhysicalDevicePrivateDataFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePrivateDataFeaturesEXT(VkPhysicalDevicePrivateDataFeaturesEXT name);
        VkPhysicalDevicePrivateDataFeaturesEXT deserialize_VkPhysicalDevicePrivateDataFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV(VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV name);
        VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV deserialize_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMultiDrawPropertiesEXT(VkPhysicalDeviceMultiDrawPropertiesEXT name);
        VkPhysicalDeviceMultiDrawPropertiesEXT deserialize_VkPhysicalDeviceMultiDrawPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkGraphicsShaderGroupCreateInfoNV(VkGraphicsShaderGroupCreateInfoNV name);
        VkGraphicsShaderGroupCreateInfoNV deserialize_VkGraphicsShaderGroupCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkGraphicsPipelineShaderGroupsCreateInfoNV(VkGraphicsPipelineShaderGroupsCreateInfoNV name);
        VkGraphicsPipelineShaderGroupsCreateInfoNV deserialize_VkGraphicsPipelineShaderGroupsCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkBindShaderGroupIndirectCommandNV(VkBindShaderGroupIndirectCommandNV name);
        VkBindShaderGroupIndirectCommandNV deserialize_VkBindShaderGroupIndirectCommandNV(rjson name);
    

        yyjson::writer::object serialize_VkBindIndexBufferIndirectCommandNV(VkBindIndexBufferIndirectCommandNV name);
        VkBindIndexBufferIndirectCommandNV deserialize_VkBindIndexBufferIndirectCommandNV(rjson name);
    

        yyjson::writer::object serialize_VkBindVertexBufferIndirectCommandNV(VkBindVertexBufferIndirectCommandNV name);
        VkBindVertexBufferIndirectCommandNV deserialize_VkBindVertexBufferIndirectCommandNV(rjson name);
    

        yyjson::writer::object serialize_VkSetStateFlagsIndirectCommandNV(VkSetStateFlagsIndirectCommandNV name);
        VkSetStateFlagsIndirectCommandNV deserialize_VkSetStateFlagsIndirectCommandNV(rjson name);
    

        yyjson::writer::object serialize_VkIndirectCommandsStreamNV(VkIndirectCommandsStreamNV name);
        VkIndirectCommandsStreamNV deserialize_VkIndirectCommandsStreamNV(rjson name);
    

        yyjson::writer::object serialize_VkIndirectCommandsLayoutTokenNV(VkIndirectCommandsLayoutTokenNV name);
        VkIndirectCommandsLayoutTokenNV deserialize_VkIndirectCommandsLayoutTokenNV(rjson name);
    

        yyjson::writer::object serialize_VkIndirectCommandsLayoutCreateInfoNV(VkIndirectCommandsLayoutCreateInfoNV name);
        VkIndirectCommandsLayoutCreateInfoNV deserialize_VkIndirectCommandsLayoutCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkGeneratedCommandsInfoNV(VkGeneratedCommandsInfoNV name);
        VkGeneratedCommandsInfoNV deserialize_VkGeneratedCommandsInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkGeneratedCommandsMemoryRequirementsInfoNV(VkGeneratedCommandsMemoryRequirementsInfoNV name);
        VkGeneratedCommandsMemoryRequirementsInfoNV deserialize_VkGeneratedCommandsMemoryRequirementsInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkPipelineIndirectDeviceAddressInfoNV(VkPipelineIndirectDeviceAddressInfoNV name);
        VkPipelineIndirectDeviceAddressInfoNV deserialize_VkPipelineIndirectDeviceAddressInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkBindPipelineIndirectCommandNV(VkBindPipelineIndirectCommandNV name);
        VkBindPipelineIndirectCommandNV deserialize_VkBindPipelineIndirectCommandNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFeatures2(VkPhysicalDeviceFeatures2 name);
        VkPhysicalDeviceFeatures2 deserialize_VkPhysicalDeviceFeatures2(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFeatures2KHR(VkPhysicalDeviceFeatures2KHR name);
        VkPhysicalDeviceFeatures2KHR deserialize_VkPhysicalDeviceFeatures2KHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceProperties2(VkPhysicalDeviceProperties2 name);
        VkPhysicalDeviceProperties2 deserialize_VkPhysicalDeviceProperties2(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceProperties2KHR(VkPhysicalDeviceProperties2KHR name);
        VkPhysicalDeviceProperties2KHR deserialize_VkPhysicalDeviceProperties2KHR(rjson name);
    

        yyjson::writer::object serialize_VkFormatProperties2(VkFormatProperties2 name);
        VkFormatProperties2 deserialize_VkFormatProperties2(rjson name);
    

        yyjson::writer::object serialize_VkFormatProperties2KHR(VkFormatProperties2KHR name);
        VkFormatProperties2KHR deserialize_VkFormatProperties2KHR(rjson name);
    

        yyjson::writer::object serialize_VkImageFormatProperties2(VkImageFormatProperties2 name);
        VkImageFormatProperties2 deserialize_VkImageFormatProperties2(rjson name);
    

        yyjson::writer::object serialize_VkImageFormatProperties2KHR(VkImageFormatProperties2KHR name);
        VkImageFormatProperties2KHR deserialize_VkImageFormatProperties2KHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceImageFormatInfo2(VkPhysicalDeviceImageFormatInfo2 name);
        VkPhysicalDeviceImageFormatInfo2 deserialize_VkPhysicalDeviceImageFormatInfo2(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceImageFormatInfo2KHR(VkPhysicalDeviceImageFormatInfo2KHR name);
        VkPhysicalDeviceImageFormatInfo2KHR deserialize_VkPhysicalDeviceImageFormatInfo2KHR(rjson name);
    

        yyjson::writer::object serialize_VkQueueFamilyProperties2(VkQueueFamilyProperties2 name);
        VkQueueFamilyProperties2 deserialize_VkQueueFamilyProperties2(rjson name);
    

        yyjson::writer::object serialize_VkQueueFamilyProperties2KHR(VkQueueFamilyProperties2KHR name);
        VkQueueFamilyProperties2KHR deserialize_VkQueueFamilyProperties2KHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMemoryProperties2(VkPhysicalDeviceMemoryProperties2 name);
        VkPhysicalDeviceMemoryProperties2 deserialize_VkPhysicalDeviceMemoryProperties2(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMemoryProperties2KHR(VkPhysicalDeviceMemoryProperties2KHR name);
        VkPhysicalDeviceMemoryProperties2KHR deserialize_VkPhysicalDeviceMemoryProperties2KHR(rjson name);
    

        yyjson::writer::object serialize_VkSparseImageFormatProperties2(VkSparseImageFormatProperties2 name);
        VkSparseImageFormatProperties2 deserialize_VkSparseImageFormatProperties2(rjson name);
    

        yyjson::writer::object serialize_VkSparseImageFormatProperties2KHR(VkSparseImageFormatProperties2KHR name);
        VkSparseImageFormatProperties2KHR deserialize_VkSparseImageFormatProperties2KHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSparseImageFormatInfo2(VkPhysicalDeviceSparseImageFormatInfo2 name);
        VkPhysicalDeviceSparseImageFormatInfo2 deserialize_VkPhysicalDeviceSparseImageFormatInfo2(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSparseImageFormatInfo2KHR(VkPhysicalDeviceSparseImageFormatInfo2KHR name);
        VkPhysicalDeviceSparseImageFormatInfo2KHR deserialize_VkPhysicalDeviceSparseImageFormatInfo2KHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePushDescriptorPropertiesKHR(VkPhysicalDevicePushDescriptorPropertiesKHR name);
        VkPhysicalDevicePushDescriptorPropertiesKHR deserialize_VkPhysicalDevicePushDescriptorPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkConformanceVersion(VkConformanceVersion name);
        VkConformanceVersion deserialize_VkConformanceVersion(rjson name);
    

        yyjson::writer::object serialize_VkConformanceVersionKHR(VkConformanceVersionKHR name);
        VkConformanceVersionKHR deserialize_VkConformanceVersionKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDriverProperties(VkPhysicalDeviceDriverProperties name);
        VkPhysicalDeviceDriverProperties deserialize_VkPhysicalDeviceDriverProperties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDriverPropertiesKHR(VkPhysicalDeviceDriverPropertiesKHR name);
        VkPhysicalDeviceDriverPropertiesKHR deserialize_VkPhysicalDeviceDriverPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPresentRegionsKHR(VkPresentRegionsKHR name);
        VkPresentRegionsKHR deserialize_VkPresentRegionsKHR(rjson name);
    

        yyjson::writer::object serialize_VkPresentRegionKHR(VkPresentRegionKHR name);
        VkPresentRegionKHR deserialize_VkPresentRegionKHR(rjson name);
    

        yyjson::writer::object serialize_VkRectLayerKHR(VkRectLayerKHR name);
        VkRectLayerKHR deserialize_VkRectLayerKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceVariablePointersFeatures(VkPhysicalDeviceVariablePointersFeatures name);
        VkPhysicalDeviceVariablePointersFeatures deserialize_VkPhysicalDeviceVariablePointersFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceVariablePointersFeaturesKHR(VkPhysicalDeviceVariablePointersFeaturesKHR name);
        VkPhysicalDeviceVariablePointersFeaturesKHR deserialize_VkPhysicalDeviceVariablePointersFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceVariablePointerFeaturesKHR(VkPhysicalDeviceVariablePointerFeaturesKHR name);
        VkPhysicalDeviceVariablePointerFeaturesKHR deserialize_VkPhysicalDeviceVariablePointerFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceVariablePointerFeatures(VkPhysicalDeviceVariablePointerFeatures name);
        VkPhysicalDeviceVariablePointerFeatures deserialize_VkPhysicalDeviceVariablePointerFeatures(rjson name);
    

        yyjson::writer::object serialize_VkExternalMemoryProperties(VkExternalMemoryProperties name);
        VkExternalMemoryProperties deserialize_VkExternalMemoryProperties(rjson name);
    

        yyjson::writer::object serialize_VkExternalMemoryPropertiesKHR(VkExternalMemoryPropertiesKHR name);
        VkExternalMemoryPropertiesKHR deserialize_VkExternalMemoryPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceExternalImageFormatInfo(VkPhysicalDeviceExternalImageFormatInfo name);
        VkPhysicalDeviceExternalImageFormatInfo deserialize_VkPhysicalDeviceExternalImageFormatInfo(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceExternalImageFormatInfoKHR(VkPhysicalDeviceExternalImageFormatInfoKHR name);
        VkPhysicalDeviceExternalImageFormatInfoKHR deserialize_VkPhysicalDeviceExternalImageFormatInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkExternalImageFormatProperties(VkExternalImageFormatProperties name);
        VkExternalImageFormatProperties deserialize_VkExternalImageFormatProperties(rjson name);
    

        yyjson::writer::object serialize_VkExternalImageFormatPropertiesKHR(VkExternalImageFormatPropertiesKHR name);
        VkExternalImageFormatPropertiesKHR deserialize_VkExternalImageFormatPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceExternalBufferInfo(VkPhysicalDeviceExternalBufferInfo name);
        VkPhysicalDeviceExternalBufferInfo deserialize_VkPhysicalDeviceExternalBufferInfo(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceExternalBufferInfoKHR(VkPhysicalDeviceExternalBufferInfoKHR name);
        VkPhysicalDeviceExternalBufferInfoKHR deserialize_VkPhysicalDeviceExternalBufferInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkExternalBufferProperties(VkExternalBufferProperties name);
        VkExternalBufferProperties deserialize_VkExternalBufferProperties(rjson name);
    

        yyjson::writer::object serialize_VkExternalBufferPropertiesKHR(VkExternalBufferPropertiesKHR name);
        VkExternalBufferPropertiesKHR deserialize_VkExternalBufferPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceIDProperties(VkPhysicalDeviceIDProperties name);
        VkPhysicalDeviceIDProperties deserialize_VkPhysicalDeviceIDProperties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceIDPropertiesKHR(VkPhysicalDeviceIDPropertiesKHR name);
        VkPhysicalDeviceIDPropertiesKHR deserialize_VkPhysicalDeviceIDPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkExternalMemoryImageCreateInfo(VkExternalMemoryImageCreateInfo name);
        VkExternalMemoryImageCreateInfo deserialize_VkExternalMemoryImageCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkExternalMemoryImageCreateInfoKHR(VkExternalMemoryImageCreateInfoKHR name);
        VkExternalMemoryImageCreateInfoKHR deserialize_VkExternalMemoryImageCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkExternalMemoryBufferCreateInfo(VkExternalMemoryBufferCreateInfo name);
        VkExternalMemoryBufferCreateInfo deserialize_VkExternalMemoryBufferCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkExternalMemoryBufferCreateInfoKHR(VkExternalMemoryBufferCreateInfoKHR name);
        VkExternalMemoryBufferCreateInfoKHR deserialize_VkExternalMemoryBufferCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkExportMemoryAllocateInfo(VkExportMemoryAllocateInfo name);
        VkExportMemoryAllocateInfo deserialize_VkExportMemoryAllocateInfo(rjson name);
    

        yyjson::writer::object serialize_VkExportMemoryAllocateInfoKHR(VkExportMemoryAllocateInfoKHR name);
        VkExportMemoryAllocateInfoKHR deserialize_VkExportMemoryAllocateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkImportMemoryFdInfoKHR(VkImportMemoryFdInfoKHR name);
        VkImportMemoryFdInfoKHR deserialize_VkImportMemoryFdInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkMemoryFdPropertiesKHR(VkMemoryFdPropertiesKHR name);
        VkMemoryFdPropertiesKHR deserialize_VkMemoryFdPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkMemoryGetFdInfoKHR(VkMemoryGetFdInfoKHR name);
        VkMemoryGetFdInfoKHR deserialize_VkMemoryGetFdInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceExternalSemaphoreInfo(VkPhysicalDeviceExternalSemaphoreInfo name);
        VkPhysicalDeviceExternalSemaphoreInfo deserialize_VkPhysicalDeviceExternalSemaphoreInfo(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceExternalSemaphoreInfoKHR(VkPhysicalDeviceExternalSemaphoreInfoKHR name);
        VkPhysicalDeviceExternalSemaphoreInfoKHR deserialize_VkPhysicalDeviceExternalSemaphoreInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkExternalSemaphoreProperties(VkExternalSemaphoreProperties name);
        VkExternalSemaphoreProperties deserialize_VkExternalSemaphoreProperties(rjson name);
    

        yyjson::writer::object serialize_VkExternalSemaphorePropertiesKHR(VkExternalSemaphorePropertiesKHR name);
        VkExternalSemaphorePropertiesKHR deserialize_VkExternalSemaphorePropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkExportSemaphoreCreateInfo(VkExportSemaphoreCreateInfo name);
        VkExportSemaphoreCreateInfo deserialize_VkExportSemaphoreCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkExportSemaphoreCreateInfoKHR(VkExportSemaphoreCreateInfoKHR name);
        VkExportSemaphoreCreateInfoKHR deserialize_VkExportSemaphoreCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkImportSemaphoreFdInfoKHR(VkImportSemaphoreFdInfoKHR name);
        VkImportSemaphoreFdInfoKHR deserialize_VkImportSemaphoreFdInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreGetFdInfoKHR(VkSemaphoreGetFdInfoKHR name);
        VkSemaphoreGetFdInfoKHR deserialize_VkSemaphoreGetFdInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceExternalFenceInfo(VkPhysicalDeviceExternalFenceInfo name);
        VkPhysicalDeviceExternalFenceInfo deserialize_VkPhysicalDeviceExternalFenceInfo(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceExternalFenceInfoKHR(VkPhysicalDeviceExternalFenceInfoKHR name);
        VkPhysicalDeviceExternalFenceInfoKHR deserialize_VkPhysicalDeviceExternalFenceInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkExternalFenceProperties(VkExternalFenceProperties name);
        VkExternalFenceProperties deserialize_VkExternalFenceProperties(rjson name);
    

        yyjson::writer::object serialize_VkExternalFencePropertiesKHR(VkExternalFencePropertiesKHR name);
        VkExternalFencePropertiesKHR deserialize_VkExternalFencePropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkExportFenceCreateInfo(VkExportFenceCreateInfo name);
        VkExportFenceCreateInfo deserialize_VkExportFenceCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkExportFenceCreateInfoKHR(VkExportFenceCreateInfoKHR name);
        VkExportFenceCreateInfoKHR deserialize_VkExportFenceCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkImportFenceFdInfoKHR(VkImportFenceFdInfoKHR name);
        VkImportFenceFdInfoKHR deserialize_VkImportFenceFdInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkFenceGetFdInfoKHR(VkFenceGetFdInfoKHR name);
        VkFenceGetFdInfoKHR deserialize_VkFenceGetFdInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMultiviewFeatures(VkPhysicalDeviceMultiviewFeatures name);
        VkPhysicalDeviceMultiviewFeatures deserialize_VkPhysicalDeviceMultiviewFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMultiviewFeaturesKHR(VkPhysicalDeviceMultiviewFeaturesKHR name);
        VkPhysicalDeviceMultiviewFeaturesKHR deserialize_VkPhysicalDeviceMultiviewFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMultiviewProperties(VkPhysicalDeviceMultiviewProperties name);
        VkPhysicalDeviceMultiviewProperties deserialize_VkPhysicalDeviceMultiviewProperties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMultiviewPropertiesKHR(VkPhysicalDeviceMultiviewPropertiesKHR name);
        VkPhysicalDeviceMultiviewPropertiesKHR deserialize_VkPhysicalDeviceMultiviewPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkRenderPassMultiviewCreateInfo(VkRenderPassMultiviewCreateInfo name);
        VkRenderPassMultiviewCreateInfo deserialize_VkRenderPassMultiviewCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkRenderPassMultiviewCreateInfoKHR(VkRenderPassMultiviewCreateInfoKHR name);
        VkRenderPassMultiviewCreateInfoKHR deserialize_VkRenderPassMultiviewCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkSurfaceCapabilities2EXT(VkSurfaceCapabilities2EXT name);
        VkSurfaceCapabilities2EXT deserialize_VkSurfaceCapabilities2EXT(rjson name);
    

        yyjson::writer::object serialize_VkDisplayPowerInfoEXT(VkDisplayPowerInfoEXT name);
        VkDisplayPowerInfoEXT deserialize_VkDisplayPowerInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkDeviceEventInfoEXT(VkDeviceEventInfoEXT name);
        VkDeviceEventInfoEXT deserialize_VkDeviceEventInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkDisplayEventInfoEXT(VkDisplayEventInfoEXT name);
        VkDisplayEventInfoEXT deserialize_VkDisplayEventInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkSwapchainCounterCreateInfoEXT(VkSwapchainCounterCreateInfoEXT name);
        VkSwapchainCounterCreateInfoEXT deserialize_VkSwapchainCounterCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceGroupProperties(VkPhysicalDeviceGroupProperties name);
        VkPhysicalDeviceGroupProperties deserialize_VkPhysicalDeviceGroupProperties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceGroupPropertiesKHR(VkPhysicalDeviceGroupPropertiesKHR name);
        VkPhysicalDeviceGroupPropertiesKHR deserialize_VkPhysicalDeviceGroupPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkMemoryAllocateFlagsInfo(VkMemoryAllocateFlagsInfo name);
        VkMemoryAllocateFlagsInfo deserialize_VkMemoryAllocateFlagsInfo(rjson name);
    

        yyjson::writer::object serialize_VkMemoryAllocateFlagsInfoKHR(VkMemoryAllocateFlagsInfoKHR name);
        VkMemoryAllocateFlagsInfoKHR deserialize_VkMemoryAllocateFlagsInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkBindBufferMemoryInfo(VkBindBufferMemoryInfo name);
        VkBindBufferMemoryInfo deserialize_VkBindBufferMemoryInfo(rjson name);
    

        yyjson::writer::object serialize_VkBindBufferMemoryInfoKHR(VkBindBufferMemoryInfoKHR name);
        VkBindBufferMemoryInfoKHR deserialize_VkBindBufferMemoryInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkBindBufferMemoryDeviceGroupInfo(VkBindBufferMemoryDeviceGroupInfo name);
        VkBindBufferMemoryDeviceGroupInfo deserialize_VkBindBufferMemoryDeviceGroupInfo(rjson name);
    

        yyjson::writer::object serialize_VkBindBufferMemoryDeviceGroupInfoKHR(VkBindBufferMemoryDeviceGroupInfoKHR name);
        VkBindBufferMemoryDeviceGroupInfoKHR deserialize_VkBindBufferMemoryDeviceGroupInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkBindImageMemoryInfo(VkBindImageMemoryInfo name);
        VkBindImageMemoryInfo deserialize_VkBindImageMemoryInfo(rjson name);
    

        yyjson::writer::object serialize_VkBindImageMemoryInfoKHR(VkBindImageMemoryInfoKHR name);
        VkBindImageMemoryInfoKHR deserialize_VkBindImageMemoryInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkBindImageMemoryDeviceGroupInfo(VkBindImageMemoryDeviceGroupInfo name);
        VkBindImageMemoryDeviceGroupInfo deserialize_VkBindImageMemoryDeviceGroupInfo(rjson name);
    

        yyjson::writer::object serialize_VkBindImageMemoryDeviceGroupInfoKHR(VkBindImageMemoryDeviceGroupInfoKHR name);
        VkBindImageMemoryDeviceGroupInfoKHR deserialize_VkBindImageMemoryDeviceGroupInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkDeviceGroupRenderPassBeginInfo(VkDeviceGroupRenderPassBeginInfo name);
        VkDeviceGroupRenderPassBeginInfo deserialize_VkDeviceGroupRenderPassBeginInfo(rjson name);
    

        yyjson::writer::object serialize_VkDeviceGroupRenderPassBeginInfoKHR(VkDeviceGroupRenderPassBeginInfoKHR name);
        VkDeviceGroupRenderPassBeginInfoKHR deserialize_VkDeviceGroupRenderPassBeginInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkDeviceGroupCommandBufferBeginInfo(VkDeviceGroupCommandBufferBeginInfo name);
        VkDeviceGroupCommandBufferBeginInfo deserialize_VkDeviceGroupCommandBufferBeginInfo(rjson name);
    

        yyjson::writer::object serialize_VkDeviceGroupCommandBufferBeginInfoKHR(VkDeviceGroupCommandBufferBeginInfoKHR name);
        VkDeviceGroupCommandBufferBeginInfoKHR deserialize_VkDeviceGroupCommandBufferBeginInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkDeviceGroupSubmitInfo(VkDeviceGroupSubmitInfo name);
        VkDeviceGroupSubmitInfo deserialize_VkDeviceGroupSubmitInfo(rjson name);
    

        yyjson::writer::object serialize_VkDeviceGroupSubmitInfoKHR(VkDeviceGroupSubmitInfoKHR name);
        VkDeviceGroupSubmitInfoKHR deserialize_VkDeviceGroupSubmitInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkDeviceGroupBindSparseInfo(VkDeviceGroupBindSparseInfo name);
        VkDeviceGroupBindSparseInfo deserialize_VkDeviceGroupBindSparseInfo(rjson name);
    

        yyjson::writer::object serialize_VkDeviceGroupBindSparseInfoKHR(VkDeviceGroupBindSparseInfoKHR name);
        VkDeviceGroupBindSparseInfoKHR deserialize_VkDeviceGroupBindSparseInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkDeviceGroupPresentCapabilitiesKHR(VkDeviceGroupPresentCapabilitiesKHR name);
        VkDeviceGroupPresentCapabilitiesKHR deserialize_VkDeviceGroupPresentCapabilitiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkImageSwapchainCreateInfoKHR(VkImageSwapchainCreateInfoKHR name);
        VkImageSwapchainCreateInfoKHR deserialize_VkImageSwapchainCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkBindImageMemorySwapchainInfoKHR(VkBindImageMemorySwapchainInfoKHR name);
        VkBindImageMemorySwapchainInfoKHR deserialize_VkBindImageMemorySwapchainInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkAcquireNextImageInfoKHR(VkAcquireNextImageInfoKHR name);
        VkAcquireNextImageInfoKHR deserialize_VkAcquireNextImageInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkDeviceGroupPresentInfoKHR(VkDeviceGroupPresentInfoKHR name);
        VkDeviceGroupPresentInfoKHR deserialize_VkDeviceGroupPresentInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkDeviceGroupDeviceCreateInfo(VkDeviceGroupDeviceCreateInfo name);
        VkDeviceGroupDeviceCreateInfo deserialize_VkDeviceGroupDeviceCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkDeviceGroupDeviceCreateInfoKHR(VkDeviceGroupDeviceCreateInfoKHR name);
        VkDeviceGroupDeviceCreateInfoKHR deserialize_VkDeviceGroupDeviceCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkDeviceGroupSwapchainCreateInfoKHR(VkDeviceGroupSwapchainCreateInfoKHR name);
        VkDeviceGroupSwapchainCreateInfoKHR deserialize_VkDeviceGroupSwapchainCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorUpdateTemplateEntry(VkDescriptorUpdateTemplateEntry name);
        VkDescriptorUpdateTemplateEntry deserialize_VkDescriptorUpdateTemplateEntry(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorUpdateTemplateEntryKHR(VkDescriptorUpdateTemplateEntryKHR name);
        VkDescriptorUpdateTemplateEntryKHR deserialize_VkDescriptorUpdateTemplateEntryKHR(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorUpdateTemplateCreateInfo(VkDescriptorUpdateTemplateCreateInfo name);
        VkDescriptorUpdateTemplateCreateInfo deserialize_VkDescriptorUpdateTemplateCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorUpdateTemplateCreateInfoKHR(VkDescriptorUpdateTemplateCreateInfoKHR name);
        VkDescriptorUpdateTemplateCreateInfoKHR deserialize_VkDescriptorUpdateTemplateCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkXYColorEXT(VkXYColorEXT name);
        VkXYColorEXT deserialize_VkXYColorEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePresentIdFeaturesKHR(VkPhysicalDevicePresentIdFeaturesKHR name);
        VkPhysicalDevicePresentIdFeaturesKHR deserialize_VkPhysicalDevicePresentIdFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPresentIdKHR(VkPresentIdKHR name);
        VkPresentIdKHR deserialize_VkPresentIdKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePresentWaitFeaturesKHR(VkPhysicalDevicePresentWaitFeaturesKHR name);
        VkPhysicalDevicePresentWaitFeaturesKHR deserialize_VkPhysicalDevicePresentWaitFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkHdrMetadataEXT(VkHdrMetadataEXT name);
        VkHdrMetadataEXT deserialize_VkHdrMetadataEXT(rjson name);
    

        yyjson::writer::object serialize_VkDisplayNativeHdrSurfaceCapabilitiesAMD(VkDisplayNativeHdrSurfaceCapabilitiesAMD name);
        VkDisplayNativeHdrSurfaceCapabilitiesAMD deserialize_VkDisplayNativeHdrSurfaceCapabilitiesAMD(rjson name);
    

        yyjson::writer::object serialize_VkSwapchainDisplayNativeHdrCreateInfoAMD(VkSwapchainDisplayNativeHdrCreateInfoAMD name);
        VkSwapchainDisplayNativeHdrCreateInfoAMD deserialize_VkSwapchainDisplayNativeHdrCreateInfoAMD(rjson name);
    

        yyjson::writer::object serialize_VkRefreshCycleDurationGOOGLE(VkRefreshCycleDurationGOOGLE name);
        VkRefreshCycleDurationGOOGLE deserialize_VkRefreshCycleDurationGOOGLE(rjson name);
    

        yyjson::writer::object serialize_VkPastPresentationTimingGOOGLE(VkPastPresentationTimingGOOGLE name);
        VkPastPresentationTimingGOOGLE deserialize_VkPastPresentationTimingGOOGLE(rjson name);
    

        yyjson::writer::object serialize_VkPresentTimesInfoGOOGLE(VkPresentTimesInfoGOOGLE name);
        VkPresentTimesInfoGOOGLE deserialize_VkPresentTimesInfoGOOGLE(rjson name);
    

        yyjson::writer::object serialize_VkPresentTimeGOOGLE(VkPresentTimeGOOGLE name);
        VkPresentTimeGOOGLE deserialize_VkPresentTimeGOOGLE(rjson name);
    

        yyjson::writer::object serialize_VkViewportWScalingNV(VkViewportWScalingNV name);
        VkViewportWScalingNV deserialize_VkViewportWScalingNV(rjson name);
    

        yyjson::writer::object serialize_VkPipelineViewportWScalingStateCreateInfoNV(VkPipelineViewportWScalingStateCreateInfoNV name);
        VkPipelineViewportWScalingStateCreateInfoNV deserialize_VkPipelineViewportWScalingStateCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkViewportSwizzleNV(VkViewportSwizzleNV name);
        VkViewportSwizzleNV deserialize_VkViewportSwizzleNV(rjson name);
    

        yyjson::writer::object serialize_VkPipelineViewportSwizzleStateCreateInfoNV(VkPipelineViewportSwizzleStateCreateInfoNV name);
        VkPipelineViewportSwizzleStateCreateInfoNV deserialize_VkPipelineViewportSwizzleStateCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDiscardRectanglePropertiesEXT(VkPhysicalDeviceDiscardRectanglePropertiesEXT name);
        VkPhysicalDeviceDiscardRectanglePropertiesEXT deserialize_VkPhysicalDeviceDiscardRectanglePropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineDiscardRectangleStateCreateInfoEXT(VkPipelineDiscardRectangleStateCreateInfoEXT name);
        VkPipelineDiscardRectangleStateCreateInfoEXT deserialize_VkPipelineDiscardRectangleStateCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX name);
        VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX deserialize_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(rjson name);
    

        yyjson::writer::object serialize_VkInputAttachmentAspectReference(VkInputAttachmentAspectReference name);
        VkInputAttachmentAspectReference deserialize_VkInputAttachmentAspectReference(rjson name);
    

        yyjson::writer::object serialize_VkInputAttachmentAspectReferenceKHR(VkInputAttachmentAspectReferenceKHR name);
        VkInputAttachmentAspectReferenceKHR deserialize_VkInputAttachmentAspectReferenceKHR(rjson name);
    

        yyjson::writer::object serialize_VkRenderPassInputAttachmentAspectCreateInfo(VkRenderPassInputAttachmentAspectCreateInfo name);
        VkRenderPassInputAttachmentAspectCreateInfo deserialize_VkRenderPassInputAttachmentAspectCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkRenderPassInputAttachmentAspectCreateInfoKHR(VkRenderPassInputAttachmentAspectCreateInfoKHR name);
        VkRenderPassInputAttachmentAspectCreateInfoKHR deserialize_VkRenderPassInputAttachmentAspectCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSurfaceInfo2KHR(VkPhysicalDeviceSurfaceInfo2KHR name);
        VkPhysicalDeviceSurfaceInfo2KHR deserialize_VkPhysicalDeviceSurfaceInfo2KHR(rjson name);
    

        yyjson::writer::object serialize_VkSurfaceCapabilities2KHR(VkSurfaceCapabilities2KHR name);
        VkSurfaceCapabilities2KHR deserialize_VkSurfaceCapabilities2KHR(rjson name);
    

        yyjson::writer::object serialize_VkSurfaceFormat2KHR(VkSurfaceFormat2KHR name);
        VkSurfaceFormat2KHR deserialize_VkSurfaceFormat2KHR(rjson name);
    

        yyjson::writer::object serialize_VkDisplayProperties2KHR(VkDisplayProperties2KHR name);
        VkDisplayProperties2KHR deserialize_VkDisplayProperties2KHR(rjson name);
    

        yyjson::writer::object serialize_VkDisplayPlaneProperties2KHR(VkDisplayPlaneProperties2KHR name);
        VkDisplayPlaneProperties2KHR deserialize_VkDisplayPlaneProperties2KHR(rjson name);
    

        yyjson::writer::object serialize_VkDisplayModeProperties2KHR(VkDisplayModeProperties2KHR name);
        VkDisplayModeProperties2KHR deserialize_VkDisplayModeProperties2KHR(rjson name);
    

        yyjson::writer::object serialize_VkDisplayPlaneInfo2KHR(VkDisplayPlaneInfo2KHR name);
        VkDisplayPlaneInfo2KHR deserialize_VkDisplayPlaneInfo2KHR(rjson name);
    

        yyjson::writer::object serialize_VkDisplayPlaneCapabilities2KHR(VkDisplayPlaneCapabilities2KHR name);
        VkDisplayPlaneCapabilities2KHR deserialize_VkDisplayPlaneCapabilities2KHR(rjson name);
    

        yyjson::writer::object serialize_VkSharedPresentSurfaceCapabilitiesKHR(VkSharedPresentSurfaceCapabilitiesKHR name);
        VkSharedPresentSurfaceCapabilitiesKHR deserialize_VkSharedPresentSurfaceCapabilitiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevice16BitStorageFeatures(VkPhysicalDevice16BitStorageFeatures name);
        VkPhysicalDevice16BitStorageFeatures deserialize_VkPhysicalDevice16BitStorageFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevice16BitStorageFeaturesKHR(VkPhysicalDevice16BitStorageFeaturesKHR name);
        VkPhysicalDevice16BitStorageFeaturesKHR deserialize_VkPhysicalDevice16BitStorageFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSubgroupProperties(VkPhysicalDeviceSubgroupProperties name);
        VkPhysicalDeviceSubgroupProperties deserialize_VkPhysicalDeviceSubgroupProperties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures name);
        VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures deserialize_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR(VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR name);
        VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR deserialize_VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkBufferMemoryRequirementsInfo2(VkBufferMemoryRequirementsInfo2 name);
        VkBufferMemoryRequirementsInfo2 deserialize_VkBufferMemoryRequirementsInfo2(rjson name);
    

        yyjson::writer::object serialize_VkBufferMemoryRequirementsInfo2KHR(VkBufferMemoryRequirementsInfo2KHR name);
        VkBufferMemoryRequirementsInfo2KHR deserialize_VkBufferMemoryRequirementsInfo2KHR(rjson name);
    

        yyjson::writer::object serialize_VkDeviceBufferMemoryRequirements(VkDeviceBufferMemoryRequirements name);
        VkDeviceBufferMemoryRequirements deserialize_VkDeviceBufferMemoryRequirements(rjson name);
    

        yyjson::writer::object serialize_VkDeviceBufferMemoryRequirementsKHR(VkDeviceBufferMemoryRequirementsKHR name);
        VkDeviceBufferMemoryRequirementsKHR deserialize_VkDeviceBufferMemoryRequirementsKHR(rjson name);
    

        yyjson::writer::object serialize_VkImageMemoryRequirementsInfo2(VkImageMemoryRequirementsInfo2 name);
        VkImageMemoryRequirementsInfo2 deserialize_VkImageMemoryRequirementsInfo2(rjson name);
    

        yyjson::writer::object serialize_VkImageMemoryRequirementsInfo2KHR(VkImageMemoryRequirementsInfo2KHR name);
        VkImageMemoryRequirementsInfo2KHR deserialize_VkImageMemoryRequirementsInfo2KHR(rjson name);
    

        yyjson::writer::object serialize_VkImageSparseMemoryRequirementsInfo2(VkImageSparseMemoryRequirementsInfo2 name);
        VkImageSparseMemoryRequirementsInfo2 deserialize_VkImageSparseMemoryRequirementsInfo2(rjson name);
    

        yyjson::writer::object serialize_VkImageSparseMemoryRequirementsInfo2KHR(VkImageSparseMemoryRequirementsInfo2KHR name);
        VkImageSparseMemoryRequirementsInfo2KHR deserialize_VkImageSparseMemoryRequirementsInfo2KHR(rjson name);
    

        yyjson::writer::object serialize_VkDeviceImageMemoryRequirements(VkDeviceImageMemoryRequirements name);
        VkDeviceImageMemoryRequirements deserialize_VkDeviceImageMemoryRequirements(rjson name);
    

        yyjson::writer::object serialize_VkDeviceImageMemoryRequirementsKHR(VkDeviceImageMemoryRequirementsKHR name);
        VkDeviceImageMemoryRequirementsKHR deserialize_VkDeviceImageMemoryRequirementsKHR(rjson name);
    

        yyjson::writer::object serialize_VkMemoryRequirements2(VkMemoryRequirements2 name);
        VkMemoryRequirements2 deserialize_VkMemoryRequirements2(rjson name);
    

        yyjson::writer::object serialize_VkMemoryRequirements2KHR(VkMemoryRequirements2KHR name);
        VkMemoryRequirements2KHR deserialize_VkMemoryRequirements2KHR(rjson name);
    

        yyjson::writer::object serialize_VkSparseImageMemoryRequirements2(VkSparseImageMemoryRequirements2 name);
        VkSparseImageMemoryRequirements2 deserialize_VkSparseImageMemoryRequirements2(rjson name);
    

        yyjson::writer::object serialize_VkSparseImageMemoryRequirements2KHR(VkSparseImageMemoryRequirements2KHR name);
        VkSparseImageMemoryRequirements2KHR deserialize_VkSparseImageMemoryRequirements2KHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePointClippingProperties(VkPhysicalDevicePointClippingProperties name);
        VkPhysicalDevicePointClippingProperties deserialize_VkPhysicalDevicePointClippingProperties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePointClippingPropertiesKHR(VkPhysicalDevicePointClippingPropertiesKHR name);
        VkPhysicalDevicePointClippingPropertiesKHR deserialize_VkPhysicalDevicePointClippingPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkMemoryDedicatedRequirements(VkMemoryDedicatedRequirements name);
        VkMemoryDedicatedRequirements deserialize_VkMemoryDedicatedRequirements(rjson name);
    

        yyjson::writer::object serialize_VkMemoryDedicatedRequirementsKHR(VkMemoryDedicatedRequirementsKHR name);
        VkMemoryDedicatedRequirementsKHR deserialize_VkMemoryDedicatedRequirementsKHR(rjson name);
    

        yyjson::writer::object serialize_VkMemoryDedicatedAllocateInfo(VkMemoryDedicatedAllocateInfo name);
        VkMemoryDedicatedAllocateInfo deserialize_VkMemoryDedicatedAllocateInfo(rjson name);
    

        yyjson::writer::object serialize_VkMemoryDedicatedAllocateInfoKHR(VkMemoryDedicatedAllocateInfoKHR name);
        VkMemoryDedicatedAllocateInfoKHR deserialize_VkMemoryDedicatedAllocateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkImageViewUsageCreateInfo(VkImageViewUsageCreateInfo name);
        VkImageViewUsageCreateInfo deserialize_VkImageViewUsageCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkImageViewSlicedCreateInfoEXT(VkImageViewSlicedCreateInfoEXT name);
        VkImageViewSlicedCreateInfoEXT deserialize_VkImageViewSlicedCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkImageViewUsageCreateInfoKHR(VkImageViewUsageCreateInfoKHR name);
        VkImageViewUsageCreateInfoKHR deserialize_VkImageViewUsageCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPipelineTessellationDomainOriginStateCreateInfo(VkPipelineTessellationDomainOriginStateCreateInfo name);
        VkPipelineTessellationDomainOriginStateCreateInfo deserialize_VkPipelineTessellationDomainOriginStateCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkPipelineTessellationDomainOriginStateCreateInfoKHR(VkPipelineTessellationDomainOriginStateCreateInfoKHR name);
        VkPipelineTessellationDomainOriginStateCreateInfoKHR deserialize_VkPipelineTessellationDomainOriginStateCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkSamplerYcbcrConversionInfo(VkSamplerYcbcrConversionInfo name);
        VkSamplerYcbcrConversionInfo deserialize_VkSamplerYcbcrConversionInfo(rjson name);
    

        yyjson::writer::object serialize_VkSamplerYcbcrConversionInfoKHR(VkSamplerYcbcrConversionInfoKHR name);
        VkSamplerYcbcrConversionInfoKHR deserialize_VkSamplerYcbcrConversionInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkSamplerYcbcrConversionCreateInfo(VkSamplerYcbcrConversionCreateInfo name);
        VkSamplerYcbcrConversionCreateInfo deserialize_VkSamplerYcbcrConversionCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkSamplerYcbcrConversionCreateInfoKHR(VkSamplerYcbcrConversionCreateInfoKHR name);
        VkSamplerYcbcrConversionCreateInfoKHR deserialize_VkSamplerYcbcrConversionCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkBindImagePlaneMemoryInfo(VkBindImagePlaneMemoryInfo name);
        VkBindImagePlaneMemoryInfo deserialize_VkBindImagePlaneMemoryInfo(rjson name);
    

        yyjson::writer::object serialize_VkBindImagePlaneMemoryInfoKHR(VkBindImagePlaneMemoryInfoKHR name);
        VkBindImagePlaneMemoryInfoKHR deserialize_VkBindImagePlaneMemoryInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkImagePlaneMemoryRequirementsInfo(VkImagePlaneMemoryRequirementsInfo name);
        VkImagePlaneMemoryRequirementsInfo deserialize_VkImagePlaneMemoryRequirementsInfo(rjson name);
    

        yyjson::writer::object serialize_VkImagePlaneMemoryRequirementsInfoKHR(VkImagePlaneMemoryRequirementsInfoKHR name);
        VkImagePlaneMemoryRequirementsInfoKHR deserialize_VkImagePlaneMemoryRequirementsInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSamplerYcbcrConversionFeatures(VkPhysicalDeviceSamplerYcbcrConversionFeatures name);
        VkPhysicalDeviceSamplerYcbcrConversionFeatures deserialize_VkPhysicalDeviceSamplerYcbcrConversionFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR(VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR name);
        VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR deserialize_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkSamplerYcbcrConversionImageFormatProperties(VkSamplerYcbcrConversionImageFormatProperties name);
        VkSamplerYcbcrConversionImageFormatProperties deserialize_VkSamplerYcbcrConversionImageFormatProperties(rjson name);
    

        yyjson::writer::object serialize_VkSamplerYcbcrConversionImageFormatPropertiesKHR(VkSamplerYcbcrConversionImageFormatPropertiesKHR name);
        VkSamplerYcbcrConversionImageFormatPropertiesKHR deserialize_VkSamplerYcbcrConversionImageFormatPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkTextureLODGatherFormatPropertiesAMD(VkTextureLODGatherFormatPropertiesAMD name);
        VkTextureLODGatherFormatPropertiesAMD deserialize_VkTextureLODGatherFormatPropertiesAMD(rjson name);
    

        yyjson::writer::object serialize_VkConditionalRenderingBeginInfoEXT(VkConditionalRenderingBeginInfoEXT name);
        VkConditionalRenderingBeginInfoEXT deserialize_VkConditionalRenderingBeginInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkProtectedSubmitInfo(VkProtectedSubmitInfo name);
        VkProtectedSubmitInfo deserialize_VkProtectedSubmitInfo(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceProtectedMemoryFeatures(VkPhysicalDeviceProtectedMemoryFeatures name);
        VkPhysicalDeviceProtectedMemoryFeatures deserialize_VkPhysicalDeviceProtectedMemoryFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceProtectedMemoryProperties(VkPhysicalDeviceProtectedMemoryProperties name);
        VkPhysicalDeviceProtectedMemoryProperties deserialize_VkPhysicalDeviceProtectedMemoryProperties(rjson name);
    

        yyjson::writer::object serialize_VkDeviceQueueInfo2(VkDeviceQueueInfo2 name);
        VkDeviceQueueInfo2 deserialize_VkDeviceQueueInfo2(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCoverageToColorStateCreateInfoNV(VkPipelineCoverageToColorStateCreateInfoNV name);
        VkPipelineCoverageToColorStateCreateInfoNV deserialize_VkPipelineCoverageToColorStateCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSamplerFilterMinmaxProperties(VkPhysicalDeviceSamplerFilterMinmaxProperties name);
        VkPhysicalDeviceSamplerFilterMinmaxProperties deserialize_VkPhysicalDeviceSamplerFilterMinmaxProperties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT name);
        VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT deserialize_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkSampleLocationEXT(VkSampleLocationEXT name);
        VkSampleLocationEXT deserialize_VkSampleLocationEXT(rjson name);
    

        yyjson::writer::object serialize_VkSampleLocationsInfoEXT(VkSampleLocationsInfoEXT name);
        VkSampleLocationsInfoEXT deserialize_VkSampleLocationsInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkAttachmentSampleLocationsEXT(VkAttachmentSampleLocationsEXT name);
        VkAttachmentSampleLocationsEXT deserialize_VkAttachmentSampleLocationsEXT(rjson name);
    

        yyjson::writer::object serialize_VkSubpassSampleLocationsEXT(VkSubpassSampleLocationsEXT name);
        VkSubpassSampleLocationsEXT deserialize_VkSubpassSampleLocationsEXT(rjson name);
    

        yyjson::writer::object serialize_VkRenderPassSampleLocationsBeginInfoEXT(VkRenderPassSampleLocationsBeginInfoEXT name);
        VkRenderPassSampleLocationsBeginInfoEXT deserialize_VkRenderPassSampleLocationsBeginInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineSampleLocationsStateCreateInfoEXT(VkPipelineSampleLocationsStateCreateInfoEXT name);
        VkPipelineSampleLocationsStateCreateInfoEXT deserialize_VkPipelineSampleLocationsStateCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSampleLocationsPropertiesEXT(VkPhysicalDeviceSampleLocationsPropertiesEXT name);
        VkPhysicalDeviceSampleLocationsPropertiesEXT deserialize_VkPhysicalDeviceSampleLocationsPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkMultisamplePropertiesEXT(VkMultisamplePropertiesEXT name);
        VkMultisamplePropertiesEXT deserialize_VkMultisamplePropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkSamplerReductionModeCreateInfo(VkSamplerReductionModeCreateInfo name);
        VkSamplerReductionModeCreateInfo deserialize_VkSamplerReductionModeCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkSamplerReductionModeCreateInfoEXT(VkSamplerReductionModeCreateInfoEXT name);
        VkSamplerReductionModeCreateInfoEXT deserialize_VkSamplerReductionModeCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT name);
        VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT deserialize_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMultiDrawFeaturesEXT(VkPhysicalDeviceMultiDrawFeaturesEXT name);
        VkPhysicalDeviceMultiDrawFeaturesEXT deserialize_VkPhysicalDeviceMultiDrawFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT name);
        VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT deserialize_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineColorBlendAdvancedStateCreateInfoEXT(VkPipelineColorBlendAdvancedStateCreateInfoEXT name);
        VkPipelineColorBlendAdvancedStateCreateInfoEXT deserialize_VkPipelineColorBlendAdvancedStateCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceInlineUniformBlockFeatures(VkPhysicalDeviceInlineUniformBlockFeatures name);
        VkPhysicalDeviceInlineUniformBlockFeatures deserialize_VkPhysicalDeviceInlineUniformBlockFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceInlineUniformBlockFeaturesEXT(VkPhysicalDeviceInlineUniformBlockFeaturesEXT name);
        VkPhysicalDeviceInlineUniformBlockFeaturesEXT deserialize_VkPhysicalDeviceInlineUniformBlockFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceInlineUniformBlockProperties(VkPhysicalDeviceInlineUniformBlockProperties name);
        VkPhysicalDeviceInlineUniformBlockProperties deserialize_VkPhysicalDeviceInlineUniformBlockProperties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceInlineUniformBlockPropertiesEXT(VkPhysicalDeviceInlineUniformBlockPropertiesEXT name);
        VkPhysicalDeviceInlineUniformBlockPropertiesEXT deserialize_VkPhysicalDeviceInlineUniformBlockPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkWriteDescriptorSetInlineUniformBlock(VkWriteDescriptorSetInlineUniformBlock name);
        VkWriteDescriptorSetInlineUniformBlock deserialize_VkWriteDescriptorSetInlineUniformBlock(rjson name);
    

        yyjson::writer::object serialize_VkWriteDescriptorSetInlineUniformBlockEXT(VkWriteDescriptorSetInlineUniformBlockEXT name);
        VkWriteDescriptorSetInlineUniformBlockEXT deserialize_VkWriteDescriptorSetInlineUniformBlockEXT(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorPoolInlineUniformBlockCreateInfo(VkDescriptorPoolInlineUniformBlockCreateInfo name);
        VkDescriptorPoolInlineUniformBlockCreateInfo deserialize_VkDescriptorPoolInlineUniformBlockCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorPoolInlineUniformBlockCreateInfoEXT(VkDescriptorPoolInlineUniformBlockCreateInfoEXT name);
        VkDescriptorPoolInlineUniformBlockCreateInfoEXT deserialize_VkDescriptorPoolInlineUniformBlockCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCoverageModulationStateCreateInfoNV(VkPipelineCoverageModulationStateCreateInfoNV name);
        VkPipelineCoverageModulationStateCreateInfoNV deserialize_VkPipelineCoverageModulationStateCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkImageFormatListCreateInfo(VkImageFormatListCreateInfo name);
        VkImageFormatListCreateInfo deserialize_VkImageFormatListCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkImageFormatListCreateInfoKHR(VkImageFormatListCreateInfoKHR name);
        VkImageFormatListCreateInfoKHR deserialize_VkImageFormatListCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkValidationCacheCreateInfoEXT(VkValidationCacheCreateInfoEXT name);
        VkValidationCacheCreateInfoEXT deserialize_VkValidationCacheCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkShaderModuleValidationCacheCreateInfoEXT(VkShaderModuleValidationCacheCreateInfoEXT name);
        VkShaderModuleValidationCacheCreateInfoEXT deserialize_VkShaderModuleValidationCacheCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMaintenance3Properties(VkPhysicalDeviceMaintenance3Properties name);
        VkPhysicalDeviceMaintenance3Properties deserialize_VkPhysicalDeviceMaintenance3Properties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMaintenance3PropertiesKHR(VkPhysicalDeviceMaintenance3PropertiesKHR name);
        VkPhysicalDeviceMaintenance3PropertiesKHR deserialize_VkPhysicalDeviceMaintenance3PropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMaintenance4Features(VkPhysicalDeviceMaintenance4Features name);
        VkPhysicalDeviceMaintenance4Features deserialize_VkPhysicalDeviceMaintenance4Features(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMaintenance4FeaturesKHR(VkPhysicalDeviceMaintenance4FeaturesKHR name);
        VkPhysicalDeviceMaintenance4FeaturesKHR deserialize_VkPhysicalDeviceMaintenance4FeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMaintenance4Properties(VkPhysicalDeviceMaintenance4Properties name);
        VkPhysicalDeviceMaintenance4Properties deserialize_VkPhysicalDeviceMaintenance4Properties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMaintenance4PropertiesKHR(VkPhysicalDeviceMaintenance4PropertiesKHR name);
        VkPhysicalDeviceMaintenance4PropertiesKHR deserialize_VkPhysicalDeviceMaintenance4PropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMaintenance5FeaturesKHR(VkPhysicalDeviceMaintenance5FeaturesKHR name);
        VkPhysicalDeviceMaintenance5FeaturesKHR deserialize_VkPhysicalDeviceMaintenance5FeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMaintenance5PropertiesKHR(VkPhysicalDeviceMaintenance5PropertiesKHR name);
        VkPhysicalDeviceMaintenance5PropertiesKHR deserialize_VkPhysicalDeviceMaintenance5PropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkRenderingAreaInfoKHR(VkRenderingAreaInfoKHR name);
        VkRenderingAreaInfoKHR deserialize_VkRenderingAreaInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorSetLayoutSupport(VkDescriptorSetLayoutSupport name);
        VkDescriptorSetLayoutSupport deserialize_VkDescriptorSetLayoutSupport(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorSetLayoutSupportKHR(VkDescriptorSetLayoutSupportKHR name);
        VkDescriptorSetLayoutSupportKHR deserialize_VkDescriptorSetLayoutSupportKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderDrawParametersFeatures(VkPhysicalDeviceShaderDrawParametersFeatures name);
        VkPhysicalDeviceShaderDrawParametersFeatures deserialize_VkPhysicalDeviceShaderDrawParametersFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderDrawParameterFeatures(VkPhysicalDeviceShaderDrawParameterFeatures name);
        VkPhysicalDeviceShaderDrawParameterFeatures deserialize_VkPhysicalDeviceShaderDrawParameterFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderFloat16Int8Features(VkPhysicalDeviceShaderFloat16Int8Features name);
        VkPhysicalDeviceShaderFloat16Int8Features deserialize_VkPhysicalDeviceShaderFloat16Int8Features(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderFloat16Int8FeaturesKHR(VkPhysicalDeviceShaderFloat16Int8FeaturesKHR name);
        VkPhysicalDeviceShaderFloat16Int8FeaturesKHR deserialize_VkPhysicalDeviceShaderFloat16Int8FeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFloat16Int8FeaturesKHR(VkPhysicalDeviceFloat16Int8FeaturesKHR name);
        VkPhysicalDeviceFloat16Int8FeaturesKHR deserialize_VkPhysicalDeviceFloat16Int8FeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFloatControlsProperties(VkPhysicalDeviceFloatControlsProperties name);
        VkPhysicalDeviceFloatControlsProperties deserialize_VkPhysicalDeviceFloatControlsProperties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFloatControlsPropertiesKHR(VkPhysicalDeviceFloatControlsPropertiesKHR name);
        VkPhysicalDeviceFloatControlsPropertiesKHR deserialize_VkPhysicalDeviceFloatControlsPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceHostQueryResetFeatures(VkPhysicalDeviceHostQueryResetFeatures name);
        VkPhysicalDeviceHostQueryResetFeatures deserialize_VkPhysicalDeviceHostQueryResetFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceHostQueryResetFeaturesEXT(VkPhysicalDeviceHostQueryResetFeaturesEXT name);
        VkPhysicalDeviceHostQueryResetFeaturesEXT deserialize_VkPhysicalDeviceHostQueryResetFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkShaderResourceUsageAMD(VkShaderResourceUsageAMD name);
        VkShaderResourceUsageAMD deserialize_VkShaderResourceUsageAMD(rjson name);
    

        yyjson::writer::object serialize_VkShaderStatisticsInfoAMD(VkShaderStatisticsInfoAMD name);
        VkShaderStatisticsInfoAMD deserialize_VkShaderStatisticsInfoAMD(rjson name);
    

        yyjson::writer::object serialize_VkDeviceQueueGlobalPriorityCreateInfoKHR(VkDeviceQueueGlobalPriorityCreateInfoKHR name);
        VkDeviceQueueGlobalPriorityCreateInfoKHR deserialize_VkDeviceQueueGlobalPriorityCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkDeviceQueueGlobalPriorityCreateInfoEXT(VkDeviceQueueGlobalPriorityCreateInfoEXT name);
        VkDeviceQueueGlobalPriorityCreateInfoEXT deserialize_VkDeviceQueueGlobalPriorityCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR(VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR name);
        VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR deserialize_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT(VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT name);
        VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT deserialize_VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkQueueFamilyGlobalPriorityPropertiesKHR(VkQueueFamilyGlobalPriorityPropertiesKHR name);
        VkQueueFamilyGlobalPriorityPropertiesKHR deserialize_VkQueueFamilyGlobalPriorityPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkQueueFamilyGlobalPriorityPropertiesEXT(VkQueueFamilyGlobalPriorityPropertiesEXT name);
        VkQueueFamilyGlobalPriorityPropertiesEXT deserialize_VkQueueFamilyGlobalPriorityPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkDebugUtilsObjectNameInfoEXT(VkDebugUtilsObjectNameInfoEXT name);
        VkDebugUtilsObjectNameInfoEXT deserialize_VkDebugUtilsObjectNameInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkDebugUtilsObjectTagInfoEXT(VkDebugUtilsObjectTagInfoEXT name);
        VkDebugUtilsObjectTagInfoEXT deserialize_VkDebugUtilsObjectTagInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkDebugUtilsLabelEXT(VkDebugUtilsLabelEXT name);
        VkDebugUtilsLabelEXT deserialize_VkDebugUtilsLabelEXT(rjson name);
    

        yyjson::writer::object serialize_VkDebugUtilsMessengerCreateInfoEXT(VkDebugUtilsMessengerCreateInfoEXT name);
        VkDebugUtilsMessengerCreateInfoEXT deserialize_VkDebugUtilsMessengerCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkDebugUtilsMessengerCallbackDataEXT(VkDebugUtilsMessengerCallbackDataEXT name);
        VkDebugUtilsMessengerCallbackDataEXT deserialize_VkDebugUtilsMessengerCallbackDataEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT(VkPhysicalDeviceDeviceMemoryReportFeaturesEXT name);
        VkPhysicalDeviceDeviceMemoryReportFeaturesEXT deserialize_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkDeviceDeviceMemoryReportCreateInfoEXT(VkDeviceDeviceMemoryReportCreateInfoEXT name);
        VkDeviceDeviceMemoryReportCreateInfoEXT deserialize_VkDeviceDeviceMemoryReportCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkDeviceMemoryReportCallbackDataEXT(VkDeviceMemoryReportCallbackDataEXT name);
        VkDeviceMemoryReportCallbackDataEXT deserialize_VkDeviceMemoryReportCallbackDataEXT(rjson name);
    

        yyjson::writer::object serialize_VkImportMemoryHostPointerInfoEXT(VkImportMemoryHostPointerInfoEXT name);
        VkImportMemoryHostPointerInfoEXT deserialize_VkImportMemoryHostPointerInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkMemoryHostPointerPropertiesEXT(VkMemoryHostPointerPropertiesEXT name);
        VkMemoryHostPointerPropertiesEXT deserialize_VkMemoryHostPointerPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceExternalMemoryHostPropertiesEXT(VkPhysicalDeviceExternalMemoryHostPropertiesEXT name);
        VkPhysicalDeviceExternalMemoryHostPropertiesEXT deserialize_VkPhysicalDeviceExternalMemoryHostPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceConservativeRasterizationPropertiesEXT(VkPhysicalDeviceConservativeRasterizationPropertiesEXT name);
        VkPhysicalDeviceConservativeRasterizationPropertiesEXT deserialize_VkPhysicalDeviceConservativeRasterizationPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkCalibratedTimestampInfoEXT(VkCalibratedTimestampInfoEXT name);
        VkCalibratedTimestampInfoEXT deserialize_VkCalibratedTimestampInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderCorePropertiesAMD(VkPhysicalDeviceShaderCorePropertiesAMD name);
        VkPhysicalDeviceShaderCorePropertiesAMD deserialize_VkPhysicalDeviceShaderCorePropertiesAMD(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderCoreProperties2AMD(VkPhysicalDeviceShaderCoreProperties2AMD name);
        VkPhysicalDeviceShaderCoreProperties2AMD deserialize_VkPhysicalDeviceShaderCoreProperties2AMD(rjson name);
    

        yyjson::writer::object serialize_VkPipelineRasterizationConservativeStateCreateInfoEXT(VkPipelineRasterizationConservativeStateCreateInfoEXT name);
        VkPipelineRasterizationConservativeStateCreateInfoEXT deserialize_VkPipelineRasterizationConservativeStateCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDescriptorIndexingFeatures(VkPhysicalDeviceDescriptorIndexingFeatures name);
        VkPhysicalDeviceDescriptorIndexingFeatures deserialize_VkPhysicalDeviceDescriptorIndexingFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDescriptorIndexingFeaturesEXT(VkPhysicalDeviceDescriptorIndexingFeaturesEXT name);
        VkPhysicalDeviceDescriptorIndexingFeaturesEXT deserialize_VkPhysicalDeviceDescriptorIndexingFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDescriptorIndexingProperties(VkPhysicalDeviceDescriptorIndexingProperties name);
        VkPhysicalDeviceDescriptorIndexingProperties deserialize_VkPhysicalDeviceDescriptorIndexingProperties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDescriptorIndexingPropertiesEXT(VkPhysicalDeviceDescriptorIndexingPropertiesEXT name);
        VkPhysicalDeviceDescriptorIndexingPropertiesEXT deserialize_VkPhysicalDeviceDescriptorIndexingPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorSetLayoutBindingFlagsCreateInfo(VkDescriptorSetLayoutBindingFlagsCreateInfo name);
        VkDescriptorSetLayoutBindingFlagsCreateInfo deserialize_VkDescriptorSetLayoutBindingFlagsCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(VkDescriptorSetLayoutBindingFlagsCreateInfoEXT name);
        VkDescriptorSetLayoutBindingFlagsCreateInfoEXT deserialize_VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorSetVariableDescriptorCountAllocateInfo(VkDescriptorSetVariableDescriptorCountAllocateInfo name);
        VkDescriptorSetVariableDescriptorCountAllocateInfo deserialize_VkDescriptorSetVariableDescriptorCountAllocateInfo(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(VkDescriptorSetVariableDescriptorCountAllocateInfoEXT name);
        VkDescriptorSetVariableDescriptorCountAllocateInfoEXT deserialize_VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorSetVariableDescriptorCountLayoutSupport(VkDescriptorSetVariableDescriptorCountLayoutSupport name);
        VkDescriptorSetVariableDescriptorCountLayoutSupport deserialize_VkDescriptorSetVariableDescriptorCountLayoutSupport(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(VkDescriptorSetVariableDescriptorCountLayoutSupportEXT name);
        VkDescriptorSetVariableDescriptorCountLayoutSupportEXT deserialize_VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(rjson name);
    

        yyjson::writer::object serialize_VkAttachmentDescription2(VkAttachmentDescription2 name);
        VkAttachmentDescription2 deserialize_VkAttachmentDescription2(rjson name);
    

        yyjson::writer::object serialize_VkAttachmentDescription2KHR(VkAttachmentDescription2KHR name);
        VkAttachmentDescription2KHR deserialize_VkAttachmentDescription2KHR(rjson name);
    

        yyjson::writer::object serialize_VkAttachmentReference2(VkAttachmentReference2 name);
        VkAttachmentReference2 deserialize_VkAttachmentReference2(rjson name);
    

        yyjson::writer::object serialize_VkAttachmentReference2KHR(VkAttachmentReference2KHR name);
        VkAttachmentReference2KHR deserialize_VkAttachmentReference2KHR(rjson name);
    

        yyjson::writer::object serialize_VkSubpassDescription2(VkSubpassDescription2 name);
        VkSubpassDescription2 deserialize_VkSubpassDescription2(rjson name);
    

        yyjson::writer::object serialize_VkSubpassDescription2KHR(VkSubpassDescription2KHR name);
        VkSubpassDescription2KHR deserialize_VkSubpassDescription2KHR(rjson name);
    

        yyjson::writer::object serialize_VkSubpassDependency2(VkSubpassDependency2 name);
        VkSubpassDependency2 deserialize_VkSubpassDependency2(rjson name);
    

        yyjson::writer::object serialize_VkSubpassDependency2KHR(VkSubpassDependency2KHR name);
        VkSubpassDependency2KHR deserialize_VkSubpassDependency2KHR(rjson name);
    

        yyjson::writer::object serialize_VkRenderPassCreateInfo2(VkRenderPassCreateInfo2 name);
        VkRenderPassCreateInfo2 deserialize_VkRenderPassCreateInfo2(rjson name);
    

        yyjson::writer::object serialize_VkRenderPassCreateInfo2KHR(VkRenderPassCreateInfo2KHR name);
        VkRenderPassCreateInfo2KHR deserialize_VkRenderPassCreateInfo2KHR(rjson name);
    

        yyjson::writer::object serialize_VkSubpassBeginInfo(VkSubpassBeginInfo name);
        VkSubpassBeginInfo deserialize_VkSubpassBeginInfo(rjson name);
    

        yyjson::writer::object serialize_VkSubpassBeginInfoKHR(VkSubpassBeginInfoKHR name);
        VkSubpassBeginInfoKHR deserialize_VkSubpassBeginInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkSubpassEndInfo(VkSubpassEndInfo name);
        VkSubpassEndInfo deserialize_VkSubpassEndInfo(rjson name);
    

        yyjson::writer::object serialize_VkSubpassEndInfoKHR(VkSubpassEndInfoKHR name);
        VkSubpassEndInfoKHR deserialize_VkSubpassEndInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceTimelineSemaphoreFeatures(VkPhysicalDeviceTimelineSemaphoreFeatures name);
        VkPhysicalDeviceTimelineSemaphoreFeatures deserialize_VkPhysicalDeviceTimelineSemaphoreFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceTimelineSemaphoreFeaturesKHR(VkPhysicalDeviceTimelineSemaphoreFeaturesKHR name);
        VkPhysicalDeviceTimelineSemaphoreFeaturesKHR deserialize_VkPhysicalDeviceTimelineSemaphoreFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceTimelineSemaphoreProperties(VkPhysicalDeviceTimelineSemaphoreProperties name);
        VkPhysicalDeviceTimelineSemaphoreProperties deserialize_VkPhysicalDeviceTimelineSemaphoreProperties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceTimelineSemaphorePropertiesKHR(VkPhysicalDeviceTimelineSemaphorePropertiesKHR name);
        VkPhysicalDeviceTimelineSemaphorePropertiesKHR deserialize_VkPhysicalDeviceTimelineSemaphorePropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreTypeCreateInfo(VkSemaphoreTypeCreateInfo name);
        VkSemaphoreTypeCreateInfo deserialize_VkSemaphoreTypeCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreTypeCreateInfoKHR(VkSemaphoreTypeCreateInfoKHR name);
        VkSemaphoreTypeCreateInfoKHR deserialize_VkSemaphoreTypeCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkTimelineSemaphoreSubmitInfo(VkTimelineSemaphoreSubmitInfo name);
        VkTimelineSemaphoreSubmitInfo deserialize_VkTimelineSemaphoreSubmitInfo(rjson name);
    

        yyjson::writer::object serialize_VkTimelineSemaphoreSubmitInfoKHR(VkTimelineSemaphoreSubmitInfoKHR name);
        VkTimelineSemaphoreSubmitInfoKHR deserialize_VkTimelineSemaphoreSubmitInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreWaitInfo(VkSemaphoreWaitInfo name);
        VkSemaphoreWaitInfo deserialize_VkSemaphoreWaitInfo(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreWaitInfoKHR(VkSemaphoreWaitInfoKHR name);
        VkSemaphoreWaitInfoKHR deserialize_VkSemaphoreWaitInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreSignalInfo(VkSemaphoreSignalInfo name);
        VkSemaphoreSignalInfo deserialize_VkSemaphoreSignalInfo(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreSignalInfoKHR(VkSemaphoreSignalInfoKHR name);
        VkSemaphoreSignalInfoKHR deserialize_VkSemaphoreSignalInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVertexInputBindingDivisorDescriptionEXT(VkVertexInputBindingDivisorDescriptionEXT name);
        VkVertexInputBindingDivisorDescriptionEXT deserialize_VkVertexInputBindingDivisorDescriptionEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineVertexInputDivisorStateCreateInfoEXT(VkPipelineVertexInputDivisorStateCreateInfoEXT name);
        VkPipelineVertexInputDivisorStateCreateInfoEXT deserialize_VkPipelineVertexInputDivisorStateCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT name);
        VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT deserialize_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePCIBusInfoPropertiesEXT(VkPhysicalDevicePCIBusInfoPropertiesEXT name);
        VkPhysicalDevicePCIBusInfoPropertiesEXT deserialize_VkPhysicalDevicePCIBusInfoPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkCommandBufferInheritanceConditionalRenderingInfoEXT(VkCommandBufferInheritanceConditionalRenderingInfoEXT name);
        VkCommandBufferInheritanceConditionalRenderingInfoEXT deserialize_VkCommandBufferInheritanceConditionalRenderingInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevice8BitStorageFeatures(VkPhysicalDevice8BitStorageFeatures name);
        VkPhysicalDevice8BitStorageFeatures deserialize_VkPhysicalDevice8BitStorageFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevice8BitStorageFeaturesKHR(VkPhysicalDevice8BitStorageFeaturesKHR name);
        VkPhysicalDevice8BitStorageFeaturesKHR deserialize_VkPhysicalDevice8BitStorageFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceConditionalRenderingFeaturesEXT(VkPhysicalDeviceConditionalRenderingFeaturesEXT name);
        VkPhysicalDeviceConditionalRenderingFeaturesEXT deserialize_VkPhysicalDeviceConditionalRenderingFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceVulkanMemoryModelFeatures(VkPhysicalDeviceVulkanMemoryModelFeatures name);
        VkPhysicalDeviceVulkanMemoryModelFeatures deserialize_VkPhysicalDeviceVulkanMemoryModelFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR(VkPhysicalDeviceVulkanMemoryModelFeaturesKHR name);
        VkPhysicalDeviceVulkanMemoryModelFeaturesKHR deserialize_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderAtomicInt64Features(VkPhysicalDeviceShaderAtomicInt64Features name);
        VkPhysicalDeviceShaderAtomicInt64Features deserialize_VkPhysicalDeviceShaderAtomicInt64Features(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR(VkPhysicalDeviceShaderAtomicInt64FeaturesKHR name);
        VkPhysicalDeviceShaderAtomicInt64FeaturesKHR deserialize_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT name);
        VkPhysicalDeviceShaderAtomicFloatFeaturesEXT deserialize_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT name);
        VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT deserialize_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT(VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT name);
        VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT deserialize_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkQueueFamilyCheckpointPropertiesNV(VkQueueFamilyCheckpointPropertiesNV name);
        VkQueueFamilyCheckpointPropertiesNV deserialize_VkQueueFamilyCheckpointPropertiesNV(rjson name);
    

        yyjson::writer::object serialize_VkCheckpointDataNV(VkCheckpointDataNV name);
        VkCheckpointDataNV deserialize_VkCheckpointDataNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDepthStencilResolveProperties(VkPhysicalDeviceDepthStencilResolveProperties name);
        VkPhysicalDeviceDepthStencilResolveProperties deserialize_VkPhysicalDeviceDepthStencilResolveProperties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDepthStencilResolvePropertiesKHR(VkPhysicalDeviceDepthStencilResolvePropertiesKHR name);
        VkPhysicalDeviceDepthStencilResolvePropertiesKHR deserialize_VkPhysicalDeviceDepthStencilResolvePropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkSubpassDescriptionDepthStencilResolve(VkSubpassDescriptionDepthStencilResolve name);
        VkSubpassDescriptionDepthStencilResolve deserialize_VkSubpassDescriptionDepthStencilResolve(rjson name);
    

        yyjson::writer::object serialize_VkSubpassDescriptionDepthStencilResolveKHR(VkSubpassDescriptionDepthStencilResolveKHR name);
        VkSubpassDescriptionDepthStencilResolveKHR deserialize_VkSubpassDescriptionDepthStencilResolveKHR(rjson name);
    

        yyjson::writer::object serialize_VkImageViewASTCDecodeModeEXT(VkImageViewASTCDecodeModeEXT name);
        VkImageViewASTCDecodeModeEXT deserialize_VkImageViewASTCDecodeModeEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceASTCDecodeFeaturesEXT(VkPhysicalDeviceASTCDecodeFeaturesEXT name);
        VkPhysicalDeviceASTCDecodeFeaturesEXT deserialize_VkPhysicalDeviceASTCDecodeFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceTransformFeedbackFeaturesEXT(VkPhysicalDeviceTransformFeedbackFeaturesEXT name);
        VkPhysicalDeviceTransformFeedbackFeaturesEXT deserialize_VkPhysicalDeviceTransformFeedbackFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceTransformFeedbackPropertiesEXT(VkPhysicalDeviceTransformFeedbackPropertiesEXT name);
        VkPhysicalDeviceTransformFeedbackPropertiesEXT deserialize_VkPhysicalDeviceTransformFeedbackPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineRasterizationStateStreamCreateInfoEXT(VkPipelineRasterizationStateStreamCreateInfoEXT name);
        VkPipelineRasterizationStateStreamCreateInfoEXT deserialize_VkPipelineRasterizationStateStreamCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV name);
        VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV deserialize_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkPipelineRepresentativeFragmentTestStateCreateInfoNV(VkPipelineRepresentativeFragmentTestStateCreateInfoNV name);
        VkPipelineRepresentativeFragmentTestStateCreateInfoNV deserialize_VkPipelineRepresentativeFragmentTestStateCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceExclusiveScissorFeaturesNV(VkPhysicalDeviceExclusiveScissorFeaturesNV name);
        VkPhysicalDeviceExclusiveScissorFeaturesNV deserialize_VkPhysicalDeviceExclusiveScissorFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkPipelineViewportExclusiveScissorStateCreateInfoNV(VkPipelineViewportExclusiveScissorStateCreateInfoNV name);
        VkPipelineViewportExclusiveScissorStateCreateInfoNV deserialize_VkPipelineViewportExclusiveScissorStateCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceCornerSampledImageFeaturesNV(VkPhysicalDeviceCornerSampledImageFeaturesNV name);
        VkPhysicalDeviceCornerSampledImageFeaturesNV deserialize_VkPhysicalDeviceCornerSampledImageFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV(VkPhysicalDeviceComputeShaderDerivativesFeaturesNV name);
        VkPhysicalDeviceComputeShaderDerivativesFeaturesNV deserialize_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderImageFootprintFeaturesNV(VkPhysicalDeviceShaderImageFootprintFeaturesNV name);
        VkPhysicalDeviceShaderImageFootprintFeaturesNV deserialize_VkPhysicalDeviceShaderImageFootprintFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV name);
        VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV deserialize_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV(VkPhysicalDeviceCopyMemoryIndirectFeaturesNV name);
        VkPhysicalDeviceCopyMemoryIndirectFeaturesNV deserialize_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceCopyMemoryIndirectPropertiesNV(VkPhysicalDeviceCopyMemoryIndirectPropertiesNV name);
        VkPhysicalDeviceCopyMemoryIndirectPropertiesNV deserialize_VkPhysicalDeviceCopyMemoryIndirectPropertiesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMemoryDecompressionFeaturesNV(VkPhysicalDeviceMemoryDecompressionFeaturesNV name);
        VkPhysicalDeviceMemoryDecompressionFeaturesNV deserialize_VkPhysicalDeviceMemoryDecompressionFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMemoryDecompressionPropertiesNV(VkPhysicalDeviceMemoryDecompressionPropertiesNV name);
        VkPhysicalDeviceMemoryDecompressionPropertiesNV deserialize_VkPhysicalDeviceMemoryDecompressionPropertiesNV(rjson name);
    

        yyjson::writer::object serialize_VkShadingRatePaletteNV(VkShadingRatePaletteNV name);
        VkShadingRatePaletteNV deserialize_VkShadingRatePaletteNV(rjson name);
    

        yyjson::writer::object serialize_VkPipelineViewportShadingRateImageStateCreateInfoNV(VkPipelineViewportShadingRateImageStateCreateInfoNV name);
        VkPipelineViewportShadingRateImageStateCreateInfoNV deserialize_VkPipelineViewportShadingRateImageStateCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShadingRateImageFeaturesNV(VkPhysicalDeviceShadingRateImageFeaturesNV name);
        VkPhysicalDeviceShadingRateImageFeaturesNV deserialize_VkPhysicalDeviceShadingRateImageFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShadingRateImagePropertiesNV(VkPhysicalDeviceShadingRateImagePropertiesNV name);
        VkPhysicalDeviceShadingRateImagePropertiesNV deserialize_VkPhysicalDeviceShadingRateImagePropertiesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI(VkPhysicalDeviceInvocationMaskFeaturesHUAWEI name);
        VkPhysicalDeviceInvocationMaskFeaturesHUAWEI deserialize_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI(rjson name);
    

        yyjson::writer::object serialize_VkCoarseSampleLocationNV(VkCoarseSampleLocationNV name);
        VkCoarseSampleLocationNV deserialize_VkCoarseSampleLocationNV(rjson name);
    

        yyjson::writer::object serialize_VkCoarseSampleOrderCustomNV(VkCoarseSampleOrderCustomNV name);
        VkCoarseSampleOrderCustomNV deserialize_VkCoarseSampleOrderCustomNV(rjson name);
    

        yyjson::writer::object serialize_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV(VkPipelineViewportCoarseSampleOrderStateCreateInfoNV name);
        VkPipelineViewportCoarseSampleOrderStateCreateInfoNV deserialize_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMeshShaderFeaturesNV(VkPhysicalDeviceMeshShaderFeaturesNV name);
        VkPhysicalDeviceMeshShaderFeaturesNV deserialize_VkPhysicalDeviceMeshShaderFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMeshShaderPropertiesNV(VkPhysicalDeviceMeshShaderPropertiesNV name);
        VkPhysicalDeviceMeshShaderPropertiesNV deserialize_VkPhysicalDeviceMeshShaderPropertiesNV(rjson name);
    

        yyjson::writer::object serialize_VkDrawMeshTasksIndirectCommandNV(VkDrawMeshTasksIndirectCommandNV name);
        VkDrawMeshTasksIndirectCommandNV deserialize_VkDrawMeshTasksIndirectCommandNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMeshShaderFeaturesEXT(VkPhysicalDeviceMeshShaderFeaturesEXT name);
        VkPhysicalDeviceMeshShaderFeaturesEXT deserialize_VkPhysicalDeviceMeshShaderFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMeshShaderPropertiesEXT(VkPhysicalDeviceMeshShaderPropertiesEXT name);
        VkPhysicalDeviceMeshShaderPropertiesEXT deserialize_VkPhysicalDeviceMeshShaderPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkDrawMeshTasksIndirectCommandEXT(VkDrawMeshTasksIndirectCommandEXT name);
        VkDrawMeshTasksIndirectCommandEXT deserialize_VkDrawMeshTasksIndirectCommandEXT(rjson name);
    

        yyjson::writer::object serialize_VkRayTracingShaderGroupCreateInfoNV(VkRayTracingShaderGroupCreateInfoNV name);
        VkRayTracingShaderGroupCreateInfoNV deserialize_VkRayTracingShaderGroupCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkRayTracingShaderGroupCreateInfoKHR(VkRayTracingShaderGroupCreateInfoKHR name);
        VkRayTracingShaderGroupCreateInfoKHR deserialize_VkRayTracingShaderGroupCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkRayTracingPipelineCreateInfoNV(VkRayTracingPipelineCreateInfoNV name);
        VkRayTracingPipelineCreateInfoNV deserialize_VkRayTracingPipelineCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkRayTracingPipelineCreateInfoKHR(VkRayTracingPipelineCreateInfoKHR name);
        VkRayTracingPipelineCreateInfoKHR deserialize_VkRayTracingPipelineCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkGeometryTrianglesNV(VkGeometryTrianglesNV name);
        VkGeometryTrianglesNV deserialize_VkGeometryTrianglesNV(rjson name);
    

        yyjson::writer::object serialize_VkGeometryAABBNV(VkGeometryAABBNV name);
        VkGeometryAABBNV deserialize_VkGeometryAABBNV(rjson name);
    

        yyjson::writer::object serialize_VkGeometryDataNV(VkGeometryDataNV name);
        VkGeometryDataNV deserialize_VkGeometryDataNV(rjson name);
    

        yyjson::writer::object serialize_VkGeometryNV(VkGeometryNV name);
        VkGeometryNV deserialize_VkGeometryNV(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureInfoNV(VkAccelerationStructureInfoNV name);
        VkAccelerationStructureInfoNV deserialize_VkAccelerationStructureInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureCreateInfoNV(VkAccelerationStructureCreateInfoNV name);
        VkAccelerationStructureCreateInfoNV deserialize_VkAccelerationStructureCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkBindAccelerationStructureMemoryInfoNV(VkBindAccelerationStructureMemoryInfoNV name);
        VkBindAccelerationStructureMemoryInfoNV deserialize_VkBindAccelerationStructureMemoryInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkWriteDescriptorSetAccelerationStructureKHR(VkWriteDescriptorSetAccelerationStructureKHR name);
        VkWriteDescriptorSetAccelerationStructureKHR deserialize_VkWriteDescriptorSetAccelerationStructureKHR(rjson name);
    

        yyjson::writer::object serialize_VkWriteDescriptorSetAccelerationStructureNV(VkWriteDescriptorSetAccelerationStructureNV name);
        VkWriteDescriptorSetAccelerationStructureNV deserialize_VkWriteDescriptorSetAccelerationStructureNV(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureMemoryRequirementsInfoNV(VkAccelerationStructureMemoryRequirementsInfoNV name);
        VkAccelerationStructureMemoryRequirementsInfoNV deserialize_VkAccelerationStructureMemoryRequirementsInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceAccelerationStructureFeaturesKHR(VkPhysicalDeviceAccelerationStructureFeaturesKHR name);
        VkPhysicalDeviceAccelerationStructureFeaturesKHR deserialize_VkPhysicalDeviceAccelerationStructureFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceRayTracingPipelineFeaturesKHR(VkPhysicalDeviceRayTracingPipelineFeaturesKHR name);
        VkPhysicalDeviceRayTracingPipelineFeaturesKHR deserialize_VkPhysicalDeviceRayTracingPipelineFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceRayQueryFeaturesKHR(VkPhysicalDeviceRayQueryFeaturesKHR name);
        VkPhysicalDeviceRayQueryFeaturesKHR deserialize_VkPhysicalDeviceRayQueryFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceAccelerationStructurePropertiesKHR(VkPhysicalDeviceAccelerationStructurePropertiesKHR name);
        VkPhysicalDeviceAccelerationStructurePropertiesKHR deserialize_VkPhysicalDeviceAccelerationStructurePropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceRayTracingPipelinePropertiesKHR(VkPhysicalDeviceRayTracingPipelinePropertiesKHR name);
        VkPhysicalDeviceRayTracingPipelinePropertiesKHR deserialize_VkPhysicalDeviceRayTracingPipelinePropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceRayTracingPropertiesNV(VkPhysicalDeviceRayTracingPropertiesNV name);
        VkPhysicalDeviceRayTracingPropertiesNV deserialize_VkPhysicalDeviceRayTracingPropertiesNV(rjson name);
    

        yyjson::writer::object serialize_VkStridedDeviceAddressRegionKHR(VkStridedDeviceAddressRegionKHR name);
        VkStridedDeviceAddressRegionKHR deserialize_VkStridedDeviceAddressRegionKHR(rjson name);
    

        yyjson::writer::object serialize_VkTraceRaysIndirectCommandKHR(VkTraceRaysIndirectCommandKHR name);
        VkTraceRaysIndirectCommandKHR deserialize_VkTraceRaysIndirectCommandKHR(rjson name);
    

        yyjson::writer::object serialize_VkTraceRaysIndirectCommand2KHR(VkTraceRaysIndirectCommand2KHR name);
        VkTraceRaysIndirectCommand2KHR deserialize_VkTraceRaysIndirectCommand2KHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR(VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR name);
        VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR deserialize_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkDrmFormatModifierPropertiesListEXT(VkDrmFormatModifierPropertiesListEXT name);
        VkDrmFormatModifierPropertiesListEXT deserialize_VkDrmFormatModifierPropertiesListEXT(rjson name);
    

        yyjson::writer::object serialize_VkDrmFormatModifierPropertiesEXT(VkDrmFormatModifierPropertiesEXT name);
        VkDrmFormatModifierPropertiesEXT deserialize_VkDrmFormatModifierPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceImageDrmFormatModifierInfoEXT(VkPhysicalDeviceImageDrmFormatModifierInfoEXT name);
        VkPhysicalDeviceImageDrmFormatModifierInfoEXT deserialize_VkPhysicalDeviceImageDrmFormatModifierInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkImageDrmFormatModifierListCreateInfoEXT(VkImageDrmFormatModifierListCreateInfoEXT name);
        VkImageDrmFormatModifierListCreateInfoEXT deserialize_VkImageDrmFormatModifierListCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkImageDrmFormatModifierExplicitCreateInfoEXT(VkImageDrmFormatModifierExplicitCreateInfoEXT name);
        VkImageDrmFormatModifierExplicitCreateInfoEXT deserialize_VkImageDrmFormatModifierExplicitCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkImageDrmFormatModifierPropertiesEXT(VkImageDrmFormatModifierPropertiesEXT name);
        VkImageDrmFormatModifierPropertiesEXT deserialize_VkImageDrmFormatModifierPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkImageStencilUsageCreateInfo(VkImageStencilUsageCreateInfo name);
        VkImageStencilUsageCreateInfo deserialize_VkImageStencilUsageCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkImageStencilUsageCreateInfoEXT(VkImageStencilUsageCreateInfoEXT name);
        VkImageStencilUsageCreateInfoEXT deserialize_VkImageStencilUsageCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkDeviceMemoryOverallocationCreateInfoAMD(VkDeviceMemoryOverallocationCreateInfoAMD name);
        VkDeviceMemoryOverallocationCreateInfoAMD deserialize_VkDeviceMemoryOverallocationCreateInfoAMD(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFragmentDensityMapFeaturesEXT(VkPhysicalDeviceFragmentDensityMapFeaturesEXT name);
        VkPhysicalDeviceFragmentDensityMapFeaturesEXT deserialize_VkPhysicalDeviceFragmentDensityMapFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT name);
        VkPhysicalDeviceFragmentDensityMap2FeaturesEXT deserialize_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM name);
        VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM deserialize_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFragmentDensityMapPropertiesEXT(VkPhysicalDeviceFragmentDensityMapPropertiesEXT name);
        VkPhysicalDeviceFragmentDensityMapPropertiesEXT deserialize_VkPhysicalDeviceFragmentDensityMapPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT(VkPhysicalDeviceFragmentDensityMap2PropertiesEXT name);
        VkPhysicalDeviceFragmentDensityMap2PropertiesEXT deserialize_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM(VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM name);
        VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM deserialize_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM(rjson name);
    

        yyjson::writer::object serialize_VkRenderPassFragmentDensityMapCreateInfoEXT(VkRenderPassFragmentDensityMapCreateInfoEXT name);
        VkRenderPassFragmentDensityMapCreateInfoEXT deserialize_VkRenderPassFragmentDensityMapCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkSubpassFragmentDensityMapOffsetEndInfoQCOM(VkSubpassFragmentDensityMapOffsetEndInfoQCOM name);
        VkSubpassFragmentDensityMapOffsetEndInfoQCOM deserialize_VkSubpassFragmentDensityMapOffsetEndInfoQCOM(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceScalarBlockLayoutFeatures(VkPhysicalDeviceScalarBlockLayoutFeatures name);
        VkPhysicalDeviceScalarBlockLayoutFeatures deserialize_VkPhysicalDeviceScalarBlockLayoutFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT(VkPhysicalDeviceScalarBlockLayoutFeaturesEXT name);
        VkPhysicalDeviceScalarBlockLayoutFeaturesEXT deserialize_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkSurfaceProtectedCapabilitiesKHR(VkSurfaceProtectedCapabilitiesKHR name);
        VkSurfaceProtectedCapabilitiesKHR deserialize_VkSurfaceProtectedCapabilitiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceUniformBufferStandardLayoutFeatures(VkPhysicalDeviceUniformBufferStandardLayoutFeatures name);
        VkPhysicalDeviceUniformBufferStandardLayoutFeatures deserialize_VkPhysicalDeviceUniformBufferStandardLayoutFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR(VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR name);
        VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR deserialize_VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDepthClipEnableFeaturesEXT(VkPhysicalDeviceDepthClipEnableFeaturesEXT name);
        VkPhysicalDeviceDepthClipEnableFeaturesEXT deserialize_VkPhysicalDeviceDepthClipEnableFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineRasterizationDepthClipStateCreateInfoEXT(VkPipelineRasterizationDepthClipStateCreateInfoEXT name);
        VkPipelineRasterizationDepthClipStateCreateInfoEXT deserialize_VkPipelineRasterizationDepthClipStateCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMemoryBudgetPropertiesEXT(VkPhysicalDeviceMemoryBudgetPropertiesEXT name);
        VkPhysicalDeviceMemoryBudgetPropertiesEXT deserialize_VkPhysicalDeviceMemoryBudgetPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMemoryPriorityFeaturesEXT(VkPhysicalDeviceMemoryPriorityFeaturesEXT name);
        VkPhysicalDeviceMemoryPriorityFeaturesEXT deserialize_VkPhysicalDeviceMemoryPriorityFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkMemoryPriorityAllocateInfoEXT(VkMemoryPriorityAllocateInfoEXT name);
        VkMemoryPriorityAllocateInfoEXT deserialize_VkMemoryPriorityAllocateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT name);
        VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT deserialize_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceBufferDeviceAddressFeatures(VkPhysicalDeviceBufferDeviceAddressFeatures name);
        VkPhysicalDeviceBufferDeviceAddressFeatures deserialize_VkPhysicalDeviceBufferDeviceAddressFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceBufferDeviceAddressFeaturesKHR(VkPhysicalDeviceBufferDeviceAddressFeaturesKHR name);
        VkPhysicalDeviceBufferDeviceAddressFeaturesKHR deserialize_VkPhysicalDeviceBufferDeviceAddressFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT name);
        VkPhysicalDeviceBufferDeviceAddressFeaturesEXT deserialize_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceBufferAddressFeaturesEXT(VkPhysicalDeviceBufferAddressFeaturesEXT name);
        VkPhysicalDeviceBufferAddressFeaturesEXT deserialize_VkPhysicalDeviceBufferAddressFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkBufferDeviceAddressInfo(VkBufferDeviceAddressInfo name);
        VkBufferDeviceAddressInfo deserialize_VkBufferDeviceAddressInfo(rjson name);
    

        yyjson::writer::object serialize_VkBufferDeviceAddressInfoKHR(VkBufferDeviceAddressInfoKHR name);
        VkBufferDeviceAddressInfoKHR deserialize_VkBufferDeviceAddressInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkBufferDeviceAddressInfoEXT(VkBufferDeviceAddressInfoEXT name);
        VkBufferDeviceAddressInfoEXT deserialize_VkBufferDeviceAddressInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkBufferOpaqueCaptureAddressCreateInfo(VkBufferOpaqueCaptureAddressCreateInfo name);
        VkBufferOpaqueCaptureAddressCreateInfo deserialize_VkBufferOpaqueCaptureAddressCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkBufferOpaqueCaptureAddressCreateInfoKHR(VkBufferOpaqueCaptureAddressCreateInfoKHR name);
        VkBufferOpaqueCaptureAddressCreateInfoKHR deserialize_VkBufferOpaqueCaptureAddressCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkBufferDeviceAddressCreateInfoEXT(VkBufferDeviceAddressCreateInfoEXT name);
        VkBufferDeviceAddressCreateInfoEXT deserialize_VkBufferDeviceAddressCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceImageViewImageFormatInfoEXT(VkPhysicalDeviceImageViewImageFormatInfoEXT name);
        VkPhysicalDeviceImageViewImageFormatInfoEXT deserialize_VkPhysicalDeviceImageViewImageFormatInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkFilterCubicImageViewImageFormatPropertiesEXT(VkFilterCubicImageViewImageFormatPropertiesEXT name);
        VkFilterCubicImageViewImageFormatPropertiesEXT deserialize_VkFilterCubicImageViewImageFormatPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceImagelessFramebufferFeatures(VkPhysicalDeviceImagelessFramebufferFeatures name);
        VkPhysicalDeviceImagelessFramebufferFeatures deserialize_VkPhysicalDeviceImagelessFramebufferFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceImagelessFramebufferFeaturesKHR(VkPhysicalDeviceImagelessFramebufferFeaturesKHR name);
        VkPhysicalDeviceImagelessFramebufferFeaturesKHR deserialize_VkPhysicalDeviceImagelessFramebufferFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkFramebufferAttachmentsCreateInfo(VkFramebufferAttachmentsCreateInfo name);
        VkFramebufferAttachmentsCreateInfo deserialize_VkFramebufferAttachmentsCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkFramebufferAttachmentsCreateInfoKHR(VkFramebufferAttachmentsCreateInfoKHR name);
        VkFramebufferAttachmentsCreateInfoKHR deserialize_VkFramebufferAttachmentsCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkFramebufferAttachmentImageInfo(VkFramebufferAttachmentImageInfo name);
        VkFramebufferAttachmentImageInfo deserialize_VkFramebufferAttachmentImageInfo(rjson name);
    

        yyjson::writer::object serialize_VkFramebufferAttachmentImageInfoKHR(VkFramebufferAttachmentImageInfoKHR name);
        VkFramebufferAttachmentImageInfoKHR deserialize_VkFramebufferAttachmentImageInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkRenderPassAttachmentBeginInfo(VkRenderPassAttachmentBeginInfo name);
        VkRenderPassAttachmentBeginInfo deserialize_VkRenderPassAttachmentBeginInfo(rjson name);
    

        yyjson::writer::object serialize_VkRenderPassAttachmentBeginInfoKHR(VkRenderPassAttachmentBeginInfoKHR name);
        VkRenderPassAttachmentBeginInfoKHR deserialize_VkRenderPassAttachmentBeginInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceTextureCompressionASTCHDRFeatures(VkPhysicalDeviceTextureCompressionASTCHDRFeatures name);
        VkPhysicalDeviceTextureCompressionASTCHDRFeatures deserialize_VkPhysicalDeviceTextureCompressionASTCHDRFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT(VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT name);
        VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT deserialize_VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceCooperativeMatrixFeaturesNV(VkPhysicalDeviceCooperativeMatrixFeaturesNV name);
        VkPhysicalDeviceCooperativeMatrixFeaturesNV deserialize_VkPhysicalDeviceCooperativeMatrixFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceCooperativeMatrixPropertiesNV(VkPhysicalDeviceCooperativeMatrixPropertiesNV name);
        VkPhysicalDeviceCooperativeMatrixPropertiesNV deserialize_VkPhysicalDeviceCooperativeMatrixPropertiesNV(rjson name);
    

        yyjson::writer::object serialize_VkCooperativeMatrixPropertiesNV(VkCooperativeMatrixPropertiesNV name);
        VkCooperativeMatrixPropertiesNV deserialize_VkCooperativeMatrixPropertiesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT name);
        VkPhysicalDeviceYcbcrImageArraysFeaturesEXT deserialize_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkImageViewHandleInfoNVX(VkImageViewHandleInfoNVX name);
        VkImageViewHandleInfoNVX deserialize_VkImageViewHandleInfoNVX(rjson name);
    

        yyjson::writer::object serialize_VkImageViewAddressPropertiesNVX(VkImageViewAddressPropertiesNVX name);
        VkImageViewAddressPropertiesNVX deserialize_VkImageViewAddressPropertiesNVX(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCreationFeedback(VkPipelineCreationFeedback name);
        VkPipelineCreationFeedback deserialize_VkPipelineCreationFeedback(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCreationFeedbackEXT(VkPipelineCreationFeedbackEXT name);
        VkPipelineCreationFeedbackEXT deserialize_VkPipelineCreationFeedbackEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCreationFeedbackCreateInfo(VkPipelineCreationFeedbackCreateInfo name);
        VkPipelineCreationFeedbackCreateInfo deserialize_VkPipelineCreationFeedbackCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCreationFeedbackCreateInfoEXT(VkPipelineCreationFeedbackCreateInfoEXT name);
        VkPipelineCreationFeedbackCreateInfoEXT deserialize_VkPipelineCreationFeedbackCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePresentBarrierFeaturesNV(VkPhysicalDevicePresentBarrierFeaturesNV name);
        VkPhysicalDevicePresentBarrierFeaturesNV deserialize_VkPhysicalDevicePresentBarrierFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkSurfaceCapabilitiesPresentBarrierNV(VkSurfaceCapabilitiesPresentBarrierNV name);
        VkSurfaceCapabilitiesPresentBarrierNV deserialize_VkSurfaceCapabilitiesPresentBarrierNV(rjson name);
    

        yyjson::writer::object serialize_VkSwapchainPresentBarrierCreateInfoNV(VkSwapchainPresentBarrierCreateInfoNV name);
        VkSwapchainPresentBarrierCreateInfoNV deserialize_VkSwapchainPresentBarrierCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePerformanceQueryFeaturesKHR(VkPhysicalDevicePerformanceQueryFeaturesKHR name);
        VkPhysicalDevicePerformanceQueryFeaturesKHR deserialize_VkPhysicalDevicePerformanceQueryFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePerformanceQueryPropertiesKHR(VkPhysicalDevicePerformanceQueryPropertiesKHR name);
        VkPhysicalDevicePerformanceQueryPropertiesKHR deserialize_VkPhysicalDevicePerformanceQueryPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPerformanceCounterKHR(VkPerformanceCounterKHR name);
        VkPerformanceCounterKHR deserialize_VkPerformanceCounterKHR(rjson name);
    

        yyjson::writer::object serialize_VkPerformanceCounterDescriptionKHR(VkPerformanceCounterDescriptionKHR name);
        VkPerformanceCounterDescriptionKHR deserialize_VkPerformanceCounterDescriptionKHR(rjson name);
    

        yyjson::writer::object serialize_VkQueryPoolPerformanceCreateInfoKHR(VkQueryPoolPerformanceCreateInfoKHR name);
        VkQueryPoolPerformanceCreateInfoKHR deserialize_VkQueryPoolPerformanceCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPerformanceCounterResultKHR(VkPerformanceCounterResultKHR name);
        VkPerformanceCounterResultKHR deserialize_VkPerformanceCounterResultKHR(rjson name);
    

        yyjson::writer::object serialize_VkAcquireProfilingLockInfoKHR(VkAcquireProfilingLockInfoKHR name);
        VkAcquireProfilingLockInfoKHR deserialize_VkAcquireProfilingLockInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPerformanceQuerySubmitInfoKHR(VkPerformanceQuerySubmitInfoKHR name);
        VkPerformanceQuerySubmitInfoKHR deserialize_VkPerformanceQuerySubmitInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkHeadlessSurfaceCreateInfoEXT(VkHeadlessSurfaceCreateInfoEXT name);
        VkHeadlessSurfaceCreateInfoEXT deserialize_VkHeadlessSurfaceCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceCoverageReductionModeFeaturesNV(VkPhysicalDeviceCoverageReductionModeFeaturesNV name);
        VkPhysicalDeviceCoverageReductionModeFeaturesNV deserialize_VkPhysicalDeviceCoverageReductionModeFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCoverageReductionStateCreateInfoNV(VkPipelineCoverageReductionStateCreateInfoNV name);
        VkPipelineCoverageReductionStateCreateInfoNV deserialize_VkPipelineCoverageReductionStateCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkFramebufferMixedSamplesCombinationNV(VkFramebufferMixedSamplesCombinationNV name);
        VkFramebufferMixedSamplesCombinationNV deserialize_VkFramebufferMixedSamplesCombinationNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL name);
        VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL deserialize_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(rjson name);
    

        yyjson::writer::object serialize_VkPerformanceValueDataINTEL(VkPerformanceValueDataINTEL name);
        VkPerformanceValueDataINTEL deserialize_VkPerformanceValueDataINTEL(rjson name);
    

        yyjson::writer::object serialize_VkPerformanceValueINTEL(VkPerformanceValueINTEL name);
        VkPerformanceValueINTEL deserialize_VkPerformanceValueINTEL(rjson name);
    

        yyjson::writer::object serialize_VkInitializePerformanceApiInfoINTEL(VkInitializePerformanceApiInfoINTEL name);
        VkInitializePerformanceApiInfoINTEL deserialize_VkInitializePerformanceApiInfoINTEL(rjson name);
    

        yyjson::writer::object serialize_VkQueryPoolPerformanceQueryCreateInfoINTEL(VkQueryPoolPerformanceQueryCreateInfoINTEL name);
        VkQueryPoolPerformanceQueryCreateInfoINTEL deserialize_VkQueryPoolPerformanceQueryCreateInfoINTEL(rjson name);
    

        yyjson::writer::object serialize_VkQueryPoolCreateInfoINTEL(VkQueryPoolCreateInfoINTEL name);
        VkQueryPoolCreateInfoINTEL deserialize_VkQueryPoolCreateInfoINTEL(rjson name);
    

        yyjson::writer::object serialize_VkPerformanceMarkerInfoINTEL(VkPerformanceMarkerInfoINTEL name);
        VkPerformanceMarkerInfoINTEL deserialize_VkPerformanceMarkerInfoINTEL(rjson name);
    

        yyjson::writer::object serialize_VkPerformanceStreamMarkerInfoINTEL(VkPerformanceStreamMarkerInfoINTEL name);
        VkPerformanceStreamMarkerInfoINTEL deserialize_VkPerformanceStreamMarkerInfoINTEL(rjson name);
    

        yyjson::writer::object serialize_VkPerformanceOverrideInfoINTEL(VkPerformanceOverrideInfoINTEL name);
        VkPerformanceOverrideInfoINTEL deserialize_VkPerformanceOverrideInfoINTEL(rjson name);
    

        yyjson::writer::object serialize_VkPerformanceConfigurationAcquireInfoINTEL(VkPerformanceConfigurationAcquireInfoINTEL name);
        VkPerformanceConfigurationAcquireInfoINTEL deserialize_VkPerformanceConfigurationAcquireInfoINTEL(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderClockFeaturesKHR(VkPhysicalDeviceShaderClockFeaturesKHR name);
        VkPhysicalDeviceShaderClockFeaturesKHR deserialize_VkPhysicalDeviceShaderClockFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceIndexTypeUint8FeaturesEXT(VkPhysicalDeviceIndexTypeUint8FeaturesEXT name);
        VkPhysicalDeviceIndexTypeUint8FeaturesEXT deserialize_VkPhysicalDeviceIndexTypeUint8FeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV(VkPhysicalDeviceShaderSMBuiltinsPropertiesNV name);
        VkPhysicalDeviceShaderSMBuiltinsPropertiesNV deserialize_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV(VkPhysicalDeviceShaderSMBuiltinsFeaturesNV name);
        VkPhysicalDeviceShaderSMBuiltinsFeaturesNV deserialize_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT name);
        VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT deserialize_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures name);
        VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures deserialize_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR(VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR name);
        VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR deserialize_VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkAttachmentReferenceStencilLayout(VkAttachmentReferenceStencilLayout name);
        VkAttachmentReferenceStencilLayout deserialize_VkAttachmentReferenceStencilLayout(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT name);
        VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT deserialize_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkAttachmentReferenceStencilLayoutKHR(VkAttachmentReferenceStencilLayoutKHR name);
        VkAttachmentReferenceStencilLayoutKHR deserialize_VkAttachmentReferenceStencilLayoutKHR(rjson name);
    

        yyjson::writer::object serialize_VkAttachmentDescriptionStencilLayout(VkAttachmentDescriptionStencilLayout name);
        VkAttachmentDescriptionStencilLayout deserialize_VkAttachmentDescriptionStencilLayout(rjson name);
    

        yyjson::writer::object serialize_VkAttachmentDescriptionStencilLayoutKHR(VkAttachmentDescriptionStencilLayoutKHR name);
        VkAttachmentDescriptionStencilLayoutKHR deserialize_VkAttachmentDescriptionStencilLayoutKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR name);
        VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR deserialize_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPipelineInfoKHR(VkPipelineInfoKHR name);
        VkPipelineInfoKHR deserialize_VkPipelineInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPipelineInfoEXT(VkPipelineInfoEXT name);
        VkPipelineInfoEXT deserialize_VkPipelineInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineExecutablePropertiesKHR(VkPipelineExecutablePropertiesKHR name);
        VkPipelineExecutablePropertiesKHR deserialize_VkPipelineExecutablePropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPipelineExecutableInfoKHR(VkPipelineExecutableInfoKHR name);
        VkPipelineExecutableInfoKHR deserialize_VkPipelineExecutableInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPipelineExecutableStatisticValueKHR(VkPipelineExecutableStatisticValueKHR name);
        VkPipelineExecutableStatisticValueKHR deserialize_VkPipelineExecutableStatisticValueKHR(rjson name);
    

        yyjson::writer::object serialize_VkPipelineExecutableStatisticKHR(VkPipelineExecutableStatisticKHR name);
        VkPipelineExecutableStatisticKHR deserialize_VkPipelineExecutableStatisticKHR(rjson name);
    

        yyjson::writer::object serialize_VkPipelineExecutableInternalRepresentationKHR(VkPipelineExecutableInternalRepresentationKHR name);
        VkPipelineExecutableInternalRepresentationKHR deserialize_VkPipelineExecutableInternalRepresentationKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures name);
        VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures deserialize_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT(VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT name);
        VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT deserialize_VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT name);
        VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT deserialize_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceTexelBufferAlignmentProperties(VkPhysicalDeviceTexelBufferAlignmentProperties name);
        VkPhysicalDeviceTexelBufferAlignmentProperties deserialize_VkPhysicalDeviceTexelBufferAlignmentProperties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT(VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT name);
        VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT deserialize_VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSubgroupSizeControlFeatures(VkPhysicalDeviceSubgroupSizeControlFeatures name);
        VkPhysicalDeviceSubgroupSizeControlFeatures deserialize_VkPhysicalDeviceSubgroupSizeControlFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSubgroupSizeControlFeaturesEXT(VkPhysicalDeviceSubgroupSizeControlFeaturesEXT name);
        VkPhysicalDeviceSubgroupSizeControlFeaturesEXT deserialize_VkPhysicalDeviceSubgroupSizeControlFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSubgroupSizeControlProperties(VkPhysicalDeviceSubgroupSizeControlProperties name);
        VkPhysicalDeviceSubgroupSizeControlProperties deserialize_VkPhysicalDeviceSubgroupSizeControlProperties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSubgroupSizeControlPropertiesEXT(VkPhysicalDeviceSubgroupSizeControlPropertiesEXT name);
        VkPhysicalDeviceSubgroupSizeControlPropertiesEXT deserialize_VkPhysicalDeviceSubgroupSizeControlPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo(VkPipelineShaderStageRequiredSubgroupSizeCreateInfo name);
        VkPipelineShaderStageRequiredSubgroupSizeCreateInfo deserialize_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT(VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT name);
        VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT deserialize_VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkShaderRequiredSubgroupSizeCreateInfoEXT(VkShaderRequiredSubgroupSizeCreateInfoEXT name);
        VkShaderRequiredSubgroupSizeCreateInfoEXT deserialize_VkShaderRequiredSubgroupSizeCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkSubpassShadingPipelineCreateInfoHUAWEI(VkSubpassShadingPipelineCreateInfoHUAWEI name);
        VkSubpassShadingPipelineCreateInfoHUAWEI deserialize_VkSubpassShadingPipelineCreateInfoHUAWEI(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSubpassShadingPropertiesHUAWEI(VkPhysicalDeviceSubpassShadingPropertiesHUAWEI name);
        VkPhysicalDeviceSubpassShadingPropertiesHUAWEI deserialize_VkPhysicalDeviceSubpassShadingPropertiesHUAWEI(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI(VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI name);
        VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI deserialize_VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI(rjson name);
    

        yyjson::writer::object serialize_VkMemoryOpaqueCaptureAddressAllocateInfo(VkMemoryOpaqueCaptureAddressAllocateInfo name);
        VkMemoryOpaqueCaptureAddressAllocateInfo deserialize_VkMemoryOpaqueCaptureAddressAllocateInfo(rjson name);
    

        yyjson::writer::object serialize_VkMemoryOpaqueCaptureAddressAllocateInfoKHR(VkMemoryOpaqueCaptureAddressAllocateInfoKHR name);
        VkMemoryOpaqueCaptureAddressAllocateInfoKHR deserialize_VkMemoryOpaqueCaptureAddressAllocateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkDeviceMemoryOpaqueCaptureAddressInfo(VkDeviceMemoryOpaqueCaptureAddressInfo name);
        VkDeviceMemoryOpaqueCaptureAddressInfo deserialize_VkDeviceMemoryOpaqueCaptureAddressInfo(rjson name);
    

        yyjson::writer::object serialize_VkDeviceMemoryOpaqueCaptureAddressInfoKHR(VkDeviceMemoryOpaqueCaptureAddressInfoKHR name);
        VkDeviceMemoryOpaqueCaptureAddressInfoKHR deserialize_VkDeviceMemoryOpaqueCaptureAddressInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceLineRasterizationFeaturesEXT(VkPhysicalDeviceLineRasterizationFeaturesEXT name);
        VkPhysicalDeviceLineRasterizationFeaturesEXT deserialize_VkPhysicalDeviceLineRasterizationFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceLineRasterizationPropertiesEXT(VkPhysicalDeviceLineRasterizationPropertiesEXT name);
        VkPhysicalDeviceLineRasterizationPropertiesEXT deserialize_VkPhysicalDeviceLineRasterizationPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineRasterizationLineStateCreateInfoEXT(VkPipelineRasterizationLineStateCreateInfoEXT name);
        VkPipelineRasterizationLineStateCreateInfoEXT deserialize_VkPipelineRasterizationLineStateCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePipelineCreationCacheControlFeatures(VkPhysicalDevicePipelineCreationCacheControlFeatures name);
        VkPhysicalDevicePipelineCreationCacheControlFeatures deserialize_VkPhysicalDevicePipelineCreationCacheControlFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT(VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT name);
        VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT deserialize_VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceVulkan11Features(VkPhysicalDeviceVulkan11Features name);
        VkPhysicalDeviceVulkan11Features deserialize_VkPhysicalDeviceVulkan11Features(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceVulkan11Properties(VkPhysicalDeviceVulkan11Properties name);
        VkPhysicalDeviceVulkan11Properties deserialize_VkPhysicalDeviceVulkan11Properties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceVulkan12Features(VkPhysicalDeviceVulkan12Features name);
        VkPhysicalDeviceVulkan12Features deserialize_VkPhysicalDeviceVulkan12Features(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceVulkan12Properties(VkPhysicalDeviceVulkan12Properties name);
        VkPhysicalDeviceVulkan12Properties deserialize_VkPhysicalDeviceVulkan12Properties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceVulkan13Features(VkPhysicalDeviceVulkan13Features name);
        VkPhysicalDeviceVulkan13Features deserialize_VkPhysicalDeviceVulkan13Features(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceVulkan13Properties(VkPhysicalDeviceVulkan13Properties name);
        VkPhysicalDeviceVulkan13Properties deserialize_VkPhysicalDeviceVulkan13Properties(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCompilerControlCreateInfoAMD(VkPipelineCompilerControlCreateInfoAMD name);
        VkPipelineCompilerControlCreateInfoAMD deserialize_VkPipelineCompilerControlCreateInfoAMD(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceCoherentMemoryFeaturesAMD(VkPhysicalDeviceCoherentMemoryFeaturesAMD name);
        VkPhysicalDeviceCoherentMemoryFeaturesAMD deserialize_VkPhysicalDeviceCoherentMemoryFeaturesAMD(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceToolProperties(VkPhysicalDeviceToolProperties name);
        VkPhysicalDeviceToolProperties deserialize_VkPhysicalDeviceToolProperties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceToolPropertiesEXT(VkPhysicalDeviceToolPropertiesEXT name);
        VkPhysicalDeviceToolPropertiesEXT deserialize_VkPhysicalDeviceToolPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkSamplerCustomBorderColorCreateInfoEXT(VkSamplerCustomBorderColorCreateInfoEXT name);
        VkSamplerCustomBorderColorCreateInfoEXT deserialize_VkSamplerCustomBorderColorCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceCustomBorderColorPropertiesEXT(VkPhysicalDeviceCustomBorderColorPropertiesEXT name);
        VkPhysicalDeviceCustomBorderColorPropertiesEXT deserialize_VkPhysicalDeviceCustomBorderColorPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceCustomBorderColorFeaturesEXT(VkPhysicalDeviceCustomBorderColorFeaturesEXT name);
        VkPhysicalDeviceCustomBorderColorFeaturesEXT deserialize_VkPhysicalDeviceCustomBorderColorFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkSamplerBorderColorComponentMappingCreateInfoEXT(VkSamplerBorderColorComponentMappingCreateInfoEXT name);
        VkSamplerBorderColorComponentMappingCreateInfoEXT deserialize_VkSamplerBorderColorComponentMappingCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT(VkPhysicalDeviceBorderColorSwizzleFeaturesEXT name);
        VkPhysicalDeviceBorderColorSwizzleFeaturesEXT deserialize_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkDeviceOrHostAddressKHR(VkDeviceOrHostAddressKHR name);
        VkDeviceOrHostAddressKHR deserialize_VkDeviceOrHostAddressKHR(rjson name);
    

        yyjson::writer::object serialize_VkDeviceOrHostAddressConstKHR(VkDeviceOrHostAddressConstKHR name);
        VkDeviceOrHostAddressConstKHR deserialize_VkDeviceOrHostAddressConstKHR(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureGeometryTrianglesDataKHR(VkAccelerationStructureGeometryTrianglesDataKHR name);
        VkAccelerationStructureGeometryTrianglesDataKHR deserialize_VkAccelerationStructureGeometryTrianglesDataKHR(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureGeometryAabbsDataKHR(VkAccelerationStructureGeometryAabbsDataKHR name);
        VkAccelerationStructureGeometryAabbsDataKHR deserialize_VkAccelerationStructureGeometryAabbsDataKHR(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureGeometryInstancesDataKHR(VkAccelerationStructureGeometryInstancesDataKHR name);
        VkAccelerationStructureGeometryInstancesDataKHR deserialize_VkAccelerationStructureGeometryInstancesDataKHR(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureGeometryDataKHR(VkAccelerationStructureGeometryDataKHR name);
        VkAccelerationStructureGeometryDataKHR deserialize_VkAccelerationStructureGeometryDataKHR(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureGeometryKHR(VkAccelerationStructureGeometryKHR name);
        VkAccelerationStructureGeometryKHR deserialize_VkAccelerationStructureGeometryKHR(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureBuildGeometryInfoKHR(VkAccelerationStructureBuildGeometryInfoKHR name);
        VkAccelerationStructureBuildGeometryInfoKHR deserialize_VkAccelerationStructureBuildGeometryInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureBuildRangeInfoKHR(VkAccelerationStructureBuildRangeInfoKHR name);
        VkAccelerationStructureBuildRangeInfoKHR deserialize_VkAccelerationStructureBuildRangeInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureCreateInfoKHR(VkAccelerationStructureCreateInfoKHR name);
        VkAccelerationStructureCreateInfoKHR deserialize_VkAccelerationStructureCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkAabbPositionsKHR(VkAabbPositionsKHR name);
        VkAabbPositionsKHR deserialize_VkAabbPositionsKHR(rjson name);
    

        yyjson::writer::object serialize_VkAabbPositionsNV(VkAabbPositionsNV name);
        VkAabbPositionsNV deserialize_VkAabbPositionsNV(rjson name);
    

        yyjson::writer::object serialize_VkTransformMatrixKHR(VkTransformMatrixKHR name);
        VkTransformMatrixKHR deserialize_VkTransformMatrixKHR(rjson name);
    

        yyjson::writer::object serialize_VkTransformMatrixNV(VkTransformMatrixNV name);
        VkTransformMatrixNV deserialize_VkTransformMatrixNV(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureInstanceKHR(VkAccelerationStructureInstanceKHR name);
        VkAccelerationStructureInstanceKHR deserialize_VkAccelerationStructureInstanceKHR(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureInstanceNV(VkAccelerationStructureInstanceNV name);
        VkAccelerationStructureInstanceNV deserialize_VkAccelerationStructureInstanceNV(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureDeviceAddressInfoKHR(VkAccelerationStructureDeviceAddressInfoKHR name);
        VkAccelerationStructureDeviceAddressInfoKHR deserialize_VkAccelerationStructureDeviceAddressInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureVersionInfoKHR(VkAccelerationStructureVersionInfoKHR name);
        VkAccelerationStructureVersionInfoKHR deserialize_VkAccelerationStructureVersionInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkCopyAccelerationStructureInfoKHR(VkCopyAccelerationStructureInfoKHR name);
        VkCopyAccelerationStructureInfoKHR deserialize_VkCopyAccelerationStructureInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkCopyAccelerationStructureToMemoryInfoKHR(VkCopyAccelerationStructureToMemoryInfoKHR name);
        VkCopyAccelerationStructureToMemoryInfoKHR deserialize_VkCopyAccelerationStructureToMemoryInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkCopyMemoryToAccelerationStructureInfoKHR(VkCopyMemoryToAccelerationStructureInfoKHR name);
        VkCopyMemoryToAccelerationStructureInfoKHR deserialize_VkCopyMemoryToAccelerationStructureInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkRayTracingPipelineInterfaceCreateInfoKHR(VkRayTracingPipelineInterfaceCreateInfoKHR name);
        VkRayTracingPipelineInterfaceCreateInfoKHR deserialize_VkRayTracingPipelineInterfaceCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPipelineLibraryCreateInfoKHR(VkPipelineLibraryCreateInfoKHR name);
        VkPipelineLibraryCreateInfoKHR deserialize_VkPipelineLibraryCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT name);
        VkPhysicalDeviceExtendedDynamicStateFeaturesEXT deserialize_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT name);
        VkPhysicalDeviceExtendedDynamicState2FeaturesEXT deserialize_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT(VkPhysicalDeviceExtendedDynamicState3FeaturesEXT name);
        VkPhysicalDeviceExtendedDynamicState3FeaturesEXT deserialize_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT(VkPhysicalDeviceExtendedDynamicState3PropertiesEXT name);
        VkPhysicalDeviceExtendedDynamicState3PropertiesEXT deserialize_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkColorBlendEquationEXT(VkColorBlendEquationEXT name);
        VkColorBlendEquationEXT deserialize_VkColorBlendEquationEXT(rjson name);
    

        yyjson::writer::object serialize_VkColorBlendAdvancedEXT(VkColorBlendAdvancedEXT name);
        VkColorBlendAdvancedEXT deserialize_VkColorBlendAdvancedEXT(rjson name);
    

        yyjson::writer::object serialize_VkRenderPassTransformBeginInfoQCOM(VkRenderPassTransformBeginInfoQCOM name);
        VkRenderPassTransformBeginInfoQCOM deserialize_VkRenderPassTransformBeginInfoQCOM(rjson name);
    

        yyjson::writer::object serialize_VkCopyCommandTransformInfoQCOM(VkCopyCommandTransformInfoQCOM name);
        VkCopyCommandTransformInfoQCOM deserialize_VkCopyCommandTransformInfoQCOM(rjson name);
    

        yyjson::writer::object serialize_VkCommandBufferInheritanceRenderPassTransformInfoQCOM(VkCommandBufferInheritanceRenderPassTransformInfoQCOM name);
        VkCommandBufferInheritanceRenderPassTransformInfoQCOM deserialize_VkCommandBufferInheritanceRenderPassTransformInfoQCOM(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDiagnosticsConfigFeaturesNV(VkPhysicalDeviceDiagnosticsConfigFeaturesNV name);
        VkPhysicalDeviceDiagnosticsConfigFeaturesNV deserialize_VkPhysicalDeviceDiagnosticsConfigFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkDeviceDiagnosticsConfigCreateInfoNV(VkDeviceDiagnosticsConfigCreateInfoNV name);
        VkDeviceDiagnosticsConfigCreateInfoNV deserialize_VkDeviceDiagnosticsConfigCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures name);
        VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures deserialize_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR name);
        VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR deserialize_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR name);
        VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR deserialize_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceRobustness2FeaturesEXT(VkPhysicalDeviceRobustness2FeaturesEXT name);
        VkPhysicalDeviceRobustness2FeaturesEXT deserialize_VkPhysicalDeviceRobustness2FeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceRobustness2PropertiesEXT(VkPhysicalDeviceRobustness2PropertiesEXT name);
        VkPhysicalDeviceRobustness2PropertiesEXT deserialize_VkPhysicalDeviceRobustness2PropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceImageRobustnessFeatures(VkPhysicalDeviceImageRobustnessFeatures name);
        VkPhysicalDeviceImageRobustnessFeatures deserialize_VkPhysicalDeviceImageRobustnessFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceImageRobustnessFeaturesEXT(VkPhysicalDeviceImageRobustnessFeaturesEXT name);
        VkPhysicalDeviceImageRobustnessFeaturesEXT deserialize_VkPhysicalDeviceImageRobustnessFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR name);
        VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR deserialize_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevice4444FormatsFeaturesEXT(VkPhysicalDevice4444FormatsFeaturesEXT name);
        VkPhysicalDevice4444FormatsFeaturesEXT deserialize_VkPhysicalDevice4444FormatsFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI name);
        VkPhysicalDeviceSubpassShadingFeaturesHUAWEI deserialize_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI(VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI name);
        VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI deserialize_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI(rjson name);
    

        yyjson::writer::object serialize_VkBufferCopy2(VkBufferCopy2 name);
        VkBufferCopy2 deserialize_VkBufferCopy2(rjson name);
    

        yyjson::writer::object serialize_VkBufferCopy2KHR(VkBufferCopy2KHR name);
        VkBufferCopy2KHR deserialize_VkBufferCopy2KHR(rjson name);
    

        yyjson::writer::object serialize_VkImageCopy2(VkImageCopy2 name);
        VkImageCopy2 deserialize_VkImageCopy2(rjson name);
    

        yyjson::writer::object serialize_VkImageCopy2KHR(VkImageCopy2KHR name);
        VkImageCopy2KHR deserialize_VkImageCopy2KHR(rjson name);
    

        yyjson::writer::object serialize_VkImageBlit2(VkImageBlit2 name);
        VkImageBlit2 deserialize_VkImageBlit2(rjson name);
    

        yyjson::writer::object serialize_VkImageBlit2KHR(VkImageBlit2KHR name);
        VkImageBlit2KHR deserialize_VkImageBlit2KHR(rjson name);
    

        yyjson::writer::object serialize_VkBufferImageCopy2(VkBufferImageCopy2 name);
        VkBufferImageCopy2 deserialize_VkBufferImageCopy2(rjson name);
    

        yyjson::writer::object serialize_VkBufferImageCopy2KHR(VkBufferImageCopy2KHR name);
        VkBufferImageCopy2KHR deserialize_VkBufferImageCopy2KHR(rjson name);
    

        yyjson::writer::object serialize_VkImageResolve2(VkImageResolve2 name);
        VkImageResolve2 deserialize_VkImageResolve2(rjson name);
    

        yyjson::writer::object serialize_VkImageResolve2KHR(VkImageResolve2KHR name);
        VkImageResolve2KHR deserialize_VkImageResolve2KHR(rjson name);
    

        yyjson::writer::object serialize_VkCopyBufferInfo2(VkCopyBufferInfo2 name);
        VkCopyBufferInfo2 deserialize_VkCopyBufferInfo2(rjson name);
    

        yyjson::writer::object serialize_VkCopyBufferInfo2KHR(VkCopyBufferInfo2KHR name);
        VkCopyBufferInfo2KHR deserialize_VkCopyBufferInfo2KHR(rjson name);
    

        yyjson::writer::object serialize_VkCopyImageInfo2(VkCopyImageInfo2 name);
        VkCopyImageInfo2 deserialize_VkCopyImageInfo2(rjson name);
    

        yyjson::writer::object serialize_VkCopyImageInfo2KHR(VkCopyImageInfo2KHR name);
        VkCopyImageInfo2KHR deserialize_VkCopyImageInfo2KHR(rjson name);
    

        yyjson::writer::object serialize_VkBlitImageInfo2(VkBlitImageInfo2 name);
        VkBlitImageInfo2 deserialize_VkBlitImageInfo2(rjson name);
    

        yyjson::writer::object serialize_VkBlitImageInfo2KHR(VkBlitImageInfo2KHR name);
        VkBlitImageInfo2KHR deserialize_VkBlitImageInfo2KHR(rjson name);
    

        yyjson::writer::object serialize_VkCopyBufferToImageInfo2(VkCopyBufferToImageInfo2 name);
        VkCopyBufferToImageInfo2 deserialize_VkCopyBufferToImageInfo2(rjson name);
    

        yyjson::writer::object serialize_VkCopyBufferToImageInfo2KHR(VkCopyBufferToImageInfo2KHR name);
        VkCopyBufferToImageInfo2KHR deserialize_VkCopyBufferToImageInfo2KHR(rjson name);
    

        yyjson::writer::object serialize_VkCopyImageToBufferInfo2(VkCopyImageToBufferInfo2 name);
        VkCopyImageToBufferInfo2 deserialize_VkCopyImageToBufferInfo2(rjson name);
    

        yyjson::writer::object serialize_VkCopyImageToBufferInfo2KHR(VkCopyImageToBufferInfo2KHR name);
        VkCopyImageToBufferInfo2KHR deserialize_VkCopyImageToBufferInfo2KHR(rjson name);
    

        yyjson::writer::object serialize_VkResolveImageInfo2(VkResolveImageInfo2 name);
        VkResolveImageInfo2 deserialize_VkResolveImageInfo2(rjson name);
    

        yyjson::writer::object serialize_VkResolveImageInfo2KHR(VkResolveImageInfo2KHR name);
        VkResolveImageInfo2KHR deserialize_VkResolveImageInfo2KHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT name);
        VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT deserialize_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkFragmentShadingRateAttachmentInfoKHR(VkFragmentShadingRateAttachmentInfoKHR name);
        VkFragmentShadingRateAttachmentInfoKHR deserialize_VkFragmentShadingRateAttachmentInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPipelineFragmentShadingRateStateCreateInfoKHR(VkPipelineFragmentShadingRateStateCreateInfoKHR name);
        VkPipelineFragmentShadingRateStateCreateInfoKHR deserialize_VkPipelineFragmentShadingRateStateCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFragmentShadingRateFeaturesKHR(VkPhysicalDeviceFragmentShadingRateFeaturesKHR name);
        VkPhysicalDeviceFragmentShadingRateFeaturesKHR deserialize_VkPhysicalDeviceFragmentShadingRateFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFragmentShadingRatePropertiesKHR(VkPhysicalDeviceFragmentShadingRatePropertiesKHR name);
        VkPhysicalDeviceFragmentShadingRatePropertiesKHR deserialize_VkPhysicalDeviceFragmentShadingRatePropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFragmentShadingRateKHR(VkPhysicalDeviceFragmentShadingRateKHR name);
        VkPhysicalDeviceFragmentShadingRateKHR deserialize_VkPhysicalDeviceFragmentShadingRateKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderTerminateInvocationFeatures(VkPhysicalDeviceShaderTerminateInvocationFeatures name);
        VkPhysicalDeviceShaderTerminateInvocationFeatures deserialize_VkPhysicalDeviceShaderTerminateInvocationFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR(VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR name);
        VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR deserialize_VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV(VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV name);
        VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV deserialize_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV(VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV name);
        VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV deserialize_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV(rjson name);
    

        yyjson::writer::object serialize_VkPipelineFragmentShadingRateEnumStateCreateInfoNV(VkPipelineFragmentShadingRateEnumStateCreateInfoNV name);
        VkPipelineFragmentShadingRateEnumStateCreateInfoNV deserialize_VkPipelineFragmentShadingRateEnumStateCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureBuildSizesInfoKHR(VkAccelerationStructureBuildSizesInfoKHR name);
        VkAccelerationStructureBuildSizesInfoKHR deserialize_VkAccelerationStructureBuildSizesInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT(VkPhysicalDeviceImage2DViewOf3DFeaturesEXT name);
        VkPhysicalDeviceImage2DViewOf3DFeaturesEXT deserialize_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT(VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT name);
        VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT deserialize_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT name);
        VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT deserialize_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT(VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT name);
        VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT deserialize_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE(VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE name);
        VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE deserialize_VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE(rjson name);
    

        yyjson::writer::object serialize_VkMutableDescriptorTypeListEXT(VkMutableDescriptorTypeListEXT name);
        VkMutableDescriptorTypeListEXT deserialize_VkMutableDescriptorTypeListEXT(rjson name);
    

        yyjson::writer::object serialize_VkMutableDescriptorTypeListVALVE(VkMutableDescriptorTypeListVALVE name);
        VkMutableDescriptorTypeListVALVE deserialize_VkMutableDescriptorTypeListVALVE(rjson name);
    

        yyjson::writer::object serialize_VkMutableDescriptorTypeCreateInfoEXT(VkMutableDescriptorTypeCreateInfoEXT name);
        VkMutableDescriptorTypeCreateInfoEXT deserialize_VkMutableDescriptorTypeCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkMutableDescriptorTypeCreateInfoVALVE(VkMutableDescriptorTypeCreateInfoVALVE name);
        VkMutableDescriptorTypeCreateInfoVALVE deserialize_VkMutableDescriptorTypeCreateInfoVALVE(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDepthClipControlFeaturesEXT(VkPhysicalDeviceDepthClipControlFeaturesEXT name);
        VkPhysicalDeviceDepthClipControlFeaturesEXT deserialize_VkPhysicalDeviceDepthClipControlFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineViewportDepthClipControlCreateInfoEXT(VkPipelineViewportDepthClipControlCreateInfoEXT name);
        VkPipelineViewportDepthClipControlCreateInfoEXT deserialize_VkPipelineViewportDepthClipControlCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT name);
        VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT deserialize_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV(VkPhysicalDeviceExternalMemoryRDMAFeaturesNV name);
        VkPhysicalDeviceExternalMemoryRDMAFeaturesNV deserialize_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkVertexInputBindingDescription2EXT(VkVertexInputBindingDescription2EXT name);
        VkVertexInputBindingDescription2EXT deserialize_VkVertexInputBindingDescription2EXT(rjson name);
    

        yyjson::writer::object serialize_VkVertexInputAttributeDescription2EXT(VkVertexInputAttributeDescription2EXT name);
        VkVertexInputAttributeDescription2EXT deserialize_VkVertexInputAttributeDescription2EXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceColorWriteEnableFeaturesEXT(VkPhysicalDeviceColorWriteEnableFeaturesEXT name);
        VkPhysicalDeviceColorWriteEnableFeaturesEXT deserialize_VkPhysicalDeviceColorWriteEnableFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineColorWriteCreateInfoEXT(VkPipelineColorWriteCreateInfoEXT name);
        VkPipelineColorWriteCreateInfoEXT deserialize_VkPipelineColorWriteCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkMemoryBarrier2(VkMemoryBarrier2 name);
        VkMemoryBarrier2 deserialize_VkMemoryBarrier2(rjson name);
    

        yyjson::writer::object serialize_VkMemoryBarrier2KHR(VkMemoryBarrier2KHR name);
        VkMemoryBarrier2KHR deserialize_VkMemoryBarrier2KHR(rjson name);
    

        yyjson::writer::object serialize_VkImageMemoryBarrier2(VkImageMemoryBarrier2 name);
        VkImageMemoryBarrier2 deserialize_VkImageMemoryBarrier2(rjson name);
    

        yyjson::writer::object serialize_VkImageMemoryBarrier2KHR(VkImageMemoryBarrier2KHR name);
        VkImageMemoryBarrier2KHR deserialize_VkImageMemoryBarrier2KHR(rjson name);
    

        yyjson::writer::object serialize_VkBufferMemoryBarrier2(VkBufferMemoryBarrier2 name);
        VkBufferMemoryBarrier2 deserialize_VkBufferMemoryBarrier2(rjson name);
    

        yyjson::writer::object serialize_VkBufferMemoryBarrier2KHR(VkBufferMemoryBarrier2KHR name);
        VkBufferMemoryBarrier2KHR deserialize_VkBufferMemoryBarrier2KHR(rjson name);
    

        yyjson::writer::object serialize_VkDependencyInfo(VkDependencyInfo name);
        VkDependencyInfo deserialize_VkDependencyInfo(rjson name);
    

        yyjson::writer::object serialize_VkDependencyInfoKHR(VkDependencyInfoKHR name);
        VkDependencyInfoKHR deserialize_VkDependencyInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreSubmitInfo(VkSemaphoreSubmitInfo name);
        VkSemaphoreSubmitInfo deserialize_VkSemaphoreSubmitInfo(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreSubmitInfoKHR(VkSemaphoreSubmitInfoKHR name);
        VkSemaphoreSubmitInfoKHR deserialize_VkSemaphoreSubmitInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkCommandBufferSubmitInfo(VkCommandBufferSubmitInfo name);
        VkCommandBufferSubmitInfo deserialize_VkCommandBufferSubmitInfo(rjson name);
    

        yyjson::writer::object serialize_VkCommandBufferSubmitInfoKHR(VkCommandBufferSubmitInfoKHR name);
        VkCommandBufferSubmitInfoKHR deserialize_VkCommandBufferSubmitInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkSubmitInfo2(VkSubmitInfo2 name);
        VkSubmitInfo2 deserialize_VkSubmitInfo2(rjson name);
    

        yyjson::writer::object serialize_VkSubmitInfo2KHR(VkSubmitInfo2KHR name);
        VkSubmitInfo2KHR deserialize_VkSubmitInfo2KHR(rjson name);
    

        yyjson::writer::object serialize_VkQueueFamilyCheckpointProperties2NV(VkQueueFamilyCheckpointProperties2NV name);
        VkQueueFamilyCheckpointProperties2NV deserialize_VkQueueFamilyCheckpointProperties2NV(rjson name);
    

        yyjson::writer::object serialize_VkCheckpointData2NV(VkCheckpointData2NV name);
        VkCheckpointData2NV deserialize_VkCheckpointData2NV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSynchronization2Features(VkPhysicalDeviceSynchronization2Features name);
        VkPhysicalDeviceSynchronization2Features deserialize_VkPhysicalDeviceSynchronization2Features(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSynchronization2FeaturesKHR(VkPhysicalDeviceSynchronization2FeaturesKHR name);
        VkPhysicalDeviceSynchronization2FeaturesKHR deserialize_VkPhysicalDeviceSynchronization2FeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceHostImageCopyFeaturesEXT(VkPhysicalDeviceHostImageCopyFeaturesEXT name);
        VkPhysicalDeviceHostImageCopyFeaturesEXT deserialize_VkPhysicalDeviceHostImageCopyFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceHostImageCopyPropertiesEXT(VkPhysicalDeviceHostImageCopyPropertiesEXT name);
        VkPhysicalDeviceHostImageCopyPropertiesEXT deserialize_VkPhysicalDeviceHostImageCopyPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkMemoryToImageCopyEXT(VkMemoryToImageCopyEXT name);
        VkMemoryToImageCopyEXT deserialize_VkMemoryToImageCopyEXT(rjson name);
    

        yyjson::writer::object serialize_VkImageToMemoryCopyEXT(VkImageToMemoryCopyEXT name);
        VkImageToMemoryCopyEXT deserialize_VkImageToMemoryCopyEXT(rjson name);
    

        yyjson::writer::object serialize_VkCopyMemoryToImageInfoEXT(VkCopyMemoryToImageInfoEXT name);
        VkCopyMemoryToImageInfoEXT deserialize_VkCopyMemoryToImageInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkCopyImageToMemoryInfoEXT(VkCopyImageToMemoryInfoEXT name);
        VkCopyImageToMemoryInfoEXT deserialize_VkCopyImageToMemoryInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkCopyImageToImageInfoEXT(VkCopyImageToImageInfoEXT name);
        VkCopyImageToImageInfoEXT deserialize_VkCopyImageToImageInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkHostImageLayoutTransitionInfoEXT(VkHostImageLayoutTransitionInfoEXT name);
        VkHostImageLayoutTransitionInfoEXT deserialize_VkHostImageLayoutTransitionInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkSubresourceHostMemcpySizeEXT(VkSubresourceHostMemcpySizeEXT name);
        VkSubresourceHostMemcpySizeEXT deserialize_VkSubresourceHostMemcpySizeEXT(rjson name);
    

        yyjson::writer::object serialize_VkHostImageCopyDevicePerformanceQueryEXT(VkHostImageCopyDevicePerformanceQueryEXT name);
        VkHostImageCopyDevicePerformanceQueryEXT deserialize_VkHostImageCopyDevicePerformanceQueryEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT name);
        VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT deserialize_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceLegacyDitheringFeaturesEXT(VkPhysicalDeviceLegacyDitheringFeaturesEXT name);
        VkPhysicalDeviceLegacyDitheringFeaturesEXT deserialize_VkPhysicalDeviceLegacyDitheringFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT name);
        VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT deserialize_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkSubpassResolvePerformanceQueryEXT(VkSubpassResolvePerformanceQueryEXT name);
        VkSubpassResolvePerformanceQueryEXT deserialize_VkSubpassResolvePerformanceQueryEXT(rjson name);
    

        yyjson::writer::object serialize_VkMultisampledRenderToSingleSampledInfoEXT(VkMultisampledRenderToSingleSampledInfoEXT name);
        VkMultisampledRenderToSingleSampledInfoEXT deserialize_VkMultisampledRenderToSingleSampledInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePipelineProtectedAccessFeaturesEXT(VkPhysicalDevicePipelineProtectedAccessFeaturesEXT name);
        VkPhysicalDevicePipelineProtectedAccessFeaturesEXT deserialize_VkPhysicalDevicePipelineProtectedAccessFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkQueueFamilyVideoPropertiesKHR(VkQueueFamilyVideoPropertiesKHR name);
        VkQueueFamilyVideoPropertiesKHR deserialize_VkQueueFamilyVideoPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkQueueFamilyQueryResultStatusPropertiesKHR(VkQueueFamilyQueryResultStatusPropertiesKHR name);
        VkQueueFamilyQueryResultStatusPropertiesKHR deserialize_VkQueueFamilyQueryResultStatusPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoProfileListInfoKHR(VkVideoProfileListInfoKHR name);
        VkVideoProfileListInfoKHR deserialize_VkVideoProfileListInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceVideoFormatInfoKHR(VkPhysicalDeviceVideoFormatInfoKHR name);
        VkPhysicalDeviceVideoFormatInfoKHR deserialize_VkPhysicalDeviceVideoFormatInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoFormatPropertiesKHR(VkVideoFormatPropertiesKHR name);
        VkVideoFormatPropertiesKHR deserialize_VkVideoFormatPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoProfileInfoKHR(VkVideoProfileInfoKHR name);
        VkVideoProfileInfoKHR deserialize_VkVideoProfileInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoCapabilitiesKHR(VkVideoCapabilitiesKHR name);
        VkVideoCapabilitiesKHR deserialize_VkVideoCapabilitiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoSessionMemoryRequirementsKHR(VkVideoSessionMemoryRequirementsKHR name);
        VkVideoSessionMemoryRequirementsKHR deserialize_VkVideoSessionMemoryRequirementsKHR(rjson name);
    

        yyjson::writer::object serialize_VkBindVideoSessionMemoryInfoKHR(VkBindVideoSessionMemoryInfoKHR name);
        VkBindVideoSessionMemoryInfoKHR deserialize_VkBindVideoSessionMemoryInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoPictureResourceInfoKHR(VkVideoPictureResourceInfoKHR name);
        VkVideoPictureResourceInfoKHR deserialize_VkVideoPictureResourceInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoReferenceSlotInfoKHR(VkVideoReferenceSlotInfoKHR name);
        VkVideoReferenceSlotInfoKHR deserialize_VkVideoReferenceSlotInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeCapabilitiesKHR(VkVideoDecodeCapabilitiesKHR name);
        VkVideoDecodeCapabilitiesKHR deserialize_VkVideoDecodeCapabilitiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeUsageInfoKHR(VkVideoDecodeUsageInfoKHR name);
        VkVideoDecodeUsageInfoKHR deserialize_VkVideoDecodeUsageInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeInfoKHR(VkVideoDecodeInfoKHR name);
        VkVideoDecodeInfoKHR deserialize_VkVideoDecodeInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeH264ProfileInfoKHR(VkVideoDecodeH264ProfileInfoKHR name);
        VkVideoDecodeH264ProfileInfoKHR deserialize_VkVideoDecodeH264ProfileInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeH264CapabilitiesKHR(VkVideoDecodeH264CapabilitiesKHR name);
        VkVideoDecodeH264CapabilitiesKHR deserialize_VkVideoDecodeH264CapabilitiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeH264SessionParametersAddInfoKHR(VkVideoDecodeH264SessionParametersAddInfoKHR name);
        VkVideoDecodeH264SessionParametersAddInfoKHR deserialize_VkVideoDecodeH264SessionParametersAddInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeH264SessionParametersCreateInfoKHR(VkVideoDecodeH264SessionParametersCreateInfoKHR name);
        VkVideoDecodeH264SessionParametersCreateInfoKHR deserialize_VkVideoDecodeH264SessionParametersCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeH264PictureInfoKHR(VkVideoDecodeH264PictureInfoKHR name);
        VkVideoDecodeH264PictureInfoKHR deserialize_VkVideoDecodeH264PictureInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeH264DpbSlotInfoKHR(VkVideoDecodeH264DpbSlotInfoKHR name);
        VkVideoDecodeH264DpbSlotInfoKHR deserialize_VkVideoDecodeH264DpbSlotInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeH265ProfileInfoKHR(VkVideoDecodeH265ProfileInfoKHR name);
        VkVideoDecodeH265ProfileInfoKHR deserialize_VkVideoDecodeH265ProfileInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeH265CapabilitiesKHR(VkVideoDecodeH265CapabilitiesKHR name);
        VkVideoDecodeH265CapabilitiesKHR deserialize_VkVideoDecodeH265CapabilitiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeH265SessionParametersAddInfoKHR(VkVideoDecodeH265SessionParametersAddInfoKHR name);
        VkVideoDecodeH265SessionParametersAddInfoKHR deserialize_VkVideoDecodeH265SessionParametersAddInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeH265SessionParametersCreateInfoKHR(VkVideoDecodeH265SessionParametersCreateInfoKHR name);
        VkVideoDecodeH265SessionParametersCreateInfoKHR deserialize_VkVideoDecodeH265SessionParametersCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeH265PictureInfoKHR(VkVideoDecodeH265PictureInfoKHR name);
        VkVideoDecodeH265PictureInfoKHR deserialize_VkVideoDecodeH265PictureInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeH265DpbSlotInfoKHR(VkVideoDecodeH265DpbSlotInfoKHR name);
        VkVideoDecodeH265DpbSlotInfoKHR deserialize_VkVideoDecodeH265DpbSlotInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoSessionCreateInfoKHR(VkVideoSessionCreateInfoKHR name);
        VkVideoSessionCreateInfoKHR deserialize_VkVideoSessionCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoSessionParametersCreateInfoKHR(VkVideoSessionParametersCreateInfoKHR name);
        VkVideoSessionParametersCreateInfoKHR deserialize_VkVideoSessionParametersCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoSessionParametersUpdateInfoKHR(VkVideoSessionParametersUpdateInfoKHR name);
        VkVideoSessionParametersUpdateInfoKHR deserialize_VkVideoSessionParametersUpdateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoBeginCodingInfoKHR(VkVideoBeginCodingInfoKHR name);
        VkVideoBeginCodingInfoKHR deserialize_VkVideoBeginCodingInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoEndCodingInfoKHR(VkVideoEndCodingInfoKHR name);
        VkVideoEndCodingInfoKHR deserialize_VkVideoEndCodingInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoCodingControlInfoKHR(VkVideoCodingControlInfoKHR name);
        VkVideoCodingControlInfoKHR deserialize_VkVideoCodingControlInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceInheritedViewportScissorFeaturesNV(VkPhysicalDeviceInheritedViewportScissorFeaturesNV name);
        VkPhysicalDeviceInheritedViewportScissorFeaturesNV deserialize_VkPhysicalDeviceInheritedViewportScissorFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkCommandBufferInheritanceViewportScissorInfoNV(VkCommandBufferInheritanceViewportScissorInfoNV name);
        VkCommandBufferInheritanceViewportScissorInfoNV deserialize_VkCommandBufferInheritanceViewportScissorInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT name);
        VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT deserialize_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceProvokingVertexFeaturesEXT(VkPhysicalDeviceProvokingVertexFeaturesEXT name);
        VkPhysicalDeviceProvokingVertexFeaturesEXT deserialize_VkPhysicalDeviceProvokingVertexFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceProvokingVertexPropertiesEXT(VkPhysicalDeviceProvokingVertexPropertiesEXT name);
        VkPhysicalDeviceProvokingVertexPropertiesEXT deserialize_VkPhysicalDeviceProvokingVertexPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT(VkPipelineRasterizationProvokingVertexStateCreateInfoEXT name);
        VkPipelineRasterizationProvokingVertexStateCreateInfoEXT deserialize_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkCuModuleCreateInfoNVX(VkCuModuleCreateInfoNVX name);
        VkCuModuleCreateInfoNVX deserialize_VkCuModuleCreateInfoNVX(rjson name);
    

        yyjson::writer::object serialize_VkCuFunctionCreateInfoNVX(VkCuFunctionCreateInfoNVX name);
        VkCuFunctionCreateInfoNVX deserialize_VkCuFunctionCreateInfoNVX(rjson name);
    

        yyjson::writer::object serialize_VkCuLaunchInfoNVX(VkCuLaunchInfoNVX name);
        VkCuLaunchInfoNVX deserialize_VkCuLaunchInfoNVX(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDescriptorBufferFeaturesEXT(VkPhysicalDeviceDescriptorBufferFeaturesEXT name);
        VkPhysicalDeviceDescriptorBufferFeaturesEXT deserialize_VkPhysicalDeviceDescriptorBufferFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDescriptorBufferPropertiesEXT(VkPhysicalDeviceDescriptorBufferPropertiesEXT name);
        VkPhysicalDeviceDescriptorBufferPropertiesEXT deserialize_VkPhysicalDeviceDescriptorBufferPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT name);
        VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT deserialize_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorAddressInfoEXT(VkDescriptorAddressInfoEXT name);
        VkDescriptorAddressInfoEXT deserialize_VkDescriptorAddressInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorBufferBindingInfoEXT(VkDescriptorBufferBindingInfoEXT name);
        VkDescriptorBufferBindingInfoEXT deserialize_VkDescriptorBufferBindingInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT(VkDescriptorBufferBindingPushDescriptorBufferHandleEXT name);
        VkDescriptorBufferBindingPushDescriptorBufferHandleEXT deserialize_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorDataEXT(VkDescriptorDataEXT name);
        VkDescriptorDataEXT deserialize_VkDescriptorDataEXT(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorGetInfoEXT(VkDescriptorGetInfoEXT name);
        VkDescriptorGetInfoEXT deserialize_VkDescriptorGetInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkBufferCaptureDescriptorDataInfoEXT(VkBufferCaptureDescriptorDataInfoEXT name);
        VkBufferCaptureDescriptorDataInfoEXT deserialize_VkBufferCaptureDescriptorDataInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkImageCaptureDescriptorDataInfoEXT(VkImageCaptureDescriptorDataInfoEXT name);
        VkImageCaptureDescriptorDataInfoEXT deserialize_VkImageCaptureDescriptorDataInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkImageViewCaptureDescriptorDataInfoEXT(VkImageViewCaptureDescriptorDataInfoEXT name);
        VkImageViewCaptureDescriptorDataInfoEXT deserialize_VkImageViewCaptureDescriptorDataInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkSamplerCaptureDescriptorDataInfoEXT(VkSamplerCaptureDescriptorDataInfoEXT name);
        VkSamplerCaptureDescriptorDataInfoEXT deserialize_VkSamplerCaptureDescriptorDataInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureCaptureDescriptorDataInfoEXT(VkAccelerationStructureCaptureDescriptorDataInfoEXT name);
        VkAccelerationStructureCaptureDescriptorDataInfoEXT deserialize_VkAccelerationStructureCaptureDescriptorDataInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkOpaqueCaptureDescriptorDataCreateInfoEXT(VkOpaqueCaptureDescriptorDataCreateInfoEXT name);
        VkOpaqueCaptureDescriptorDataCreateInfoEXT deserialize_VkOpaqueCaptureDescriptorDataCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderIntegerDotProductFeatures(VkPhysicalDeviceShaderIntegerDotProductFeatures name);
        VkPhysicalDeviceShaderIntegerDotProductFeatures deserialize_VkPhysicalDeviceShaderIntegerDotProductFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR(VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR name);
        VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR deserialize_VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderIntegerDotProductProperties(VkPhysicalDeviceShaderIntegerDotProductProperties name);
        VkPhysicalDeviceShaderIntegerDotProductProperties deserialize_VkPhysicalDeviceShaderIntegerDotProductProperties(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR(VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR name);
        VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR deserialize_VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDrmPropertiesEXT(VkPhysicalDeviceDrmPropertiesEXT name);
        VkPhysicalDeviceDrmPropertiesEXT deserialize_VkPhysicalDeviceDrmPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR(VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR name);
        VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR deserialize_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV(VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV name);
        VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV deserialize_VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR(VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR name);
        VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR deserialize_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV(VkPhysicalDeviceRayTracingMotionBlurFeaturesNV name);
        VkPhysicalDeviceRayTracingMotionBlurFeaturesNV deserialize_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureGeometryMotionTrianglesDataNV(VkAccelerationStructureGeometryMotionTrianglesDataNV name);
        VkAccelerationStructureGeometryMotionTrianglesDataNV deserialize_VkAccelerationStructureGeometryMotionTrianglesDataNV(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureMotionInfoNV(VkAccelerationStructureMotionInfoNV name);
        VkAccelerationStructureMotionInfoNV deserialize_VkAccelerationStructureMotionInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkSRTDataNV(VkSRTDataNV name);
        VkSRTDataNV deserialize_VkSRTDataNV(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureSRTMotionInstanceNV(VkAccelerationStructureSRTMotionInstanceNV name);
        VkAccelerationStructureSRTMotionInstanceNV deserialize_VkAccelerationStructureSRTMotionInstanceNV(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureMatrixMotionInstanceNV(VkAccelerationStructureMatrixMotionInstanceNV name);
        VkAccelerationStructureMatrixMotionInstanceNV deserialize_VkAccelerationStructureMatrixMotionInstanceNV(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureMotionInstanceDataNV(VkAccelerationStructureMotionInstanceDataNV name);
        VkAccelerationStructureMotionInstanceDataNV deserialize_VkAccelerationStructureMotionInstanceDataNV(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureMotionInstanceNV(VkAccelerationStructureMotionInstanceNV name);
        VkAccelerationStructureMotionInstanceNV deserialize_VkAccelerationStructureMotionInstanceNV(rjson name);
    

        yyjson::writer::object serialize_VkMemoryGetRemoteAddressInfoNV(VkMemoryGetRemoteAddressInfoNV name);
        VkMemoryGetRemoteAddressInfoNV deserialize_VkMemoryGetRemoteAddressInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT(VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT name);
        VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT deserialize_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkFormatProperties3(VkFormatProperties3 name);
        VkFormatProperties3 deserialize_VkFormatProperties3(rjson name);
    

        yyjson::writer::object serialize_VkFormatProperties3KHR(VkFormatProperties3KHR name);
        VkFormatProperties3KHR deserialize_VkFormatProperties3KHR(rjson name);
    

        yyjson::writer::object serialize_VkDrmFormatModifierPropertiesList2EXT(VkDrmFormatModifierPropertiesList2EXT name);
        VkDrmFormatModifierPropertiesList2EXT deserialize_VkDrmFormatModifierPropertiesList2EXT(rjson name);
    

        yyjson::writer::object serialize_VkDrmFormatModifierProperties2EXT(VkDrmFormatModifierProperties2EXT name);
        VkDrmFormatModifierProperties2EXT deserialize_VkDrmFormatModifierProperties2EXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineRenderingCreateInfo(VkPipelineRenderingCreateInfo name);
        VkPipelineRenderingCreateInfo deserialize_VkPipelineRenderingCreateInfo(rjson name);
    

        yyjson::writer::object serialize_VkPipelineRenderingCreateInfoKHR(VkPipelineRenderingCreateInfoKHR name);
        VkPipelineRenderingCreateInfoKHR deserialize_VkPipelineRenderingCreateInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkRenderingInfo(VkRenderingInfo name);
        VkRenderingInfo deserialize_VkRenderingInfo(rjson name);
    

        yyjson::writer::object serialize_VkRenderingInfoKHR(VkRenderingInfoKHR name);
        VkRenderingInfoKHR deserialize_VkRenderingInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkRenderingAttachmentInfo(VkRenderingAttachmentInfo name);
        VkRenderingAttachmentInfo deserialize_VkRenderingAttachmentInfo(rjson name);
    

        yyjson::writer::object serialize_VkRenderingAttachmentInfoKHR(VkRenderingAttachmentInfoKHR name);
        VkRenderingAttachmentInfoKHR deserialize_VkRenderingAttachmentInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkRenderingFragmentShadingRateAttachmentInfoKHR(VkRenderingFragmentShadingRateAttachmentInfoKHR name);
        VkRenderingFragmentShadingRateAttachmentInfoKHR deserialize_VkRenderingFragmentShadingRateAttachmentInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkRenderingFragmentDensityMapAttachmentInfoEXT(VkRenderingFragmentDensityMapAttachmentInfoEXT name);
        VkRenderingFragmentDensityMapAttachmentInfoEXT deserialize_VkRenderingFragmentDensityMapAttachmentInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDynamicRenderingFeatures(VkPhysicalDeviceDynamicRenderingFeatures name);
        VkPhysicalDeviceDynamicRenderingFeatures deserialize_VkPhysicalDeviceDynamicRenderingFeatures(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDynamicRenderingFeaturesKHR(VkPhysicalDeviceDynamicRenderingFeaturesKHR name);
        VkPhysicalDeviceDynamicRenderingFeaturesKHR deserialize_VkPhysicalDeviceDynamicRenderingFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkCommandBufferInheritanceRenderingInfo(VkCommandBufferInheritanceRenderingInfo name);
        VkCommandBufferInheritanceRenderingInfo deserialize_VkCommandBufferInheritanceRenderingInfo(rjson name);
    

        yyjson::writer::object serialize_VkCommandBufferInheritanceRenderingInfoKHR(VkCommandBufferInheritanceRenderingInfoKHR name);
        VkCommandBufferInheritanceRenderingInfoKHR deserialize_VkCommandBufferInheritanceRenderingInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkAttachmentSampleCountInfoAMD(VkAttachmentSampleCountInfoAMD name);
        VkAttachmentSampleCountInfoAMD deserialize_VkAttachmentSampleCountInfoAMD(rjson name);
    

        yyjson::writer::object serialize_VkAttachmentSampleCountInfoNV(VkAttachmentSampleCountInfoNV name);
        VkAttachmentSampleCountInfoNV deserialize_VkAttachmentSampleCountInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkMultiviewPerViewAttributesInfoNVX(VkMultiviewPerViewAttributesInfoNVX name);
        VkMultiviewPerViewAttributesInfoNVX deserialize_VkMultiviewPerViewAttributesInfoNVX(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceImageViewMinLodFeaturesEXT(VkPhysicalDeviceImageViewMinLodFeaturesEXT name);
        VkPhysicalDeviceImageViewMinLodFeaturesEXT deserialize_VkPhysicalDeviceImageViewMinLodFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkImageViewMinLodCreateInfoEXT(VkImageViewMinLodCreateInfoEXT name);
        VkImageViewMinLodCreateInfoEXT deserialize_VkImageViewMinLodCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT name);
        VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT deserialize_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM name);
        VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM deserialize_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceLinearColorAttachmentFeaturesNV(VkPhysicalDeviceLinearColorAttachmentFeaturesNV name);
        VkPhysicalDeviceLinearColorAttachmentFeaturesNV deserialize_VkPhysicalDeviceLinearColorAttachmentFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT name);
        VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT deserialize_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT name);
        VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT deserialize_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkGraphicsPipelineLibraryCreateInfoEXT(VkGraphicsPipelineLibraryCreateInfoEXT name);
        VkGraphicsPipelineLibraryCreateInfoEXT deserialize_VkGraphicsPipelineLibraryCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE name);
        VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE deserialize_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorSetBindingReferenceVALVE(VkDescriptorSetBindingReferenceVALVE name);
        VkDescriptorSetBindingReferenceVALVE deserialize_VkDescriptorSetBindingReferenceVALVE(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorSetLayoutHostMappingInfoVALVE(VkDescriptorSetLayoutHostMappingInfoVALVE name);
        VkDescriptorSetLayoutHostMappingInfoVALVE deserialize_VkDescriptorSetLayoutHostMappingInfoVALVE(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT(VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT name);
        VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT deserialize_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT(VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT name);
        VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT deserialize_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineShaderStageModuleIdentifierCreateInfoEXT(VkPipelineShaderStageModuleIdentifierCreateInfoEXT name);
        VkPipelineShaderStageModuleIdentifierCreateInfoEXT deserialize_VkPipelineShaderStageModuleIdentifierCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkShaderModuleIdentifierEXT(VkShaderModuleIdentifierEXT name);
        VkShaderModuleIdentifierEXT deserialize_VkShaderModuleIdentifierEXT(rjson name);
    

        yyjson::writer::object serialize_VkImageCompressionControlEXT(VkImageCompressionControlEXT name);
        VkImageCompressionControlEXT deserialize_VkImageCompressionControlEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceImageCompressionControlFeaturesEXT(VkPhysicalDeviceImageCompressionControlFeaturesEXT name);
        VkPhysicalDeviceImageCompressionControlFeaturesEXT deserialize_VkPhysicalDeviceImageCompressionControlFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkImageCompressionPropertiesEXT(VkImageCompressionPropertiesEXT name);
        VkImageCompressionPropertiesEXT deserialize_VkImageCompressionPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT name);
        VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT deserialize_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkImageSubresource2KHR(VkImageSubresource2KHR name);
        VkImageSubresource2KHR deserialize_VkImageSubresource2KHR(rjson name);
    

        yyjson::writer::object serialize_VkImageSubresource2EXT(VkImageSubresource2EXT name);
        VkImageSubresource2EXT deserialize_VkImageSubresource2EXT(rjson name);
    

        yyjson::writer::object serialize_VkSubresourceLayout2KHR(VkSubresourceLayout2KHR name);
        VkSubresourceLayout2KHR deserialize_VkSubresourceLayout2KHR(rjson name);
    

        yyjson::writer::object serialize_VkSubresourceLayout2EXT(VkSubresourceLayout2EXT name);
        VkSubresourceLayout2EXT deserialize_VkSubresourceLayout2EXT(rjson name);
    

        yyjson::writer::object serialize_VkRenderPassCreationControlEXT(VkRenderPassCreationControlEXT name);
        VkRenderPassCreationControlEXT deserialize_VkRenderPassCreationControlEXT(rjson name);
    

        yyjson::writer::object serialize_VkRenderPassCreationFeedbackInfoEXT(VkRenderPassCreationFeedbackInfoEXT name);
        VkRenderPassCreationFeedbackInfoEXT deserialize_VkRenderPassCreationFeedbackInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkRenderPassCreationFeedbackCreateInfoEXT(VkRenderPassCreationFeedbackCreateInfoEXT name);
        VkRenderPassCreationFeedbackCreateInfoEXT deserialize_VkRenderPassCreationFeedbackCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkRenderPassSubpassFeedbackInfoEXT(VkRenderPassSubpassFeedbackInfoEXT name);
        VkRenderPassSubpassFeedbackInfoEXT deserialize_VkRenderPassSubpassFeedbackInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkRenderPassSubpassFeedbackCreateInfoEXT(VkRenderPassSubpassFeedbackCreateInfoEXT name);
        VkRenderPassSubpassFeedbackCreateInfoEXT deserialize_VkRenderPassSubpassFeedbackCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT name);
        VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT deserialize_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkMicromapBuildInfoEXT(VkMicromapBuildInfoEXT name);
        VkMicromapBuildInfoEXT deserialize_VkMicromapBuildInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkMicromapCreateInfoEXT(VkMicromapCreateInfoEXT name);
        VkMicromapCreateInfoEXT deserialize_VkMicromapCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkMicromapVersionInfoEXT(VkMicromapVersionInfoEXT name);
        VkMicromapVersionInfoEXT deserialize_VkMicromapVersionInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkCopyMicromapInfoEXT(VkCopyMicromapInfoEXT name);
        VkCopyMicromapInfoEXT deserialize_VkCopyMicromapInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkCopyMicromapToMemoryInfoEXT(VkCopyMicromapToMemoryInfoEXT name);
        VkCopyMicromapToMemoryInfoEXT deserialize_VkCopyMicromapToMemoryInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkCopyMemoryToMicromapInfoEXT(VkCopyMemoryToMicromapInfoEXT name);
        VkCopyMemoryToMicromapInfoEXT deserialize_VkCopyMemoryToMicromapInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkMicromapBuildSizesInfoEXT(VkMicromapBuildSizesInfoEXT name);
        VkMicromapBuildSizesInfoEXT deserialize_VkMicromapBuildSizesInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkMicromapUsageEXT(VkMicromapUsageEXT name);
        VkMicromapUsageEXT deserialize_VkMicromapUsageEXT(rjson name);
    

        yyjson::writer::object serialize_VkMicromapTriangleEXT(VkMicromapTriangleEXT name);
        VkMicromapTriangleEXT deserialize_VkMicromapTriangleEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceOpacityMicromapFeaturesEXT(VkPhysicalDeviceOpacityMicromapFeaturesEXT name);
        VkPhysicalDeviceOpacityMicromapFeaturesEXT deserialize_VkPhysicalDeviceOpacityMicromapFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceOpacityMicromapPropertiesEXT(VkPhysicalDeviceOpacityMicromapPropertiesEXT name);
        VkPhysicalDeviceOpacityMicromapPropertiesEXT deserialize_VkPhysicalDeviceOpacityMicromapPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureTrianglesOpacityMicromapEXT(VkAccelerationStructureTrianglesOpacityMicromapEXT name);
        VkAccelerationStructureTrianglesOpacityMicromapEXT deserialize_VkAccelerationStructureTrianglesOpacityMicromapEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelinePropertiesIdentifierEXT(VkPipelinePropertiesIdentifierEXT name);
        VkPipelinePropertiesIdentifierEXT deserialize_VkPipelinePropertiesIdentifierEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePipelinePropertiesFeaturesEXT(VkPhysicalDevicePipelinePropertiesFeaturesEXT name);
        VkPhysicalDevicePipelinePropertiesFeaturesEXT deserialize_VkPhysicalDevicePipelinePropertiesFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD name);
        VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD deserialize_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(rjson name);
    

        yyjson::writer::object serialize_VkExternalMemoryAcquireUnmodifiedEXT(VkExternalMemoryAcquireUnmodifiedEXT name);
        VkExternalMemoryAcquireUnmodifiedEXT deserialize_VkExternalMemoryAcquireUnmodifiedEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT(VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT name);
        VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT deserialize_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePipelineRobustnessFeaturesEXT(VkPhysicalDevicePipelineRobustnessFeaturesEXT name);
        VkPhysicalDevicePipelineRobustnessFeaturesEXT deserialize_VkPhysicalDevicePipelineRobustnessFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineRobustnessCreateInfoEXT(VkPipelineRobustnessCreateInfoEXT name);
        VkPipelineRobustnessCreateInfoEXT deserialize_VkPipelineRobustnessCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePipelineRobustnessPropertiesEXT(VkPhysicalDevicePipelineRobustnessPropertiesEXT name);
        VkPhysicalDevicePipelineRobustnessPropertiesEXT deserialize_VkPhysicalDevicePipelineRobustnessPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkImageViewSampleWeightCreateInfoQCOM(VkImageViewSampleWeightCreateInfoQCOM name);
        VkImageViewSampleWeightCreateInfoQCOM deserialize_VkImageViewSampleWeightCreateInfoQCOM(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceImageProcessingFeaturesQCOM(VkPhysicalDeviceImageProcessingFeaturesQCOM name);
        VkPhysicalDeviceImageProcessingFeaturesQCOM deserialize_VkPhysicalDeviceImageProcessingFeaturesQCOM(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceImageProcessingPropertiesQCOM(VkPhysicalDeviceImageProcessingPropertiesQCOM name);
        VkPhysicalDeviceImageProcessingPropertiesQCOM deserialize_VkPhysicalDeviceImageProcessingPropertiesQCOM(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceTilePropertiesFeaturesQCOM(VkPhysicalDeviceTilePropertiesFeaturesQCOM name);
        VkPhysicalDeviceTilePropertiesFeaturesQCOM deserialize_VkPhysicalDeviceTilePropertiesFeaturesQCOM(rjson name);
    

        yyjson::writer::object serialize_VkTilePropertiesQCOM(VkTilePropertiesQCOM name);
        VkTilePropertiesQCOM deserialize_VkTilePropertiesQCOM(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceAmigoProfilingFeaturesSEC(VkPhysicalDeviceAmigoProfilingFeaturesSEC name);
        VkPhysicalDeviceAmigoProfilingFeaturesSEC deserialize_VkPhysicalDeviceAmigoProfilingFeaturesSEC(rjson name);
    

        yyjson::writer::object serialize_VkAmigoProfilingSubmitInfoSEC(VkAmigoProfilingSubmitInfoSEC name);
        VkAmigoProfilingSubmitInfoSEC deserialize_VkAmigoProfilingSubmitInfoSEC(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT name);
        VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT deserialize_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDepthClampZeroOneFeaturesEXT(VkPhysicalDeviceDepthClampZeroOneFeaturesEXT name);
        VkPhysicalDeviceDepthClampZeroOneFeaturesEXT deserialize_VkPhysicalDeviceDepthClampZeroOneFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceAddressBindingReportFeaturesEXT(VkPhysicalDeviceAddressBindingReportFeaturesEXT name);
        VkPhysicalDeviceAddressBindingReportFeaturesEXT deserialize_VkPhysicalDeviceAddressBindingReportFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkDeviceAddressBindingCallbackDataEXT(VkDeviceAddressBindingCallbackDataEXT name);
        VkDeviceAddressBindingCallbackDataEXT deserialize_VkDeviceAddressBindingCallbackDataEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceOpticalFlowFeaturesNV(VkPhysicalDeviceOpticalFlowFeaturesNV name);
        VkPhysicalDeviceOpticalFlowFeaturesNV deserialize_VkPhysicalDeviceOpticalFlowFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceOpticalFlowPropertiesNV(VkPhysicalDeviceOpticalFlowPropertiesNV name);
        VkPhysicalDeviceOpticalFlowPropertiesNV deserialize_VkPhysicalDeviceOpticalFlowPropertiesNV(rjson name);
    

        yyjson::writer::object serialize_VkOpticalFlowImageFormatInfoNV(VkOpticalFlowImageFormatInfoNV name);
        VkOpticalFlowImageFormatInfoNV deserialize_VkOpticalFlowImageFormatInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkOpticalFlowImageFormatPropertiesNV(VkOpticalFlowImageFormatPropertiesNV name);
        VkOpticalFlowImageFormatPropertiesNV deserialize_VkOpticalFlowImageFormatPropertiesNV(rjson name);
    

        yyjson::writer::object serialize_VkOpticalFlowSessionCreateInfoNV(VkOpticalFlowSessionCreateInfoNV name);
        VkOpticalFlowSessionCreateInfoNV deserialize_VkOpticalFlowSessionCreateInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkOpticalFlowSessionCreatePrivateDataInfoNV(VkOpticalFlowSessionCreatePrivateDataInfoNV name);
        VkOpticalFlowSessionCreatePrivateDataInfoNV deserialize_VkOpticalFlowSessionCreatePrivateDataInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkOpticalFlowExecuteInfoNV(VkOpticalFlowExecuteInfoNV name);
        VkOpticalFlowExecuteInfoNV deserialize_VkOpticalFlowExecuteInfoNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFaultFeaturesEXT(VkPhysicalDeviceFaultFeaturesEXT name);
        VkPhysicalDeviceFaultFeaturesEXT deserialize_VkPhysicalDeviceFaultFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkDeviceFaultAddressInfoEXT(VkDeviceFaultAddressInfoEXT name);
        VkDeviceFaultAddressInfoEXT deserialize_VkDeviceFaultAddressInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkDeviceFaultVendorInfoEXT(VkDeviceFaultVendorInfoEXT name);
        VkDeviceFaultVendorInfoEXT deserialize_VkDeviceFaultVendorInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkDeviceFaultCountsEXT(VkDeviceFaultCountsEXT name);
        VkDeviceFaultCountsEXT deserialize_VkDeviceFaultCountsEXT(rjson name);
    

        yyjson::writer::object serialize_VkDeviceFaultInfoEXT(VkDeviceFaultInfoEXT name);
        VkDeviceFaultInfoEXT deserialize_VkDeviceFaultInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkDeviceFaultVendorBinaryHeaderVersionOneEXT(VkDeviceFaultVendorBinaryHeaderVersionOneEXT name);
        VkDeviceFaultVendorBinaryHeaderVersionOneEXT deserialize_VkDeviceFaultVendorBinaryHeaderVersionOneEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT name);
        VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT deserialize_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkDepthBiasInfoEXT(VkDepthBiasInfoEXT name);
        VkDepthBiasInfoEXT deserialize_VkDepthBiasInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkDepthBiasRepresentationInfoEXT(VkDepthBiasRepresentationInfoEXT name);
        VkDepthBiasRepresentationInfoEXT deserialize_VkDepthBiasRepresentationInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkDecompressMemoryRegionNV(VkDecompressMemoryRegionNV name);
        VkDecompressMemoryRegionNV deserialize_VkDecompressMemoryRegionNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM(VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM name);
        VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM deserialize_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM(VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM name);
        VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM deserialize_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM(rjson name);
    

        yyjson::writer::object serialize_VkFrameBoundaryEXT(VkFrameBoundaryEXT name);
        VkFrameBoundaryEXT deserialize_VkFrameBoundaryEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceFrameBoundaryFeaturesEXT(VkPhysicalDeviceFrameBoundaryFeaturesEXT name);
        VkPhysicalDeviceFrameBoundaryFeaturesEXT deserialize_VkPhysicalDeviceFrameBoundaryFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT name);
        VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT deserialize_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkSurfacePresentModeEXT(VkSurfacePresentModeEXT name);
        VkSurfacePresentModeEXT deserialize_VkSurfacePresentModeEXT(rjson name);
    

        yyjson::writer::object serialize_VkSurfacePresentScalingCapabilitiesEXT(VkSurfacePresentScalingCapabilitiesEXT name);
        VkSurfacePresentScalingCapabilitiesEXT deserialize_VkSurfacePresentScalingCapabilitiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkSurfacePresentModeCompatibilityEXT(VkSurfacePresentModeCompatibilityEXT name);
        VkSurfacePresentModeCompatibilityEXT deserialize_VkSurfacePresentModeCompatibilityEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT(VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT name);
        VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT deserialize_VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkSwapchainPresentFenceInfoEXT(VkSwapchainPresentFenceInfoEXT name);
        VkSwapchainPresentFenceInfoEXT deserialize_VkSwapchainPresentFenceInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkSwapchainPresentModesCreateInfoEXT(VkSwapchainPresentModesCreateInfoEXT name);
        VkSwapchainPresentModesCreateInfoEXT deserialize_VkSwapchainPresentModesCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkSwapchainPresentModeInfoEXT(VkSwapchainPresentModeInfoEXT name);
        VkSwapchainPresentModeInfoEXT deserialize_VkSwapchainPresentModeInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkSwapchainPresentScalingCreateInfoEXT(VkSwapchainPresentScalingCreateInfoEXT name);
        VkSwapchainPresentScalingCreateInfoEXT deserialize_VkSwapchainPresentScalingCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkReleaseSwapchainImagesInfoEXT(VkReleaseSwapchainImagesInfoEXT name);
        VkReleaseSwapchainImagesInfoEXT deserialize_VkReleaseSwapchainImagesInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDepthBiasControlFeaturesEXT(VkPhysicalDeviceDepthBiasControlFeaturesEXT name);
        VkPhysicalDeviceDepthBiasControlFeaturesEXT deserialize_VkPhysicalDeviceDepthBiasControlFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV(VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV name);
        VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV deserialize_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV(VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV name);
        VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV deserialize_VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV(rjson name);
    

        yyjson::writer::object serialize_VkDirectDriverLoadingInfoLUNARG(VkDirectDriverLoadingInfoLUNARG name);
        VkDirectDriverLoadingInfoLUNARG deserialize_VkDirectDriverLoadingInfoLUNARG(rjson name);
    

        yyjson::writer::object serialize_VkDirectDriverLoadingListLUNARG(VkDirectDriverLoadingListLUNARG name);
        VkDirectDriverLoadingListLUNARG deserialize_VkDirectDriverLoadingListLUNARG(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM name);
        VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM deserialize_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR(VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR name);
        VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR deserialize_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkDeviceImageSubresourceInfoKHR(VkDeviceImageSubresourceInfoKHR name);
        VkDeviceImageSubresourceInfoKHR deserialize_VkDeviceImageSubresourceInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderCorePropertiesARM(VkPhysicalDeviceShaderCorePropertiesARM name);
        VkPhysicalDeviceShaderCorePropertiesARM deserialize_VkPhysicalDeviceShaderCorePropertiesARM(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM name);
        VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM deserialize_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(rjson name);
    

        yyjson::writer::object serialize_VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM(VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM name);
        VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM deserialize_VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM(rjson name);
    

        yyjson::writer::object serialize_VkQueryLowLatencySupportNV(VkQueryLowLatencySupportNV name);
        VkQueryLowLatencySupportNV deserialize_VkQueryLowLatencySupportNV(rjson name);
    

        yyjson::writer::object serialize_VkMemoryMapInfoKHR(VkMemoryMapInfoKHR name);
        VkMemoryMapInfoKHR deserialize_VkMemoryMapInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkMemoryUnmapInfoKHR(VkMemoryUnmapInfoKHR name);
        VkMemoryUnmapInfoKHR deserialize_VkMemoryUnmapInfoKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderObjectFeaturesEXT(VkPhysicalDeviceShaderObjectFeaturesEXT name);
        VkPhysicalDeviceShaderObjectFeaturesEXT deserialize_VkPhysicalDeviceShaderObjectFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderObjectPropertiesEXT(VkPhysicalDeviceShaderObjectPropertiesEXT name);
        VkPhysicalDeviceShaderObjectPropertiesEXT deserialize_VkPhysicalDeviceShaderObjectPropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkShaderCreateInfoEXT(VkShaderCreateInfoEXT name);
        VkShaderCreateInfoEXT deserialize_VkShaderCreateInfoEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderTileImageFeaturesEXT(VkPhysicalDeviceShaderTileImageFeaturesEXT name);
        VkPhysicalDeviceShaderTileImageFeaturesEXT deserialize_VkPhysicalDeviceShaderTileImageFeaturesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceShaderTileImagePropertiesEXT(VkPhysicalDeviceShaderTileImagePropertiesEXT name);
        VkPhysicalDeviceShaderTileImagePropertiesEXT deserialize_VkPhysicalDeviceShaderTileImagePropertiesEXT(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceCooperativeMatrixFeaturesKHR(VkPhysicalDeviceCooperativeMatrixFeaturesKHR name);
        VkPhysicalDeviceCooperativeMatrixFeaturesKHR deserialize_VkPhysicalDeviceCooperativeMatrixFeaturesKHR(rjson name);
    

        yyjson::writer::object serialize_VkCooperativeMatrixPropertiesKHR(VkCooperativeMatrixPropertiesKHR name);
        VkCooperativeMatrixPropertiesKHR deserialize_VkCooperativeMatrixPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceCooperativeMatrixPropertiesKHR(VkPhysicalDeviceCooperativeMatrixPropertiesKHR name);
        VkPhysicalDeviceCooperativeMatrixPropertiesKHR deserialize_VkPhysicalDeviceCooperativeMatrixPropertiesKHR(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceCubicClampFeaturesQCOM(VkPhysicalDeviceCubicClampFeaturesQCOM name);
        VkPhysicalDeviceCubicClampFeaturesQCOM deserialize_VkPhysicalDeviceCubicClampFeaturesQCOM(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM(VkPhysicalDeviceYcbcrDegammaFeaturesQCOM name);
        VkPhysicalDeviceYcbcrDegammaFeaturesQCOM deserialize_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM(rjson name);
    

        yyjson::writer::object serialize_VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM(VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM name);
        VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM deserialize_VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceCubicWeightsFeaturesQCOM(VkPhysicalDeviceCubicWeightsFeaturesQCOM name);
        VkPhysicalDeviceCubicWeightsFeaturesQCOM deserialize_VkPhysicalDeviceCubicWeightsFeaturesQCOM(rjson name);
    

        yyjson::writer::object serialize_VkSamplerCubicWeightsCreateInfoQCOM(VkSamplerCubicWeightsCreateInfoQCOM name);
        VkSamplerCubicWeightsCreateInfoQCOM deserialize_VkSamplerCubicWeightsCreateInfoQCOM(rjson name);
    

        yyjson::writer::object serialize_VkBlitImageCubicWeightsInfoQCOM(VkBlitImageCubicWeightsInfoQCOM name);
        VkBlitImageCubicWeightsInfoQCOM deserialize_VkBlitImageCubicWeightsInfoQCOM(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceImageProcessing2FeaturesQCOM(VkPhysicalDeviceImageProcessing2FeaturesQCOM name);
        VkPhysicalDeviceImageProcessing2FeaturesQCOM deserialize_VkPhysicalDeviceImageProcessing2FeaturesQCOM(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceImageProcessing2PropertiesQCOM(VkPhysicalDeviceImageProcessing2PropertiesQCOM name);
        VkPhysicalDeviceImageProcessing2PropertiesQCOM deserialize_VkPhysicalDeviceImageProcessing2PropertiesQCOM(rjson name);
    

        yyjson::writer::object serialize_VkSamplerBlockMatchWindowCreateInfoQCOM(VkSamplerBlockMatchWindowCreateInfoQCOM name);
        VkSamplerBlockMatchWindowCreateInfoQCOM deserialize_VkSamplerBlockMatchWindowCreateInfoQCOM(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV(VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV name);
        VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV deserialize_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceLayeredDriverPropertiesMSFT(VkPhysicalDeviceLayeredDriverPropertiesMSFT name);
        VkPhysicalDeviceLayeredDriverPropertiesMSFT deserialize_VkPhysicalDeviceLayeredDriverPropertiesMSFT(rjson name);
    

        yyjson::writer::object serialize_int(int name);
        int deserialize_int(rjson name);
    

        yyjson::writer::object serialize_char(char name);
        char deserialize_char(rjson name);
    

        yyjson::writer::object serialize_float(float name);
        float deserialize_float(rjson name);
    

        yyjson::writer::object serialize_double(double name);
        double deserialize_double(rjson name);
    

        yyjson::writer::object serialize_int8_t(int8_t name);
        int8_t deserialize_int8_t(rjson name);
    

        yyjson::writer::object serialize_uint8_t(uint8_t name);
        uint8_t deserialize_uint8_t(rjson name);
    

        yyjson::writer::object serialize_int16_t(int16_t name);
        int16_t deserialize_int16_t(rjson name);
    

        yyjson::writer::object serialize_uint16_t(uint16_t name);
        uint16_t deserialize_uint16_t(rjson name);
    

        yyjson::writer::object serialize_uint32_t(uint32_t name);
        uint32_t deserialize_uint32_t(rjson name);
    

        yyjson::writer::object serialize_uint64_t(uint64_t name);
        uint64_t deserialize_uint64_t(rjson name);
    

        yyjson::writer::object serialize_int32_t(int32_t name);
        int32_t deserialize_int32_t(rjson name);
    

        yyjson::writer::object serialize_int64_t(int64_t name);
        int64_t deserialize_int64_t(rjson name);
    

        yyjson::writer::object serialize_size_t(size_t name);
        size_t deserialize_size_t(rjson name);
    

        yyjson::writer::object serialize_VkFramebufferCreateFlags(VkFramebufferCreateFlags name);
        VkFramebufferCreateFlags deserialize_VkFramebufferCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkQueryPoolCreateFlags(VkQueryPoolCreateFlags name);
        VkQueryPoolCreateFlags deserialize_VkQueryPoolCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkRenderPassCreateFlags(VkRenderPassCreateFlags name);
        VkRenderPassCreateFlags deserialize_VkRenderPassCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkSamplerCreateFlags(VkSamplerCreateFlags name);
        VkSamplerCreateFlags deserialize_VkSamplerCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkPipelineLayoutCreateFlags(VkPipelineLayoutCreateFlags name);
        VkPipelineLayoutCreateFlags deserialize_VkPipelineLayoutCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCacheCreateFlags(VkPipelineCacheCreateFlags name);
        VkPipelineCacheCreateFlags deserialize_VkPipelineCacheCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkPipelineDepthStencilStateCreateFlags(VkPipelineDepthStencilStateCreateFlags name);
        VkPipelineDepthStencilStateCreateFlags deserialize_VkPipelineDepthStencilStateCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkPipelineDynamicStateCreateFlags(VkPipelineDynamicStateCreateFlags name);
        VkPipelineDynamicStateCreateFlags deserialize_VkPipelineDynamicStateCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkPipelineColorBlendStateCreateFlags(VkPipelineColorBlendStateCreateFlags name);
        VkPipelineColorBlendStateCreateFlags deserialize_VkPipelineColorBlendStateCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkPipelineMultisampleStateCreateFlags(VkPipelineMultisampleStateCreateFlags name);
        VkPipelineMultisampleStateCreateFlags deserialize_VkPipelineMultisampleStateCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkPipelineRasterizationStateCreateFlags(VkPipelineRasterizationStateCreateFlags name);
        VkPipelineRasterizationStateCreateFlags deserialize_VkPipelineRasterizationStateCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkPipelineViewportStateCreateFlags(VkPipelineViewportStateCreateFlags name);
        VkPipelineViewportStateCreateFlags deserialize_VkPipelineViewportStateCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkPipelineTessellationStateCreateFlags(VkPipelineTessellationStateCreateFlags name);
        VkPipelineTessellationStateCreateFlags deserialize_VkPipelineTessellationStateCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkPipelineInputAssemblyStateCreateFlags(VkPipelineInputAssemblyStateCreateFlags name);
        VkPipelineInputAssemblyStateCreateFlags deserialize_VkPipelineInputAssemblyStateCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkPipelineVertexInputStateCreateFlags(VkPipelineVertexInputStateCreateFlags name);
        VkPipelineVertexInputStateCreateFlags deserialize_VkPipelineVertexInputStateCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkPipelineShaderStageCreateFlags(VkPipelineShaderStageCreateFlags name);
        VkPipelineShaderStageCreateFlags deserialize_VkPipelineShaderStageCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorSetLayoutCreateFlags(VkDescriptorSetLayoutCreateFlags name);
        VkDescriptorSetLayoutCreateFlags deserialize_VkDescriptorSetLayoutCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkBufferViewCreateFlags(VkBufferViewCreateFlags name);
        VkBufferViewCreateFlags deserialize_VkBufferViewCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkInstanceCreateFlags(VkInstanceCreateFlags name);
        VkInstanceCreateFlags deserialize_VkInstanceCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkDeviceCreateFlags(VkDeviceCreateFlags name);
        VkDeviceCreateFlags deserialize_VkDeviceCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkDeviceQueueCreateFlags(VkDeviceQueueCreateFlags name);
        VkDeviceQueueCreateFlags deserialize_VkDeviceQueueCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkQueueFlags(VkQueueFlags name);
        VkQueueFlags deserialize_VkQueueFlags(rjson name);
    

        yyjson::writer::object serialize_VkMemoryPropertyFlags(VkMemoryPropertyFlags name);
        VkMemoryPropertyFlags deserialize_VkMemoryPropertyFlags(rjson name);
    

        yyjson::writer::object serialize_VkMemoryHeapFlags(VkMemoryHeapFlags name);
        VkMemoryHeapFlags deserialize_VkMemoryHeapFlags(rjson name);
    

        yyjson::writer::object serialize_VkAccessFlags(VkAccessFlags name);
        VkAccessFlags deserialize_VkAccessFlags(rjson name);
    

        yyjson::writer::object serialize_VkBufferUsageFlags(VkBufferUsageFlags name);
        VkBufferUsageFlags deserialize_VkBufferUsageFlags(rjson name);
    

        yyjson::writer::object serialize_VkBufferCreateFlags(VkBufferCreateFlags name);
        VkBufferCreateFlags deserialize_VkBufferCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkShaderStageFlags(VkShaderStageFlags name);
        VkShaderStageFlags deserialize_VkShaderStageFlags(rjson name);
    

        yyjson::writer::object serialize_VkImageUsageFlags(VkImageUsageFlags name);
        VkImageUsageFlags deserialize_VkImageUsageFlags(rjson name);
    

        yyjson::writer::object serialize_VkImageCreateFlags(VkImageCreateFlags name);
        VkImageCreateFlags deserialize_VkImageCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkImageViewCreateFlags(VkImageViewCreateFlags name);
        VkImageViewCreateFlags deserialize_VkImageViewCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCreateFlags(VkPipelineCreateFlags name);
        VkPipelineCreateFlags deserialize_VkPipelineCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkColorComponentFlags(VkColorComponentFlags name);
        VkColorComponentFlags deserialize_VkColorComponentFlags(rjson name);
    

        yyjson::writer::object serialize_VkFenceCreateFlags(VkFenceCreateFlags name);
        VkFenceCreateFlags deserialize_VkFenceCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreCreateFlags(VkSemaphoreCreateFlags name);
        VkSemaphoreCreateFlags deserialize_VkSemaphoreCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkFormatFeatureFlags(VkFormatFeatureFlags name);
        VkFormatFeatureFlags deserialize_VkFormatFeatureFlags(rjson name);
    

        yyjson::writer::object serialize_VkQueryControlFlags(VkQueryControlFlags name);
        VkQueryControlFlags deserialize_VkQueryControlFlags(rjson name);
    

        yyjson::writer::object serialize_VkQueryResultFlags(VkQueryResultFlags name);
        VkQueryResultFlags deserialize_VkQueryResultFlags(rjson name);
    

        yyjson::writer::object serialize_VkShaderModuleCreateFlags(VkShaderModuleCreateFlags name);
        VkShaderModuleCreateFlags deserialize_VkShaderModuleCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkEventCreateFlags(VkEventCreateFlags name);
        VkEventCreateFlags deserialize_VkEventCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkCommandPoolCreateFlags(VkCommandPoolCreateFlags name);
        VkCommandPoolCreateFlags deserialize_VkCommandPoolCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkCommandPoolResetFlags(VkCommandPoolResetFlags name);
        VkCommandPoolResetFlags deserialize_VkCommandPoolResetFlags(rjson name);
    

        yyjson::writer::object serialize_VkCommandBufferResetFlags(VkCommandBufferResetFlags name);
        VkCommandBufferResetFlags deserialize_VkCommandBufferResetFlags(rjson name);
    

        yyjson::writer::object serialize_VkCommandBufferUsageFlags(VkCommandBufferUsageFlags name);
        VkCommandBufferUsageFlags deserialize_VkCommandBufferUsageFlags(rjson name);
    

        yyjson::writer::object serialize_VkQueryPipelineStatisticFlags(VkQueryPipelineStatisticFlags name);
        VkQueryPipelineStatisticFlags deserialize_VkQueryPipelineStatisticFlags(rjson name);
    

        yyjson::writer::object serialize_VkMemoryMapFlags(VkMemoryMapFlags name);
        VkMemoryMapFlags deserialize_VkMemoryMapFlags(rjson name);
    

        yyjson::writer::object serialize_VkMemoryUnmapFlagsKHR(VkMemoryUnmapFlagsKHR name);
        VkMemoryUnmapFlagsKHR deserialize_VkMemoryUnmapFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkImageAspectFlags(VkImageAspectFlags name);
        VkImageAspectFlags deserialize_VkImageAspectFlags(rjson name);
    

        yyjson::writer::object serialize_VkSparseMemoryBindFlags(VkSparseMemoryBindFlags name);
        VkSparseMemoryBindFlags deserialize_VkSparseMemoryBindFlags(rjson name);
    

        yyjson::writer::object serialize_VkSparseImageFormatFlags(VkSparseImageFormatFlags name);
        VkSparseImageFormatFlags deserialize_VkSparseImageFormatFlags(rjson name);
    

        yyjson::writer::object serialize_VkSubpassDescriptionFlags(VkSubpassDescriptionFlags name);
        VkSubpassDescriptionFlags deserialize_VkSubpassDescriptionFlags(rjson name);
    

        yyjson::writer::object serialize_VkPipelineStageFlags(VkPipelineStageFlags name);
        VkPipelineStageFlags deserialize_VkPipelineStageFlags(rjson name);
    

        yyjson::writer::object serialize_VkSampleCountFlags(VkSampleCountFlags name);
        VkSampleCountFlags deserialize_VkSampleCountFlags(rjson name);
    

        yyjson::writer::object serialize_VkAttachmentDescriptionFlags(VkAttachmentDescriptionFlags name);
        VkAttachmentDescriptionFlags deserialize_VkAttachmentDescriptionFlags(rjson name);
    

        yyjson::writer::object serialize_VkStencilFaceFlags(VkStencilFaceFlags name);
        VkStencilFaceFlags deserialize_VkStencilFaceFlags(rjson name);
    

        yyjson::writer::object serialize_VkCullModeFlags(VkCullModeFlags name);
        VkCullModeFlags deserialize_VkCullModeFlags(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorPoolCreateFlags(VkDescriptorPoolCreateFlags name);
        VkDescriptorPoolCreateFlags deserialize_VkDescriptorPoolCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorPoolResetFlags(VkDescriptorPoolResetFlags name);
        VkDescriptorPoolResetFlags deserialize_VkDescriptorPoolResetFlags(rjson name);
    

        yyjson::writer::object serialize_VkDependencyFlags(VkDependencyFlags name);
        VkDependencyFlags deserialize_VkDependencyFlags(rjson name);
    

        yyjson::writer::object serialize_VkSubgroupFeatureFlags(VkSubgroupFeatureFlags name);
        VkSubgroupFeatureFlags deserialize_VkSubgroupFeatureFlags(rjson name);
    

        yyjson::writer::object serialize_VkIndirectCommandsLayoutUsageFlagsNV(VkIndirectCommandsLayoutUsageFlagsNV name);
        VkIndirectCommandsLayoutUsageFlagsNV deserialize_VkIndirectCommandsLayoutUsageFlagsNV(rjson name);
    

        yyjson::writer::object serialize_VkIndirectStateFlagsNV(VkIndirectStateFlagsNV name);
        VkIndirectStateFlagsNV deserialize_VkIndirectStateFlagsNV(rjson name);
    

        yyjson::writer::object serialize_VkGeometryFlagsKHR(VkGeometryFlagsKHR name);
        VkGeometryFlagsKHR deserialize_VkGeometryFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkGeometryFlagsNV(VkGeometryFlagsNV name);
        VkGeometryFlagsNV deserialize_VkGeometryFlagsNV(rjson name);
    

        yyjson::writer::object serialize_VkGeometryInstanceFlagsKHR(VkGeometryInstanceFlagsKHR name);
        VkGeometryInstanceFlagsKHR deserialize_VkGeometryInstanceFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkGeometryInstanceFlagsNV(VkGeometryInstanceFlagsNV name);
        VkGeometryInstanceFlagsNV deserialize_VkGeometryInstanceFlagsNV(rjson name);
    

        yyjson::writer::object serialize_VkBuildAccelerationStructureFlagsKHR(VkBuildAccelerationStructureFlagsKHR name);
        VkBuildAccelerationStructureFlagsKHR deserialize_VkBuildAccelerationStructureFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkBuildAccelerationStructureFlagsNV(VkBuildAccelerationStructureFlagsNV name);
        VkBuildAccelerationStructureFlagsNV deserialize_VkBuildAccelerationStructureFlagsNV(rjson name);
    

        yyjson::writer::object serialize_VkPrivateDataSlotCreateFlags(VkPrivateDataSlotCreateFlags name);
        VkPrivateDataSlotCreateFlags deserialize_VkPrivateDataSlotCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkPrivateDataSlotCreateFlagsEXT(VkPrivateDataSlotCreateFlagsEXT name);
        VkPrivateDataSlotCreateFlagsEXT deserialize_VkPrivateDataSlotCreateFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureCreateFlagsKHR(VkAccelerationStructureCreateFlagsKHR name);
        VkAccelerationStructureCreateFlagsKHR deserialize_VkAccelerationStructureCreateFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorUpdateTemplateCreateFlags(VkDescriptorUpdateTemplateCreateFlags name);
        VkDescriptorUpdateTemplateCreateFlags deserialize_VkDescriptorUpdateTemplateCreateFlags(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorUpdateTemplateCreateFlagsKHR(VkDescriptorUpdateTemplateCreateFlagsKHR name);
        VkDescriptorUpdateTemplateCreateFlagsKHR deserialize_VkDescriptorUpdateTemplateCreateFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCreationFeedbackFlags(VkPipelineCreationFeedbackFlags name);
        VkPipelineCreationFeedbackFlags deserialize_VkPipelineCreationFeedbackFlags(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCreationFeedbackFlagsEXT(VkPipelineCreationFeedbackFlagsEXT name);
        VkPipelineCreationFeedbackFlagsEXT deserialize_VkPipelineCreationFeedbackFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkPerformanceCounterDescriptionFlagsKHR(VkPerformanceCounterDescriptionFlagsKHR name);
        VkPerformanceCounterDescriptionFlagsKHR deserialize_VkPerformanceCounterDescriptionFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkAcquireProfilingLockFlagsKHR(VkAcquireProfilingLockFlagsKHR name);
        VkAcquireProfilingLockFlagsKHR deserialize_VkAcquireProfilingLockFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreWaitFlags(VkSemaphoreWaitFlags name);
        VkSemaphoreWaitFlags deserialize_VkSemaphoreWaitFlags(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreWaitFlagsKHR(VkSemaphoreWaitFlagsKHR name);
        VkSemaphoreWaitFlagsKHR deserialize_VkSemaphoreWaitFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCompilerControlFlagsAMD(VkPipelineCompilerControlFlagsAMD name);
        VkPipelineCompilerControlFlagsAMD deserialize_VkPipelineCompilerControlFlagsAMD(rjson name);
    

        yyjson::writer::object serialize_VkShaderCorePropertiesFlagsAMD(VkShaderCorePropertiesFlagsAMD name);
        VkShaderCorePropertiesFlagsAMD deserialize_VkShaderCorePropertiesFlagsAMD(rjson name);
    

        yyjson::writer::object serialize_VkDeviceDiagnosticsConfigFlagsNV(VkDeviceDiagnosticsConfigFlagsNV name);
        VkDeviceDiagnosticsConfigFlagsNV deserialize_VkDeviceDiagnosticsConfigFlagsNV(rjson name);
    

        yyjson::writer::object serialize_VkAccessFlags2(VkAccessFlags2 name);
        VkAccessFlags2 deserialize_VkAccessFlags2(rjson name);
    

        yyjson::writer::object serialize_VkAccessFlags2KHR(VkAccessFlags2KHR name);
        VkAccessFlags2KHR deserialize_VkAccessFlags2KHR(rjson name);
    

        yyjson::writer::object serialize_VkPipelineStageFlags2(VkPipelineStageFlags2 name);
        VkPipelineStageFlags2 deserialize_VkPipelineStageFlags2(rjson name);
    

        yyjson::writer::object serialize_VkPipelineStageFlags2KHR(VkPipelineStageFlags2KHR name);
        VkPipelineStageFlags2KHR deserialize_VkPipelineStageFlags2KHR(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureMotionInfoFlagsNV(VkAccelerationStructureMotionInfoFlagsNV name);
        VkAccelerationStructureMotionInfoFlagsNV deserialize_VkAccelerationStructureMotionInfoFlagsNV(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureMotionInstanceFlagsNV(VkAccelerationStructureMotionInstanceFlagsNV name);
        VkAccelerationStructureMotionInstanceFlagsNV deserialize_VkAccelerationStructureMotionInstanceFlagsNV(rjson name);
    

        yyjson::writer::object serialize_VkFormatFeatureFlags2(VkFormatFeatureFlags2 name);
        VkFormatFeatureFlags2 deserialize_VkFormatFeatureFlags2(rjson name);
    

        yyjson::writer::object serialize_VkFormatFeatureFlags2KHR(VkFormatFeatureFlags2KHR name);
        VkFormatFeatureFlags2KHR deserialize_VkFormatFeatureFlags2KHR(rjson name);
    

        yyjson::writer::object serialize_VkRenderingFlags(VkRenderingFlags name);
        VkRenderingFlags deserialize_VkRenderingFlags(rjson name);
    

        yyjson::writer::object serialize_VkMemoryDecompressionMethodFlagsNV(VkMemoryDecompressionMethodFlagsNV name);
        VkMemoryDecompressionMethodFlagsNV deserialize_VkMemoryDecompressionMethodFlagsNV(rjson name);
    

        yyjson::writer::object serialize_VkRenderingFlagsKHR(VkRenderingFlagsKHR name);
        VkRenderingFlagsKHR deserialize_VkRenderingFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkBuildMicromapFlagsEXT(VkBuildMicromapFlagsEXT name);
        VkBuildMicromapFlagsEXT deserialize_VkBuildMicromapFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkMicromapCreateFlagsEXT(VkMicromapCreateFlagsEXT name);
        VkMicromapCreateFlagsEXT deserialize_VkMicromapCreateFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkDirectDriverLoadingFlagsLUNARG(VkDirectDriverLoadingFlagsLUNARG name);
        VkDirectDriverLoadingFlagsLUNARG deserialize_VkDirectDriverLoadingFlagsLUNARG(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCreateFlags2KHR(VkPipelineCreateFlags2KHR name);
        VkPipelineCreateFlags2KHR deserialize_VkPipelineCreateFlags2KHR(rjson name);
    

        yyjson::writer::object serialize_VkBufferUsageFlags2KHR(VkBufferUsageFlags2KHR name);
        VkBufferUsageFlags2KHR deserialize_VkBufferUsageFlags2KHR(rjson name);
    

        yyjson::writer::object serialize_VkCompositeAlphaFlagsKHR(VkCompositeAlphaFlagsKHR name);
        VkCompositeAlphaFlagsKHR deserialize_VkCompositeAlphaFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkDisplayPlaneAlphaFlagsKHR(VkDisplayPlaneAlphaFlagsKHR name);
        VkDisplayPlaneAlphaFlagsKHR deserialize_VkDisplayPlaneAlphaFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkSurfaceTransformFlagsKHR(VkSurfaceTransformFlagsKHR name);
        VkSurfaceTransformFlagsKHR deserialize_VkSurfaceTransformFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkSwapchainCreateFlagsKHR(VkSwapchainCreateFlagsKHR name);
        VkSwapchainCreateFlagsKHR deserialize_VkSwapchainCreateFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkDisplayModeCreateFlagsKHR(VkDisplayModeCreateFlagsKHR name);
        VkDisplayModeCreateFlagsKHR deserialize_VkDisplayModeCreateFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkDisplaySurfaceCreateFlagsKHR(VkDisplaySurfaceCreateFlagsKHR name);
        VkDisplaySurfaceCreateFlagsKHR deserialize_VkDisplaySurfaceCreateFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkXlibSurfaceCreateFlagsKHR(VkXlibSurfaceCreateFlagsKHR name);
        VkXlibSurfaceCreateFlagsKHR deserialize_VkXlibSurfaceCreateFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkXcbSurfaceCreateFlagsKHR(VkXcbSurfaceCreateFlagsKHR name);
        VkXcbSurfaceCreateFlagsKHR deserialize_VkXcbSurfaceCreateFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkHeadlessSurfaceCreateFlagsEXT(VkHeadlessSurfaceCreateFlagsEXT name);
        VkHeadlessSurfaceCreateFlagsEXT deserialize_VkHeadlessSurfaceCreateFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkPeerMemoryFeatureFlags(VkPeerMemoryFeatureFlags name);
        VkPeerMemoryFeatureFlags deserialize_VkPeerMemoryFeatureFlags(rjson name);
    

        yyjson::writer::object serialize_VkPeerMemoryFeatureFlagsKHR(VkPeerMemoryFeatureFlagsKHR name);
        VkPeerMemoryFeatureFlagsKHR deserialize_VkPeerMemoryFeatureFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkMemoryAllocateFlags(VkMemoryAllocateFlags name);
        VkMemoryAllocateFlags deserialize_VkMemoryAllocateFlags(rjson name);
    

        yyjson::writer::object serialize_VkMemoryAllocateFlagsKHR(VkMemoryAllocateFlagsKHR name);
        VkMemoryAllocateFlagsKHR deserialize_VkMemoryAllocateFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkDeviceGroupPresentModeFlagsKHR(VkDeviceGroupPresentModeFlagsKHR name);
        VkDeviceGroupPresentModeFlagsKHR deserialize_VkDeviceGroupPresentModeFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkDebugReportFlagsEXT(VkDebugReportFlagsEXT name);
        VkDebugReportFlagsEXT deserialize_VkDebugReportFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkCommandPoolTrimFlags(VkCommandPoolTrimFlags name);
        VkCommandPoolTrimFlags deserialize_VkCommandPoolTrimFlags(rjson name);
    

        yyjson::writer::object serialize_VkCommandPoolTrimFlagsKHR(VkCommandPoolTrimFlagsKHR name);
        VkCommandPoolTrimFlagsKHR deserialize_VkCommandPoolTrimFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkExternalMemoryHandleTypeFlagsNV(VkExternalMemoryHandleTypeFlagsNV name);
        VkExternalMemoryHandleTypeFlagsNV deserialize_VkExternalMemoryHandleTypeFlagsNV(rjson name);
    

        yyjson::writer::object serialize_VkExternalMemoryFeatureFlagsNV(VkExternalMemoryFeatureFlagsNV name);
        VkExternalMemoryFeatureFlagsNV deserialize_VkExternalMemoryFeatureFlagsNV(rjson name);
    

        yyjson::writer::object serialize_VkExternalMemoryHandleTypeFlags(VkExternalMemoryHandleTypeFlags name);
        VkExternalMemoryHandleTypeFlags deserialize_VkExternalMemoryHandleTypeFlags(rjson name);
    

        yyjson::writer::object serialize_VkExternalMemoryHandleTypeFlagsKHR(VkExternalMemoryHandleTypeFlagsKHR name);
        VkExternalMemoryHandleTypeFlagsKHR deserialize_VkExternalMemoryHandleTypeFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkExternalMemoryFeatureFlags(VkExternalMemoryFeatureFlags name);
        VkExternalMemoryFeatureFlags deserialize_VkExternalMemoryFeatureFlags(rjson name);
    

        yyjson::writer::object serialize_VkExternalMemoryFeatureFlagsKHR(VkExternalMemoryFeatureFlagsKHR name);
        VkExternalMemoryFeatureFlagsKHR deserialize_VkExternalMemoryFeatureFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkExternalSemaphoreHandleTypeFlags(VkExternalSemaphoreHandleTypeFlags name);
        VkExternalSemaphoreHandleTypeFlags deserialize_VkExternalSemaphoreHandleTypeFlags(rjson name);
    

        yyjson::writer::object serialize_VkExternalSemaphoreHandleTypeFlagsKHR(VkExternalSemaphoreHandleTypeFlagsKHR name);
        VkExternalSemaphoreHandleTypeFlagsKHR deserialize_VkExternalSemaphoreHandleTypeFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkExternalSemaphoreFeatureFlags(VkExternalSemaphoreFeatureFlags name);
        VkExternalSemaphoreFeatureFlags deserialize_VkExternalSemaphoreFeatureFlags(rjson name);
    

        yyjson::writer::object serialize_VkExternalSemaphoreFeatureFlagsKHR(VkExternalSemaphoreFeatureFlagsKHR name);
        VkExternalSemaphoreFeatureFlagsKHR deserialize_VkExternalSemaphoreFeatureFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreImportFlags(VkSemaphoreImportFlags name);
        VkSemaphoreImportFlags deserialize_VkSemaphoreImportFlags(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreImportFlagsKHR(VkSemaphoreImportFlagsKHR name);
        VkSemaphoreImportFlagsKHR deserialize_VkSemaphoreImportFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkExternalFenceHandleTypeFlags(VkExternalFenceHandleTypeFlags name);
        VkExternalFenceHandleTypeFlags deserialize_VkExternalFenceHandleTypeFlags(rjson name);
    

        yyjson::writer::object serialize_VkExternalFenceHandleTypeFlagsKHR(VkExternalFenceHandleTypeFlagsKHR name);
        VkExternalFenceHandleTypeFlagsKHR deserialize_VkExternalFenceHandleTypeFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkExternalFenceFeatureFlags(VkExternalFenceFeatureFlags name);
        VkExternalFenceFeatureFlags deserialize_VkExternalFenceFeatureFlags(rjson name);
    

        yyjson::writer::object serialize_VkExternalFenceFeatureFlagsKHR(VkExternalFenceFeatureFlagsKHR name);
        VkExternalFenceFeatureFlagsKHR deserialize_VkExternalFenceFeatureFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkFenceImportFlags(VkFenceImportFlags name);
        VkFenceImportFlags deserialize_VkFenceImportFlags(rjson name);
    

        yyjson::writer::object serialize_VkFenceImportFlagsKHR(VkFenceImportFlagsKHR name);
        VkFenceImportFlagsKHR deserialize_VkFenceImportFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkSurfaceCounterFlagsEXT(VkSurfaceCounterFlagsEXT name);
        VkSurfaceCounterFlagsEXT deserialize_VkSurfaceCounterFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineViewportSwizzleStateCreateFlagsNV(VkPipelineViewportSwizzleStateCreateFlagsNV name);
        VkPipelineViewportSwizzleStateCreateFlagsNV deserialize_VkPipelineViewportSwizzleStateCreateFlagsNV(rjson name);
    

        yyjson::writer::object serialize_VkPipelineDiscardRectangleStateCreateFlagsEXT(VkPipelineDiscardRectangleStateCreateFlagsEXT name);
        VkPipelineDiscardRectangleStateCreateFlagsEXT deserialize_VkPipelineDiscardRectangleStateCreateFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCoverageToColorStateCreateFlagsNV(VkPipelineCoverageToColorStateCreateFlagsNV name);
        VkPipelineCoverageToColorStateCreateFlagsNV deserialize_VkPipelineCoverageToColorStateCreateFlagsNV(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCoverageModulationStateCreateFlagsNV(VkPipelineCoverageModulationStateCreateFlagsNV name);
        VkPipelineCoverageModulationStateCreateFlagsNV deserialize_VkPipelineCoverageModulationStateCreateFlagsNV(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCoverageReductionStateCreateFlagsNV(VkPipelineCoverageReductionStateCreateFlagsNV name);
        VkPipelineCoverageReductionStateCreateFlagsNV deserialize_VkPipelineCoverageReductionStateCreateFlagsNV(rjson name);
    

        yyjson::writer::object serialize_VkValidationCacheCreateFlagsEXT(VkValidationCacheCreateFlagsEXT name);
        VkValidationCacheCreateFlagsEXT deserialize_VkValidationCacheCreateFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkDebugUtilsMessageSeverityFlagsEXT(VkDebugUtilsMessageSeverityFlagsEXT name);
        VkDebugUtilsMessageSeverityFlagsEXT deserialize_VkDebugUtilsMessageSeverityFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkDebugUtilsMessageTypeFlagsEXT(VkDebugUtilsMessageTypeFlagsEXT name);
        VkDebugUtilsMessageTypeFlagsEXT deserialize_VkDebugUtilsMessageTypeFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkDebugUtilsMessengerCreateFlagsEXT(VkDebugUtilsMessengerCreateFlagsEXT name);
        VkDebugUtilsMessengerCreateFlagsEXT deserialize_VkDebugUtilsMessengerCreateFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkDebugUtilsMessengerCallbackDataFlagsEXT(VkDebugUtilsMessengerCallbackDataFlagsEXT name);
        VkDebugUtilsMessengerCallbackDataFlagsEXT deserialize_VkDebugUtilsMessengerCallbackDataFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkDeviceMemoryReportFlagsEXT(VkDeviceMemoryReportFlagsEXT name);
        VkDeviceMemoryReportFlagsEXT deserialize_VkDeviceMemoryReportFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineRasterizationConservativeStateCreateFlagsEXT(VkPipelineRasterizationConservativeStateCreateFlagsEXT name);
        VkPipelineRasterizationConservativeStateCreateFlagsEXT deserialize_VkPipelineRasterizationConservativeStateCreateFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorBindingFlags(VkDescriptorBindingFlags name);
        VkDescriptorBindingFlags deserialize_VkDescriptorBindingFlags(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorBindingFlagsEXT(VkDescriptorBindingFlagsEXT name);
        VkDescriptorBindingFlagsEXT deserialize_VkDescriptorBindingFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkConditionalRenderingFlagsEXT(VkConditionalRenderingFlagsEXT name);
        VkConditionalRenderingFlagsEXT deserialize_VkConditionalRenderingFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkResolveModeFlags(VkResolveModeFlags name);
        VkResolveModeFlags deserialize_VkResolveModeFlags(rjson name);
    

        yyjson::writer::object serialize_VkResolveModeFlagsKHR(VkResolveModeFlagsKHR name);
        VkResolveModeFlagsKHR deserialize_VkResolveModeFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkPipelineRasterizationStateStreamCreateFlagsEXT(VkPipelineRasterizationStateStreamCreateFlagsEXT name);
        VkPipelineRasterizationStateStreamCreateFlagsEXT deserialize_VkPipelineRasterizationStateStreamCreateFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineRasterizationDepthClipStateCreateFlagsEXT(VkPipelineRasterizationDepthClipStateCreateFlagsEXT name);
        VkPipelineRasterizationDepthClipStateCreateFlagsEXT deserialize_VkPipelineRasterizationDepthClipStateCreateFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkToolPurposeFlags(VkToolPurposeFlags name);
        VkToolPurposeFlags deserialize_VkToolPurposeFlags(rjson name);
    

        yyjson::writer::object serialize_VkToolPurposeFlagsEXT(VkToolPurposeFlagsEXT name);
        VkToolPurposeFlagsEXT deserialize_VkToolPurposeFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkSubmitFlags(VkSubmitFlags name);
        VkSubmitFlags deserialize_VkSubmitFlags(rjson name);
    

        yyjson::writer::object serialize_VkSubmitFlagsKHR(VkSubmitFlagsKHR name);
        VkSubmitFlagsKHR deserialize_VkSubmitFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkHostImageCopyFlagsEXT(VkHostImageCopyFlagsEXT name);
        VkHostImageCopyFlagsEXT deserialize_VkHostImageCopyFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkGraphicsPipelineLibraryFlagsEXT(VkGraphicsPipelineLibraryFlagsEXT name);
        VkGraphicsPipelineLibraryFlagsEXT deserialize_VkGraphicsPipelineLibraryFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkImageCompressionFlagsEXT(VkImageCompressionFlagsEXT name);
        VkImageCompressionFlagsEXT deserialize_VkImageCompressionFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkImageCompressionFixedRateFlagsEXT(VkImageCompressionFixedRateFlagsEXT name);
        VkImageCompressionFixedRateFlagsEXT deserialize_VkImageCompressionFixedRateFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkDeviceAddressBindingFlagsEXT(VkDeviceAddressBindingFlagsEXT name);
        VkDeviceAddressBindingFlagsEXT deserialize_VkDeviceAddressBindingFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkOpticalFlowGridSizeFlagsNV(VkOpticalFlowGridSizeFlagsNV name);
        VkOpticalFlowGridSizeFlagsNV deserialize_VkOpticalFlowGridSizeFlagsNV(rjson name);
    

        yyjson::writer::object serialize_VkOpticalFlowUsageFlagsNV(VkOpticalFlowUsageFlagsNV name);
        VkOpticalFlowUsageFlagsNV deserialize_VkOpticalFlowUsageFlagsNV(rjson name);
    

        yyjson::writer::object serialize_VkOpticalFlowSessionCreateFlagsNV(VkOpticalFlowSessionCreateFlagsNV name);
        VkOpticalFlowSessionCreateFlagsNV deserialize_VkOpticalFlowSessionCreateFlagsNV(rjson name);
    

        yyjson::writer::object serialize_VkOpticalFlowExecuteFlagsNV(VkOpticalFlowExecuteFlagsNV name);
        VkOpticalFlowExecuteFlagsNV deserialize_VkOpticalFlowExecuteFlagsNV(rjson name);
    

        yyjson::writer::object serialize_VkFrameBoundaryFlagsEXT(VkFrameBoundaryFlagsEXT name);
        VkFrameBoundaryFlagsEXT deserialize_VkFrameBoundaryFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkPresentScalingFlagsEXT(VkPresentScalingFlagsEXT name);
        VkPresentScalingFlagsEXT deserialize_VkPresentScalingFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkPresentGravityFlagsEXT(VkPresentGravityFlagsEXT name);
        VkPresentGravityFlagsEXT deserialize_VkPresentGravityFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkShaderCreateFlagsEXT(VkShaderCreateFlagsEXT name);
        VkShaderCreateFlagsEXT deserialize_VkShaderCreateFlagsEXT(rjson name);
    

        yyjson::writer::object serialize_VkVideoCodecOperationFlagsKHR(VkVideoCodecOperationFlagsKHR name);
        VkVideoCodecOperationFlagsKHR deserialize_VkVideoCodecOperationFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoCapabilityFlagsKHR(VkVideoCapabilityFlagsKHR name);
        VkVideoCapabilityFlagsKHR deserialize_VkVideoCapabilityFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoSessionCreateFlagsKHR(VkVideoSessionCreateFlagsKHR name);
        VkVideoSessionCreateFlagsKHR deserialize_VkVideoSessionCreateFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoSessionParametersCreateFlagsKHR(VkVideoSessionParametersCreateFlagsKHR name);
        VkVideoSessionParametersCreateFlagsKHR deserialize_VkVideoSessionParametersCreateFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoBeginCodingFlagsKHR(VkVideoBeginCodingFlagsKHR name);
        VkVideoBeginCodingFlagsKHR deserialize_VkVideoBeginCodingFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoEndCodingFlagsKHR(VkVideoEndCodingFlagsKHR name);
        VkVideoEndCodingFlagsKHR deserialize_VkVideoEndCodingFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoCodingControlFlagsKHR(VkVideoCodingControlFlagsKHR name);
        VkVideoCodingControlFlagsKHR deserialize_VkVideoCodingControlFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeUsageFlagsKHR(VkVideoDecodeUsageFlagsKHR name);
        VkVideoDecodeUsageFlagsKHR deserialize_VkVideoDecodeUsageFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeCapabilityFlagsKHR(VkVideoDecodeCapabilityFlagsKHR name);
        VkVideoDecodeCapabilityFlagsKHR deserialize_VkVideoDecodeCapabilityFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeFlagsKHR(VkVideoDecodeFlagsKHR name);
        VkVideoDecodeFlagsKHR deserialize_VkVideoDecodeFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeH264PictureLayoutFlagsKHR(VkVideoDecodeH264PictureLayoutFlagsKHR name);
        VkVideoDecodeH264PictureLayoutFlagsKHR deserialize_VkVideoDecodeH264PictureLayoutFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoChromaSubsamplingFlagsKHR(VkVideoChromaSubsamplingFlagsKHR name);
        VkVideoChromaSubsamplingFlagsKHR deserialize_VkVideoChromaSubsamplingFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoComponentBitDepthFlagsKHR(VkVideoComponentBitDepthFlagsKHR name);
        VkVideoComponentBitDepthFlagsKHR deserialize_VkVideoComponentBitDepthFlagsKHR(rjson name);
    

        yyjson::writer::object serialize_VkAttachmentLoadOp(VkAttachmentLoadOp name);
        VkAttachmentLoadOp deserialize_VkAttachmentLoadOp(rjson name);
    

        yyjson::writer::object serialize_VkAttachmentStoreOp(VkAttachmentStoreOp name);
        VkAttachmentStoreOp deserialize_VkAttachmentStoreOp(rjson name);
    

        yyjson::writer::object serialize_VkBlendFactor(VkBlendFactor name);
        VkBlendFactor deserialize_VkBlendFactor(rjson name);
    

        yyjson::writer::object serialize_VkBlendOp(VkBlendOp name);
        VkBlendOp deserialize_VkBlendOp(rjson name);
    

        yyjson::writer::object serialize_VkBorderColor(VkBorderColor name);
        VkBorderColor deserialize_VkBorderColor(rjson name);
    

        yyjson::writer::object serialize_VkFramebufferCreateFlagBits(VkFramebufferCreateFlagBits name);
        VkFramebufferCreateFlagBits deserialize_VkFramebufferCreateFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkRenderPassCreateFlagBits(VkRenderPassCreateFlagBits name);
        VkRenderPassCreateFlagBits deserialize_VkRenderPassCreateFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkSamplerCreateFlagBits(VkSamplerCreateFlagBits name);
        VkSamplerCreateFlagBits deserialize_VkSamplerCreateFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCacheHeaderVersion(VkPipelineCacheHeaderVersion name);
        VkPipelineCacheHeaderVersion deserialize_VkPipelineCacheHeaderVersion(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCacheCreateFlagBits(VkPipelineCacheCreateFlagBits name);
        VkPipelineCacheCreateFlagBits deserialize_VkPipelineCacheCreateFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkPipelineShaderStageCreateFlagBits(VkPipelineShaderStageCreateFlagBits name);
        VkPipelineShaderStageCreateFlagBits deserialize_VkPipelineShaderStageCreateFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorSetLayoutCreateFlagBits(VkDescriptorSetLayoutCreateFlagBits name);
        VkDescriptorSetLayoutCreateFlagBits deserialize_VkDescriptorSetLayoutCreateFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkInstanceCreateFlagBits(VkInstanceCreateFlagBits name);
        VkInstanceCreateFlagBits deserialize_VkInstanceCreateFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkDeviceQueueCreateFlagBits(VkDeviceQueueCreateFlagBits name);
        VkDeviceQueueCreateFlagBits deserialize_VkDeviceQueueCreateFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkBufferCreateFlagBits(VkBufferCreateFlagBits name);
        VkBufferCreateFlagBits deserialize_VkBufferCreateFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkBufferUsageFlagBits(VkBufferUsageFlagBits name);
        VkBufferUsageFlagBits deserialize_VkBufferUsageFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkColorComponentFlagBits(VkColorComponentFlagBits name);
        VkColorComponentFlagBits deserialize_VkColorComponentFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkComponentSwizzle(VkComponentSwizzle name);
        VkComponentSwizzle deserialize_VkComponentSwizzle(rjson name);
    

        yyjson::writer::object serialize_VkCommandPoolCreateFlagBits(VkCommandPoolCreateFlagBits name);
        VkCommandPoolCreateFlagBits deserialize_VkCommandPoolCreateFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkCommandPoolResetFlagBits(VkCommandPoolResetFlagBits name);
        VkCommandPoolResetFlagBits deserialize_VkCommandPoolResetFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkCommandBufferResetFlagBits(VkCommandBufferResetFlagBits name);
        VkCommandBufferResetFlagBits deserialize_VkCommandBufferResetFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkCommandBufferLevel(VkCommandBufferLevel name);
        VkCommandBufferLevel deserialize_VkCommandBufferLevel(rjson name);
    

        yyjson::writer::object serialize_VkCommandBufferUsageFlagBits(VkCommandBufferUsageFlagBits name);
        VkCommandBufferUsageFlagBits deserialize_VkCommandBufferUsageFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkCompareOp(VkCompareOp name);
        VkCompareOp deserialize_VkCompareOp(rjson name);
    

        yyjson::writer::object serialize_VkCullModeFlagBits(VkCullModeFlagBits name);
        VkCullModeFlagBits deserialize_VkCullModeFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorType(VkDescriptorType name);
        VkDescriptorType deserialize_VkDescriptorType(rjson name);
    

        yyjson::writer::object serialize_VkDynamicState(VkDynamicState name);
        VkDynamicState deserialize_VkDynamicState(rjson name);
    

        yyjson::writer::object serialize_VkFenceCreateFlagBits(VkFenceCreateFlagBits name);
        VkFenceCreateFlagBits deserialize_VkFenceCreateFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkPolygonMode(VkPolygonMode name);
        VkPolygonMode deserialize_VkPolygonMode(rjson name);
    

        yyjson::writer::object serialize_VkFormat(VkFormat name);
        VkFormat deserialize_VkFormat(rjson name);
    

        yyjson::writer::object serialize_VkFormatFeatureFlagBits(VkFormatFeatureFlagBits name);
        VkFormatFeatureFlagBits deserialize_VkFormatFeatureFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkFrontFace(VkFrontFace name);
        VkFrontFace deserialize_VkFrontFace(rjson name);
    

        yyjson::writer::object serialize_VkImageAspectFlagBits(VkImageAspectFlagBits name);
        VkImageAspectFlagBits deserialize_VkImageAspectFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkImageCreateFlagBits(VkImageCreateFlagBits name);
        VkImageCreateFlagBits deserialize_VkImageCreateFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkImageLayout(VkImageLayout name);
        VkImageLayout deserialize_VkImageLayout(rjson name);
    

        yyjson::writer::object serialize_VkImageTiling(VkImageTiling name);
        VkImageTiling deserialize_VkImageTiling(rjson name);
    

        yyjson::writer::object serialize_VkImageType(VkImageType name);
        VkImageType deserialize_VkImageType(rjson name);
    

        yyjson::writer::object serialize_VkImageUsageFlagBits(VkImageUsageFlagBits name);
        VkImageUsageFlagBits deserialize_VkImageUsageFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkImageViewCreateFlagBits(VkImageViewCreateFlagBits name);
        VkImageViewCreateFlagBits deserialize_VkImageViewCreateFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkImageViewType(VkImageViewType name);
        VkImageViewType deserialize_VkImageViewType(rjson name);
    

        yyjson::writer::object serialize_VkSharingMode(VkSharingMode name);
        VkSharingMode deserialize_VkSharingMode(rjson name);
    

        yyjson::writer::object serialize_VkIndexType(VkIndexType name);
        VkIndexType deserialize_VkIndexType(rjson name);
    

        yyjson::writer::object serialize_VkLogicOp(VkLogicOp name);
        VkLogicOp deserialize_VkLogicOp(rjson name);
    

        yyjson::writer::object serialize_VkMemoryHeapFlagBits(VkMemoryHeapFlagBits name);
        VkMemoryHeapFlagBits deserialize_VkMemoryHeapFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkAccessFlagBits(VkAccessFlagBits name);
        VkAccessFlagBits deserialize_VkAccessFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkMemoryPropertyFlagBits(VkMemoryPropertyFlagBits name);
        VkMemoryPropertyFlagBits deserialize_VkMemoryPropertyFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkPhysicalDeviceType(VkPhysicalDeviceType name);
        VkPhysicalDeviceType deserialize_VkPhysicalDeviceType(rjson name);
    

        yyjson::writer::object serialize_VkPipelineBindPoint(VkPipelineBindPoint name);
        VkPipelineBindPoint deserialize_VkPipelineBindPoint(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCreateFlagBits(VkPipelineCreateFlagBits name);
        VkPipelineCreateFlagBits deserialize_VkPipelineCreateFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkPrimitiveTopology(VkPrimitiveTopology name);
        VkPrimitiveTopology deserialize_VkPrimitiveTopology(rjson name);
    

        yyjson::writer::object serialize_VkQueryControlFlagBits(VkQueryControlFlagBits name);
        VkQueryControlFlagBits deserialize_VkQueryControlFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkQueryPipelineStatisticFlagBits(VkQueryPipelineStatisticFlagBits name);
        VkQueryPipelineStatisticFlagBits deserialize_VkQueryPipelineStatisticFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkQueryResultFlagBits(VkQueryResultFlagBits name);
        VkQueryResultFlagBits deserialize_VkQueryResultFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkQueryType(VkQueryType name);
        VkQueryType deserialize_VkQueryType(rjson name);
    

        yyjson::writer::object serialize_VkQueueFlagBits(VkQueueFlagBits name);
        VkQueueFlagBits deserialize_VkQueueFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkSubpassContents(VkSubpassContents name);
        VkSubpassContents deserialize_VkSubpassContents(rjson name);
    

        yyjson::writer::object serialize_VkResult(VkResult name);
        VkResult deserialize_VkResult(rjson name);
    

        yyjson::writer::object serialize_VkShaderStageFlagBits(VkShaderStageFlagBits name);
        VkShaderStageFlagBits deserialize_VkShaderStageFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkSparseMemoryBindFlagBits(VkSparseMemoryBindFlagBits name);
        VkSparseMemoryBindFlagBits deserialize_VkSparseMemoryBindFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkStencilFaceFlagBits(VkStencilFaceFlagBits name);
        VkStencilFaceFlagBits deserialize_VkStencilFaceFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkStencilOp(VkStencilOp name);
        VkStencilOp deserialize_VkStencilOp(rjson name);
    

        yyjson::writer::object serialize_VkStructureType(VkStructureType name);
        VkStructureType deserialize_VkStructureType(rjson name);
    

        yyjson::writer::object serialize_VkSystemAllocationScope(VkSystemAllocationScope name);
        VkSystemAllocationScope deserialize_VkSystemAllocationScope(rjson name);
    

        yyjson::writer::object serialize_VkInternalAllocationType(VkInternalAllocationType name);
        VkInternalAllocationType deserialize_VkInternalAllocationType(rjson name);
    

        yyjson::writer::object serialize_VkSamplerAddressMode(VkSamplerAddressMode name);
        VkSamplerAddressMode deserialize_VkSamplerAddressMode(rjson name);
    

        yyjson::writer::object serialize_VkFilter(VkFilter name);
        VkFilter deserialize_VkFilter(rjson name);
    

        yyjson::writer::object serialize_VkSamplerMipmapMode(VkSamplerMipmapMode name);
        VkSamplerMipmapMode deserialize_VkSamplerMipmapMode(rjson name);
    

        yyjson::writer::object serialize_VkVertexInputRate(VkVertexInputRate name);
        VkVertexInputRate deserialize_VkVertexInputRate(rjson name);
    

        yyjson::writer::object serialize_VkPipelineStageFlagBits(VkPipelineStageFlagBits name);
        VkPipelineStageFlagBits deserialize_VkPipelineStageFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkSparseImageFormatFlagBits(VkSparseImageFormatFlagBits name);
        VkSparseImageFormatFlagBits deserialize_VkSparseImageFormatFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkSampleCountFlagBits(VkSampleCountFlagBits name);
        VkSampleCountFlagBits deserialize_VkSampleCountFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkAttachmentDescriptionFlagBits(VkAttachmentDescriptionFlagBits name);
        VkAttachmentDescriptionFlagBits deserialize_VkAttachmentDescriptionFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorPoolCreateFlagBits(VkDescriptorPoolCreateFlagBits name);
        VkDescriptorPoolCreateFlagBits deserialize_VkDescriptorPoolCreateFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkDependencyFlagBits(VkDependencyFlagBits name);
        VkDependencyFlagBits deserialize_VkDependencyFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkObjectType(VkObjectType name);
        VkObjectType deserialize_VkObjectType(rjson name);
    

        yyjson::writer::object serialize_VkEventCreateFlagBits(VkEventCreateFlagBits name);
        VkEventCreateFlagBits deserialize_VkEventCreateFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkPipelineLayoutCreateFlagBits(VkPipelineLayoutCreateFlagBits name);
        VkPipelineLayoutCreateFlagBits deserialize_VkPipelineLayoutCreateFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkRayTracingInvocationReorderModeNV(VkRayTracingInvocationReorderModeNV name);
        VkRayTracingInvocationReorderModeNV deserialize_VkRayTracingInvocationReorderModeNV(rjson name);
    

        yyjson::writer::object serialize_VkIndirectCommandsLayoutUsageFlagBitsNV(VkIndirectCommandsLayoutUsageFlagBitsNV name);
        VkIndirectCommandsLayoutUsageFlagBitsNV deserialize_VkIndirectCommandsLayoutUsageFlagBitsNV(rjson name);
    

        yyjson::writer::object serialize_VkIndirectCommandsTokenTypeNV(VkIndirectCommandsTokenTypeNV name);
        VkIndirectCommandsTokenTypeNV deserialize_VkIndirectCommandsTokenTypeNV(rjson name);
    

        yyjson::writer::object serialize_VkIndirectStateFlagBitsNV(VkIndirectStateFlagBitsNV name);
        VkIndirectStateFlagBitsNV deserialize_VkIndirectStateFlagBitsNV(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorUpdateTemplateType(VkDescriptorUpdateTemplateType name);
        VkDescriptorUpdateTemplateType deserialize_VkDescriptorUpdateTemplateType(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorUpdateTemplateTypeKHR(VkDescriptorUpdateTemplateTypeKHR name);
        VkDescriptorUpdateTemplateTypeKHR deserialize_VkDescriptorUpdateTemplateTypeKHR(rjson name);
    

        yyjson::writer::object serialize_VkViewportCoordinateSwizzleNV(VkViewportCoordinateSwizzleNV name);
        VkViewportCoordinateSwizzleNV deserialize_VkViewportCoordinateSwizzleNV(rjson name);
    

        yyjson::writer::object serialize_VkDiscardRectangleModeEXT(VkDiscardRectangleModeEXT name);
        VkDiscardRectangleModeEXT deserialize_VkDiscardRectangleModeEXT(rjson name);
    

        yyjson::writer::object serialize_VkSubpassDescriptionFlagBits(VkSubpassDescriptionFlagBits name);
        VkSubpassDescriptionFlagBits deserialize_VkSubpassDescriptionFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkPointClippingBehavior(VkPointClippingBehavior name);
        VkPointClippingBehavior deserialize_VkPointClippingBehavior(rjson name);
    

        yyjson::writer::object serialize_VkPointClippingBehaviorKHR(VkPointClippingBehaviorKHR name);
        VkPointClippingBehaviorKHR deserialize_VkPointClippingBehaviorKHR(rjson name);
    

        yyjson::writer::object serialize_VkCoverageModulationModeNV(VkCoverageModulationModeNV name);
        VkCoverageModulationModeNV deserialize_VkCoverageModulationModeNV(rjson name);
    

        yyjson::writer::object serialize_VkCoverageReductionModeNV(VkCoverageReductionModeNV name);
        VkCoverageReductionModeNV deserialize_VkCoverageReductionModeNV(rjson name);
    

        yyjson::writer::object serialize_VkValidationCacheHeaderVersionEXT(VkValidationCacheHeaderVersionEXT name);
        VkValidationCacheHeaderVersionEXT deserialize_VkValidationCacheHeaderVersionEXT(rjson name);
    

        yyjson::writer::object serialize_VkShaderInfoTypeAMD(VkShaderInfoTypeAMD name);
        VkShaderInfoTypeAMD deserialize_VkShaderInfoTypeAMD(rjson name);
    

        yyjson::writer::object serialize_VkQueueGlobalPriorityKHR(VkQueueGlobalPriorityKHR name);
        VkQueueGlobalPriorityKHR deserialize_VkQueueGlobalPriorityKHR(rjson name);
    

        yyjson::writer::object serialize_VkQueueGlobalPriorityEXT(VkQueueGlobalPriorityEXT name);
        VkQueueGlobalPriorityEXT deserialize_VkQueueGlobalPriorityEXT(rjson name);
    

        yyjson::writer::object serialize_VkTimeDomainEXT(VkTimeDomainEXT name);
        VkTimeDomainEXT deserialize_VkTimeDomainEXT(rjson name);
    

        yyjson::writer::object serialize_VkConservativeRasterizationModeEXT(VkConservativeRasterizationModeEXT name);
        VkConservativeRasterizationModeEXT deserialize_VkConservativeRasterizationModeEXT(rjson name);
    

        yyjson::writer::object serialize_VkResolveModeFlagBits(VkResolveModeFlagBits name);
        VkResolveModeFlagBits deserialize_VkResolveModeFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkResolveModeFlagBitsKHR(VkResolveModeFlagBitsKHR name);
        VkResolveModeFlagBitsKHR deserialize_VkResolveModeFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorBindingFlagBits(VkDescriptorBindingFlagBits name);
        VkDescriptorBindingFlagBits deserialize_VkDescriptorBindingFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkDescriptorBindingFlagBitsEXT(VkDescriptorBindingFlagBitsEXT name);
        VkDescriptorBindingFlagBitsEXT deserialize_VkDescriptorBindingFlagBitsEXT(rjson name);
    

        yyjson::writer::object serialize_VkConditionalRenderingFlagBitsEXT(VkConditionalRenderingFlagBitsEXT name);
        VkConditionalRenderingFlagBitsEXT deserialize_VkConditionalRenderingFlagBitsEXT(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreType(VkSemaphoreType name);
        VkSemaphoreType deserialize_VkSemaphoreType(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreTypeKHR(VkSemaphoreTypeKHR name);
        VkSemaphoreTypeKHR deserialize_VkSemaphoreTypeKHR(rjson name);
    

        yyjson::writer::object serialize_VkGeometryFlagBitsKHR(VkGeometryFlagBitsKHR name);
        VkGeometryFlagBitsKHR deserialize_VkGeometryFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkGeometryFlagBitsNV(VkGeometryFlagBitsNV name);
        VkGeometryFlagBitsNV deserialize_VkGeometryFlagBitsNV(rjson name);
    

        yyjson::writer::object serialize_VkGeometryInstanceFlagBitsKHR(VkGeometryInstanceFlagBitsKHR name);
        VkGeometryInstanceFlagBitsKHR deserialize_VkGeometryInstanceFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkGeometryInstanceFlagBitsNV(VkGeometryInstanceFlagBitsNV name);
        VkGeometryInstanceFlagBitsNV deserialize_VkGeometryInstanceFlagBitsNV(rjson name);
    

        yyjson::writer::object serialize_VkBuildAccelerationStructureFlagBitsKHR(VkBuildAccelerationStructureFlagBitsKHR name);
        VkBuildAccelerationStructureFlagBitsKHR deserialize_VkBuildAccelerationStructureFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkBuildAccelerationStructureFlagBitsNV(VkBuildAccelerationStructureFlagBitsNV name);
        VkBuildAccelerationStructureFlagBitsNV deserialize_VkBuildAccelerationStructureFlagBitsNV(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureCreateFlagBitsKHR(VkAccelerationStructureCreateFlagBitsKHR name);
        VkAccelerationStructureCreateFlagBitsKHR deserialize_VkAccelerationStructureCreateFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkBuildAccelerationStructureModeKHR(VkBuildAccelerationStructureModeKHR name);
        VkBuildAccelerationStructureModeKHR deserialize_VkBuildAccelerationStructureModeKHR(rjson name);
    

        yyjson::writer::object serialize_VkCopyAccelerationStructureModeKHR(VkCopyAccelerationStructureModeKHR name);
        VkCopyAccelerationStructureModeKHR deserialize_VkCopyAccelerationStructureModeKHR(rjson name);
    

        yyjson::writer::object serialize_VkCopyAccelerationStructureModeNV(VkCopyAccelerationStructureModeNV name);
        VkCopyAccelerationStructureModeNV deserialize_VkCopyAccelerationStructureModeNV(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureTypeKHR(VkAccelerationStructureTypeKHR name);
        VkAccelerationStructureTypeKHR deserialize_VkAccelerationStructureTypeKHR(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureTypeNV(VkAccelerationStructureTypeNV name);
        VkAccelerationStructureTypeNV deserialize_VkAccelerationStructureTypeNV(rjson name);
    

        yyjson::writer::object serialize_VkGeometryTypeKHR(VkGeometryTypeKHR name);
        VkGeometryTypeKHR deserialize_VkGeometryTypeKHR(rjson name);
    

        yyjson::writer::object serialize_VkGeometryTypeNV(VkGeometryTypeNV name);
        VkGeometryTypeNV deserialize_VkGeometryTypeNV(rjson name);
    

        yyjson::writer::object serialize_VkRayTracingShaderGroupTypeKHR(VkRayTracingShaderGroupTypeKHR name);
        VkRayTracingShaderGroupTypeKHR deserialize_VkRayTracingShaderGroupTypeKHR(rjson name);
    

        yyjson::writer::object serialize_VkRayTracingShaderGroupTypeNV(VkRayTracingShaderGroupTypeNV name);
        VkRayTracingShaderGroupTypeNV deserialize_VkRayTracingShaderGroupTypeNV(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureMemoryRequirementsTypeNV(VkAccelerationStructureMemoryRequirementsTypeNV name);
        VkAccelerationStructureMemoryRequirementsTypeNV deserialize_VkAccelerationStructureMemoryRequirementsTypeNV(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureBuildTypeKHR(VkAccelerationStructureBuildTypeKHR name);
        VkAccelerationStructureBuildTypeKHR deserialize_VkAccelerationStructureBuildTypeKHR(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureCompatibilityKHR(VkAccelerationStructureCompatibilityKHR name);
        VkAccelerationStructureCompatibilityKHR deserialize_VkAccelerationStructureCompatibilityKHR(rjson name);
    

        yyjson::writer::object serialize_VkShaderGroupShaderKHR(VkShaderGroupShaderKHR name);
        VkShaderGroupShaderKHR deserialize_VkShaderGroupShaderKHR(rjson name);
    

        yyjson::writer::object serialize_VkMemoryOverallocationBehaviorAMD(VkMemoryOverallocationBehaviorAMD name);
        VkMemoryOverallocationBehaviorAMD deserialize_VkMemoryOverallocationBehaviorAMD(rjson name);
    

        yyjson::writer::object serialize_VkDeviceDiagnosticsConfigFlagBitsNV(VkDeviceDiagnosticsConfigFlagBitsNV name);
        VkDeviceDiagnosticsConfigFlagBitsNV deserialize_VkDeviceDiagnosticsConfigFlagBitsNV(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCreationFeedbackFlagBits(VkPipelineCreationFeedbackFlagBits name);
        VkPipelineCreationFeedbackFlagBits deserialize_VkPipelineCreationFeedbackFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCreationFeedbackFlagBitsEXT(VkPipelineCreationFeedbackFlagBitsEXT name);
        VkPipelineCreationFeedbackFlagBitsEXT deserialize_VkPipelineCreationFeedbackFlagBitsEXT(rjson name);
    

        yyjson::writer::object serialize_VkPerformanceCounterScopeKHR(VkPerformanceCounterScopeKHR name);
        VkPerformanceCounterScopeKHR deserialize_VkPerformanceCounterScopeKHR(rjson name);
    

        yyjson::writer::object serialize_VkPerformanceCounterUnitKHR(VkPerformanceCounterUnitKHR name);
        VkPerformanceCounterUnitKHR deserialize_VkPerformanceCounterUnitKHR(rjson name);
    

        yyjson::writer::object serialize_VkPerformanceCounterStorageKHR(VkPerformanceCounterStorageKHR name);
        VkPerformanceCounterStorageKHR deserialize_VkPerformanceCounterStorageKHR(rjson name);
    

        yyjson::writer::object serialize_VkPerformanceCounterDescriptionFlagBitsKHR(VkPerformanceCounterDescriptionFlagBitsKHR name);
        VkPerformanceCounterDescriptionFlagBitsKHR deserialize_VkPerformanceCounterDescriptionFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkAcquireProfilingLockFlagBitsKHR(VkAcquireProfilingLockFlagBitsKHR name);
        VkAcquireProfilingLockFlagBitsKHR deserialize_VkAcquireProfilingLockFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreWaitFlagBits(VkSemaphoreWaitFlagBits name);
        VkSemaphoreWaitFlagBits deserialize_VkSemaphoreWaitFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreWaitFlagBitsKHR(VkSemaphoreWaitFlagBitsKHR name);
        VkSemaphoreWaitFlagBitsKHR deserialize_VkSemaphoreWaitFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkPerformanceConfigurationTypeINTEL(VkPerformanceConfigurationTypeINTEL name);
        VkPerformanceConfigurationTypeINTEL deserialize_VkPerformanceConfigurationTypeINTEL(rjson name);
    

        yyjson::writer::object serialize_VkQueryPoolSamplingModeINTEL(VkQueryPoolSamplingModeINTEL name);
        VkQueryPoolSamplingModeINTEL deserialize_VkQueryPoolSamplingModeINTEL(rjson name);
    

        yyjson::writer::object serialize_VkPerformanceOverrideTypeINTEL(VkPerformanceOverrideTypeINTEL name);
        VkPerformanceOverrideTypeINTEL deserialize_VkPerformanceOverrideTypeINTEL(rjson name);
    

        yyjson::writer::object serialize_VkPerformanceParameterTypeINTEL(VkPerformanceParameterTypeINTEL name);
        VkPerformanceParameterTypeINTEL deserialize_VkPerformanceParameterTypeINTEL(rjson name);
    

        yyjson::writer::object serialize_VkPerformanceValueTypeINTEL(VkPerformanceValueTypeINTEL name);
        VkPerformanceValueTypeINTEL deserialize_VkPerformanceValueTypeINTEL(rjson name);
    

        yyjson::writer::object serialize_VkLineRasterizationModeEXT(VkLineRasterizationModeEXT name);
        VkLineRasterizationModeEXT deserialize_VkLineRasterizationModeEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCompilerControlFlagBitsAMD(VkPipelineCompilerControlFlagBitsAMD name);
        VkPipelineCompilerControlFlagBitsAMD deserialize_VkPipelineCompilerControlFlagBitsAMD(rjson name);
    

        yyjson::writer::object serialize_VkShaderCorePropertiesFlagBitsAMD(VkShaderCorePropertiesFlagBitsAMD name);
        VkShaderCorePropertiesFlagBitsAMD deserialize_VkShaderCorePropertiesFlagBitsAMD(rjson name);
    

        yyjson::writer::object serialize_VkToolPurposeFlagBits(VkToolPurposeFlagBits name);
        VkToolPurposeFlagBits deserialize_VkToolPurposeFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkToolPurposeFlagBitsEXT(VkToolPurposeFlagBitsEXT name);
        VkToolPurposeFlagBitsEXT deserialize_VkToolPurposeFlagBitsEXT(rjson name);
    

        yyjson::writer::object serialize_VkFragmentShadingRateNV(VkFragmentShadingRateNV name);
        VkFragmentShadingRateNV deserialize_VkFragmentShadingRateNV(rjson name);
    

        yyjson::writer::object serialize_VkFragmentShadingRateTypeNV(VkFragmentShadingRateTypeNV name);
        VkFragmentShadingRateTypeNV deserialize_VkFragmentShadingRateTypeNV(rjson name);
    

        yyjson::writer::object serialize_VkSubpassMergeStatusEXT(VkSubpassMergeStatusEXT name);
        VkSubpassMergeStatusEXT deserialize_VkSubpassMergeStatusEXT(rjson name);
    

        yyjson::writer::object serialize_VkAccessFlagBits2(VkAccessFlagBits2 name);
        VkAccessFlagBits2 deserialize_VkAccessFlagBits2(rjson name);
    

        yyjson::writer::object serialize_VkAccessFlagBits2KHR(VkAccessFlagBits2KHR name);
        VkAccessFlagBits2KHR deserialize_VkAccessFlagBits2KHR(rjson name);
    

        yyjson::writer::object serialize_VkPipelineStageFlagBits2(VkPipelineStageFlagBits2 name);
        VkPipelineStageFlagBits2 deserialize_VkPipelineStageFlagBits2(rjson name);
    

        yyjson::writer::object serialize_VkPipelineStageFlagBits2KHR(VkPipelineStageFlagBits2KHR name);
        VkPipelineStageFlagBits2KHR deserialize_VkPipelineStageFlagBits2KHR(rjson name);
    

        yyjson::writer::object serialize_VkProvokingVertexModeEXT(VkProvokingVertexModeEXT name);
        VkProvokingVertexModeEXT deserialize_VkProvokingVertexModeEXT(rjson name);
    

        yyjson::writer::object serialize_VkHostImageCopyFlagBitsEXT(VkHostImageCopyFlagBitsEXT name);
        VkHostImageCopyFlagBitsEXT deserialize_VkHostImageCopyFlagBitsEXT(rjson name);
    

        yyjson::writer::object serialize_VkFormatFeatureFlagBits2(VkFormatFeatureFlagBits2 name);
        VkFormatFeatureFlagBits2 deserialize_VkFormatFeatureFlagBits2(rjson name);
    

        yyjson::writer::object serialize_VkFormatFeatureFlagBits2KHR(VkFormatFeatureFlagBits2KHR name);
        VkFormatFeatureFlagBits2KHR deserialize_VkFormatFeatureFlagBits2KHR(rjson name);
    

        yyjson::writer::object serialize_VkRenderingFlagBits(VkRenderingFlagBits name);
        VkRenderingFlagBits deserialize_VkRenderingFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkRenderingFlagBitsKHR(VkRenderingFlagBitsKHR name);
        VkRenderingFlagBitsKHR deserialize_VkRenderingFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkPipelineDepthStencilStateCreateFlagBits(VkPipelineDepthStencilStateCreateFlagBits name);
        VkPipelineDepthStencilStateCreateFlagBits deserialize_VkPipelineDepthStencilStateCreateFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkPipelineColorBlendStateCreateFlagBits(VkPipelineColorBlendStateCreateFlagBits name);
        VkPipelineColorBlendStateCreateFlagBits deserialize_VkPipelineColorBlendStateCreateFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkImageCompressionFlagBitsEXT(VkImageCompressionFlagBitsEXT name);
        VkImageCompressionFlagBitsEXT deserialize_VkImageCompressionFlagBitsEXT(rjson name);
    

        yyjson::writer::object serialize_VkImageCompressionFixedRateFlagBitsEXT(VkImageCompressionFixedRateFlagBitsEXT name);
        VkImageCompressionFixedRateFlagBitsEXT deserialize_VkImageCompressionFixedRateFlagBitsEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineRobustnessBufferBehaviorEXT(VkPipelineRobustnessBufferBehaviorEXT name);
        VkPipelineRobustnessBufferBehaviorEXT deserialize_VkPipelineRobustnessBufferBehaviorEXT(rjson name);
    

        yyjson::writer::object serialize_VkPipelineRobustnessImageBehaviorEXT(VkPipelineRobustnessImageBehaviorEXT name);
        VkPipelineRobustnessImageBehaviorEXT deserialize_VkPipelineRobustnessImageBehaviorEXT(rjson name);
    

        yyjson::writer::object serialize_VkDeviceAddressBindingFlagBitsEXT(VkDeviceAddressBindingFlagBitsEXT name);
        VkDeviceAddressBindingFlagBitsEXT deserialize_VkDeviceAddressBindingFlagBitsEXT(rjson name);
    

        yyjson::writer::object serialize_VkDeviceAddressBindingTypeEXT(VkDeviceAddressBindingTypeEXT name);
        VkDeviceAddressBindingTypeEXT deserialize_VkDeviceAddressBindingTypeEXT(rjson name);
    

        yyjson::writer::object serialize_VkMicromapTypeEXT(VkMicromapTypeEXT name);
        VkMicromapTypeEXT deserialize_VkMicromapTypeEXT(rjson name);
    

        yyjson::writer::object serialize_VkBuildMicromapModeEXT(VkBuildMicromapModeEXT name);
        VkBuildMicromapModeEXT deserialize_VkBuildMicromapModeEXT(rjson name);
    

        yyjson::writer::object serialize_VkCopyMicromapModeEXT(VkCopyMicromapModeEXT name);
        VkCopyMicromapModeEXT deserialize_VkCopyMicromapModeEXT(rjson name);
    

        yyjson::writer::object serialize_VkBuildMicromapFlagBitsEXT(VkBuildMicromapFlagBitsEXT name);
        VkBuildMicromapFlagBitsEXT deserialize_VkBuildMicromapFlagBitsEXT(rjson name);
    

        yyjson::writer::object serialize_VkMicromapCreateFlagBitsEXT(VkMicromapCreateFlagBitsEXT name);
        VkMicromapCreateFlagBitsEXT deserialize_VkMicromapCreateFlagBitsEXT(rjson name);
    

        yyjson::writer::object serialize_VkOpacityMicromapFormatEXT(VkOpacityMicromapFormatEXT name);
        VkOpacityMicromapFormatEXT deserialize_VkOpacityMicromapFormatEXT(rjson name);
    

        yyjson::writer::object serialize_VkOpacityMicromapSpecialIndexEXT(VkOpacityMicromapSpecialIndexEXT name);
        VkOpacityMicromapSpecialIndexEXT deserialize_VkOpacityMicromapSpecialIndexEXT(rjson name);
    

        yyjson::writer::object serialize_VkDeviceFaultVendorBinaryHeaderVersionEXT(VkDeviceFaultVendorBinaryHeaderVersionEXT name);
        VkDeviceFaultVendorBinaryHeaderVersionEXT deserialize_VkDeviceFaultVendorBinaryHeaderVersionEXT(rjson name);
    

        yyjson::writer::object serialize_VkFrameBoundaryFlagBitsEXT(VkFrameBoundaryFlagBitsEXT name);
        VkFrameBoundaryFlagBitsEXT deserialize_VkFrameBoundaryFlagBitsEXT(rjson name);
    

        yyjson::writer::object serialize_VkMemoryDecompressionMethodFlagBitsNV(VkMemoryDecompressionMethodFlagBitsNV name);
        VkMemoryDecompressionMethodFlagBitsNV deserialize_VkMemoryDecompressionMethodFlagBitsNV(rjson name);
    

        yyjson::writer::object serialize_VkDepthBiasRepresentationEXT(VkDepthBiasRepresentationEXT name);
        VkDepthBiasRepresentationEXT deserialize_VkDepthBiasRepresentationEXT(rjson name);
    

        yyjson::writer::object serialize_VkDirectDriverLoadingModeLUNARG(VkDirectDriverLoadingModeLUNARG name);
        VkDirectDriverLoadingModeLUNARG deserialize_VkDirectDriverLoadingModeLUNARG(rjson name);
    

        yyjson::writer::object serialize_VkPipelineCreateFlagBits2KHR(VkPipelineCreateFlagBits2KHR name);
        VkPipelineCreateFlagBits2KHR deserialize_VkPipelineCreateFlagBits2KHR(rjson name);
    

        yyjson::writer::object serialize_VkBufferUsageFlagBits2KHR(VkBufferUsageFlagBits2KHR name);
        VkBufferUsageFlagBits2KHR deserialize_VkBufferUsageFlagBits2KHR(rjson name);
    

        yyjson::writer::object serialize_VkShaderCreateFlagBitsEXT(VkShaderCreateFlagBitsEXT name);
        VkShaderCreateFlagBitsEXT deserialize_VkShaderCreateFlagBitsEXT(rjson name);
    

        yyjson::writer::object serialize_VkShaderCodeTypeEXT(VkShaderCodeTypeEXT name);
        VkShaderCodeTypeEXT deserialize_VkShaderCodeTypeEXT(rjson name);
    

        yyjson::writer::object serialize_VkScopeKHR(VkScopeKHR name);
        VkScopeKHR deserialize_VkScopeKHR(rjson name);
    

        yyjson::writer::object serialize_VkComponentTypeKHR(VkComponentTypeKHR name);
        VkComponentTypeKHR deserialize_VkComponentTypeKHR(rjson name);
    

        yyjson::writer::object serialize_VkScopeNV(VkScopeNV name);
        VkScopeNV deserialize_VkScopeNV(rjson name);
    

        yyjson::writer::object serialize_VkComponentTypeNV(VkComponentTypeNV name);
        VkComponentTypeNV deserialize_VkComponentTypeNV(rjson name);
    

        yyjson::writer::object serialize_VkCubicFilterWeightsQCOM(VkCubicFilterWeightsQCOM name);
        VkCubicFilterWeightsQCOM deserialize_VkCubicFilterWeightsQCOM(rjson name);
    

        yyjson::writer::object serialize_VkBlockMatchWindowCompareModeQCOM(VkBlockMatchWindowCompareModeQCOM name);
        VkBlockMatchWindowCompareModeQCOM deserialize_VkBlockMatchWindowCompareModeQCOM(rjson name);
    

        yyjson::writer::object serialize_VkLayeredDriverUnderlyingApiMSFT(VkLayeredDriverUnderlyingApiMSFT name);
        VkLayeredDriverUnderlyingApiMSFT deserialize_VkLayeredDriverUnderlyingApiMSFT(rjson name);
    

        yyjson::writer::object serialize_VkColorSpaceKHR(VkColorSpaceKHR name);
        VkColorSpaceKHR deserialize_VkColorSpaceKHR(rjson name);
    

        yyjson::writer::object serialize_VkCompositeAlphaFlagBitsKHR(VkCompositeAlphaFlagBitsKHR name);
        VkCompositeAlphaFlagBitsKHR deserialize_VkCompositeAlphaFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkDisplayPlaneAlphaFlagBitsKHR(VkDisplayPlaneAlphaFlagBitsKHR name);
        VkDisplayPlaneAlphaFlagBitsKHR deserialize_VkDisplayPlaneAlphaFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkPresentModeKHR(VkPresentModeKHR name);
        VkPresentModeKHR deserialize_VkPresentModeKHR(rjson name);
    

        yyjson::writer::object serialize_VkSurfaceTransformFlagBitsKHR(VkSurfaceTransformFlagBitsKHR name);
        VkSurfaceTransformFlagBitsKHR deserialize_VkSurfaceTransformFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkDebugReportFlagBitsEXT(VkDebugReportFlagBitsEXT name);
        VkDebugReportFlagBitsEXT deserialize_VkDebugReportFlagBitsEXT(rjson name);
    

        yyjson::writer::object serialize_VkDebugReportObjectTypeEXT(VkDebugReportObjectTypeEXT name);
        VkDebugReportObjectTypeEXT deserialize_VkDebugReportObjectTypeEXT(rjson name);
    

        yyjson::writer::object serialize_VkDeviceMemoryReportEventTypeEXT(VkDeviceMemoryReportEventTypeEXT name);
        VkDeviceMemoryReportEventTypeEXT deserialize_VkDeviceMemoryReportEventTypeEXT(rjson name);
    

        yyjson::writer::object serialize_VkRasterizationOrderAMD(VkRasterizationOrderAMD name);
        VkRasterizationOrderAMD deserialize_VkRasterizationOrderAMD(rjson name);
    

        yyjson::writer::object serialize_VkExternalMemoryHandleTypeFlagBitsNV(VkExternalMemoryHandleTypeFlagBitsNV name);
        VkExternalMemoryHandleTypeFlagBitsNV deserialize_VkExternalMemoryHandleTypeFlagBitsNV(rjson name);
    

        yyjson::writer::object serialize_VkExternalMemoryFeatureFlagBitsNV(VkExternalMemoryFeatureFlagBitsNV name);
        VkExternalMemoryFeatureFlagBitsNV deserialize_VkExternalMemoryFeatureFlagBitsNV(rjson name);
    

        yyjson::writer::object serialize_VkValidationCheckEXT(VkValidationCheckEXT name);
        VkValidationCheckEXT deserialize_VkValidationCheckEXT(rjson name);
    

        yyjson::writer::object serialize_VkValidationFeatureEnableEXT(VkValidationFeatureEnableEXT name);
        VkValidationFeatureEnableEXT deserialize_VkValidationFeatureEnableEXT(rjson name);
    

        yyjson::writer::object serialize_VkValidationFeatureDisableEXT(VkValidationFeatureDisableEXT name);
        VkValidationFeatureDisableEXT deserialize_VkValidationFeatureDisableEXT(rjson name);
    

        yyjson::writer::object serialize_VkExternalMemoryHandleTypeFlagBits(VkExternalMemoryHandleTypeFlagBits name);
        VkExternalMemoryHandleTypeFlagBits deserialize_VkExternalMemoryHandleTypeFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkExternalMemoryHandleTypeFlagBitsKHR(VkExternalMemoryHandleTypeFlagBitsKHR name);
        VkExternalMemoryHandleTypeFlagBitsKHR deserialize_VkExternalMemoryHandleTypeFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkExternalMemoryFeatureFlagBits(VkExternalMemoryFeatureFlagBits name);
        VkExternalMemoryFeatureFlagBits deserialize_VkExternalMemoryFeatureFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkExternalMemoryFeatureFlagBitsKHR(VkExternalMemoryFeatureFlagBitsKHR name);
        VkExternalMemoryFeatureFlagBitsKHR deserialize_VkExternalMemoryFeatureFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkExternalSemaphoreHandleTypeFlagBits(VkExternalSemaphoreHandleTypeFlagBits name);
        VkExternalSemaphoreHandleTypeFlagBits deserialize_VkExternalSemaphoreHandleTypeFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkExternalSemaphoreHandleTypeFlagBitsKHR(VkExternalSemaphoreHandleTypeFlagBitsKHR name);
        VkExternalSemaphoreHandleTypeFlagBitsKHR deserialize_VkExternalSemaphoreHandleTypeFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkExternalSemaphoreFeatureFlagBits(VkExternalSemaphoreFeatureFlagBits name);
        VkExternalSemaphoreFeatureFlagBits deserialize_VkExternalSemaphoreFeatureFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkExternalSemaphoreFeatureFlagBitsKHR(VkExternalSemaphoreFeatureFlagBitsKHR name);
        VkExternalSemaphoreFeatureFlagBitsKHR deserialize_VkExternalSemaphoreFeatureFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreImportFlagBits(VkSemaphoreImportFlagBits name);
        VkSemaphoreImportFlagBits deserialize_VkSemaphoreImportFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkSemaphoreImportFlagBitsKHR(VkSemaphoreImportFlagBitsKHR name);
        VkSemaphoreImportFlagBitsKHR deserialize_VkSemaphoreImportFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkExternalFenceHandleTypeFlagBits(VkExternalFenceHandleTypeFlagBits name);
        VkExternalFenceHandleTypeFlagBits deserialize_VkExternalFenceHandleTypeFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkExternalFenceHandleTypeFlagBitsKHR(VkExternalFenceHandleTypeFlagBitsKHR name);
        VkExternalFenceHandleTypeFlagBitsKHR deserialize_VkExternalFenceHandleTypeFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkExternalFenceFeatureFlagBits(VkExternalFenceFeatureFlagBits name);
        VkExternalFenceFeatureFlagBits deserialize_VkExternalFenceFeatureFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkExternalFenceFeatureFlagBitsKHR(VkExternalFenceFeatureFlagBitsKHR name);
        VkExternalFenceFeatureFlagBitsKHR deserialize_VkExternalFenceFeatureFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkFenceImportFlagBits(VkFenceImportFlagBits name);
        VkFenceImportFlagBits deserialize_VkFenceImportFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkFenceImportFlagBitsKHR(VkFenceImportFlagBitsKHR name);
        VkFenceImportFlagBitsKHR deserialize_VkFenceImportFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkSurfaceCounterFlagBitsEXT(VkSurfaceCounterFlagBitsEXT name);
        VkSurfaceCounterFlagBitsEXT deserialize_VkSurfaceCounterFlagBitsEXT(rjson name);
    

        yyjson::writer::object serialize_VkDisplayPowerStateEXT(VkDisplayPowerStateEXT name);
        VkDisplayPowerStateEXT deserialize_VkDisplayPowerStateEXT(rjson name);
    

        yyjson::writer::object serialize_VkDeviceEventTypeEXT(VkDeviceEventTypeEXT name);
        VkDeviceEventTypeEXT deserialize_VkDeviceEventTypeEXT(rjson name);
    

        yyjson::writer::object serialize_VkDisplayEventTypeEXT(VkDisplayEventTypeEXT name);
        VkDisplayEventTypeEXT deserialize_VkDisplayEventTypeEXT(rjson name);
    

        yyjson::writer::object serialize_VkPeerMemoryFeatureFlagBits(VkPeerMemoryFeatureFlagBits name);
        VkPeerMemoryFeatureFlagBits deserialize_VkPeerMemoryFeatureFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkPeerMemoryFeatureFlagBitsKHR(VkPeerMemoryFeatureFlagBitsKHR name);
        VkPeerMemoryFeatureFlagBitsKHR deserialize_VkPeerMemoryFeatureFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkMemoryAllocateFlagBits(VkMemoryAllocateFlagBits name);
        VkMemoryAllocateFlagBits deserialize_VkMemoryAllocateFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkMemoryAllocateFlagBitsKHR(VkMemoryAllocateFlagBitsKHR name);
        VkMemoryAllocateFlagBitsKHR deserialize_VkMemoryAllocateFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkDeviceGroupPresentModeFlagBitsKHR(VkDeviceGroupPresentModeFlagBitsKHR name);
        VkDeviceGroupPresentModeFlagBitsKHR deserialize_VkDeviceGroupPresentModeFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkSwapchainCreateFlagBitsKHR(VkSwapchainCreateFlagBitsKHR name);
        VkSwapchainCreateFlagBitsKHR deserialize_VkSwapchainCreateFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkSubgroupFeatureFlagBits(VkSubgroupFeatureFlagBits name);
        VkSubgroupFeatureFlagBits deserialize_VkSubgroupFeatureFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkTessellationDomainOrigin(VkTessellationDomainOrigin name);
        VkTessellationDomainOrigin deserialize_VkTessellationDomainOrigin(rjson name);
    

        yyjson::writer::object serialize_VkTessellationDomainOriginKHR(VkTessellationDomainOriginKHR name);
        VkTessellationDomainOriginKHR deserialize_VkTessellationDomainOriginKHR(rjson name);
    

        yyjson::writer::object serialize_VkSamplerYcbcrModelConversion(VkSamplerYcbcrModelConversion name);
        VkSamplerYcbcrModelConversion deserialize_VkSamplerYcbcrModelConversion(rjson name);
    

        yyjson::writer::object serialize_VkSamplerYcbcrModelConversionKHR(VkSamplerYcbcrModelConversionKHR name);
        VkSamplerYcbcrModelConversionKHR deserialize_VkSamplerYcbcrModelConversionKHR(rjson name);
    

        yyjson::writer::object serialize_VkSamplerYcbcrRange(VkSamplerYcbcrRange name);
        VkSamplerYcbcrRange deserialize_VkSamplerYcbcrRange(rjson name);
    

        yyjson::writer::object serialize_VkSamplerYcbcrRangeKHR(VkSamplerYcbcrRangeKHR name);
        VkSamplerYcbcrRangeKHR deserialize_VkSamplerYcbcrRangeKHR(rjson name);
    

        yyjson::writer::object serialize_VkChromaLocation(VkChromaLocation name);
        VkChromaLocation deserialize_VkChromaLocation(rjson name);
    

        yyjson::writer::object serialize_VkChromaLocationKHR(VkChromaLocationKHR name);
        VkChromaLocationKHR deserialize_VkChromaLocationKHR(rjson name);
    

        yyjson::writer::object serialize_VkSamplerReductionMode(VkSamplerReductionMode name);
        VkSamplerReductionMode deserialize_VkSamplerReductionMode(rjson name);
    

        yyjson::writer::object serialize_VkSamplerReductionModeEXT(VkSamplerReductionModeEXT name);
        VkSamplerReductionModeEXT deserialize_VkSamplerReductionModeEXT(rjson name);
    

        yyjson::writer::object serialize_VkBlendOverlapEXT(VkBlendOverlapEXT name);
        VkBlendOverlapEXT deserialize_VkBlendOverlapEXT(rjson name);
    

        yyjson::writer::object serialize_VkDebugUtilsMessageSeverityFlagBitsEXT(VkDebugUtilsMessageSeverityFlagBitsEXT name);
        VkDebugUtilsMessageSeverityFlagBitsEXT deserialize_VkDebugUtilsMessageSeverityFlagBitsEXT(rjson name);
    

        yyjson::writer::object serialize_VkDebugUtilsMessageTypeFlagBitsEXT(VkDebugUtilsMessageTypeFlagBitsEXT name);
        VkDebugUtilsMessageTypeFlagBitsEXT deserialize_VkDebugUtilsMessageTypeFlagBitsEXT(rjson name);
    

        yyjson::writer::object serialize_VkShaderFloatControlsIndependence(VkShaderFloatControlsIndependence name);
        VkShaderFloatControlsIndependence deserialize_VkShaderFloatControlsIndependence(rjson name);
    

        yyjson::writer::object serialize_VkShaderFloatControlsIndependenceKHR(VkShaderFloatControlsIndependenceKHR name);
        VkShaderFloatControlsIndependenceKHR deserialize_VkShaderFloatControlsIndependenceKHR(rjson name);
    

        yyjson::writer::object serialize_VkFragmentShadingRateCombinerOpKHR(VkFragmentShadingRateCombinerOpKHR name);
        VkFragmentShadingRateCombinerOpKHR deserialize_VkFragmentShadingRateCombinerOpKHR(rjson name);
    

        yyjson::writer::object serialize_VkSubmitFlagBits(VkSubmitFlagBits name);
        VkSubmitFlagBits deserialize_VkSubmitFlagBits(rjson name);
    

        yyjson::writer::object serialize_VkSubmitFlagBitsKHR(VkSubmitFlagBitsKHR name);
        VkSubmitFlagBitsKHR deserialize_VkSubmitFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkGraphicsPipelineLibraryFlagBitsEXT(VkGraphicsPipelineLibraryFlagBitsEXT name);
        VkGraphicsPipelineLibraryFlagBitsEXT deserialize_VkGraphicsPipelineLibraryFlagBitsEXT(rjson name);
    

        yyjson::writer::object serialize_VkOpticalFlowGridSizeFlagBitsNV(VkOpticalFlowGridSizeFlagBitsNV name);
        VkOpticalFlowGridSizeFlagBitsNV deserialize_VkOpticalFlowGridSizeFlagBitsNV(rjson name);
    

        yyjson::writer::object serialize_VkOpticalFlowUsageFlagBitsNV(VkOpticalFlowUsageFlagBitsNV name);
        VkOpticalFlowUsageFlagBitsNV deserialize_VkOpticalFlowUsageFlagBitsNV(rjson name);
    

        yyjson::writer::object serialize_VkOpticalFlowPerformanceLevelNV(VkOpticalFlowPerformanceLevelNV name);
        VkOpticalFlowPerformanceLevelNV deserialize_VkOpticalFlowPerformanceLevelNV(rjson name);
    

        yyjson::writer::object serialize_VkOpticalFlowSessionBindingPointNV(VkOpticalFlowSessionBindingPointNV name);
        VkOpticalFlowSessionBindingPointNV deserialize_VkOpticalFlowSessionBindingPointNV(rjson name);
    

        yyjson::writer::object serialize_VkOpticalFlowSessionCreateFlagBitsNV(VkOpticalFlowSessionCreateFlagBitsNV name);
        VkOpticalFlowSessionCreateFlagBitsNV deserialize_VkOpticalFlowSessionCreateFlagBitsNV(rjson name);
    

        yyjson::writer::object serialize_VkOpticalFlowExecuteFlagBitsNV(VkOpticalFlowExecuteFlagBitsNV name);
        VkOpticalFlowExecuteFlagBitsNV deserialize_VkOpticalFlowExecuteFlagBitsNV(rjson name);
    

        yyjson::writer::object serialize_VkDeviceFaultAddressTypeEXT(VkDeviceFaultAddressTypeEXT name);
        VkDeviceFaultAddressTypeEXT deserialize_VkDeviceFaultAddressTypeEXT(rjson name);
    

        yyjson::writer::object serialize_VkPresentScalingFlagBitsEXT(VkPresentScalingFlagBitsEXT name);
        VkPresentScalingFlagBitsEXT deserialize_VkPresentScalingFlagBitsEXT(rjson name);
    

        yyjson::writer::object serialize_VkPresentGravityFlagBitsEXT(VkPresentGravityFlagBitsEXT name);
        VkPresentGravityFlagBitsEXT deserialize_VkPresentGravityFlagBitsEXT(rjson name);
    

        yyjson::writer::object serialize_VkVendorId(VkVendorId name);
        VkVendorId deserialize_VkVendorId(rjson name);
    

        yyjson::writer::object serialize_VkDriverId(VkDriverId name);
        VkDriverId deserialize_VkDriverId(rjson name);
    

        yyjson::writer::object serialize_VkDriverIdKHR(VkDriverIdKHR name);
        VkDriverIdKHR deserialize_VkDriverIdKHR(rjson name);
    

        yyjson::writer::object serialize_VkShadingRatePaletteEntryNV(VkShadingRatePaletteEntryNV name);
        VkShadingRatePaletteEntryNV deserialize_VkShadingRatePaletteEntryNV(rjson name);
    

        yyjson::writer::object serialize_VkCoarseSampleOrderTypeNV(VkCoarseSampleOrderTypeNV name);
        VkCoarseSampleOrderTypeNV deserialize_VkCoarseSampleOrderTypeNV(rjson name);
    

        yyjson::writer::object serialize_VkPipelineExecutableStatisticFormatKHR(VkPipelineExecutableStatisticFormatKHR name);
        VkPipelineExecutableStatisticFormatKHR deserialize_VkPipelineExecutableStatisticFormatKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoCodecOperationFlagBitsKHR(VkVideoCodecOperationFlagBitsKHR name);
        VkVideoCodecOperationFlagBitsKHR deserialize_VkVideoCodecOperationFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoChromaSubsamplingFlagBitsKHR(VkVideoChromaSubsamplingFlagBitsKHR name);
        VkVideoChromaSubsamplingFlagBitsKHR deserialize_VkVideoChromaSubsamplingFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoComponentBitDepthFlagBitsKHR(VkVideoComponentBitDepthFlagBitsKHR name);
        VkVideoComponentBitDepthFlagBitsKHR deserialize_VkVideoComponentBitDepthFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoCapabilityFlagBitsKHR(VkVideoCapabilityFlagBitsKHR name);
        VkVideoCapabilityFlagBitsKHR deserialize_VkVideoCapabilityFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoSessionCreateFlagBitsKHR(VkVideoSessionCreateFlagBitsKHR name);
        VkVideoSessionCreateFlagBitsKHR deserialize_VkVideoSessionCreateFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoCodingControlFlagBitsKHR(VkVideoCodingControlFlagBitsKHR name);
        VkVideoCodingControlFlagBitsKHR deserialize_VkVideoCodingControlFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkQueryResultStatusKHR(VkQueryResultStatusKHR name);
        VkQueryResultStatusKHR deserialize_VkQueryResultStatusKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeUsageFlagBitsKHR(VkVideoDecodeUsageFlagBitsKHR name);
        VkVideoDecodeUsageFlagBitsKHR deserialize_VkVideoDecodeUsageFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeCapabilityFlagBitsKHR(VkVideoDecodeCapabilityFlagBitsKHR name);
        VkVideoDecodeCapabilityFlagBitsKHR deserialize_VkVideoDecodeCapabilityFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkVideoDecodeH264PictureLayoutFlagBitsKHR(VkVideoDecodeH264PictureLayoutFlagBitsKHR name);
        VkVideoDecodeH264PictureLayoutFlagBitsKHR deserialize_VkVideoDecodeH264PictureLayoutFlagBitsKHR(rjson name);
    

        yyjson::writer::object serialize_VkAccelerationStructureMotionInstanceTypeNV(VkAccelerationStructureMotionInstanceTypeNV name);
        VkAccelerationStructureMotionInstanceTypeNV deserialize_VkAccelerationStructureMotionInstanceTypeNV(rjson name);
    

        yyjson::writer::object serialize_Display_p(const Display* name);
        Display* deserialize_Display_p(rjson name);
    

        yyjson::writer::object serialize_VisualID_p(const VisualID* name);
        VisualID* deserialize_VisualID_p(rjson name);
    

            yyjson::writer::object serialize_VisualID(const VisualID name);
            VisualID deserialize_VisualID(rjson name);
        

        yyjson::writer::object serialize_Window_p(const Window* name);
        Window* deserialize_Window_p(rjson name);
    

            yyjson::writer::object serialize_Window(const Window name);
            Window deserialize_Window(rjson name);
        

        yyjson::writer::object serialize_xcb_connection_t_p(const xcb_connection_t* name);
        xcb_connection_t* deserialize_xcb_connection_t_p(rjson name);
    

        yyjson::writer::object serialize_xcb_visualid_t_p(const xcb_visualid_t* name);
        xcb_visualid_t* deserialize_xcb_visualid_t_p(rjson name);
    

            yyjson::writer::object serialize_xcb_visualid_t(const xcb_visualid_t name);
            xcb_visualid_t deserialize_xcb_visualid_t(rjson name);
        

        yyjson::writer::object serialize_xcb_window_t_p(const xcb_window_t* name);
        xcb_window_t* deserialize_xcb_window_t_p(rjson name);
    

            yyjson::writer::object serialize_xcb_window_t(const xcb_window_t name);
            xcb_window_t deserialize_xcb_window_t(rjson name);
        

        yyjson::writer::object serialize_StdVideoH264ProfileIdc_p(const StdVideoH264ProfileIdc* name);
        StdVideoH264ProfileIdc* deserialize_StdVideoH264ProfileIdc_p(rjson name);
    

            yyjson::writer::object serialize_StdVideoH264ProfileIdc(const StdVideoH264ProfileIdc name);
            StdVideoH264ProfileIdc deserialize_StdVideoH264ProfileIdc(rjson name);
        

        yyjson::writer::object serialize_StdVideoH264LevelIdc_p(const StdVideoH264LevelIdc* name);
        StdVideoH264LevelIdc* deserialize_StdVideoH264LevelIdc_p(rjson name);
    

            yyjson::writer::object serialize_StdVideoH264LevelIdc(const StdVideoH264LevelIdc name);
            StdVideoH264LevelIdc deserialize_StdVideoH264LevelIdc(rjson name);
        

        yyjson::writer::object serialize_StdVideoH264ChromaFormatIdc_p(const StdVideoH264ChromaFormatIdc* name);
        StdVideoH264ChromaFormatIdc* deserialize_StdVideoH264ChromaFormatIdc_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH264PocType_p(const StdVideoH264PocType* name);
        StdVideoH264PocType* deserialize_StdVideoH264PocType_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH264SpsFlags_p(const StdVideoH264SpsFlags* name);
        StdVideoH264SpsFlags* deserialize_StdVideoH264SpsFlags_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH264ScalingLists_p(const StdVideoH264ScalingLists* name);
        StdVideoH264ScalingLists* deserialize_StdVideoH264ScalingLists_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH264SequenceParameterSetVui_p(const StdVideoH264SequenceParameterSetVui* name);
        StdVideoH264SequenceParameterSetVui* deserialize_StdVideoH264SequenceParameterSetVui_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH264AspectRatioIdc_p(const StdVideoH264AspectRatioIdc* name);
        StdVideoH264AspectRatioIdc* deserialize_StdVideoH264AspectRatioIdc_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH264HrdParameters_p(const StdVideoH264HrdParameters* name);
        StdVideoH264HrdParameters* deserialize_StdVideoH264HrdParameters_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH264SpsVuiFlags_p(const StdVideoH264SpsVuiFlags* name);
        StdVideoH264SpsVuiFlags* deserialize_StdVideoH264SpsVuiFlags_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH264WeightedBipredIdc_p(const StdVideoH264WeightedBipredIdc* name);
        StdVideoH264WeightedBipredIdc* deserialize_StdVideoH264WeightedBipredIdc_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH264PpsFlags_p(const StdVideoH264PpsFlags* name);
        StdVideoH264PpsFlags* deserialize_StdVideoH264PpsFlags_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH264SliceType_p(const StdVideoH264SliceType* name);
        StdVideoH264SliceType* deserialize_StdVideoH264SliceType_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH264CabacInitIdc_p(const StdVideoH264CabacInitIdc* name);
        StdVideoH264CabacInitIdc* deserialize_StdVideoH264CabacInitIdc_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH264DisableDeblockingFilterIdc_p(const StdVideoH264DisableDeblockingFilterIdc* name);
        StdVideoH264DisableDeblockingFilterIdc* deserialize_StdVideoH264DisableDeblockingFilterIdc_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH264PictureType_p(const StdVideoH264PictureType* name);
        StdVideoH264PictureType* deserialize_StdVideoH264PictureType_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH264ModificationOfPicNumsIdc_p(const StdVideoH264ModificationOfPicNumsIdc* name);
        StdVideoH264ModificationOfPicNumsIdc* deserialize_StdVideoH264ModificationOfPicNumsIdc_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH264MemMgmtControlOp_p(const StdVideoH264MemMgmtControlOp* name);
        StdVideoH264MemMgmtControlOp* deserialize_StdVideoH264MemMgmtControlOp_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoDecodeH264PictureInfo_p(const StdVideoDecodeH264PictureInfo* name);
        StdVideoDecodeH264PictureInfo* deserialize_StdVideoDecodeH264PictureInfo_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoDecodeH264ReferenceInfo_p(const StdVideoDecodeH264ReferenceInfo* name);
        StdVideoDecodeH264ReferenceInfo* deserialize_StdVideoDecodeH264ReferenceInfo_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoDecodeH264PictureInfoFlags_p(const StdVideoDecodeH264PictureInfoFlags* name);
        StdVideoDecodeH264PictureInfoFlags* deserialize_StdVideoDecodeH264PictureInfoFlags_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoDecodeH264ReferenceInfoFlags_p(const StdVideoDecodeH264ReferenceInfoFlags* name);
        StdVideoDecodeH264ReferenceInfoFlags* deserialize_StdVideoDecodeH264ReferenceInfoFlags_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH264SequenceParameterSet_p(const StdVideoH264SequenceParameterSet* name);
        StdVideoH264SequenceParameterSet* deserialize_StdVideoH264SequenceParameterSet_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH264PictureParameterSet_p(const StdVideoH264PictureParameterSet* name);
        StdVideoH264PictureParameterSet* deserialize_StdVideoH264PictureParameterSet_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH265ProfileIdc_p(const StdVideoH265ProfileIdc* name);
        StdVideoH265ProfileIdc* deserialize_StdVideoH265ProfileIdc_p(rjson name);
    

            yyjson::writer::object serialize_StdVideoH265ProfileIdc(const StdVideoH265ProfileIdc name);
            StdVideoH265ProfileIdc deserialize_StdVideoH265ProfileIdc(rjson name);
        

        yyjson::writer::object serialize_StdVideoH265VideoParameterSet_p(const StdVideoH265VideoParameterSet* name);
        StdVideoH265VideoParameterSet* deserialize_StdVideoH265VideoParameterSet_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH265SequenceParameterSet_p(const StdVideoH265SequenceParameterSet* name);
        StdVideoH265SequenceParameterSet* deserialize_StdVideoH265SequenceParameterSet_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH265PictureParameterSet_p(const StdVideoH265PictureParameterSet* name);
        StdVideoH265PictureParameterSet* deserialize_StdVideoH265PictureParameterSet_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH265DecPicBufMgr_p(const StdVideoH265DecPicBufMgr* name);
        StdVideoH265DecPicBufMgr* deserialize_StdVideoH265DecPicBufMgr_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH265HrdParameters_p(const StdVideoH265HrdParameters* name);
        StdVideoH265HrdParameters* deserialize_StdVideoH265HrdParameters_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH265VpsFlags_p(const StdVideoH265VpsFlags* name);
        StdVideoH265VpsFlags* deserialize_StdVideoH265VpsFlags_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH265LevelIdc_p(const StdVideoH265LevelIdc* name);
        StdVideoH265LevelIdc* deserialize_StdVideoH265LevelIdc_p(rjson name);
    

            yyjson::writer::object serialize_StdVideoH265LevelIdc(const StdVideoH265LevelIdc name);
            StdVideoH265LevelIdc deserialize_StdVideoH265LevelIdc(rjson name);
        

        yyjson::writer::object serialize_StdVideoH265SpsFlags_p(const StdVideoH265SpsFlags* name);
        StdVideoH265SpsFlags* deserialize_StdVideoH265SpsFlags_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH265ScalingLists_p(const StdVideoH265ScalingLists* name);
        StdVideoH265ScalingLists* deserialize_StdVideoH265ScalingLists_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH265SequenceParameterSetVui_p(const StdVideoH265SequenceParameterSetVui* name);
        StdVideoH265SequenceParameterSetVui* deserialize_StdVideoH265SequenceParameterSetVui_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH265PredictorPaletteEntries_p(const StdVideoH265PredictorPaletteEntries* name);
        StdVideoH265PredictorPaletteEntries* deserialize_StdVideoH265PredictorPaletteEntries_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH265PpsFlags_p(const StdVideoH265PpsFlags* name);
        StdVideoH265PpsFlags* deserialize_StdVideoH265PpsFlags_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH265SubLayerHrdParameters_p(const StdVideoH265SubLayerHrdParameters* name);
        StdVideoH265SubLayerHrdParameters* deserialize_StdVideoH265SubLayerHrdParameters_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH265HrdFlags_p(const StdVideoH265HrdFlags* name);
        StdVideoH265HrdFlags* deserialize_StdVideoH265HrdFlags_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH265SpsVuiFlags_p(const StdVideoH265SpsVuiFlags* name);
        StdVideoH265SpsVuiFlags* deserialize_StdVideoH265SpsVuiFlags_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH265SliceType_p(const StdVideoH265SliceType* name);
        StdVideoH265SliceType* deserialize_StdVideoH265SliceType_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoH265PictureType_p(const StdVideoH265PictureType* name);
        StdVideoH265PictureType* deserialize_StdVideoH265PictureType_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoDecodeH265PictureInfo_p(const StdVideoDecodeH265PictureInfo* name);
        StdVideoDecodeH265PictureInfo* deserialize_StdVideoDecodeH265PictureInfo_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoDecodeH265ReferenceInfo_p(const StdVideoDecodeH265ReferenceInfo* name);
        StdVideoDecodeH265ReferenceInfo* deserialize_StdVideoDecodeH265ReferenceInfo_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoDecodeH265PictureInfoFlags_p(const StdVideoDecodeH265PictureInfoFlags* name);
        StdVideoDecodeH265PictureInfoFlags* deserialize_StdVideoDecodeH265PictureInfoFlags_p(rjson name);
    

        yyjson::writer::object serialize_StdVideoDecodeH265ReferenceInfoFlags_p(const StdVideoDecodeH265ReferenceInfoFlags* name);
        StdVideoDecodeH265ReferenceInfoFlags* deserialize_StdVideoDecodeH265ReferenceInfoFlags_p(rjson name);
    
yyjson::writer::object serialize_PFN_vkInternalAllocationNotification(PFN_vkInternalAllocationNotification name);
void handle_PFN_vkInternalAllocationNotification_request(rjson &data);
void handle_PFN_vkInternalAllocationNotification_response(rjson& data, 
    void*                                       pUserData,
    size_t                                      size,
    VkInternalAllocationType                    allocationType,
    VkSystemAllocationScope                     allocationScope);
PFN_vkInternalAllocationNotification deserialize_PFN_vkInternalAllocationNotification(rjson name);
yyjson::writer::object serialize_PFN_vkInternalFreeNotification(PFN_vkInternalFreeNotification name);
void handle_PFN_vkInternalFreeNotification_request(rjson &data);
void handle_PFN_vkInternalFreeNotification_response(rjson& data, 
    void*                                       pUserData,
    size_t                                      size,
    VkInternalAllocationType                    allocationType,
    VkSystemAllocationScope                     allocationScope);
PFN_vkInternalFreeNotification deserialize_PFN_vkInternalFreeNotification(rjson name);
yyjson::writer::object serialize_PFN_vkReallocationFunction(PFN_vkReallocationFunction name);
void handle_PFN_vkReallocationFunction_request(rjson &data);
void* handle_PFN_vkReallocationFunction_response(rjson& data, 
    void*                                       pUserData,
    void*                                       pOriginal,
    size_t                                      size,
    size_t                                      alignment,
    VkSystemAllocationScope                     allocationScope);
PFN_vkReallocationFunction deserialize_PFN_vkReallocationFunction(rjson name);
yyjson::writer::object serialize_PFN_vkAllocationFunction(PFN_vkAllocationFunction name);
void handle_PFN_vkAllocationFunction_request(rjson &data);
void* handle_PFN_vkAllocationFunction_response(rjson& data, 
    void*                                       pUserData,
    size_t                                      size,
    size_t                                      alignment,
    VkSystemAllocationScope                     allocationScope);
PFN_vkAllocationFunction deserialize_PFN_vkAllocationFunction(rjson name);
yyjson::writer::object serialize_PFN_vkFreeFunction(PFN_vkFreeFunction name);
void handle_PFN_vkFreeFunction_request(rjson &data);
void handle_PFN_vkFreeFunction_response(rjson& data, 
    void*                                       pUserData,
    void*                                       pMemory);
PFN_vkFreeFunction deserialize_PFN_vkFreeFunction(rjson name);
yyjson::writer::object serialize_PFN_vkDebugReportCallbackEXT(PFN_vkDebugReportCallbackEXT name);
void handle_PFN_vkDebugReportCallbackEXT_request(rjson &data);
VkBool32 handle_PFN_vkDebugReportCallbackEXT_response(rjson& data, 
    VkDebugReportFlagsEXT                       flags,
    VkDebugReportObjectTypeEXT                  objectType,
    uint64_t                                    object,
    size_t                                      location,
    int32_t                                     messageCode,
    const char*                                 pLayerPrefix,
    const char*                                 pMessage,
    void*                                       pUserData);
PFN_vkDebugReportCallbackEXT deserialize_PFN_vkDebugReportCallbackEXT(rjson name);
yyjson::writer::object serialize_PFN_vkDebugUtilsMessengerCallbackEXT(PFN_vkDebugUtilsMessengerCallbackEXT name);
void handle_PFN_vkDebugUtilsMessengerCallbackEXT_request(rjson &data);
VkBool32 handle_PFN_vkDebugUtilsMessengerCallbackEXT_response(rjson& data, 
    VkDebugUtilsMessageSeverityFlagBitsEXT           messageSeverity,
    VkDebugUtilsMessageTypeFlagsEXT                  messageTypes,
    const VkDebugUtilsMessengerCallbackDataEXT*      pCallbackData,
    void*                                            pUserData);
PFN_vkDebugUtilsMessengerCallbackEXT deserialize_PFN_vkDebugUtilsMessengerCallbackEXT(rjson name);
yyjson::writer::object serialize_PFN_vkDeviceMemoryReportCallbackEXT(PFN_vkDeviceMemoryReportCallbackEXT name);
void handle_PFN_vkDeviceMemoryReportCallbackEXT_request(rjson &data);
void handle_PFN_vkDeviceMemoryReportCallbackEXT_response(rjson& data, 
    const VkDeviceMemoryReportCallbackDataEXT*  pCallbackData,
    void*                                       pUserData);
PFN_vkDeviceMemoryReportCallbackEXT deserialize_PFN_vkDeviceMemoryReportCallbackEXT(rjson name);
yyjson::writer::object serialize_PFN_vkGetInstanceProcAddrLUNARG(PFN_vkGetInstanceProcAddrLUNARG name);
PFN_vkGetInstanceProcAddrLUNARG deserialize_PFN_vkGetInstanceProcAddrLUNARG(rjson name);
yyjson::writer::object serialize_VkInstance(VkInstance data);
VkInstance deserialize_VkInstance(rjson data);
yyjson::writer::object serialize_VkPhysicalDevice(VkPhysicalDevice data);
VkPhysicalDevice deserialize_VkPhysicalDevice(rjson data);
yyjson::writer::object serialize_VkDevice(VkDevice data);
VkDevice deserialize_VkDevice(rjson data);
yyjson::writer::object serialize_VkQueue(VkQueue data);
VkQueue deserialize_VkQueue(rjson data);
yyjson::writer::object serialize_VkCommandBuffer(VkCommandBuffer data);
VkCommandBuffer deserialize_VkCommandBuffer(rjson data);
yyjson::writer::object serialize_VkDeviceMemory(VkDeviceMemory data);
VkDeviceMemory deserialize_VkDeviceMemory(rjson data);
yyjson::writer::object serialize_VkCommandPool(VkCommandPool data);
VkCommandPool deserialize_VkCommandPool(rjson data);
yyjson::writer::object serialize_VkBuffer(VkBuffer data);
VkBuffer deserialize_VkBuffer(rjson data);
yyjson::writer::object serialize_VkBufferView(VkBufferView data);
VkBufferView deserialize_VkBufferView(rjson data);
yyjson::writer::object serialize_VkImage(VkImage data);
VkImage deserialize_VkImage(rjson data);
yyjson::writer::object serialize_VkImageView(VkImageView data);
VkImageView deserialize_VkImageView(rjson data);
yyjson::writer::object serialize_VkShaderModule(VkShaderModule data);
VkShaderModule deserialize_VkShaderModule(rjson data);
yyjson::writer::object serialize_VkPipeline(VkPipeline data);
VkPipeline deserialize_VkPipeline(rjson data);
yyjson::writer::object serialize_VkPipelineLayout(VkPipelineLayout data);
VkPipelineLayout deserialize_VkPipelineLayout(rjson data);
yyjson::writer::object serialize_VkSampler(VkSampler data);
VkSampler deserialize_VkSampler(rjson data);
yyjson::writer::object serialize_VkDescriptorSet(VkDescriptorSet data);
VkDescriptorSet deserialize_VkDescriptorSet(rjson data);
yyjson::writer::object serialize_VkDescriptorSetLayout(VkDescriptorSetLayout data);
VkDescriptorSetLayout deserialize_VkDescriptorSetLayout(rjson data);
yyjson::writer::object serialize_VkDescriptorPool(VkDescriptorPool data);
VkDescriptorPool deserialize_VkDescriptorPool(rjson data);
yyjson::writer::object serialize_VkFence(VkFence data);
VkFence deserialize_VkFence(rjson data);
yyjson::writer::object serialize_VkSemaphore(VkSemaphore data);
VkSemaphore deserialize_VkSemaphore(rjson data);
yyjson::writer::object serialize_VkEvent(VkEvent data);
VkEvent deserialize_VkEvent(rjson data);
yyjson::writer::object serialize_VkQueryPool(VkQueryPool data);
VkQueryPool deserialize_VkQueryPool(rjson data);
yyjson::writer::object serialize_VkFramebuffer(VkFramebuffer data);
VkFramebuffer deserialize_VkFramebuffer(rjson data);
yyjson::writer::object serialize_VkRenderPass(VkRenderPass data);
VkRenderPass deserialize_VkRenderPass(rjson data);
yyjson::writer::object serialize_VkPipelineCache(VkPipelineCache data);
VkPipelineCache deserialize_VkPipelineCache(rjson data);
yyjson::writer::object serialize_VkIndirectCommandsLayoutNV(VkIndirectCommandsLayoutNV data);
VkIndirectCommandsLayoutNV deserialize_VkIndirectCommandsLayoutNV(rjson data);
yyjson::writer::object serialize_VkDescriptorUpdateTemplate(VkDescriptorUpdateTemplate data);
VkDescriptorUpdateTemplate deserialize_VkDescriptorUpdateTemplate(rjson data);
yyjson::writer::object serialize_VkDescriptorUpdateTemplateKHR(VkDescriptorUpdateTemplateKHR data);
VkDescriptorUpdateTemplateKHR deserialize_VkDescriptorUpdateTemplateKHR(rjson data);
yyjson::writer::object serialize_VkSamplerYcbcrConversion(VkSamplerYcbcrConversion data);
VkSamplerYcbcrConversion deserialize_VkSamplerYcbcrConversion(rjson data);
yyjson::writer::object serialize_VkSamplerYcbcrConversionKHR(VkSamplerYcbcrConversionKHR data);
VkSamplerYcbcrConversionKHR deserialize_VkSamplerYcbcrConversionKHR(rjson data);
yyjson::writer::object serialize_VkValidationCacheEXT(VkValidationCacheEXT data);
VkValidationCacheEXT deserialize_VkValidationCacheEXT(rjson data);
yyjson::writer::object serialize_VkAccelerationStructureKHR(VkAccelerationStructureKHR data);
VkAccelerationStructureKHR deserialize_VkAccelerationStructureKHR(rjson data);
yyjson::writer::object serialize_VkAccelerationStructureNV(VkAccelerationStructureNV data);
VkAccelerationStructureNV deserialize_VkAccelerationStructureNV(rjson data);
yyjson::writer::object serialize_VkPerformanceConfigurationINTEL(VkPerformanceConfigurationINTEL data);
VkPerformanceConfigurationINTEL deserialize_VkPerformanceConfigurationINTEL(rjson data);
yyjson::writer::object serialize_VkDeferredOperationKHR(VkDeferredOperationKHR data);
VkDeferredOperationKHR deserialize_VkDeferredOperationKHR(rjson data);
yyjson::writer::object serialize_VkPrivateDataSlot(VkPrivateDataSlot data);
VkPrivateDataSlot deserialize_VkPrivateDataSlot(rjson data);
yyjson::writer::object serialize_VkPrivateDataSlotEXT(VkPrivateDataSlotEXT data);
VkPrivateDataSlotEXT deserialize_VkPrivateDataSlotEXT(rjson data);
yyjson::writer::object serialize_VkCuModuleNVX(VkCuModuleNVX data);
VkCuModuleNVX deserialize_VkCuModuleNVX(rjson data);
yyjson::writer::object serialize_VkCuFunctionNVX(VkCuFunctionNVX data);
VkCuFunctionNVX deserialize_VkCuFunctionNVX(rjson data);
yyjson::writer::object serialize_VkOpticalFlowSessionNV(VkOpticalFlowSessionNV data);
VkOpticalFlowSessionNV deserialize_VkOpticalFlowSessionNV(rjson data);
yyjson::writer::object serialize_VkMicromapEXT(VkMicromapEXT data);
VkMicromapEXT deserialize_VkMicromapEXT(rjson data);
yyjson::writer::object serialize_VkShaderEXT(VkShaderEXT data);
VkShaderEXT deserialize_VkShaderEXT(rjson data);
yyjson::writer::object serialize_VkDisplayKHR(VkDisplayKHR data);
VkDisplayKHR deserialize_VkDisplayKHR(rjson data);
yyjson::writer::object serialize_VkDisplayModeKHR(VkDisplayModeKHR data);
VkDisplayModeKHR deserialize_VkDisplayModeKHR(rjson data);
yyjson::writer::object serialize_VkSurfaceKHR(VkSurfaceKHR data);
VkSurfaceKHR deserialize_VkSurfaceKHR(rjson data);
yyjson::writer::object serialize_VkSwapchainKHR(VkSwapchainKHR data);
VkSwapchainKHR deserialize_VkSwapchainKHR(rjson data);
yyjson::writer::object serialize_VkDebugReportCallbackEXT(VkDebugReportCallbackEXT data);
VkDebugReportCallbackEXT deserialize_VkDebugReportCallbackEXT(rjson data);
yyjson::writer::object serialize_VkDebugUtilsMessengerEXT(VkDebugUtilsMessengerEXT data);
VkDebugUtilsMessengerEXT deserialize_VkDebugUtilsMessengerEXT(rjson data);
yyjson::writer::object serialize_VkVideoSessionKHR(VkVideoSessionKHR data);
VkVideoSessionKHR deserialize_VkVideoSessionKHR(rjson data);
yyjson::writer::object serialize_VkVideoSessionParametersKHR(VkVideoSessionParametersKHR data);
VkVideoSessionParametersKHR deserialize_VkVideoSessionParametersKHR(rjson data);
