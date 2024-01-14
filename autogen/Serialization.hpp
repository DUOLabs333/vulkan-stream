#include <vulkan/vulkan.h>

typedef struct StreamStructure{
    VkStructureType sType;
    const void* pNext;
} StreamStructure;

#include <debug.hpp>
typedef void* pNext;
void* memdup(const void* mem, size_t size);
void* copyVkStruct (const void* data);

        json serialize_VkBaseOutStructure(VkBaseOutStructure name);
        VkBaseOutStructure deserialize_VkBaseOutStructure(json &name);
    

        json serialize_VkBaseInStructure(VkBaseInStructure name);
        VkBaseInStructure deserialize_VkBaseInStructure(json &name);
    

        json serialize_VkOffset2D(VkOffset2D name);
        VkOffset2D deserialize_VkOffset2D(json &name);
    

        json serialize_VkOffset3D(VkOffset3D name);
        VkOffset3D deserialize_VkOffset3D(json &name);
    

        json serialize_VkExtent2D(VkExtent2D name);
        VkExtent2D deserialize_VkExtent2D(json &name);
    

        json serialize_VkExtent3D(VkExtent3D name);
        VkExtent3D deserialize_VkExtent3D(json &name);
    

        json serialize_VkViewport(VkViewport name);
        VkViewport deserialize_VkViewport(json &name);
    

        json serialize_VkRect2D(VkRect2D name);
        VkRect2D deserialize_VkRect2D(json &name);
    

        json serialize_VkClearRect(VkClearRect name);
        VkClearRect deserialize_VkClearRect(json &name);
    

        json serialize_VkComponentMapping(VkComponentMapping name);
        VkComponentMapping deserialize_VkComponentMapping(json &name);
    

        json serialize_VkPhysicalDeviceProperties(VkPhysicalDeviceProperties name);
        VkPhysicalDeviceProperties deserialize_VkPhysicalDeviceProperties(json &name);
    

        json serialize_VkExtensionProperties(VkExtensionProperties name);
        VkExtensionProperties deserialize_VkExtensionProperties(json &name);
    

        json serialize_VkLayerProperties(VkLayerProperties name);
        VkLayerProperties deserialize_VkLayerProperties(json &name);
    

        json serialize_VkApplicationInfo(VkApplicationInfo name);
        VkApplicationInfo deserialize_VkApplicationInfo(json &name);
    

        json serialize_VkAllocationCallbacks(VkAllocationCallbacks name);
        VkAllocationCallbacks deserialize_VkAllocationCallbacks(json &name);
    

        json serialize_VkDeviceQueueCreateInfo(VkDeviceQueueCreateInfo name);
        VkDeviceQueueCreateInfo deserialize_VkDeviceQueueCreateInfo(json &name);
    

        json serialize_VkDeviceCreateInfo(VkDeviceCreateInfo name);
        VkDeviceCreateInfo deserialize_VkDeviceCreateInfo(json &name);
    

        json serialize_VkInstanceCreateInfo(VkInstanceCreateInfo name);
        VkInstanceCreateInfo deserialize_VkInstanceCreateInfo(json &name);
    

        json serialize_VkQueueFamilyProperties(VkQueueFamilyProperties name);
        VkQueueFamilyProperties deserialize_VkQueueFamilyProperties(json &name);
    

        json serialize_VkPhysicalDeviceMemoryProperties(VkPhysicalDeviceMemoryProperties name);
        VkPhysicalDeviceMemoryProperties deserialize_VkPhysicalDeviceMemoryProperties(json &name);
    

        json serialize_VkMemoryAllocateInfo(VkMemoryAllocateInfo name);
        VkMemoryAllocateInfo deserialize_VkMemoryAllocateInfo(json &name);
    

        json serialize_VkMemoryRequirements(VkMemoryRequirements name);
        VkMemoryRequirements deserialize_VkMemoryRequirements(json &name);
    

        json serialize_VkSparseImageFormatProperties(VkSparseImageFormatProperties name);
        VkSparseImageFormatProperties deserialize_VkSparseImageFormatProperties(json &name);
    

        json serialize_VkSparseImageMemoryRequirements(VkSparseImageMemoryRequirements name);
        VkSparseImageMemoryRequirements deserialize_VkSparseImageMemoryRequirements(json &name);
    

        json serialize_VkMemoryType(VkMemoryType name);
        VkMemoryType deserialize_VkMemoryType(json &name);
    

        json serialize_VkMemoryHeap(VkMemoryHeap name);
        VkMemoryHeap deserialize_VkMemoryHeap(json &name);
    

        json serialize_VkMappedMemoryRange(VkMappedMemoryRange name);
        VkMappedMemoryRange deserialize_VkMappedMemoryRange(json &name);
    

        json serialize_VkFormatProperties(VkFormatProperties name);
        VkFormatProperties deserialize_VkFormatProperties(json &name);
    

        json serialize_VkImageFormatProperties(VkImageFormatProperties name);
        VkImageFormatProperties deserialize_VkImageFormatProperties(json &name);
    

        json serialize_VkDescriptorBufferInfo(VkDescriptorBufferInfo name);
        VkDescriptorBufferInfo deserialize_VkDescriptorBufferInfo(json &name);
    

        json serialize_VkDescriptorImageInfo(VkDescriptorImageInfo name);
        VkDescriptorImageInfo deserialize_VkDescriptorImageInfo(json &name);
    

        json serialize_VkWriteDescriptorSet(VkWriteDescriptorSet name);
        VkWriteDescriptorSet deserialize_VkWriteDescriptorSet(json &name);
    

        json serialize_VkCopyDescriptorSet(VkCopyDescriptorSet name);
        VkCopyDescriptorSet deserialize_VkCopyDescriptorSet(json &name);
    

        json serialize_VkBufferUsageFlags2CreateInfoKHR(VkBufferUsageFlags2CreateInfoKHR name);
        VkBufferUsageFlags2CreateInfoKHR deserialize_VkBufferUsageFlags2CreateInfoKHR(json &name);
    

        json serialize_VkBufferCreateInfo(VkBufferCreateInfo name);
        VkBufferCreateInfo deserialize_VkBufferCreateInfo(json &name);
    

        json serialize_VkBufferViewCreateInfo(VkBufferViewCreateInfo name);
        VkBufferViewCreateInfo deserialize_VkBufferViewCreateInfo(json &name);
    

        json serialize_VkImageSubresource(VkImageSubresource name);
        VkImageSubresource deserialize_VkImageSubresource(json &name);
    

        json serialize_VkImageSubresourceLayers(VkImageSubresourceLayers name);
        VkImageSubresourceLayers deserialize_VkImageSubresourceLayers(json &name);
    

        json serialize_VkImageSubresourceRange(VkImageSubresourceRange name);
        VkImageSubresourceRange deserialize_VkImageSubresourceRange(json &name);
    

        json serialize_VkMemoryBarrier(VkMemoryBarrier name);
        VkMemoryBarrier deserialize_VkMemoryBarrier(json &name);
    

        json serialize_VkBufferMemoryBarrier(VkBufferMemoryBarrier name);
        VkBufferMemoryBarrier deserialize_VkBufferMemoryBarrier(json &name);
    

        json serialize_VkImageMemoryBarrier(VkImageMemoryBarrier name);
        VkImageMemoryBarrier deserialize_VkImageMemoryBarrier(json &name);
    

        json serialize_VkImageCreateInfo(VkImageCreateInfo name);
        VkImageCreateInfo deserialize_VkImageCreateInfo(json &name);
    

        json serialize_VkSubresourceLayout(VkSubresourceLayout name);
        VkSubresourceLayout deserialize_VkSubresourceLayout(json &name);
    

        json serialize_VkImageViewCreateInfo(VkImageViewCreateInfo name);
        VkImageViewCreateInfo deserialize_VkImageViewCreateInfo(json &name);
    

        json serialize_VkBufferCopy(VkBufferCopy name);
        VkBufferCopy deserialize_VkBufferCopy(json &name);
    

        json serialize_VkSparseMemoryBind(VkSparseMemoryBind name);
        VkSparseMemoryBind deserialize_VkSparseMemoryBind(json &name);
    

        json serialize_VkSparseImageMemoryBind(VkSparseImageMemoryBind name);
        VkSparseImageMemoryBind deserialize_VkSparseImageMemoryBind(json &name);
    

        json serialize_VkSparseBufferMemoryBindInfo(VkSparseBufferMemoryBindInfo name);
        VkSparseBufferMemoryBindInfo deserialize_VkSparseBufferMemoryBindInfo(json &name);
    

        json serialize_VkSparseImageOpaqueMemoryBindInfo(VkSparseImageOpaqueMemoryBindInfo name);
        VkSparseImageOpaqueMemoryBindInfo deserialize_VkSparseImageOpaqueMemoryBindInfo(json &name);
    

        json serialize_VkSparseImageMemoryBindInfo(VkSparseImageMemoryBindInfo name);
        VkSparseImageMemoryBindInfo deserialize_VkSparseImageMemoryBindInfo(json &name);
    

        json serialize_VkBindSparseInfo(VkBindSparseInfo name);
        VkBindSparseInfo deserialize_VkBindSparseInfo(json &name);
    

        json serialize_VkImageCopy(VkImageCopy name);
        VkImageCopy deserialize_VkImageCopy(json &name);
    

        json serialize_VkImageBlit(VkImageBlit name);
        VkImageBlit deserialize_VkImageBlit(json &name);
    

        json serialize_VkBufferImageCopy(VkBufferImageCopy name);
        VkBufferImageCopy deserialize_VkBufferImageCopy(json &name);
    

        json serialize_VkCopyMemoryIndirectCommandNV(VkCopyMemoryIndirectCommandNV name);
        VkCopyMemoryIndirectCommandNV deserialize_VkCopyMemoryIndirectCommandNV(json &name);
    

        json serialize_VkCopyMemoryToImageIndirectCommandNV(VkCopyMemoryToImageIndirectCommandNV name);
        VkCopyMemoryToImageIndirectCommandNV deserialize_VkCopyMemoryToImageIndirectCommandNV(json &name);
    

        json serialize_VkImageResolve(VkImageResolve name);
        VkImageResolve deserialize_VkImageResolve(json &name);
    

        json serialize_VkShaderModuleCreateInfo(VkShaderModuleCreateInfo name);
        VkShaderModuleCreateInfo deserialize_VkShaderModuleCreateInfo(json &name);
    

        json serialize_VkDescriptorSetLayoutBinding(VkDescriptorSetLayoutBinding name);
        VkDescriptorSetLayoutBinding deserialize_VkDescriptorSetLayoutBinding(json &name);
    

        json serialize_VkDescriptorSetLayoutCreateInfo(VkDescriptorSetLayoutCreateInfo name);
        VkDescriptorSetLayoutCreateInfo deserialize_VkDescriptorSetLayoutCreateInfo(json &name);
    

        json serialize_VkDescriptorPoolSize(VkDescriptorPoolSize name);
        VkDescriptorPoolSize deserialize_VkDescriptorPoolSize(json &name);
    

        json serialize_VkDescriptorPoolCreateInfo(VkDescriptorPoolCreateInfo name);
        VkDescriptorPoolCreateInfo deserialize_VkDescriptorPoolCreateInfo(json &name);
    

        json serialize_VkDescriptorSetAllocateInfo(VkDescriptorSetAllocateInfo name);
        VkDescriptorSetAllocateInfo deserialize_VkDescriptorSetAllocateInfo(json &name);
    

        json serialize_VkSpecializationMapEntry(VkSpecializationMapEntry name);
        VkSpecializationMapEntry deserialize_VkSpecializationMapEntry(json &name);
    

        json serialize_VkSpecializationInfo(VkSpecializationInfo name);
        VkSpecializationInfo deserialize_VkSpecializationInfo(json &name);
    

        json serialize_VkPipelineShaderStageCreateInfo(VkPipelineShaderStageCreateInfo name);
        VkPipelineShaderStageCreateInfo deserialize_VkPipelineShaderStageCreateInfo(json &name);
    

        json serialize_VkComputePipelineCreateInfo(VkComputePipelineCreateInfo name);
        VkComputePipelineCreateInfo deserialize_VkComputePipelineCreateInfo(json &name);
    

        json serialize_VkComputePipelineIndirectBufferInfoNV(VkComputePipelineIndirectBufferInfoNV name);
        VkComputePipelineIndirectBufferInfoNV deserialize_VkComputePipelineIndirectBufferInfoNV(json &name);
    

        json serialize_VkPipelineCreateFlags2CreateInfoKHR(VkPipelineCreateFlags2CreateInfoKHR name);
        VkPipelineCreateFlags2CreateInfoKHR deserialize_VkPipelineCreateFlags2CreateInfoKHR(json &name);
    

        json serialize_VkVertexInputBindingDescription(VkVertexInputBindingDescription name);
        VkVertexInputBindingDescription deserialize_VkVertexInputBindingDescription(json &name);
    

        json serialize_VkVertexInputAttributeDescription(VkVertexInputAttributeDescription name);
        VkVertexInputAttributeDescription deserialize_VkVertexInputAttributeDescription(json &name);
    

        json serialize_VkPipelineVertexInputStateCreateInfo(VkPipelineVertexInputStateCreateInfo name);
        VkPipelineVertexInputStateCreateInfo deserialize_VkPipelineVertexInputStateCreateInfo(json &name);
    

        json serialize_VkPipelineInputAssemblyStateCreateInfo(VkPipelineInputAssemblyStateCreateInfo name);
        VkPipelineInputAssemblyStateCreateInfo deserialize_VkPipelineInputAssemblyStateCreateInfo(json &name);
    

        json serialize_VkPipelineTessellationStateCreateInfo(VkPipelineTessellationStateCreateInfo name);
        VkPipelineTessellationStateCreateInfo deserialize_VkPipelineTessellationStateCreateInfo(json &name);
    

        json serialize_VkPipelineViewportStateCreateInfo(VkPipelineViewportStateCreateInfo name);
        VkPipelineViewportStateCreateInfo deserialize_VkPipelineViewportStateCreateInfo(json &name);
    

        json serialize_VkPipelineRasterizationStateCreateInfo(VkPipelineRasterizationStateCreateInfo name);
        VkPipelineRasterizationStateCreateInfo deserialize_VkPipelineRasterizationStateCreateInfo(json &name);
    

        json serialize_VkPipelineMultisampleStateCreateInfo(VkPipelineMultisampleStateCreateInfo name);
        VkPipelineMultisampleStateCreateInfo deserialize_VkPipelineMultisampleStateCreateInfo(json &name);
    

        json serialize_VkPipelineColorBlendAttachmentState(VkPipelineColorBlendAttachmentState name);
        VkPipelineColorBlendAttachmentState deserialize_VkPipelineColorBlendAttachmentState(json &name);
    

        json serialize_VkPipelineColorBlendStateCreateInfo(VkPipelineColorBlendStateCreateInfo name);
        VkPipelineColorBlendStateCreateInfo deserialize_VkPipelineColorBlendStateCreateInfo(json &name);
    

        json serialize_VkPipelineDynamicStateCreateInfo(VkPipelineDynamicStateCreateInfo name);
        VkPipelineDynamicStateCreateInfo deserialize_VkPipelineDynamicStateCreateInfo(json &name);
    

        json serialize_VkStencilOpState(VkStencilOpState name);
        VkStencilOpState deserialize_VkStencilOpState(json &name);
    

        json serialize_VkPipelineDepthStencilStateCreateInfo(VkPipelineDepthStencilStateCreateInfo name);
        VkPipelineDepthStencilStateCreateInfo deserialize_VkPipelineDepthStencilStateCreateInfo(json &name);
    

        json serialize_VkGraphicsPipelineCreateInfo(VkGraphicsPipelineCreateInfo name);
        VkGraphicsPipelineCreateInfo deserialize_VkGraphicsPipelineCreateInfo(json &name);
    

        json serialize_VkPipelineCacheCreateInfo(VkPipelineCacheCreateInfo name);
        VkPipelineCacheCreateInfo deserialize_VkPipelineCacheCreateInfo(json &name);
    

        json serialize_VkPipelineCacheHeaderVersionOne(VkPipelineCacheHeaderVersionOne name);
        VkPipelineCacheHeaderVersionOne deserialize_VkPipelineCacheHeaderVersionOne(json &name);
    

        json serialize_VkPushConstantRange(VkPushConstantRange name);
        VkPushConstantRange deserialize_VkPushConstantRange(json &name);
    

        json serialize_VkPipelineLayoutCreateInfo(VkPipelineLayoutCreateInfo name);
        VkPipelineLayoutCreateInfo deserialize_VkPipelineLayoutCreateInfo(json &name);
    

        json serialize_VkSamplerCreateInfo(VkSamplerCreateInfo name);
        VkSamplerCreateInfo deserialize_VkSamplerCreateInfo(json &name);
    

        json serialize_VkCommandPoolCreateInfo(VkCommandPoolCreateInfo name);
        VkCommandPoolCreateInfo deserialize_VkCommandPoolCreateInfo(json &name);
    

        json serialize_VkCommandBufferAllocateInfo(VkCommandBufferAllocateInfo name);
        VkCommandBufferAllocateInfo deserialize_VkCommandBufferAllocateInfo(json &name);
    

        json serialize_VkCommandBufferInheritanceInfo(VkCommandBufferInheritanceInfo name);
        VkCommandBufferInheritanceInfo deserialize_VkCommandBufferInheritanceInfo(json &name);
    

        json serialize_VkCommandBufferBeginInfo(VkCommandBufferBeginInfo name);
        VkCommandBufferBeginInfo deserialize_VkCommandBufferBeginInfo(json &name);
    

        json serialize_VkRenderPassBeginInfo(VkRenderPassBeginInfo name);
        VkRenderPassBeginInfo deserialize_VkRenderPassBeginInfo(json &name);
    

        json serialize_VkClearColorValue(VkClearColorValue name);
        VkClearColorValue deserialize_VkClearColorValue(json &name);
    

        json serialize_VkClearDepthStencilValue(VkClearDepthStencilValue name);
        VkClearDepthStencilValue deserialize_VkClearDepthStencilValue(json &name);
    

        json serialize_VkClearValue(VkClearValue name);
        VkClearValue deserialize_VkClearValue(json &name);
    

        json serialize_VkClearAttachment(VkClearAttachment name);
        VkClearAttachment deserialize_VkClearAttachment(json &name);
    

        json serialize_VkAttachmentDescription(VkAttachmentDescription name);
        VkAttachmentDescription deserialize_VkAttachmentDescription(json &name);
    

        json serialize_VkAttachmentReference(VkAttachmentReference name);
        VkAttachmentReference deserialize_VkAttachmentReference(json &name);
    

        json serialize_VkSubpassDescription(VkSubpassDescription name);
        VkSubpassDescription deserialize_VkSubpassDescription(json &name);
    

        json serialize_VkSubpassDependency(VkSubpassDependency name);
        VkSubpassDependency deserialize_VkSubpassDependency(json &name);
    

        json serialize_VkRenderPassCreateInfo(VkRenderPassCreateInfo name);
        VkRenderPassCreateInfo deserialize_VkRenderPassCreateInfo(json &name);
    

        json serialize_VkEventCreateInfo(VkEventCreateInfo name);
        VkEventCreateInfo deserialize_VkEventCreateInfo(json &name);
    

        json serialize_VkFenceCreateInfo(VkFenceCreateInfo name);
        VkFenceCreateInfo deserialize_VkFenceCreateInfo(json &name);
    

        json serialize_VkPhysicalDeviceFeatures(VkPhysicalDeviceFeatures name);
        VkPhysicalDeviceFeatures deserialize_VkPhysicalDeviceFeatures(json &name);
    

        json serialize_VkPhysicalDeviceSparseProperties(VkPhysicalDeviceSparseProperties name);
        VkPhysicalDeviceSparseProperties deserialize_VkPhysicalDeviceSparseProperties(json &name);
    

        json serialize_VkPhysicalDeviceLimits(VkPhysicalDeviceLimits name);
        VkPhysicalDeviceLimits deserialize_VkPhysicalDeviceLimits(json &name);
    

        json serialize_VkSemaphoreCreateInfo(VkSemaphoreCreateInfo name);
        VkSemaphoreCreateInfo deserialize_VkSemaphoreCreateInfo(json &name);
    

        json serialize_VkQueryPoolCreateInfo(VkQueryPoolCreateInfo name);
        VkQueryPoolCreateInfo deserialize_VkQueryPoolCreateInfo(json &name);
    

        json serialize_VkFramebufferCreateInfo(VkFramebufferCreateInfo name);
        VkFramebufferCreateInfo deserialize_VkFramebufferCreateInfo(json &name);
    

        json serialize_VkDrawIndirectCommand(VkDrawIndirectCommand name);
        VkDrawIndirectCommand deserialize_VkDrawIndirectCommand(json &name);
    

        json serialize_VkDrawIndexedIndirectCommand(VkDrawIndexedIndirectCommand name);
        VkDrawIndexedIndirectCommand deserialize_VkDrawIndexedIndirectCommand(json &name);
    

        json serialize_VkDispatchIndirectCommand(VkDispatchIndirectCommand name);
        VkDispatchIndirectCommand deserialize_VkDispatchIndirectCommand(json &name);
    

        json serialize_VkMultiDrawInfoEXT(VkMultiDrawInfoEXT name);
        VkMultiDrawInfoEXT deserialize_VkMultiDrawInfoEXT(json &name);
    

        json serialize_VkMultiDrawIndexedInfoEXT(VkMultiDrawIndexedInfoEXT name);
        VkMultiDrawIndexedInfoEXT deserialize_VkMultiDrawIndexedInfoEXT(json &name);
    

        json serialize_VkSubmitInfo(VkSubmitInfo name);
        VkSubmitInfo deserialize_VkSubmitInfo(json &name);
    

        json serialize_VkDisplayPropertiesKHR(VkDisplayPropertiesKHR name);
        VkDisplayPropertiesKHR deserialize_VkDisplayPropertiesKHR(json &name);
    

        json serialize_VkDisplayPlanePropertiesKHR(VkDisplayPlanePropertiesKHR name);
        VkDisplayPlanePropertiesKHR deserialize_VkDisplayPlanePropertiesKHR(json &name);
    

        json serialize_VkDisplayModeParametersKHR(VkDisplayModeParametersKHR name);
        VkDisplayModeParametersKHR deserialize_VkDisplayModeParametersKHR(json &name);
    

        json serialize_VkDisplayModePropertiesKHR(VkDisplayModePropertiesKHR name);
        VkDisplayModePropertiesKHR deserialize_VkDisplayModePropertiesKHR(json &name);
    

        json serialize_VkDisplayModeCreateInfoKHR(VkDisplayModeCreateInfoKHR name);
        VkDisplayModeCreateInfoKHR deserialize_VkDisplayModeCreateInfoKHR(json &name);
    

        json serialize_VkDisplayPlaneCapabilitiesKHR(VkDisplayPlaneCapabilitiesKHR name);
        VkDisplayPlaneCapabilitiesKHR deserialize_VkDisplayPlaneCapabilitiesKHR(json &name);
    

        json serialize_VkDisplaySurfaceCreateInfoKHR(VkDisplaySurfaceCreateInfoKHR name);
        VkDisplaySurfaceCreateInfoKHR deserialize_VkDisplaySurfaceCreateInfoKHR(json &name);
    

        json serialize_VkDisplayPresentInfoKHR(VkDisplayPresentInfoKHR name);
        VkDisplayPresentInfoKHR deserialize_VkDisplayPresentInfoKHR(json &name);
    

        json serialize_VkSurfaceCapabilitiesKHR(VkSurfaceCapabilitiesKHR name);
        VkSurfaceCapabilitiesKHR deserialize_VkSurfaceCapabilitiesKHR(json &name);
    

        json serialize_VkXlibSurfaceCreateInfoKHR(VkXlibSurfaceCreateInfoKHR name);
        VkXlibSurfaceCreateInfoKHR deserialize_VkXlibSurfaceCreateInfoKHR(json &name);
    

        json serialize_VkXcbSurfaceCreateInfoKHR(VkXcbSurfaceCreateInfoKHR name);
        VkXcbSurfaceCreateInfoKHR deserialize_VkXcbSurfaceCreateInfoKHR(json &name);
    

        json serialize_VkSurfaceFormatKHR(VkSurfaceFormatKHR name);
        VkSurfaceFormatKHR deserialize_VkSurfaceFormatKHR(json &name);
    

        json serialize_VkSwapchainCreateInfoKHR(VkSwapchainCreateInfoKHR name);
        VkSwapchainCreateInfoKHR deserialize_VkSwapchainCreateInfoKHR(json &name);
    

        json serialize_VkPresentInfoKHR(VkPresentInfoKHR name);
        VkPresentInfoKHR deserialize_VkPresentInfoKHR(json &name);
    

        json serialize_VkDebugReportCallbackCreateInfoEXT(VkDebugReportCallbackCreateInfoEXT name);
        VkDebugReportCallbackCreateInfoEXT deserialize_VkDebugReportCallbackCreateInfoEXT(json &name);
    

        json serialize_VkValidationFlagsEXT(VkValidationFlagsEXT name);
        VkValidationFlagsEXT deserialize_VkValidationFlagsEXT(json &name);
    

        json serialize_VkValidationFeaturesEXT(VkValidationFeaturesEXT name);
        VkValidationFeaturesEXT deserialize_VkValidationFeaturesEXT(json &name);
    

        json serialize_VkPipelineRasterizationStateRasterizationOrderAMD(VkPipelineRasterizationStateRasterizationOrderAMD name);
        VkPipelineRasterizationStateRasterizationOrderAMD deserialize_VkPipelineRasterizationStateRasterizationOrderAMD(json &name);
    

        json serialize_VkDebugMarkerObjectNameInfoEXT(VkDebugMarkerObjectNameInfoEXT name);
        VkDebugMarkerObjectNameInfoEXT deserialize_VkDebugMarkerObjectNameInfoEXT(json &name);
    

        json serialize_VkDebugMarkerObjectTagInfoEXT(VkDebugMarkerObjectTagInfoEXT name);
        VkDebugMarkerObjectTagInfoEXT deserialize_VkDebugMarkerObjectTagInfoEXT(json &name);
    

        json serialize_VkDebugMarkerMarkerInfoEXT(VkDebugMarkerMarkerInfoEXT name);
        VkDebugMarkerMarkerInfoEXT deserialize_VkDebugMarkerMarkerInfoEXT(json &name);
    

        json serialize_VkDedicatedAllocationImageCreateInfoNV(VkDedicatedAllocationImageCreateInfoNV name);
        VkDedicatedAllocationImageCreateInfoNV deserialize_VkDedicatedAllocationImageCreateInfoNV(json &name);
    

        json serialize_VkDedicatedAllocationBufferCreateInfoNV(VkDedicatedAllocationBufferCreateInfoNV name);
        VkDedicatedAllocationBufferCreateInfoNV deserialize_VkDedicatedAllocationBufferCreateInfoNV(json &name);
    

        json serialize_VkDedicatedAllocationMemoryAllocateInfoNV(VkDedicatedAllocationMemoryAllocateInfoNV name);
        VkDedicatedAllocationMemoryAllocateInfoNV deserialize_VkDedicatedAllocationMemoryAllocateInfoNV(json &name);
    

        json serialize_VkExternalImageFormatPropertiesNV(VkExternalImageFormatPropertiesNV name);
        VkExternalImageFormatPropertiesNV deserialize_VkExternalImageFormatPropertiesNV(json &name);
    

        json serialize_VkExternalMemoryImageCreateInfoNV(VkExternalMemoryImageCreateInfoNV name);
        VkExternalMemoryImageCreateInfoNV deserialize_VkExternalMemoryImageCreateInfoNV(json &name);
    

        json serialize_VkExportMemoryAllocateInfoNV(VkExportMemoryAllocateInfoNV name);
        VkExportMemoryAllocateInfoNV deserialize_VkExportMemoryAllocateInfoNV(json &name);
    

        json serialize_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV name);
        VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV deserialize_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV(json &name);
    

        json serialize_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV name);
        VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV deserialize_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(json &name);
    

        json serialize_VkDevicePrivateDataCreateInfo(VkDevicePrivateDataCreateInfo name);
        VkDevicePrivateDataCreateInfo deserialize_VkDevicePrivateDataCreateInfo(json &name);
    

        json serialize_VkDevicePrivateDataCreateInfoEXT(VkDevicePrivateDataCreateInfoEXT name);
        VkDevicePrivateDataCreateInfoEXT deserialize_VkDevicePrivateDataCreateInfoEXT(json &name);
    

        json serialize_VkPrivateDataSlotCreateInfo(VkPrivateDataSlotCreateInfo name);
        VkPrivateDataSlotCreateInfo deserialize_VkPrivateDataSlotCreateInfo(json &name);
    

        json serialize_VkPrivateDataSlotCreateInfoEXT(VkPrivateDataSlotCreateInfoEXT name);
        VkPrivateDataSlotCreateInfoEXT deserialize_VkPrivateDataSlotCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDevicePrivateDataFeatures(VkPhysicalDevicePrivateDataFeatures name);
        VkPhysicalDevicePrivateDataFeatures deserialize_VkPhysicalDevicePrivateDataFeatures(json &name);
    

        json serialize_VkPhysicalDevicePrivateDataFeaturesEXT(VkPhysicalDevicePrivateDataFeaturesEXT name);
        VkPhysicalDevicePrivateDataFeaturesEXT deserialize_VkPhysicalDevicePrivateDataFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV(VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV name);
        VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV deserialize_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV(json &name);
    

        json serialize_VkPhysicalDeviceMultiDrawPropertiesEXT(VkPhysicalDeviceMultiDrawPropertiesEXT name);
        VkPhysicalDeviceMultiDrawPropertiesEXT deserialize_VkPhysicalDeviceMultiDrawPropertiesEXT(json &name);
    

        json serialize_VkGraphicsShaderGroupCreateInfoNV(VkGraphicsShaderGroupCreateInfoNV name);
        VkGraphicsShaderGroupCreateInfoNV deserialize_VkGraphicsShaderGroupCreateInfoNV(json &name);
    

        json serialize_VkGraphicsPipelineShaderGroupsCreateInfoNV(VkGraphicsPipelineShaderGroupsCreateInfoNV name);
        VkGraphicsPipelineShaderGroupsCreateInfoNV deserialize_VkGraphicsPipelineShaderGroupsCreateInfoNV(json &name);
    

        json serialize_VkBindShaderGroupIndirectCommandNV(VkBindShaderGroupIndirectCommandNV name);
        VkBindShaderGroupIndirectCommandNV deserialize_VkBindShaderGroupIndirectCommandNV(json &name);
    

        json serialize_VkBindIndexBufferIndirectCommandNV(VkBindIndexBufferIndirectCommandNV name);
        VkBindIndexBufferIndirectCommandNV deserialize_VkBindIndexBufferIndirectCommandNV(json &name);
    

        json serialize_VkBindVertexBufferIndirectCommandNV(VkBindVertexBufferIndirectCommandNV name);
        VkBindVertexBufferIndirectCommandNV deserialize_VkBindVertexBufferIndirectCommandNV(json &name);
    

        json serialize_VkSetStateFlagsIndirectCommandNV(VkSetStateFlagsIndirectCommandNV name);
        VkSetStateFlagsIndirectCommandNV deserialize_VkSetStateFlagsIndirectCommandNV(json &name);
    

        json serialize_VkIndirectCommandsStreamNV(VkIndirectCommandsStreamNV name);
        VkIndirectCommandsStreamNV deserialize_VkIndirectCommandsStreamNV(json &name);
    

        json serialize_VkIndirectCommandsLayoutTokenNV(VkIndirectCommandsLayoutTokenNV name);
        VkIndirectCommandsLayoutTokenNV deserialize_VkIndirectCommandsLayoutTokenNV(json &name);
    

        json serialize_VkIndirectCommandsLayoutCreateInfoNV(VkIndirectCommandsLayoutCreateInfoNV name);
        VkIndirectCommandsLayoutCreateInfoNV deserialize_VkIndirectCommandsLayoutCreateInfoNV(json &name);
    

        json serialize_VkGeneratedCommandsInfoNV(VkGeneratedCommandsInfoNV name);
        VkGeneratedCommandsInfoNV deserialize_VkGeneratedCommandsInfoNV(json &name);
    

        json serialize_VkGeneratedCommandsMemoryRequirementsInfoNV(VkGeneratedCommandsMemoryRequirementsInfoNV name);
        VkGeneratedCommandsMemoryRequirementsInfoNV deserialize_VkGeneratedCommandsMemoryRequirementsInfoNV(json &name);
    

        json serialize_VkPipelineIndirectDeviceAddressInfoNV(VkPipelineIndirectDeviceAddressInfoNV name);
        VkPipelineIndirectDeviceAddressInfoNV deserialize_VkPipelineIndirectDeviceAddressInfoNV(json &name);
    

        json serialize_VkBindPipelineIndirectCommandNV(VkBindPipelineIndirectCommandNV name);
        VkBindPipelineIndirectCommandNV deserialize_VkBindPipelineIndirectCommandNV(json &name);
    

        json serialize_VkPhysicalDeviceFeatures2(VkPhysicalDeviceFeatures2 name);
        VkPhysicalDeviceFeatures2 deserialize_VkPhysicalDeviceFeatures2(json &name);
    

        json serialize_VkPhysicalDeviceFeatures2KHR(VkPhysicalDeviceFeatures2KHR name);
        VkPhysicalDeviceFeatures2KHR deserialize_VkPhysicalDeviceFeatures2KHR(json &name);
    

        json serialize_VkPhysicalDeviceProperties2(VkPhysicalDeviceProperties2 name);
        VkPhysicalDeviceProperties2 deserialize_VkPhysicalDeviceProperties2(json &name);
    

        json serialize_VkPhysicalDeviceProperties2KHR(VkPhysicalDeviceProperties2KHR name);
        VkPhysicalDeviceProperties2KHR deserialize_VkPhysicalDeviceProperties2KHR(json &name);
    

        json serialize_VkFormatProperties2(VkFormatProperties2 name);
        VkFormatProperties2 deserialize_VkFormatProperties2(json &name);
    

        json serialize_VkFormatProperties2KHR(VkFormatProperties2KHR name);
        VkFormatProperties2KHR deserialize_VkFormatProperties2KHR(json &name);
    

        json serialize_VkImageFormatProperties2(VkImageFormatProperties2 name);
        VkImageFormatProperties2 deserialize_VkImageFormatProperties2(json &name);
    

        json serialize_VkImageFormatProperties2KHR(VkImageFormatProperties2KHR name);
        VkImageFormatProperties2KHR deserialize_VkImageFormatProperties2KHR(json &name);
    

        json serialize_VkPhysicalDeviceImageFormatInfo2(VkPhysicalDeviceImageFormatInfo2 name);
        VkPhysicalDeviceImageFormatInfo2 deserialize_VkPhysicalDeviceImageFormatInfo2(json &name);
    

        json serialize_VkPhysicalDeviceImageFormatInfo2KHR(VkPhysicalDeviceImageFormatInfo2KHR name);
        VkPhysicalDeviceImageFormatInfo2KHR deserialize_VkPhysicalDeviceImageFormatInfo2KHR(json &name);
    

        json serialize_VkQueueFamilyProperties2(VkQueueFamilyProperties2 name);
        VkQueueFamilyProperties2 deserialize_VkQueueFamilyProperties2(json &name);
    

        json serialize_VkQueueFamilyProperties2KHR(VkQueueFamilyProperties2KHR name);
        VkQueueFamilyProperties2KHR deserialize_VkQueueFamilyProperties2KHR(json &name);
    

        json serialize_VkPhysicalDeviceMemoryProperties2(VkPhysicalDeviceMemoryProperties2 name);
        VkPhysicalDeviceMemoryProperties2 deserialize_VkPhysicalDeviceMemoryProperties2(json &name);
    

        json serialize_VkPhysicalDeviceMemoryProperties2KHR(VkPhysicalDeviceMemoryProperties2KHR name);
        VkPhysicalDeviceMemoryProperties2KHR deserialize_VkPhysicalDeviceMemoryProperties2KHR(json &name);
    

        json serialize_VkSparseImageFormatProperties2(VkSparseImageFormatProperties2 name);
        VkSparseImageFormatProperties2 deserialize_VkSparseImageFormatProperties2(json &name);
    

        json serialize_VkSparseImageFormatProperties2KHR(VkSparseImageFormatProperties2KHR name);
        VkSparseImageFormatProperties2KHR deserialize_VkSparseImageFormatProperties2KHR(json &name);
    

        json serialize_VkPhysicalDeviceSparseImageFormatInfo2(VkPhysicalDeviceSparseImageFormatInfo2 name);
        VkPhysicalDeviceSparseImageFormatInfo2 deserialize_VkPhysicalDeviceSparseImageFormatInfo2(json &name);
    

        json serialize_VkPhysicalDeviceSparseImageFormatInfo2KHR(VkPhysicalDeviceSparseImageFormatInfo2KHR name);
        VkPhysicalDeviceSparseImageFormatInfo2KHR deserialize_VkPhysicalDeviceSparseImageFormatInfo2KHR(json &name);
    

        json serialize_VkPhysicalDevicePushDescriptorPropertiesKHR(VkPhysicalDevicePushDescriptorPropertiesKHR name);
        VkPhysicalDevicePushDescriptorPropertiesKHR deserialize_VkPhysicalDevicePushDescriptorPropertiesKHR(json &name);
    

        json serialize_VkConformanceVersion(VkConformanceVersion name);
        VkConformanceVersion deserialize_VkConformanceVersion(json &name);
    

        json serialize_VkConformanceVersionKHR(VkConformanceVersionKHR name);
        VkConformanceVersionKHR deserialize_VkConformanceVersionKHR(json &name);
    

        json serialize_VkPhysicalDeviceDriverProperties(VkPhysicalDeviceDriverProperties name);
        VkPhysicalDeviceDriverProperties deserialize_VkPhysicalDeviceDriverProperties(json &name);
    

        json serialize_VkPhysicalDeviceDriverPropertiesKHR(VkPhysicalDeviceDriverPropertiesKHR name);
        VkPhysicalDeviceDriverPropertiesKHR deserialize_VkPhysicalDeviceDriverPropertiesKHR(json &name);
    

        json serialize_VkPresentRegionsKHR(VkPresentRegionsKHR name);
        VkPresentRegionsKHR deserialize_VkPresentRegionsKHR(json &name);
    

        json serialize_VkPresentRegionKHR(VkPresentRegionKHR name);
        VkPresentRegionKHR deserialize_VkPresentRegionKHR(json &name);
    

        json serialize_VkRectLayerKHR(VkRectLayerKHR name);
        VkRectLayerKHR deserialize_VkRectLayerKHR(json &name);
    

        json serialize_VkPhysicalDeviceVariablePointersFeatures(VkPhysicalDeviceVariablePointersFeatures name);
        VkPhysicalDeviceVariablePointersFeatures deserialize_VkPhysicalDeviceVariablePointersFeatures(json &name);
    

        json serialize_VkPhysicalDeviceVariablePointersFeaturesKHR(VkPhysicalDeviceVariablePointersFeaturesKHR name);
        VkPhysicalDeviceVariablePointersFeaturesKHR deserialize_VkPhysicalDeviceVariablePointersFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceVariablePointerFeaturesKHR(VkPhysicalDeviceVariablePointerFeaturesKHR name);
        VkPhysicalDeviceVariablePointerFeaturesKHR deserialize_VkPhysicalDeviceVariablePointerFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceVariablePointerFeatures(VkPhysicalDeviceVariablePointerFeatures name);
        VkPhysicalDeviceVariablePointerFeatures deserialize_VkPhysicalDeviceVariablePointerFeatures(json &name);
    

        json serialize_VkExternalMemoryProperties(VkExternalMemoryProperties name);
        VkExternalMemoryProperties deserialize_VkExternalMemoryProperties(json &name);
    

        json serialize_VkExternalMemoryPropertiesKHR(VkExternalMemoryPropertiesKHR name);
        VkExternalMemoryPropertiesKHR deserialize_VkExternalMemoryPropertiesKHR(json &name);
    

        json serialize_VkPhysicalDeviceExternalImageFormatInfo(VkPhysicalDeviceExternalImageFormatInfo name);
        VkPhysicalDeviceExternalImageFormatInfo deserialize_VkPhysicalDeviceExternalImageFormatInfo(json &name);
    

        json serialize_VkPhysicalDeviceExternalImageFormatInfoKHR(VkPhysicalDeviceExternalImageFormatInfoKHR name);
        VkPhysicalDeviceExternalImageFormatInfoKHR deserialize_VkPhysicalDeviceExternalImageFormatInfoKHR(json &name);
    

        json serialize_VkExternalImageFormatProperties(VkExternalImageFormatProperties name);
        VkExternalImageFormatProperties deserialize_VkExternalImageFormatProperties(json &name);
    

        json serialize_VkExternalImageFormatPropertiesKHR(VkExternalImageFormatPropertiesKHR name);
        VkExternalImageFormatPropertiesKHR deserialize_VkExternalImageFormatPropertiesKHR(json &name);
    

        json serialize_VkPhysicalDeviceExternalBufferInfo(VkPhysicalDeviceExternalBufferInfo name);
        VkPhysicalDeviceExternalBufferInfo deserialize_VkPhysicalDeviceExternalBufferInfo(json &name);
    

        json serialize_VkPhysicalDeviceExternalBufferInfoKHR(VkPhysicalDeviceExternalBufferInfoKHR name);
        VkPhysicalDeviceExternalBufferInfoKHR deserialize_VkPhysicalDeviceExternalBufferInfoKHR(json &name);
    

        json serialize_VkExternalBufferProperties(VkExternalBufferProperties name);
        VkExternalBufferProperties deserialize_VkExternalBufferProperties(json &name);
    

        json serialize_VkExternalBufferPropertiesKHR(VkExternalBufferPropertiesKHR name);
        VkExternalBufferPropertiesKHR deserialize_VkExternalBufferPropertiesKHR(json &name);
    

        json serialize_VkPhysicalDeviceIDProperties(VkPhysicalDeviceIDProperties name);
        VkPhysicalDeviceIDProperties deserialize_VkPhysicalDeviceIDProperties(json &name);
    

        json serialize_VkPhysicalDeviceIDPropertiesKHR(VkPhysicalDeviceIDPropertiesKHR name);
        VkPhysicalDeviceIDPropertiesKHR deserialize_VkPhysicalDeviceIDPropertiesKHR(json &name);
    

        json serialize_VkExternalMemoryImageCreateInfo(VkExternalMemoryImageCreateInfo name);
        VkExternalMemoryImageCreateInfo deserialize_VkExternalMemoryImageCreateInfo(json &name);
    

        json serialize_VkExternalMemoryImageCreateInfoKHR(VkExternalMemoryImageCreateInfoKHR name);
        VkExternalMemoryImageCreateInfoKHR deserialize_VkExternalMemoryImageCreateInfoKHR(json &name);
    

        json serialize_VkExternalMemoryBufferCreateInfo(VkExternalMemoryBufferCreateInfo name);
        VkExternalMemoryBufferCreateInfo deserialize_VkExternalMemoryBufferCreateInfo(json &name);
    

        json serialize_VkExternalMemoryBufferCreateInfoKHR(VkExternalMemoryBufferCreateInfoKHR name);
        VkExternalMemoryBufferCreateInfoKHR deserialize_VkExternalMemoryBufferCreateInfoKHR(json &name);
    

        json serialize_VkExportMemoryAllocateInfo(VkExportMemoryAllocateInfo name);
        VkExportMemoryAllocateInfo deserialize_VkExportMemoryAllocateInfo(json &name);
    

        json serialize_VkExportMemoryAllocateInfoKHR(VkExportMemoryAllocateInfoKHR name);
        VkExportMemoryAllocateInfoKHR deserialize_VkExportMemoryAllocateInfoKHR(json &name);
    

        json serialize_VkImportMemoryFdInfoKHR(VkImportMemoryFdInfoKHR name);
        VkImportMemoryFdInfoKHR deserialize_VkImportMemoryFdInfoKHR(json &name);
    

        json serialize_VkMemoryFdPropertiesKHR(VkMemoryFdPropertiesKHR name);
        VkMemoryFdPropertiesKHR deserialize_VkMemoryFdPropertiesKHR(json &name);
    

        json serialize_VkMemoryGetFdInfoKHR(VkMemoryGetFdInfoKHR name);
        VkMemoryGetFdInfoKHR deserialize_VkMemoryGetFdInfoKHR(json &name);
    

        json serialize_VkPhysicalDeviceExternalSemaphoreInfo(VkPhysicalDeviceExternalSemaphoreInfo name);
        VkPhysicalDeviceExternalSemaphoreInfo deserialize_VkPhysicalDeviceExternalSemaphoreInfo(json &name);
    

        json serialize_VkPhysicalDeviceExternalSemaphoreInfoKHR(VkPhysicalDeviceExternalSemaphoreInfoKHR name);
        VkPhysicalDeviceExternalSemaphoreInfoKHR deserialize_VkPhysicalDeviceExternalSemaphoreInfoKHR(json &name);
    

        json serialize_VkExternalSemaphoreProperties(VkExternalSemaphoreProperties name);
        VkExternalSemaphoreProperties deserialize_VkExternalSemaphoreProperties(json &name);
    

        json serialize_VkExternalSemaphorePropertiesKHR(VkExternalSemaphorePropertiesKHR name);
        VkExternalSemaphorePropertiesKHR deserialize_VkExternalSemaphorePropertiesKHR(json &name);
    

        json serialize_VkExportSemaphoreCreateInfo(VkExportSemaphoreCreateInfo name);
        VkExportSemaphoreCreateInfo deserialize_VkExportSemaphoreCreateInfo(json &name);
    

        json serialize_VkExportSemaphoreCreateInfoKHR(VkExportSemaphoreCreateInfoKHR name);
        VkExportSemaphoreCreateInfoKHR deserialize_VkExportSemaphoreCreateInfoKHR(json &name);
    

        json serialize_VkImportSemaphoreFdInfoKHR(VkImportSemaphoreFdInfoKHR name);
        VkImportSemaphoreFdInfoKHR deserialize_VkImportSemaphoreFdInfoKHR(json &name);
    

        json serialize_VkSemaphoreGetFdInfoKHR(VkSemaphoreGetFdInfoKHR name);
        VkSemaphoreGetFdInfoKHR deserialize_VkSemaphoreGetFdInfoKHR(json &name);
    

        json serialize_VkPhysicalDeviceExternalFenceInfo(VkPhysicalDeviceExternalFenceInfo name);
        VkPhysicalDeviceExternalFenceInfo deserialize_VkPhysicalDeviceExternalFenceInfo(json &name);
    

        json serialize_VkPhysicalDeviceExternalFenceInfoKHR(VkPhysicalDeviceExternalFenceInfoKHR name);
        VkPhysicalDeviceExternalFenceInfoKHR deserialize_VkPhysicalDeviceExternalFenceInfoKHR(json &name);
    

        json serialize_VkExternalFenceProperties(VkExternalFenceProperties name);
        VkExternalFenceProperties deserialize_VkExternalFenceProperties(json &name);
    

        json serialize_VkExternalFencePropertiesKHR(VkExternalFencePropertiesKHR name);
        VkExternalFencePropertiesKHR deserialize_VkExternalFencePropertiesKHR(json &name);
    

        json serialize_VkExportFenceCreateInfo(VkExportFenceCreateInfo name);
        VkExportFenceCreateInfo deserialize_VkExportFenceCreateInfo(json &name);
    

        json serialize_VkExportFenceCreateInfoKHR(VkExportFenceCreateInfoKHR name);
        VkExportFenceCreateInfoKHR deserialize_VkExportFenceCreateInfoKHR(json &name);
    

        json serialize_VkImportFenceFdInfoKHR(VkImportFenceFdInfoKHR name);
        VkImportFenceFdInfoKHR deserialize_VkImportFenceFdInfoKHR(json &name);
    

        json serialize_VkFenceGetFdInfoKHR(VkFenceGetFdInfoKHR name);
        VkFenceGetFdInfoKHR deserialize_VkFenceGetFdInfoKHR(json &name);
    

        json serialize_VkPhysicalDeviceMultiviewFeatures(VkPhysicalDeviceMultiviewFeatures name);
        VkPhysicalDeviceMultiviewFeatures deserialize_VkPhysicalDeviceMultiviewFeatures(json &name);
    

        json serialize_VkPhysicalDeviceMultiviewFeaturesKHR(VkPhysicalDeviceMultiviewFeaturesKHR name);
        VkPhysicalDeviceMultiviewFeaturesKHR deserialize_VkPhysicalDeviceMultiviewFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceMultiviewProperties(VkPhysicalDeviceMultiviewProperties name);
        VkPhysicalDeviceMultiviewProperties deserialize_VkPhysicalDeviceMultiviewProperties(json &name);
    

        json serialize_VkPhysicalDeviceMultiviewPropertiesKHR(VkPhysicalDeviceMultiviewPropertiesKHR name);
        VkPhysicalDeviceMultiviewPropertiesKHR deserialize_VkPhysicalDeviceMultiviewPropertiesKHR(json &name);
    

        json serialize_VkRenderPassMultiviewCreateInfo(VkRenderPassMultiviewCreateInfo name);
        VkRenderPassMultiviewCreateInfo deserialize_VkRenderPassMultiviewCreateInfo(json &name);
    

        json serialize_VkRenderPassMultiviewCreateInfoKHR(VkRenderPassMultiviewCreateInfoKHR name);
        VkRenderPassMultiviewCreateInfoKHR deserialize_VkRenderPassMultiviewCreateInfoKHR(json &name);
    

        json serialize_VkSurfaceCapabilities2EXT(VkSurfaceCapabilities2EXT name);
        VkSurfaceCapabilities2EXT deserialize_VkSurfaceCapabilities2EXT(json &name);
    

        json serialize_VkDisplayPowerInfoEXT(VkDisplayPowerInfoEXT name);
        VkDisplayPowerInfoEXT deserialize_VkDisplayPowerInfoEXT(json &name);
    

        json serialize_VkDeviceEventInfoEXT(VkDeviceEventInfoEXT name);
        VkDeviceEventInfoEXT deserialize_VkDeviceEventInfoEXT(json &name);
    

        json serialize_VkDisplayEventInfoEXT(VkDisplayEventInfoEXT name);
        VkDisplayEventInfoEXT deserialize_VkDisplayEventInfoEXT(json &name);
    

        json serialize_VkSwapchainCounterCreateInfoEXT(VkSwapchainCounterCreateInfoEXT name);
        VkSwapchainCounterCreateInfoEXT deserialize_VkSwapchainCounterCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceGroupProperties(VkPhysicalDeviceGroupProperties name);
        VkPhysicalDeviceGroupProperties deserialize_VkPhysicalDeviceGroupProperties(json &name);
    

        json serialize_VkPhysicalDeviceGroupPropertiesKHR(VkPhysicalDeviceGroupPropertiesKHR name);
        VkPhysicalDeviceGroupPropertiesKHR deserialize_VkPhysicalDeviceGroupPropertiesKHR(json &name);
    

        json serialize_VkMemoryAllocateFlagsInfo(VkMemoryAllocateFlagsInfo name);
        VkMemoryAllocateFlagsInfo deserialize_VkMemoryAllocateFlagsInfo(json &name);
    

        json serialize_VkMemoryAllocateFlagsInfoKHR(VkMemoryAllocateFlagsInfoKHR name);
        VkMemoryAllocateFlagsInfoKHR deserialize_VkMemoryAllocateFlagsInfoKHR(json &name);
    

        json serialize_VkBindBufferMemoryInfo(VkBindBufferMemoryInfo name);
        VkBindBufferMemoryInfo deserialize_VkBindBufferMemoryInfo(json &name);
    

        json serialize_VkBindBufferMemoryInfoKHR(VkBindBufferMemoryInfoKHR name);
        VkBindBufferMemoryInfoKHR deserialize_VkBindBufferMemoryInfoKHR(json &name);
    

        json serialize_VkBindBufferMemoryDeviceGroupInfo(VkBindBufferMemoryDeviceGroupInfo name);
        VkBindBufferMemoryDeviceGroupInfo deserialize_VkBindBufferMemoryDeviceGroupInfo(json &name);
    

        json serialize_VkBindBufferMemoryDeviceGroupInfoKHR(VkBindBufferMemoryDeviceGroupInfoKHR name);
        VkBindBufferMemoryDeviceGroupInfoKHR deserialize_VkBindBufferMemoryDeviceGroupInfoKHR(json &name);
    

        json serialize_VkBindImageMemoryInfo(VkBindImageMemoryInfo name);
        VkBindImageMemoryInfo deserialize_VkBindImageMemoryInfo(json &name);
    

        json serialize_VkBindImageMemoryInfoKHR(VkBindImageMemoryInfoKHR name);
        VkBindImageMemoryInfoKHR deserialize_VkBindImageMemoryInfoKHR(json &name);
    

        json serialize_VkBindImageMemoryDeviceGroupInfo(VkBindImageMemoryDeviceGroupInfo name);
        VkBindImageMemoryDeviceGroupInfo deserialize_VkBindImageMemoryDeviceGroupInfo(json &name);
    

        json serialize_VkBindImageMemoryDeviceGroupInfoKHR(VkBindImageMemoryDeviceGroupInfoKHR name);
        VkBindImageMemoryDeviceGroupInfoKHR deserialize_VkBindImageMemoryDeviceGroupInfoKHR(json &name);
    

        json serialize_VkDeviceGroupRenderPassBeginInfo(VkDeviceGroupRenderPassBeginInfo name);
        VkDeviceGroupRenderPassBeginInfo deserialize_VkDeviceGroupRenderPassBeginInfo(json &name);
    

        json serialize_VkDeviceGroupRenderPassBeginInfoKHR(VkDeviceGroupRenderPassBeginInfoKHR name);
        VkDeviceGroupRenderPassBeginInfoKHR deserialize_VkDeviceGroupRenderPassBeginInfoKHR(json &name);
    

        json serialize_VkDeviceGroupCommandBufferBeginInfo(VkDeviceGroupCommandBufferBeginInfo name);
        VkDeviceGroupCommandBufferBeginInfo deserialize_VkDeviceGroupCommandBufferBeginInfo(json &name);
    

        json serialize_VkDeviceGroupCommandBufferBeginInfoKHR(VkDeviceGroupCommandBufferBeginInfoKHR name);
        VkDeviceGroupCommandBufferBeginInfoKHR deserialize_VkDeviceGroupCommandBufferBeginInfoKHR(json &name);
    

        json serialize_VkDeviceGroupSubmitInfo(VkDeviceGroupSubmitInfo name);
        VkDeviceGroupSubmitInfo deserialize_VkDeviceGroupSubmitInfo(json &name);
    

        json serialize_VkDeviceGroupSubmitInfoKHR(VkDeviceGroupSubmitInfoKHR name);
        VkDeviceGroupSubmitInfoKHR deserialize_VkDeviceGroupSubmitInfoKHR(json &name);
    

        json serialize_VkDeviceGroupBindSparseInfo(VkDeviceGroupBindSparseInfo name);
        VkDeviceGroupBindSparseInfo deserialize_VkDeviceGroupBindSparseInfo(json &name);
    

        json serialize_VkDeviceGroupBindSparseInfoKHR(VkDeviceGroupBindSparseInfoKHR name);
        VkDeviceGroupBindSparseInfoKHR deserialize_VkDeviceGroupBindSparseInfoKHR(json &name);
    

        json serialize_VkDeviceGroupPresentCapabilitiesKHR(VkDeviceGroupPresentCapabilitiesKHR name);
        VkDeviceGroupPresentCapabilitiesKHR deserialize_VkDeviceGroupPresentCapabilitiesKHR(json &name);
    

        json serialize_VkImageSwapchainCreateInfoKHR(VkImageSwapchainCreateInfoKHR name);
        VkImageSwapchainCreateInfoKHR deserialize_VkImageSwapchainCreateInfoKHR(json &name);
    

        json serialize_VkBindImageMemorySwapchainInfoKHR(VkBindImageMemorySwapchainInfoKHR name);
        VkBindImageMemorySwapchainInfoKHR deserialize_VkBindImageMemorySwapchainInfoKHR(json &name);
    

        json serialize_VkAcquireNextImageInfoKHR(VkAcquireNextImageInfoKHR name);
        VkAcquireNextImageInfoKHR deserialize_VkAcquireNextImageInfoKHR(json &name);
    

        json serialize_VkDeviceGroupPresentInfoKHR(VkDeviceGroupPresentInfoKHR name);
        VkDeviceGroupPresentInfoKHR deserialize_VkDeviceGroupPresentInfoKHR(json &name);
    

        json serialize_VkDeviceGroupDeviceCreateInfo(VkDeviceGroupDeviceCreateInfo name);
        VkDeviceGroupDeviceCreateInfo deserialize_VkDeviceGroupDeviceCreateInfo(json &name);
    

        json serialize_VkDeviceGroupDeviceCreateInfoKHR(VkDeviceGroupDeviceCreateInfoKHR name);
        VkDeviceGroupDeviceCreateInfoKHR deserialize_VkDeviceGroupDeviceCreateInfoKHR(json &name);
    

        json serialize_VkDeviceGroupSwapchainCreateInfoKHR(VkDeviceGroupSwapchainCreateInfoKHR name);
        VkDeviceGroupSwapchainCreateInfoKHR deserialize_VkDeviceGroupSwapchainCreateInfoKHR(json &name);
    

        json serialize_VkDescriptorUpdateTemplateEntry(VkDescriptorUpdateTemplateEntry name);
        VkDescriptorUpdateTemplateEntry deserialize_VkDescriptorUpdateTemplateEntry(json &name);
    

        json serialize_VkDescriptorUpdateTemplateEntryKHR(VkDescriptorUpdateTemplateEntryKHR name);
        VkDescriptorUpdateTemplateEntryKHR deserialize_VkDescriptorUpdateTemplateEntryKHR(json &name);
    

        json serialize_VkDescriptorUpdateTemplateCreateInfo(VkDescriptorUpdateTemplateCreateInfo name);
        VkDescriptorUpdateTemplateCreateInfo deserialize_VkDescriptorUpdateTemplateCreateInfo(json &name);
    

        json serialize_VkDescriptorUpdateTemplateCreateInfoKHR(VkDescriptorUpdateTemplateCreateInfoKHR name);
        VkDescriptorUpdateTemplateCreateInfoKHR deserialize_VkDescriptorUpdateTemplateCreateInfoKHR(json &name);
    

        json serialize_VkXYColorEXT(VkXYColorEXT name);
        VkXYColorEXT deserialize_VkXYColorEXT(json &name);
    

        json serialize_VkPhysicalDevicePresentIdFeaturesKHR(VkPhysicalDevicePresentIdFeaturesKHR name);
        VkPhysicalDevicePresentIdFeaturesKHR deserialize_VkPhysicalDevicePresentIdFeaturesKHR(json &name);
    

        json serialize_VkPresentIdKHR(VkPresentIdKHR name);
        VkPresentIdKHR deserialize_VkPresentIdKHR(json &name);
    

        json serialize_VkPhysicalDevicePresentWaitFeaturesKHR(VkPhysicalDevicePresentWaitFeaturesKHR name);
        VkPhysicalDevicePresentWaitFeaturesKHR deserialize_VkPhysicalDevicePresentWaitFeaturesKHR(json &name);
    

        json serialize_VkHdrMetadataEXT(VkHdrMetadataEXT name);
        VkHdrMetadataEXT deserialize_VkHdrMetadataEXT(json &name);
    

        json serialize_VkDisplayNativeHdrSurfaceCapabilitiesAMD(VkDisplayNativeHdrSurfaceCapabilitiesAMD name);
        VkDisplayNativeHdrSurfaceCapabilitiesAMD deserialize_VkDisplayNativeHdrSurfaceCapabilitiesAMD(json &name);
    

        json serialize_VkSwapchainDisplayNativeHdrCreateInfoAMD(VkSwapchainDisplayNativeHdrCreateInfoAMD name);
        VkSwapchainDisplayNativeHdrCreateInfoAMD deserialize_VkSwapchainDisplayNativeHdrCreateInfoAMD(json &name);
    

        json serialize_VkRefreshCycleDurationGOOGLE(VkRefreshCycleDurationGOOGLE name);
        VkRefreshCycleDurationGOOGLE deserialize_VkRefreshCycleDurationGOOGLE(json &name);
    

        json serialize_VkPastPresentationTimingGOOGLE(VkPastPresentationTimingGOOGLE name);
        VkPastPresentationTimingGOOGLE deserialize_VkPastPresentationTimingGOOGLE(json &name);
    

        json serialize_VkPresentTimesInfoGOOGLE(VkPresentTimesInfoGOOGLE name);
        VkPresentTimesInfoGOOGLE deserialize_VkPresentTimesInfoGOOGLE(json &name);
    

        json serialize_VkPresentTimeGOOGLE(VkPresentTimeGOOGLE name);
        VkPresentTimeGOOGLE deserialize_VkPresentTimeGOOGLE(json &name);
    

        json serialize_VkViewportWScalingNV(VkViewportWScalingNV name);
        VkViewportWScalingNV deserialize_VkViewportWScalingNV(json &name);
    

        json serialize_VkPipelineViewportWScalingStateCreateInfoNV(VkPipelineViewportWScalingStateCreateInfoNV name);
        VkPipelineViewportWScalingStateCreateInfoNV deserialize_VkPipelineViewportWScalingStateCreateInfoNV(json &name);
    

        json serialize_VkViewportSwizzleNV(VkViewportSwizzleNV name);
        VkViewportSwizzleNV deserialize_VkViewportSwizzleNV(json &name);
    

        json serialize_VkPipelineViewportSwizzleStateCreateInfoNV(VkPipelineViewportSwizzleStateCreateInfoNV name);
        VkPipelineViewportSwizzleStateCreateInfoNV deserialize_VkPipelineViewportSwizzleStateCreateInfoNV(json &name);
    

        json serialize_VkPhysicalDeviceDiscardRectanglePropertiesEXT(VkPhysicalDeviceDiscardRectanglePropertiesEXT name);
        VkPhysicalDeviceDiscardRectanglePropertiesEXT deserialize_VkPhysicalDeviceDiscardRectanglePropertiesEXT(json &name);
    

        json serialize_VkPipelineDiscardRectangleStateCreateInfoEXT(VkPipelineDiscardRectangleStateCreateInfoEXT name);
        VkPipelineDiscardRectangleStateCreateInfoEXT deserialize_VkPipelineDiscardRectangleStateCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX name);
        VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX deserialize_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(json &name);
    

        json serialize_VkInputAttachmentAspectReference(VkInputAttachmentAspectReference name);
        VkInputAttachmentAspectReference deserialize_VkInputAttachmentAspectReference(json &name);
    

        json serialize_VkInputAttachmentAspectReferenceKHR(VkInputAttachmentAspectReferenceKHR name);
        VkInputAttachmentAspectReferenceKHR deserialize_VkInputAttachmentAspectReferenceKHR(json &name);
    

        json serialize_VkRenderPassInputAttachmentAspectCreateInfo(VkRenderPassInputAttachmentAspectCreateInfo name);
        VkRenderPassInputAttachmentAspectCreateInfo deserialize_VkRenderPassInputAttachmentAspectCreateInfo(json &name);
    

        json serialize_VkRenderPassInputAttachmentAspectCreateInfoKHR(VkRenderPassInputAttachmentAspectCreateInfoKHR name);
        VkRenderPassInputAttachmentAspectCreateInfoKHR deserialize_VkRenderPassInputAttachmentAspectCreateInfoKHR(json &name);
    

        json serialize_VkPhysicalDeviceSurfaceInfo2KHR(VkPhysicalDeviceSurfaceInfo2KHR name);
        VkPhysicalDeviceSurfaceInfo2KHR deserialize_VkPhysicalDeviceSurfaceInfo2KHR(json &name);
    

        json serialize_VkSurfaceCapabilities2KHR(VkSurfaceCapabilities2KHR name);
        VkSurfaceCapabilities2KHR deserialize_VkSurfaceCapabilities2KHR(json &name);
    

        json serialize_VkSurfaceFormat2KHR(VkSurfaceFormat2KHR name);
        VkSurfaceFormat2KHR deserialize_VkSurfaceFormat2KHR(json &name);
    

        json serialize_VkDisplayProperties2KHR(VkDisplayProperties2KHR name);
        VkDisplayProperties2KHR deserialize_VkDisplayProperties2KHR(json &name);
    

        json serialize_VkDisplayPlaneProperties2KHR(VkDisplayPlaneProperties2KHR name);
        VkDisplayPlaneProperties2KHR deserialize_VkDisplayPlaneProperties2KHR(json &name);
    

        json serialize_VkDisplayModeProperties2KHR(VkDisplayModeProperties2KHR name);
        VkDisplayModeProperties2KHR deserialize_VkDisplayModeProperties2KHR(json &name);
    

        json serialize_VkDisplayPlaneInfo2KHR(VkDisplayPlaneInfo2KHR name);
        VkDisplayPlaneInfo2KHR deserialize_VkDisplayPlaneInfo2KHR(json &name);
    

        json serialize_VkDisplayPlaneCapabilities2KHR(VkDisplayPlaneCapabilities2KHR name);
        VkDisplayPlaneCapabilities2KHR deserialize_VkDisplayPlaneCapabilities2KHR(json &name);
    

        json serialize_VkSharedPresentSurfaceCapabilitiesKHR(VkSharedPresentSurfaceCapabilitiesKHR name);
        VkSharedPresentSurfaceCapabilitiesKHR deserialize_VkSharedPresentSurfaceCapabilitiesKHR(json &name);
    

        json serialize_VkPhysicalDevice16BitStorageFeatures(VkPhysicalDevice16BitStorageFeatures name);
        VkPhysicalDevice16BitStorageFeatures deserialize_VkPhysicalDevice16BitStorageFeatures(json &name);
    

        json serialize_VkPhysicalDevice16BitStorageFeaturesKHR(VkPhysicalDevice16BitStorageFeaturesKHR name);
        VkPhysicalDevice16BitStorageFeaturesKHR deserialize_VkPhysicalDevice16BitStorageFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceSubgroupProperties(VkPhysicalDeviceSubgroupProperties name);
        VkPhysicalDeviceSubgroupProperties deserialize_VkPhysicalDeviceSubgroupProperties(json &name);
    

        json serialize_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures name);
        VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures deserialize_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures(json &name);
    

        json serialize_VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR(VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR name);
        VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR deserialize_VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR(json &name);
    

        json serialize_VkBufferMemoryRequirementsInfo2(VkBufferMemoryRequirementsInfo2 name);
        VkBufferMemoryRequirementsInfo2 deserialize_VkBufferMemoryRequirementsInfo2(json &name);
    

        json serialize_VkBufferMemoryRequirementsInfo2KHR(VkBufferMemoryRequirementsInfo2KHR name);
        VkBufferMemoryRequirementsInfo2KHR deserialize_VkBufferMemoryRequirementsInfo2KHR(json &name);
    

        json serialize_VkDeviceBufferMemoryRequirements(VkDeviceBufferMemoryRequirements name);
        VkDeviceBufferMemoryRequirements deserialize_VkDeviceBufferMemoryRequirements(json &name);
    

        json serialize_VkDeviceBufferMemoryRequirementsKHR(VkDeviceBufferMemoryRequirementsKHR name);
        VkDeviceBufferMemoryRequirementsKHR deserialize_VkDeviceBufferMemoryRequirementsKHR(json &name);
    

        json serialize_VkImageMemoryRequirementsInfo2(VkImageMemoryRequirementsInfo2 name);
        VkImageMemoryRequirementsInfo2 deserialize_VkImageMemoryRequirementsInfo2(json &name);
    

        json serialize_VkImageMemoryRequirementsInfo2KHR(VkImageMemoryRequirementsInfo2KHR name);
        VkImageMemoryRequirementsInfo2KHR deserialize_VkImageMemoryRequirementsInfo2KHR(json &name);
    

        json serialize_VkImageSparseMemoryRequirementsInfo2(VkImageSparseMemoryRequirementsInfo2 name);
        VkImageSparseMemoryRequirementsInfo2 deserialize_VkImageSparseMemoryRequirementsInfo2(json &name);
    

        json serialize_VkImageSparseMemoryRequirementsInfo2KHR(VkImageSparseMemoryRequirementsInfo2KHR name);
        VkImageSparseMemoryRequirementsInfo2KHR deserialize_VkImageSparseMemoryRequirementsInfo2KHR(json &name);
    

        json serialize_VkDeviceImageMemoryRequirements(VkDeviceImageMemoryRequirements name);
        VkDeviceImageMemoryRequirements deserialize_VkDeviceImageMemoryRequirements(json &name);
    

        json serialize_VkDeviceImageMemoryRequirementsKHR(VkDeviceImageMemoryRequirementsKHR name);
        VkDeviceImageMemoryRequirementsKHR deserialize_VkDeviceImageMemoryRequirementsKHR(json &name);
    

        json serialize_VkMemoryRequirements2(VkMemoryRequirements2 name);
        VkMemoryRequirements2 deserialize_VkMemoryRequirements2(json &name);
    

        json serialize_VkMemoryRequirements2KHR(VkMemoryRequirements2KHR name);
        VkMemoryRequirements2KHR deserialize_VkMemoryRequirements2KHR(json &name);
    

        json serialize_VkSparseImageMemoryRequirements2(VkSparseImageMemoryRequirements2 name);
        VkSparseImageMemoryRequirements2 deserialize_VkSparseImageMemoryRequirements2(json &name);
    

        json serialize_VkSparseImageMemoryRequirements2KHR(VkSparseImageMemoryRequirements2KHR name);
        VkSparseImageMemoryRequirements2KHR deserialize_VkSparseImageMemoryRequirements2KHR(json &name);
    

        json serialize_VkPhysicalDevicePointClippingProperties(VkPhysicalDevicePointClippingProperties name);
        VkPhysicalDevicePointClippingProperties deserialize_VkPhysicalDevicePointClippingProperties(json &name);
    

        json serialize_VkPhysicalDevicePointClippingPropertiesKHR(VkPhysicalDevicePointClippingPropertiesKHR name);
        VkPhysicalDevicePointClippingPropertiesKHR deserialize_VkPhysicalDevicePointClippingPropertiesKHR(json &name);
    

        json serialize_VkMemoryDedicatedRequirements(VkMemoryDedicatedRequirements name);
        VkMemoryDedicatedRequirements deserialize_VkMemoryDedicatedRequirements(json &name);
    

        json serialize_VkMemoryDedicatedRequirementsKHR(VkMemoryDedicatedRequirementsKHR name);
        VkMemoryDedicatedRequirementsKHR deserialize_VkMemoryDedicatedRequirementsKHR(json &name);
    

        json serialize_VkMemoryDedicatedAllocateInfo(VkMemoryDedicatedAllocateInfo name);
        VkMemoryDedicatedAllocateInfo deserialize_VkMemoryDedicatedAllocateInfo(json &name);
    

        json serialize_VkMemoryDedicatedAllocateInfoKHR(VkMemoryDedicatedAllocateInfoKHR name);
        VkMemoryDedicatedAllocateInfoKHR deserialize_VkMemoryDedicatedAllocateInfoKHR(json &name);
    

        json serialize_VkImageViewUsageCreateInfo(VkImageViewUsageCreateInfo name);
        VkImageViewUsageCreateInfo deserialize_VkImageViewUsageCreateInfo(json &name);
    

        json serialize_VkImageViewSlicedCreateInfoEXT(VkImageViewSlicedCreateInfoEXT name);
        VkImageViewSlicedCreateInfoEXT deserialize_VkImageViewSlicedCreateInfoEXT(json &name);
    

        json serialize_VkImageViewUsageCreateInfoKHR(VkImageViewUsageCreateInfoKHR name);
        VkImageViewUsageCreateInfoKHR deserialize_VkImageViewUsageCreateInfoKHR(json &name);
    

        json serialize_VkPipelineTessellationDomainOriginStateCreateInfo(VkPipelineTessellationDomainOriginStateCreateInfo name);
        VkPipelineTessellationDomainOriginStateCreateInfo deserialize_VkPipelineTessellationDomainOriginStateCreateInfo(json &name);
    

        json serialize_VkPipelineTessellationDomainOriginStateCreateInfoKHR(VkPipelineTessellationDomainOriginStateCreateInfoKHR name);
        VkPipelineTessellationDomainOriginStateCreateInfoKHR deserialize_VkPipelineTessellationDomainOriginStateCreateInfoKHR(json &name);
    

        json serialize_VkSamplerYcbcrConversionInfo(VkSamplerYcbcrConversionInfo name);
        VkSamplerYcbcrConversionInfo deserialize_VkSamplerYcbcrConversionInfo(json &name);
    

        json serialize_VkSamplerYcbcrConversionInfoKHR(VkSamplerYcbcrConversionInfoKHR name);
        VkSamplerYcbcrConversionInfoKHR deserialize_VkSamplerYcbcrConversionInfoKHR(json &name);
    

        json serialize_VkSamplerYcbcrConversionCreateInfo(VkSamplerYcbcrConversionCreateInfo name);
        VkSamplerYcbcrConversionCreateInfo deserialize_VkSamplerYcbcrConversionCreateInfo(json &name);
    

        json serialize_VkSamplerYcbcrConversionCreateInfoKHR(VkSamplerYcbcrConversionCreateInfoKHR name);
        VkSamplerYcbcrConversionCreateInfoKHR deserialize_VkSamplerYcbcrConversionCreateInfoKHR(json &name);
    

        json serialize_VkBindImagePlaneMemoryInfo(VkBindImagePlaneMemoryInfo name);
        VkBindImagePlaneMemoryInfo deserialize_VkBindImagePlaneMemoryInfo(json &name);
    

        json serialize_VkBindImagePlaneMemoryInfoKHR(VkBindImagePlaneMemoryInfoKHR name);
        VkBindImagePlaneMemoryInfoKHR deserialize_VkBindImagePlaneMemoryInfoKHR(json &name);
    

        json serialize_VkImagePlaneMemoryRequirementsInfo(VkImagePlaneMemoryRequirementsInfo name);
        VkImagePlaneMemoryRequirementsInfo deserialize_VkImagePlaneMemoryRequirementsInfo(json &name);
    

        json serialize_VkImagePlaneMemoryRequirementsInfoKHR(VkImagePlaneMemoryRequirementsInfoKHR name);
        VkImagePlaneMemoryRequirementsInfoKHR deserialize_VkImagePlaneMemoryRequirementsInfoKHR(json &name);
    

        json serialize_VkPhysicalDeviceSamplerYcbcrConversionFeatures(VkPhysicalDeviceSamplerYcbcrConversionFeatures name);
        VkPhysicalDeviceSamplerYcbcrConversionFeatures deserialize_VkPhysicalDeviceSamplerYcbcrConversionFeatures(json &name);
    

        json serialize_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR(VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR name);
        VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR deserialize_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR(json &name);
    

        json serialize_VkSamplerYcbcrConversionImageFormatProperties(VkSamplerYcbcrConversionImageFormatProperties name);
        VkSamplerYcbcrConversionImageFormatProperties deserialize_VkSamplerYcbcrConversionImageFormatProperties(json &name);
    

        json serialize_VkSamplerYcbcrConversionImageFormatPropertiesKHR(VkSamplerYcbcrConversionImageFormatPropertiesKHR name);
        VkSamplerYcbcrConversionImageFormatPropertiesKHR deserialize_VkSamplerYcbcrConversionImageFormatPropertiesKHR(json &name);
    

        json serialize_VkTextureLODGatherFormatPropertiesAMD(VkTextureLODGatherFormatPropertiesAMD name);
        VkTextureLODGatherFormatPropertiesAMD deserialize_VkTextureLODGatherFormatPropertiesAMD(json &name);
    

        json serialize_VkConditionalRenderingBeginInfoEXT(VkConditionalRenderingBeginInfoEXT name);
        VkConditionalRenderingBeginInfoEXT deserialize_VkConditionalRenderingBeginInfoEXT(json &name);
    

        json serialize_VkProtectedSubmitInfo(VkProtectedSubmitInfo name);
        VkProtectedSubmitInfo deserialize_VkProtectedSubmitInfo(json &name);
    

        json serialize_VkPhysicalDeviceProtectedMemoryFeatures(VkPhysicalDeviceProtectedMemoryFeatures name);
        VkPhysicalDeviceProtectedMemoryFeatures deserialize_VkPhysicalDeviceProtectedMemoryFeatures(json &name);
    

        json serialize_VkPhysicalDeviceProtectedMemoryProperties(VkPhysicalDeviceProtectedMemoryProperties name);
        VkPhysicalDeviceProtectedMemoryProperties deserialize_VkPhysicalDeviceProtectedMemoryProperties(json &name);
    

        json serialize_VkDeviceQueueInfo2(VkDeviceQueueInfo2 name);
        VkDeviceQueueInfo2 deserialize_VkDeviceQueueInfo2(json &name);
    

        json serialize_VkPipelineCoverageToColorStateCreateInfoNV(VkPipelineCoverageToColorStateCreateInfoNV name);
        VkPipelineCoverageToColorStateCreateInfoNV deserialize_VkPipelineCoverageToColorStateCreateInfoNV(json &name);
    

        json serialize_VkPhysicalDeviceSamplerFilterMinmaxProperties(VkPhysicalDeviceSamplerFilterMinmaxProperties name);
        VkPhysicalDeviceSamplerFilterMinmaxProperties deserialize_VkPhysicalDeviceSamplerFilterMinmaxProperties(json &name);
    

        json serialize_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT name);
        VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT deserialize_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(json &name);
    

        json serialize_VkSampleLocationEXT(VkSampleLocationEXT name);
        VkSampleLocationEXT deserialize_VkSampleLocationEXT(json &name);
    

        json serialize_VkSampleLocationsInfoEXT(VkSampleLocationsInfoEXT name);
        VkSampleLocationsInfoEXT deserialize_VkSampleLocationsInfoEXT(json &name);
    

        json serialize_VkAttachmentSampleLocationsEXT(VkAttachmentSampleLocationsEXT name);
        VkAttachmentSampleLocationsEXT deserialize_VkAttachmentSampleLocationsEXT(json &name);
    

        json serialize_VkSubpassSampleLocationsEXT(VkSubpassSampleLocationsEXT name);
        VkSubpassSampleLocationsEXT deserialize_VkSubpassSampleLocationsEXT(json &name);
    

        json serialize_VkRenderPassSampleLocationsBeginInfoEXT(VkRenderPassSampleLocationsBeginInfoEXT name);
        VkRenderPassSampleLocationsBeginInfoEXT deserialize_VkRenderPassSampleLocationsBeginInfoEXT(json &name);
    

        json serialize_VkPipelineSampleLocationsStateCreateInfoEXT(VkPipelineSampleLocationsStateCreateInfoEXT name);
        VkPipelineSampleLocationsStateCreateInfoEXT deserialize_VkPipelineSampleLocationsStateCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceSampleLocationsPropertiesEXT(VkPhysicalDeviceSampleLocationsPropertiesEXT name);
        VkPhysicalDeviceSampleLocationsPropertiesEXT deserialize_VkPhysicalDeviceSampleLocationsPropertiesEXT(json &name);
    

        json serialize_VkMultisamplePropertiesEXT(VkMultisamplePropertiesEXT name);
        VkMultisamplePropertiesEXT deserialize_VkMultisamplePropertiesEXT(json &name);
    

        json serialize_VkSamplerReductionModeCreateInfo(VkSamplerReductionModeCreateInfo name);
        VkSamplerReductionModeCreateInfo deserialize_VkSamplerReductionModeCreateInfo(json &name);
    

        json serialize_VkSamplerReductionModeCreateInfoEXT(VkSamplerReductionModeCreateInfoEXT name);
        VkSamplerReductionModeCreateInfoEXT deserialize_VkSamplerReductionModeCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT name);
        VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT deserialize_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceMultiDrawFeaturesEXT(VkPhysicalDeviceMultiDrawFeaturesEXT name);
        VkPhysicalDeviceMultiDrawFeaturesEXT deserialize_VkPhysicalDeviceMultiDrawFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT name);
        VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT deserialize_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(json &name);
    

        json serialize_VkPipelineColorBlendAdvancedStateCreateInfoEXT(VkPipelineColorBlendAdvancedStateCreateInfoEXT name);
        VkPipelineColorBlendAdvancedStateCreateInfoEXT deserialize_VkPipelineColorBlendAdvancedStateCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceInlineUniformBlockFeatures(VkPhysicalDeviceInlineUniformBlockFeatures name);
        VkPhysicalDeviceInlineUniformBlockFeatures deserialize_VkPhysicalDeviceInlineUniformBlockFeatures(json &name);
    

        json serialize_VkPhysicalDeviceInlineUniformBlockFeaturesEXT(VkPhysicalDeviceInlineUniformBlockFeaturesEXT name);
        VkPhysicalDeviceInlineUniformBlockFeaturesEXT deserialize_VkPhysicalDeviceInlineUniformBlockFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceInlineUniformBlockProperties(VkPhysicalDeviceInlineUniformBlockProperties name);
        VkPhysicalDeviceInlineUniformBlockProperties deserialize_VkPhysicalDeviceInlineUniformBlockProperties(json &name);
    

        json serialize_VkPhysicalDeviceInlineUniformBlockPropertiesEXT(VkPhysicalDeviceInlineUniformBlockPropertiesEXT name);
        VkPhysicalDeviceInlineUniformBlockPropertiesEXT deserialize_VkPhysicalDeviceInlineUniformBlockPropertiesEXT(json &name);
    

        json serialize_VkWriteDescriptorSetInlineUniformBlock(VkWriteDescriptorSetInlineUniformBlock name);
        VkWriteDescriptorSetInlineUniformBlock deserialize_VkWriteDescriptorSetInlineUniformBlock(json &name);
    

        json serialize_VkWriteDescriptorSetInlineUniformBlockEXT(VkWriteDescriptorSetInlineUniformBlockEXT name);
        VkWriteDescriptorSetInlineUniformBlockEXT deserialize_VkWriteDescriptorSetInlineUniformBlockEXT(json &name);
    

        json serialize_VkDescriptorPoolInlineUniformBlockCreateInfo(VkDescriptorPoolInlineUniformBlockCreateInfo name);
        VkDescriptorPoolInlineUniformBlockCreateInfo deserialize_VkDescriptorPoolInlineUniformBlockCreateInfo(json &name);
    

        json serialize_VkDescriptorPoolInlineUniformBlockCreateInfoEXT(VkDescriptorPoolInlineUniformBlockCreateInfoEXT name);
        VkDescriptorPoolInlineUniformBlockCreateInfoEXT deserialize_VkDescriptorPoolInlineUniformBlockCreateInfoEXT(json &name);
    

        json serialize_VkPipelineCoverageModulationStateCreateInfoNV(VkPipelineCoverageModulationStateCreateInfoNV name);
        VkPipelineCoverageModulationStateCreateInfoNV deserialize_VkPipelineCoverageModulationStateCreateInfoNV(json &name);
    

        json serialize_VkImageFormatListCreateInfo(VkImageFormatListCreateInfo name);
        VkImageFormatListCreateInfo deserialize_VkImageFormatListCreateInfo(json &name);
    

        json serialize_VkImageFormatListCreateInfoKHR(VkImageFormatListCreateInfoKHR name);
        VkImageFormatListCreateInfoKHR deserialize_VkImageFormatListCreateInfoKHR(json &name);
    

        json serialize_VkValidationCacheCreateInfoEXT(VkValidationCacheCreateInfoEXT name);
        VkValidationCacheCreateInfoEXT deserialize_VkValidationCacheCreateInfoEXT(json &name);
    

        json serialize_VkShaderModuleValidationCacheCreateInfoEXT(VkShaderModuleValidationCacheCreateInfoEXT name);
        VkShaderModuleValidationCacheCreateInfoEXT deserialize_VkShaderModuleValidationCacheCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceMaintenance3Properties(VkPhysicalDeviceMaintenance3Properties name);
        VkPhysicalDeviceMaintenance3Properties deserialize_VkPhysicalDeviceMaintenance3Properties(json &name);
    

        json serialize_VkPhysicalDeviceMaintenance3PropertiesKHR(VkPhysicalDeviceMaintenance3PropertiesKHR name);
        VkPhysicalDeviceMaintenance3PropertiesKHR deserialize_VkPhysicalDeviceMaintenance3PropertiesKHR(json &name);
    

        json serialize_VkPhysicalDeviceMaintenance4Features(VkPhysicalDeviceMaintenance4Features name);
        VkPhysicalDeviceMaintenance4Features deserialize_VkPhysicalDeviceMaintenance4Features(json &name);
    

        json serialize_VkPhysicalDeviceMaintenance4FeaturesKHR(VkPhysicalDeviceMaintenance4FeaturesKHR name);
        VkPhysicalDeviceMaintenance4FeaturesKHR deserialize_VkPhysicalDeviceMaintenance4FeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceMaintenance4Properties(VkPhysicalDeviceMaintenance4Properties name);
        VkPhysicalDeviceMaintenance4Properties deserialize_VkPhysicalDeviceMaintenance4Properties(json &name);
    

        json serialize_VkPhysicalDeviceMaintenance4PropertiesKHR(VkPhysicalDeviceMaintenance4PropertiesKHR name);
        VkPhysicalDeviceMaintenance4PropertiesKHR deserialize_VkPhysicalDeviceMaintenance4PropertiesKHR(json &name);
    

        json serialize_VkPhysicalDeviceMaintenance5FeaturesKHR(VkPhysicalDeviceMaintenance5FeaturesKHR name);
        VkPhysicalDeviceMaintenance5FeaturesKHR deserialize_VkPhysicalDeviceMaintenance5FeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceMaintenance5PropertiesKHR(VkPhysicalDeviceMaintenance5PropertiesKHR name);
        VkPhysicalDeviceMaintenance5PropertiesKHR deserialize_VkPhysicalDeviceMaintenance5PropertiesKHR(json &name);
    

        json serialize_VkRenderingAreaInfoKHR(VkRenderingAreaInfoKHR name);
        VkRenderingAreaInfoKHR deserialize_VkRenderingAreaInfoKHR(json &name);
    

        json serialize_VkDescriptorSetLayoutSupport(VkDescriptorSetLayoutSupport name);
        VkDescriptorSetLayoutSupport deserialize_VkDescriptorSetLayoutSupport(json &name);
    

        json serialize_VkDescriptorSetLayoutSupportKHR(VkDescriptorSetLayoutSupportKHR name);
        VkDescriptorSetLayoutSupportKHR deserialize_VkDescriptorSetLayoutSupportKHR(json &name);
    

        json serialize_VkPhysicalDeviceShaderDrawParametersFeatures(VkPhysicalDeviceShaderDrawParametersFeatures name);
        VkPhysicalDeviceShaderDrawParametersFeatures deserialize_VkPhysicalDeviceShaderDrawParametersFeatures(json &name);
    

        json serialize_VkPhysicalDeviceShaderDrawParameterFeatures(VkPhysicalDeviceShaderDrawParameterFeatures name);
        VkPhysicalDeviceShaderDrawParameterFeatures deserialize_VkPhysicalDeviceShaderDrawParameterFeatures(json &name);
    

        json serialize_VkPhysicalDeviceShaderFloat16Int8Features(VkPhysicalDeviceShaderFloat16Int8Features name);
        VkPhysicalDeviceShaderFloat16Int8Features deserialize_VkPhysicalDeviceShaderFloat16Int8Features(json &name);
    

        json serialize_VkPhysicalDeviceShaderFloat16Int8FeaturesKHR(VkPhysicalDeviceShaderFloat16Int8FeaturesKHR name);
        VkPhysicalDeviceShaderFloat16Int8FeaturesKHR deserialize_VkPhysicalDeviceShaderFloat16Int8FeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceFloat16Int8FeaturesKHR(VkPhysicalDeviceFloat16Int8FeaturesKHR name);
        VkPhysicalDeviceFloat16Int8FeaturesKHR deserialize_VkPhysicalDeviceFloat16Int8FeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceFloatControlsProperties(VkPhysicalDeviceFloatControlsProperties name);
        VkPhysicalDeviceFloatControlsProperties deserialize_VkPhysicalDeviceFloatControlsProperties(json &name);
    

        json serialize_VkPhysicalDeviceFloatControlsPropertiesKHR(VkPhysicalDeviceFloatControlsPropertiesKHR name);
        VkPhysicalDeviceFloatControlsPropertiesKHR deserialize_VkPhysicalDeviceFloatControlsPropertiesKHR(json &name);
    

        json serialize_VkPhysicalDeviceHostQueryResetFeatures(VkPhysicalDeviceHostQueryResetFeatures name);
        VkPhysicalDeviceHostQueryResetFeatures deserialize_VkPhysicalDeviceHostQueryResetFeatures(json &name);
    

        json serialize_VkPhysicalDeviceHostQueryResetFeaturesEXT(VkPhysicalDeviceHostQueryResetFeaturesEXT name);
        VkPhysicalDeviceHostQueryResetFeaturesEXT deserialize_VkPhysicalDeviceHostQueryResetFeaturesEXT(json &name);
    

        json serialize_VkShaderResourceUsageAMD(VkShaderResourceUsageAMD name);
        VkShaderResourceUsageAMD deserialize_VkShaderResourceUsageAMD(json &name);
    

        json serialize_VkShaderStatisticsInfoAMD(VkShaderStatisticsInfoAMD name);
        VkShaderStatisticsInfoAMD deserialize_VkShaderStatisticsInfoAMD(json &name);
    

        json serialize_VkDeviceQueueGlobalPriorityCreateInfoKHR(VkDeviceQueueGlobalPriorityCreateInfoKHR name);
        VkDeviceQueueGlobalPriorityCreateInfoKHR deserialize_VkDeviceQueueGlobalPriorityCreateInfoKHR(json &name);
    

        json serialize_VkDeviceQueueGlobalPriorityCreateInfoEXT(VkDeviceQueueGlobalPriorityCreateInfoEXT name);
        VkDeviceQueueGlobalPriorityCreateInfoEXT deserialize_VkDeviceQueueGlobalPriorityCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR(VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR name);
        VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR deserialize_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT(VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT name);
        VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT deserialize_VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT(json &name);
    

        json serialize_VkQueueFamilyGlobalPriorityPropertiesKHR(VkQueueFamilyGlobalPriorityPropertiesKHR name);
        VkQueueFamilyGlobalPriorityPropertiesKHR deserialize_VkQueueFamilyGlobalPriorityPropertiesKHR(json &name);
    

        json serialize_VkQueueFamilyGlobalPriorityPropertiesEXT(VkQueueFamilyGlobalPriorityPropertiesEXT name);
        VkQueueFamilyGlobalPriorityPropertiesEXT deserialize_VkQueueFamilyGlobalPriorityPropertiesEXT(json &name);
    

        json serialize_VkDebugUtilsObjectNameInfoEXT(VkDebugUtilsObjectNameInfoEXT name);
        VkDebugUtilsObjectNameInfoEXT deserialize_VkDebugUtilsObjectNameInfoEXT(json &name);
    

        json serialize_VkDebugUtilsObjectTagInfoEXT(VkDebugUtilsObjectTagInfoEXT name);
        VkDebugUtilsObjectTagInfoEXT deserialize_VkDebugUtilsObjectTagInfoEXT(json &name);
    

        json serialize_VkDebugUtilsLabelEXT(VkDebugUtilsLabelEXT name);
        VkDebugUtilsLabelEXT deserialize_VkDebugUtilsLabelEXT(json &name);
    

        json serialize_VkDebugUtilsMessengerCreateInfoEXT(VkDebugUtilsMessengerCreateInfoEXT name);
        VkDebugUtilsMessengerCreateInfoEXT deserialize_VkDebugUtilsMessengerCreateInfoEXT(json &name);
    

        json serialize_VkDebugUtilsMessengerCallbackDataEXT(VkDebugUtilsMessengerCallbackDataEXT name);
        VkDebugUtilsMessengerCallbackDataEXT deserialize_VkDebugUtilsMessengerCallbackDataEXT(json &name);
    

        json serialize_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT(VkPhysicalDeviceDeviceMemoryReportFeaturesEXT name);
        VkPhysicalDeviceDeviceMemoryReportFeaturesEXT deserialize_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT(json &name);
    

        json serialize_VkDeviceDeviceMemoryReportCreateInfoEXT(VkDeviceDeviceMemoryReportCreateInfoEXT name);
        VkDeviceDeviceMemoryReportCreateInfoEXT deserialize_VkDeviceDeviceMemoryReportCreateInfoEXT(json &name);
    

        json serialize_VkDeviceMemoryReportCallbackDataEXT(VkDeviceMemoryReportCallbackDataEXT name);
        VkDeviceMemoryReportCallbackDataEXT deserialize_VkDeviceMemoryReportCallbackDataEXT(json &name);
    

        json serialize_VkImportMemoryHostPointerInfoEXT(VkImportMemoryHostPointerInfoEXT name);
        VkImportMemoryHostPointerInfoEXT deserialize_VkImportMemoryHostPointerInfoEXT(json &name);
    

        json serialize_VkMemoryHostPointerPropertiesEXT(VkMemoryHostPointerPropertiesEXT name);
        VkMemoryHostPointerPropertiesEXT deserialize_VkMemoryHostPointerPropertiesEXT(json &name);
    

        json serialize_VkPhysicalDeviceExternalMemoryHostPropertiesEXT(VkPhysicalDeviceExternalMemoryHostPropertiesEXT name);
        VkPhysicalDeviceExternalMemoryHostPropertiesEXT deserialize_VkPhysicalDeviceExternalMemoryHostPropertiesEXT(json &name);
    

        json serialize_VkPhysicalDeviceConservativeRasterizationPropertiesEXT(VkPhysicalDeviceConservativeRasterizationPropertiesEXT name);
        VkPhysicalDeviceConservativeRasterizationPropertiesEXT deserialize_VkPhysicalDeviceConservativeRasterizationPropertiesEXT(json &name);
    

        json serialize_VkCalibratedTimestampInfoEXT(VkCalibratedTimestampInfoEXT name);
        VkCalibratedTimestampInfoEXT deserialize_VkCalibratedTimestampInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceShaderCorePropertiesAMD(VkPhysicalDeviceShaderCorePropertiesAMD name);
        VkPhysicalDeviceShaderCorePropertiesAMD deserialize_VkPhysicalDeviceShaderCorePropertiesAMD(json &name);
    

        json serialize_VkPhysicalDeviceShaderCoreProperties2AMD(VkPhysicalDeviceShaderCoreProperties2AMD name);
        VkPhysicalDeviceShaderCoreProperties2AMD deserialize_VkPhysicalDeviceShaderCoreProperties2AMD(json &name);
    

        json serialize_VkPipelineRasterizationConservativeStateCreateInfoEXT(VkPipelineRasterizationConservativeStateCreateInfoEXT name);
        VkPipelineRasterizationConservativeStateCreateInfoEXT deserialize_VkPipelineRasterizationConservativeStateCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceDescriptorIndexingFeatures(VkPhysicalDeviceDescriptorIndexingFeatures name);
        VkPhysicalDeviceDescriptorIndexingFeatures deserialize_VkPhysicalDeviceDescriptorIndexingFeatures(json &name);
    

        json serialize_VkPhysicalDeviceDescriptorIndexingFeaturesEXT(VkPhysicalDeviceDescriptorIndexingFeaturesEXT name);
        VkPhysicalDeviceDescriptorIndexingFeaturesEXT deserialize_VkPhysicalDeviceDescriptorIndexingFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceDescriptorIndexingProperties(VkPhysicalDeviceDescriptorIndexingProperties name);
        VkPhysicalDeviceDescriptorIndexingProperties deserialize_VkPhysicalDeviceDescriptorIndexingProperties(json &name);
    

        json serialize_VkPhysicalDeviceDescriptorIndexingPropertiesEXT(VkPhysicalDeviceDescriptorIndexingPropertiesEXT name);
        VkPhysicalDeviceDescriptorIndexingPropertiesEXT deserialize_VkPhysicalDeviceDescriptorIndexingPropertiesEXT(json &name);
    

        json serialize_VkDescriptorSetLayoutBindingFlagsCreateInfo(VkDescriptorSetLayoutBindingFlagsCreateInfo name);
        VkDescriptorSetLayoutBindingFlagsCreateInfo deserialize_VkDescriptorSetLayoutBindingFlagsCreateInfo(json &name);
    

        json serialize_VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(VkDescriptorSetLayoutBindingFlagsCreateInfoEXT name);
        VkDescriptorSetLayoutBindingFlagsCreateInfoEXT deserialize_VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(json &name);
    

        json serialize_VkDescriptorSetVariableDescriptorCountAllocateInfo(VkDescriptorSetVariableDescriptorCountAllocateInfo name);
        VkDescriptorSetVariableDescriptorCountAllocateInfo deserialize_VkDescriptorSetVariableDescriptorCountAllocateInfo(json &name);
    

        json serialize_VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(VkDescriptorSetVariableDescriptorCountAllocateInfoEXT name);
        VkDescriptorSetVariableDescriptorCountAllocateInfoEXT deserialize_VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(json &name);
    

        json serialize_VkDescriptorSetVariableDescriptorCountLayoutSupport(VkDescriptorSetVariableDescriptorCountLayoutSupport name);
        VkDescriptorSetVariableDescriptorCountLayoutSupport deserialize_VkDescriptorSetVariableDescriptorCountLayoutSupport(json &name);
    

        json serialize_VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(VkDescriptorSetVariableDescriptorCountLayoutSupportEXT name);
        VkDescriptorSetVariableDescriptorCountLayoutSupportEXT deserialize_VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(json &name);
    

        json serialize_VkAttachmentDescription2(VkAttachmentDescription2 name);
        VkAttachmentDescription2 deserialize_VkAttachmentDescription2(json &name);
    

        json serialize_VkAttachmentDescription2KHR(VkAttachmentDescription2KHR name);
        VkAttachmentDescription2KHR deserialize_VkAttachmentDescription2KHR(json &name);
    

        json serialize_VkAttachmentReference2(VkAttachmentReference2 name);
        VkAttachmentReference2 deserialize_VkAttachmentReference2(json &name);
    

        json serialize_VkAttachmentReference2KHR(VkAttachmentReference2KHR name);
        VkAttachmentReference2KHR deserialize_VkAttachmentReference2KHR(json &name);
    

        json serialize_VkSubpassDescription2(VkSubpassDescription2 name);
        VkSubpassDescription2 deserialize_VkSubpassDescription2(json &name);
    

        json serialize_VkSubpassDescription2KHR(VkSubpassDescription2KHR name);
        VkSubpassDescription2KHR deserialize_VkSubpassDescription2KHR(json &name);
    

        json serialize_VkSubpassDependency2(VkSubpassDependency2 name);
        VkSubpassDependency2 deserialize_VkSubpassDependency2(json &name);
    

        json serialize_VkSubpassDependency2KHR(VkSubpassDependency2KHR name);
        VkSubpassDependency2KHR deserialize_VkSubpassDependency2KHR(json &name);
    

        json serialize_VkRenderPassCreateInfo2(VkRenderPassCreateInfo2 name);
        VkRenderPassCreateInfo2 deserialize_VkRenderPassCreateInfo2(json &name);
    

        json serialize_VkRenderPassCreateInfo2KHR(VkRenderPassCreateInfo2KHR name);
        VkRenderPassCreateInfo2KHR deserialize_VkRenderPassCreateInfo2KHR(json &name);
    

        json serialize_VkSubpassBeginInfo(VkSubpassBeginInfo name);
        VkSubpassBeginInfo deserialize_VkSubpassBeginInfo(json &name);
    

        json serialize_VkSubpassBeginInfoKHR(VkSubpassBeginInfoKHR name);
        VkSubpassBeginInfoKHR deserialize_VkSubpassBeginInfoKHR(json &name);
    

        json serialize_VkSubpassEndInfo(VkSubpassEndInfo name);
        VkSubpassEndInfo deserialize_VkSubpassEndInfo(json &name);
    

        json serialize_VkSubpassEndInfoKHR(VkSubpassEndInfoKHR name);
        VkSubpassEndInfoKHR deserialize_VkSubpassEndInfoKHR(json &name);
    

        json serialize_VkPhysicalDeviceTimelineSemaphoreFeatures(VkPhysicalDeviceTimelineSemaphoreFeatures name);
        VkPhysicalDeviceTimelineSemaphoreFeatures deserialize_VkPhysicalDeviceTimelineSemaphoreFeatures(json &name);
    

        json serialize_VkPhysicalDeviceTimelineSemaphoreFeaturesKHR(VkPhysicalDeviceTimelineSemaphoreFeaturesKHR name);
        VkPhysicalDeviceTimelineSemaphoreFeaturesKHR deserialize_VkPhysicalDeviceTimelineSemaphoreFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceTimelineSemaphoreProperties(VkPhysicalDeviceTimelineSemaphoreProperties name);
        VkPhysicalDeviceTimelineSemaphoreProperties deserialize_VkPhysicalDeviceTimelineSemaphoreProperties(json &name);
    

        json serialize_VkPhysicalDeviceTimelineSemaphorePropertiesKHR(VkPhysicalDeviceTimelineSemaphorePropertiesKHR name);
        VkPhysicalDeviceTimelineSemaphorePropertiesKHR deserialize_VkPhysicalDeviceTimelineSemaphorePropertiesKHR(json &name);
    

        json serialize_VkSemaphoreTypeCreateInfo(VkSemaphoreTypeCreateInfo name);
        VkSemaphoreTypeCreateInfo deserialize_VkSemaphoreTypeCreateInfo(json &name);
    

        json serialize_VkSemaphoreTypeCreateInfoKHR(VkSemaphoreTypeCreateInfoKHR name);
        VkSemaphoreTypeCreateInfoKHR deserialize_VkSemaphoreTypeCreateInfoKHR(json &name);
    

        json serialize_VkTimelineSemaphoreSubmitInfo(VkTimelineSemaphoreSubmitInfo name);
        VkTimelineSemaphoreSubmitInfo deserialize_VkTimelineSemaphoreSubmitInfo(json &name);
    

        json serialize_VkTimelineSemaphoreSubmitInfoKHR(VkTimelineSemaphoreSubmitInfoKHR name);
        VkTimelineSemaphoreSubmitInfoKHR deserialize_VkTimelineSemaphoreSubmitInfoKHR(json &name);
    

        json serialize_VkSemaphoreWaitInfo(VkSemaphoreWaitInfo name);
        VkSemaphoreWaitInfo deserialize_VkSemaphoreWaitInfo(json &name);
    

        json serialize_VkSemaphoreWaitInfoKHR(VkSemaphoreWaitInfoKHR name);
        VkSemaphoreWaitInfoKHR deserialize_VkSemaphoreWaitInfoKHR(json &name);
    

        json serialize_VkSemaphoreSignalInfo(VkSemaphoreSignalInfo name);
        VkSemaphoreSignalInfo deserialize_VkSemaphoreSignalInfo(json &name);
    

        json serialize_VkSemaphoreSignalInfoKHR(VkSemaphoreSignalInfoKHR name);
        VkSemaphoreSignalInfoKHR deserialize_VkSemaphoreSignalInfoKHR(json &name);
    

        json serialize_VkVertexInputBindingDivisorDescriptionEXT(VkVertexInputBindingDivisorDescriptionEXT name);
        VkVertexInputBindingDivisorDescriptionEXT deserialize_VkVertexInputBindingDivisorDescriptionEXT(json &name);
    

        json serialize_VkPipelineVertexInputDivisorStateCreateInfoEXT(VkPipelineVertexInputDivisorStateCreateInfoEXT name);
        VkPipelineVertexInputDivisorStateCreateInfoEXT deserialize_VkPipelineVertexInputDivisorStateCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT name);
        VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT deserialize_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(json &name);
    

        json serialize_VkPhysicalDevicePCIBusInfoPropertiesEXT(VkPhysicalDevicePCIBusInfoPropertiesEXT name);
        VkPhysicalDevicePCIBusInfoPropertiesEXT deserialize_VkPhysicalDevicePCIBusInfoPropertiesEXT(json &name);
    

        json serialize_VkCommandBufferInheritanceConditionalRenderingInfoEXT(VkCommandBufferInheritanceConditionalRenderingInfoEXT name);
        VkCommandBufferInheritanceConditionalRenderingInfoEXT deserialize_VkCommandBufferInheritanceConditionalRenderingInfoEXT(json &name);
    

        json serialize_VkPhysicalDevice8BitStorageFeatures(VkPhysicalDevice8BitStorageFeatures name);
        VkPhysicalDevice8BitStorageFeatures deserialize_VkPhysicalDevice8BitStorageFeatures(json &name);
    

        json serialize_VkPhysicalDevice8BitStorageFeaturesKHR(VkPhysicalDevice8BitStorageFeaturesKHR name);
        VkPhysicalDevice8BitStorageFeaturesKHR deserialize_VkPhysicalDevice8BitStorageFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceConditionalRenderingFeaturesEXT(VkPhysicalDeviceConditionalRenderingFeaturesEXT name);
        VkPhysicalDeviceConditionalRenderingFeaturesEXT deserialize_VkPhysicalDeviceConditionalRenderingFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceVulkanMemoryModelFeatures(VkPhysicalDeviceVulkanMemoryModelFeatures name);
        VkPhysicalDeviceVulkanMemoryModelFeatures deserialize_VkPhysicalDeviceVulkanMemoryModelFeatures(json &name);
    

        json serialize_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR(VkPhysicalDeviceVulkanMemoryModelFeaturesKHR name);
        VkPhysicalDeviceVulkanMemoryModelFeaturesKHR deserialize_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceShaderAtomicInt64Features(VkPhysicalDeviceShaderAtomicInt64Features name);
        VkPhysicalDeviceShaderAtomicInt64Features deserialize_VkPhysicalDeviceShaderAtomicInt64Features(json &name);
    

        json serialize_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR(VkPhysicalDeviceShaderAtomicInt64FeaturesKHR name);
        VkPhysicalDeviceShaderAtomicInt64FeaturesKHR deserialize_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT name);
        VkPhysicalDeviceShaderAtomicFloatFeaturesEXT deserialize_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT name);
        VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT deserialize_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT(VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT name);
        VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT deserialize_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT(json &name);
    

        json serialize_VkQueueFamilyCheckpointPropertiesNV(VkQueueFamilyCheckpointPropertiesNV name);
        VkQueueFamilyCheckpointPropertiesNV deserialize_VkQueueFamilyCheckpointPropertiesNV(json &name);
    

        json serialize_VkCheckpointDataNV(VkCheckpointDataNV name);
        VkCheckpointDataNV deserialize_VkCheckpointDataNV(json &name);
    

        json serialize_VkPhysicalDeviceDepthStencilResolveProperties(VkPhysicalDeviceDepthStencilResolveProperties name);
        VkPhysicalDeviceDepthStencilResolveProperties deserialize_VkPhysicalDeviceDepthStencilResolveProperties(json &name);
    

        json serialize_VkPhysicalDeviceDepthStencilResolvePropertiesKHR(VkPhysicalDeviceDepthStencilResolvePropertiesKHR name);
        VkPhysicalDeviceDepthStencilResolvePropertiesKHR deserialize_VkPhysicalDeviceDepthStencilResolvePropertiesKHR(json &name);
    

        json serialize_VkSubpassDescriptionDepthStencilResolve(VkSubpassDescriptionDepthStencilResolve name);
        VkSubpassDescriptionDepthStencilResolve deserialize_VkSubpassDescriptionDepthStencilResolve(json &name);
    

        json serialize_VkSubpassDescriptionDepthStencilResolveKHR(VkSubpassDescriptionDepthStencilResolveKHR name);
        VkSubpassDescriptionDepthStencilResolveKHR deserialize_VkSubpassDescriptionDepthStencilResolveKHR(json &name);
    

        json serialize_VkImageViewASTCDecodeModeEXT(VkImageViewASTCDecodeModeEXT name);
        VkImageViewASTCDecodeModeEXT deserialize_VkImageViewASTCDecodeModeEXT(json &name);
    

        json serialize_VkPhysicalDeviceASTCDecodeFeaturesEXT(VkPhysicalDeviceASTCDecodeFeaturesEXT name);
        VkPhysicalDeviceASTCDecodeFeaturesEXT deserialize_VkPhysicalDeviceASTCDecodeFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceTransformFeedbackFeaturesEXT(VkPhysicalDeviceTransformFeedbackFeaturesEXT name);
        VkPhysicalDeviceTransformFeedbackFeaturesEXT deserialize_VkPhysicalDeviceTransformFeedbackFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceTransformFeedbackPropertiesEXT(VkPhysicalDeviceTransformFeedbackPropertiesEXT name);
        VkPhysicalDeviceTransformFeedbackPropertiesEXT deserialize_VkPhysicalDeviceTransformFeedbackPropertiesEXT(json &name);
    

        json serialize_VkPipelineRasterizationStateStreamCreateInfoEXT(VkPipelineRasterizationStateStreamCreateInfoEXT name);
        VkPipelineRasterizationStateStreamCreateInfoEXT deserialize_VkPipelineRasterizationStateStreamCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV name);
        VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV deserialize_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV(json &name);
    

        json serialize_VkPipelineRepresentativeFragmentTestStateCreateInfoNV(VkPipelineRepresentativeFragmentTestStateCreateInfoNV name);
        VkPipelineRepresentativeFragmentTestStateCreateInfoNV deserialize_VkPipelineRepresentativeFragmentTestStateCreateInfoNV(json &name);
    

        json serialize_VkPhysicalDeviceExclusiveScissorFeaturesNV(VkPhysicalDeviceExclusiveScissorFeaturesNV name);
        VkPhysicalDeviceExclusiveScissorFeaturesNV deserialize_VkPhysicalDeviceExclusiveScissorFeaturesNV(json &name);
    

        json serialize_VkPipelineViewportExclusiveScissorStateCreateInfoNV(VkPipelineViewportExclusiveScissorStateCreateInfoNV name);
        VkPipelineViewportExclusiveScissorStateCreateInfoNV deserialize_VkPipelineViewportExclusiveScissorStateCreateInfoNV(json &name);
    

        json serialize_VkPhysicalDeviceCornerSampledImageFeaturesNV(VkPhysicalDeviceCornerSampledImageFeaturesNV name);
        VkPhysicalDeviceCornerSampledImageFeaturesNV deserialize_VkPhysicalDeviceCornerSampledImageFeaturesNV(json &name);
    

        json serialize_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV(VkPhysicalDeviceComputeShaderDerivativesFeaturesNV name);
        VkPhysicalDeviceComputeShaderDerivativesFeaturesNV deserialize_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV(json &name);
    

        json serialize_VkPhysicalDeviceShaderImageFootprintFeaturesNV(VkPhysicalDeviceShaderImageFootprintFeaturesNV name);
        VkPhysicalDeviceShaderImageFootprintFeaturesNV deserialize_VkPhysicalDeviceShaderImageFootprintFeaturesNV(json &name);
    

        json serialize_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV name);
        VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV deserialize_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(json &name);
    

        json serialize_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV(VkPhysicalDeviceCopyMemoryIndirectFeaturesNV name);
        VkPhysicalDeviceCopyMemoryIndirectFeaturesNV deserialize_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV(json &name);
    

        json serialize_VkPhysicalDeviceCopyMemoryIndirectPropertiesNV(VkPhysicalDeviceCopyMemoryIndirectPropertiesNV name);
        VkPhysicalDeviceCopyMemoryIndirectPropertiesNV deserialize_VkPhysicalDeviceCopyMemoryIndirectPropertiesNV(json &name);
    

        json serialize_VkPhysicalDeviceMemoryDecompressionFeaturesNV(VkPhysicalDeviceMemoryDecompressionFeaturesNV name);
        VkPhysicalDeviceMemoryDecompressionFeaturesNV deserialize_VkPhysicalDeviceMemoryDecompressionFeaturesNV(json &name);
    

        json serialize_VkPhysicalDeviceMemoryDecompressionPropertiesNV(VkPhysicalDeviceMemoryDecompressionPropertiesNV name);
        VkPhysicalDeviceMemoryDecompressionPropertiesNV deserialize_VkPhysicalDeviceMemoryDecompressionPropertiesNV(json &name);
    

        json serialize_VkShadingRatePaletteNV(VkShadingRatePaletteNV name);
        VkShadingRatePaletteNV deserialize_VkShadingRatePaletteNV(json &name);
    

        json serialize_VkPipelineViewportShadingRateImageStateCreateInfoNV(VkPipelineViewportShadingRateImageStateCreateInfoNV name);
        VkPipelineViewportShadingRateImageStateCreateInfoNV deserialize_VkPipelineViewportShadingRateImageStateCreateInfoNV(json &name);
    

        json serialize_VkPhysicalDeviceShadingRateImageFeaturesNV(VkPhysicalDeviceShadingRateImageFeaturesNV name);
        VkPhysicalDeviceShadingRateImageFeaturesNV deserialize_VkPhysicalDeviceShadingRateImageFeaturesNV(json &name);
    

        json serialize_VkPhysicalDeviceShadingRateImagePropertiesNV(VkPhysicalDeviceShadingRateImagePropertiesNV name);
        VkPhysicalDeviceShadingRateImagePropertiesNV deserialize_VkPhysicalDeviceShadingRateImagePropertiesNV(json &name);
    

        json serialize_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI(VkPhysicalDeviceInvocationMaskFeaturesHUAWEI name);
        VkPhysicalDeviceInvocationMaskFeaturesHUAWEI deserialize_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI(json &name);
    

        json serialize_VkCoarseSampleLocationNV(VkCoarseSampleLocationNV name);
        VkCoarseSampleLocationNV deserialize_VkCoarseSampleLocationNV(json &name);
    

        json serialize_VkCoarseSampleOrderCustomNV(VkCoarseSampleOrderCustomNV name);
        VkCoarseSampleOrderCustomNV deserialize_VkCoarseSampleOrderCustomNV(json &name);
    

        json serialize_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV(VkPipelineViewportCoarseSampleOrderStateCreateInfoNV name);
        VkPipelineViewportCoarseSampleOrderStateCreateInfoNV deserialize_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV(json &name);
    

        json serialize_VkPhysicalDeviceMeshShaderFeaturesNV(VkPhysicalDeviceMeshShaderFeaturesNV name);
        VkPhysicalDeviceMeshShaderFeaturesNV deserialize_VkPhysicalDeviceMeshShaderFeaturesNV(json &name);
    

        json serialize_VkPhysicalDeviceMeshShaderPropertiesNV(VkPhysicalDeviceMeshShaderPropertiesNV name);
        VkPhysicalDeviceMeshShaderPropertiesNV deserialize_VkPhysicalDeviceMeshShaderPropertiesNV(json &name);
    

        json serialize_VkDrawMeshTasksIndirectCommandNV(VkDrawMeshTasksIndirectCommandNV name);
        VkDrawMeshTasksIndirectCommandNV deserialize_VkDrawMeshTasksIndirectCommandNV(json &name);
    

        json serialize_VkPhysicalDeviceMeshShaderFeaturesEXT(VkPhysicalDeviceMeshShaderFeaturesEXT name);
        VkPhysicalDeviceMeshShaderFeaturesEXT deserialize_VkPhysicalDeviceMeshShaderFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceMeshShaderPropertiesEXT(VkPhysicalDeviceMeshShaderPropertiesEXT name);
        VkPhysicalDeviceMeshShaderPropertiesEXT deserialize_VkPhysicalDeviceMeshShaderPropertiesEXT(json &name);
    

        json serialize_VkDrawMeshTasksIndirectCommandEXT(VkDrawMeshTasksIndirectCommandEXT name);
        VkDrawMeshTasksIndirectCommandEXT deserialize_VkDrawMeshTasksIndirectCommandEXT(json &name);
    

        json serialize_VkRayTracingShaderGroupCreateInfoNV(VkRayTracingShaderGroupCreateInfoNV name);
        VkRayTracingShaderGroupCreateInfoNV deserialize_VkRayTracingShaderGroupCreateInfoNV(json &name);
    

        json serialize_VkRayTracingShaderGroupCreateInfoKHR(VkRayTracingShaderGroupCreateInfoKHR name);
        VkRayTracingShaderGroupCreateInfoKHR deserialize_VkRayTracingShaderGroupCreateInfoKHR(json &name);
    

        json serialize_VkRayTracingPipelineCreateInfoNV(VkRayTracingPipelineCreateInfoNV name);
        VkRayTracingPipelineCreateInfoNV deserialize_VkRayTracingPipelineCreateInfoNV(json &name);
    

        json serialize_VkRayTracingPipelineCreateInfoKHR(VkRayTracingPipelineCreateInfoKHR name);
        VkRayTracingPipelineCreateInfoKHR deserialize_VkRayTracingPipelineCreateInfoKHR(json &name);
    

        json serialize_VkGeometryTrianglesNV(VkGeometryTrianglesNV name);
        VkGeometryTrianglesNV deserialize_VkGeometryTrianglesNV(json &name);
    

        json serialize_VkGeometryAABBNV(VkGeometryAABBNV name);
        VkGeometryAABBNV deserialize_VkGeometryAABBNV(json &name);
    

        json serialize_VkGeometryDataNV(VkGeometryDataNV name);
        VkGeometryDataNV deserialize_VkGeometryDataNV(json &name);
    

        json serialize_VkGeometryNV(VkGeometryNV name);
        VkGeometryNV deserialize_VkGeometryNV(json &name);
    

        json serialize_VkAccelerationStructureInfoNV(VkAccelerationStructureInfoNV name);
        VkAccelerationStructureInfoNV deserialize_VkAccelerationStructureInfoNV(json &name);
    

        json serialize_VkAccelerationStructureCreateInfoNV(VkAccelerationStructureCreateInfoNV name);
        VkAccelerationStructureCreateInfoNV deserialize_VkAccelerationStructureCreateInfoNV(json &name);
    

        json serialize_VkBindAccelerationStructureMemoryInfoNV(VkBindAccelerationStructureMemoryInfoNV name);
        VkBindAccelerationStructureMemoryInfoNV deserialize_VkBindAccelerationStructureMemoryInfoNV(json &name);
    

        json serialize_VkWriteDescriptorSetAccelerationStructureKHR(VkWriteDescriptorSetAccelerationStructureKHR name);
        VkWriteDescriptorSetAccelerationStructureKHR deserialize_VkWriteDescriptorSetAccelerationStructureKHR(json &name);
    

        json serialize_VkWriteDescriptorSetAccelerationStructureNV(VkWriteDescriptorSetAccelerationStructureNV name);
        VkWriteDescriptorSetAccelerationStructureNV deserialize_VkWriteDescriptorSetAccelerationStructureNV(json &name);
    

        json serialize_VkAccelerationStructureMemoryRequirementsInfoNV(VkAccelerationStructureMemoryRequirementsInfoNV name);
        VkAccelerationStructureMemoryRequirementsInfoNV deserialize_VkAccelerationStructureMemoryRequirementsInfoNV(json &name);
    

        json serialize_VkPhysicalDeviceAccelerationStructureFeaturesKHR(VkPhysicalDeviceAccelerationStructureFeaturesKHR name);
        VkPhysicalDeviceAccelerationStructureFeaturesKHR deserialize_VkPhysicalDeviceAccelerationStructureFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceRayTracingPipelineFeaturesKHR(VkPhysicalDeviceRayTracingPipelineFeaturesKHR name);
        VkPhysicalDeviceRayTracingPipelineFeaturesKHR deserialize_VkPhysicalDeviceRayTracingPipelineFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceRayQueryFeaturesKHR(VkPhysicalDeviceRayQueryFeaturesKHR name);
        VkPhysicalDeviceRayQueryFeaturesKHR deserialize_VkPhysicalDeviceRayQueryFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceAccelerationStructurePropertiesKHR(VkPhysicalDeviceAccelerationStructurePropertiesKHR name);
        VkPhysicalDeviceAccelerationStructurePropertiesKHR deserialize_VkPhysicalDeviceAccelerationStructurePropertiesKHR(json &name);
    

        json serialize_VkPhysicalDeviceRayTracingPipelinePropertiesKHR(VkPhysicalDeviceRayTracingPipelinePropertiesKHR name);
        VkPhysicalDeviceRayTracingPipelinePropertiesKHR deserialize_VkPhysicalDeviceRayTracingPipelinePropertiesKHR(json &name);
    

        json serialize_VkPhysicalDeviceRayTracingPropertiesNV(VkPhysicalDeviceRayTracingPropertiesNV name);
        VkPhysicalDeviceRayTracingPropertiesNV deserialize_VkPhysicalDeviceRayTracingPropertiesNV(json &name);
    

        json serialize_VkStridedDeviceAddressRegionKHR(VkStridedDeviceAddressRegionKHR name);
        VkStridedDeviceAddressRegionKHR deserialize_VkStridedDeviceAddressRegionKHR(json &name);
    

        json serialize_VkTraceRaysIndirectCommandKHR(VkTraceRaysIndirectCommandKHR name);
        VkTraceRaysIndirectCommandKHR deserialize_VkTraceRaysIndirectCommandKHR(json &name);
    

        json serialize_VkTraceRaysIndirectCommand2KHR(VkTraceRaysIndirectCommand2KHR name);
        VkTraceRaysIndirectCommand2KHR deserialize_VkTraceRaysIndirectCommand2KHR(json &name);
    

        json serialize_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR(VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR name);
        VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR deserialize_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR(json &name);
    

        json serialize_VkDrmFormatModifierPropertiesListEXT(VkDrmFormatModifierPropertiesListEXT name);
        VkDrmFormatModifierPropertiesListEXT deserialize_VkDrmFormatModifierPropertiesListEXT(json &name);
    

        json serialize_VkDrmFormatModifierPropertiesEXT(VkDrmFormatModifierPropertiesEXT name);
        VkDrmFormatModifierPropertiesEXT deserialize_VkDrmFormatModifierPropertiesEXT(json &name);
    

        json serialize_VkPhysicalDeviceImageDrmFormatModifierInfoEXT(VkPhysicalDeviceImageDrmFormatModifierInfoEXT name);
        VkPhysicalDeviceImageDrmFormatModifierInfoEXT deserialize_VkPhysicalDeviceImageDrmFormatModifierInfoEXT(json &name);
    

        json serialize_VkImageDrmFormatModifierListCreateInfoEXT(VkImageDrmFormatModifierListCreateInfoEXT name);
        VkImageDrmFormatModifierListCreateInfoEXT deserialize_VkImageDrmFormatModifierListCreateInfoEXT(json &name);
    

        json serialize_VkImageDrmFormatModifierExplicitCreateInfoEXT(VkImageDrmFormatModifierExplicitCreateInfoEXT name);
        VkImageDrmFormatModifierExplicitCreateInfoEXT deserialize_VkImageDrmFormatModifierExplicitCreateInfoEXT(json &name);
    

        json serialize_VkImageDrmFormatModifierPropertiesEXT(VkImageDrmFormatModifierPropertiesEXT name);
        VkImageDrmFormatModifierPropertiesEXT deserialize_VkImageDrmFormatModifierPropertiesEXT(json &name);
    

        json serialize_VkImageStencilUsageCreateInfo(VkImageStencilUsageCreateInfo name);
        VkImageStencilUsageCreateInfo deserialize_VkImageStencilUsageCreateInfo(json &name);
    

        json serialize_VkImageStencilUsageCreateInfoEXT(VkImageStencilUsageCreateInfoEXT name);
        VkImageStencilUsageCreateInfoEXT deserialize_VkImageStencilUsageCreateInfoEXT(json &name);
    

        json serialize_VkDeviceMemoryOverallocationCreateInfoAMD(VkDeviceMemoryOverallocationCreateInfoAMD name);
        VkDeviceMemoryOverallocationCreateInfoAMD deserialize_VkDeviceMemoryOverallocationCreateInfoAMD(json &name);
    

        json serialize_VkPhysicalDeviceFragmentDensityMapFeaturesEXT(VkPhysicalDeviceFragmentDensityMapFeaturesEXT name);
        VkPhysicalDeviceFragmentDensityMapFeaturesEXT deserialize_VkPhysicalDeviceFragmentDensityMapFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT name);
        VkPhysicalDeviceFragmentDensityMap2FeaturesEXT deserialize_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM name);
        VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM deserialize_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM(json &name);
    

        json serialize_VkPhysicalDeviceFragmentDensityMapPropertiesEXT(VkPhysicalDeviceFragmentDensityMapPropertiesEXT name);
        VkPhysicalDeviceFragmentDensityMapPropertiesEXT deserialize_VkPhysicalDeviceFragmentDensityMapPropertiesEXT(json &name);
    

        json serialize_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT(VkPhysicalDeviceFragmentDensityMap2PropertiesEXT name);
        VkPhysicalDeviceFragmentDensityMap2PropertiesEXT deserialize_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT(json &name);
    

        json serialize_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM(VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM name);
        VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM deserialize_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM(json &name);
    

        json serialize_VkRenderPassFragmentDensityMapCreateInfoEXT(VkRenderPassFragmentDensityMapCreateInfoEXT name);
        VkRenderPassFragmentDensityMapCreateInfoEXT deserialize_VkRenderPassFragmentDensityMapCreateInfoEXT(json &name);
    

        json serialize_VkSubpassFragmentDensityMapOffsetEndInfoQCOM(VkSubpassFragmentDensityMapOffsetEndInfoQCOM name);
        VkSubpassFragmentDensityMapOffsetEndInfoQCOM deserialize_VkSubpassFragmentDensityMapOffsetEndInfoQCOM(json &name);
    

        json serialize_VkPhysicalDeviceScalarBlockLayoutFeatures(VkPhysicalDeviceScalarBlockLayoutFeatures name);
        VkPhysicalDeviceScalarBlockLayoutFeatures deserialize_VkPhysicalDeviceScalarBlockLayoutFeatures(json &name);
    

        json serialize_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT(VkPhysicalDeviceScalarBlockLayoutFeaturesEXT name);
        VkPhysicalDeviceScalarBlockLayoutFeaturesEXT deserialize_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT(json &name);
    

        json serialize_VkSurfaceProtectedCapabilitiesKHR(VkSurfaceProtectedCapabilitiesKHR name);
        VkSurfaceProtectedCapabilitiesKHR deserialize_VkSurfaceProtectedCapabilitiesKHR(json &name);
    

        json serialize_VkPhysicalDeviceUniformBufferStandardLayoutFeatures(VkPhysicalDeviceUniformBufferStandardLayoutFeatures name);
        VkPhysicalDeviceUniformBufferStandardLayoutFeatures deserialize_VkPhysicalDeviceUniformBufferStandardLayoutFeatures(json &name);
    

        json serialize_VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR(VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR name);
        VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR deserialize_VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceDepthClipEnableFeaturesEXT(VkPhysicalDeviceDepthClipEnableFeaturesEXT name);
        VkPhysicalDeviceDepthClipEnableFeaturesEXT deserialize_VkPhysicalDeviceDepthClipEnableFeaturesEXT(json &name);
    

        json serialize_VkPipelineRasterizationDepthClipStateCreateInfoEXT(VkPipelineRasterizationDepthClipStateCreateInfoEXT name);
        VkPipelineRasterizationDepthClipStateCreateInfoEXT deserialize_VkPipelineRasterizationDepthClipStateCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceMemoryBudgetPropertiesEXT(VkPhysicalDeviceMemoryBudgetPropertiesEXT name);
        VkPhysicalDeviceMemoryBudgetPropertiesEXT deserialize_VkPhysicalDeviceMemoryBudgetPropertiesEXT(json &name);
    

        json serialize_VkPhysicalDeviceMemoryPriorityFeaturesEXT(VkPhysicalDeviceMemoryPriorityFeaturesEXT name);
        VkPhysicalDeviceMemoryPriorityFeaturesEXT deserialize_VkPhysicalDeviceMemoryPriorityFeaturesEXT(json &name);
    

        json serialize_VkMemoryPriorityAllocateInfoEXT(VkMemoryPriorityAllocateInfoEXT name);
        VkMemoryPriorityAllocateInfoEXT deserialize_VkMemoryPriorityAllocateInfoEXT(json &name);
    

        json serialize_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT name);
        VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT deserialize_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceBufferDeviceAddressFeatures(VkPhysicalDeviceBufferDeviceAddressFeatures name);
        VkPhysicalDeviceBufferDeviceAddressFeatures deserialize_VkPhysicalDeviceBufferDeviceAddressFeatures(json &name);
    

        json serialize_VkPhysicalDeviceBufferDeviceAddressFeaturesKHR(VkPhysicalDeviceBufferDeviceAddressFeaturesKHR name);
        VkPhysicalDeviceBufferDeviceAddressFeaturesKHR deserialize_VkPhysicalDeviceBufferDeviceAddressFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT name);
        VkPhysicalDeviceBufferDeviceAddressFeaturesEXT deserialize_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceBufferAddressFeaturesEXT(VkPhysicalDeviceBufferAddressFeaturesEXT name);
        VkPhysicalDeviceBufferAddressFeaturesEXT deserialize_VkPhysicalDeviceBufferAddressFeaturesEXT(json &name);
    

        json serialize_VkBufferDeviceAddressInfo(VkBufferDeviceAddressInfo name);
        VkBufferDeviceAddressInfo deserialize_VkBufferDeviceAddressInfo(json &name);
    

        json serialize_VkBufferDeviceAddressInfoKHR(VkBufferDeviceAddressInfoKHR name);
        VkBufferDeviceAddressInfoKHR deserialize_VkBufferDeviceAddressInfoKHR(json &name);
    

        json serialize_VkBufferDeviceAddressInfoEXT(VkBufferDeviceAddressInfoEXT name);
        VkBufferDeviceAddressInfoEXT deserialize_VkBufferDeviceAddressInfoEXT(json &name);
    

        json serialize_VkBufferOpaqueCaptureAddressCreateInfo(VkBufferOpaqueCaptureAddressCreateInfo name);
        VkBufferOpaqueCaptureAddressCreateInfo deserialize_VkBufferOpaqueCaptureAddressCreateInfo(json &name);
    

        json serialize_VkBufferOpaqueCaptureAddressCreateInfoKHR(VkBufferOpaqueCaptureAddressCreateInfoKHR name);
        VkBufferOpaqueCaptureAddressCreateInfoKHR deserialize_VkBufferOpaqueCaptureAddressCreateInfoKHR(json &name);
    

        json serialize_VkBufferDeviceAddressCreateInfoEXT(VkBufferDeviceAddressCreateInfoEXT name);
        VkBufferDeviceAddressCreateInfoEXT deserialize_VkBufferDeviceAddressCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceImageViewImageFormatInfoEXT(VkPhysicalDeviceImageViewImageFormatInfoEXT name);
        VkPhysicalDeviceImageViewImageFormatInfoEXT deserialize_VkPhysicalDeviceImageViewImageFormatInfoEXT(json &name);
    

        json serialize_VkFilterCubicImageViewImageFormatPropertiesEXT(VkFilterCubicImageViewImageFormatPropertiesEXT name);
        VkFilterCubicImageViewImageFormatPropertiesEXT deserialize_VkFilterCubicImageViewImageFormatPropertiesEXT(json &name);
    

        json serialize_VkPhysicalDeviceImagelessFramebufferFeatures(VkPhysicalDeviceImagelessFramebufferFeatures name);
        VkPhysicalDeviceImagelessFramebufferFeatures deserialize_VkPhysicalDeviceImagelessFramebufferFeatures(json &name);
    

        json serialize_VkPhysicalDeviceImagelessFramebufferFeaturesKHR(VkPhysicalDeviceImagelessFramebufferFeaturesKHR name);
        VkPhysicalDeviceImagelessFramebufferFeaturesKHR deserialize_VkPhysicalDeviceImagelessFramebufferFeaturesKHR(json &name);
    

        json serialize_VkFramebufferAttachmentsCreateInfo(VkFramebufferAttachmentsCreateInfo name);
        VkFramebufferAttachmentsCreateInfo deserialize_VkFramebufferAttachmentsCreateInfo(json &name);
    

        json serialize_VkFramebufferAttachmentsCreateInfoKHR(VkFramebufferAttachmentsCreateInfoKHR name);
        VkFramebufferAttachmentsCreateInfoKHR deserialize_VkFramebufferAttachmentsCreateInfoKHR(json &name);
    

        json serialize_VkFramebufferAttachmentImageInfo(VkFramebufferAttachmentImageInfo name);
        VkFramebufferAttachmentImageInfo deserialize_VkFramebufferAttachmentImageInfo(json &name);
    

        json serialize_VkFramebufferAttachmentImageInfoKHR(VkFramebufferAttachmentImageInfoKHR name);
        VkFramebufferAttachmentImageInfoKHR deserialize_VkFramebufferAttachmentImageInfoKHR(json &name);
    

        json serialize_VkRenderPassAttachmentBeginInfo(VkRenderPassAttachmentBeginInfo name);
        VkRenderPassAttachmentBeginInfo deserialize_VkRenderPassAttachmentBeginInfo(json &name);
    

        json serialize_VkRenderPassAttachmentBeginInfoKHR(VkRenderPassAttachmentBeginInfoKHR name);
        VkRenderPassAttachmentBeginInfoKHR deserialize_VkRenderPassAttachmentBeginInfoKHR(json &name);
    

        json serialize_VkPhysicalDeviceTextureCompressionASTCHDRFeatures(VkPhysicalDeviceTextureCompressionASTCHDRFeatures name);
        VkPhysicalDeviceTextureCompressionASTCHDRFeatures deserialize_VkPhysicalDeviceTextureCompressionASTCHDRFeatures(json &name);
    

        json serialize_VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT(VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT name);
        VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT deserialize_VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceCooperativeMatrixFeaturesNV(VkPhysicalDeviceCooperativeMatrixFeaturesNV name);
        VkPhysicalDeviceCooperativeMatrixFeaturesNV deserialize_VkPhysicalDeviceCooperativeMatrixFeaturesNV(json &name);
    

        json serialize_VkPhysicalDeviceCooperativeMatrixPropertiesNV(VkPhysicalDeviceCooperativeMatrixPropertiesNV name);
        VkPhysicalDeviceCooperativeMatrixPropertiesNV deserialize_VkPhysicalDeviceCooperativeMatrixPropertiesNV(json &name);
    

        json serialize_VkCooperativeMatrixPropertiesNV(VkCooperativeMatrixPropertiesNV name);
        VkCooperativeMatrixPropertiesNV deserialize_VkCooperativeMatrixPropertiesNV(json &name);
    

        json serialize_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT name);
        VkPhysicalDeviceYcbcrImageArraysFeaturesEXT deserialize_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT(json &name);
    

        json serialize_VkImageViewHandleInfoNVX(VkImageViewHandleInfoNVX name);
        VkImageViewHandleInfoNVX deserialize_VkImageViewHandleInfoNVX(json &name);
    

        json serialize_VkImageViewAddressPropertiesNVX(VkImageViewAddressPropertiesNVX name);
        VkImageViewAddressPropertiesNVX deserialize_VkImageViewAddressPropertiesNVX(json &name);
    

        json serialize_VkPipelineCreationFeedback(VkPipelineCreationFeedback name);
        VkPipelineCreationFeedback deserialize_VkPipelineCreationFeedback(json &name);
    

        json serialize_VkPipelineCreationFeedbackEXT(VkPipelineCreationFeedbackEXT name);
        VkPipelineCreationFeedbackEXT deserialize_VkPipelineCreationFeedbackEXT(json &name);
    

        json serialize_VkPipelineCreationFeedbackCreateInfo(VkPipelineCreationFeedbackCreateInfo name);
        VkPipelineCreationFeedbackCreateInfo deserialize_VkPipelineCreationFeedbackCreateInfo(json &name);
    

        json serialize_VkPipelineCreationFeedbackCreateInfoEXT(VkPipelineCreationFeedbackCreateInfoEXT name);
        VkPipelineCreationFeedbackCreateInfoEXT deserialize_VkPipelineCreationFeedbackCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDevicePresentBarrierFeaturesNV(VkPhysicalDevicePresentBarrierFeaturesNV name);
        VkPhysicalDevicePresentBarrierFeaturesNV deserialize_VkPhysicalDevicePresentBarrierFeaturesNV(json &name);
    

        json serialize_VkSurfaceCapabilitiesPresentBarrierNV(VkSurfaceCapabilitiesPresentBarrierNV name);
        VkSurfaceCapabilitiesPresentBarrierNV deserialize_VkSurfaceCapabilitiesPresentBarrierNV(json &name);
    

        json serialize_VkSwapchainPresentBarrierCreateInfoNV(VkSwapchainPresentBarrierCreateInfoNV name);
        VkSwapchainPresentBarrierCreateInfoNV deserialize_VkSwapchainPresentBarrierCreateInfoNV(json &name);
    

        json serialize_VkPhysicalDevicePerformanceQueryFeaturesKHR(VkPhysicalDevicePerformanceQueryFeaturesKHR name);
        VkPhysicalDevicePerformanceQueryFeaturesKHR deserialize_VkPhysicalDevicePerformanceQueryFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDevicePerformanceQueryPropertiesKHR(VkPhysicalDevicePerformanceQueryPropertiesKHR name);
        VkPhysicalDevicePerformanceQueryPropertiesKHR deserialize_VkPhysicalDevicePerformanceQueryPropertiesKHR(json &name);
    

        json serialize_VkPerformanceCounterKHR(VkPerformanceCounterKHR name);
        VkPerformanceCounterKHR deserialize_VkPerformanceCounterKHR(json &name);
    

        json serialize_VkPerformanceCounterDescriptionKHR(VkPerformanceCounterDescriptionKHR name);
        VkPerformanceCounterDescriptionKHR deserialize_VkPerformanceCounterDescriptionKHR(json &name);
    

        json serialize_VkQueryPoolPerformanceCreateInfoKHR(VkQueryPoolPerformanceCreateInfoKHR name);
        VkQueryPoolPerformanceCreateInfoKHR deserialize_VkQueryPoolPerformanceCreateInfoKHR(json &name);
    

        json serialize_VkPerformanceCounterResultKHR(VkPerformanceCounterResultKHR name);
        VkPerformanceCounterResultKHR deserialize_VkPerformanceCounterResultKHR(json &name);
    

        json serialize_VkAcquireProfilingLockInfoKHR(VkAcquireProfilingLockInfoKHR name);
        VkAcquireProfilingLockInfoKHR deserialize_VkAcquireProfilingLockInfoKHR(json &name);
    

        json serialize_VkPerformanceQuerySubmitInfoKHR(VkPerformanceQuerySubmitInfoKHR name);
        VkPerformanceQuerySubmitInfoKHR deserialize_VkPerformanceQuerySubmitInfoKHR(json &name);
    

        json serialize_VkHeadlessSurfaceCreateInfoEXT(VkHeadlessSurfaceCreateInfoEXT name);
        VkHeadlessSurfaceCreateInfoEXT deserialize_VkHeadlessSurfaceCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceCoverageReductionModeFeaturesNV(VkPhysicalDeviceCoverageReductionModeFeaturesNV name);
        VkPhysicalDeviceCoverageReductionModeFeaturesNV deserialize_VkPhysicalDeviceCoverageReductionModeFeaturesNV(json &name);
    

        json serialize_VkPipelineCoverageReductionStateCreateInfoNV(VkPipelineCoverageReductionStateCreateInfoNV name);
        VkPipelineCoverageReductionStateCreateInfoNV deserialize_VkPipelineCoverageReductionStateCreateInfoNV(json &name);
    

        json serialize_VkFramebufferMixedSamplesCombinationNV(VkFramebufferMixedSamplesCombinationNV name);
        VkFramebufferMixedSamplesCombinationNV deserialize_VkFramebufferMixedSamplesCombinationNV(json &name);
    

        json serialize_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL name);
        VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL deserialize_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(json &name);
    

        json serialize_VkPerformanceValueDataINTEL(VkPerformanceValueDataINTEL name);
        VkPerformanceValueDataINTEL deserialize_VkPerformanceValueDataINTEL(json &name);
    

        json serialize_VkPerformanceValueINTEL(VkPerformanceValueINTEL name);
        VkPerformanceValueINTEL deserialize_VkPerformanceValueINTEL(json &name);
    

        json serialize_VkInitializePerformanceApiInfoINTEL(VkInitializePerformanceApiInfoINTEL name);
        VkInitializePerformanceApiInfoINTEL deserialize_VkInitializePerformanceApiInfoINTEL(json &name);
    

        json serialize_VkQueryPoolPerformanceQueryCreateInfoINTEL(VkQueryPoolPerformanceQueryCreateInfoINTEL name);
        VkQueryPoolPerformanceQueryCreateInfoINTEL deserialize_VkQueryPoolPerformanceQueryCreateInfoINTEL(json &name);
    

        json serialize_VkQueryPoolCreateInfoINTEL(VkQueryPoolCreateInfoINTEL name);
        VkQueryPoolCreateInfoINTEL deserialize_VkQueryPoolCreateInfoINTEL(json &name);
    

        json serialize_VkPerformanceMarkerInfoINTEL(VkPerformanceMarkerInfoINTEL name);
        VkPerformanceMarkerInfoINTEL deserialize_VkPerformanceMarkerInfoINTEL(json &name);
    

        json serialize_VkPerformanceStreamMarkerInfoINTEL(VkPerformanceStreamMarkerInfoINTEL name);
        VkPerformanceStreamMarkerInfoINTEL deserialize_VkPerformanceStreamMarkerInfoINTEL(json &name);
    

        json serialize_VkPerformanceOverrideInfoINTEL(VkPerformanceOverrideInfoINTEL name);
        VkPerformanceOverrideInfoINTEL deserialize_VkPerformanceOverrideInfoINTEL(json &name);
    

        json serialize_VkPerformanceConfigurationAcquireInfoINTEL(VkPerformanceConfigurationAcquireInfoINTEL name);
        VkPerformanceConfigurationAcquireInfoINTEL deserialize_VkPerformanceConfigurationAcquireInfoINTEL(json &name);
    

        json serialize_VkPhysicalDeviceShaderClockFeaturesKHR(VkPhysicalDeviceShaderClockFeaturesKHR name);
        VkPhysicalDeviceShaderClockFeaturesKHR deserialize_VkPhysicalDeviceShaderClockFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceIndexTypeUint8FeaturesEXT(VkPhysicalDeviceIndexTypeUint8FeaturesEXT name);
        VkPhysicalDeviceIndexTypeUint8FeaturesEXT deserialize_VkPhysicalDeviceIndexTypeUint8FeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV(VkPhysicalDeviceShaderSMBuiltinsPropertiesNV name);
        VkPhysicalDeviceShaderSMBuiltinsPropertiesNV deserialize_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV(json &name);
    

        json serialize_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV(VkPhysicalDeviceShaderSMBuiltinsFeaturesNV name);
        VkPhysicalDeviceShaderSMBuiltinsFeaturesNV deserialize_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV(json &name);
    

        json serialize_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT name);
        VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT deserialize_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures name);
        VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures deserialize_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures(json &name);
    

        json serialize_VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR(VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR name);
        VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR deserialize_VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR(json &name);
    

        json serialize_VkAttachmentReferenceStencilLayout(VkAttachmentReferenceStencilLayout name);
        VkAttachmentReferenceStencilLayout deserialize_VkAttachmentReferenceStencilLayout(json &name);
    

        json serialize_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT name);
        VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT deserialize_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(json &name);
    

        json serialize_VkAttachmentReferenceStencilLayoutKHR(VkAttachmentReferenceStencilLayoutKHR name);
        VkAttachmentReferenceStencilLayoutKHR deserialize_VkAttachmentReferenceStencilLayoutKHR(json &name);
    

        json serialize_VkAttachmentDescriptionStencilLayout(VkAttachmentDescriptionStencilLayout name);
        VkAttachmentDescriptionStencilLayout deserialize_VkAttachmentDescriptionStencilLayout(json &name);
    

        json serialize_VkAttachmentDescriptionStencilLayoutKHR(VkAttachmentDescriptionStencilLayoutKHR name);
        VkAttachmentDescriptionStencilLayoutKHR deserialize_VkAttachmentDescriptionStencilLayoutKHR(json &name);
    

        json serialize_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR name);
        VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR deserialize_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR(json &name);
    

        json serialize_VkPipelineInfoKHR(VkPipelineInfoKHR name);
        VkPipelineInfoKHR deserialize_VkPipelineInfoKHR(json &name);
    

        json serialize_VkPipelineInfoEXT(VkPipelineInfoEXT name);
        VkPipelineInfoEXT deserialize_VkPipelineInfoEXT(json &name);
    

        json serialize_VkPipelineExecutablePropertiesKHR(VkPipelineExecutablePropertiesKHR name);
        VkPipelineExecutablePropertiesKHR deserialize_VkPipelineExecutablePropertiesKHR(json &name);
    

        json serialize_VkPipelineExecutableInfoKHR(VkPipelineExecutableInfoKHR name);
        VkPipelineExecutableInfoKHR deserialize_VkPipelineExecutableInfoKHR(json &name);
    

        json serialize_VkPipelineExecutableStatisticValueKHR(VkPipelineExecutableStatisticValueKHR name);
        VkPipelineExecutableStatisticValueKHR deserialize_VkPipelineExecutableStatisticValueKHR(json &name);
    

        json serialize_VkPipelineExecutableStatisticKHR(VkPipelineExecutableStatisticKHR name);
        VkPipelineExecutableStatisticKHR deserialize_VkPipelineExecutableStatisticKHR(json &name);
    

        json serialize_VkPipelineExecutableInternalRepresentationKHR(VkPipelineExecutableInternalRepresentationKHR name);
        VkPipelineExecutableInternalRepresentationKHR deserialize_VkPipelineExecutableInternalRepresentationKHR(json &name);
    

        json serialize_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures name);
        VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures deserialize_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures(json &name);
    

        json serialize_VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT(VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT name);
        VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT deserialize_VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT name);
        VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT deserialize_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceTexelBufferAlignmentProperties(VkPhysicalDeviceTexelBufferAlignmentProperties name);
        VkPhysicalDeviceTexelBufferAlignmentProperties deserialize_VkPhysicalDeviceTexelBufferAlignmentProperties(json &name);
    

        json serialize_VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT(VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT name);
        VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT deserialize_VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT(json &name);
    

        json serialize_VkPhysicalDeviceSubgroupSizeControlFeatures(VkPhysicalDeviceSubgroupSizeControlFeatures name);
        VkPhysicalDeviceSubgroupSizeControlFeatures deserialize_VkPhysicalDeviceSubgroupSizeControlFeatures(json &name);
    

        json serialize_VkPhysicalDeviceSubgroupSizeControlFeaturesEXT(VkPhysicalDeviceSubgroupSizeControlFeaturesEXT name);
        VkPhysicalDeviceSubgroupSizeControlFeaturesEXT deserialize_VkPhysicalDeviceSubgroupSizeControlFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceSubgroupSizeControlProperties(VkPhysicalDeviceSubgroupSizeControlProperties name);
        VkPhysicalDeviceSubgroupSizeControlProperties deserialize_VkPhysicalDeviceSubgroupSizeControlProperties(json &name);
    

        json serialize_VkPhysicalDeviceSubgroupSizeControlPropertiesEXT(VkPhysicalDeviceSubgroupSizeControlPropertiesEXT name);
        VkPhysicalDeviceSubgroupSizeControlPropertiesEXT deserialize_VkPhysicalDeviceSubgroupSizeControlPropertiesEXT(json &name);
    

        json serialize_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo(VkPipelineShaderStageRequiredSubgroupSizeCreateInfo name);
        VkPipelineShaderStageRequiredSubgroupSizeCreateInfo deserialize_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo(json &name);
    

        json serialize_VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT(VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT name);
        VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT deserialize_VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT(json &name);
    

        json serialize_VkShaderRequiredSubgroupSizeCreateInfoEXT(VkShaderRequiredSubgroupSizeCreateInfoEXT name);
        VkShaderRequiredSubgroupSizeCreateInfoEXT deserialize_VkShaderRequiredSubgroupSizeCreateInfoEXT(json &name);
    

        json serialize_VkSubpassShadingPipelineCreateInfoHUAWEI(VkSubpassShadingPipelineCreateInfoHUAWEI name);
        VkSubpassShadingPipelineCreateInfoHUAWEI deserialize_VkSubpassShadingPipelineCreateInfoHUAWEI(json &name);
    

        json serialize_VkPhysicalDeviceSubpassShadingPropertiesHUAWEI(VkPhysicalDeviceSubpassShadingPropertiesHUAWEI name);
        VkPhysicalDeviceSubpassShadingPropertiesHUAWEI deserialize_VkPhysicalDeviceSubpassShadingPropertiesHUAWEI(json &name);
    

        json serialize_VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI(VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI name);
        VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI deserialize_VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI(json &name);
    

        json serialize_VkMemoryOpaqueCaptureAddressAllocateInfo(VkMemoryOpaqueCaptureAddressAllocateInfo name);
        VkMemoryOpaqueCaptureAddressAllocateInfo deserialize_VkMemoryOpaqueCaptureAddressAllocateInfo(json &name);
    

        json serialize_VkMemoryOpaqueCaptureAddressAllocateInfoKHR(VkMemoryOpaqueCaptureAddressAllocateInfoKHR name);
        VkMemoryOpaqueCaptureAddressAllocateInfoKHR deserialize_VkMemoryOpaqueCaptureAddressAllocateInfoKHR(json &name);
    

        json serialize_VkDeviceMemoryOpaqueCaptureAddressInfo(VkDeviceMemoryOpaqueCaptureAddressInfo name);
        VkDeviceMemoryOpaqueCaptureAddressInfo deserialize_VkDeviceMemoryOpaqueCaptureAddressInfo(json &name);
    

        json serialize_VkDeviceMemoryOpaqueCaptureAddressInfoKHR(VkDeviceMemoryOpaqueCaptureAddressInfoKHR name);
        VkDeviceMemoryOpaqueCaptureAddressInfoKHR deserialize_VkDeviceMemoryOpaqueCaptureAddressInfoKHR(json &name);
    

        json serialize_VkPhysicalDeviceLineRasterizationFeaturesEXT(VkPhysicalDeviceLineRasterizationFeaturesEXT name);
        VkPhysicalDeviceLineRasterizationFeaturesEXT deserialize_VkPhysicalDeviceLineRasterizationFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceLineRasterizationPropertiesEXT(VkPhysicalDeviceLineRasterizationPropertiesEXT name);
        VkPhysicalDeviceLineRasterizationPropertiesEXT deserialize_VkPhysicalDeviceLineRasterizationPropertiesEXT(json &name);
    

        json serialize_VkPipelineRasterizationLineStateCreateInfoEXT(VkPipelineRasterizationLineStateCreateInfoEXT name);
        VkPipelineRasterizationLineStateCreateInfoEXT deserialize_VkPipelineRasterizationLineStateCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDevicePipelineCreationCacheControlFeatures(VkPhysicalDevicePipelineCreationCacheControlFeatures name);
        VkPhysicalDevicePipelineCreationCacheControlFeatures deserialize_VkPhysicalDevicePipelineCreationCacheControlFeatures(json &name);
    

        json serialize_VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT(VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT name);
        VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT deserialize_VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceVulkan11Features(VkPhysicalDeviceVulkan11Features name);
        VkPhysicalDeviceVulkan11Features deserialize_VkPhysicalDeviceVulkan11Features(json &name);
    

        json serialize_VkPhysicalDeviceVulkan11Properties(VkPhysicalDeviceVulkan11Properties name);
        VkPhysicalDeviceVulkan11Properties deserialize_VkPhysicalDeviceVulkan11Properties(json &name);
    

        json serialize_VkPhysicalDeviceVulkan12Features(VkPhysicalDeviceVulkan12Features name);
        VkPhysicalDeviceVulkan12Features deserialize_VkPhysicalDeviceVulkan12Features(json &name);
    

        json serialize_VkPhysicalDeviceVulkan12Properties(VkPhysicalDeviceVulkan12Properties name);
        VkPhysicalDeviceVulkan12Properties deserialize_VkPhysicalDeviceVulkan12Properties(json &name);
    

        json serialize_VkPhysicalDeviceVulkan13Features(VkPhysicalDeviceVulkan13Features name);
        VkPhysicalDeviceVulkan13Features deserialize_VkPhysicalDeviceVulkan13Features(json &name);
    

        json serialize_VkPhysicalDeviceVulkan13Properties(VkPhysicalDeviceVulkan13Properties name);
        VkPhysicalDeviceVulkan13Properties deserialize_VkPhysicalDeviceVulkan13Properties(json &name);
    

        json serialize_VkPipelineCompilerControlCreateInfoAMD(VkPipelineCompilerControlCreateInfoAMD name);
        VkPipelineCompilerControlCreateInfoAMD deserialize_VkPipelineCompilerControlCreateInfoAMD(json &name);
    

        json serialize_VkPhysicalDeviceCoherentMemoryFeaturesAMD(VkPhysicalDeviceCoherentMemoryFeaturesAMD name);
        VkPhysicalDeviceCoherentMemoryFeaturesAMD deserialize_VkPhysicalDeviceCoherentMemoryFeaturesAMD(json &name);
    

        json serialize_VkPhysicalDeviceToolProperties(VkPhysicalDeviceToolProperties name);
        VkPhysicalDeviceToolProperties deserialize_VkPhysicalDeviceToolProperties(json &name);
    

        json serialize_VkPhysicalDeviceToolPropertiesEXT(VkPhysicalDeviceToolPropertiesEXT name);
        VkPhysicalDeviceToolPropertiesEXT deserialize_VkPhysicalDeviceToolPropertiesEXT(json &name);
    

        json serialize_VkSamplerCustomBorderColorCreateInfoEXT(VkSamplerCustomBorderColorCreateInfoEXT name);
        VkSamplerCustomBorderColorCreateInfoEXT deserialize_VkSamplerCustomBorderColorCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceCustomBorderColorPropertiesEXT(VkPhysicalDeviceCustomBorderColorPropertiesEXT name);
        VkPhysicalDeviceCustomBorderColorPropertiesEXT deserialize_VkPhysicalDeviceCustomBorderColorPropertiesEXT(json &name);
    

        json serialize_VkPhysicalDeviceCustomBorderColorFeaturesEXT(VkPhysicalDeviceCustomBorderColorFeaturesEXT name);
        VkPhysicalDeviceCustomBorderColorFeaturesEXT deserialize_VkPhysicalDeviceCustomBorderColorFeaturesEXT(json &name);
    

        json serialize_VkSamplerBorderColorComponentMappingCreateInfoEXT(VkSamplerBorderColorComponentMappingCreateInfoEXT name);
        VkSamplerBorderColorComponentMappingCreateInfoEXT deserialize_VkSamplerBorderColorComponentMappingCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT(VkPhysicalDeviceBorderColorSwizzleFeaturesEXT name);
        VkPhysicalDeviceBorderColorSwizzleFeaturesEXT deserialize_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT(json &name);
    

        json serialize_VkDeviceOrHostAddressKHR(VkDeviceOrHostAddressKHR name);
        VkDeviceOrHostAddressKHR deserialize_VkDeviceOrHostAddressKHR(json &name);
    

        json serialize_VkDeviceOrHostAddressConstKHR(VkDeviceOrHostAddressConstKHR name);
        VkDeviceOrHostAddressConstKHR deserialize_VkDeviceOrHostAddressConstKHR(json &name);
    

        json serialize_VkAccelerationStructureGeometryTrianglesDataKHR(VkAccelerationStructureGeometryTrianglesDataKHR name);
        VkAccelerationStructureGeometryTrianglesDataKHR deserialize_VkAccelerationStructureGeometryTrianglesDataKHR(json &name);
    

        json serialize_VkAccelerationStructureGeometryAabbsDataKHR(VkAccelerationStructureGeometryAabbsDataKHR name);
        VkAccelerationStructureGeometryAabbsDataKHR deserialize_VkAccelerationStructureGeometryAabbsDataKHR(json &name);
    

        json serialize_VkAccelerationStructureGeometryInstancesDataKHR(VkAccelerationStructureGeometryInstancesDataKHR name);
        VkAccelerationStructureGeometryInstancesDataKHR deserialize_VkAccelerationStructureGeometryInstancesDataKHR(json &name);
    

        json serialize_VkAccelerationStructureGeometryDataKHR(VkAccelerationStructureGeometryDataKHR name);
        VkAccelerationStructureGeometryDataKHR deserialize_VkAccelerationStructureGeometryDataKHR(json &name);
    

        json serialize_VkAccelerationStructureGeometryKHR(VkAccelerationStructureGeometryKHR name);
        VkAccelerationStructureGeometryKHR deserialize_VkAccelerationStructureGeometryKHR(json &name);
    

        json serialize_VkAccelerationStructureBuildGeometryInfoKHR(VkAccelerationStructureBuildGeometryInfoKHR name);
        VkAccelerationStructureBuildGeometryInfoKHR deserialize_VkAccelerationStructureBuildGeometryInfoKHR(json &name);
    

        json serialize_VkAccelerationStructureBuildRangeInfoKHR(VkAccelerationStructureBuildRangeInfoKHR name);
        VkAccelerationStructureBuildRangeInfoKHR deserialize_VkAccelerationStructureBuildRangeInfoKHR(json &name);
    

        json serialize_VkAccelerationStructureCreateInfoKHR(VkAccelerationStructureCreateInfoKHR name);
        VkAccelerationStructureCreateInfoKHR deserialize_VkAccelerationStructureCreateInfoKHR(json &name);
    

        json serialize_VkAabbPositionsKHR(VkAabbPositionsKHR name);
        VkAabbPositionsKHR deserialize_VkAabbPositionsKHR(json &name);
    

        json serialize_VkAabbPositionsNV(VkAabbPositionsNV name);
        VkAabbPositionsNV deserialize_VkAabbPositionsNV(json &name);
    

        json serialize_VkTransformMatrixKHR(VkTransformMatrixKHR name);
        VkTransformMatrixKHR deserialize_VkTransformMatrixKHR(json &name);
    

        json serialize_VkTransformMatrixNV(VkTransformMatrixNV name);
        VkTransformMatrixNV deserialize_VkTransformMatrixNV(json &name);
    

        json serialize_VkAccelerationStructureInstanceKHR(VkAccelerationStructureInstanceKHR name);
        VkAccelerationStructureInstanceKHR deserialize_VkAccelerationStructureInstanceKHR(json &name);
    

        json serialize_VkAccelerationStructureInstanceNV(VkAccelerationStructureInstanceNV name);
        VkAccelerationStructureInstanceNV deserialize_VkAccelerationStructureInstanceNV(json &name);
    

        json serialize_VkAccelerationStructureDeviceAddressInfoKHR(VkAccelerationStructureDeviceAddressInfoKHR name);
        VkAccelerationStructureDeviceAddressInfoKHR deserialize_VkAccelerationStructureDeviceAddressInfoKHR(json &name);
    

        json serialize_VkAccelerationStructureVersionInfoKHR(VkAccelerationStructureVersionInfoKHR name);
        VkAccelerationStructureVersionInfoKHR deserialize_VkAccelerationStructureVersionInfoKHR(json &name);
    

        json serialize_VkCopyAccelerationStructureInfoKHR(VkCopyAccelerationStructureInfoKHR name);
        VkCopyAccelerationStructureInfoKHR deserialize_VkCopyAccelerationStructureInfoKHR(json &name);
    

        json serialize_VkCopyAccelerationStructureToMemoryInfoKHR(VkCopyAccelerationStructureToMemoryInfoKHR name);
        VkCopyAccelerationStructureToMemoryInfoKHR deserialize_VkCopyAccelerationStructureToMemoryInfoKHR(json &name);
    

        json serialize_VkCopyMemoryToAccelerationStructureInfoKHR(VkCopyMemoryToAccelerationStructureInfoKHR name);
        VkCopyMemoryToAccelerationStructureInfoKHR deserialize_VkCopyMemoryToAccelerationStructureInfoKHR(json &name);
    

        json serialize_VkRayTracingPipelineInterfaceCreateInfoKHR(VkRayTracingPipelineInterfaceCreateInfoKHR name);
        VkRayTracingPipelineInterfaceCreateInfoKHR deserialize_VkRayTracingPipelineInterfaceCreateInfoKHR(json &name);
    

        json serialize_VkPipelineLibraryCreateInfoKHR(VkPipelineLibraryCreateInfoKHR name);
        VkPipelineLibraryCreateInfoKHR deserialize_VkPipelineLibraryCreateInfoKHR(json &name);
    

        json serialize_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT name);
        VkPhysicalDeviceExtendedDynamicStateFeaturesEXT deserialize_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT name);
        VkPhysicalDeviceExtendedDynamicState2FeaturesEXT deserialize_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT(VkPhysicalDeviceExtendedDynamicState3FeaturesEXT name);
        VkPhysicalDeviceExtendedDynamicState3FeaturesEXT deserialize_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT(VkPhysicalDeviceExtendedDynamicState3PropertiesEXT name);
        VkPhysicalDeviceExtendedDynamicState3PropertiesEXT deserialize_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT(json &name);
    

        json serialize_VkColorBlendEquationEXT(VkColorBlendEquationEXT name);
        VkColorBlendEquationEXT deserialize_VkColorBlendEquationEXT(json &name);
    

        json serialize_VkColorBlendAdvancedEXT(VkColorBlendAdvancedEXT name);
        VkColorBlendAdvancedEXT deserialize_VkColorBlendAdvancedEXT(json &name);
    

        json serialize_VkRenderPassTransformBeginInfoQCOM(VkRenderPassTransformBeginInfoQCOM name);
        VkRenderPassTransformBeginInfoQCOM deserialize_VkRenderPassTransformBeginInfoQCOM(json &name);
    

        json serialize_VkCopyCommandTransformInfoQCOM(VkCopyCommandTransformInfoQCOM name);
        VkCopyCommandTransformInfoQCOM deserialize_VkCopyCommandTransformInfoQCOM(json &name);
    

        json serialize_VkCommandBufferInheritanceRenderPassTransformInfoQCOM(VkCommandBufferInheritanceRenderPassTransformInfoQCOM name);
        VkCommandBufferInheritanceRenderPassTransformInfoQCOM deserialize_VkCommandBufferInheritanceRenderPassTransformInfoQCOM(json &name);
    

        json serialize_VkPhysicalDeviceDiagnosticsConfigFeaturesNV(VkPhysicalDeviceDiagnosticsConfigFeaturesNV name);
        VkPhysicalDeviceDiagnosticsConfigFeaturesNV deserialize_VkPhysicalDeviceDiagnosticsConfigFeaturesNV(json &name);
    

        json serialize_VkDeviceDiagnosticsConfigCreateInfoNV(VkDeviceDiagnosticsConfigCreateInfoNV name);
        VkDeviceDiagnosticsConfigCreateInfoNV deserialize_VkDeviceDiagnosticsConfigCreateInfoNV(json &name);
    

        json serialize_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures name);
        VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures deserialize_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(json &name);
    

        json serialize_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR name);
        VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR deserialize_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR name);
        VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR deserialize_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceRobustness2FeaturesEXT(VkPhysicalDeviceRobustness2FeaturesEXT name);
        VkPhysicalDeviceRobustness2FeaturesEXT deserialize_VkPhysicalDeviceRobustness2FeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceRobustness2PropertiesEXT(VkPhysicalDeviceRobustness2PropertiesEXT name);
        VkPhysicalDeviceRobustness2PropertiesEXT deserialize_VkPhysicalDeviceRobustness2PropertiesEXT(json &name);
    

        json serialize_VkPhysicalDeviceImageRobustnessFeatures(VkPhysicalDeviceImageRobustnessFeatures name);
        VkPhysicalDeviceImageRobustnessFeatures deserialize_VkPhysicalDeviceImageRobustnessFeatures(json &name);
    

        json serialize_VkPhysicalDeviceImageRobustnessFeaturesEXT(VkPhysicalDeviceImageRobustnessFeaturesEXT name);
        VkPhysicalDeviceImageRobustnessFeaturesEXT deserialize_VkPhysicalDeviceImageRobustnessFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR name);
        VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR deserialize_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDevice4444FormatsFeaturesEXT(VkPhysicalDevice4444FormatsFeaturesEXT name);
        VkPhysicalDevice4444FormatsFeaturesEXT deserialize_VkPhysicalDevice4444FormatsFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI name);
        VkPhysicalDeviceSubpassShadingFeaturesHUAWEI deserialize_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI(json &name);
    

        json serialize_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI(VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI name);
        VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI deserialize_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI(json &name);
    

        json serialize_VkBufferCopy2(VkBufferCopy2 name);
        VkBufferCopy2 deserialize_VkBufferCopy2(json &name);
    

        json serialize_VkBufferCopy2KHR(VkBufferCopy2KHR name);
        VkBufferCopy2KHR deserialize_VkBufferCopy2KHR(json &name);
    

        json serialize_VkImageCopy2(VkImageCopy2 name);
        VkImageCopy2 deserialize_VkImageCopy2(json &name);
    

        json serialize_VkImageCopy2KHR(VkImageCopy2KHR name);
        VkImageCopy2KHR deserialize_VkImageCopy2KHR(json &name);
    

        json serialize_VkImageBlit2(VkImageBlit2 name);
        VkImageBlit2 deserialize_VkImageBlit2(json &name);
    

        json serialize_VkImageBlit2KHR(VkImageBlit2KHR name);
        VkImageBlit2KHR deserialize_VkImageBlit2KHR(json &name);
    

        json serialize_VkBufferImageCopy2(VkBufferImageCopy2 name);
        VkBufferImageCopy2 deserialize_VkBufferImageCopy2(json &name);
    

        json serialize_VkBufferImageCopy2KHR(VkBufferImageCopy2KHR name);
        VkBufferImageCopy2KHR deserialize_VkBufferImageCopy2KHR(json &name);
    

        json serialize_VkImageResolve2(VkImageResolve2 name);
        VkImageResolve2 deserialize_VkImageResolve2(json &name);
    

        json serialize_VkImageResolve2KHR(VkImageResolve2KHR name);
        VkImageResolve2KHR deserialize_VkImageResolve2KHR(json &name);
    

        json serialize_VkCopyBufferInfo2(VkCopyBufferInfo2 name);
        VkCopyBufferInfo2 deserialize_VkCopyBufferInfo2(json &name);
    

        json serialize_VkCopyBufferInfo2KHR(VkCopyBufferInfo2KHR name);
        VkCopyBufferInfo2KHR deserialize_VkCopyBufferInfo2KHR(json &name);
    

        json serialize_VkCopyImageInfo2(VkCopyImageInfo2 name);
        VkCopyImageInfo2 deserialize_VkCopyImageInfo2(json &name);
    

        json serialize_VkCopyImageInfo2KHR(VkCopyImageInfo2KHR name);
        VkCopyImageInfo2KHR deserialize_VkCopyImageInfo2KHR(json &name);
    

        json serialize_VkBlitImageInfo2(VkBlitImageInfo2 name);
        VkBlitImageInfo2 deserialize_VkBlitImageInfo2(json &name);
    

        json serialize_VkBlitImageInfo2KHR(VkBlitImageInfo2KHR name);
        VkBlitImageInfo2KHR deserialize_VkBlitImageInfo2KHR(json &name);
    

        json serialize_VkCopyBufferToImageInfo2(VkCopyBufferToImageInfo2 name);
        VkCopyBufferToImageInfo2 deserialize_VkCopyBufferToImageInfo2(json &name);
    

        json serialize_VkCopyBufferToImageInfo2KHR(VkCopyBufferToImageInfo2KHR name);
        VkCopyBufferToImageInfo2KHR deserialize_VkCopyBufferToImageInfo2KHR(json &name);
    

        json serialize_VkCopyImageToBufferInfo2(VkCopyImageToBufferInfo2 name);
        VkCopyImageToBufferInfo2 deserialize_VkCopyImageToBufferInfo2(json &name);
    

        json serialize_VkCopyImageToBufferInfo2KHR(VkCopyImageToBufferInfo2KHR name);
        VkCopyImageToBufferInfo2KHR deserialize_VkCopyImageToBufferInfo2KHR(json &name);
    

        json serialize_VkResolveImageInfo2(VkResolveImageInfo2 name);
        VkResolveImageInfo2 deserialize_VkResolveImageInfo2(json &name);
    

        json serialize_VkResolveImageInfo2KHR(VkResolveImageInfo2KHR name);
        VkResolveImageInfo2KHR deserialize_VkResolveImageInfo2KHR(json &name);
    

        json serialize_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT name);
        VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT deserialize_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT(json &name);
    

        json serialize_VkFragmentShadingRateAttachmentInfoKHR(VkFragmentShadingRateAttachmentInfoKHR name);
        VkFragmentShadingRateAttachmentInfoKHR deserialize_VkFragmentShadingRateAttachmentInfoKHR(json &name);
    

        json serialize_VkPipelineFragmentShadingRateStateCreateInfoKHR(VkPipelineFragmentShadingRateStateCreateInfoKHR name);
        VkPipelineFragmentShadingRateStateCreateInfoKHR deserialize_VkPipelineFragmentShadingRateStateCreateInfoKHR(json &name);
    

        json serialize_VkPhysicalDeviceFragmentShadingRateFeaturesKHR(VkPhysicalDeviceFragmentShadingRateFeaturesKHR name);
        VkPhysicalDeviceFragmentShadingRateFeaturesKHR deserialize_VkPhysicalDeviceFragmentShadingRateFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceFragmentShadingRatePropertiesKHR(VkPhysicalDeviceFragmentShadingRatePropertiesKHR name);
        VkPhysicalDeviceFragmentShadingRatePropertiesKHR deserialize_VkPhysicalDeviceFragmentShadingRatePropertiesKHR(json &name);
    

        json serialize_VkPhysicalDeviceFragmentShadingRateKHR(VkPhysicalDeviceFragmentShadingRateKHR name);
        VkPhysicalDeviceFragmentShadingRateKHR deserialize_VkPhysicalDeviceFragmentShadingRateKHR(json &name);
    

        json serialize_VkPhysicalDeviceShaderTerminateInvocationFeatures(VkPhysicalDeviceShaderTerminateInvocationFeatures name);
        VkPhysicalDeviceShaderTerminateInvocationFeatures deserialize_VkPhysicalDeviceShaderTerminateInvocationFeatures(json &name);
    

        json serialize_VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR(VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR name);
        VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR deserialize_VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV(VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV name);
        VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV deserialize_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV(json &name);
    

        json serialize_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV(VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV name);
        VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV deserialize_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV(json &name);
    

        json serialize_VkPipelineFragmentShadingRateEnumStateCreateInfoNV(VkPipelineFragmentShadingRateEnumStateCreateInfoNV name);
        VkPipelineFragmentShadingRateEnumStateCreateInfoNV deserialize_VkPipelineFragmentShadingRateEnumStateCreateInfoNV(json &name);
    

        json serialize_VkAccelerationStructureBuildSizesInfoKHR(VkAccelerationStructureBuildSizesInfoKHR name);
        VkAccelerationStructureBuildSizesInfoKHR deserialize_VkAccelerationStructureBuildSizesInfoKHR(json &name);
    

        json serialize_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT(VkPhysicalDeviceImage2DViewOf3DFeaturesEXT name);
        VkPhysicalDeviceImage2DViewOf3DFeaturesEXT deserialize_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT(VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT name);
        VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT deserialize_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT name);
        VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT deserialize_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT(VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT name);
        VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT deserialize_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE(VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE name);
        VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE deserialize_VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE(json &name);
    

        json serialize_VkMutableDescriptorTypeListEXT(VkMutableDescriptorTypeListEXT name);
        VkMutableDescriptorTypeListEXT deserialize_VkMutableDescriptorTypeListEXT(json &name);
    

        json serialize_VkMutableDescriptorTypeListVALVE(VkMutableDescriptorTypeListVALVE name);
        VkMutableDescriptorTypeListVALVE deserialize_VkMutableDescriptorTypeListVALVE(json &name);
    

        json serialize_VkMutableDescriptorTypeCreateInfoEXT(VkMutableDescriptorTypeCreateInfoEXT name);
        VkMutableDescriptorTypeCreateInfoEXT deserialize_VkMutableDescriptorTypeCreateInfoEXT(json &name);
    

        json serialize_VkMutableDescriptorTypeCreateInfoVALVE(VkMutableDescriptorTypeCreateInfoVALVE name);
        VkMutableDescriptorTypeCreateInfoVALVE deserialize_VkMutableDescriptorTypeCreateInfoVALVE(json &name);
    

        json serialize_VkPhysicalDeviceDepthClipControlFeaturesEXT(VkPhysicalDeviceDepthClipControlFeaturesEXT name);
        VkPhysicalDeviceDepthClipControlFeaturesEXT deserialize_VkPhysicalDeviceDepthClipControlFeaturesEXT(json &name);
    

        json serialize_VkPipelineViewportDepthClipControlCreateInfoEXT(VkPipelineViewportDepthClipControlCreateInfoEXT name);
        VkPipelineViewportDepthClipControlCreateInfoEXT deserialize_VkPipelineViewportDepthClipControlCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT name);
        VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT deserialize_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV(VkPhysicalDeviceExternalMemoryRDMAFeaturesNV name);
        VkPhysicalDeviceExternalMemoryRDMAFeaturesNV deserialize_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV(json &name);
    

        json serialize_VkVertexInputBindingDescription2EXT(VkVertexInputBindingDescription2EXT name);
        VkVertexInputBindingDescription2EXT deserialize_VkVertexInputBindingDescription2EXT(json &name);
    

        json serialize_VkVertexInputAttributeDescription2EXT(VkVertexInputAttributeDescription2EXT name);
        VkVertexInputAttributeDescription2EXT deserialize_VkVertexInputAttributeDescription2EXT(json &name);
    

        json serialize_VkPhysicalDeviceColorWriteEnableFeaturesEXT(VkPhysicalDeviceColorWriteEnableFeaturesEXT name);
        VkPhysicalDeviceColorWriteEnableFeaturesEXT deserialize_VkPhysicalDeviceColorWriteEnableFeaturesEXT(json &name);
    

        json serialize_VkPipelineColorWriteCreateInfoEXT(VkPipelineColorWriteCreateInfoEXT name);
        VkPipelineColorWriteCreateInfoEXT deserialize_VkPipelineColorWriteCreateInfoEXT(json &name);
    

        json serialize_VkMemoryBarrier2(VkMemoryBarrier2 name);
        VkMemoryBarrier2 deserialize_VkMemoryBarrier2(json &name);
    

        json serialize_VkMemoryBarrier2KHR(VkMemoryBarrier2KHR name);
        VkMemoryBarrier2KHR deserialize_VkMemoryBarrier2KHR(json &name);
    

        json serialize_VkImageMemoryBarrier2(VkImageMemoryBarrier2 name);
        VkImageMemoryBarrier2 deserialize_VkImageMemoryBarrier2(json &name);
    

        json serialize_VkImageMemoryBarrier2KHR(VkImageMemoryBarrier2KHR name);
        VkImageMemoryBarrier2KHR deserialize_VkImageMemoryBarrier2KHR(json &name);
    

        json serialize_VkBufferMemoryBarrier2(VkBufferMemoryBarrier2 name);
        VkBufferMemoryBarrier2 deserialize_VkBufferMemoryBarrier2(json &name);
    

        json serialize_VkBufferMemoryBarrier2KHR(VkBufferMemoryBarrier2KHR name);
        VkBufferMemoryBarrier2KHR deserialize_VkBufferMemoryBarrier2KHR(json &name);
    

        json serialize_VkDependencyInfo(VkDependencyInfo name);
        VkDependencyInfo deserialize_VkDependencyInfo(json &name);
    

        json serialize_VkDependencyInfoKHR(VkDependencyInfoKHR name);
        VkDependencyInfoKHR deserialize_VkDependencyInfoKHR(json &name);
    

        json serialize_VkSemaphoreSubmitInfo(VkSemaphoreSubmitInfo name);
        VkSemaphoreSubmitInfo deserialize_VkSemaphoreSubmitInfo(json &name);
    

        json serialize_VkSemaphoreSubmitInfoKHR(VkSemaphoreSubmitInfoKHR name);
        VkSemaphoreSubmitInfoKHR deserialize_VkSemaphoreSubmitInfoKHR(json &name);
    

        json serialize_VkCommandBufferSubmitInfo(VkCommandBufferSubmitInfo name);
        VkCommandBufferSubmitInfo deserialize_VkCommandBufferSubmitInfo(json &name);
    

        json serialize_VkCommandBufferSubmitInfoKHR(VkCommandBufferSubmitInfoKHR name);
        VkCommandBufferSubmitInfoKHR deserialize_VkCommandBufferSubmitInfoKHR(json &name);
    

        json serialize_VkSubmitInfo2(VkSubmitInfo2 name);
        VkSubmitInfo2 deserialize_VkSubmitInfo2(json &name);
    

        json serialize_VkSubmitInfo2KHR(VkSubmitInfo2KHR name);
        VkSubmitInfo2KHR deserialize_VkSubmitInfo2KHR(json &name);
    

        json serialize_VkQueueFamilyCheckpointProperties2NV(VkQueueFamilyCheckpointProperties2NV name);
        VkQueueFamilyCheckpointProperties2NV deserialize_VkQueueFamilyCheckpointProperties2NV(json &name);
    

        json serialize_VkCheckpointData2NV(VkCheckpointData2NV name);
        VkCheckpointData2NV deserialize_VkCheckpointData2NV(json &name);
    

        json serialize_VkPhysicalDeviceSynchronization2Features(VkPhysicalDeviceSynchronization2Features name);
        VkPhysicalDeviceSynchronization2Features deserialize_VkPhysicalDeviceSynchronization2Features(json &name);
    

        json serialize_VkPhysicalDeviceSynchronization2FeaturesKHR(VkPhysicalDeviceSynchronization2FeaturesKHR name);
        VkPhysicalDeviceSynchronization2FeaturesKHR deserialize_VkPhysicalDeviceSynchronization2FeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceHostImageCopyFeaturesEXT(VkPhysicalDeviceHostImageCopyFeaturesEXT name);
        VkPhysicalDeviceHostImageCopyFeaturesEXT deserialize_VkPhysicalDeviceHostImageCopyFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceHostImageCopyPropertiesEXT(VkPhysicalDeviceHostImageCopyPropertiesEXT name);
        VkPhysicalDeviceHostImageCopyPropertiesEXT deserialize_VkPhysicalDeviceHostImageCopyPropertiesEXT(json &name);
    

        json serialize_VkMemoryToImageCopyEXT(VkMemoryToImageCopyEXT name);
        VkMemoryToImageCopyEXT deserialize_VkMemoryToImageCopyEXT(json &name);
    

        json serialize_VkImageToMemoryCopyEXT(VkImageToMemoryCopyEXT name);
        VkImageToMemoryCopyEXT deserialize_VkImageToMemoryCopyEXT(json &name);
    

        json serialize_VkCopyMemoryToImageInfoEXT(VkCopyMemoryToImageInfoEXT name);
        VkCopyMemoryToImageInfoEXT deserialize_VkCopyMemoryToImageInfoEXT(json &name);
    

        json serialize_VkCopyImageToMemoryInfoEXT(VkCopyImageToMemoryInfoEXT name);
        VkCopyImageToMemoryInfoEXT deserialize_VkCopyImageToMemoryInfoEXT(json &name);
    

        json serialize_VkCopyImageToImageInfoEXT(VkCopyImageToImageInfoEXT name);
        VkCopyImageToImageInfoEXT deserialize_VkCopyImageToImageInfoEXT(json &name);
    

        json serialize_VkHostImageLayoutTransitionInfoEXT(VkHostImageLayoutTransitionInfoEXT name);
        VkHostImageLayoutTransitionInfoEXT deserialize_VkHostImageLayoutTransitionInfoEXT(json &name);
    

        json serialize_VkSubresourceHostMemcpySizeEXT(VkSubresourceHostMemcpySizeEXT name);
        VkSubresourceHostMemcpySizeEXT deserialize_VkSubresourceHostMemcpySizeEXT(json &name);
    

        json serialize_VkHostImageCopyDevicePerformanceQueryEXT(VkHostImageCopyDevicePerformanceQueryEXT name);
        VkHostImageCopyDevicePerformanceQueryEXT deserialize_VkHostImageCopyDevicePerformanceQueryEXT(json &name);
    

        json serialize_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT name);
        VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT deserialize_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceLegacyDitheringFeaturesEXT(VkPhysicalDeviceLegacyDitheringFeaturesEXT name);
        VkPhysicalDeviceLegacyDitheringFeaturesEXT deserialize_VkPhysicalDeviceLegacyDitheringFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT name);
        VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT deserialize_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(json &name);
    

        json serialize_VkSubpassResolvePerformanceQueryEXT(VkSubpassResolvePerformanceQueryEXT name);
        VkSubpassResolvePerformanceQueryEXT deserialize_VkSubpassResolvePerformanceQueryEXT(json &name);
    

        json serialize_VkMultisampledRenderToSingleSampledInfoEXT(VkMultisampledRenderToSingleSampledInfoEXT name);
        VkMultisampledRenderToSingleSampledInfoEXT deserialize_VkMultisampledRenderToSingleSampledInfoEXT(json &name);
    

        json serialize_VkPhysicalDevicePipelineProtectedAccessFeaturesEXT(VkPhysicalDevicePipelineProtectedAccessFeaturesEXT name);
        VkPhysicalDevicePipelineProtectedAccessFeaturesEXT deserialize_VkPhysicalDevicePipelineProtectedAccessFeaturesEXT(json &name);
    

        json serialize_VkQueueFamilyVideoPropertiesKHR(VkQueueFamilyVideoPropertiesKHR name);
        VkQueueFamilyVideoPropertiesKHR deserialize_VkQueueFamilyVideoPropertiesKHR(json &name);
    

        json serialize_VkQueueFamilyQueryResultStatusPropertiesKHR(VkQueueFamilyQueryResultStatusPropertiesKHR name);
        VkQueueFamilyQueryResultStatusPropertiesKHR deserialize_VkQueueFamilyQueryResultStatusPropertiesKHR(json &name);
    

        json serialize_VkVideoProfileListInfoKHR(VkVideoProfileListInfoKHR name);
        VkVideoProfileListInfoKHR deserialize_VkVideoProfileListInfoKHR(json &name);
    

        json serialize_VkPhysicalDeviceVideoFormatInfoKHR(VkPhysicalDeviceVideoFormatInfoKHR name);
        VkPhysicalDeviceVideoFormatInfoKHR deserialize_VkPhysicalDeviceVideoFormatInfoKHR(json &name);
    

        json serialize_VkVideoFormatPropertiesKHR(VkVideoFormatPropertiesKHR name);
        VkVideoFormatPropertiesKHR deserialize_VkVideoFormatPropertiesKHR(json &name);
    

        json serialize_VkVideoProfileInfoKHR(VkVideoProfileInfoKHR name);
        VkVideoProfileInfoKHR deserialize_VkVideoProfileInfoKHR(json &name);
    

        json serialize_VkVideoCapabilitiesKHR(VkVideoCapabilitiesKHR name);
        VkVideoCapabilitiesKHR deserialize_VkVideoCapabilitiesKHR(json &name);
    

        json serialize_VkVideoSessionMemoryRequirementsKHR(VkVideoSessionMemoryRequirementsKHR name);
        VkVideoSessionMemoryRequirementsKHR deserialize_VkVideoSessionMemoryRequirementsKHR(json &name);
    

        json serialize_VkBindVideoSessionMemoryInfoKHR(VkBindVideoSessionMemoryInfoKHR name);
        VkBindVideoSessionMemoryInfoKHR deserialize_VkBindVideoSessionMemoryInfoKHR(json &name);
    

        json serialize_VkVideoPictureResourceInfoKHR(VkVideoPictureResourceInfoKHR name);
        VkVideoPictureResourceInfoKHR deserialize_VkVideoPictureResourceInfoKHR(json &name);
    

        json serialize_VkVideoReferenceSlotInfoKHR(VkVideoReferenceSlotInfoKHR name);
        VkVideoReferenceSlotInfoKHR deserialize_VkVideoReferenceSlotInfoKHR(json &name);
    

        json serialize_VkVideoDecodeCapabilitiesKHR(VkVideoDecodeCapabilitiesKHR name);
        VkVideoDecodeCapabilitiesKHR deserialize_VkVideoDecodeCapabilitiesKHR(json &name);
    

        json serialize_VkVideoDecodeUsageInfoKHR(VkVideoDecodeUsageInfoKHR name);
        VkVideoDecodeUsageInfoKHR deserialize_VkVideoDecodeUsageInfoKHR(json &name);
    

        json serialize_VkVideoDecodeInfoKHR(VkVideoDecodeInfoKHR name);
        VkVideoDecodeInfoKHR deserialize_VkVideoDecodeInfoKHR(json &name);
    

        json serialize_VkVideoDecodeH264ProfileInfoKHR(VkVideoDecodeH264ProfileInfoKHR name);
        VkVideoDecodeH264ProfileInfoKHR deserialize_VkVideoDecodeH264ProfileInfoKHR(json &name);
    

        json serialize_VkVideoDecodeH264CapabilitiesKHR(VkVideoDecodeH264CapabilitiesKHR name);
        VkVideoDecodeH264CapabilitiesKHR deserialize_VkVideoDecodeH264CapabilitiesKHR(json &name);
    

        json serialize_VkVideoDecodeH264SessionParametersAddInfoKHR(VkVideoDecodeH264SessionParametersAddInfoKHR name);
        VkVideoDecodeH264SessionParametersAddInfoKHR deserialize_VkVideoDecodeH264SessionParametersAddInfoKHR(json &name);
    

        json serialize_VkVideoDecodeH264SessionParametersCreateInfoKHR(VkVideoDecodeH264SessionParametersCreateInfoKHR name);
        VkVideoDecodeH264SessionParametersCreateInfoKHR deserialize_VkVideoDecodeH264SessionParametersCreateInfoKHR(json &name);
    

        json serialize_VkVideoDecodeH264PictureInfoKHR(VkVideoDecodeH264PictureInfoKHR name);
        VkVideoDecodeH264PictureInfoKHR deserialize_VkVideoDecodeH264PictureInfoKHR(json &name);
    

        json serialize_VkVideoDecodeH264DpbSlotInfoKHR(VkVideoDecodeH264DpbSlotInfoKHR name);
        VkVideoDecodeH264DpbSlotInfoKHR deserialize_VkVideoDecodeH264DpbSlotInfoKHR(json &name);
    

        json serialize_VkVideoDecodeH265ProfileInfoKHR(VkVideoDecodeH265ProfileInfoKHR name);
        VkVideoDecodeH265ProfileInfoKHR deserialize_VkVideoDecodeH265ProfileInfoKHR(json &name);
    

        json serialize_VkVideoDecodeH265CapabilitiesKHR(VkVideoDecodeH265CapabilitiesKHR name);
        VkVideoDecodeH265CapabilitiesKHR deserialize_VkVideoDecodeH265CapabilitiesKHR(json &name);
    

        json serialize_VkVideoDecodeH265SessionParametersAddInfoKHR(VkVideoDecodeH265SessionParametersAddInfoKHR name);
        VkVideoDecodeH265SessionParametersAddInfoKHR deserialize_VkVideoDecodeH265SessionParametersAddInfoKHR(json &name);
    

        json serialize_VkVideoDecodeH265SessionParametersCreateInfoKHR(VkVideoDecodeH265SessionParametersCreateInfoKHR name);
        VkVideoDecodeH265SessionParametersCreateInfoKHR deserialize_VkVideoDecodeH265SessionParametersCreateInfoKHR(json &name);
    

        json serialize_VkVideoDecodeH265PictureInfoKHR(VkVideoDecodeH265PictureInfoKHR name);
        VkVideoDecodeH265PictureInfoKHR deserialize_VkVideoDecodeH265PictureInfoKHR(json &name);
    

        json serialize_VkVideoDecodeH265DpbSlotInfoKHR(VkVideoDecodeH265DpbSlotInfoKHR name);
        VkVideoDecodeH265DpbSlotInfoKHR deserialize_VkVideoDecodeH265DpbSlotInfoKHR(json &name);
    

        json serialize_VkVideoSessionCreateInfoKHR(VkVideoSessionCreateInfoKHR name);
        VkVideoSessionCreateInfoKHR deserialize_VkVideoSessionCreateInfoKHR(json &name);
    

        json serialize_VkVideoSessionParametersCreateInfoKHR(VkVideoSessionParametersCreateInfoKHR name);
        VkVideoSessionParametersCreateInfoKHR deserialize_VkVideoSessionParametersCreateInfoKHR(json &name);
    

        json serialize_VkVideoSessionParametersUpdateInfoKHR(VkVideoSessionParametersUpdateInfoKHR name);
        VkVideoSessionParametersUpdateInfoKHR deserialize_VkVideoSessionParametersUpdateInfoKHR(json &name);
    

        json serialize_VkVideoBeginCodingInfoKHR(VkVideoBeginCodingInfoKHR name);
        VkVideoBeginCodingInfoKHR deserialize_VkVideoBeginCodingInfoKHR(json &name);
    

        json serialize_VkVideoEndCodingInfoKHR(VkVideoEndCodingInfoKHR name);
        VkVideoEndCodingInfoKHR deserialize_VkVideoEndCodingInfoKHR(json &name);
    

        json serialize_VkVideoCodingControlInfoKHR(VkVideoCodingControlInfoKHR name);
        VkVideoCodingControlInfoKHR deserialize_VkVideoCodingControlInfoKHR(json &name);
    

        json serialize_VkPhysicalDeviceInheritedViewportScissorFeaturesNV(VkPhysicalDeviceInheritedViewportScissorFeaturesNV name);
        VkPhysicalDeviceInheritedViewportScissorFeaturesNV deserialize_VkPhysicalDeviceInheritedViewportScissorFeaturesNV(json &name);
    

        json serialize_VkCommandBufferInheritanceViewportScissorInfoNV(VkCommandBufferInheritanceViewportScissorInfoNV name);
        VkCommandBufferInheritanceViewportScissorInfoNV deserialize_VkCommandBufferInheritanceViewportScissorInfoNV(json &name);
    

        json serialize_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT name);
        VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT deserialize_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceProvokingVertexFeaturesEXT(VkPhysicalDeviceProvokingVertexFeaturesEXT name);
        VkPhysicalDeviceProvokingVertexFeaturesEXT deserialize_VkPhysicalDeviceProvokingVertexFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceProvokingVertexPropertiesEXT(VkPhysicalDeviceProvokingVertexPropertiesEXT name);
        VkPhysicalDeviceProvokingVertexPropertiesEXT deserialize_VkPhysicalDeviceProvokingVertexPropertiesEXT(json &name);
    

        json serialize_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT(VkPipelineRasterizationProvokingVertexStateCreateInfoEXT name);
        VkPipelineRasterizationProvokingVertexStateCreateInfoEXT deserialize_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT(json &name);
    

        json serialize_VkCuModuleCreateInfoNVX(VkCuModuleCreateInfoNVX name);
        VkCuModuleCreateInfoNVX deserialize_VkCuModuleCreateInfoNVX(json &name);
    

        json serialize_VkCuFunctionCreateInfoNVX(VkCuFunctionCreateInfoNVX name);
        VkCuFunctionCreateInfoNVX deserialize_VkCuFunctionCreateInfoNVX(json &name);
    

        json serialize_VkCuLaunchInfoNVX(VkCuLaunchInfoNVX name);
        VkCuLaunchInfoNVX deserialize_VkCuLaunchInfoNVX(json &name);
    

        json serialize_VkPhysicalDeviceDescriptorBufferFeaturesEXT(VkPhysicalDeviceDescriptorBufferFeaturesEXT name);
        VkPhysicalDeviceDescriptorBufferFeaturesEXT deserialize_VkPhysicalDeviceDescriptorBufferFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceDescriptorBufferPropertiesEXT(VkPhysicalDeviceDescriptorBufferPropertiesEXT name);
        VkPhysicalDeviceDescriptorBufferPropertiesEXT deserialize_VkPhysicalDeviceDescriptorBufferPropertiesEXT(json &name);
    

        json serialize_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT name);
        VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT deserialize_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(json &name);
    

        json serialize_VkDescriptorAddressInfoEXT(VkDescriptorAddressInfoEXT name);
        VkDescriptorAddressInfoEXT deserialize_VkDescriptorAddressInfoEXT(json &name);
    

        json serialize_VkDescriptorBufferBindingInfoEXT(VkDescriptorBufferBindingInfoEXT name);
        VkDescriptorBufferBindingInfoEXT deserialize_VkDescriptorBufferBindingInfoEXT(json &name);
    

        json serialize_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT(VkDescriptorBufferBindingPushDescriptorBufferHandleEXT name);
        VkDescriptorBufferBindingPushDescriptorBufferHandleEXT deserialize_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT(json &name);
    

        json serialize_VkDescriptorDataEXT(VkDescriptorDataEXT name);
        VkDescriptorDataEXT deserialize_VkDescriptorDataEXT(json &name);
    

        json serialize_VkDescriptorGetInfoEXT(VkDescriptorGetInfoEXT name);
        VkDescriptorGetInfoEXT deserialize_VkDescriptorGetInfoEXT(json &name);
    

        json serialize_VkBufferCaptureDescriptorDataInfoEXT(VkBufferCaptureDescriptorDataInfoEXT name);
        VkBufferCaptureDescriptorDataInfoEXT deserialize_VkBufferCaptureDescriptorDataInfoEXT(json &name);
    

        json serialize_VkImageCaptureDescriptorDataInfoEXT(VkImageCaptureDescriptorDataInfoEXT name);
        VkImageCaptureDescriptorDataInfoEXT deserialize_VkImageCaptureDescriptorDataInfoEXT(json &name);
    

        json serialize_VkImageViewCaptureDescriptorDataInfoEXT(VkImageViewCaptureDescriptorDataInfoEXT name);
        VkImageViewCaptureDescriptorDataInfoEXT deserialize_VkImageViewCaptureDescriptorDataInfoEXT(json &name);
    

        json serialize_VkSamplerCaptureDescriptorDataInfoEXT(VkSamplerCaptureDescriptorDataInfoEXT name);
        VkSamplerCaptureDescriptorDataInfoEXT deserialize_VkSamplerCaptureDescriptorDataInfoEXT(json &name);
    

        json serialize_VkAccelerationStructureCaptureDescriptorDataInfoEXT(VkAccelerationStructureCaptureDescriptorDataInfoEXT name);
        VkAccelerationStructureCaptureDescriptorDataInfoEXT deserialize_VkAccelerationStructureCaptureDescriptorDataInfoEXT(json &name);
    

        json serialize_VkOpaqueCaptureDescriptorDataCreateInfoEXT(VkOpaqueCaptureDescriptorDataCreateInfoEXT name);
        VkOpaqueCaptureDescriptorDataCreateInfoEXT deserialize_VkOpaqueCaptureDescriptorDataCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceShaderIntegerDotProductFeatures(VkPhysicalDeviceShaderIntegerDotProductFeatures name);
        VkPhysicalDeviceShaderIntegerDotProductFeatures deserialize_VkPhysicalDeviceShaderIntegerDotProductFeatures(json &name);
    

        json serialize_VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR(VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR name);
        VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR deserialize_VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceShaderIntegerDotProductProperties(VkPhysicalDeviceShaderIntegerDotProductProperties name);
        VkPhysicalDeviceShaderIntegerDotProductProperties deserialize_VkPhysicalDeviceShaderIntegerDotProductProperties(json &name);
    

        json serialize_VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR(VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR name);
        VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR deserialize_VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR(json &name);
    

        json serialize_VkPhysicalDeviceDrmPropertiesEXT(VkPhysicalDeviceDrmPropertiesEXT name);
        VkPhysicalDeviceDrmPropertiesEXT deserialize_VkPhysicalDeviceDrmPropertiesEXT(json &name);
    

        json serialize_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR(VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR name);
        VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR deserialize_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR(json &name);
    

        json serialize_VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV(VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV name);
        VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV deserialize_VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV(json &name);
    

        json serialize_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR(VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR name);
        VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR deserialize_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR(json &name);
    

        json serialize_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV(VkPhysicalDeviceRayTracingMotionBlurFeaturesNV name);
        VkPhysicalDeviceRayTracingMotionBlurFeaturesNV deserialize_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV(json &name);
    

        json serialize_VkAccelerationStructureGeometryMotionTrianglesDataNV(VkAccelerationStructureGeometryMotionTrianglesDataNV name);
        VkAccelerationStructureGeometryMotionTrianglesDataNV deserialize_VkAccelerationStructureGeometryMotionTrianglesDataNV(json &name);
    

        json serialize_VkAccelerationStructureMotionInfoNV(VkAccelerationStructureMotionInfoNV name);
        VkAccelerationStructureMotionInfoNV deserialize_VkAccelerationStructureMotionInfoNV(json &name);
    

        json serialize_VkSRTDataNV(VkSRTDataNV name);
        VkSRTDataNV deserialize_VkSRTDataNV(json &name);
    

        json serialize_VkAccelerationStructureSRTMotionInstanceNV(VkAccelerationStructureSRTMotionInstanceNV name);
        VkAccelerationStructureSRTMotionInstanceNV deserialize_VkAccelerationStructureSRTMotionInstanceNV(json &name);
    

        json serialize_VkAccelerationStructureMatrixMotionInstanceNV(VkAccelerationStructureMatrixMotionInstanceNV name);
        VkAccelerationStructureMatrixMotionInstanceNV deserialize_VkAccelerationStructureMatrixMotionInstanceNV(json &name);
    

        json serialize_VkAccelerationStructureMotionInstanceDataNV(VkAccelerationStructureMotionInstanceDataNV name);
        VkAccelerationStructureMotionInstanceDataNV deserialize_VkAccelerationStructureMotionInstanceDataNV(json &name);
    

        json serialize_VkAccelerationStructureMotionInstanceNV(VkAccelerationStructureMotionInstanceNV name);
        VkAccelerationStructureMotionInstanceNV deserialize_VkAccelerationStructureMotionInstanceNV(json &name);
    

        json serialize_VkMemoryGetRemoteAddressInfoNV(VkMemoryGetRemoteAddressInfoNV name);
        VkMemoryGetRemoteAddressInfoNV deserialize_VkMemoryGetRemoteAddressInfoNV(json &name);
    

        json serialize_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT(VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT name);
        VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT deserialize_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT(json &name);
    

        json serialize_VkFormatProperties3(VkFormatProperties3 name);
        VkFormatProperties3 deserialize_VkFormatProperties3(json &name);
    

        json serialize_VkFormatProperties3KHR(VkFormatProperties3KHR name);
        VkFormatProperties3KHR deserialize_VkFormatProperties3KHR(json &name);
    

        json serialize_VkDrmFormatModifierPropertiesList2EXT(VkDrmFormatModifierPropertiesList2EXT name);
        VkDrmFormatModifierPropertiesList2EXT deserialize_VkDrmFormatModifierPropertiesList2EXT(json &name);
    

        json serialize_VkDrmFormatModifierProperties2EXT(VkDrmFormatModifierProperties2EXT name);
        VkDrmFormatModifierProperties2EXT deserialize_VkDrmFormatModifierProperties2EXT(json &name);
    

        json serialize_VkPipelineRenderingCreateInfo(VkPipelineRenderingCreateInfo name);
        VkPipelineRenderingCreateInfo deserialize_VkPipelineRenderingCreateInfo(json &name);
    

        json serialize_VkPipelineRenderingCreateInfoKHR(VkPipelineRenderingCreateInfoKHR name);
        VkPipelineRenderingCreateInfoKHR deserialize_VkPipelineRenderingCreateInfoKHR(json &name);
    

        json serialize_VkRenderingInfo(VkRenderingInfo name);
        VkRenderingInfo deserialize_VkRenderingInfo(json &name);
    

        json serialize_VkRenderingInfoKHR(VkRenderingInfoKHR name);
        VkRenderingInfoKHR deserialize_VkRenderingInfoKHR(json &name);
    

        json serialize_VkRenderingAttachmentInfo(VkRenderingAttachmentInfo name);
        VkRenderingAttachmentInfo deserialize_VkRenderingAttachmentInfo(json &name);
    

        json serialize_VkRenderingAttachmentInfoKHR(VkRenderingAttachmentInfoKHR name);
        VkRenderingAttachmentInfoKHR deserialize_VkRenderingAttachmentInfoKHR(json &name);
    

        json serialize_VkRenderingFragmentShadingRateAttachmentInfoKHR(VkRenderingFragmentShadingRateAttachmentInfoKHR name);
        VkRenderingFragmentShadingRateAttachmentInfoKHR deserialize_VkRenderingFragmentShadingRateAttachmentInfoKHR(json &name);
    

        json serialize_VkRenderingFragmentDensityMapAttachmentInfoEXT(VkRenderingFragmentDensityMapAttachmentInfoEXT name);
        VkRenderingFragmentDensityMapAttachmentInfoEXT deserialize_VkRenderingFragmentDensityMapAttachmentInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceDynamicRenderingFeatures(VkPhysicalDeviceDynamicRenderingFeatures name);
        VkPhysicalDeviceDynamicRenderingFeatures deserialize_VkPhysicalDeviceDynamicRenderingFeatures(json &name);
    

        json serialize_VkPhysicalDeviceDynamicRenderingFeaturesKHR(VkPhysicalDeviceDynamicRenderingFeaturesKHR name);
        VkPhysicalDeviceDynamicRenderingFeaturesKHR deserialize_VkPhysicalDeviceDynamicRenderingFeaturesKHR(json &name);
    

        json serialize_VkCommandBufferInheritanceRenderingInfo(VkCommandBufferInheritanceRenderingInfo name);
        VkCommandBufferInheritanceRenderingInfo deserialize_VkCommandBufferInheritanceRenderingInfo(json &name);
    

        json serialize_VkCommandBufferInheritanceRenderingInfoKHR(VkCommandBufferInheritanceRenderingInfoKHR name);
        VkCommandBufferInheritanceRenderingInfoKHR deserialize_VkCommandBufferInheritanceRenderingInfoKHR(json &name);
    

        json serialize_VkAttachmentSampleCountInfoAMD(VkAttachmentSampleCountInfoAMD name);
        VkAttachmentSampleCountInfoAMD deserialize_VkAttachmentSampleCountInfoAMD(json &name);
    

        json serialize_VkAttachmentSampleCountInfoNV(VkAttachmentSampleCountInfoNV name);
        VkAttachmentSampleCountInfoNV deserialize_VkAttachmentSampleCountInfoNV(json &name);
    

        json serialize_VkMultiviewPerViewAttributesInfoNVX(VkMultiviewPerViewAttributesInfoNVX name);
        VkMultiviewPerViewAttributesInfoNVX deserialize_VkMultiviewPerViewAttributesInfoNVX(json &name);
    

        json serialize_VkPhysicalDeviceImageViewMinLodFeaturesEXT(VkPhysicalDeviceImageViewMinLodFeaturesEXT name);
        VkPhysicalDeviceImageViewMinLodFeaturesEXT deserialize_VkPhysicalDeviceImageViewMinLodFeaturesEXT(json &name);
    

        json serialize_VkImageViewMinLodCreateInfoEXT(VkImageViewMinLodCreateInfoEXT name);
        VkImageViewMinLodCreateInfoEXT deserialize_VkImageViewMinLodCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT name);
        VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT deserialize_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM name);
        VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM deserialize_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM(json &name);
    

        json serialize_VkPhysicalDeviceLinearColorAttachmentFeaturesNV(VkPhysicalDeviceLinearColorAttachmentFeaturesNV name);
        VkPhysicalDeviceLinearColorAttachmentFeaturesNV deserialize_VkPhysicalDeviceLinearColorAttachmentFeaturesNV(json &name);
    

        json serialize_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT name);
        VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT deserialize_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT name);
        VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT deserialize_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(json &name);
    

        json serialize_VkGraphicsPipelineLibraryCreateInfoEXT(VkGraphicsPipelineLibraryCreateInfoEXT name);
        VkGraphicsPipelineLibraryCreateInfoEXT deserialize_VkGraphicsPipelineLibraryCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE name);
        VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE deserialize_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(json &name);
    

        json serialize_VkDescriptorSetBindingReferenceVALVE(VkDescriptorSetBindingReferenceVALVE name);
        VkDescriptorSetBindingReferenceVALVE deserialize_VkDescriptorSetBindingReferenceVALVE(json &name);
    

        json serialize_VkDescriptorSetLayoutHostMappingInfoVALVE(VkDescriptorSetLayoutHostMappingInfoVALVE name);
        VkDescriptorSetLayoutHostMappingInfoVALVE deserialize_VkDescriptorSetLayoutHostMappingInfoVALVE(json &name);
    

        json serialize_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT(VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT name);
        VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT deserialize_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT(VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT name);
        VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT deserialize_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT(json &name);
    

        json serialize_VkPipelineShaderStageModuleIdentifierCreateInfoEXT(VkPipelineShaderStageModuleIdentifierCreateInfoEXT name);
        VkPipelineShaderStageModuleIdentifierCreateInfoEXT deserialize_VkPipelineShaderStageModuleIdentifierCreateInfoEXT(json &name);
    

        json serialize_VkShaderModuleIdentifierEXT(VkShaderModuleIdentifierEXT name);
        VkShaderModuleIdentifierEXT deserialize_VkShaderModuleIdentifierEXT(json &name);
    

        json serialize_VkImageCompressionControlEXT(VkImageCompressionControlEXT name);
        VkImageCompressionControlEXT deserialize_VkImageCompressionControlEXT(json &name);
    

        json serialize_VkPhysicalDeviceImageCompressionControlFeaturesEXT(VkPhysicalDeviceImageCompressionControlFeaturesEXT name);
        VkPhysicalDeviceImageCompressionControlFeaturesEXT deserialize_VkPhysicalDeviceImageCompressionControlFeaturesEXT(json &name);
    

        json serialize_VkImageCompressionPropertiesEXT(VkImageCompressionPropertiesEXT name);
        VkImageCompressionPropertiesEXT deserialize_VkImageCompressionPropertiesEXT(json &name);
    

        json serialize_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT name);
        VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT deserialize_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(json &name);
    

        json serialize_VkImageSubresource2KHR(VkImageSubresource2KHR name);
        VkImageSubresource2KHR deserialize_VkImageSubresource2KHR(json &name);
    

        json serialize_VkImageSubresource2EXT(VkImageSubresource2EXT name);
        VkImageSubresource2EXT deserialize_VkImageSubresource2EXT(json &name);
    

        json serialize_VkSubresourceLayout2KHR(VkSubresourceLayout2KHR name);
        VkSubresourceLayout2KHR deserialize_VkSubresourceLayout2KHR(json &name);
    

        json serialize_VkSubresourceLayout2EXT(VkSubresourceLayout2EXT name);
        VkSubresourceLayout2EXT deserialize_VkSubresourceLayout2EXT(json &name);
    

        json serialize_VkRenderPassCreationControlEXT(VkRenderPassCreationControlEXT name);
        VkRenderPassCreationControlEXT deserialize_VkRenderPassCreationControlEXT(json &name);
    

        json serialize_VkRenderPassCreationFeedbackInfoEXT(VkRenderPassCreationFeedbackInfoEXT name);
        VkRenderPassCreationFeedbackInfoEXT deserialize_VkRenderPassCreationFeedbackInfoEXT(json &name);
    

        json serialize_VkRenderPassCreationFeedbackCreateInfoEXT(VkRenderPassCreationFeedbackCreateInfoEXT name);
        VkRenderPassCreationFeedbackCreateInfoEXT deserialize_VkRenderPassCreationFeedbackCreateInfoEXT(json &name);
    

        json serialize_VkRenderPassSubpassFeedbackInfoEXT(VkRenderPassSubpassFeedbackInfoEXT name);
        VkRenderPassSubpassFeedbackInfoEXT deserialize_VkRenderPassSubpassFeedbackInfoEXT(json &name);
    

        json serialize_VkRenderPassSubpassFeedbackCreateInfoEXT(VkRenderPassSubpassFeedbackCreateInfoEXT name);
        VkRenderPassSubpassFeedbackCreateInfoEXT deserialize_VkRenderPassSubpassFeedbackCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT name);
        VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT deserialize_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT(json &name);
    

        json serialize_VkMicromapBuildInfoEXT(VkMicromapBuildInfoEXT name);
        VkMicromapBuildInfoEXT deserialize_VkMicromapBuildInfoEXT(json &name);
    

        json serialize_VkMicromapCreateInfoEXT(VkMicromapCreateInfoEXT name);
        VkMicromapCreateInfoEXT deserialize_VkMicromapCreateInfoEXT(json &name);
    

        json serialize_VkMicromapVersionInfoEXT(VkMicromapVersionInfoEXT name);
        VkMicromapVersionInfoEXT deserialize_VkMicromapVersionInfoEXT(json &name);
    

        json serialize_VkCopyMicromapInfoEXT(VkCopyMicromapInfoEXT name);
        VkCopyMicromapInfoEXT deserialize_VkCopyMicromapInfoEXT(json &name);
    

        json serialize_VkCopyMicromapToMemoryInfoEXT(VkCopyMicromapToMemoryInfoEXT name);
        VkCopyMicromapToMemoryInfoEXT deserialize_VkCopyMicromapToMemoryInfoEXT(json &name);
    

        json serialize_VkCopyMemoryToMicromapInfoEXT(VkCopyMemoryToMicromapInfoEXT name);
        VkCopyMemoryToMicromapInfoEXT deserialize_VkCopyMemoryToMicromapInfoEXT(json &name);
    

        json serialize_VkMicromapBuildSizesInfoEXT(VkMicromapBuildSizesInfoEXT name);
        VkMicromapBuildSizesInfoEXT deserialize_VkMicromapBuildSizesInfoEXT(json &name);
    

        json serialize_VkMicromapUsageEXT(VkMicromapUsageEXT name);
        VkMicromapUsageEXT deserialize_VkMicromapUsageEXT(json &name);
    

        json serialize_VkMicromapTriangleEXT(VkMicromapTriangleEXT name);
        VkMicromapTriangleEXT deserialize_VkMicromapTriangleEXT(json &name);
    

        json serialize_VkPhysicalDeviceOpacityMicromapFeaturesEXT(VkPhysicalDeviceOpacityMicromapFeaturesEXT name);
        VkPhysicalDeviceOpacityMicromapFeaturesEXT deserialize_VkPhysicalDeviceOpacityMicromapFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceOpacityMicromapPropertiesEXT(VkPhysicalDeviceOpacityMicromapPropertiesEXT name);
        VkPhysicalDeviceOpacityMicromapPropertiesEXT deserialize_VkPhysicalDeviceOpacityMicromapPropertiesEXT(json &name);
    

        json serialize_VkAccelerationStructureTrianglesOpacityMicromapEXT(VkAccelerationStructureTrianglesOpacityMicromapEXT name);
        VkAccelerationStructureTrianglesOpacityMicromapEXT deserialize_VkAccelerationStructureTrianglesOpacityMicromapEXT(json &name);
    

        json serialize_VkPipelinePropertiesIdentifierEXT(VkPipelinePropertiesIdentifierEXT name);
        VkPipelinePropertiesIdentifierEXT deserialize_VkPipelinePropertiesIdentifierEXT(json &name);
    

        json serialize_VkPhysicalDevicePipelinePropertiesFeaturesEXT(VkPhysicalDevicePipelinePropertiesFeaturesEXT name);
        VkPhysicalDevicePipelinePropertiesFeaturesEXT deserialize_VkPhysicalDevicePipelinePropertiesFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD name);
        VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD deserialize_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(json &name);
    

        json serialize_VkExternalMemoryAcquireUnmodifiedEXT(VkExternalMemoryAcquireUnmodifiedEXT name);
        VkExternalMemoryAcquireUnmodifiedEXT deserialize_VkExternalMemoryAcquireUnmodifiedEXT(json &name);
    

        json serialize_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT(VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT name);
        VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT deserialize_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDevicePipelineRobustnessFeaturesEXT(VkPhysicalDevicePipelineRobustnessFeaturesEXT name);
        VkPhysicalDevicePipelineRobustnessFeaturesEXT deserialize_VkPhysicalDevicePipelineRobustnessFeaturesEXT(json &name);
    

        json serialize_VkPipelineRobustnessCreateInfoEXT(VkPipelineRobustnessCreateInfoEXT name);
        VkPipelineRobustnessCreateInfoEXT deserialize_VkPipelineRobustnessCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDevicePipelineRobustnessPropertiesEXT(VkPhysicalDevicePipelineRobustnessPropertiesEXT name);
        VkPhysicalDevicePipelineRobustnessPropertiesEXT deserialize_VkPhysicalDevicePipelineRobustnessPropertiesEXT(json &name);
    

        json serialize_VkImageViewSampleWeightCreateInfoQCOM(VkImageViewSampleWeightCreateInfoQCOM name);
        VkImageViewSampleWeightCreateInfoQCOM deserialize_VkImageViewSampleWeightCreateInfoQCOM(json &name);
    

        json serialize_VkPhysicalDeviceImageProcessingFeaturesQCOM(VkPhysicalDeviceImageProcessingFeaturesQCOM name);
        VkPhysicalDeviceImageProcessingFeaturesQCOM deserialize_VkPhysicalDeviceImageProcessingFeaturesQCOM(json &name);
    

        json serialize_VkPhysicalDeviceImageProcessingPropertiesQCOM(VkPhysicalDeviceImageProcessingPropertiesQCOM name);
        VkPhysicalDeviceImageProcessingPropertiesQCOM deserialize_VkPhysicalDeviceImageProcessingPropertiesQCOM(json &name);
    

        json serialize_VkPhysicalDeviceTilePropertiesFeaturesQCOM(VkPhysicalDeviceTilePropertiesFeaturesQCOM name);
        VkPhysicalDeviceTilePropertiesFeaturesQCOM deserialize_VkPhysicalDeviceTilePropertiesFeaturesQCOM(json &name);
    

        json serialize_VkTilePropertiesQCOM(VkTilePropertiesQCOM name);
        VkTilePropertiesQCOM deserialize_VkTilePropertiesQCOM(json &name);
    

        json serialize_VkPhysicalDeviceAmigoProfilingFeaturesSEC(VkPhysicalDeviceAmigoProfilingFeaturesSEC name);
        VkPhysicalDeviceAmigoProfilingFeaturesSEC deserialize_VkPhysicalDeviceAmigoProfilingFeaturesSEC(json &name);
    

        json serialize_VkAmigoProfilingSubmitInfoSEC(VkAmigoProfilingSubmitInfoSEC name);
        VkAmigoProfilingSubmitInfoSEC deserialize_VkAmigoProfilingSubmitInfoSEC(json &name);
    

        json serialize_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT name);
        VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT deserialize_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceDepthClampZeroOneFeaturesEXT(VkPhysicalDeviceDepthClampZeroOneFeaturesEXT name);
        VkPhysicalDeviceDepthClampZeroOneFeaturesEXT deserialize_VkPhysicalDeviceDepthClampZeroOneFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceAddressBindingReportFeaturesEXT(VkPhysicalDeviceAddressBindingReportFeaturesEXT name);
        VkPhysicalDeviceAddressBindingReportFeaturesEXT deserialize_VkPhysicalDeviceAddressBindingReportFeaturesEXT(json &name);
    

        json serialize_VkDeviceAddressBindingCallbackDataEXT(VkDeviceAddressBindingCallbackDataEXT name);
        VkDeviceAddressBindingCallbackDataEXT deserialize_VkDeviceAddressBindingCallbackDataEXT(json &name);
    

        json serialize_VkPhysicalDeviceOpticalFlowFeaturesNV(VkPhysicalDeviceOpticalFlowFeaturesNV name);
        VkPhysicalDeviceOpticalFlowFeaturesNV deserialize_VkPhysicalDeviceOpticalFlowFeaturesNV(json &name);
    

        json serialize_VkPhysicalDeviceOpticalFlowPropertiesNV(VkPhysicalDeviceOpticalFlowPropertiesNV name);
        VkPhysicalDeviceOpticalFlowPropertiesNV deserialize_VkPhysicalDeviceOpticalFlowPropertiesNV(json &name);
    

        json serialize_VkOpticalFlowImageFormatInfoNV(VkOpticalFlowImageFormatInfoNV name);
        VkOpticalFlowImageFormatInfoNV deserialize_VkOpticalFlowImageFormatInfoNV(json &name);
    

        json serialize_VkOpticalFlowImageFormatPropertiesNV(VkOpticalFlowImageFormatPropertiesNV name);
        VkOpticalFlowImageFormatPropertiesNV deserialize_VkOpticalFlowImageFormatPropertiesNV(json &name);
    

        json serialize_VkOpticalFlowSessionCreateInfoNV(VkOpticalFlowSessionCreateInfoNV name);
        VkOpticalFlowSessionCreateInfoNV deserialize_VkOpticalFlowSessionCreateInfoNV(json &name);
    

        json serialize_VkOpticalFlowSessionCreatePrivateDataInfoNV(VkOpticalFlowSessionCreatePrivateDataInfoNV name);
        VkOpticalFlowSessionCreatePrivateDataInfoNV deserialize_VkOpticalFlowSessionCreatePrivateDataInfoNV(json &name);
    

        json serialize_VkOpticalFlowExecuteInfoNV(VkOpticalFlowExecuteInfoNV name);
        VkOpticalFlowExecuteInfoNV deserialize_VkOpticalFlowExecuteInfoNV(json &name);
    

        json serialize_VkPhysicalDeviceFaultFeaturesEXT(VkPhysicalDeviceFaultFeaturesEXT name);
        VkPhysicalDeviceFaultFeaturesEXT deserialize_VkPhysicalDeviceFaultFeaturesEXT(json &name);
    

        json serialize_VkDeviceFaultAddressInfoEXT(VkDeviceFaultAddressInfoEXT name);
        VkDeviceFaultAddressInfoEXT deserialize_VkDeviceFaultAddressInfoEXT(json &name);
    

        json serialize_VkDeviceFaultVendorInfoEXT(VkDeviceFaultVendorInfoEXT name);
        VkDeviceFaultVendorInfoEXT deserialize_VkDeviceFaultVendorInfoEXT(json &name);
    

        json serialize_VkDeviceFaultCountsEXT(VkDeviceFaultCountsEXT name);
        VkDeviceFaultCountsEXT deserialize_VkDeviceFaultCountsEXT(json &name);
    

        json serialize_VkDeviceFaultInfoEXT(VkDeviceFaultInfoEXT name);
        VkDeviceFaultInfoEXT deserialize_VkDeviceFaultInfoEXT(json &name);
    

        json serialize_VkDeviceFaultVendorBinaryHeaderVersionOneEXT(VkDeviceFaultVendorBinaryHeaderVersionOneEXT name);
        VkDeviceFaultVendorBinaryHeaderVersionOneEXT deserialize_VkDeviceFaultVendorBinaryHeaderVersionOneEXT(json &name);
    

        json serialize_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT name);
        VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT deserialize_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(json &name);
    

        json serialize_VkDepthBiasInfoEXT(VkDepthBiasInfoEXT name);
        VkDepthBiasInfoEXT deserialize_VkDepthBiasInfoEXT(json &name);
    

        json serialize_VkDepthBiasRepresentationInfoEXT(VkDepthBiasRepresentationInfoEXT name);
        VkDepthBiasRepresentationInfoEXT deserialize_VkDepthBiasRepresentationInfoEXT(json &name);
    

        json serialize_VkDecompressMemoryRegionNV(VkDecompressMemoryRegionNV name);
        VkDecompressMemoryRegionNV deserialize_VkDecompressMemoryRegionNV(json &name);
    

        json serialize_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM(VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM name);
        VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM deserialize_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM(json &name);
    

        json serialize_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM(VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM name);
        VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM deserialize_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM(json &name);
    

        json serialize_VkFrameBoundaryEXT(VkFrameBoundaryEXT name);
        VkFrameBoundaryEXT deserialize_VkFrameBoundaryEXT(json &name);
    

        json serialize_VkPhysicalDeviceFrameBoundaryFeaturesEXT(VkPhysicalDeviceFrameBoundaryFeaturesEXT name);
        VkPhysicalDeviceFrameBoundaryFeaturesEXT deserialize_VkPhysicalDeviceFrameBoundaryFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT name);
        VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT deserialize_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(json &name);
    

        json serialize_VkSurfacePresentModeEXT(VkSurfacePresentModeEXT name);
        VkSurfacePresentModeEXT deserialize_VkSurfacePresentModeEXT(json &name);
    

        json serialize_VkSurfacePresentScalingCapabilitiesEXT(VkSurfacePresentScalingCapabilitiesEXT name);
        VkSurfacePresentScalingCapabilitiesEXT deserialize_VkSurfacePresentScalingCapabilitiesEXT(json &name);
    

        json serialize_VkSurfacePresentModeCompatibilityEXT(VkSurfacePresentModeCompatibilityEXT name);
        VkSurfacePresentModeCompatibilityEXT deserialize_VkSurfacePresentModeCompatibilityEXT(json &name);
    

        json serialize_VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT(VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT name);
        VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT deserialize_VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT(json &name);
    

        json serialize_VkSwapchainPresentFenceInfoEXT(VkSwapchainPresentFenceInfoEXT name);
        VkSwapchainPresentFenceInfoEXT deserialize_VkSwapchainPresentFenceInfoEXT(json &name);
    

        json serialize_VkSwapchainPresentModesCreateInfoEXT(VkSwapchainPresentModesCreateInfoEXT name);
        VkSwapchainPresentModesCreateInfoEXT deserialize_VkSwapchainPresentModesCreateInfoEXT(json &name);
    

        json serialize_VkSwapchainPresentModeInfoEXT(VkSwapchainPresentModeInfoEXT name);
        VkSwapchainPresentModeInfoEXT deserialize_VkSwapchainPresentModeInfoEXT(json &name);
    

        json serialize_VkSwapchainPresentScalingCreateInfoEXT(VkSwapchainPresentScalingCreateInfoEXT name);
        VkSwapchainPresentScalingCreateInfoEXT deserialize_VkSwapchainPresentScalingCreateInfoEXT(json &name);
    

        json serialize_VkReleaseSwapchainImagesInfoEXT(VkReleaseSwapchainImagesInfoEXT name);
        VkReleaseSwapchainImagesInfoEXT deserialize_VkReleaseSwapchainImagesInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceDepthBiasControlFeaturesEXT(VkPhysicalDeviceDepthBiasControlFeaturesEXT name);
        VkPhysicalDeviceDepthBiasControlFeaturesEXT deserialize_VkPhysicalDeviceDepthBiasControlFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV(VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV name);
        VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV deserialize_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV(json &name);
    

        json serialize_VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV(VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV name);
        VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV deserialize_VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV(json &name);
    

        json serialize_VkDirectDriverLoadingInfoLUNARG(VkDirectDriverLoadingInfoLUNARG name);
        VkDirectDriverLoadingInfoLUNARG deserialize_VkDirectDriverLoadingInfoLUNARG(json &name);
    

        json serialize_VkDirectDriverLoadingListLUNARG(VkDirectDriverLoadingListLUNARG name);
        VkDirectDriverLoadingListLUNARG deserialize_VkDirectDriverLoadingListLUNARG(json &name);
    

        json serialize_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM name);
        VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM deserialize_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(json &name);
    

        json serialize_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR(VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR name);
        VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR deserialize_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR(json &name);
    

        json serialize_VkDeviceImageSubresourceInfoKHR(VkDeviceImageSubresourceInfoKHR name);
        VkDeviceImageSubresourceInfoKHR deserialize_VkDeviceImageSubresourceInfoKHR(json &name);
    

        json serialize_VkPhysicalDeviceShaderCorePropertiesARM(VkPhysicalDeviceShaderCorePropertiesARM name);
        VkPhysicalDeviceShaderCorePropertiesARM deserialize_VkPhysicalDeviceShaderCorePropertiesARM(json &name);
    

        json serialize_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM name);
        VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM deserialize_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(json &name);
    

        json serialize_VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM(VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM name);
        VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM deserialize_VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM(json &name);
    

        json serialize_VkQueryLowLatencySupportNV(VkQueryLowLatencySupportNV name);
        VkQueryLowLatencySupportNV deserialize_VkQueryLowLatencySupportNV(json &name);
    

        json serialize_VkMemoryMapInfoKHR(VkMemoryMapInfoKHR name);
        VkMemoryMapInfoKHR deserialize_VkMemoryMapInfoKHR(json &name);
    

        json serialize_VkMemoryUnmapInfoKHR(VkMemoryUnmapInfoKHR name);
        VkMemoryUnmapInfoKHR deserialize_VkMemoryUnmapInfoKHR(json &name);
    

        json serialize_VkPhysicalDeviceShaderObjectFeaturesEXT(VkPhysicalDeviceShaderObjectFeaturesEXT name);
        VkPhysicalDeviceShaderObjectFeaturesEXT deserialize_VkPhysicalDeviceShaderObjectFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceShaderObjectPropertiesEXT(VkPhysicalDeviceShaderObjectPropertiesEXT name);
        VkPhysicalDeviceShaderObjectPropertiesEXT deserialize_VkPhysicalDeviceShaderObjectPropertiesEXT(json &name);
    

        json serialize_VkShaderCreateInfoEXT(VkShaderCreateInfoEXT name);
        VkShaderCreateInfoEXT deserialize_VkShaderCreateInfoEXT(json &name);
    

        json serialize_VkPhysicalDeviceShaderTileImageFeaturesEXT(VkPhysicalDeviceShaderTileImageFeaturesEXT name);
        VkPhysicalDeviceShaderTileImageFeaturesEXT deserialize_VkPhysicalDeviceShaderTileImageFeaturesEXT(json &name);
    

        json serialize_VkPhysicalDeviceShaderTileImagePropertiesEXT(VkPhysicalDeviceShaderTileImagePropertiesEXT name);
        VkPhysicalDeviceShaderTileImagePropertiesEXT deserialize_VkPhysicalDeviceShaderTileImagePropertiesEXT(json &name);
    

        json serialize_VkPhysicalDeviceCooperativeMatrixFeaturesKHR(VkPhysicalDeviceCooperativeMatrixFeaturesKHR name);
        VkPhysicalDeviceCooperativeMatrixFeaturesKHR deserialize_VkPhysicalDeviceCooperativeMatrixFeaturesKHR(json &name);
    

        json serialize_VkCooperativeMatrixPropertiesKHR(VkCooperativeMatrixPropertiesKHR name);
        VkCooperativeMatrixPropertiesKHR deserialize_VkCooperativeMatrixPropertiesKHR(json &name);
    

        json serialize_VkPhysicalDeviceCooperativeMatrixPropertiesKHR(VkPhysicalDeviceCooperativeMatrixPropertiesKHR name);
        VkPhysicalDeviceCooperativeMatrixPropertiesKHR deserialize_VkPhysicalDeviceCooperativeMatrixPropertiesKHR(json &name);
    

        json serialize_VkPhysicalDeviceCubicClampFeaturesQCOM(VkPhysicalDeviceCubicClampFeaturesQCOM name);
        VkPhysicalDeviceCubicClampFeaturesQCOM deserialize_VkPhysicalDeviceCubicClampFeaturesQCOM(json &name);
    

        json serialize_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM(VkPhysicalDeviceYcbcrDegammaFeaturesQCOM name);
        VkPhysicalDeviceYcbcrDegammaFeaturesQCOM deserialize_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM(json &name);
    

        json serialize_VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM(VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM name);
        VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM deserialize_VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM(json &name);
    

        json serialize_VkPhysicalDeviceCubicWeightsFeaturesQCOM(VkPhysicalDeviceCubicWeightsFeaturesQCOM name);
        VkPhysicalDeviceCubicWeightsFeaturesQCOM deserialize_VkPhysicalDeviceCubicWeightsFeaturesQCOM(json &name);
    

        json serialize_VkSamplerCubicWeightsCreateInfoQCOM(VkSamplerCubicWeightsCreateInfoQCOM name);
        VkSamplerCubicWeightsCreateInfoQCOM deserialize_VkSamplerCubicWeightsCreateInfoQCOM(json &name);
    

        json serialize_VkBlitImageCubicWeightsInfoQCOM(VkBlitImageCubicWeightsInfoQCOM name);
        VkBlitImageCubicWeightsInfoQCOM deserialize_VkBlitImageCubicWeightsInfoQCOM(json &name);
    

        json serialize_VkPhysicalDeviceImageProcessing2FeaturesQCOM(VkPhysicalDeviceImageProcessing2FeaturesQCOM name);
        VkPhysicalDeviceImageProcessing2FeaturesQCOM deserialize_VkPhysicalDeviceImageProcessing2FeaturesQCOM(json &name);
    

        json serialize_VkPhysicalDeviceImageProcessing2PropertiesQCOM(VkPhysicalDeviceImageProcessing2PropertiesQCOM name);
        VkPhysicalDeviceImageProcessing2PropertiesQCOM deserialize_VkPhysicalDeviceImageProcessing2PropertiesQCOM(json &name);
    

        json serialize_VkSamplerBlockMatchWindowCreateInfoQCOM(VkSamplerBlockMatchWindowCreateInfoQCOM name);
        VkSamplerBlockMatchWindowCreateInfoQCOM deserialize_VkSamplerBlockMatchWindowCreateInfoQCOM(json &name);
    

        json serialize_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV(VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV name);
        VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV deserialize_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV(json &name);
    

        json serialize_VkPhysicalDeviceLayeredDriverPropertiesMSFT(VkPhysicalDeviceLayeredDriverPropertiesMSFT name);
        VkPhysicalDeviceLayeredDriverPropertiesMSFT deserialize_VkPhysicalDeviceLayeredDriverPropertiesMSFT(json &name);
    

        json serialize_int(int name);
        int deserialize_int(json &name);
    

        json serialize_char(char name);
        char deserialize_char(json &name);
    

        json serialize_float(float name);
        float deserialize_float(json &name);
    

        json serialize_double(double name);
        double deserialize_double(json &name);
    

        json serialize_int8_t(int8_t name);
        int8_t deserialize_int8_t(json &name);
    

        json serialize_uint8_t(uint8_t name);
        uint8_t deserialize_uint8_t(json &name);
    

        json serialize_int16_t(int16_t name);
        int16_t deserialize_int16_t(json &name);
    

        json serialize_uint16_t(uint16_t name);
        uint16_t deserialize_uint16_t(json &name);
    

        json serialize_uint32_t(uint32_t name);
        uint32_t deserialize_uint32_t(json &name);
    

        json serialize_uint64_t(uint64_t name);
        uint64_t deserialize_uint64_t(json &name);
    

        json serialize_int32_t(int32_t name);
        int32_t deserialize_int32_t(json &name);
    

        json serialize_int64_t(int64_t name);
        int64_t deserialize_int64_t(json &name);
    

        json serialize_size_t(size_t name);
        size_t deserialize_size_t(json &name);
    

        json serialize_VkFramebufferCreateFlags(VkFramebufferCreateFlags name);
        VkFramebufferCreateFlags deserialize_VkFramebufferCreateFlags(json &name);
    

        json serialize_VkQueryPoolCreateFlags(VkQueryPoolCreateFlags name);
        VkQueryPoolCreateFlags deserialize_VkQueryPoolCreateFlags(json &name);
    

        json serialize_VkRenderPassCreateFlags(VkRenderPassCreateFlags name);
        VkRenderPassCreateFlags deserialize_VkRenderPassCreateFlags(json &name);
    

        json serialize_VkSamplerCreateFlags(VkSamplerCreateFlags name);
        VkSamplerCreateFlags deserialize_VkSamplerCreateFlags(json &name);
    

        json serialize_VkPipelineLayoutCreateFlags(VkPipelineLayoutCreateFlags name);
        VkPipelineLayoutCreateFlags deserialize_VkPipelineLayoutCreateFlags(json &name);
    

        json serialize_VkPipelineCacheCreateFlags(VkPipelineCacheCreateFlags name);
        VkPipelineCacheCreateFlags deserialize_VkPipelineCacheCreateFlags(json &name);
    

        json serialize_VkPipelineDepthStencilStateCreateFlags(VkPipelineDepthStencilStateCreateFlags name);
        VkPipelineDepthStencilStateCreateFlags deserialize_VkPipelineDepthStencilStateCreateFlags(json &name);
    

        json serialize_VkPipelineDynamicStateCreateFlags(VkPipelineDynamicStateCreateFlags name);
        VkPipelineDynamicStateCreateFlags deserialize_VkPipelineDynamicStateCreateFlags(json &name);
    

        json serialize_VkPipelineColorBlendStateCreateFlags(VkPipelineColorBlendStateCreateFlags name);
        VkPipelineColorBlendStateCreateFlags deserialize_VkPipelineColorBlendStateCreateFlags(json &name);
    

        json serialize_VkPipelineMultisampleStateCreateFlags(VkPipelineMultisampleStateCreateFlags name);
        VkPipelineMultisampleStateCreateFlags deserialize_VkPipelineMultisampleStateCreateFlags(json &name);
    

        json serialize_VkPipelineRasterizationStateCreateFlags(VkPipelineRasterizationStateCreateFlags name);
        VkPipelineRasterizationStateCreateFlags deserialize_VkPipelineRasterizationStateCreateFlags(json &name);
    

        json serialize_VkPipelineViewportStateCreateFlags(VkPipelineViewportStateCreateFlags name);
        VkPipelineViewportStateCreateFlags deserialize_VkPipelineViewportStateCreateFlags(json &name);
    

        json serialize_VkPipelineTessellationStateCreateFlags(VkPipelineTessellationStateCreateFlags name);
        VkPipelineTessellationStateCreateFlags deserialize_VkPipelineTessellationStateCreateFlags(json &name);
    

        json serialize_VkPipelineInputAssemblyStateCreateFlags(VkPipelineInputAssemblyStateCreateFlags name);
        VkPipelineInputAssemblyStateCreateFlags deserialize_VkPipelineInputAssemblyStateCreateFlags(json &name);
    

        json serialize_VkPipelineVertexInputStateCreateFlags(VkPipelineVertexInputStateCreateFlags name);
        VkPipelineVertexInputStateCreateFlags deserialize_VkPipelineVertexInputStateCreateFlags(json &name);
    

        json serialize_VkPipelineShaderStageCreateFlags(VkPipelineShaderStageCreateFlags name);
        VkPipelineShaderStageCreateFlags deserialize_VkPipelineShaderStageCreateFlags(json &name);
    

        json serialize_VkDescriptorSetLayoutCreateFlags(VkDescriptorSetLayoutCreateFlags name);
        VkDescriptorSetLayoutCreateFlags deserialize_VkDescriptorSetLayoutCreateFlags(json &name);
    

        json serialize_VkBufferViewCreateFlags(VkBufferViewCreateFlags name);
        VkBufferViewCreateFlags deserialize_VkBufferViewCreateFlags(json &name);
    

        json serialize_VkInstanceCreateFlags(VkInstanceCreateFlags name);
        VkInstanceCreateFlags deserialize_VkInstanceCreateFlags(json &name);
    

        json serialize_VkDeviceCreateFlags(VkDeviceCreateFlags name);
        VkDeviceCreateFlags deserialize_VkDeviceCreateFlags(json &name);
    

        json serialize_VkDeviceQueueCreateFlags(VkDeviceQueueCreateFlags name);
        VkDeviceQueueCreateFlags deserialize_VkDeviceQueueCreateFlags(json &name);
    

        json serialize_VkQueueFlags(VkQueueFlags name);
        VkQueueFlags deserialize_VkQueueFlags(json &name);
    

        json serialize_VkMemoryPropertyFlags(VkMemoryPropertyFlags name);
        VkMemoryPropertyFlags deserialize_VkMemoryPropertyFlags(json &name);
    

        json serialize_VkMemoryHeapFlags(VkMemoryHeapFlags name);
        VkMemoryHeapFlags deserialize_VkMemoryHeapFlags(json &name);
    

        json serialize_VkAccessFlags(VkAccessFlags name);
        VkAccessFlags deserialize_VkAccessFlags(json &name);
    

        json serialize_VkBufferUsageFlags(VkBufferUsageFlags name);
        VkBufferUsageFlags deserialize_VkBufferUsageFlags(json &name);
    

        json serialize_VkBufferCreateFlags(VkBufferCreateFlags name);
        VkBufferCreateFlags deserialize_VkBufferCreateFlags(json &name);
    

        json serialize_VkShaderStageFlags(VkShaderStageFlags name);
        VkShaderStageFlags deserialize_VkShaderStageFlags(json &name);
    

        json serialize_VkImageUsageFlags(VkImageUsageFlags name);
        VkImageUsageFlags deserialize_VkImageUsageFlags(json &name);
    

        json serialize_VkImageCreateFlags(VkImageCreateFlags name);
        VkImageCreateFlags deserialize_VkImageCreateFlags(json &name);
    

        json serialize_VkImageViewCreateFlags(VkImageViewCreateFlags name);
        VkImageViewCreateFlags deserialize_VkImageViewCreateFlags(json &name);
    

        json serialize_VkPipelineCreateFlags(VkPipelineCreateFlags name);
        VkPipelineCreateFlags deserialize_VkPipelineCreateFlags(json &name);
    

        json serialize_VkColorComponentFlags(VkColorComponentFlags name);
        VkColorComponentFlags deserialize_VkColorComponentFlags(json &name);
    

        json serialize_VkFenceCreateFlags(VkFenceCreateFlags name);
        VkFenceCreateFlags deserialize_VkFenceCreateFlags(json &name);
    

        json serialize_VkSemaphoreCreateFlags(VkSemaphoreCreateFlags name);
        VkSemaphoreCreateFlags deserialize_VkSemaphoreCreateFlags(json &name);
    

        json serialize_VkFormatFeatureFlags(VkFormatFeatureFlags name);
        VkFormatFeatureFlags deserialize_VkFormatFeatureFlags(json &name);
    

        json serialize_VkQueryControlFlags(VkQueryControlFlags name);
        VkQueryControlFlags deserialize_VkQueryControlFlags(json &name);
    

        json serialize_VkQueryResultFlags(VkQueryResultFlags name);
        VkQueryResultFlags deserialize_VkQueryResultFlags(json &name);
    

        json serialize_VkShaderModuleCreateFlags(VkShaderModuleCreateFlags name);
        VkShaderModuleCreateFlags deserialize_VkShaderModuleCreateFlags(json &name);
    

        json serialize_VkEventCreateFlags(VkEventCreateFlags name);
        VkEventCreateFlags deserialize_VkEventCreateFlags(json &name);
    

        json serialize_VkCommandPoolCreateFlags(VkCommandPoolCreateFlags name);
        VkCommandPoolCreateFlags deserialize_VkCommandPoolCreateFlags(json &name);
    

        json serialize_VkCommandPoolResetFlags(VkCommandPoolResetFlags name);
        VkCommandPoolResetFlags deserialize_VkCommandPoolResetFlags(json &name);
    

        json serialize_VkCommandBufferResetFlags(VkCommandBufferResetFlags name);
        VkCommandBufferResetFlags deserialize_VkCommandBufferResetFlags(json &name);
    

        json serialize_VkCommandBufferUsageFlags(VkCommandBufferUsageFlags name);
        VkCommandBufferUsageFlags deserialize_VkCommandBufferUsageFlags(json &name);
    

        json serialize_VkQueryPipelineStatisticFlags(VkQueryPipelineStatisticFlags name);
        VkQueryPipelineStatisticFlags deserialize_VkQueryPipelineStatisticFlags(json &name);
    

        json serialize_VkMemoryMapFlags(VkMemoryMapFlags name);
        VkMemoryMapFlags deserialize_VkMemoryMapFlags(json &name);
    

        json serialize_VkMemoryUnmapFlagsKHR(VkMemoryUnmapFlagsKHR name);
        VkMemoryUnmapFlagsKHR deserialize_VkMemoryUnmapFlagsKHR(json &name);
    

        json serialize_VkImageAspectFlags(VkImageAspectFlags name);
        VkImageAspectFlags deserialize_VkImageAspectFlags(json &name);
    

        json serialize_VkSparseMemoryBindFlags(VkSparseMemoryBindFlags name);
        VkSparseMemoryBindFlags deserialize_VkSparseMemoryBindFlags(json &name);
    

        json serialize_VkSparseImageFormatFlags(VkSparseImageFormatFlags name);
        VkSparseImageFormatFlags deserialize_VkSparseImageFormatFlags(json &name);
    

        json serialize_VkSubpassDescriptionFlags(VkSubpassDescriptionFlags name);
        VkSubpassDescriptionFlags deserialize_VkSubpassDescriptionFlags(json &name);
    

        json serialize_VkPipelineStageFlags(VkPipelineStageFlags name);
        VkPipelineStageFlags deserialize_VkPipelineStageFlags(json &name);
    

        json serialize_VkSampleCountFlags(VkSampleCountFlags name);
        VkSampleCountFlags deserialize_VkSampleCountFlags(json &name);
    

        json serialize_VkAttachmentDescriptionFlags(VkAttachmentDescriptionFlags name);
        VkAttachmentDescriptionFlags deserialize_VkAttachmentDescriptionFlags(json &name);
    

        json serialize_VkStencilFaceFlags(VkStencilFaceFlags name);
        VkStencilFaceFlags deserialize_VkStencilFaceFlags(json &name);
    

        json serialize_VkCullModeFlags(VkCullModeFlags name);
        VkCullModeFlags deserialize_VkCullModeFlags(json &name);
    

        json serialize_VkDescriptorPoolCreateFlags(VkDescriptorPoolCreateFlags name);
        VkDescriptorPoolCreateFlags deserialize_VkDescriptorPoolCreateFlags(json &name);
    

        json serialize_VkDescriptorPoolResetFlags(VkDescriptorPoolResetFlags name);
        VkDescriptorPoolResetFlags deserialize_VkDescriptorPoolResetFlags(json &name);
    

        json serialize_VkDependencyFlags(VkDependencyFlags name);
        VkDependencyFlags deserialize_VkDependencyFlags(json &name);
    

        json serialize_VkSubgroupFeatureFlags(VkSubgroupFeatureFlags name);
        VkSubgroupFeatureFlags deserialize_VkSubgroupFeatureFlags(json &name);
    

        json serialize_VkIndirectCommandsLayoutUsageFlagsNV(VkIndirectCommandsLayoutUsageFlagsNV name);
        VkIndirectCommandsLayoutUsageFlagsNV deserialize_VkIndirectCommandsLayoutUsageFlagsNV(json &name);
    

        json serialize_VkIndirectStateFlagsNV(VkIndirectStateFlagsNV name);
        VkIndirectStateFlagsNV deserialize_VkIndirectStateFlagsNV(json &name);
    

        json serialize_VkGeometryFlagsKHR(VkGeometryFlagsKHR name);
        VkGeometryFlagsKHR deserialize_VkGeometryFlagsKHR(json &name);
    

        json serialize_VkGeometryFlagsNV(VkGeometryFlagsNV name);
        VkGeometryFlagsNV deserialize_VkGeometryFlagsNV(json &name);
    

        json serialize_VkGeometryInstanceFlagsKHR(VkGeometryInstanceFlagsKHR name);
        VkGeometryInstanceFlagsKHR deserialize_VkGeometryInstanceFlagsKHR(json &name);
    

        json serialize_VkGeometryInstanceFlagsNV(VkGeometryInstanceFlagsNV name);
        VkGeometryInstanceFlagsNV deserialize_VkGeometryInstanceFlagsNV(json &name);
    

        json serialize_VkBuildAccelerationStructureFlagsKHR(VkBuildAccelerationStructureFlagsKHR name);
        VkBuildAccelerationStructureFlagsKHR deserialize_VkBuildAccelerationStructureFlagsKHR(json &name);
    

        json serialize_VkBuildAccelerationStructureFlagsNV(VkBuildAccelerationStructureFlagsNV name);
        VkBuildAccelerationStructureFlagsNV deserialize_VkBuildAccelerationStructureFlagsNV(json &name);
    

        json serialize_VkPrivateDataSlotCreateFlags(VkPrivateDataSlotCreateFlags name);
        VkPrivateDataSlotCreateFlags deserialize_VkPrivateDataSlotCreateFlags(json &name);
    

        json serialize_VkPrivateDataSlotCreateFlagsEXT(VkPrivateDataSlotCreateFlagsEXT name);
        VkPrivateDataSlotCreateFlagsEXT deserialize_VkPrivateDataSlotCreateFlagsEXT(json &name);
    

        json serialize_VkAccelerationStructureCreateFlagsKHR(VkAccelerationStructureCreateFlagsKHR name);
        VkAccelerationStructureCreateFlagsKHR deserialize_VkAccelerationStructureCreateFlagsKHR(json &name);
    

        json serialize_VkDescriptorUpdateTemplateCreateFlags(VkDescriptorUpdateTemplateCreateFlags name);
        VkDescriptorUpdateTemplateCreateFlags deserialize_VkDescriptorUpdateTemplateCreateFlags(json &name);
    

        json serialize_VkDescriptorUpdateTemplateCreateFlagsKHR(VkDescriptorUpdateTemplateCreateFlagsKHR name);
        VkDescriptorUpdateTemplateCreateFlagsKHR deserialize_VkDescriptorUpdateTemplateCreateFlagsKHR(json &name);
    

        json serialize_VkPipelineCreationFeedbackFlags(VkPipelineCreationFeedbackFlags name);
        VkPipelineCreationFeedbackFlags deserialize_VkPipelineCreationFeedbackFlags(json &name);
    

        json serialize_VkPipelineCreationFeedbackFlagsEXT(VkPipelineCreationFeedbackFlagsEXT name);
        VkPipelineCreationFeedbackFlagsEXT deserialize_VkPipelineCreationFeedbackFlagsEXT(json &name);
    

        json serialize_VkPerformanceCounterDescriptionFlagsKHR(VkPerformanceCounterDescriptionFlagsKHR name);
        VkPerformanceCounterDescriptionFlagsKHR deserialize_VkPerformanceCounterDescriptionFlagsKHR(json &name);
    

        json serialize_VkAcquireProfilingLockFlagsKHR(VkAcquireProfilingLockFlagsKHR name);
        VkAcquireProfilingLockFlagsKHR deserialize_VkAcquireProfilingLockFlagsKHR(json &name);
    

        json serialize_VkSemaphoreWaitFlags(VkSemaphoreWaitFlags name);
        VkSemaphoreWaitFlags deserialize_VkSemaphoreWaitFlags(json &name);
    

        json serialize_VkSemaphoreWaitFlagsKHR(VkSemaphoreWaitFlagsKHR name);
        VkSemaphoreWaitFlagsKHR deserialize_VkSemaphoreWaitFlagsKHR(json &name);
    

        json serialize_VkPipelineCompilerControlFlagsAMD(VkPipelineCompilerControlFlagsAMD name);
        VkPipelineCompilerControlFlagsAMD deserialize_VkPipelineCompilerControlFlagsAMD(json &name);
    

        json serialize_VkShaderCorePropertiesFlagsAMD(VkShaderCorePropertiesFlagsAMD name);
        VkShaderCorePropertiesFlagsAMD deserialize_VkShaderCorePropertiesFlagsAMD(json &name);
    

        json serialize_VkDeviceDiagnosticsConfigFlagsNV(VkDeviceDiagnosticsConfigFlagsNV name);
        VkDeviceDiagnosticsConfigFlagsNV deserialize_VkDeviceDiagnosticsConfigFlagsNV(json &name);
    

        json serialize_VkAccessFlags2(VkAccessFlags2 name);
        VkAccessFlags2 deserialize_VkAccessFlags2(json &name);
    

        json serialize_VkAccessFlags2KHR(VkAccessFlags2KHR name);
        VkAccessFlags2KHR deserialize_VkAccessFlags2KHR(json &name);
    

        json serialize_VkPipelineStageFlags2(VkPipelineStageFlags2 name);
        VkPipelineStageFlags2 deserialize_VkPipelineStageFlags2(json &name);
    

        json serialize_VkPipelineStageFlags2KHR(VkPipelineStageFlags2KHR name);
        VkPipelineStageFlags2KHR deserialize_VkPipelineStageFlags2KHR(json &name);
    

        json serialize_VkAccelerationStructureMotionInfoFlagsNV(VkAccelerationStructureMotionInfoFlagsNV name);
        VkAccelerationStructureMotionInfoFlagsNV deserialize_VkAccelerationStructureMotionInfoFlagsNV(json &name);
    

        json serialize_VkAccelerationStructureMotionInstanceFlagsNV(VkAccelerationStructureMotionInstanceFlagsNV name);
        VkAccelerationStructureMotionInstanceFlagsNV deserialize_VkAccelerationStructureMotionInstanceFlagsNV(json &name);
    

        json serialize_VkFormatFeatureFlags2(VkFormatFeatureFlags2 name);
        VkFormatFeatureFlags2 deserialize_VkFormatFeatureFlags2(json &name);
    

        json serialize_VkFormatFeatureFlags2KHR(VkFormatFeatureFlags2KHR name);
        VkFormatFeatureFlags2KHR deserialize_VkFormatFeatureFlags2KHR(json &name);
    

        json serialize_VkRenderingFlags(VkRenderingFlags name);
        VkRenderingFlags deserialize_VkRenderingFlags(json &name);
    

        json serialize_VkMemoryDecompressionMethodFlagsNV(VkMemoryDecompressionMethodFlagsNV name);
        VkMemoryDecompressionMethodFlagsNV deserialize_VkMemoryDecompressionMethodFlagsNV(json &name);
    

        json serialize_VkRenderingFlagsKHR(VkRenderingFlagsKHR name);
        VkRenderingFlagsKHR deserialize_VkRenderingFlagsKHR(json &name);
    

        json serialize_VkBuildMicromapFlagsEXT(VkBuildMicromapFlagsEXT name);
        VkBuildMicromapFlagsEXT deserialize_VkBuildMicromapFlagsEXT(json &name);
    

        json serialize_VkMicromapCreateFlagsEXT(VkMicromapCreateFlagsEXT name);
        VkMicromapCreateFlagsEXT deserialize_VkMicromapCreateFlagsEXT(json &name);
    

        json serialize_VkDirectDriverLoadingFlagsLUNARG(VkDirectDriverLoadingFlagsLUNARG name);
        VkDirectDriverLoadingFlagsLUNARG deserialize_VkDirectDriverLoadingFlagsLUNARG(json &name);
    

        json serialize_VkPipelineCreateFlags2KHR(VkPipelineCreateFlags2KHR name);
        VkPipelineCreateFlags2KHR deserialize_VkPipelineCreateFlags2KHR(json &name);
    

        json serialize_VkBufferUsageFlags2KHR(VkBufferUsageFlags2KHR name);
        VkBufferUsageFlags2KHR deserialize_VkBufferUsageFlags2KHR(json &name);
    

        json serialize_VkCompositeAlphaFlagsKHR(VkCompositeAlphaFlagsKHR name);
        VkCompositeAlphaFlagsKHR deserialize_VkCompositeAlphaFlagsKHR(json &name);
    

        json serialize_VkDisplayPlaneAlphaFlagsKHR(VkDisplayPlaneAlphaFlagsKHR name);
        VkDisplayPlaneAlphaFlagsKHR deserialize_VkDisplayPlaneAlphaFlagsKHR(json &name);
    

        json serialize_VkSurfaceTransformFlagsKHR(VkSurfaceTransformFlagsKHR name);
        VkSurfaceTransformFlagsKHR deserialize_VkSurfaceTransformFlagsKHR(json &name);
    

        json serialize_VkSwapchainCreateFlagsKHR(VkSwapchainCreateFlagsKHR name);
        VkSwapchainCreateFlagsKHR deserialize_VkSwapchainCreateFlagsKHR(json &name);
    

        json serialize_VkDisplayModeCreateFlagsKHR(VkDisplayModeCreateFlagsKHR name);
        VkDisplayModeCreateFlagsKHR deserialize_VkDisplayModeCreateFlagsKHR(json &name);
    

        json serialize_VkDisplaySurfaceCreateFlagsKHR(VkDisplaySurfaceCreateFlagsKHR name);
        VkDisplaySurfaceCreateFlagsKHR deserialize_VkDisplaySurfaceCreateFlagsKHR(json &name);
    

        json serialize_VkXlibSurfaceCreateFlagsKHR(VkXlibSurfaceCreateFlagsKHR name);
        VkXlibSurfaceCreateFlagsKHR deserialize_VkXlibSurfaceCreateFlagsKHR(json &name);
    

        json serialize_VkXcbSurfaceCreateFlagsKHR(VkXcbSurfaceCreateFlagsKHR name);
        VkXcbSurfaceCreateFlagsKHR deserialize_VkXcbSurfaceCreateFlagsKHR(json &name);
    

        json serialize_VkHeadlessSurfaceCreateFlagsEXT(VkHeadlessSurfaceCreateFlagsEXT name);
        VkHeadlessSurfaceCreateFlagsEXT deserialize_VkHeadlessSurfaceCreateFlagsEXT(json &name);
    

        json serialize_VkPeerMemoryFeatureFlags(VkPeerMemoryFeatureFlags name);
        VkPeerMemoryFeatureFlags deserialize_VkPeerMemoryFeatureFlags(json &name);
    

        json serialize_VkPeerMemoryFeatureFlagsKHR(VkPeerMemoryFeatureFlagsKHR name);
        VkPeerMemoryFeatureFlagsKHR deserialize_VkPeerMemoryFeatureFlagsKHR(json &name);
    

        json serialize_VkMemoryAllocateFlags(VkMemoryAllocateFlags name);
        VkMemoryAllocateFlags deserialize_VkMemoryAllocateFlags(json &name);
    

        json serialize_VkMemoryAllocateFlagsKHR(VkMemoryAllocateFlagsKHR name);
        VkMemoryAllocateFlagsKHR deserialize_VkMemoryAllocateFlagsKHR(json &name);
    

        json serialize_VkDeviceGroupPresentModeFlagsKHR(VkDeviceGroupPresentModeFlagsKHR name);
        VkDeviceGroupPresentModeFlagsKHR deserialize_VkDeviceGroupPresentModeFlagsKHR(json &name);
    

        json serialize_VkDebugReportFlagsEXT(VkDebugReportFlagsEXT name);
        VkDebugReportFlagsEXT deserialize_VkDebugReportFlagsEXT(json &name);
    

        json serialize_VkCommandPoolTrimFlags(VkCommandPoolTrimFlags name);
        VkCommandPoolTrimFlags deserialize_VkCommandPoolTrimFlags(json &name);
    

        json serialize_VkCommandPoolTrimFlagsKHR(VkCommandPoolTrimFlagsKHR name);
        VkCommandPoolTrimFlagsKHR deserialize_VkCommandPoolTrimFlagsKHR(json &name);
    

        json serialize_VkExternalMemoryHandleTypeFlagsNV(VkExternalMemoryHandleTypeFlagsNV name);
        VkExternalMemoryHandleTypeFlagsNV deserialize_VkExternalMemoryHandleTypeFlagsNV(json &name);
    

        json serialize_VkExternalMemoryFeatureFlagsNV(VkExternalMemoryFeatureFlagsNV name);
        VkExternalMemoryFeatureFlagsNV deserialize_VkExternalMemoryFeatureFlagsNV(json &name);
    

        json serialize_VkExternalMemoryHandleTypeFlags(VkExternalMemoryHandleTypeFlags name);
        VkExternalMemoryHandleTypeFlags deserialize_VkExternalMemoryHandleTypeFlags(json &name);
    

        json serialize_VkExternalMemoryHandleTypeFlagsKHR(VkExternalMemoryHandleTypeFlagsKHR name);
        VkExternalMemoryHandleTypeFlagsKHR deserialize_VkExternalMemoryHandleTypeFlagsKHR(json &name);
    

        json serialize_VkExternalMemoryFeatureFlags(VkExternalMemoryFeatureFlags name);
        VkExternalMemoryFeatureFlags deserialize_VkExternalMemoryFeatureFlags(json &name);
    

        json serialize_VkExternalMemoryFeatureFlagsKHR(VkExternalMemoryFeatureFlagsKHR name);
        VkExternalMemoryFeatureFlagsKHR deserialize_VkExternalMemoryFeatureFlagsKHR(json &name);
    

        json serialize_VkExternalSemaphoreHandleTypeFlags(VkExternalSemaphoreHandleTypeFlags name);
        VkExternalSemaphoreHandleTypeFlags deserialize_VkExternalSemaphoreHandleTypeFlags(json &name);
    

        json serialize_VkExternalSemaphoreHandleTypeFlagsKHR(VkExternalSemaphoreHandleTypeFlagsKHR name);
        VkExternalSemaphoreHandleTypeFlagsKHR deserialize_VkExternalSemaphoreHandleTypeFlagsKHR(json &name);
    

        json serialize_VkExternalSemaphoreFeatureFlags(VkExternalSemaphoreFeatureFlags name);
        VkExternalSemaphoreFeatureFlags deserialize_VkExternalSemaphoreFeatureFlags(json &name);
    

        json serialize_VkExternalSemaphoreFeatureFlagsKHR(VkExternalSemaphoreFeatureFlagsKHR name);
        VkExternalSemaphoreFeatureFlagsKHR deserialize_VkExternalSemaphoreFeatureFlagsKHR(json &name);
    

        json serialize_VkSemaphoreImportFlags(VkSemaphoreImportFlags name);
        VkSemaphoreImportFlags deserialize_VkSemaphoreImportFlags(json &name);
    

        json serialize_VkSemaphoreImportFlagsKHR(VkSemaphoreImportFlagsKHR name);
        VkSemaphoreImportFlagsKHR deserialize_VkSemaphoreImportFlagsKHR(json &name);
    

        json serialize_VkExternalFenceHandleTypeFlags(VkExternalFenceHandleTypeFlags name);
        VkExternalFenceHandleTypeFlags deserialize_VkExternalFenceHandleTypeFlags(json &name);
    

        json serialize_VkExternalFenceHandleTypeFlagsKHR(VkExternalFenceHandleTypeFlagsKHR name);
        VkExternalFenceHandleTypeFlagsKHR deserialize_VkExternalFenceHandleTypeFlagsKHR(json &name);
    

        json serialize_VkExternalFenceFeatureFlags(VkExternalFenceFeatureFlags name);
        VkExternalFenceFeatureFlags deserialize_VkExternalFenceFeatureFlags(json &name);
    

        json serialize_VkExternalFenceFeatureFlagsKHR(VkExternalFenceFeatureFlagsKHR name);
        VkExternalFenceFeatureFlagsKHR deserialize_VkExternalFenceFeatureFlagsKHR(json &name);
    

        json serialize_VkFenceImportFlags(VkFenceImportFlags name);
        VkFenceImportFlags deserialize_VkFenceImportFlags(json &name);
    

        json serialize_VkFenceImportFlagsKHR(VkFenceImportFlagsKHR name);
        VkFenceImportFlagsKHR deserialize_VkFenceImportFlagsKHR(json &name);
    

        json serialize_VkSurfaceCounterFlagsEXT(VkSurfaceCounterFlagsEXT name);
        VkSurfaceCounterFlagsEXT deserialize_VkSurfaceCounterFlagsEXT(json &name);
    

        json serialize_VkPipelineViewportSwizzleStateCreateFlagsNV(VkPipelineViewportSwizzleStateCreateFlagsNV name);
        VkPipelineViewportSwizzleStateCreateFlagsNV deserialize_VkPipelineViewportSwizzleStateCreateFlagsNV(json &name);
    

        json serialize_VkPipelineDiscardRectangleStateCreateFlagsEXT(VkPipelineDiscardRectangleStateCreateFlagsEXT name);
        VkPipelineDiscardRectangleStateCreateFlagsEXT deserialize_VkPipelineDiscardRectangleStateCreateFlagsEXT(json &name);
    

        json serialize_VkPipelineCoverageToColorStateCreateFlagsNV(VkPipelineCoverageToColorStateCreateFlagsNV name);
        VkPipelineCoverageToColorStateCreateFlagsNV deserialize_VkPipelineCoverageToColorStateCreateFlagsNV(json &name);
    

        json serialize_VkPipelineCoverageModulationStateCreateFlagsNV(VkPipelineCoverageModulationStateCreateFlagsNV name);
        VkPipelineCoverageModulationStateCreateFlagsNV deserialize_VkPipelineCoverageModulationStateCreateFlagsNV(json &name);
    

        json serialize_VkPipelineCoverageReductionStateCreateFlagsNV(VkPipelineCoverageReductionStateCreateFlagsNV name);
        VkPipelineCoverageReductionStateCreateFlagsNV deserialize_VkPipelineCoverageReductionStateCreateFlagsNV(json &name);
    

        json serialize_VkValidationCacheCreateFlagsEXT(VkValidationCacheCreateFlagsEXT name);
        VkValidationCacheCreateFlagsEXT deserialize_VkValidationCacheCreateFlagsEXT(json &name);
    

        json serialize_VkDebugUtilsMessageSeverityFlagsEXT(VkDebugUtilsMessageSeverityFlagsEXT name);
        VkDebugUtilsMessageSeverityFlagsEXT deserialize_VkDebugUtilsMessageSeverityFlagsEXT(json &name);
    

        json serialize_VkDebugUtilsMessageTypeFlagsEXT(VkDebugUtilsMessageTypeFlagsEXT name);
        VkDebugUtilsMessageTypeFlagsEXT deserialize_VkDebugUtilsMessageTypeFlagsEXT(json &name);
    

        json serialize_VkDebugUtilsMessengerCreateFlagsEXT(VkDebugUtilsMessengerCreateFlagsEXT name);
        VkDebugUtilsMessengerCreateFlagsEXT deserialize_VkDebugUtilsMessengerCreateFlagsEXT(json &name);
    

        json serialize_VkDebugUtilsMessengerCallbackDataFlagsEXT(VkDebugUtilsMessengerCallbackDataFlagsEXT name);
        VkDebugUtilsMessengerCallbackDataFlagsEXT deserialize_VkDebugUtilsMessengerCallbackDataFlagsEXT(json &name);
    

        json serialize_VkDeviceMemoryReportFlagsEXT(VkDeviceMemoryReportFlagsEXT name);
        VkDeviceMemoryReportFlagsEXT deserialize_VkDeviceMemoryReportFlagsEXT(json &name);
    

        json serialize_VkPipelineRasterizationConservativeStateCreateFlagsEXT(VkPipelineRasterizationConservativeStateCreateFlagsEXT name);
        VkPipelineRasterizationConservativeStateCreateFlagsEXT deserialize_VkPipelineRasterizationConservativeStateCreateFlagsEXT(json &name);
    

        json serialize_VkDescriptorBindingFlags(VkDescriptorBindingFlags name);
        VkDescriptorBindingFlags deserialize_VkDescriptorBindingFlags(json &name);
    

        json serialize_VkDescriptorBindingFlagsEXT(VkDescriptorBindingFlagsEXT name);
        VkDescriptorBindingFlagsEXT deserialize_VkDescriptorBindingFlagsEXT(json &name);
    

        json serialize_VkConditionalRenderingFlagsEXT(VkConditionalRenderingFlagsEXT name);
        VkConditionalRenderingFlagsEXT deserialize_VkConditionalRenderingFlagsEXT(json &name);
    

        json serialize_VkResolveModeFlags(VkResolveModeFlags name);
        VkResolveModeFlags deserialize_VkResolveModeFlags(json &name);
    

        json serialize_VkResolveModeFlagsKHR(VkResolveModeFlagsKHR name);
        VkResolveModeFlagsKHR deserialize_VkResolveModeFlagsKHR(json &name);
    

        json serialize_VkPipelineRasterizationStateStreamCreateFlagsEXT(VkPipelineRasterizationStateStreamCreateFlagsEXT name);
        VkPipelineRasterizationStateStreamCreateFlagsEXT deserialize_VkPipelineRasterizationStateStreamCreateFlagsEXT(json &name);
    

        json serialize_VkPipelineRasterizationDepthClipStateCreateFlagsEXT(VkPipelineRasterizationDepthClipStateCreateFlagsEXT name);
        VkPipelineRasterizationDepthClipStateCreateFlagsEXT deserialize_VkPipelineRasterizationDepthClipStateCreateFlagsEXT(json &name);
    

        json serialize_VkToolPurposeFlags(VkToolPurposeFlags name);
        VkToolPurposeFlags deserialize_VkToolPurposeFlags(json &name);
    

        json serialize_VkToolPurposeFlagsEXT(VkToolPurposeFlagsEXT name);
        VkToolPurposeFlagsEXT deserialize_VkToolPurposeFlagsEXT(json &name);
    

        json serialize_VkSubmitFlags(VkSubmitFlags name);
        VkSubmitFlags deserialize_VkSubmitFlags(json &name);
    

        json serialize_VkSubmitFlagsKHR(VkSubmitFlagsKHR name);
        VkSubmitFlagsKHR deserialize_VkSubmitFlagsKHR(json &name);
    

        json serialize_VkHostImageCopyFlagsEXT(VkHostImageCopyFlagsEXT name);
        VkHostImageCopyFlagsEXT deserialize_VkHostImageCopyFlagsEXT(json &name);
    

        json serialize_VkGraphicsPipelineLibraryFlagsEXT(VkGraphicsPipelineLibraryFlagsEXT name);
        VkGraphicsPipelineLibraryFlagsEXT deserialize_VkGraphicsPipelineLibraryFlagsEXT(json &name);
    

        json serialize_VkImageCompressionFlagsEXT(VkImageCompressionFlagsEXT name);
        VkImageCompressionFlagsEXT deserialize_VkImageCompressionFlagsEXT(json &name);
    

        json serialize_VkImageCompressionFixedRateFlagsEXT(VkImageCompressionFixedRateFlagsEXT name);
        VkImageCompressionFixedRateFlagsEXT deserialize_VkImageCompressionFixedRateFlagsEXT(json &name);
    

        json serialize_VkDeviceAddressBindingFlagsEXT(VkDeviceAddressBindingFlagsEXT name);
        VkDeviceAddressBindingFlagsEXT deserialize_VkDeviceAddressBindingFlagsEXT(json &name);
    

        json serialize_VkOpticalFlowGridSizeFlagsNV(VkOpticalFlowGridSizeFlagsNV name);
        VkOpticalFlowGridSizeFlagsNV deserialize_VkOpticalFlowGridSizeFlagsNV(json &name);
    

        json serialize_VkOpticalFlowUsageFlagsNV(VkOpticalFlowUsageFlagsNV name);
        VkOpticalFlowUsageFlagsNV deserialize_VkOpticalFlowUsageFlagsNV(json &name);
    

        json serialize_VkOpticalFlowSessionCreateFlagsNV(VkOpticalFlowSessionCreateFlagsNV name);
        VkOpticalFlowSessionCreateFlagsNV deserialize_VkOpticalFlowSessionCreateFlagsNV(json &name);
    

        json serialize_VkOpticalFlowExecuteFlagsNV(VkOpticalFlowExecuteFlagsNV name);
        VkOpticalFlowExecuteFlagsNV deserialize_VkOpticalFlowExecuteFlagsNV(json &name);
    

        json serialize_VkFrameBoundaryFlagsEXT(VkFrameBoundaryFlagsEXT name);
        VkFrameBoundaryFlagsEXT deserialize_VkFrameBoundaryFlagsEXT(json &name);
    

        json serialize_VkPresentScalingFlagsEXT(VkPresentScalingFlagsEXT name);
        VkPresentScalingFlagsEXT deserialize_VkPresentScalingFlagsEXT(json &name);
    

        json serialize_VkPresentGravityFlagsEXT(VkPresentGravityFlagsEXT name);
        VkPresentGravityFlagsEXT deserialize_VkPresentGravityFlagsEXT(json &name);
    

        json serialize_VkShaderCreateFlagsEXT(VkShaderCreateFlagsEXT name);
        VkShaderCreateFlagsEXT deserialize_VkShaderCreateFlagsEXT(json &name);
    

        json serialize_VkVideoCodecOperationFlagsKHR(VkVideoCodecOperationFlagsKHR name);
        VkVideoCodecOperationFlagsKHR deserialize_VkVideoCodecOperationFlagsKHR(json &name);
    

        json serialize_VkVideoCapabilityFlagsKHR(VkVideoCapabilityFlagsKHR name);
        VkVideoCapabilityFlagsKHR deserialize_VkVideoCapabilityFlagsKHR(json &name);
    

        json serialize_VkVideoSessionCreateFlagsKHR(VkVideoSessionCreateFlagsKHR name);
        VkVideoSessionCreateFlagsKHR deserialize_VkVideoSessionCreateFlagsKHR(json &name);
    

        json serialize_VkVideoSessionParametersCreateFlagsKHR(VkVideoSessionParametersCreateFlagsKHR name);
        VkVideoSessionParametersCreateFlagsKHR deserialize_VkVideoSessionParametersCreateFlagsKHR(json &name);
    

        json serialize_VkVideoBeginCodingFlagsKHR(VkVideoBeginCodingFlagsKHR name);
        VkVideoBeginCodingFlagsKHR deserialize_VkVideoBeginCodingFlagsKHR(json &name);
    

        json serialize_VkVideoEndCodingFlagsKHR(VkVideoEndCodingFlagsKHR name);
        VkVideoEndCodingFlagsKHR deserialize_VkVideoEndCodingFlagsKHR(json &name);
    

        json serialize_VkVideoCodingControlFlagsKHR(VkVideoCodingControlFlagsKHR name);
        VkVideoCodingControlFlagsKHR deserialize_VkVideoCodingControlFlagsKHR(json &name);
    

        json serialize_VkVideoDecodeUsageFlagsKHR(VkVideoDecodeUsageFlagsKHR name);
        VkVideoDecodeUsageFlagsKHR deserialize_VkVideoDecodeUsageFlagsKHR(json &name);
    

        json serialize_VkVideoDecodeCapabilityFlagsKHR(VkVideoDecodeCapabilityFlagsKHR name);
        VkVideoDecodeCapabilityFlagsKHR deserialize_VkVideoDecodeCapabilityFlagsKHR(json &name);
    

        json serialize_VkVideoDecodeFlagsKHR(VkVideoDecodeFlagsKHR name);
        VkVideoDecodeFlagsKHR deserialize_VkVideoDecodeFlagsKHR(json &name);
    

        json serialize_VkVideoDecodeH264PictureLayoutFlagsKHR(VkVideoDecodeH264PictureLayoutFlagsKHR name);
        VkVideoDecodeH264PictureLayoutFlagsKHR deserialize_VkVideoDecodeH264PictureLayoutFlagsKHR(json &name);
    

        json serialize_VkVideoChromaSubsamplingFlagsKHR(VkVideoChromaSubsamplingFlagsKHR name);
        VkVideoChromaSubsamplingFlagsKHR deserialize_VkVideoChromaSubsamplingFlagsKHR(json &name);
    

        json serialize_VkVideoComponentBitDepthFlagsKHR(VkVideoComponentBitDepthFlagsKHR name);
        VkVideoComponentBitDepthFlagsKHR deserialize_VkVideoComponentBitDepthFlagsKHR(json &name);
    

        json serialize_VkAttachmentLoadOp(VkAttachmentLoadOp name);
        VkAttachmentLoadOp deserialize_VkAttachmentLoadOp(json &name);
    

        json serialize_VkAttachmentStoreOp(VkAttachmentStoreOp name);
        VkAttachmentStoreOp deserialize_VkAttachmentStoreOp(json &name);
    

        json serialize_VkBlendFactor(VkBlendFactor name);
        VkBlendFactor deserialize_VkBlendFactor(json &name);
    

        json serialize_VkBlendOp(VkBlendOp name);
        VkBlendOp deserialize_VkBlendOp(json &name);
    

        json serialize_VkBorderColor(VkBorderColor name);
        VkBorderColor deserialize_VkBorderColor(json &name);
    

        json serialize_VkFramebufferCreateFlagBits(VkFramebufferCreateFlagBits name);
        VkFramebufferCreateFlagBits deserialize_VkFramebufferCreateFlagBits(json &name);
    

        json serialize_VkRenderPassCreateFlagBits(VkRenderPassCreateFlagBits name);
        VkRenderPassCreateFlagBits deserialize_VkRenderPassCreateFlagBits(json &name);
    

        json serialize_VkSamplerCreateFlagBits(VkSamplerCreateFlagBits name);
        VkSamplerCreateFlagBits deserialize_VkSamplerCreateFlagBits(json &name);
    

        json serialize_VkPipelineCacheHeaderVersion(VkPipelineCacheHeaderVersion name);
        VkPipelineCacheHeaderVersion deserialize_VkPipelineCacheHeaderVersion(json &name);
    

        json serialize_VkPipelineCacheCreateFlagBits(VkPipelineCacheCreateFlagBits name);
        VkPipelineCacheCreateFlagBits deserialize_VkPipelineCacheCreateFlagBits(json &name);
    

        json serialize_VkPipelineShaderStageCreateFlagBits(VkPipelineShaderStageCreateFlagBits name);
        VkPipelineShaderStageCreateFlagBits deserialize_VkPipelineShaderStageCreateFlagBits(json &name);
    

        json serialize_VkDescriptorSetLayoutCreateFlagBits(VkDescriptorSetLayoutCreateFlagBits name);
        VkDescriptorSetLayoutCreateFlagBits deserialize_VkDescriptorSetLayoutCreateFlagBits(json &name);
    

        json serialize_VkInstanceCreateFlagBits(VkInstanceCreateFlagBits name);
        VkInstanceCreateFlagBits deserialize_VkInstanceCreateFlagBits(json &name);
    

        json serialize_VkDeviceQueueCreateFlagBits(VkDeviceQueueCreateFlagBits name);
        VkDeviceQueueCreateFlagBits deserialize_VkDeviceQueueCreateFlagBits(json &name);
    

        json serialize_VkBufferCreateFlagBits(VkBufferCreateFlagBits name);
        VkBufferCreateFlagBits deserialize_VkBufferCreateFlagBits(json &name);
    

        json serialize_VkBufferUsageFlagBits(VkBufferUsageFlagBits name);
        VkBufferUsageFlagBits deserialize_VkBufferUsageFlagBits(json &name);
    

        json serialize_VkColorComponentFlagBits(VkColorComponentFlagBits name);
        VkColorComponentFlagBits deserialize_VkColorComponentFlagBits(json &name);
    

        json serialize_VkComponentSwizzle(VkComponentSwizzle name);
        VkComponentSwizzle deserialize_VkComponentSwizzle(json &name);
    

        json serialize_VkCommandPoolCreateFlagBits(VkCommandPoolCreateFlagBits name);
        VkCommandPoolCreateFlagBits deserialize_VkCommandPoolCreateFlagBits(json &name);
    

        json serialize_VkCommandPoolResetFlagBits(VkCommandPoolResetFlagBits name);
        VkCommandPoolResetFlagBits deserialize_VkCommandPoolResetFlagBits(json &name);
    

        json serialize_VkCommandBufferResetFlagBits(VkCommandBufferResetFlagBits name);
        VkCommandBufferResetFlagBits deserialize_VkCommandBufferResetFlagBits(json &name);
    

        json serialize_VkCommandBufferLevel(VkCommandBufferLevel name);
        VkCommandBufferLevel deserialize_VkCommandBufferLevel(json &name);
    

        json serialize_VkCommandBufferUsageFlagBits(VkCommandBufferUsageFlagBits name);
        VkCommandBufferUsageFlagBits deserialize_VkCommandBufferUsageFlagBits(json &name);
    

        json serialize_VkCompareOp(VkCompareOp name);
        VkCompareOp deserialize_VkCompareOp(json &name);
    

        json serialize_VkCullModeFlagBits(VkCullModeFlagBits name);
        VkCullModeFlagBits deserialize_VkCullModeFlagBits(json &name);
    

        json serialize_VkDescriptorType(VkDescriptorType name);
        VkDescriptorType deserialize_VkDescriptorType(json &name);
    

        json serialize_VkDynamicState(VkDynamicState name);
        VkDynamicState deserialize_VkDynamicState(json &name);
    

        json serialize_VkFenceCreateFlagBits(VkFenceCreateFlagBits name);
        VkFenceCreateFlagBits deserialize_VkFenceCreateFlagBits(json &name);
    

        json serialize_VkPolygonMode(VkPolygonMode name);
        VkPolygonMode deserialize_VkPolygonMode(json &name);
    

        json serialize_VkFormat(VkFormat name);
        VkFormat deserialize_VkFormat(json &name);
    

        json serialize_VkFormatFeatureFlagBits(VkFormatFeatureFlagBits name);
        VkFormatFeatureFlagBits deserialize_VkFormatFeatureFlagBits(json &name);
    

        json serialize_VkFrontFace(VkFrontFace name);
        VkFrontFace deserialize_VkFrontFace(json &name);
    

        json serialize_VkImageAspectFlagBits(VkImageAspectFlagBits name);
        VkImageAspectFlagBits deserialize_VkImageAspectFlagBits(json &name);
    

        json serialize_VkImageCreateFlagBits(VkImageCreateFlagBits name);
        VkImageCreateFlagBits deserialize_VkImageCreateFlagBits(json &name);
    

        json serialize_VkImageLayout(VkImageLayout name);
        VkImageLayout deserialize_VkImageLayout(json &name);
    

        json serialize_VkImageTiling(VkImageTiling name);
        VkImageTiling deserialize_VkImageTiling(json &name);
    

        json serialize_VkImageType(VkImageType name);
        VkImageType deserialize_VkImageType(json &name);
    

        json serialize_VkImageUsageFlagBits(VkImageUsageFlagBits name);
        VkImageUsageFlagBits deserialize_VkImageUsageFlagBits(json &name);
    

        json serialize_VkImageViewCreateFlagBits(VkImageViewCreateFlagBits name);
        VkImageViewCreateFlagBits deserialize_VkImageViewCreateFlagBits(json &name);
    

        json serialize_VkImageViewType(VkImageViewType name);
        VkImageViewType deserialize_VkImageViewType(json &name);
    

        json serialize_VkSharingMode(VkSharingMode name);
        VkSharingMode deserialize_VkSharingMode(json &name);
    

        json serialize_VkIndexType(VkIndexType name);
        VkIndexType deserialize_VkIndexType(json &name);
    

        json serialize_VkLogicOp(VkLogicOp name);
        VkLogicOp deserialize_VkLogicOp(json &name);
    

        json serialize_VkMemoryHeapFlagBits(VkMemoryHeapFlagBits name);
        VkMemoryHeapFlagBits deserialize_VkMemoryHeapFlagBits(json &name);
    

        json serialize_VkAccessFlagBits(VkAccessFlagBits name);
        VkAccessFlagBits deserialize_VkAccessFlagBits(json &name);
    

        json serialize_VkMemoryPropertyFlagBits(VkMemoryPropertyFlagBits name);
        VkMemoryPropertyFlagBits deserialize_VkMemoryPropertyFlagBits(json &name);
    

        json serialize_VkPhysicalDeviceType(VkPhysicalDeviceType name);
        VkPhysicalDeviceType deserialize_VkPhysicalDeviceType(json &name);
    

        json serialize_VkPipelineBindPoint(VkPipelineBindPoint name);
        VkPipelineBindPoint deserialize_VkPipelineBindPoint(json &name);
    

        json serialize_VkPipelineCreateFlagBits(VkPipelineCreateFlagBits name);
        VkPipelineCreateFlagBits deserialize_VkPipelineCreateFlagBits(json &name);
    

        json serialize_VkPrimitiveTopology(VkPrimitiveTopology name);
        VkPrimitiveTopology deserialize_VkPrimitiveTopology(json &name);
    

        json serialize_VkQueryControlFlagBits(VkQueryControlFlagBits name);
        VkQueryControlFlagBits deserialize_VkQueryControlFlagBits(json &name);
    

        json serialize_VkQueryPipelineStatisticFlagBits(VkQueryPipelineStatisticFlagBits name);
        VkQueryPipelineStatisticFlagBits deserialize_VkQueryPipelineStatisticFlagBits(json &name);
    

        json serialize_VkQueryResultFlagBits(VkQueryResultFlagBits name);
        VkQueryResultFlagBits deserialize_VkQueryResultFlagBits(json &name);
    

        json serialize_VkQueryType(VkQueryType name);
        VkQueryType deserialize_VkQueryType(json &name);
    

        json serialize_VkQueueFlagBits(VkQueueFlagBits name);
        VkQueueFlagBits deserialize_VkQueueFlagBits(json &name);
    

        json serialize_VkSubpassContents(VkSubpassContents name);
        VkSubpassContents deserialize_VkSubpassContents(json &name);
    

        json serialize_VkResult(VkResult name);
        VkResult deserialize_VkResult(json &name);
    

        json serialize_VkShaderStageFlagBits(VkShaderStageFlagBits name);
        VkShaderStageFlagBits deserialize_VkShaderStageFlagBits(json &name);
    

        json serialize_VkSparseMemoryBindFlagBits(VkSparseMemoryBindFlagBits name);
        VkSparseMemoryBindFlagBits deserialize_VkSparseMemoryBindFlagBits(json &name);
    

        json serialize_VkStencilFaceFlagBits(VkStencilFaceFlagBits name);
        VkStencilFaceFlagBits deserialize_VkStencilFaceFlagBits(json &name);
    

        json serialize_VkStencilOp(VkStencilOp name);
        VkStencilOp deserialize_VkStencilOp(json &name);
    

        json serialize_VkStructureType(VkStructureType name);
        VkStructureType deserialize_VkStructureType(json &name);
    

        json serialize_VkSystemAllocationScope(VkSystemAllocationScope name);
        VkSystemAllocationScope deserialize_VkSystemAllocationScope(json &name);
    

        json serialize_VkInternalAllocationType(VkInternalAllocationType name);
        VkInternalAllocationType deserialize_VkInternalAllocationType(json &name);
    

        json serialize_VkSamplerAddressMode(VkSamplerAddressMode name);
        VkSamplerAddressMode deserialize_VkSamplerAddressMode(json &name);
    

        json serialize_VkFilter(VkFilter name);
        VkFilter deserialize_VkFilter(json &name);
    

        json serialize_VkSamplerMipmapMode(VkSamplerMipmapMode name);
        VkSamplerMipmapMode deserialize_VkSamplerMipmapMode(json &name);
    

        json serialize_VkVertexInputRate(VkVertexInputRate name);
        VkVertexInputRate deserialize_VkVertexInputRate(json &name);
    

        json serialize_VkPipelineStageFlagBits(VkPipelineStageFlagBits name);
        VkPipelineStageFlagBits deserialize_VkPipelineStageFlagBits(json &name);
    

        json serialize_VkSparseImageFormatFlagBits(VkSparseImageFormatFlagBits name);
        VkSparseImageFormatFlagBits deserialize_VkSparseImageFormatFlagBits(json &name);
    

        json serialize_VkSampleCountFlagBits(VkSampleCountFlagBits name);
        VkSampleCountFlagBits deserialize_VkSampleCountFlagBits(json &name);
    

        json serialize_VkAttachmentDescriptionFlagBits(VkAttachmentDescriptionFlagBits name);
        VkAttachmentDescriptionFlagBits deserialize_VkAttachmentDescriptionFlagBits(json &name);
    

        json serialize_VkDescriptorPoolCreateFlagBits(VkDescriptorPoolCreateFlagBits name);
        VkDescriptorPoolCreateFlagBits deserialize_VkDescriptorPoolCreateFlagBits(json &name);
    

        json serialize_VkDependencyFlagBits(VkDependencyFlagBits name);
        VkDependencyFlagBits deserialize_VkDependencyFlagBits(json &name);
    

        json serialize_VkObjectType(VkObjectType name);
        VkObjectType deserialize_VkObjectType(json &name);
    

        json serialize_VkEventCreateFlagBits(VkEventCreateFlagBits name);
        VkEventCreateFlagBits deserialize_VkEventCreateFlagBits(json &name);
    

        json serialize_VkPipelineLayoutCreateFlagBits(VkPipelineLayoutCreateFlagBits name);
        VkPipelineLayoutCreateFlagBits deserialize_VkPipelineLayoutCreateFlagBits(json &name);
    

        json serialize_VkRayTracingInvocationReorderModeNV(VkRayTracingInvocationReorderModeNV name);
        VkRayTracingInvocationReorderModeNV deserialize_VkRayTracingInvocationReorderModeNV(json &name);
    

        json serialize_VkIndirectCommandsLayoutUsageFlagBitsNV(VkIndirectCommandsLayoutUsageFlagBitsNV name);
        VkIndirectCommandsLayoutUsageFlagBitsNV deserialize_VkIndirectCommandsLayoutUsageFlagBitsNV(json &name);
    

        json serialize_VkIndirectCommandsTokenTypeNV(VkIndirectCommandsTokenTypeNV name);
        VkIndirectCommandsTokenTypeNV deserialize_VkIndirectCommandsTokenTypeNV(json &name);
    

        json serialize_VkIndirectStateFlagBitsNV(VkIndirectStateFlagBitsNV name);
        VkIndirectStateFlagBitsNV deserialize_VkIndirectStateFlagBitsNV(json &name);
    

        json serialize_VkDescriptorUpdateTemplateType(VkDescriptorUpdateTemplateType name);
        VkDescriptorUpdateTemplateType deserialize_VkDescriptorUpdateTemplateType(json &name);
    

        json serialize_VkDescriptorUpdateTemplateTypeKHR(VkDescriptorUpdateTemplateTypeKHR name);
        VkDescriptorUpdateTemplateTypeKHR deserialize_VkDescriptorUpdateTemplateTypeKHR(json &name);
    

        json serialize_VkViewportCoordinateSwizzleNV(VkViewportCoordinateSwizzleNV name);
        VkViewportCoordinateSwizzleNV deserialize_VkViewportCoordinateSwizzleNV(json &name);
    

        json serialize_VkDiscardRectangleModeEXT(VkDiscardRectangleModeEXT name);
        VkDiscardRectangleModeEXT deserialize_VkDiscardRectangleModeEXT(json &name);
    

        json serialize_VkSubpassDescriptionFlagBits(VkSubpassDescriptionFlagBits name);
        VkSubpassDescriptionFlagBits deserialize_VkSubpassDescriptionFlagBits(json &name);
    

        json serialize_VkPointClippingBehavior(VkPointClippingBehavior name);
        VkPointClippingBehavior deserialize_VkPointClippingBehavior(json &name);
    

        json serialize_VkPointClippingBehaviorKHR(VkPointClippingBehaviorKHR name);
        VkPointClippingBehaviorKHR deserialize_VkPointClippingBehaviorKHR(json &name);
    

        json serialize_VkCoverageModulationModeNV(VkCoverageModulationModeNV name);
        VkCoverageModulationModeNV deserialize_VkCoverageModulationModeNV(json &name);
    

        json serialize_VkCoverageReductionModeNV(VkCoverageReductionModeNV name);
        VkCoverageReductionModeNV deserialize_VkCoverageReductionModeNV(json &name);
    

        json serialize_VkValidationCacheHeaderVersionEXT(VkValidationCacheHeaderVersionEXT name);
        VkValidationCacheHeaderVersionEXT deserialize_VkValidationCacheHeaderVersionEXT(json &name);
    

        json serialize_VkShaderInfoTypeAMD(VkShaderInfoTypeAMD name);
        VkShaderInfoTypeAMD deserialize_VkShaderInfoTypeAMD(json &name);
    

        json serialize_VkQueueGlobalPriorityKHR(VkQueueGlobalPriorityKHR name);
        VkQueueGlobalPriorityKHR deserialize_VkQueueGlobalPriorityKHR(json &name);
    

        json serialize_VkQueueGlobalPriorityEXT(VkQueueGlobalPriorityEXT name);
        VkQueueGlobalPriorityEXT deserialize_VkQueueGlobalPriorityEXT(json &name);
    

        json serialize_VkTimeDomainEXT(VkTimeDomainEXT name);
        VkTimeDomainEXT deserialize_VkTimeDomainEXT(json &name);
    

        json serialize_VkConservativeRasterizationModeEXT(VkConservativeRasterizationModeEXT name);
        VkConservativeRasterizationModeEXT deserialize_VkConservativeRasterizationModeEXT(json &name);
    

        json serialize_VkResolveModeFlagBits(VkResolveModeFlagBits name);
        VkResolveModeFlagBits deserialize_VkResolveModeFlagBits(json &name);
    

        json serialize_VkResolveModeFlagBitsKHR(VkResolveModeFlagBitsKHR name);
        VkResolveModeFlagBitsKHR deserialize_VkResolveModeFlagBitsKHR(json &name);
    

        json serialize_VkDescriptorBindingFlagBits(VkDescriptorBindingFlagBits name);
        VkDescriptorBindingFlagBits deserialize_VkDescriptorBindingFlagBits(json &name);
    

        json serialize_VkDescriptorBindingFlagBitsEXT(VkDescriptorBindingFlagBitsEXT name);
        VkDescriptorBindingFlagBitsEXT deserialize_VkDescriptorBindingFlagBitsEXT(json &name);
    

        json serialize_VkConditionalRenderingFlagBitsEXT(VkConditionalRenderingFlagBitsEXT name);
        VkConditionalRenderingFlagBitsEXT deserialize_VkConditionalRenderingFlagBitsEXT(json &name);
    

        json serialize_VkSemaphoreType(VkSemaphoreType name);
        VkSemaphoreType deserialize_VkSemaphoreType(json &name);
    

        json serialize_VkSemaphoreTypeKHR(VkSemaphoreTypeKHR name);
        VkSemaphoreTypeKHR deserialize_VkSemaphoreTypeKHR(json &name);
    

        json serialize_VkGeometryFlagBitsKHR(VkGeometryFlagBitsKHR name);
        VkGeometryFlagBitsKHR deserialize_VkGeometryFlagBitsKHR(json &name);
    

        json serialize_VkGeometryFlagBitsNV(VkGeometryFlagBitsNV name);
        VkGeometryFlagBitsNV deserialize_VkGeometryFlagBitsNV(json &name);
    

        json serialize_VkGeometryInstanceFlagBitsKHR(VkGeometryInstanceFlagBitsKHR name);
        VkGeometryInstanceFlagBitsKHR deserialize_VkGeometryInstanceFlagBitsKHR(json &name);
    

        json serialize_VkGeometryInstanceFlagBitsNV(VkGeometryInstanceFlagBitsNV name);
        VkGeometryInstanceFlagBitsNV deserialize_VkGeometryInstanceFlagBitsNV(json &name);
    

        json serialize_VkBuildAccelerationStructureFlagBitsKHR(VkBuildAccelerationStructureFlagBitsKHR name);
        VkBuildAccelerationStructureFlagBitsKHR deserialize_VkBuildAccelerationStructureFlagBitsKHR(json &name);
    

        json serialize_VkBuildAccelerationStructureFlagBitsNV(VkBuildAccelerationStructureFlagBitsNV name);
        VkBuildAccelerationStructureFlagBitsNV deserialize_VkBuildAccelerationStructureFlagBitsNV(json &name);
    

        json serialize_VkAccelerationStructureCreateFlagBitsKHR(VkAccelerationStructureCreateFlagBitsKHR name);
        VkAccelerationStructureCreateFlagBitsKHR deserialize_VkAccelerationStructureCreateFlagBitsKHR(json &name);
    

        json serialize_VkBuildAccelerationStructureModeKHR(VkBuildAccelerationStructureModeKHR name);
        VkBuildAccelerationStructureModeKHR deserialize_VkBuildAccelerationStructureModeKHR(json &name);
    

        json serialize_VkCopyAccelerationStructureModeKHR(VkCopyAccelerationStructureModeKHR name);
        VkCopyAccelerationStructureModeKHR deserialize_VkCopyAccelerationStructureModeKHR(json &name);
    

        json serialize_VkCopyAccelerationStructureModeNV(VkCopyAccelerationStructureModeNV name);
        VkCopyAccelerationStructureModeNV deserialize_VkCopyAccelerationStructureModeNV(json &name);
    

        json serialize_VkAccelerationStructureTypeKHR(VkAccelerationStructureTypeKHR name);
        VkAccelerationStructureTypeKHR deserialize_VkAccelerationStructureTypeKHR(json &name);
    

        json serialize_VkAccelerationStructureTypeNV(VkAccelerationStructureTypeNV name);
        VkAccelerationStructureTypeNV deserialize_VkAccelerationStructureTypeNV(json &name);
    

        json serialize_VkGeometryTypeKHR(VkGeometryTypeKHR name);
        VkGeometryTypeKHR deserialize_VkGeometryTypeKHR(json &name);
    

        json serialize_VkGeometryTypeNV(VkGeometryTypeNV name);
        VkGeometryTypeNV deserialize_VkGeometryTypeNV(json &name);
    

        json serialize_VkRayTracingShaderGroupTypeKHR(VkRayTracingShaderGroupTypeKHR name);
        VkRayTracingShaderGroupTypeKHR deserialize_VkRayTracingShaderGroupTypeKHR(json &name);
    

        json serialize_VkRayTracingShaderGroupTypeNV(VkRayTracingShaderGroupTypeNV name);
        VkRayTracingShaderGroupTypeNV deserialize_VkRayTracingShaderGroupTypeNV(json &name);
    

        json serialize_VkAccelerationStructureMemoryRequirementsTypeNV(VkAccelerationStructureMemoryRequirementsTypeNV name);
        VkAccelerationStructureMemoryRequirementsTypeNV deserialize_VkAccelerationStructureMemoryRequirementsTypeNV(json &name);
    

        json serialize_VkAccelerationStructureBuildTypeKHR(VkAccelerationStructureBuildTypeKHR name);
        VkAccelerationStructureBuildTypeKHR deserialize_VkAccelerationStructureBuildTypeKHR(json &name);
    

        json serialize_VkAccelerationStructureCompatibilityKHR(VkAccelerationStructureCompatibilityKHR name);
        VkAccelerationStructureCompatibilityKHR deserialize_VkAccelerationStructureCompatibilityKHR(json &name);
    

        json serialize_VkShaderGroupShaderKHR(VkShaderGroupShaderKHR name);
        VkShaderGroupShaderKHR deserialize_VkShaderGroupShaderKHR(json &name);
    

        json serialize_VkMemoryOverallocationBehaviorAMD(VkMemoryOverallocationBehaviorAMD name);
        VkMemoryOverallocationBehaviorAMD deserialize_VkMemoryOverallocationBehaviorAMD(json &name);
    

        json serialize_VkDeviceDiagnosticsConfigFlagBitsNV(VkDeviceDiagnosticsConfigFlagBitsNV name);
        VkDeviceDiagnosticsConfigFlagBitsNV deserialize_VkDeviceDiagnosticsConfigFlagBitsNV(json &name);
    

        json serialize_VkPipelineCreationFeedbackFlagBits(VkPipelineCreationFeedbackFlagBits name);
        VkPipelineCreationFeedbackFlagBits deserialize_VkPipelineCreationFeedbackFlagBits(json &name);
    

        json serialize_VkPipelineCreationFeedbackFlagBitsEXT(VkPipelineCreationFeedbackFlagBitsEXT name);
        VkPipelineCreationFeedbackFlagBitsEXT deserialize_VkPipelineCreationFeedbackFlagBitsEXT(json &name);
    

        json serialize_VkPerformanceCounterScopeKHR(VkPerformanceCounterScopeKHR name);
        VkPerformanceCounterScopeKHR deserialize_VkPerformanceCounterScopeKHR(json &name);
    

        json serialize_VkPerformanceCounterUnitKHR(VkPerformanceCounterUnitKHR name);
        VkPerformanceCounterUnitKHR deserialize_VkPerformanceCounterUnitKHR(json &name);
    

        json serialize_VkPerformanceCounterStorageKHR(VkPerformanceCounterStorageKHR name);
        VkPerformanceCounterStorageKHR deserialize_VkPerformanceCounterStorageKHR(json &name);
    

        json serialize_VkPerformanceCounterDescriptionFlagBitsKHR(VkPerformanceCounterDescriptionFlagBitsKHR name);
        VkPerformanceCounterDescriptionFlagBitsKHR deserialize_VkPerformanceCounterDescriptionFlagBitsKHR(json &name);
    

        json serialize_VkAcquireProfilingLockFlagBitsKHR(VkAcquireProfilingLockFlagBitsKHR name);
        VkAcquireProfilingLockFlagBitsKHR deserialize_VkAcquireProfilingLockFlagBitsKHR(json &name);
    

        json serialize_VkSemaphoreWaitFlagBits(VkSemaphoreWaitFlagBits name);
        VkSemaphoreWaitFlagBits deserialize_VkSemaphoreWaitFlagBits(json &name);
    

        json serialize_VkSemaphoreWaitFlagBitsKHR(VkSemaphoreWaitFlagBitsKHR name);
        VkSemaphoreWaitFlagBitsKHR deserialize_VkSemaphoreWaitFlagBitsKHR(json &name);
    

        json serialize_VkPerformanceConfigurationTypeINTEL(VkPerformanceConfigurationTypeINTEL name);
        VkPerformanceConfigurationTypeINTEL deserialize_VkPerformanceConfigurationTypeINTEL(json &name);
    

        json serialize_VkQueryPoolSamplingModeINTEL(VkQueryPoolSamplingModeINTEL name);
        VkQueryPoolSamplingModeINTEL deserialize_VkQueryPoolSamplingModeINTEL(json &name);
    

        json serialize_VkPerformanceOverrideTypeINTEL(VkPerformanceOverrideTypeINTEL name);
        VkPerformanceOverrideTypeINTEL deserialize_VkPerformanceOverrideTypeINTEL(json &name);
    

        json serialize_VkPerformanceParameterTypeINTEL(VkPerformanceParameterTypeINTEL name);
        VkPerformanceParameterTypeINTEL deserialize_VkPerformanceParameterTypeINTEL(json &name);
    

        json serialize_VkPerformanceValueTypeINTEL(VkPerformanceValueTypeINTEL name);
        VkPerformanceValueTypeINTEL deserialize_VkPerformanceValueTypeINTEL(json &name);
    

        json serialize_VkLineRasterizationModeEXT(VkLineRasterizationModeEXT name);
        VkLineRasterizationModeEXT deserialize_VkLineRasterizationModeEXT(json &name);
    

        json serialize_VkPipelineCompilerControlFlagBitsAMD(VkPipelineCompilerControlFlagBitsAMD name);
        VkPipelineCompilerControlFlagBitsAMD deserialize_VkPipelineCompilerControlFlagBitsAMD(json &name);
    

        json serialize_VkShaderCorePropertiesFlagBitsAMD(VkShaderCorePropertiesFlagBitsAMD name);
        VkShaderCorePropertiesFlagBitsAMD deserialize_VkShaderCorePropertiesFlagBitsAMD(json &name);
    

        json serialize_VkToolPurposeFlagBits(VkToolPurposeFlagBits name);
        VkToolPurposeFlagBits deserialize_VkToolPurposeFlagBits(json &name);
    

        json serialize_VkToolPurposeFlagBitsEXT(VkToolPurposeFlagBitsEXT name);
        VkToolPurposeFlagBitsEXT deserialize_VkToolPurposeFlagBitsEXT(json &name);
    

        json serialize_VkFragmentShadingRateNV(VkFragmentShadingRateNV name);
        VkFragmentShadingRateNV deserialize_VkFragmentShadingRateNV(json &name);
    

        json serialize_VkFragmentShadingRateTypeNV(VkFragmentShadingRateTypeNV name);
        VkFragmentShadingRateTypeNV deserialize_VkFragmentShadingRateTypeNV(json &name);
    

        json serialize_VkSubpassMergeStatusEXT(VkSubpassMergeStatusEXT name);
        VkSubpassMergeStatusEXT deserialize_VkSubpassMergeStatusEXT(json &name);
    

        json serialize_VkAccessFlagBits2(VkAccessFlagBits2 name);
        VkAccessFlagBits2 deserialize_VkAccessFlagBits2(json &name);
    

        json serialize_VkAccessFlagBits2KHR(VkAccessFlagBits2KHR name);
        VkAccessFlagBits2KHR deserialize_VkAccessFlagBits2KHR(json &name);
    

        json serialize_VkPipelineStageFlagBits2(VkPipelineStageFlagBits2 name);
        VkPipelineStageFlagBits2 deserialize_VkPipelineStageFlagBits2(json &name);
    

        json serialize_VkPipelineStageFlagBits2KHR(VkPipelineStageFlagBits2KHR name);
        VkPipelineStageFlagBits2KHR deserialize_VkPipelineStageFlagBits2KHR(json &name);
    

        json serialize_VkProvokingVertexModeEXT(VkProvokingVertexModeEXT name);
        VkProvokingVertexModeEXT deserialize_VkProvokingVertexModeEXT(json &name);
    

        json serialize_VkHostImageCopyFlagBitsEXT(VkHostImageCopyFlagBitsEXT name);
        VkHostImageCopyFlagBitsEXT deserialize_VkHostImageCopyFlagBitsEXT(json &name);
    

        json serialize_VkFormatFeatureFlagBits2(VkFormatFeatureFlagBits2 name);
        VkFormatFeatureFlagBits2 deserialize_VkFormatFeatureFlagBits2(json &name);
    

        json serialize_VkFormatFeatureFlagBits2KHR(VkFormatFeatureFlagBits2KHR name);
        VkFormatFeatureFlagBits2KHR deserialize_VkFormatFeatureFlagBits2KHR(json &name);
    

        json serialize_VkRenderingFlagBits(VkRenderingFlagBits name);
        VkRenderingFlagBits deserialize_VkRenderingFlagBits(json &name);
    

        json serialize_VkRenderingFlagBitsKHR(VkRenderingFlagBitsKHR name);
        VkRenderingFlagBitsKHR deserialize_VkRenderingFlagBitsKHR(json &name);
    

        json serialize_VkPipelineDepthStencilStateCreateFlagBits(VkPipelineDepthStencilStateCreateFlagBits name);
        VkPipelineDepthStencilStateCreateFlagBits deserialize_VkPipelineDepthStencilStateCreateFlagBits(json &name);
    

        json serialize_VkPipelineColorBlendStateCreateFlagBits(VkPipelineColorBlendStateCreateFlagBits name);
        VkPipelineColorBlendStateCreateFlagBits deserialize_VkPipelineColorBlendStateCreateFlagBits(json &name);
    

        json serialize_VkImageCompressionFlagBitsEXT(VkImageCompressionFlagBitsEXT name);
        VkImageCompressionFlagBitsEXT deserialize_VkImageCompressionFlagBitsEXT(json &name);
    

        json serialize_VkImageCompressionFixedRateFlagBitsEXT(VkImageCompressionFixedRateFlagBitsEXT name);
        VkImageCompressionFixedRateFlagBitsEXT deserialize_VkImageCompressionFixedRateFlagBitsEXT(json &name);
    

        json serialize_VkPipelineRobustnessBufferBehaviorEXT(VkPipelineRobustnessBufferBehaviorEXT name);
        VkPipelineRobustnessBufferBehaviorEXT deserialize_VkPipelineRobustnessBufferBehaviorEXT(json &name);
    

        json serialize_VkPipelineRobustnessImageBehaviorEXT(VkPipelineRobustnessImageBehaviorEXT name);
        VkPipelineRobustnessImageBehaviorEXT deserialize_VkPipelineRobustnessImageBehaviorEXT(json &name);
    

        json serialize_VkDeviceAddressBindingFlagBitsEXT(VkDeviceAddressBindingFlagBitsEXT name);
        VkDeviceAddressBindingFlagBitsEXT deserialize_VkDeviceAddressBindingFlagBitsEXT(json &name);
    

        json serialize_VkDeviceAddressBindingTypeEXT(VkDeviceAddressBindingTypeEXT name);
        VkDeviceAddressBindingTypeEXT deserialize_VkDeviceAddressBindingTypeEXT(json &name);
    

        json serialize_VkMicromapTypeEXT(VkMicromapTypeEXT name);
        VkMicromapTypeEXT deserialize_VkMicromapTypeEXT(json &name);
    

        json serialize_VkBuildMicromapModeEXT(VkBuildMicromapModeEXT name);
        VkBuildMicromapModeEXT deserialize_VkBuildMicromapModeEXT(json &name);
    

        json serialize_VkCopyMicromapModeEXT(VkCopyMicromapModeEXT name);
        VkCopyMicromapModeEXT deserialize_VkCopyMicromapModeEXT(json &name);
    

        json serialize_VkBuildMicromapFlagBitsEXT(VkBuildMicromapFlagBitsEXT name);
        VkBuildMicromapFlagBitsEXT deserialize_VkBuildMicromapFlagBitsEXT(json &name);
    

        json serialize_VkMicromapCreateFlagBitsEXT(VkMicromapCreateFlagBitsEXT name);
        VkMicromapCreateFlagBitsEXT deserialize_VkMicromapCreateFlagBitsEXT(json &name);
    

        json serialize_VkOpacityMicromapFormatEXT(VkOpacityMicromapFormatEXT name);
        VkOpacityMicromapFormatEXT deserialize_VkOpacityMicromapFormatEXT(json &name);
    

        json serialize_VkOpacityMicromapSpecialIndexEXT(VkOpacityMicromapSpecialIndexEXT name);
        VkOpacityMicromapSpecialIndexEXT deserialize_VkOpacityMicromapSpecialIndexEXT(json &name);
    

        json serialize_VkDeviceFaultVendorBinaryHeaderVersionEXT(VkDeviceFaultVendorBinaryHeaderVersionEXT name);
        VkDeviceFaultVendorBinaryHeaderVersionEXT deserialize_VkDeviceFaultVendorBinaryHeaderVersionEXT(json &name);
    

        json serialize_VkFrameBoundaryFlagBitsEXT(VkFrameBoundaryFlagBitsEXT name);
        VkFrameBoundaryFlagBitsEXT deserialize_VkFrameBoundaryFlagBitsEXT(json &name);
    

        json serialize_VkMemoryDecompressionMethodFlagBitsNV(VkMemoryDecompressionMethodFlagBitsNV name);
        VkMemoryDecompressionMethodFlagBitsNV deserialize_VkMemoryDecompressionMethodFlagBitsNV(json &name);
    

        json serialize_VkDepthBiasRepresentationEXT(VkDepthBiasRepresentationEXT name);
        VkDepthBiasRepresentationEXT deserialize_VkDepthBiasRepresentationEXT(json &name);
    

        json serialize_VkDirectDriverLoadingModeLUNARG(VkDirectDriverLoadingModeLUNARG name);
        VkDirectDriverLoadingModeLUNARG deserialize_VkDirectDriverLoadingModeLUNARG(json &name);
    

        json serialize_VkPipelineCreateFlagBits2KHR(VkPipelineCreateFlagBits2KHR name);
        VkPipelineCreateFlagBits2KHR deserialize_VkPipelineCreateFlagBits2KHR(json &name);
    

        json serialize_VkBufferUsageFlagBits2KHR(VkBufferUsageFlagBits2KHR name);
        VkBufferUsageFlagBits2KHR deserialize_VkBufferUsageFlagBits2KHR(json &name);
    

        json serialize_VkShaderCreateFlagBitsEXT(VkShaderCreateFlagBitsEXT name);
        VkShaderCreateFlagBitsEXT deserialize_VkShaderCreateFlagBitsEXT(json &name);
    

        json serialize_VkShaderCodeTypeEXT(VkShaderCodeTypeEXT name);
        VkShaderCodeTypeEXT deserialize_VkShaderCodeTypeEXT(json &name);
    

        json serialize_VkScopeKHR(VkScopeKHR name);
        VkScopeKHR deserialize_VkScopeKHR(json &name);
    

        json serialize_VkComponentTypeKHR(VkComponentTypeKHR name);
        VkComponentTypeKHR deserialize_VkComponentTypeKHR(json &name);
    

        json serialize_VkScopeNV(VkScopeNV name);
        VkScopeNV deserialize_VkScopeNV(json &name);
    

        json serialize_VkComponentTypeNV(VkComponentTypeNV name);
        VkComponentTypeNV deserialize_VkComponentTypeNV(json &name);
    

        json serialize_VkCubicFilterWeightsQCOM(VkCubicFilterWeightsQCOM name);
        VkCubicFilterWeightsQCOM deserialize_VkCubicFilterWeightsQCOM(json &name);
    

        json serialize_VkBlockMatchWindowCompareModeQCOM(VkBlockMatchWindowCompareModeQCOM name);
        VkBlockMatchWindowCompareModeQCOM deserialize_VkBlockMatchWindowCompareModeQCOM(json &name);
    

        json serialize_VkLayeredDriverUnderlyingApiMSFT(VkLayeredDriverUnderlyingApiMSFT name);
        VkLayeredDriverUnderlyingApiMSFT deserialize_VkLayeredDriverUnderlyingApiMSFT(json &name);
    

        json serialize_VkColorSpaceKHR(VkColorSpaceKHR name);
        VkColorSpaceKHR deserialize_VkColorSpaceKHR(json &name);
    

        json serialize_VkCompositeAlphaFlagBitsKHR(VkCompositeAlphaFlagBitsKHR name);
        VkCompositeAlphaFlagBitsKHR deserialize_VkCompositeAlphaFlagBitsKHR(json &name);
    

        json serialize_VkDisplayPlaneAlphaFlagBitsKHR(VkDisplayPlaneAlphaFlagBitsKHR name);
        VkDisplayPlaneAlphaFlagBitsKHR deserialize_VkDisplayPlaneAlphaFlagBitsKHR(json &name);
    

        json serialize_VkPresentModeKHR(VkPresentModeKHR name);
        VkPresentModeKHR deserialize_VkPresentModeKHR(json &name);
    

        json serialize_VkSurfaceTransformFlagBitsKHR(VkSurfaceTransformFlagBitsKHR name);
        VkSurfaceTransformFlagBitsKHR deserialize_VkSurfaceTransformFlagBitsKHR(json &name);
    

        json serialize_VkDebugReportFlagBitsEXT(VkDebugReportFlagBitsEXT name);
        VkDebugReportFlagBitsEXT deserialize_VkDebugReportFlagBitsEXT(json &name);
    

        json serialize_VkDebugReportObjectTypeEXT(VkDebugReportObjectTypeEXT name);
        VkDebugReportObjectTypeEXT deserialize_VkDebugReportObjectTypeEXT(json &name);
    

        json serialize_VkDeviceMemoryReportEventTypeEXT(VkDeviceMemoryReportEventTypeEXT name);
        VkDeviceMemoryReportEventTypeEXT deserialize_VkDeviceMemoryReportEventTypeEXT(json &name);
    

        json serialize_VkRasterizationOrderAMD(VkRasterizationOrderAMD name);
        VkRasterizationOrderAMD deserialize_VkRasterizationOrderAMD(json &name);
    

        json serialize_VkExternalMemoryHandleTypeFlagBitsNV(VkExternalMemoryHandleTypeFlagBitsNV name);
        VkExternalMemoryHandleTypeFlagBitsNV deserialize_VkExternalMemoryHandleTypeFlagBitsNV(json &name);
    

        json serialize_VkExternalMemoryFeatureFlagBitsNV(VkExternalMemoryFeatureFlagBitsNV name);
        VkExternalMemoryFeatureFlagBitsNV deserialize_VkExternalMemoryFeatureFlagBitsNV(json &name);
    

        json serialize_VkValidationCheckEXT(VkValidationCheckEXT name);
        VkValidationCheckEXT deserialize_VkValidationCheckEXT(json &name);
    

        json serialize_VkValidationFeatureEnableEXT(VkValidationFeatureEnableEXT name);
        VkValidationFeatureEnableEXT deserialize_VkValidationFeatureEnableEXT(json &name);
    

        json serialize_VkValidationFeatureDisableEXT(VkValidationFeatureDisableEXT name);
        VkValidationFeatureDisableEXT deserialize_VkValidationFeatureDisableEXT(json &name);
    

        json serialize_VkExternalMemoryHandleTypeFlagBits(VkExternalMemoryHandleTypeFlagBits name);
        VkExternalMemoryHandleTypeFlagBits deserialize_VkExternalMemoryHandleTypeFlagBits(json &name);
    

        json serialize_VkExternalMemoryHandleTypeFlagBitsKHR(VkExternalMemoryHandleTypeFlagBitsKHR name);
        VkExternalMemoryHandleTypeFlagBitsKHR deserialize_VkExternalMemoryHandleTypeFlagBitsKHR(json &name);
    

        json serialize_VkExternalMemoryFeatureFlagBits(VkExternalMemoryFeatureFlagBits name);
        VkExternalMemoryFeatureFlagBits deserialize_VkExternalMemoryFeatureFlagBits(json &name);
    

        json serialize_VkExternalMemoryFeatureFlagBitsKHR(VkExternalMemoryFeatureFlagBitsKHR name);
        VkExternalMemoryFeatureFlagBitsKHR deserialize_VkExternalMemoryFeatureFlagBitsKHR(json &name);
    

        json serialize_VkExternalSemaphoreHandleTypeFlagBits(VkExternalSemaphoreHandleTypeFlagBits name);
        VkExternalSemaphoreHandleTypeFlagBits deserialize_VkExternalSemaphoreHandleTypeFlagBits(json &name);
    

        json serialize_VkExternalSemaphoreHandleTypeFlagBitsKHR(VkExternalSemaphoreHandleTypeFlagBitsKHR name);
        VkExternalSemaphoreHandleTypeFlagBitsKHR deserialize_VkExternalSemaphoreHandleTypeFlagBitsKHR(json &name);
    

        json serialize_VkExternalSemaphoreFeatureFlagBits(VkExternalSemaphoreFeatureFlagBits name);
        VkExternalSemaphoreFeatureFlagBits deserialize_VkExternalSemaphoreFeatureFlagBits(json &name);
    

        json serialize_VkExternalSemaphoreFeatureFlagBitsKHR(VkExternalSemaphoreFeatureFlagBitsKHR name);
        VkExternalSemaphoreFeatureFlagBitsKHR deserialize_VkExternalSemaphoreFeatureFlagBitsKHR(json &name);
    

        json serialize_VkSemaphoreImportFlagBits(VkSemaphoreImportFlagBits name);
        VkSemaphoreImportFlagBits deserialize_VkSemaphoreImportFlagBits(json &name);
    

        json serialize_VkSemaphoreImportFlagBitsKHR(VkSemaphoreImportFlagBitsKHR name);
        VkSemaphoreImportFlagBitsKHR deserialize_VkSemaphoreImportFlagBitsKHR(json &name);
    

        json serialize_VkExternalFenceHandleTypeFlagBits(VkExternalFenceHandleTypeFlagBits name);
        VkExternalFenceHandleTypeFlagBits deserialize_VkExternalFenceHandleTypeFlagBits(json &name);
    

        json serialize_VkExternalFenceHandleTypeFlagBitsKHR(VkExternalFenceHandleTypeFlagBitsKHR name);
        VkExternalFenceHandleTypeFlagBitsKHR deserialize_VkExternalFenceHandleTypeFlagBitsKHR(json &name);
    

        json serialize_VkExternalFenceFeatureFlagBits(VkExternalFenceFeatureFlagBits name);
        VkExternalFenceFeatureFlagBits deserialize_VkExternalFenceFeatureFlagBits(json &name);
    

        json serialize_VkExternalFenceFeatureFlagBitsKHR(VkExternalFenceFeatureFlagBitsKHR name);
        VkExternalFenceFeatureFlagBitsKHR deserialize_VkExternalFenceFeatureFlagBitsKHR(json &name);
    

        json serialize_VkFenceImportFlagBits(VkFenceImportFlagBits name);
        VkFenceImportFlagBits deserialize_VkFenceImportFlagBits(json &name);
    

        json serialize_VkFenceImportFlagBitsKHR(VkFenceImportFlagBitsKHR name);
        VkFenceImportFlagBitsKHR deserialize_VkFenceImportFlagBitsKHR(json &name);
    

        json serialize_VkSurfaceCounterFlagBitsEXT(VkSurfaceCounterFlagBitsEXT name);
        VkSurfaceCounterFlagBitsEXT deserialize_VkSurfaceCounterFlagBitsEXT(json &name);
    

        json serialize_VkDisplayPowerStateEXT(VkDisplayPowerStateEXT name);
        VkDisplayPowerStateEXT deserialize_VkDisplayPowerStateEXT(json &name);
    

        json serialize_VkDeviceEventTypeEXT(VkDeviceEventTypeEXT name);
        VkDeviceEventTypeEXT deserialize_VkDeviceEventTypeEXT(json &name);
    

        json serialize_VkDisplayEventTypeEXT(VkDisplayEventTypeEXT name);
        VkDisplayEventTypeEXT deserialize_VkDisplayEventTypeEXT(json &name);
    

        json serialize_VkPeerMemoryFeatureFlagBits(VkPeerMemoryFeatureFlagBits name);
        VkPeerMemoryFeatureFlagBits deserialize_VkPeerMemoryFeatureFlagBits(json &name);
    

        json serialize_VkPeerMemoryFeatureFlagBitsKHR(VkPeerMemoryFeatureFlagBitsKHR name);
        VkPeerMemoryFeatureFlagBitsKHR deserialize_VkPeerMemoryFeatureFlagBitsKHR(json &name);
    

        json serialize_VkMemoryAllocateFlagBits(VkMemoryAllocateFlagBits name);
        VkMemoryAllocateFlagBits deserialize_VkMemoryAllocateFlagBits(json &name);
    

        json serialize_VkMemoryAllocateFlagBitsKHR(VkMemoryAllocateFlagBitsKHR name);
        VkMemoryAllocateFlagBitsKHR deserialize_VkMemoryAllocateFlagBitsKHR(json &name);
    

        json serialize_VkDeviceGroupPresentModeFlagBitsKHR(VkDeviceGroupPresentModeFlagBitsKHR name);
        VkDeviceGroupPresentModeFlagBitsKHR deserialize_VkDeviceGroupPresentModeFlagBitsKHR(json &name);
    

        json serialize_VkSwapchainCreateFlagBitsKHR(VkSwapchainCreateFlagBitsKHR name);
        VkSwapchainCreateFlagBitsKHR deserialize_VkSwapchainCreateFlagBitsKHR(json &name);
    

        json serialize_VkSubgroupFeatureFlagBits(VkSubgroupFeatureFlagBits name);
        VkSubgroupFeatureFlagBits deserialize_VkSubgroupFeatureFlagBits(json &name);
    

        json serialize_VkTessellationDomainOrigin(VkTessellationDomainOrigin name);
        VkTessellationDomainOrigin deserialize_VkTessellationDomainOrigin(json &name);
    

        json serialize_VkTessellationDomainOriginKHR(VkTessellationDomainOriginKHR name);
        VkTessellationDomainOriginKHR deserialize_VkTessellationDomainOriginKHR(json &name);
    

        json serialize_VkSamplerYcbcrModelConversion(VkSamplerYcbcrModelConversion name);
        VkSamplerYcbcrModelConversion deserialize_VkSamplerYcbcrModelConversion(json &name);
    

        json serialize_VkSamplerYcbcrModelConversionKHR(VkSamplerYcbcrModelConversionKHR name);
        VkSamplerYcbcrModelConversionKHR deserialize_VkSamplerYcbcrModelConversionKHR(json &name);
    

        json serialize_VkSamplerYcbcrRange(VkSamplerYcbcrRange name);
        VkSamplerYcbcrRange deserialize_VkSamplerYcbcrRange(json &name);
    

        json serialize_VkSamplerYcbcrRangeKHR(VkSamplerYcbcrRangeKHR name);
        VkSamplerYcbcrRangeKHR deserialize_VkSamplerYcbcrRangeKHR(json &name);
    

        json serialize_VkChromaLocation(VkChromaLocation name);
        VkChromaLocation deserialize_VkChromaLocation(json &name);
    

        json serialize_VkChromaLocationKHR(VkChromaLocationKHR name);
        VkChromaLocationKHR deserialize_VkChromaLocationKHR(json &name);
    

        json serialize_VkSamplerReductionMode(VkSamplerReductionMode name);
        VkSamplerReductionMode deserialize_VkSamplerReductionMode(json &name);
    

        json serialize_VkSamplerReductionModeEXT(VkSamplerReductionModeEXT name);
        VkSamplerReductionModeEXT deserialize_VkSamplerReductionModeEXT(json &name);
    

        json serialize_VkBlendOverlapEXT(VkBlendOverlapEXT name);
        VkBlendOverlapEXT deserialize_VkBlendOverlapEXT(json &name);
    

        json serialize_VkDebugUtilsMessageSeverityFlagBitsEXT(VkDebugUtilsMessageSeverityFlagBitsEXT name);
        VkDebugUtilsMessageSeverityFlagBitsEXT deserialize_VkDebugUtilsMessageSeverityFlagBitsEXT(json &name);
    

        json serialize_VkDebugUtilsMessageTypeFlagBitsEXT(VkDebugUtilsMessageTypeFlagBitsEXT name);
        VkDebugUtilsMessageTypeFlagBitsEXT deserialize_VkDebugUtilsMessageTypeFlagBitsEXT(json &name);
    

        json serialize_VkShaderFloatControlsIndependence(VkShaderFloatControlsIndependence name);
        VkShaderFloatControlsIndependence deserialize_VkShaderFloatControlsIndependence(json &name);
    

        json serialize_VkShaderFloatControlsIndependenceKHR(VkShaderFloatControlsIndependenceKHR name);
        VkShaderFloatControlsIndependenceKHR deserialize_VkShaderFloatControlsIndependenceKHR(json &name);
    

        json serialize_VkFragmentShadingRateCombinerOpKHR(VkFragmentShadingRateCombinerOpKHR name);
        VkFragmentShadingRateCombinerOpKHR deserialize_VkFragmentShadingRateCombinerOpKHR(json &name);
    

        json serialize_VkSubmitFlagBits(VkSubmitFlagBits name);
        VkSubmitFlagBits deserialize_VkSubmitFlagBits(json &name);
    

        json serialize_VkSubmitFlagBitsKHR(VkSubmitFlagBitsKHR name);
        VkSubmitFlagBitsKHR deserialize_VkSubmitFlagBitsKHR(json &name);
    

        json serialize_VkGraphicsPipelineLibraryFlagBitsEXT(VkGraphicsPipelineLibraryFlagBitsEXT name);
        VkGraphicsPipelineLibraryFlagBitsEXT deserialize_VkGraphicsPipelineLibraryFlagBitsEXT(json &name);
    

        json serialize_VkOpticalFlowGridSizeFlagBitsNV(VkOpticalFlowGridSizeFlagBitsNV name);
        VkOpticalFlowGridSizeFlagBitsNV deserialize_VkOpticalFlowGridSizeFlagBitsNV(json &name);
    

        json serialize_VkOpticalFlowUsageFlagBitsNV(VkOpticalFlowUsageFlagBitsNV name);
        VkOpticalFlowUsageFlagBitsNV deserialize_VkOpticalFlowUsageFlagBitsNV(json &name);
    

        json serialize_VkOpticalFlowPerformanceLevelNV(VkOpticalFlowPerformanceLevelNV name);
        VkOpticalFlowPerformanceLevelNV deserialize_VkOpticalFlowPerformanceLevelNV(json &name);
    

        json serialize_VkOpticalFlowSessionBindingPointNV(VkOpticalFlowSessionBindingPointNV name);
        VkOpticalFlowSessionBindingPointNV deserialize_VkOpticalFlowSessionBindingPointNV(json &name);
    

        json serialize_VkOpticalFlowSessionCreateFlagBitsNV(VkOpticalFlowSessionCreateFlagBitsNV name);
        VkOpticalFlowSessionCreateFlagBitsNV deserialize_VkOpticalFlowSessionCreateFlagBitsNV(json &name);
    

        json serialize_VkOpticalFlowExecuteFlagBitsNV(VkOpticalFlowExecuteFlagBitsNV name);
        VkOpticalFlowExecuteFlagBitsNV deserialize_VkOpticalFlowExecuteFlagBitsNV(json &name);
    

        json serialize_VkDeviceFaultAddressTypeEXT(VkDeviceFaultAddressTypeEXT name);
        VkDeviceFaultAddressTypeEXT deserialize_VkDeviceFaultAddressTypeEXT(json &name);
    

        json serialize_VkPresentScalingFlagBitsEXT(VkPresentScalingFlagBitsEXT name);
        VkPresentScalingFlagBitsEXT deserialize_VkPresentScalingFlagBitsEXT(json &name);
    

        json serialize_VkPresentGravityFlagBitsEXT(VkPresentGravityFlagBitsEXT name);
        VkPresentGravityFlagBitsEXT deserialize_VkPresentGravityFlagBitsEXT(json &name);
    

        json serialize_VkVendorId(VkVendorId name);
        VkVendorId deserialize_VkVendorId(json &name);
    

        json serialize_VkDriverId(VkDriverId name);
        VkDriverId deserialize_VkDriverId(json &name);
    

        json serialize_VkDriverIdKHR(VkDriverIdKHR name);
        VkDriverIdKHR deserialize_VkDriverIdKHR(json &name);
    

        json serialize_VkShadingRatePaletteEntryNV(VkShadingRatePaletteEntryNV name);
        VkShadingRatePaletteEntryNV deserialize_VkShadingRatePaletteEntryNV(json &name);
    

        json serialize_VkCoarseSampleOrderTypeNV(VkCoarseSampleOrderTypeNV name);
        VkCoarseSampleOrderTypeNV deserialize_VkCoarseSampleOrderTypeNV(json &name);
    

        json serialize_VkPipelineExecutableStatisticFormatKHR(VkPipelineExecutableStatisticFormatKHR name);
        VkPipelineExecutableStatisticFormatKHR deserialize_VkPipelineExecutableStatisticFormatKHR(json &name);
    

        json serialize_VkVideoCodecOperationFlagBitsKHR(VkVideoCodecOperationFlagBitsKHR name);
        VkVideoCodecOperationFlagBitsKHR deserialize_VkVideoCodecOperationFlagBitsKHR(json &name);
    

        json serialize_VkVideoChromaSubsamplingFlagBitsKHR(VkVideoChromaSubsamplingFlagBitsKHR name);
        VkVideoChromaSubsamplingFlagBitsKHR deserialize_VkVideoChromaSubsamplingFlagBitsKHR(json &name);
    

        json serialize_VkVideoComponentBitDepthFlagBitsKHR(VkVideoComponentBitDepthFlagBitsKHR name);
        VkVideoComponentBitDepthFlagBitsKHR deserialize_VkVideoComponentBitDepthFlagBitsKHR(json &name);
    

        json serialize_VkVideoCapabilityFlagBitsKHR(VkVideoCapabilityFlagBitsKHR name);
        VkVideoCapabilityFlagBitsKHR deserialize_VkVideoCapabilityFlagBitsKHR(json &name);
    

        json serialize_VkVideoSessionCreateFlagBitsKHR(VkVideoSessionCreateFlagBitsKHR name);
        VkVideoSessionCreateFlagBitsKHR deserialize_VkVideoSessionCreateFlagBitsKHR(json &name);
    

        json serialize_VkVideoCodingControlFlagBitsKHR(VkVideoCodingControlFlagBitsKHR name);
        VkVideoCodingControlFlagBitsKHR deserialize_VkVideoCodingControlFlagBitsKHR(json &name);
    

        json serialize_VkQueryResultStatusKHR(VkQueryResultStatusKHR name);
        VkQueryResultStatusKHR deserialize_VkQueryResultStatusKHR(json &name);
    

        json serialize_VkVideoDecodeUsageFlagBitsKHR(VkVideoDecodeUsageFlagBitsKHR name);
        VkVideoDecodeUsageFlagBitsKHR deserialize_VkVideoDecodeUsageFlagBitsKHR(json &name);
    

        json serialize_VkVideoDecodeCapabilityFlagBitsKHR(VkVideoDecodeCapabilityFlagBitsKHR name);
        VkVideoDecodeCapabilityFlagBitsKHR deserialize_VkVideoDecodeCapabilityFlagBitsKHR(json &name);
    

        json serialize_VkVideoDecodeH264PictureLayoutFlagBitsKHR(VkVideoDecodeH264PictureLayoutFlagBitsKHR name);
        VkVideoDecodeH264PictureLayoutFlagBitsKHR deserialize_VkVideoDecodeH264PictureLayoutFlagBitsKHR(json &name);
    

        json serialize_VkAccelerationStructureMotionInstanceTypeNV(VkAccelerationStructureMotionInstanceTypeNV name);
        VkAccelerationStructureMotionInstanceTypeNV deserialize_VkAccelerationStructureMotionInstanceTypeNV(json &name);
    

        json serialize_Display_p(const Display* name);
        Display* deserialize_Display_p(json &name);
    

        json serialize_VisualID_p(const VisualID* name);
        VisualID* deserialize_VisualID_p(json &name);
    

            json serialize_VisualID(const VisualID name);
            VisualID deserialize_VisualID(json &name);
        

        json serialize_Window_p(const Window* name);
        Window* deserialize_Window_p(json &name);
    

            json serialize_Window(const Window name);
            Window deserialize_Window(json &name);
        

        json serialize_xcb_connection_t_p(const xcb_connection_t* name);
        xcb_connection_t* deserialize_xcb_connection_t_p(json &name);
    

        json serialize_xcb_visualid_t_p(const xcb_visualid_t* name);
        xcb_visualid_t* deserialize_xcb_visualid_t_p(json &name);
    

            json serialize_xcb_visualid_t(const xcb_visualid_t name);
            xcb_visualid_t deserialize_xcb_visualid_t(json &name);
        

        json serialize_xcb_window_t_p(const xcb_window_t* name);
        xcb_window_t* deserialize_xcb_window_t_p(json &name);
    

            json serialize_xcb_window_t(const xcb_window_t name);
            xcb_window_t deserialize_xcb_window_t(json &name);
        

        json serialize_StdVideoH264ProfileIdc_p(const StdVideoH264ProfileIdc* name);
        StdVideoH264ProfileIdc* deserialize_StdVideoH264ProfileIdc_p(json &name);
    

            json serialize_StdVideoH264ProfileIdc(const StdVideoH264ProfileIdc name);
            StdVideoH264ProfileIdc deserialize_StdVideoH264ProfileIdc(json &name);
        

        json serialize_StdVideoH264LevelIdc_p(const StdVideoH264LevelIdc* name);
        StdVideoH264LevelIdc* deserialize_StdVideoH264LevelIdc_p(json &name);
    

            json serialize_StdVideoH264LevelIdc(const StdVideoH264LevelIdc name);
            StdVideoH264LevelIdc deserialize_StdVideoH264LevelIdc(json &name);
        

        json serialize_StdVideoH264ChromaFormatIdc_p(const StdVideoH264ChromaFormatIdc* name);
        StdVideoH264ChromaFormatIdc* deserialize_StdVideoH264ChromaFormatIdc_p(json &name);
    

        json serialize_StdVideoH264PocType_p(const StdVideoH264PocType* name);
        StdVideoH264PocType* deserialize_StdVideoH264PocType_p(json &name);
    

        json serialize_StdVideoH264SpsFlags_p(const StdVideoH264SpsFlags* name);
        StdVideoH264SpsFlags* deserialize_StdVideoH264SpsFlags_p(json &name);
    

        json serialize_StdVideoH264ScalingLists_p(const StdVideoH264ScalingLists* name);
        StdVideoH264ScalingLists* deserialize_StdVideoH264ScalingLists_p(json &name);
    

        json serialize_StdVideoH264SequenceParameterSetVui_p(const StdVideoH264SequenceParameterSetVui* name);
        StdVideoH264SequenceParameterSetVui* deserialize_StdVideoH264SequenceParameterSetVui_p(json &name);
    

        json serialize_StdVideoH264AspectRatioIdc_p(const StdVideoH264AspectRatioIdc* name);
        StdVideoH264AspectRatioIdc* deserialize_StdVideoH264AspectRatioIdc_p(json &name);
    

        json serialize_StdVideoH264HrdParameters_p(const StdVideoH264HrdParameters* name);
        StdVideoH264HrdParameters* deserialize_StdVideoH264HrdParameters_p(json &name);
    

        json serialize_StdVideoH264SpsVuiFlags_p(const StdVideoH264SpsVuiFlags* name);
        StdVideoH264SpsVuiFlags* deserialize_StdVideoH264SpsVuiFlags_p(json &name);
    

        json serialize_StdVideoH264WeightedBipredIdc_p(const StdVideoH264WeightedBipredIdc* name);
        StdVideoH264WeightedBipredIdc* deserialize_StdVideoH264WeightedBipredIdc_p(json &name);
    

        json serialize_StdVideoH264PpsFlags_p(const StdVideoH264PpsFlags* name);
        StdVideoH264PpsFlags* deserialize_StdVideoH264PpsFlags_p(json &name);
    

        json serialize_StdVideoH264SliceType_p(const StdVideoH264SliceType* name);
        StdVideoH264SliceType* deserialize_StdVideoH264SliceType_p(json &name);
    

        json serialize_StdVideoH264CabacInitIdc_p(const StdVideoH264CabacInitIdc* name);
        StdVideoH264CabacInitIdc* deserialize_StdVideoH264CabacInitIdc_p(json &name);
    

        json serialize_StdVideoH264DisableDeblockingFilterIdc_p(const StdVideoH264DisableDeblockingFilterIdc* name);
        StdVideoH264DisableDeblockingFilterIdc* deserialize_StdVideoH264DisableDeblockingFilterIdc_p(json &name);
    

        json serialize_StdVideoH264PictureType_p(const StdVideoH264PictureType* name);
        StdVideoH264PictureType* deserialize_StdVideoH264PictureType_p(json &name);
    

        json serialize_StdVideoH264ModificationOfPicNumsIdc_p(const StdVideoH264ModificationOfPicNumsIdc* name);
        StdVideoH264ModificationOfPicNumsIdc* deserialize_StdVideoH264ModificationOfPicNumsIdc_p(json &name);
    

        json serialize_StdVideoH264MemMgmtControlOp_p(const StdVideoH264MemMgmtControlOp* name);
        StdVideoH264MemMgmtControlOp* deserialize_StdVideoH264MemMgmtControlOp_p(json &name);
    

        json serialize_StdVideoDecodeH264PictureInfo_p(const StdVideoDecodeH264PictureInfo* name);
        StdVideoDecodeH264PictureInfo* deserialize_StdVideoDecodeH264PictureInfo_p(json &name);
    

        json serialize_StdVideoDecodeH264ReferenceInfo_p(const StdVideoDecodeH264ReferenceInfo* name);
        StdVideoDecodeH264ReferenceInfo* deserialize_StdVideoDecodeH264ReferenceInfo_p(json &name);
    

        json serialize_StdVideoDecodeH264PictureInfoFlags_p(const StdVideoDecodeH264PictureInfoFlags* name);
        StdVideoDecodeH264PictureInfoFlags* deserialize_StdVideoDecodeH264PictureInfoFlags_p(json &name);
    

        json serialize_StdVideoDecodeH264ReferenceInfoFlags_p(const StdVideoDecodeH264ReferenceInfoFlags* name);
        StdVideoDecodeH264ReferenceInfoFlags* deserialize_StdVideoDecodeH264ReferenceInfoFlags_p(json &name);
    

        json serialize_StdVideoH264SequenceParameterSet_p(const StdVideoH264SequenceParameterSet* name);
        StdVideoH264SequenceParameterSet* deserialize_StdVideoH264SequenceParameterSet_p(json &name);
    

        json serialize_StdVideoH264PictureParameterSet_p(const StdVideoH264PictureParameterSet* name);
        StdVideoH264PictureParameterSet* deserialize_StdVideoH264PictureParameterSet_p(json &name);
    

        json serialize_StdVideoH265ProfileIdc_p(const StdVideoH265ProfileIdc* name);
        StdVideoH265ProfileIdc* deserialize_StdVideoH265ProfileIdc_p(json &name);
    

            json serialize_StdVideoH265ProfileIdc(const StdVideoH265ProfileIdc name);
            StdVideoH265ProfileIdc deserialize_StdVideoH265ProfileIdc(json &name);
        

        json serialize_StdVideoH265VideoParameterSet_p(const StdVideoH265VideoParameterSet* name);
        StdVideoH265VideoParameterSet* deserialize_StdVideoH265VideoParameterSet_p(json &name);
    

        json serialize_StdVideoH265SequenceParameterSet_p(const StdVideoH265SequenceParameterSet* name);
        StdVideoH265SequenceParameterSet* deserialize_StdVideoH265SequenceParameterSet_p(json &name);
    

        json serialize_StdVideoH265PictureParameterSet_p(const StdVideoH265PictureParameterSet* name);
        StdVideoH265PictureParameterSet* deserialize_StdVideoH265PictureParameterSet_p(json &name);
    

        json serialize_StdVideoH265DecPicBufMgr_p(const StdVideoH265DecPicBufMgr* name);
        StdVideoH265DecPicBufMgr* deserialize_StdVideoH265DecPicBufMgr_p(json &name);
    

        json serialize_StdVideoH265HrdParameters_p(const StdVideoH265HrdParameters* name);
        StdVideoH265HrdParameters* deserialize_StdVideoH265HrdParameters_p(json &name);
    

        json serialize_StdVideoH265VpsFlags_p(const StdVideoH265VpsFlags* name);
        StdVideoH265VpsFlags* deserialize_StdVideoH265VpsFlags_p(json &name);
    

        json serialize_StdVideoH265LevelIdc_p(const StdVideoH265LevelIdc* name);
        StdVideoH265LevelIdc* deserialize_StdVideoH265LevelIdc_p(json &name);
    

            json serialize_StdVideoH265LevelIdc(const StdVideoH265LevelIdc name);
            StdVideoH265LevelIdc deserialize_StdVideoH265LevelIdc(json &name);
        

        json serialize_StdVideoH265SpsFlags_p(const StdVideoH265SpsFlags* name);
        StdVideoH265SpsFlags* deserialize_StdVideoH265SpsFlags_p(json &name);
    

        json serialize_StdVideoH265ScalingLists_p(const StdVideoH265ScalingLists* name);
        StdVideoH265ScalingLists* deserialize_StdVideoH265ScalingLists_p(json &name);
    

        json serialize_StdVideoH265SequenceParameterSetVui_p(const StdVideoH265SequenceParameterSetVui* name);
        StdVideoH265SequenceParameterSetVui* deserialize_StdVideoH265SequenceParameterSetVui_p(json &name);
    

        json serialize_StdVideoH265PredictorPaletteEntries_p(const StdVideoH265PredictorPaletteEntries* name);
        StdVideoH265PredictorPaletteEntries* deserialize_StdVideoH265PredictorPaletteEntries_p(json &name);
    

        json serialize_StdVideoH265PpsFlags_p(const StdVideoH265PpsFlags* name);
        StdVideoH265PpsFlags* deserialize_StdVideoH265PpsFlags_p(json &name);
    

        json serialize_StdVideoH265SubLayerHrdParameters_p(const StdVideoH265SubLayerHrdParameters* name);
        StdVideoH265SubLayerHrdParameters* deserialize_StdVideoH265SubLayerHrdParameters_p(json &name);
    

        json serialize_StdVideoH265HrdFlags_p(const StdVideoH265HrdFlags* name);
        StdVideoH265HrdFlags* deserialize_StdVideoH265HrdFlags_p(json &name);
    

        json serialize_StdVideoH265SpsVuiFlags_p(const StdVideoH265SpsVuiFlags* name);
        StdVideoH265SpsVuiFlags* deserialize_StdVideoH265SpsVuiFlags_p(json &name);
    

        json serialize_StdVideoH265SliceType_p(const StdVideoH265SliceType* name);
        StdVideoH265SliceType* deserialize_StdVideoH265SliceType_p(json &name);
    

        json serialize_StdVideoH265PictureType_p(const StdVideoH265PictureType* name);
        StdVideoH265PictureType* deserialize_StdVideoH265PictureType_p(json &name);
    

        json serialize_StdVideoDecodeH265PictureInfo_p(const StdVideoDecodeH265PictureInfo* name);
        StdVideoDecodeH265PictureInfo* deserialize_StdVideoDecodeH265PictureInfo_p(json &name);
    

        json serialize_StdVideoDecodeH265ReferenceInfo_p(const StdVideoDecodeH265ReferenceInfo* name);
        StdVideoDecodeH265ReferenceInfo* deserialize_StdVideoDecodeH265ReferenceInfo_p(json &name);
    

        json serialize_StdVideoDecodeH265PictureInfoFlags_p(const StdVideoDecodeH265PictureInfoFlags* name);
        StdVideoDecodeH265PictureInfoFlags* deserialize_StdVideoDecodeH265PictureInfoFlags_p(json &name);
    

        json serialize_StdVideoDecodeH265ReferenceInfoFlags_p(const StdVideoDecodeH265ReferenceInfoFlags* name);
        StdVideoDecodeH265ReferenceInfoFlags* deserialize_StdVideoDecodeH265ReferenceInfoFlags_p(json &name);
    
json serialize_PFN_vkInternalAllocationNotification(PFN_vkInternalAllocationNotification name);
void handle_PFN_vkInternalAllocationNotification_request(json &data);
void handle_PFN_vkInternalAllocationNotification_response(json& data, 
    void*                                       pUserData,
    size_t                                      size,
    VkInternalAllocationType                    allocationType,
    VkSystemAllocationScope                     allocationScope);
PFN_vkInternalAllocationNotification deserialize_PFN_vkInternalAllocationNotification(json &name);
json serialize_PFN_vkInternalFreeNotification(PFN_vkInternalFreeNotification name);
void handle_PFN_vkInternalFreeNotification_request(json &data);
void handle_PFN_vkInternalFreeNotification_response(json& data, 
    void*                                       pUserData,
    size_t                                      size,
    VkInternalAllocationType                    allocationType,
    VkSystemAllocationScope                     allocationScope);
PFN_vkInternalFreeNotification deserialize_PFN_vkInternalFreeNotification(json &name);
json serialize_PFN_vkReallocationFunction(PFN_vkReallocationFunction name);
void handle_PFN_vkReallocationFunction_request(json &data);
void* handle_PFN_vkReallocationFunction_response(json& data, 
    void*                                       pUserData,
    void*                                       pOriginal,
    size_t                                      size,
    size_t                                      alignment,
    VkSystemAllocationScope                     allocationScope);
PFN_vkReallocationFunction deserialize_PFN_vkReallocationFunction(json &name);
json serialize_PFN_vkAllocationFunction(PFN_vkAllocationFunction name);
void handle_PFN_vkAllocationFunction_request(json &data);
void* handle_PFN_vkAllocationFunction_response(json& data, 
    void*                                       pUserData,
    size_t                                      size,
    size_t                                      alignment,
    VkSystemAllocationScope                     allocationScope);
PFN_vkAllocationFunction deserialize_PFN_vkAllocationFunction(json &name);
json serialize_PFN_vkFreeFunction(PFN_vkFreeFunction name);
void handle_PFN_vkFreeFunction_request(json &data);
void handle_PFN_vkFreeFunction_response(json& data, 
    void*                                       pUserData,
    void*                                       pMemory);
PFN_vkFreeFunction deserialize_PFN_vkFreeFunction(json &name);
json serialize_PFN_vkDebugReportCallbackEXT(PFN_vkDebugReportCallbackEXT name);
void handle_PFN_vkDebugReportCallbackEXT_request(json &data);
VkBool32 handle_PFN_vkDebugReportCallbackEXT_response(json& data, 
    VkDebugReportFlagsEXT                       flags,
    VkDebugReportObjectTypeEXT                  objectType,
    uint64_t                                    object,
    size_t                                      location,
    int32_t                                     messageCode,
    const char*                                 pLayerPrefix,
    const char*                                 pMessage,
    void*                                       pUserData);
PFN_vkDebugReportCallbackEXT deserialize_PFN_vkDebugReportCallbackEXT(json &name);
json serialize_PFN_vkDebugUtilsMessengerCallbackEXT(PFN_vkDebugUtilsMessengerCallbackEXT name);
void handle_PFN_vkDebugUtilsMessengerCallbackEXT_request(json &data);
VkBool32 handle_PFN_vkDebugUtilsMessengerCallbackEXT_response(json& data, 
    VkDebugUtilsMessageSeverityFlagBitsEXT           messageSeverity,
    VkDebugUtilsMessageTypeFlagsEXT                  messageTypes,
    const VkDebugUtilsMessengerCallbackDataEXT*      pCallbackData,
    void*                                            pUserData);
PFN_vkDebugUtilsMessengerCallbackEXT deserialize_PFN_vkDebugUtilsMessengerCallbackEXT(json &name);
json serialize_PFN_vkDeviceMemoryReportCallbackEXT(PFN_vkDeviceMemoryReportCallbackEXT name);
void handle_PFN_vkDeviceMemoryReportCallbackEXT_request(json &data);
void handle_PFN_vkDeviceMemoryReportCallbackEXT_response(json& data, 
    const VkDeviceMemoryReportCallbackDataEXT*  pCallbackData,
    void*                                       pUserData);
PFN_vkDeviceMemoryReportCallbackEXT deserialize_PFN_vkDeviceMemoryReportCallbackEXT(json &name);
json serialize_PFN_vkGetInstanceProcAddrLUNARG(PFN_vkGetInstanceProcAddrLUNARG name);
PFN_vkGetInstanceProcAddrLUNARG deserialize_PFN_vkGetInstanceProcAddrLUNARG(json &name);
json serialize_VkInstance(VkInstance data);
VkInstance deserialize_VkInstance(json& data);
json serialize_VkPhysicalDevice(VkPhysicalDevice data);
VkPhysicalDevice deserialize_VkPhysicalDevice(json& data);
json serialize_VkDevice(VkDevice data);
VkDevice deserialize_VkDevice(json& data);
json serialize_VkQueue(VkQueue data);
VkQueue deserialize_VkQueue(json& data);
json serialize_VkCommandBuffer(VkCommandBuffer data);
VkCommandBuffer deserialize_VkCommandBuffer(json& data);
json serialize_VkDeviceMemory(VkDeviceMemory data);
VkDeviceMemory deserialize_VkDeviceMemory(json& data);
json serialize_VkCommandPool(VkCommandPool data);
VkCommandPool deserialize_VkCommandPool(json& data);
json serialize_VkBuffer(VkBuffer data);
VkBuffer deserialize_VkBuffer(json& data);
json serialize_VkBufferView(VkBufferView data);
VkBufferView deserialize_VkBufferView(json& data);
json serialize_VkImage(VkImage data);
VkImage deserialize_VkImage(json& data);
json serialize_VkImageView(VkImageView data);
VkImageView deserialize_VkImageView(json& data);
json serialize_VkShaderModule(VkShaderModule data);
VkShaderModule deserialize_VkShaderModule(json& data);
json serialize_VkPipeline(VkPipeline data);
VkPipeline deserialize_VkPipeline(json& data);
json serialize_VkPipelineLayout(VkPipelineLayout data);
VkPipelineLayout deserialize_VkPipelineLayout(json& data);
json serialize_VkSampler(VkSampler data);
VkSampler deserialize_VkSampler(json& data);
json serialize_VkDescriptorSet(VkDescriptorSet data);
VkDescriptorSet deserialize_VkDescriptorSet(json& data);
json serialize_VkDescriptorSetLayout(VkDescriptorSetLayout data);
VkDescriptorSetLayout deserialize_VkDescriptorSetLayout(json& data);
json serialize_VkDescriptorPool(VkDescriptorPool data);
VkDescriptorPool deserialize_VkDescriptorPool(json& data);
json serialize_VkFence(VkFence data);
VkFence deserialize_VkFence(json& data);
json serialize_VkSemaphore(VkSemaphore data);
VkSemaphore deserialize_VkSemaphore(json& data);
json serialize_VkEvent(VkEvent data);
VkEvent deserialize_VkEvent(json& data);
json serialize_VkQueryPool(VkQueryPool data);
VkQueryPool deserialize_VkQueryPool(json& data);
json serialize_VkFramebuffer(VkFramebuffer data);
VkFramebuffer deserialize_VkFramebuffer(json& data);
json serialize_VkRenderPass(VkRenderPass data);
VkRenderPass deserialize_VkRenderPass(json& data);
json serialize_VkPipelineCache(VkPipelineCache data);
VkPipelineCache deserialize_VkPipelineCache(json& data);
json serialize_VkIndirectCommandsLayoutNV(VkIndirectCommandsLayoutNV data);
VkIndirectCommandsLayoutNV deserialize_VkIndirectCommandsLayoutNV(json& data);
json serialize_VkDescriptorUpdateTemplate(VkDescriptorUpdateTemplate data);
VkDescriptorUpdateTemplate deserialize_VkDescriptorUpdateTemplate(json& data);
json serialize_VkDescriptorUpdateTemplateKHR(VkDescriptorUpdateTemplateKHR data);
VkDescriptorUpdateTemplateKHR deserialize_VkDescriptorUpdateTemplateKHR(json& data);
json serialize_VkSamplerYcbcrConversion(VkSamplerYcbcrConversion data);
VkSamplerYcbcrConversion deserialize_VkSamplerYcbcrConversion(json& data);
json serialize_VkSamplerYcbcrConversionKHR(VkSamplerYcbcrConversionKHR data);
VkSamplerYcbcrConversionKHR deserialize_VkSamplerYcbcrConversionKHR(json& data);
json serialize_VkValidationCacheEXT(VkValidationCacheEXT data);
VkValidationCacheEXT deserialize_VkValidationCacheEXT(json& data);
json serialize_VkAccelerationStructureKHR(VkAccelerationStructureKHR data);
VkAccelerationStructureKHR deserialize_VkAccelerationStructureKHR(json& data);
json serialize_VkAccelerationStructureNV(VkAccelerationStructureNV data);
VkAccelerationStructureNV deserialize_VkAccelerationStructureNV(json& data);
json serialize_VkPerformanceConfigurationINTEL(VkPerformanceConfigurationINTEL data);
VkPerformanceConfigurationINTEL deserialize_VkPerformanceConfigurationINTEL(json& data);
json serialize_VkDeferredOperationKHR(VkDeferredOperationKHR data);
VkDeferredOperationKHR deserialize_VkDeferredOperationKHR(json& data);
json serialize_VkPrivateDataSlot(VkPrivateDataSlot data);
VkPrivateDataSlot deserialize_VkPrivateDataSlot(json& data);
json serialize_VkPrivateDataSlotEXT(VkPrivateDataSlotEXT data);
VkPrivateDataSlotEXT deserialize_VkPrivateDataSlotEXT(json& data);
json serialize_VkCuModuleNVX(VkCuModuleNVX data);
VkCuModuleNVX deserialize_VkCuModuleNVX(json& data);
json serialize_VkCuFunctionNVX(VkCuFunctionNVX data);
VkCuFunctionNVX deserialize_VkCuFunctionNVX(json& data);
json serialize_VkOpticalFlowSessionNV(VkOpticalFlowSessionNV data);
VkOpticalFlowSessionNV deserialize_VkOpticalFlowSessionNV(json& data);
json serialize_VkMicromapEXT(VkMicromapEXT data);
VkMicromapEXT deserialize_VkMicromapEXT(json& data);
json serialize_VkShaderEXT(VkShaderEXT data);
VkShaderEXT deserialize_VkShaderEXT(json& data);
json serialize_VkDisplayKHR(VkDisplayKHR data);
VkDisplayKHR deserialize_VkDisplayKHR(json& data);
json serialize_VkDisplayModeKHR(VkDisplayModeKHR data);
VkDisplayModeKHR deserialize_VkDisplayModeKHR(json& data);
json serialize_VkSurfaceKHR(VkSurfaceKHR data);
VkSurfaceKHR deserialize_VkSurfaceKHR(json& data);
json serialize_VkSwapchainKHR(VkSwapchainKHR data);
VkSwapchainKHR deserialize_VkSwapchainKHR(json& data);
json serialize_VkDebugReportCallbackEXT(VkDebugReportCallbackEXT data);
VkDebugReportCallbackEXT deserialize_VkDebugReportCallbackEXT(json& data);
json serialize_VkDebugUtilsMessengerEXT(VkDebugUtilsMessengerEXT data);
VkDebugUtilsMessengerEXT deserialize_VkDebugUtilsMessengerEXT(json& data);
json serialize_VkVideoSessionKHR(VkVideoSessionKHR data);
VkVideoSessionKHR deserialize_VkVideoSessionKHR(json& data);
json serialize_VkVideoSessionParametersKHR(VkVideoSessionParametersKHR data);
VkVideoSessionParametersKHR deserialize_VkVideoSessionParametersKHR(json& data);
