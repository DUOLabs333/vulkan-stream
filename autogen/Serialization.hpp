#include <vulkan/vulkan.h>

typedef struct StreamStructure{
    VkStructureType sType;
    const void* pNext;
} StreamStructure;

#include <debug.hpp>
typedef void* pNext;
void* memdup(const void* mem, size_t size);
void* copyVkStruct (const void* data);

        object serialize_VkBaseOutStructure(VkBaseOutStructure name);
        VkBaseOutStructure deserialize_VkBaseOutStructure(object &name);
    

        object serialize_VkBaseInStructure(VkBaseInStructure name);
        VkBaseInStructure deserialize_VkBaseInStructure(object &name);
    

        object serialize_VkOffset2D(VkOffset2D name);
        VkOffset2D deserialize_VkOffset2D(object &name);
    

        object serialize_VkOffset3D(VkOffset3D name);
        VkOffset3D deserialize_VkOffset3D(object &name);
    

        object serialize_VkExtent2D(VkExtent2D name);
        VkExtent2D deserialize_VkExtent2D(object &name);
    

        object serialize_VkExtent3D(VkExtent3D name);
        VkExtent3D deserialize_VkExtent3D(object &name);
    

        object serialize_VkViewport(VkViewport name);
        VkViewport deserialize_VkViewport(object &name);
    

        object serialize_VkRect2D(VkRect2D name);
        VkRect2D deserialize_VkRect2D(object &name);
    

        object serialize_VkClearRect(VkClearRect name);
        VkClearRect deserialize_VkClearRect(object &name);
    

        object serialize_VkComponentMapping(VkComponentMapping name);
        VkComponentMapping deserialize_VkComponentMapping(object &name);
    

        object serialize_VkPhysicalDeviceProperties(VkPhysicalDeviceProperties name);
        VkPhysicalDeviceProperties deserialize_VkPhysicalDeviceProperties(object &name);
    

        object serialize_VkExtensionProperties(VkExtensionProperties name);
        VkExtensionProperties deserialize_VkExtensionProperties(object &name);
    

        object serialize_VkLayerProperties(VkLayerProperties name);
        VkLayerProperties deserialize_VkLayerProperties(object &name);
    

        object serialize_VkApplicationInfo(VkApplicationInfo name);
        VkApplicationInfo deserialize_VkApplicationInfo(object &name);
    

        object serialize_VkAllocationCallbacks(VkAllocationCallbacks name);
        VkAllocationCallbacks deserialize_VkAllocationCallbacks(object &name);
    

        object serialize_VkDeviceQueueCreateInfo(VkDeviceQueueCreateInfo name);
        VkDeviceQueueCreateInfo deserialize_VkDeviceQueueCreateInfo(object &name);
    

        object serialize_VkDeviceCreateInfo(VkDeviceCreateInfo name);
        VkDeviceCreateInfo deserialize_VkDeviceCreateInfo(object &name);
    

        object serialize_VkInstanceCreateInfo(VkInstanceCreateInfo name);
        VkInstanceCreateInfo deserialize_VkInstanceCreateInfo(object &name);
    

        object serialize_VkQueueFamilyProperties(VkQueueFamilyProperties name);
        VkQueueFamilyProperties deserialize_VkQueueFamilyProperties(object &name);
    

        object serialize_VkPhysicalDeviceMemoryProperties(VkPhysicalDeviceMemoryProperties name);
        VkPhysicalDeviceMemoryProperties deserialize_VkPhysicalDeviceMemoryProperties(object &name);
    

        object serialize_VkMemoryAllocateInfo(VkMemoryAllocateInfo name);
        VkMemoryAllocateInfo deserialize_VkMemoryAllocateInfo(object &name);
    

        object serialize_VkMemoryRequirements(VkMemoryRequirements name);
        VkMemoryRequirements deserialize_VkMemoryRequirements(object &name);
    

        object serialize_VkSparseImageFormatProperties(VkSparseImageFormatProperties name);
        VkSparseImageFormatProperties deserialize_VkSparseImageFormatProperties(object &name);
    

        object serialize_VkSparseImageMemoryRequirements(VkSparseImageMemoryRequirements name);
        VkSparseImageMemoryRequirements deserialize_VkSparseImageMemoryRequirements(object &name);
    

        object serialize_VkMemoryType(VkMemoryType name);
        VkMemoryType deserialize_VkMemoryType(object &name);
    

        object serialize_VkMemoryHeap(VkMemoryHeap name);
        VkMemoryHeap deserialize_VkMemoryHeap(object &name);
    

        object serialize_VkMappedMemoryRange(VkMappedMemoryRange name);
        VkMappedMemoryRange deserialize_VkMappedMemoryRange(object &name);
    

        object serialize_VkFormatProperties(VkFormatProperties name);
        VkFormatProperties deserialize_VkFormatProperties(object &name);
    

        object serialize_VkImageFormatProperties(VkImageFormatProperties name);
        VkImageFormatProperties deserialize_VkImageFormatProperties(object &name);
    

        object serialize_VkDescriptorBufferInfo(VkDescriptorBufferInfo name);
        VkDescriptorBufferInfo deserialize_VkDescriptorBufferInfo(object &name);
    

        object serialize_VkDescriptorImageInfo(VkDescriptorImageInfo name);
        VkDescriptorImageInfo deserialize_VkDescriptorImageInfo(object &name);
    

        object serialize_VkWriteDescriptorSet(VkWriteDescriptorSet name);
        VkWriteDescriptorSet deserialize_VkWriteDescriptorSet(object &name);
    

        object serialize_VkCopyDescriptorSet(VkCopyDescriptorSet name);
        VkCopyDescriptorSet deserialize_VkCopyDescriptorSet(object &name);
    

        object serialize_VkBufferUsageFlags2CreateInfoKHR(VkBufferUsageFlags2CreateInfoKHR name);
        VkBufferUsageFlags2CreateInfoKHR deserialize_VkBufferUsageFlags2CreateInfoKHR(object &name);
    

        object serialize_VkBufferCreateInfo(VkBufferCreateInfo name);
        VkBufferCreateInfo deserialize_VkBufferCreateInfo(object &name);
    

        object serialize_VkBufferViewCreateInfo(VkBufferViewCreateInfo name);
        VkBufferViewCreateInfo deserialize_VkBufferViewCreateInfo(object &name);
    

        object serialize_VkImageSubresource(VkImageSubresource name);
        VkImageSubresource deserialize_VkImageSubresource(object &name);
    

        object serialize_VkImageSubresourceLayers(VkImageSubresourceLayers name);
        VkImageSubresourceLayers deserialize_VkImageSubresourceLayers(object &name);
    

        object serialize_VkImageSubresourceRange(VkImageSubresourceRange name);
        VkImageSubresourceRange deserialize_VkImageSubresourceRange(object &name);
    

        object serialize_VkMemoryBarrier(VkMemoryBarrier name);
        VkMemoryBarrier deserialize_VkMemoryBarrier(object &name);
    

        object serialize_VkBufferMemoryBarrier(VkBufferMemoryBarrier name);
        VkBufferMemoryBarrier deserialize_VkBufferMemoryBarrier(object &name);
    

        object serialize_VkImageMemoryBarrier(VkImageMemoryBarrier name);
        VkImageMemoryBarrier deserialize_VkImageMemoryBarrier(object &name);
    

        object serialize_VkImageCreateInfo(VkImageCreateInfo name);
        VkImageCreateInfo deserialize_VkImageCreateInfo(object &name);
    

        object serialize_VkSubresourceLayout(VkSubresourceLayout name);
        VkSubresourceLayout deserialize_VkSubresourceLayout(object &name);
    

        object serialize_VkImageViewCreateInfo(VkImageViewCreateInfo name);
        VkImageViewCreateInfo deserialize_VkImageViewCreateInfo(object &name);
    

        object serialize_VkBufferCopy(VkBufferCopy name);
        VkBufferCopy deserialize_VkBufferCopy(object &name);
    

        object serialize_VkSparseMemoryBind(VkSparseMemoryBind name);
        VkSparseMemoryBind deserialize_VkSparseMemoryBind(object &name);
    

        object serialize_VkSparseImageMemoryBind(VkSparseImageMemoryBind name);
        VkSparseImageMemoryBind deserialize_VkSparseImageMemoryBind(object &name);
    

        object serialize_VkSparseBufferMemoryBindInfo(VkSparseBufferMemoryBindInfo name);
        VkSparseBufferMemoryBindInfo deserialize_VkSparseBufferMemoryBindInfo(object &name);
    

        object serialize_VkSparseImageOpaqueMemoryBindInfo(VkSparseImageOpaqueMemoryBindInfo name);
        VkSparseImageOpaqueMemoryBindInfo deserialize_VkSparseImageOpaqueMemoryBindInfo(object &name);
    

        object serialize_VkSparseImageMemoryBindInfo(VkSparseImageMemoryBindInfo name);
        VkSparseImageMemoryBindInfo deserialize_VkSparseImageMemoryBindInfo(object &name);
    

        object serialize_VkBindSparseInfo(VkBindSparseInfo name);
        VkBindSparseInfo deserialize_VkBindSparseInfo(object &name);
    

        object serialize_VkImageCopy(VkImageCopy name);
        VkImageCopy deserialize_VkImageCopy(object &name);
    

        object serialize_VkImageBlit(VkImageBlit name);
        VkImageBlit deserialize_VkImageBlit(object &name);
    

        object serialize_VkBufferImageCopy(VkBufferImageCopy name);
        VkBufferImageCopy deserialize_VkBufferImageCopy(object &name);
    

        object serialize_VkCopyMemoryIndirectCommandNV(VkCopyMemoryIndirectCommandNV name);
        VkCopyMemoryIndirectCommandNV deserialize_VkCopyMemoryIndirectCommandNV(object &name);
    

        object serialize_VkCopyMemoryToImageIndirectCommandNV(VkCopyMemoryToImageIndirectCommandNV name);
        VkCopyMemoryToImageIndirectCommandNV deserialize_VkCopyMemoryToImageIndirectCommandNV(object &name);
    

        object serialize_VkImageResolve(VkImageResolve name);
        VkImageResolve deserialize_VkImageResolve(object &name);
    

        object serialize_VkShaderModuleCreateInfo(VkShaderModuleCreateInfo name);
        VkShaderModuleCreateInfo deserialize_VkShaderModuleCreateInfo(object &name);
    

        object serialize_VkDescriptorSetLayoutBinding(VkDescriptorSetLayoutBinding name);
        VkDescriptorSetLayoutBinding deserialize_VkDescriptorSetLayoutBinding(object &name);
    

        object serialize_VkDescriptorSetLayoutCreateInfo(VkDescriptorSetLayoutCreateInfo name);
        VkDescriptorSetLayoutCreateInfo deserialize_VkDescriptorSetLayoutCreateInfo(object &name);
    

        object serialize_VkDescriptorPoolSize(VkDescriptorPoolSize name);
        VkDescriptorPoolSize deserialize_VkDescriptorPoolSize(object &name);
    

        object serialize_VkDescriptorPoolCreateInfo(VkDescriptorPoolCreateInfo name);
        VkDescriptorPoolCreateInfo deserialize_VkDescriptorPoolCreateInfo(object &name);
    

        object serialize_VkDescriptorSetAllocateInfo(VkDescriptorSetAllocateInfo name);
        VkDescriptorSetAllocateInfo deserialize_VkDescriptorSetAllocateInfo(object &name);
    

        object serialize_VkSpecializationMapEntry(VkSpecializationMapEntry name);
        VkSpecializationMapEntry deserialize_VkSpecializationMapEntry(object &name);
    

        object serialize_VkSpecializationInfo(VkSpecializationInfo name);
        VkSpecializationInfo deserialize_VkSpecializationInfo(object &name);
    

        object serialize_VkPipelineShaderStageCreateInfo(VkPipelineShaderStageCreateInfo name);
        VkPipelineShaderStageCreateInfo deserialize_VkPipelineShaderStageCreateInfo(object &name);
    

        object serialize_VkComputePipelineCreateInfo(VkComputePipelineCreateInfo name);
        VkComputePipelineCreateInfo deserialize_VkComputePipelineCreateInfo(object &name);
    

        object serialize_VkComputePipelineIndirectBufferInfoNV(VkComputePipelineIndirectBufferInfoNV name);
        VkComputePipelineIndirectBufferInfoNV deserialize_VkComputePipelineIndirectBufferInfoNV(object &name);
    

        object serialize_VkPipelineCreateFlags2CreateInfoKHR(VkPipelineCreateFlags2CreateInfoKHR name);
        VkPipelineCreateFlags2CreateInfoKHR deserialize_VkPipelineCreateFlags2CreateInfoKHR(object &name);
    

        object serialize_VkVertexInputBindingDescription(VkVertexInputBindingDescription name);
        VkVertexInputBindingDescription deserialize_VkVertexInputBindingDescription(object &name);
    

        object serialize_VkVertexInputAttributeDescription(VkVertexInputAttributeDescription name);
        VkVertexInputAttributeDescription deserialize_VkVertexInputAttributeDescription(object &name);
    

        object serialize_VkPipelineVertexInputStateCreateInfo(VkPipelineVertexInputStateCreateInfo name);
        VkPipelineVertexInputStateCreateInfo deserialize_VkPipelineVertexInputStateCreateInfo(object &name);
    

        object serialize_VkPipelineInputAssemblyStateCreateInfo(VkPipelineInputAssemblyStateCreateInfo name);
        VkPipelineInputAssemblyStateCreateInfo deserialize_VkPipelineInputAssemblyStateCreateInfo(object &name);
    

        object serialize_VkPipelineTessellationStateCreateInfo(VkPipelineTessellationStateCreateInfo name);
        VkPipelineTessellationStateCreateInfo deserialize_VkPipelineTessellationStateCreateInfo(object &name);
    

        object serialize_VkPipelineViewportStateCreateInfo(VkPipelineViewportStateCreateInfo name);
        VkPipelineViewportStateCreateInfo deserialize_VkPipelineViewportStateCreateInfo(object &name);
    

        object serialize_VkPipelineRasterizationStateCreateInfo(VkPipelineRasterizationStateCreateInfo name);
        VkPipelineRasterizationStateCreateInfo deserialize_VkPipelineRasterizationStateCreateInfo(object &name);
    

        object serialize_VkPipelineMultisampleStateCreateInfo(VkPipelineMultisampleStateCreateInfo name);
        VkPipelineMultisampleStateCreateInfo deserialize_VkPipelineMultisampleStateCreateInfo(object &name);
    

        object serialize_VkPipelineColorBlendAttachmentState(VkPipelineColorBlendAttachmentState name);
        VkPipelineColorBlendAttachmentState deserialize_VkPipelineColorBlendAttachmentState(object &name);
    

        object serialize_VkPipelineColorBlendStateCreateInfo(VkPipelineColorBlendStateCreateInfo name);
        VkPipelineColorBlendStateCreateInfo deserialize_VkPipelineColorBlendStateCreateInfo(object &name);
    

        object serialize_VkPipelineDynamicStateCreateInfo(VkPipelineDynamicStateCreateInfo name);
        VkPipelineDynamicStateCreateInfo deserialize_VkPipelineDynamicStateCreateInfo(object &name);
    

        object serialize_VkStencilOpState(VkStencilOpState name);
        VkStencilOpState deserialize_VkStencilOpState(object &name);
    

        object serialize_VkPipelineDepthStencilStateCreateInfo(VkPipelineDepthStencilStateCreateInfo name);
        VkPipelineDepthStencilStateCreateInfo deserialize_VkPipelineDepthStencilStateCreateInfo(object &name);
    

        object serialize_VkGraphicsPipelineCreateInfo(VkGraphicsPipelineCreateInfo name);
        VkGraphicsPipelineCreateInfo deserialize_VkGraphicsPipelineCreateInfo(object &name);
    

        object serialize_VkPipelineCacheCreateInfo(VkPipelineCacheCreateInfo name);
        VkPipelineCacheCreateInfo deserialize_VkPipelineCacheCreateInfo(object &name);
    

        object serialize_VkPipelineCacheHeaderVersionOne(VkPipelineCacheHeaderVersionOne name);
        VkPipelineCacheHeaderVersionOne deserialize_VkPipelineCacheHeaderVersionOne(object &name);
    

        object serialize_VkPushConstantRange(VkPushConstantRange name);
        VkPushConstantRange deserialize_VkPushConstantRange(object &name);
    

        object serialize_VkPipelineLayoutCreateInfo(VkPipelineLayoutCreateInfo name);
        VkPipelineLayoutCreateInfo deserialize_VkPipelineLayoutCreateInfo(object &name);
    

        object serialize_VkSamplerCreateInfo(VkSamplerCreateInfo name);
        VkSamplerCreateInfo deserialize_VkSamplerCreateInfo(object &name);
    

        object serialize_VkCommandPoolCreateInfo(VkCommandPoolCreateInfo name);
        VkCommandPoolCreateInfo deserialize_VkCommandPoolCreateInfo(object &name);
    

        object serialize_VkCommandBufferAllocateInfo(VkCommandBufferAllocateInfo name);
        VkCommandBufferAllocateInfo deserialize_VkCommandBufferAllocateInfo(object &name);
    

        object serialize_VkCommandBufferInheritanceInfo(VkCommandBufferInheritanceInfo name);
        VkCommandBufferInheritanceInfo deserialize_VkCommandBufferInheritanceInfo(object &name);
    

        object serialize_VkCommandBufferBeginInfo(VkCommandBufferBeginInfo name);
        VkCommandBufferBeginInfo deserialize_VkCommandBufferBeginInfo(object &name);
    

        object serialize_VkRenderPassBeginInfo(VkRenderPassBeginInfo name);
        VkRenderPassBeginInfo deserialize_VkRenderPassBeginInfo(object &name);
    

        object serialize_VkClearColorValue(VkClearColorValue name);
        VkClearColorValue deserialize_VkClearColorValue(object &name);
    

        object serialize_VkClearDepthStencilValue(VkClearDepthStencilValue name);
        VkClearDepthStencilValue deserialize_VkClearDepthStencilValue(object &name);
    

        object serialize_VkClearValue(VkClearValue name);
        VkClearValue deserialize_VkClearValue(object &name);
    

        object serialize_VkClearAttachment(VkClearAttachment name);
        VkClearAttachment deserialize_VkClearAttachment(object &name);
    

        object serialize_VkAttachmentDescription(VkAttachmentDescription name);
        VkAttachmentDescription deserialize_VkAttachmentDescription(object &name);
    

        object serialize_VkAttachmentReference(VkAttachmentReference name);
        VkAttachmentReference deserialize_VkAttachmentReference(object &name);
    

        object serialize_VkSubpassDescription(VkSubpassDescription name);
        VkSubpassDescription deserialize_VkSubpassDescription(object &name);
    

        object serialize_VkSubpassDependency(VkSubpassDependency name);
        VkSubpassDependency deserialize_VkSubpassDependency(object &name);
    

        object serialize_VkRenderPassCreateInfo(VkRenderPassCreateInfo name);
        VkRenderPassCreateInfo deserialize_VkRenderPassCreateInfo(object &name);
    

        object serialize_VkEventCreateInfo(VkEventCreateInfo name);
        VkEventCreateInfo deserialize_VkEventCreateInfo(object &name);
    

        object serialize_VkFenceCreateInfo(VkFenceCreateInfo name);
        VkFenceCreateInfo deserialize_VkFenceCreateInfo(object &name);
    

        object serialize_VkPhysicalDeviceFeatures(VkPhysicalDeviceFeatures name);
        VkPhysicalDeviceFeatures deserialize_VkPhysicalDeviceFeatures(object &name);
    

        object serialize_VkPhysicalDeviceSparseProperties(VkPhysicalDeviceSparseProperties name);
        VkPhysicalDeviceSparseProperties deserialize_VkPhysicalDeviceSparseProperties(object &name);
    

        object serialize_VkPhysicalDeviceLimits(VkPhysicalDeviceLimits name);
        VkPhysicalDeviceLimits deserialize_VkPhysicalDeviceLimits(object &name);
    

        object serialize_VkSemaphoreCreateInfo(VkSemaphoreCreateInfo name);
        VkSemaphoreCreateInfo deserialize_VkSemaphoreCreateInfo(object &name);
    

        object serialize_VkQueryPoolCreateInfo(VkQueryPoolCreateInfo name);
        VkQueryPoolCreateInfo deserialize_VkQueryPoolCreateInfo(object &name);
    

        object serialize_VkFramebufferCreateInfo(VkFramebufferCreateInfo name);
        VkFramebufferCreateInfo deserialize_VkFramebufferCreateInfo(object &name);
    

        object serialize_VkDrawIndirectCommand(VkDrawIndirectCommand name);
        VkDrawIndirectCommand deserialize_VkDrawIndirectCommand(object &name);
    

        object serialize_VkDrawIndexedIndirectCommand(VkDrawIndexedIndirectCommand name);
        VkDrawIndexedIndirectCommand deserialize_VkDrawIndexedIndirectCommand(object &name);
    

        object serialize_VkDispatchIndirectCommand(VkDispatchIndirectCommand name);
        VkDispatchIndirectCommand deserialize_VkDispatchIndirectCommand(object &name);
    

        object serialize_VkMultiDrawInfoEXT(VkMultiDrawInfoEXT name);
        VkMultiDrawInfoEXT deserialize_VkMultiDrawInfoEXT(object &name);
    

        object serialize_VkMultiDrawIndexedInfoEXT(VkMultiDrawIndexedInfoEXT name);
        VkMultiDrawIndexedInfoEXT deserialize_VkMultiDrawIndexedInfoEXT(object &name);
    

        object serialize_VkSubmitInfo(VkSubmitInfo name);
        VkSubmitInfo deserialize_VkSubmitInfo(object &name);
    

        object serialize_VkDisplayPropertiesKHR(VkDisplayPropertiesKHR name);
        VkDisplayPropertiesKHR deserialize_VkDisplayPropertiesKHR(object &name);
    

        object serialize_VkDisplayPlanePropertiesKHR(VkDisplayPlanePropertiesKHR name);
        VkDisplayPlanePropertiesKHR deserialize_VkDisplayPlanePropertiesKHR(object &name);
    

        object serialize_VkDisplayModeParametersKHR(VkDisplayModeParametersKHR name);
        VkDisplayModeParametersKHR deserialize_VkDisplayModeParametersKHR(object &name);
    

        object serialize_VkDisplayModePropertiesKHR(VkDisplayModePropertiesKHR name);
        VkDisplayModePropertiesKHR deserialize_VkDisplayModePropertiesKHR(object &name);
    

        object serialize_VkDisplayModeCreateInfoKHR(VkDisplayModeCreateInfoKHR name);
        VkDisplayModeCreateInfoKHR deserialize_VkDisplayModeCreateInfoKHR(object &name);
    

        object serialize_VkDisplayPlaneCapabilitiesKHR(VkDisplayPlaneCapabilitiesKHR name);
        VkDisplayPlaneCapabilitiesKHR deserialize_VkDisplayPlaneCapabilitiesKHR(object &name);
    

        object serialize_VkDisplaySurfaceCreateInfoKHR(VkDisplaySurfaceCreateInfoKHR name);
        VkDisplaySurfaceCreateInfoKHR deserialize_VkDisplaySurfaceCreateInfoKHR(object &name);
    

        object serialize_VkDisplayPresentInfoKHR(VkDisplayPresentInfoKHR name);
        VkDisplayPresentInfoKHR deserialize_VkDisplayPresentInfoKHR(object &name);
    

        object serialize_VkSurfaceCapabilitiesKHR(VkSurfaceCapabilitiesKHR name);
        VkSurfaceCapabilitiesKHR deserialize_VkSurfaceCapabilitiesKHR(object &name);
    

        object serialize_VkXlibSurfaceCreateInfoKHR(VkXlibSurfaceCreateInfoKHR name);
        VkXlibSurfaceCreateInfoKHR deserialize_VkXlibSurfaceCreateInfoKHR(object &name);
    

        object serialize_VkXcbSurfaceCreateInfoKHR(VkXcbSurfaceCreateInfoKHR name);
        VkXcbSurfaceCreateInfoKHR deserialize_VkXcbSurfaceCreateInfoKHR(object &name);
    

        object serialize_VkSurfaceFormatKHR(VkSurfaceFormatKHR name);
        VkSurfaceFormatKHR deserialize_VkSurfaceFormatKHR(object &name);
    

        object serialize_VkSwapchainCreateInfoKHR(VkSwapchainCreateInfoKHR name);
        VkSwapchainCreateInfoKHR deserialize_VkSwapchainCreateInfoKHR(object &name);
    

        object serialize_VkPresentInfoKHR(VkPresentInfoKHR name);
        VkPresentInfoKHR deserialize_VkPresentInfoKHR(object &name);
    

        object serialize_VkDebugReportCallbackCreateInfoEXT(VkDebugReportCallbackCreateInfoEXT name);
        VkDebugReportCallbackCreateInfoEXT deserialize_VkDebugReportCallbackCreateInfoEXT(object &name);
    

        object serialize_VkValidationFlagsEXT(VkValidationFlagsEXT name);
        VkValidationFlagsEXT deserialize_VkValidationFlagsEXT(object &name);
    

        object serialize_VkValidationFeaturesEXT(VkValidationFeaturesEXT name);
        VkValidationFeaturesEXT deserialize_VkValidationFeaturesEXT(object &name);
    

        object serialize_VkPipelineRasterizationStateRasterizationOrderAMD(VkPipelineRasterizationStateRasterizationOrderAMD name);
        VkPipelineRasterizationStateRasterizationOrderAMD deserialize_VkPipelineRasterizationStateRasterizationOrderAMD(object &name);
    

        object serialize_VkDebugMarkerObjectNameInfoEXT(VkDebugMarkerObjectNameInfoEXT name);
        VkDebugMarkerObjectNameInfoEXT deserialize_VkDebugMarkerObjectNameInfoEXT(object &name);
    

        object serialize_VkDebugMarkerObjectTagInfoEXT(VkDebugMarkerObjectTagInfoEXT name);
        VkDebugMarkerObjectTagInfoEXT deserialize_VkDebugMarkerObjectTagInfoEXT(object &name);
    

        object serialize_VkDebugMarkerMarkerInfoEXT(VkDebugMarkerMarkerInfoEXT name);
        VkDebugMarkerMarkerInfoEXT deserialize_VkDebugMarkerMarkerInfoEXT(object &name);
    

        object serialize_VkDedicatedAllocationImageCreateInfoNV(VkDedicatedAllocationImageCreateInfoNV name);
        VkDedicatedAllocationImageCreateInfoNV deserialize_VkDedicatedAllocationImageCreateInfoNV(object &name);
    

        object serialize_VkDedicatedAllocationBufferCreateInfoNV(VkDedicatedAllocationBufferCreateInfoNV name);
        VkDedicatedAllocationBufferCreateInfoNV deserialize_VkDedicatedAllocationBufferCreateInfoNV(object &name);
    

        object serialize_VkDedicatedAllocationMemoryAllocateInfoNV(VkDedicatedAllocationMemoryAllocateInfoNV name);
        VkDedicatedAllocationMemoryAllocateInfoNV deserialize_VkDedicatedAllocationMemoryAllocateInfoNV(object &name);
    

        object serialize_VkExternalImageFormatPropertiesNV(VkExternalImageFormatPropertiesNV name);
        VkExternalImageFormatPropertiesNV deserialize_VkExternalImageFormatPropertiesNV(object &name);
    

        object serialize_VkExternalMemoryImageCreateInfoNV(VkExternalMemoryImageCreateInfoNV name);
        VkExternalMemoryImageCreateInfoNV deserialize_VkExternalMemoryImageCreateInfoNV(object &name);
    

        object serialize_VkExportMemoryAllocateInfoNV(VkExportMemoryAllocateInfoNV name);
        VkExportMemoryAllocateInfoNV deserialize_VkExportMemoryAllocateInfoNV(object &name);
    

        object serialize_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV name);
        VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV deserialize_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV(object &name);
    

        object serialize_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV name);
        VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV deserialize_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(object &name);
    

        object serialize_VkDevicePrivateDataCreateInfo(VkDevicePrivateDataCreateInfo name);
        VkDevicePrivateDataCreateInfo deserialize_VkDevicePrivateDataCreateInfo(object &name);
    

        object serialize_VkDevicePrivateDataCreateInfoEXT(VkDevicePrivateDataCreateInfoEXT name);
        VkDevicePrivateDataCreateInfoEXT deserialize_VkDevicePrivateDataCreateInfoEXT(object &name);
    

        object serialize_VkPrivateDataSlotCreateInfo(VkPrivateDataSlotCreateInfo name);
        VkPrivateDataSlotCreateInfo deserialize_VkPrivateDataSlotCreateInfo(object &name);
    

        object serialize_VkPrivateDataSlotCreateInfoEXT(VkPrivateDataSlotCreateInfoEXT name);
        VkPrivateDataSlotCreateInfoEXT deserialize_VkPrivateDataSlotCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDevicePrivateDataFeatures(VkPhysicalDevicePrivateDataFeatures name);
        VkPhysicalDevicePrivateDataFeatures deserialize_VkPhysicalDevicePrivateDataFeatures(object &name);
    

        object serialize_VkPhysicalDevicePrivateDataFeaturesEXT(VkPhysicalDevicePrivateDataFeaturesEXT name);
        VkPhysicalDevicePrivateDataFeaturesEXT deserialize_VkPhysicalDevicePrivateDataFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV(VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV name);
        VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV deserialize_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV(object &name);
    

        object serialize_VkPhysicalDeviceMultiDrawPropertiesEXT(VkPhysicalDeviceMultiDrawPropertiesEXT name);
        VkPhysicalDeviceMultiDrawPropertiesEXT deserialize_VkPhysicalDeviceMultiDrawPropertiesEXT(object &name);
    

        object serialize_VkGraphicsShaderGroupCreateInfoNV(VkGraphicsShaderGroupCreateInfoNV name);
        VkGraphicsShaderGroupCreateInfoNV deserialize_VkGraphicsShaderGroupCreateInfoNV(object &name);
    

        object serialize_VkGraphicsPipelineShaderGroupsCreateInfoNV(VkGraphicsPipelineShaderGroupsCreateInfoNV name);
        VkGraphicsPipelineShaderGroupsCreateInfoNV deserialize_VkGraphicsPipelineShaderGroupsCreateInfoNV(object &name);
    

        object serialize_VkBindShaderGroupIndirectCommandNV(VkBindShaderGroupIndirectCommandNV name);
        VkBindShaderGroupIndirectCommandNV deserialize_VkBindShaderGroupIndirectCommandNV(object &name);
    

        object serialize_VkBindIndexBufferIndirectCommandNV(VkBindIndexBufferIndirectCommandNV name);
        VkBindIndexBufferIndirectCommandNV deserialize_VkBindIndexBufferIndirectCommandNV(object &name);
    

        object serialize_VkBindVertexBufferIndirectCommandNV(VkBindVertexBufferIndirectCommandNV name);
        VkBindVertexBufferIndirectCommandNV deserialize_VkBindVertexBufferIndirectCommandNV(object &name);
    

        object serialize_VkSetStateFlagsIndirectCommandNV(VkSetStateFlagsIndirectCommandNV name);
        VkSetStateFlagsIndirectCommandNV deserialize_VkSetStateFlagsIndirectCommandNV(object &name);
    

        object serialize_VkIndirectCommandsStreamNV(VkIndirectCommandsStreamNV name);
        VkIndirectCommandsStreamNV deserialize_VkIndirectCommandsStreamNV(object &name);
    

        object serialize_VkIndirectCommandsLayoutTokenNV(VkIndirectCommandsLayoutTokenNV name);
        VkIndirectCommandsLayoutTokenNV deserialize_VkIndirectCommandsLayoutTokenNV(object &name);
    

        object serialize_VkIndirectCommandsLayoutCreateInfoNV(VkIndirectCommandsLayoutCreateInfoNV name);
        VkIndirectCommandsLayoutCreateInfoNV deserialize_VkIndirectCommandsLayoutCreateInfoNV(object &name);
    

        object serialize_VkGeneratedCommandsInfoNV(VkGeneratedCommandsInfoNV name);
        VkGeneratedCommandsInfoNV deserialize_VkGeneratedCommandsInfoNV(object &name);
    

        object serialize_VkGeneratedCommandsMemoryRequirementsInfoNV(VkGeneratedCommandsMemoryRequirementsInfoNV name);
        VkGeneratedCommandsMemoryRequirementsInfoNV deserialize_VkGeneratedCommandsMemoryRequirementsInfoNV(object &name);
    

        object serialize_VkPipelineIndirectDeviceAddressInfoNV(VkPipelineIndirectDeviceAddressInfoNV name);
        VkPipelineIndirectDeviceAddressInfoNV deserialize_VkPipelineIndirectDeviceAddressInfoNV(object &name);
    

        object serialize_VkBindPipelineIndirectCommandNV(VkBindPipelineIndirectCommandNV name);
        VkBindPipelineIndirectCommandNV deserialize_VkBindPipelineIndirectCommandNV(object &name);
    

        object serialize_VkPhysicalDeviceFeatures2(VkPhysicalDeviceFeatures2 name);
        VkPhysicalDeviceFeatures2 deserialize_VkPhysicalDeviceFeatures2(object &name);
    

        object serialize_VkPhysicalDeviceFeatures2KHR(VkPhysicalDeviceFeatures2KHR name);
        VkPhysicalDeviceFeatures2KHR deserialize_VkPhysicalDeviceFeatures2KHR(object &name);
    

        object serialize_VkPhysicalDeviceProperties2(VkPhysicalDeviceProperties2 name);
        VkPhysicalDeviceProperties2 deserialize_VkPhysicalDeviceProperties2(object &name);
    

        object serialize_VkPhysicalDeviceProperties2KHR(VkPhysicalDeviceProperties2KHR name);
        VkPhysicalDeviceProperties2KHR deserialize_VkPhysicalDeviceProperties2KHR(object &name);
    

        object serialize_VkFormatProperties2(VkFormatProperties2 name);
        VkFormatProperties2 deserialize_VkFormatProperties2(object &name);
    

        object serialize_VkFormatProperties2KHR(VkFormatProperties2KHR name);
        VkFormatProperties2KHR deserialize_VkFormatProperties2KHR(object &name);
    

        object serialize_VkImageFormatProperties2(VkImageFormatProperties2 name);
        VkImageFormatProperties2 deserialize_VkImageFormatProperties2(object &name);
    

        object serialize_VkImageFormatProperties2KHR(VkImageFormatProperties2KHR name);
        VkImageFormatProperties2KHR deserialize_VkImageFormatProperties2KHR(object &name);
    

        object serialize_VkPhysicalDeviceImageFormatInfo2(VkPhysicalDeviceImageFormatInfo2 name);
        VkPhysicalDeviceImageFormatInfo2 deserialize_VkPhysicalDeviceImageFormatInfo2(object &name);
    

        object serialize_VkPhysicalDeviceImageFormatInfo2KHR(VkPhysicalDeviceImageFormatInfo2KHR name);
        VkPhysicalDeviceImageFormatInfo2KHR deserialize_VkPhysicalDeviceImageFormatInfo2KHR(object &name);
    

        object serialize_VkQueueFamilyProperties2(VkQueueFamilyProperties2 name);
        VkQueueFamilyProperties2 deserialize_VkQueueFamilyProperties2(object &name);
    

        object serialize_VkQueueFamilyProperties2KHR(VkQueueFamilyProperties2KHR name);
        VkQueueFamilyProperties2KHR deserialize_VkQueueFamilyProperties2KHR(object &name);
    

        object serialize_VkPhysicalDeviceMemoryProperties2(VkPhysicalDeviceMemoryProperties2 name);
        VkPhysicalDeviceMemoryProperties2 deserialize_VkPhysicalDeviceMemoryProperties2(object &name);
    

        object serialize_VkPhysicalDeviceMemoryProperties2KHR(VkPhysicalDeviceMemoryProperties2KHR name);
        VkPhysicalDeviceMemoryProperties2KHR deserialize_VkPhysicalDeviceMemoryProperties2KHR(object &name);
    

        object serialize_VkSparseImageFormatProperties2(VkSparseImageFormatProperties2 name);
        VkSparseImageFormatProperties2 deserialize_VkSparseImageFormatProperties2(object &name);
    

        object serialize_VkSparseImageFormatProperties2KHR(VkSparseImageFormatProperties2KHR name);
        VkSparseImageFormatProperties2KHR deserialize_VkSparseImageFormatProperties2KHR(object &name);
    

        object serialize_VkPhysicalDeviceSparseImageFormatInfo2(VkPhysicalDeviceSparseImageFormatInfo2 name);
        VkPhysicalDeviceSparseImageFormatInfo2 deserialize_VkPhysicalDeviceSparseImageFormatInfo2(object &name);
    

        object serialize_VkPhysicalDeviceSparseImageFormatInfo2KHR(VkPhysicalDeviceSparseImageFormatInfo2KHR name);
        VkPhysicalDeviceSparseImageFormatInfo2KHR deserialize_VkPhysicalDeviceSparseImageFormatInfo2KHR(object &name);
    

        object serialize_VkPhysicalDevicePushDescriptorPropertiesKHR(VkPhysicalDevicePushDescriptorPropertiesKHR name);
        VkPhysicalDevicePushDescriptorPropertiesKHR deserialize_VkPhysicalDevicePushDescriptorPropertiesKHR(object &name);
    

        object serialize_VkConformanceVersion(VkConformanceVersion name);
        VkConformanceVersion deserialize_VkConformanceVersion(object &name);
    

        object serialize_VkConformanceVersionKHR(VkConformanceVersionKHR name);
        VkConformanceVersionKHR deserialize_VkConformanceVersionKHR(object &name);
    

        object serialize_VkPhysicalDeviceDriverProperties(VkPhysicalDeviceDriverProperties name);
        VkPhysicalDeviceDriverProperties deserialize_VkPhysicalDeviceDriverProperties(object &name);
    

        object serialize_VkPhysicalDeviceDriverPropertiesKHR(VkPhysicalDeviceDriverPropertiesKHR name);
        VkPhysicalDeviceDriverPropertiesKHR deserialize_VkPhysicalDeviceDriverPropertiesKHR(object &name);
    

        object serialize_VkPresentRegionsKHR(VkPresentRegionsKHR name);
        VkPresentRegionsKHR deserialize_VkPresentRegionsKHR(object &name);
    

        object serialize_VkPresentRegionKHR(VkPresentRegionKHR name);
        VkPresentRegionKHR deserialize_VkPresentRegionKHR(object &name);
    

        object serialize_VkRectLayerKHR(VkRectLayerKHR name);
        VkRectLayerKHR deserialize_VkRectLayerKHR(object &name);
    

        object serialize_VkPhysicalDeviceVariablePointersFeatures(VkPhysicalDeviceVariablePointersFeatures name);
        VkPhysicalDeviceVariablePointersFeatures deserialize_VkPhysicalDeviceVariablePointersFeatures(object &name);
    

        object serialize_VkPhysicalDeviceVariablePointersFeaturesKHR(VkPhysicalDeviceVariablePointersFeaturesKHR name);
        VkPhysicalDeviceVariablePointersFeaturesKHR deserialize_VkPhysicalDeviceVariablePointersFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceVariablePointerFeaturesKHR(VkPhysicalDeviceVariablePointerFeaturesKHR name);
        VkPhysicalDeviceVariablePointerFeaturesKHR deserialize_VkPhysicalDeviceVariablePointerFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceVariablePointerFeatures(VkPhysicalDeviceVariablePointerFeatures name);
        VkPhysicalDeviceVariablePointerFeatures deserialize_VkPhysicalDeviceVariablePointerFeatures(object &name);
    

        object serialize_VkExternalMemoryProperties(VkExternalMemoryProperties name);
        VkExternalMemoryProperties deserialize_VkExternalMemoryProperties(object &name);
    

        object serialize_VkExternalMemoryPropertiesKHR(VkExternalMemoryPropertiesKHR name);
        VkExternalMemoryPropertiesKHR deserialize_VkExternalMemoryPropertiesKHR(object &name);
    

        object serialize_VkPhysicalDeviceExternalImageFormatInfo(VkPhysicalDeviceExternalImageFormatInfo name);
        VkPhysicalDeviceExternalImageFormatInfo deserialize_VkPhysicalDeviceExternalImageFormatInfo(object &name);
    

        object serialize_VkPhysicalDeviceExternalImageFormatInfoKHR(VkPhysicalDeviceExternalImageFormatInfoKHR name);
        VkPhysicalDeviceExternalImageFormatInfoKHR deserialize_VkPhysicalDeviceExternalImageFormatInfoKHR(object &name);
    

        object serialize_VkExternalImageFormatProperties(VkExternalImageFormatProperties name);
        VkExternalImageFormatProperties deserialize_VkExternalImageFormatProperties(object &name);
    

        object serialize_VkExternalImageFormatPropertiesKHR(VkExternalImageFormatPropertiesKHR name);
        VkExternalImageFormatPropertiesKHR deserialize_VkExternalImageFormatPropertiesKHR(object &name);
    

        object serialize_VkPhysicalDeviceExternalBufferInfo(VkPhysicalDeviceExternalBufferInfo name);
        VkPhysicalDeviceExternalBufferInfo deserialize_VkPhysicalDeviceExternalBufferInfo(object &name);
    

        object serialize_VkPhysicalDeviceExternalBufferInfoKHR(VkPhysicalDeviceExternalBufferInfoKHR name);
        VkPhysicalDeviceExternalBufferInfoKHR deserialize_VkPhysicalDeviceExternalBufferInfoKHR(object &name);
    

        object serialize_VkExternalBufferProperties(VkExternalBufferProperties name);
        VkExternalBufferProperties deserialize_VkExternalBufferProperties(object &name);
    

        object serialize_VkExternalBufferPropertiesKHR(VkExternalBufferPropertiesKHR name);
        VkExternalBufferPropertiesKHR deserialize_VkExternalBufferPropertiesKHR(object &name);
    

        object serialize_VkPhysicalDeviceIDProperties(VkPhysicalDeviceIDProperties name);
        VkPhysicalDeviceIDProperties deserialize_VkPhysicalDeviceIDProperties(object &name);
    

        object serialize_VkPhysicalDeviceIDPropertiesKHR(VkPhysicalDeviceIDPropertiesKHR name);
        VkPhysicalDeviceIDPropertiesKHR deserialize_VkPhysicalDeviceIDPropertiesKHR(object &name);
    

        object serialize_VkExternalMemoryImageCreateInfo(VkExternalMemoryImageCreateInfo name);
        VkExternalMemoryImageCreateInfo deserialize_VkExternalMemoryImageCreateInfo(object &name);
    

        object serialize_VkExternalMemoryImageCreateInfoKHR(VkExternalMemoryImageCreateInfoKHR name);
        VkExternalMemoryImageCreateInfoKHR deserialize_VkExternalMemoryImageCreateInfoKHR(object &name);
    

        object serialize_VkExternalMemoryBufferCreateInfo(VkExternalMemoryBufferCreateInfo name);
        VkExternalMemoryBufferCreateInfo deserialize_VkExternalMemoryBufferCreateInfo(object &name);
    

        object serialize_VkExternalMemoryBufferCreateInfoKHR(VkExternalMemoryBufferCreateInfoKHR name);
        VkExternalMemoryBufferCreateInfoKHR deserialize_VkExternalMemoryBufferCreateInfoKHR(object &name);
    

        object serialize_VkExportMemoryAllocateInfo(VkExportMemoryAllocateInfo name);
        VkExportMemoryAllocateInfo deserialize_VkExportMemoryAllocateInfo(object &name);
    

        object serialize_VkExportMemoryAllocateInfoKHR(VkExportMemoryAllocateInfoKHR name);
        VkExportMemoryAllocateInfoKHR deserialize_VkExportMemoryAllocateInfoKHR(object &name);
    

        object serialize_VkImportMemoryFdInfoKHR(VkImportMemoryFdInfoKHR name);
        VkImportMemoryFdInfoKHR deserialize_VkImportMemoryFdInfoKHR(object &name);
    

        object serialize_VkMemoryFdPropertiesKHR(VkMemoryFdPropertiesKHR name);
        VkMemoryFdPropertiesKHR deserialize_VkMemoryFdPropertiesKHR(object &name);
    

        object serialize_VkMemoryGetFdInfoKHR(VkMemoryGetFdInfoKHR name);
        VkMemoryGetFdInfoKHR deserialize_VkMemoryGetFdInfoKHR(object &name);
    

        object serialize_VkPhysicalDeviceExternalSemaphoreInfo(VkPhysicalDeviceExternalSemaphoreInfo name);
        VkPhysicalDeviceExternalSemaphoreInfo deserialize_VkPhysicalDeviceExternalSemaphoreInfo(object &name);
    

        object serialize_VkPhysicalDeviceExternalSemaphoreInfoKHR(VkPhysicalDeviceExternalSemaphoreInfoKHR name);
        VkPhysicalDeviceExternalSemaphoreInfoKHR deserialize_VkPhysicalDeviceExternalSemaphoreInfoKHR(object &name);
    

        object serialize_VkExternalSemaphoreProperties(VkExternalSemaphoreProperties name);
        VkExternalSemaphoreProperties deserialize_VkExternalSemaphoreProperties(object &name);
    

        object serialize_VkExternalSemaphorePropertiesKHR(VkExternalSemaphorePropertiesKHR name);
        VkExternalSemaphorePropertiesKHR deserialize_VkExternalSemaphorePropertiesKHR(object &name);
    

        object serialize_VkExportSemaphoreCreateInfo(VkExportSemaphoreCreateInfo name);
        VkExportSemaphoreCreateInfo deserialize_VkExportSemaphoreCreateInfo(object &name);
    

        object serialize_VkExportSemaphoreCreateInfoKHR(VkExportSemaphoreCreateInfoKHR name);
        VkExportSemaphoreCreateInfoKHR deserialize_VkExportSemaphoreCreateInfoKHR(object &name);
    

        object serialize_VkImportSemaphoreFdInfoKHR(VkImportSemaphoreFdInfoKHR name);
        VkImportSemaphoreFdInfoKHR deserialize_VkImportSemaphoreFdInfoKHR(object &name);
    

        object serialize_VkSemaphoreGetFdInfoKHR(VkSemaphoreGetFdInfoKHR name);
        VkSemaphoreGetFdInfoKHR deserialize_VkSemaphoreGetFdInfoKHR(object &name);
    

        object serialize_VkPhysicalDeviceExternalFenceInfo(VkPhysicalDeviceExternalFenceInfo name);
        VkPhysicalDeviceExternalFenceInfo deserialize_VkPhysicalDeviceExternalFenceInfo(object &name);
    

        object serialize_VkPhysicalDeviceExternalFenceInfoKHR(VkPhysicalDeviceExternalFenceInfoKHR name);
        VkPhysicalDeviceExternalFenceInfoKHR deserialize_VkPhysicalDeviceExternalFenceInfoKHR(object &name);
    

        object serialize_VkExternalFenceProperties(VkExternalFenceProperties name);
        VkExternalFenceProperties deserialize_VkExternalFenceProperties(object &name);
    

        object serialize_VkExternalFencePropertiesKHR(VkExternalFencePropertiesKHR name);
        VkExternalFencePropertiesKHR deserialize_VkExternalFencePropertiesKHR(object &name);
    

        object serialize_VkExportFenceCreateInfo(VkExportFenceCreateInfo name);
        VkExportFenceCreateInfo deserialize_VkExportFenceCreateInfo(object &name);
    

        object serialize_VkExportFenceCreateInfoKHR(VkExportFenceCreateInfoKHR name);
        VkExportFenceCreateInfoKHR deserialize_VkExportFenceCreateInfoKHR(object &name);
    

        object serialize_VkImportFenceFdInfoKHR(VkImportFenceFdInfoKHR name);
        VkImportFenceFdInfoKHR deserialize_VkImportFenceFdInfoKHR(object &name);
    

        object serialize_VkFenceGetFdInfoKHR(VkFenceGetFdInfoKHR name);
        VkFenceGetFdInfoKHR deserialize_VkFenceGetFdInfoKHR(object &name);
    

        object serialize_VkPhysicalDeviceMultiviewFeatures(VkPhysicalDeviceMultiviewFeatures name);
        VkPhysicalDeviceMultiviewFeatures deserialize_VkPhysicalDeviceMultiviewFeatures(object &name);
    

        object serialize_VkPhysicalDeviceMultiviewFeaturesKHR(VkPhysicalDeviceMultiviewFeaturesKHR name);
        VkPhysicalDeviceMultiviewFeaturesKHR deserialize_VkPhysicalDeviceMultiviewFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceMultiviewProperties(VkPhysicalDeviceMultiviewProperties name);
        VkPhysicalDeviceMultiviewProperties deserialize_VkPhysicalDeviceMultiviewProperties(object &name);
    

        object serialize_VkPhysicalDeviceMultiviewPropertiesKHR(VkPhysicalDeviceMultiviewPropertiesKHR name);
        VkPhysicalDeviceMultiviewPropertiesKHR deserialize_VkPhysicalDeviceMultiviewPropertiesKHR(object &name);
    

        object serialize_VkRenderPassMultiviewCreateInfo(VkRenderPassMultiviewCreateInfo name);
        VkRenderPassMultiviewCreateInfo deserialize_VkRenderPassMultiviewCreateInfo(object &name);
    

        object serialize_VkRenderPassMultiviewCreateInfoKHR(VkRenderPassMultiviewCreateInfoKHR name);
        VkRenderPassMultiviewCreateInfoKHR deserialize_VkRenderPassMultiviewCreateInfoKHR(object &name);
    

        object serialize_VkSurfaceCapabilities2EXT(VkSurfaceCapabilities2EXT name);
        VkSurfaceCapabilities2EXT deserialize_VkSurfaceCapabilities2EXT(object &name);
    

        object serialize_VkDisplayPowerInfoEXT(VkDisplayPowerInfoEXT name);
        VkDisplayPowerInfoEXT deserialize_VkDisplayPowerInfoEXT(object &name);
    

        object serialize_VkDeviceEventInfoEXT(VkDeviceEventInfoEXT name);
        VkDeviceEventInfoEXT deserialize_VkDeviceEventInfoEXT(object &name);
    

        object serialize_VkDisplayEventInfoEXT(VkDisplayEventInfoEXT name);
        VkDisplayEventInfoEXT deserialize_VkDisplayEventInfoEXT(object &name);
    

        object serialize_VkSwapchainCounterCreateInfoEXT(VkSwapchainCounterCreateInfoEXT name);
        VkSwapchainCounterCreateInfoEXT deserialize_VkSwapchainCounterCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceGroupProperties(VkPhysicalDeviceGroupProperties name);
        VkPhysicalDeviceGroupProperties deserialize_VkPhysicalDeviceGroupProperties(object &name);
    

        object serialize_VkPhysicalDeviceGroupPropertiesKHR(VkPhysicalDeviceGroupPropertiesKHR name);
        VkPhysicalDeviceGroupPropertiesKHR deserialize_VkPhysicalDeviceGroupPropertiesKHR(object &name);
    

        object serialize_VkMemoryAllocateFlagsInfo(VkMemoryAllocateFlagsInfo name);
        VkMemoryAllocateFlagsInfo deserialize_VkMemoryAllocateFlagsInfo(object &name);
    

        object serialize_VkMemoryAllocateFlagsInfoKHR(VkMemoryAllocateFlagsInfoKHR name);
        VkMemoryAllocateFlagsInfoKHR deserialize_VkMemoryAllocateFlagsInfoKHR(object &name);
    

        object serialize_VkBindBufferMemoryInfo(VkBindBufferMemoryInfo name);
        VkBindBufferMemoryInfo deserialize_VkBindBufferMemoryInfo(object &name);
    

        object serialize_VkBindBufferMemoryInfoKHR(VkBindBufferMemoryInfoKHR name);
        VkBindBufferMemoryInfoKHR deserialize_VkBindBufferMemoryInfoKHR(object &name);
    

        object serialize_VkBindBufferMemoryDeviceGroupInfo(VkBindBufferMemoryDeviceGroupInfo name);
        VkBindBufferMemoryDeviceGroupInfo deserialize_VkBindBufferMemoryDeviceGroupInfo(object &name);
    

        object serialize_VkBindBufferMemoryDeviceGroupInfoKHR(VkBindBufferMemoryDeviceGroupInfoKHR name);
        VkBindBufferMemoryDeviceGroupInfoKHR deserialize_VkBindBufferMemoryDeviceGroupInfoKHR(object &name);
    

        object serialize_VkBindImageMemoryInfo(VkBindImageMemoryInfo name);
        VkBindImageMemoryInfo deserialize_VkBindImageMemoryInfo(object &name);
    

        object serialize_VkBindImageMemoryInfoKHR(VkBindImageMemoryInfoKHR name);
        VkBindImageMemoryInfoKHR deserialize_VkBindImageMemoryInfoKHR(object &name);
    

        object serialize_VkBindImageMemoryDeviceGroupInfo(VkBindImageMemoryDeviceGroupInfo name);
        VkBindImageMemoryDeviceGroupInfo deserialize_VkBindImageMemoryDeviceGroupInfo(object &name);
    

        object serialize_VkBindImageMemoryDeviceGroupInfoKHR(VkBindImageMemoryDeviceGroupInfoKHR name);
        VkBindImageMemoryDeviceGroupInfoKHR deserialize_VkBindImageMemoryDeviceGroupInfoKHR(object &name);
    

        object serialize_VkDeviceGroupRenderPassBeginInfo(VkDeviceGroupRenderPassBeginInfo name);
        VkDeviceGroupRenderPassBeginInfo deserialize_VkDeviceGroupRenderPassBeginInfo(object &name);
    

        object serialize_VkDeviceGroupRenderPassBeginInfoKHR(VkDeviceGroupRenderPassBeginInfoKHR name);
        VkDeviceGroupRenderPassBeginInfoKHR deserialize_VkDeviceGroupRenderPassBeginInfoKHR(object &name);
    

        object serialize_VkDeviceGroupCommandBufferBeginInfo(VkDeviceGroupCommandBufferBeginInfo name);
        VkDeviceGroupCommandBufferBeginInfo deserialize_VkDeviceGroupCommandBufferBeginInfo(object &name);
    

        object serialize_VkDeviceGroupCommandBufferBeginInfoKHR(VkDeviceGroupCommandBufferBeginInfoKHR name);
        VkDeviceGroupCommandBufferBeginInfoKHR deserialize_VkDeviceGroupCommandBufferBeginInfoKHR(object &name);
    

        object serialize_VkDeviceGroupSubmitInfo(VkDeviceGroupSubmitInfo name);
        VkDeviceGroupSubmitInfo deserialize_VkDeviceGroupSubmitInfo(object &name);
    

        object serialize_VkDeviceGroupSubmitInfoKHR(VkDeviceGroupSubmitInfoKHR name);
        VkDeviceGroupSubmitInfoKHR deserialize_VkDeviceGroupSubmitInfoKHR(object &name);
    

        object serialize_VkDeviceGroupBindSparseInfo(VkDeviceGroupBindSparseInfo name);
        VkDeviceGroupBindSparseInfo deserialize_VkDeviceGroupBindSparseInfo(object &name);
    

        object serialize_VkDeviceGroupBindSparseInfoKHR(VkDeviceGroupBindSparseInfoKHR name);
        VkDeviceGroupBindSparseInfoKHR deserialize_VkDeviceGroupBindSparseInfoKHR(object &name);
    

        object serialize_VkDeviceGroupPresentCapabilitiesKHR(VkDeviceGroupPresentCapabilitiesKHR name);
        VkDeviceGroupPresentCapabilitiesKHR deserialize_VkDeviceGroupPresentCapabilitiesKHR(object &name);
    

        object serialize_VkImageSwapchainCreateInfoKHR(VkImageSwapchainCreateInfoKHR name);
        VkImageSwapchainCreateInfoKHR deserialize_VkImageSwapchainCreateInfoKHR(object &name);
    

        object serialize_VkBindImageMemorySwapchainInfoKHR(VkBindImageMemorySwapchainInfoKHR name);
        VkBindImageMemorySwapchainInfoKHR deserialize_VkBindImageMemorySwapchainInfoKHR(object &name);
    

        object serialize_VkAcquireNextImageInfoKHR(VkAcquireNextImageInfoKHR name);
        VkAcquireNextImageInfoKHR deserialize_VkAcquireNextImageInfoKHR(object &name);
    

        object serialize_VkDeviceGroupPresentInfoKHR(VkDeviceGroupPresentInfoKHR name);
        VkDeviceGroupPresentInfoKHR deserialize_VkDeviceGroupPresentInfoKHR(object &name);
    

        object serialize_VkDeviceGroupDeviceCreateInfo(VkDeviceGroupDeviceCreateInfo name);
        VkDeviceGroupDeviceCreateInfo deserialize_VkDeviceGroupDeviceCreateInfo(object &name);
    

        object serialize_VkDeviceGroupDeviceCreateInfoKHR(VkDeviceGroupDeviceCreateInfoKHR name);
        VkDeviceGroupDeviceCreateInfoKHR deserialize_VkDeviceGroupDeviceCreateInfoKHR(object &name);
    

        object serialize_VkDeviceGroupSwapchainCreateInfoKHR(VkDeviceGroupSwapchainCreateInfoKHR name);
        VkDeviceGroupSwapchainCreateInfoKHR deserialize_VkDeviceGroupSwapchainCreateInfoKHR(object &name);
    

        object serialize_VkDescriptorUpdateTemplateEntry(VkDescriptorUpdateTemplateEntry name);
        VkDescriptorUpdateTemplateEntry deserialize_VkDescriptorUpdateTemplateEntry(object &name);
    

        object serialize_VkDescriptorUpdateTemplateEntryKHR(VkDescriptorUpdateTemplateEntryKHR name);
        VkDescriptorUpdateTemplateEntryKHR deserialize_VkDescriptorUpdateTemplateEntryKHR(object &name);
    

        object serialize_VkDescriptorUpdateTemplateCreateInfo(VkDescriptorUpdateTemplateCreateInfo name);
        VkDescriptorUpdateTemplateCreateInfo deserialize_VkDescriptorUpdateTemplateCreateInfo(object &name);
    

        object serialize_VkDescriptorUpdateTemplateCreateInfoKHR(VkDescriptorUpdateTemplateCreateInfoKHR name);
        VkDescriptorUpdateTemplateCreateInfoKHR deserialize_VkDescriptorUpdateTemplateCreateInfoKHR(object &name);
    

        object serialize_VkXYColorEXT(VkXYColorEXT name);
        VkXYColorEXT deserialize_VkXYColorEXT(object &name);
    

        object serialize_VkPhysicalDevicePresentIdFeaturesKHR(VkPhysicalDevicePresentIdFeaturesKHR name);
        VkPhysicalDevicePresentIdFeaturesKHR deserialize_VkPhysicalDevicePresentIdFeaturesKHR(object &name);
    

        object serialize_VkPresentIdKHR(VkPresentIdKHR name);
        VkPresentIdKHR deserialize_VkPresentIdKHR(object &name);
    

        object serialize_VkPhysicalDevicePresentWaitFeaturesKHR(VkPhysicalDevicePresentWaitFeaturesKHR name);
        VkPhysicalDevicePresentWaitFeaturesKHR deserialize_VkPhysicalDevicePresentWaitFeaturesKHR(object &name);
    

        object serialize_VkHdrMetadataEXT(VkHdrMetadataEXT name);
        VkHdrMetadataEXT deserialize_VkHdrMetadataEXT(object &name);
    

        object serialize_VkDisplayNativeHdrSurfaceCapabilitiesAMD(VkDisplayNativeHdrSurfaceCapabilitiesAMD name);
        VkDisplayNativeHdrSurfaceCapabilitiesAMD deserialize_VkDisplayNativeHdrSurfaceCapabilitiesAMD(object &name);
    

        object serialize_VkSwapchainDisplayNativeHdrCreateInfoAMD(VkSwapchainDisplayNativeHdrCreateInfoAMD name);
        VkSwapchainDisplayNativeHdrCreateInfoAMD deserialize_VkSwapchainDisplayNativeHdrCreateInfoAMD(object &name);
    

        object serialize_VkRefreshCycleDurationGOOGLE(VkRefreshCycleDurationGOOGLE name);
        VkRefreshCycleDurationGOOGLE deserialize_VkRefreshCycleDurationGOOGLE(object &name);
    

        object serialize_VkPastPresentationTimingGOOGLE(VkPastPresentationTimingGOOGLE name);
        VkPastPresentationTimingGOOGLE deserialize_VkPastPresentationTimingGOOGLE(object &name);
    

        object serialize_VkPresentTimesInfoGOOGLE(VkPresentTimesInfoGOOGLE name);
        VkPresentTimesInfoGOOGLE deserialize_VkPresentTimesInfoGOOGLE(object &name);
    

        object serialize_VkPresentTimeGOOGLE(VkPresentTimeGOOGLE name);
        VkPresentTimeGOOGLE deserialize_VkPresentTimeGOOGLE(object &name);
    

        object serialize_VkViewportWScalingNV(VkViewportWScalingNV name);
        VkViewportWScalingNV deserialize_VkViewportWScalingNV(object &name);
    

        object serialize_VkPipelineViewportWScalingStateCreateInfoNV(VkPipelineViewportWScalingStateCreateInfoNV name);
        VkPipelineViewportWScalingStateCreateInfoNV deserialize_VkPipelineViewportWScalingStateCreateInfoNV(object &name);
    

        object serialize_VkViewportSwizzleNV(VkViewportSwizzleNV name);
        VkViewportSwizzleNV deserialize_VkViewportSwizzleNV(object &name);
    

        object serialize_VkPipelineViewportSwizzleStateCreateInfoNV(VkPipelineViewportSwizzleStateCreateInfoNV name);
        VkPipelineViewportSwizzleStateCreateInfoNV deserialize_VkPipelineViewportSwizzleStateCreateInfoNV(object &name);
    

        object serialize_VkPhysicalDeviceDiscardRectanglePropertiesEXT(VkPhysicalDeviceDiscardRectanglePropertiesEXT name);
        VkPhysicalDeviceDiscardRectanglePropertiesEXT deserialize_VkPhysicalDeviceDiscardRectanglePropertiesEXT(object &name);
    

        object serialize_VkPipelineDiscardRectangleStateCreateInfoEXT(VkPipelineDiscardRectangleStateCreateInfoEXT name);
        VkPipelineDiscardRectangleStateCreateInfoEXT deserialize_VkPipelineDiscardRectangleStateCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX name);
        VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX deserialize_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(object &name);
    

        object serialize_VkInputAttachmentAspectReference(VkInputAttachmentAspectReference name);
        VkInputAttachmentAspectReference deserialize_VkInputAttachmentAspectReference(object &name);
    

        object serialize_VkInputAttachmentAspectReferenceKHR(VkInputAttachmentAspectReferenceKHR name);
        VkInputAttachmentAspectReferenceKHR deserialize_VkInputAttachmentAspectReferenceKHR(object &name);
    

        object serialize_VkRenderPassInputAttachmentAspectCreateInfo(VkRenderPassInputAttachmentAspectCreateInfo name);
        VkRenderPassInputAttachmentAspectCreateInfo deserialize_VkRenderPassInputAttachmentAspectCreateInfo(object &name);
    

        object serialize_VkRenderPassInputAttachmentAspectCreateInfoKHR(VkRenderPassInputAttachmentAspectCreateInfoKHR name);
        VkRenderPassInputAttachmentAspectCreateInfoKHR deserialize_VkRenderPassInputAttachmentAspectCreateInfoKHR(object &name);
    

        object serialize_VkPhysicalDeviceSurfaceInfo2KHR(VkPhysicalDeviceSurfaceInfo2KHR name);
        VkPhysicalDeviceSurfaceInfo2KHR deserialize_VkPhysicalDeviceSurfaceInfo2KHR(object &name);
    

        object serialize_VkSurfaceCapabilities2KHR(VkSurfaceCapabilities2KHR name);
        VkSurfaceCapabilities2KHR deserialize_VkSurfaceCapabilities2KHR(object &name);
    

        object serialize_VkSurfaceFormat2KHR(VkSurfaceFormat2KHR name);
        VkSurfaceFormat2KHR deserialize_VkSurfaceFormat2KHR(object &name);
    

        object serialize_VkDisplayProperties2KHR(VkDisplayProperties2KHR name);
        VkDisplayProperties2KHR deserialize_VkDisplayProperties2KHR(object &name);
    

        object serialize_VkDisplayPlaneProperties2KHR(VkDisplayPlaneProperties2KHR name);
        VkDisplayPlaneProperties2KHR deserialize_VkDisplayPlaneProperties2KHR(object &name);
    

        object serialize_VkDisplayModeProperties2KHR(VkDisplayModeProperties2KHR name);
        VkDisplayModeProperties2KHR deserialize_VkDisplayModeProperties2KHR(object &name);
    

        object serialize_VkDisplayPlaneInfo2KHR(VkDisplayPlaneInfo2KHR name);
        VkDisplayPlaneInfo2KHR deserialize_VkDisplayPlaneInfo2KHR(object &name);
    

        object serialize_VkDisplayPlaneCapabilities2KHR(VkDisplayPlaneCapabilities2KHR name);
        VkDisplayPlaneCapabilities2KHR deserialize_VkDisplayPlaneCapabilities2KHR(object &name);
    

        object serialize_VkSharedPresentSurfaceCapabilitiesKHR(VkSharedPresentSurfaceCapabilitiesKHR name);
        VkSharedPresentSurfaceCapabilitiesKHR deserialize_VkSharedPresentSurfaceCapabilitiesKHR(object &name);
    

        object serialize_VkPhysicalDevice16BitStorageFeatures(VkPhysicalDevice16BitStorageFeatures name);
        VkPhysicalDevice16BitStorageFeatures deserialize_VkPhysicalDevice16BitStorageFeatures(object &name);
    

        object serialize_VkPhysicalDevice16BitStorageFeaturesKHR(VkPhysicalDevice16BitStorageFeaturesKHR name);
        VkPhysicalDevice16BitStorageFeaturesKHR deserialize_VkPhysicalDevice16BitStorageFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceSubgroupProperties(VkPhysicalDeviceSubgroupProperties name);
        VkPhysicalDeviceSubgroupProperties deserialize_VkPhysicalDeviceSubgroupProperties(object &name);
    

        object serialize_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures name);
        VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures deserialize_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures(object &name);
    

        object serialize_VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR(VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR name);
        VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR deserialize_VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR(object &name);
    

        object serialize_VkBufferMemoryRequirementsInfo2(VkBufferMemoryRequirementsInfo2 name);
        VkBufferMemoryRequirementsInfo2 deserialize_VkBufferMemoryRequirementsInfo2(object &name);
    

        object serialize_VkBufferMemoryRequirementsInfo2KHR(VkBufferMemoryRequirementsInfo2KHR name);
        VkBufferMemoryRequirementsInfo2KHR deserialize_VkBufferMemoryRequirementsInfo2KHR(object &name);
    

        object serialize_VkDeviceBufferMemoryRequirements(VkDeviceBufferMemoryRequirements name);
        VkDeviceBufferMemoryRequirements deserialize_VkDeviceBufferMemoryRequirements(object &name);
    

        object serialize_VkDeviceBufferMemoryRequirementsKHR(VkDeviceBufferMemoryRequirementsKHR name);
        VkDeviceBufferMemoryRequirementsKHR deserialize_VkDeviceBufferMemoryRequirementsKHR(object &name);
    

        object serialize_VkImageMemoryRequirementsInfo2(VkImageMemoryRequirementsInfo2 name);
        VkImageMemoryRequirementsInfo2 deserialize_VkImageMemoryRequirementsInfo2(object &name);
    

        object serialize_VkImageMemoryRequirementsInfo2KHR(VkImageMemoryRequirementsInfo2KHR name);
        VkImageMemoryRequirementsInfo2KHR deserialize_VkImageMemoryRequirementsInfo2KHR(object &name);
    

        object serialize_VkImageSparseMemoryRequirementsInfo2(VkImageSparseMemoryRequirementsInfo2 name);
        VkImageSparseMemoryRequirementsInfo2 deserialize_VkImageSparseMemoryRequirementsInfo2(object &name);
    

        object serialize_VkImageSparseMemoryRequirementsInfo2KHR(VkImageSparseMemoryRequirementsInfo2KHR name);
        VkImageSparseMemoryRequirementsInfo2KHR deserialize_VkImageSparseMemoryRequirementsInfo2KHR(object &name);
    

        object serialize_VkDeviceImageMemoryRequirements(VkDeviceImageMemoryRequirements name);
        VkDeviceImageMemoryRequirements deserialize_VkDeviceImageMemoryRequirements(object &name);
    

        object serialize_VkDeviceImageMemoryRequirementsKHR(VkDeviceImageMemoryRequirementsKHR name);
        VkDeviceImageMemoryRequirementsKHR deserialize_VkDeviceImageMemoryRequirementsKHR(object &name);
    

        object serialize_VkMemoryRequirements2(VkMemoryRequirements2 name);
        VkMemoryRequirements2 deserialize_VkMemoryRequirements2(object &name);
    

        object serialize_VkMemoryRequirements2KHR(VkMemoryRequirements2KHR name);
        VkMemoryRequirements2KHR deserialize_VkMemoryRequirements2KHR(object &name);
    

        object serialize_VkSparseImageMemoryRequirements2(VkSparseImageMemoryRequirements2 name);
        VkSparseImageMemoryRequirements2 deserialize_VkSparseImageMemoryRequirements2(object &name);
    

        object serialize_VkSparseImageMemoryRequirements2KHR(VkSparseImageMemoryRequirements2KHR name);
        VkSparseImageMemoryRequirements2KHR deserialize_VkSparseImageMemoryRequirements2KHR(object &name);
    

        object serialize_VkPhysicalDevicePointClippingProperties(VkPhysicalDevicePointClippingProperties name);
        VkPhysicalDevicePointClippingProperties deserialize_VkPhysicalDevicePointClippingProperties(object &name);
    

        object serialize_VkPhysicalDevicePointClippingPropertiesKHR(VkPhysicalDevicePointClippingPropertiesKHR name);
        VkPhysicalDevicePointClippingPropertiesKHR deserialize_VkPhysicalDevicePointClippingPropertiesKHR(object &name);
    

        object serialize_VkMemoryDedicatedRequirements(VkMemoryDedicatedRequirements name);
        VkMemoryDedicatedRequirements deserialize_VkMemoryDedicatedRequirements(object &name);
    

        object serialize_VkMemoryDedicatedRequirementsKHR(VkMemoryDedicatedRequirementsKHR name);
        VkMemoryDedicatedRequirementsKHR deserialize_VkMemoryDedicatedRequirementsKHR(object &name);
    

        object serialize_VkMemoryDedicatedAllocateInfo(VkMemoryDedicatedAllocateInfo name);
        VkMemoryDedicatedAllocateInfo deserialize_VkMemoryDedicatedAllocateInfo(object &name);
    

        object serialize_VkMemoryDedicatedAllocateInfoKHR(VkMemoryDedicatedAllocateInfoKHR name);
        VkMemoryDedicatedAllocateInfoKHR deserialize_VkMemoryDedicatedAllocateInfoKHR(object &name);
    

        object serialize_VkImageViewUsageCreateInfo(VkImageViewUsageCreateInfo name);
        VkImageViewUsageCreateInfo deserialize_VkImageViewUsageCreateInfo(object &name);
    

        object serialize_VkImageViewSlicedCreateInfoEXT(VkImageViewSlicedCreateInfoEXT name);
        VkImageViewSlicedCreateInfoEXT deserialize_VkImageViewSlicedCreateInfoEXT(object &name);
    

        object serialize_VkImageViewUsageCreateInfoKHR(VkImageViewUsageCreateInfoKHR name);
        VkImageViewUsageCreateInfoKHR deserialize_VkImageViewUsageCreateInfoKHR(object &name);
    

        object serialize_VkPipelineTessellationDomainOriginStateCreateInfo(VkPipelineTessellationDomainOriginStateCreateInfo name);
        VkPipelineTessellationDomainOriginStateCreateInfo deserialize_VkPipelineTessellationDomainOriginStateCreateInfo(object &name);
    

        object serialize_VkPipelineTessellationDomainOriginStateCreateInfoKHR(VkPipelineTessellationDomainOriginStateCreateInfoKHR name);
        VkPipelineTessellationDomainOriginStateCreateInfoKHR deserialize_VkPipelineTessellationDomainOriginStateCreateInfoKHR(object &name);
    

        object serialize_VkSamplerYcbcrConversionInfo(VkSamplerYcbcrConversionInfo name);
        VkSamplerYcbcrConversionInfo deserialize_VkSamplerYcbcrConversionInfo(object &name);
    

        object serialize_VkSamplerYcbcrConversionInfoKHR(VkSamplerYcbcrConversionInfoKHR name);
        VkSamplerYcbcrConversionInfoKHR deserialize_VkSamplerYcbcrConversionInfoKHR(object &name);
    

        object serialize_VkSamplerYcbcrConversionCreateInfo(VkSamplerYcbcrConversionCreateInfo name);
        VkSamplerYcbcrConversionCreateInfo deserialize_VkSamplerYcbcrConversionCreateInfo(object &name);
    

        object serialize_VkSamplerYcbcrConversionCreateInfoKHR(VkSamplerYcbcrConversionCreateInfoKHR name);
        VkSamplerYcbcrConversionCreateInfoKHR deserialize_VkSamplerYcbcrConversionCreateInfoKHR(object &name);
    

        object serialize_VkBindImagePlaneMemoryInfo(VkBindImagePlaneMemoryInfo name);
        VkBindImagePlaneMemoryInfo deserialize_VkBindImagePlaneMemoryInfo(object &name);
    

        object serialize_VkBindImagePlaneMemoryInfoKHR(VkBindImagePlaneMemoryInfoKHR name);
        VkBindImagePlaneMemoryInfoKHR deserialize_VkBindImagePlaneMemoryInfoKHR(object &name);
    

        object serialize_VkImagePlaneMemoryRequirementsInfo(VkImagePlaneMemoryRequirementsInfo name);
        VkImagePlaneMemoryRequirementsInfo deserialize_VkImagePlaneMemoryRequirementsInfo(object &name);
    

        object serialize_VkImagePlaneMemoryRequirementsInfoKHR(VkImagePlaneMemoryRequirementsInfoKHR name);
        VkImagePlaneMemoryRequirementsInfoKHR deserialize_VkImagePlaneMemoryRequirementsInfoKHR(object &name);
    

        object serialize_VkPhysicalDeviceSamplerYcbcrConversionFeatures(VkPhysicalDeviceSamplerYcbcrConversionFeatures name);
        VkPhysicalDeviceSamplerYcbcrConversionFeatures deserialize_VkPhysicalDeviceSamplerYcbcrConversionFeatures(object &name);
    

        object serialize_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR(VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR name);
        VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR deserialize_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR(object &name);
    

        object serialize_VkSamplerYcbcrConversionImageFormatProperties(VkSamplerYcbcrConversionImageFormatProperties name);
        VkSamplerYcbcrConversionImageFormatProperties deserialize_VkSamplerYcbcrConversionImageFormatProperties(object &name);
    

        object serialize_VkSamplerYcbcrConversionImageFormatPropertiesKHR(VkSamplerYcbcrConversionImageFormatPropertiesKHR name);
        VkSamplerYcbcrConversionImageFormatPropertiesKHR deserialize_VkSamplerYcbcrConversionImageFormatPropertiesKHR(object &name);
    

        object serialize_VkTextureLODGatherFormatPropertiesAMD(VkTextureLODGatherFormatPropertiesAMD name);
        VkTextureLODGatherFormatPropertiesAMD deserialize_VkTextureLODGatherFormatPropertiesAMD(object &name);
    

        object serialize_VkConditionalRenderingBeginInfoEXT(VkConditionalRenderingBeginInfoEXT name);
        VkConditionalRenderingBeginInfoEXT deserialize_VkConditionalRenderingBeginInfoEXT(object &name);
    

        object serialize_VkProtectedSubmitInfo(VkProtectedSubmitInfo name);
        VkProtectedSubmitInfo deserialize_VkProtectedSubmitInfo(object &name);
    

        object serialize_VkPhysicalDeviceProtectedMemoryFeatures(VkPhysicalDeviceProtectedMemoryFeatures name);
        VkPhysicalDeviceProtectedMemoryFeatures deserialize_VkPhysicalDeviceProtectedMemoryFeatures(object &name);
    

        object serialize_VkPhysicalDeviceProtectedMemoryProperties(VkPhysicalDeviceProtectedMemoryProperties name);
        VkPhysicalDeviceProtectedMemoryProperties deserialize_VkPhysicalDeviceProtectedMemoryProperties(object &name);
    

        object serialize_VkDeviceQueueInfo2(VkDeviceQueueInfo2 name);
        VkDeviceQueueInfo2 deserialize_VkDeviceQueueInfo2(object &name);
    

        object serialize_VkPipelineCoverageToColorStateCreateInfoNV(VkPipelineCoverageToColorStateCreateInfoNV name);
        VkPipelineCoverageToColorStateCreateInfoNV deserialize_VkPipelineCoverageToColorStateCreateInfoNV(object &name);
    

        object serialize_VkPhysicalDeviceSamplerFilterMinmaxProperties(VkPhysicalDeviceSamplerFilterMinmaxProperties name);
        VkPhysicalDeviceSamplerFilterMinmaxProperties deserialize_VkPhysicalDeviceSamplerFilterMinmaxProperties(object &name);
    

        object serialize_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT name);
        VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT deserialize_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(object &name);
    

        object serialize_VkSampleLocationEXT(VkSampleLocationEXT name);
        VkSampleLocationEXT deserialize_VkSampleLocationEXT(object &name);
    

        object serialize_VkSampleLocationsInfoEXT(VkSampleLocationsInfoEXT name);
        VkSampleLocationsInfoEXT deserialize_VkSampleLocationsInfoEXT(object &name);
    

        object serialize_VkAttachmentSampleLocationsEXT(VkAttachmentSampleLocationsEXT name);
        VkAttachmentSampleLocationsEXT deserialize_VkAttachmentSampleLocationsEXT(object &name);
    

        object serialize_VkSubpassSampleLocationsEXT(VkSubpassSampleLocationsEXT name);
        VkSubpassSampleLocationsEXT deserialize_VkSubpassSampleLocationsEXT(object &name);
    

        object serialize_VkRenderPassSampleLocationsBeginInfoEXT(VkRenderPassSampleLocationsBeginInfoEXT name);
        VkRenderPassSampleLocationsBeginInfoEXT deserialize_VkRenderPassSampleLocationsBeginInfoEXT(object &name);
    

        object serialize_VkPipelineSampleLocationsStateCreateInfoEXT(VkPipelineSampleLocationsStateCreateInfoEXT name);
        VkPipelineSampleLocationsStateCreateInfoEXT deserialize_VkPipelineSampleLocationsStateCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceSampleLocationsPropertiesEXT(VkPhysicalDeviceSampleLocationsPropertiesEXT name);
        VkPhysicalDeviceSampleLocationsPropertiesEXT deserialize_VkPhysicalDeviceSampleLocationsPropertiesEXT(object &name);
    

        object serialize_VkMultisamplePropertiesEXT(VkMultisamplePropertiesEXT name);
        VkMultisamplePropertiesEXT deserialize_VkMultisamplePropertiesEXT(object &name);
    

        object serialize_VkSamplerReductionModeCreateInfo(VkSamplerReductionModeCreateInfo name);
        VkSamplerReductionModeCreateInfo deserialize_VkSamplerReductionModeCreateInfo(object &name);
    

        object serialize_VkSamplerReductionModeCreateInfoEXT(VkSamplerReductionModeCreateInfoEXT name);
        VkSamplerReductionModeCreateInfoEXT deserialize_VkSamplerReductionModeCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT name);
        VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT deserialize_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceMultiDrawFeaturesEXT(VkPhysicalDeviceMultiDrawFeaturesEXT name);
        VkPhysicalDeviceMultiDrawFeaturesEXT deserialize_VkPhysicalDeviceMultiDrawFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT name);
        VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT deserialize_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(object &name);
    

        object serialize_VkPipelineColorBlendAdvancedStateCreateInfoEXT(VkPipelineColorBlendAdvancedStateCreateInfoEXT name);
        VkPipelineColorBlendAdvancedStateCreateInfoEXT deserialize_VkPipelineColorBlendAdvancedStateCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceInlineUniformBlockFeatures(VkPhysicalDeviceInlineUniformBlockFeatures name);
        VkPhysicalDeviceInlineUniformBlockFeatures deserialize_VkPhysicalDeviceInlineUniformBlockFeatures(object &name);
    

        object serialize_VkPhysicalDeviceInlineUniformBlockFeaturesEXT(VkPhysicalDeviceInlineUniformBlockFeaturesEXT name);
        VkPhysicalDeviceInlineUniformBlockFeaturesEXT deserialize_VkPhysicalDeviceInlineUniformBlockFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceInlineUniformBlockProperties(VkPhysicalDeviceInlineUniformBlockProperties name);
        VkPhysicalDeviceInlineUniformBlockProperties deserialize_VkPhysicalDeviceInlineUniformBlockProperties(object &name);
    

        object serialize_VkPhysicalDeviceInlineUniformBlockPropertiesEXT(VkPhysicalDeviceInlineUniformBlockPropertiesEXT name);
        VkPhysicalDeviceInlineUniformBlockPropertiesEXT deserialize_VkPhysicalDeviceInlineUniformBlockPropertiesEXT(object &name);
    

        object serialize_VkWriteDescriptorSetInlineUniformBlock(VkWriteDescriptorSetInlineUniformBlock name);
        VkWriteDescriptorSetInlineUniformBlock deserialize_VkWriteDescriptorSetInlineUniformBlock(object &name);
    

        object serialize_VkWriteDescriptorSetInlineUniformBlockEXT(VkWriteDescriptorSetInlineUniformBlockEXT name);
        VkWriteDescriptorSetInlineUniformBlockEXT deserialize_VkWriteDescriptorSetInlineUniformBlockEXT(object &name);
    

        object serialize_VkDescriptorPoolInlineUniformBlockCreateInfo(VkDescriptorPoolInlineUniformBlockCreateInfo name);
        VkDescriptorPoolInlineUniformBlockCreateInfo deserialize_VkDescriptorPoolInlineUniformBlockCreateInfo(object &name);
    

        object serialize_VkDescriptorPoolInlineUniformBlockCreateInfoEXT(VkDescriptorPoolInlineUniformBlockCreateInfoEXT name);
        VkDescriptorPoolInlineUniformBlockCreateInfoEXT deserialize_VkDescriptorPoolInlineUniformBlockCreateInfoEXT(object &name);
    

        object serialize_VkPipelineCoverageModulationStateCreateInfoNV(VkPipelineCoverageModulationStateCreateInfoNV name);
        VkPipelineCoverageModulationStateCreateInfoNV deserialize_VkPipelineCoverageModulationStateCreateInfoNV(object &name);
    

        object serialize_VkImageFormatListCreateInfo(VkImageFormatListCreateInfo name);
        VkImageFormatListCreateInfo deserialize_VkImageFormatListCreateInfo(object &name);
    

        object serialize_VkImageFormatListCreateInfoKHR(VkImageFormatListCreateInfoKHR name);
        VkImageFormatListCreateInfoKHR deserialize_VkImageFormatListCreateInfoKHR(object &name);
    

        object serialize_VkValidationCacheCreateInfoEXT(VkValidationCacheCreateInfoEXT name);
        VkValidationCacheCreateInfoEXT deserialize_VkValidationCacheCreateInfoEXT(object &name);
    

        object serialize_VkShaderModuleValidationCacheCreateInfoEXT(VkShaderModuleValidationCacheCreateInfoEXT name);
        VkShaderModuleValidationCacheCreateInfoEXT deserialize_VkShaderModuleValidationCacheCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceMaintenance3Properties(VkPhysicalDeviceMaintenance3Properties name);
        VkPhysicalDeviceMaintenance3Properties deserialize_VkPhysicalDeviceMaintenance3Properties(object &name);
    

        object serialize_VkPhysicalDeviceMaintenance3PropertiesKHR(VkPhysicalDeviceMaintenance3PropertiesKHR name);
        VkPhysicalDeviceMaintenance3PropertiesKHR deserialize_VkPhysicalDeviceMaintenance3PropertiesKHR(object &name);
    

        object serialize_VkPhysicalDeviceMaintenance4Features(VkPhysicalDeviceMaintenance4Features name);
        VkPhysicalDeviceMaintenance4Features deserialize_VkPhysicalDeviceMaintenance4Features(object &name);
    

        object serialize_VkPhysicalDeviceMaintenance4FeaturesKHR(VkPhysicalDeviceMaintenance4FeaturesKHR name);
        VkPhysicalDeviceMaintenance4FeaturesKHR deserialize_VkPhysicalDeviceMaintenance4FeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceMaintenance4Properties(VkPhysicalDeviceMaintenance4Properties name);
        VkPhysicalDeviceMaintenance4Properties deserialize_VkPhysicalDeviceMaintenance4Properties(object &name);
    

        object serialize_VkPhysicalDeviceMaintenance4PropertiesKHR(VkPhysicalDeviceMaintenance4PropertiesKHR name);
        VkPhysicalDeviceMaintenance4PropertiesKHR deserialize_VkPhysicalDeviceMaintenance4PropertiesKHR(object &name);
    

        object serialize_VkPhysicalDeviceMaintenance5FeaturesKHR(VkPhysicalDeviceMaintenance5FeaturesKHR name);
        VkPhysicalDeviceMaintenance5FeaturesKHR deserialize_VkPhysicalDeviceMaintenance5FeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceMaintenance5PropertiesKHR(VkPhysicalDeviceMaintenance5PropertiesKHR name);
        VkPhysicalDeviceMaintenance5PropertiesKHR deserialize_VkPhysicalDeviceMaintenance5PropertiesKHR(object &name);
    

        object serialize_VkRenderingAreaInfoKHR(VkRenderingAreaInfoKHR name);
        VkRenderingAreaInfoKHR deserialize_VkRenderingAreaInfoKHR(object &name);
    

        object serialize_VkDescriptorSetLayoutSupport(VkDescriptorSetLayoutSupport name);
        VkDescriptorSetLayoutSupport deserialize_VkDescriptorSetLayoutSupport(object &name);
    

        object serialize_VkDescriptorSetLayoutSupportKHR(VkDescriptorSetLayoutSupportKHR name);
        VkDescriptorSetLayoutSupportKHR deserialize_VkDescriptorSetLayoutSupportKHR(object &name);
    

        object serialize_VkPhysicalDeviceShaderDrawParametersFeatures(VkPhysicalDeviceShaderDrawParametersFeatures name);
        VkPhysicalDeviceShaderDrawParametersFeatures deserialize_VkPhysicalDeviceShaderDrawParametersFeatures(object &name);
    

        object serialize_VkPhysicalDeviceShaderDrawParameterFeatures(VkPhysicalDeviceShaderDrawParameterFeatures name);
        VkPhysicalDeviceShaderDrawParameterFeatures deserialize_VkPhysicalDeviceShaderDrawParameterFeatures(object &name);
    

        object serialize_VkPhysicalDeviceShaderFloat16Int8Features(VkPhysicalDeviceShaderFloat16Int8Features name);
        VkPhysicalDeviceShaderFloat16Int8Features deserialize_VkPhysicalDeviceShaderFloat16Int8Features(object &name);
    

        object serialize_VkPhysicalDeviceShaderFloat16Int8FeaturesKHR(VkPhysicalDeviceShaderFloat16Int8FeaturesKHR name);
        VkPhysicalDeviceShaderFloat16Int8FeaturesKHR deserialize_VkPhysicalDeviceShaderFloat16Int8FeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceFloat16Int8FeaturesKHR(VkPhysicalDeviceFloat16Int8FeaturesKHR name);
        VkPhysicalDeviceFloat16Int8FeaturesKHR deserialize_VkPhysicalDeviceFloat16Int8FeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceFloatControlsProperties(VkPhysicalDeviceFloatControlsProperties name);
        VkPhysicalDeviceFloatControlsProperties deserialize_VkPhysicalDeviceFloatControlsProperties(object &name);
    

        object serialize_VkPhysicalDeviceFloatControlsPropertiesKHR(VkPhysicalDeviceFloatControlsPropertiesKHR name);
        VkPhysicalDeviceFloatControlsPropertiesKHR deserialize_VkPhysicalDeviceFloatControlsPropertiesKHR(object &name);
    

        object serialize_VkPhysicalDeviceHostQueryResetFeatures(VkPhysicalDeviceHostQueryResetFeatures name);
        VkPhysicalDeviceHostQueryResetFeatures deserialize_VkPhysicalDeviceHostQueryResetFeatures(object &name);
    

        object serialize_VkPhysicalDeviceHostQueryResetFeaturesEXT(VkPhysicalDeviceHostQueryResetFeaturesEXT name);
        VkPhysicalDeviceHostQueryResetFeaturesEXT deserialize_VkPhysicalDeviceHostQueryResetFeaturesEXT(object &name);
    

        object serialize_VkShaderResourceUsageAMD(VkShaderResourceUsageAMD name);
        VkShaderResourceUsageAMD deserialize_VkShaderResourceUsageAMD(object &name);
    

        object serialize_VkShaderStatisticsInfoAMD(VkShaderStatisticsInfoAMD name);
        VkShaderStatisticsInfoAMD deserialize_VkShaderStatisticsInfoAMD(object &name);
    

        object serialize_VkDeviceQueueGlobalPriorityCreateInfoKHR(VkDeviceQueueGlobalPriorityCreateInfoKHR name);
        VkDeviceQueueGlobalPriorityCreateInfoKHR deserialize_VkDeviceQueueGlobalPriorityCreateInfoKHR(object &name);
    

        object serialize_VkDeviceQueueGlobalPriorityCreateInfoEXT(VkDeviceQueueGlobalPriorityCreateInfoEXT name);
        VkDeviceQueueGlobalPriorityCreateInfoEXT deserialize_VkDeviceQueueGlobalPriorityCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR(VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR name);
        VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR deserialize_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT(VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT name);
        VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT deserialize_VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT(object &name);
    

        object serialize_VkQueueFamilyGlobalPriorityPropertiesKHR(VkQueueFamilyGlobalPriorityPropertiesKHR name);
        VkQueueFamilyGlobalPriorityPropertiesKHR deserialize_VkQueueFamilyGlobalPriorityPropertiesKHR(object &name);
    

        object serialize_VkQueueFamilyGlobalPriorityPropertiesEXT(VkQueueFamilyGlobalPriorityPropertiesEXT name);
        VkQueueFamilyGlobalPriorityPropertiesEXT deserialize_VkQueueFamilyGlobalPriorityPropertiesEXT(object &name);
    

        object serialize_VkDebugUtilsObjectNameInfoEXT(VkDebugUtilsObjectNameInfoEXT name);
        VkDebugUtilsObjectNameInfoEXT deserialize_VkDebugUtilsObjectNameInfoEXT(object &name);
    

        object serialize_VkDebugUtilsObjectTagInfoEXT(VkDebugUtilsObjectTagInfoEXT name);
        VkDebugUtilsObjectTagInfoEXT deserialize_VkDebugUtilsObjectTagInfoEXT(object &name);
    

        object serialize_VkDebugUtilsLabelEXT(VkDebugUtilsLabelEXT name);
        VkDebugUtilsLabelEXT deserialize_VkDebugUtilsLabelEXT(object &name);
    

        object serialize_VkDebugUtilsMessengerCreateInfoEXT(VkDebugUtilsMessengerCreateInfoEXT name);
        VkDebugUtilsMessengerCreateInfoEXT deserialize_VkDebugUtilsMessengerCreateInfoEXT(object &name);
    

        object serialize_VkDebugUtilsMessengerCallbackDataEXT(VkDebugUtilsMessengerCallbackDataEXT name);
        VkDebugUtilsMessengerCallbackDataEXT deserialize_VkDebugUtilsMessengerCallbackDataEXT(object &name);
    

        object serialize_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT(VkPhysicalDeviceDeviceMemoryReportFeaturesEXT name);
        VkPhysicalDeviceDeviceMemoryReportFeaturesEXT deserialize_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT(object &name);
    

        object serialize_VkDeviceDeviceMemoryReportCreateInfoEXT(VkDeviceDeviceMemoryReportCreateInfoEXT name);
        VkDeviceDeviceMemoryReportCreateInfoEXT deserialize_VkDeviceDeviceMemoryReportCreateInfoEXT(object &name);
    

        object serialize_VkDeviceMemoryReportCallbackDataEXT(VkDeviceMemoryReportCallbackDataEXT name);
        VkDeviceMemoryReportCallbackDataEXT deserialize_VkDeviceMemoryReportCallbackDataEXT(object &name);
    

        object serialize_VkImportMemoryHostPointerInfoEXT(VkImportMemoryHostPointerInfoEXT name);
        VkImportMemoryHostPointerInfoEXT deserialize_VkImportMemoryHostPointerInfoEXT(object &name);
    

        object serialize_VkMemoryHostPointerPropertiesEXT(VkMemoryHostPointerPropertiesEXT name);
        VkMemoryHostPointerPropertiesEXT deserialize_VkMemoryHostPointerPropertiesEXT(object &name);
    

        object serialize_VkPhysicalDeviceExternalMemoryHostPropertiesEXT(VkPhysicalDeviceExternalMemoryHostPropertiesEXT name);
        VkPhysicalDeviceExternalMemoryHostPropertiesEXT deserialize_VkPhysicalDeviceExternalMemoryHostPropertiesEXT(object &name);
    

        object serialize_VkPhysicalDeviceConservativeRasterizationPropertiesEXT(VkPhysicalDeviceConservativeRasterizationPropertiesEXT name);
        VkPhysicalDeviceConservativeRasterizationPropertiesEXT deserialize_VkPhysicalDeviceConservativeRasterizationPropertiesEXT(object &name);
    

        object serialize_VkCalibratedTimestampInfoEXT(VkCalibratedTimestampInfoEXT name);
        VkCalibratedTimestampInfoEXT deserialize_VkCalibratedTimestampInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceShaderCorePropertiesAMD(VkPhysicalDeviceShaderCorePropertiesAMD name);
        VkPhysicalDeviceShaderCorePropertiesAMD deserialize_VkPhysicalDeviceShaderCorePropertiesAMD(object &name);
    

        object serialize_VkPhysicalDeviceShaderCoreProperties2AMD(VkPhysicalDeviceShaderCoreProperties2AMD name);
        VkPhysicalDeviceShaderCoreProperties2AMD deserialize_VkPhysicalDeviceShaderCoreProperties2AMD(object &name);
    

        object serialize_VkPipelineRasterizationConservativeStateCreateInfoEXT(VkPipelineRasterizationConservativeStateCreateInfoEXT name);
        VkPipelineRasterizationConservativeStateCreateInfoEXT deserialize_VkPipelineRasterizationConservativeStateCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceDescriptorIndexingFeatures(VkPhysicalDeviceDescriptorIndexingFeatures name);
        VkPhysicalDeviceDescriptorIndexingFeatures deserialize_VkPhysicalDeviceDescriptorIndexingFeatures(object &name);
    

        object serialize_VkPhysicalDeviceDescriptorIndexingFeaturesEXT(VkPhysicalDeviceDescriptorIndexingFeaturesEXT name);
        VkPhysicalDeviceDescriptorIndexingFeaturesEXT deserialize_VkPhysicalDeviceDescriptorIndexingFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceDescriptorIndexingProperties(VkPhysicalDeviceDescriptorIndexingProperties name);
        VkPhysicalDeviceDescriptorIndexingProperties deserialize_VkPhysicalDeviceDescriptorIndexingProperties(object &name);
    

        object serialize_VkPhysicalDeviceDescriptorIndexingPropertiesEXT(VkPhysicalDeviceDescriptorIndexingPropertiesEXT name);
        VkPhysicalDeviceDescriptorIndexingPropertiesEXT deserialize_VkPhysicalDeviceDescriptorIndexingPropertiesEXT(object &name);
    

        object serialize_VkDescriptorSetLayoutBindingFlagsCreateInfo(VkDescriptorSetLayoutBindingFlagsCreateInfo name);
        VkDescriptorSetLayoutBindingFlagsCreateInfo deserialize_VkDescriptorSetLayoutBindingFlagsCreateInfo(object &name);
    

        object serialize_VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(VkDescriptorSetLayoutBindingFlagsCreateInfoEXT name);
        VkDescriptorSetLayoutBindingFlagsCreateInfoEXT deserialize_VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(object &name);
    

        object serialize_VkDescriptorSetVariableDescriptorCountAllocateInfo(VkDescriptorSetVariableDescriptorCountAllocateInfo name);
        VkDescriptorSetVariableDescriptorCountAllocateInfo deserialize_VkDescriptorSetVariableDescriptorCountAllocateInfo(object &name);
    

        object serialize_VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(VkDescriptorSetVariableDescriptorCountAllocateInfoEXT name);
        VkDescriptorSetVariableDescriptorCountAllocateInfoEXT deserialize_VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(object &name);
    

        object serialize_VkDescriptorSetVariableDescriptorCountLayoutSupport(VkDescriptorSetVariableDescriptorCountLayoutSupport name);
        VkDescriptorSetVariableDescriptorCountLayoutSupport deserialize_VkDescriptorSetVariableDescriptorCountLayoutSupport(object &name);
    

        object serialize_VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(VkDescriptorSetVariableDescriptorCountLayoutSupportEXT name);
        VkDescriptorSetVariableDescriptorCountLayoutSupportEXT deserialize_VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(object &name);
    

        object serialize_VkAttachmentDescription2(VkAttachmentDescription2 name);
        VkAttachmentDescription2 deserialize_VkAttachmentDescription2(object &name);
    

        object serialize_VkAttachmentDescription2KHR(VkAttachmentDescription2KHR name);
        VkAttachmentDescription2KHR deserialize_VkAttachmentDescription2KHR(object &name);
    

        object serialize_VkAttachmentReference2(VkAttachmentReference2 name);
        VkAttachmentReference2 deserialize_VkAttachmentReference2(object &name);
    

        object serialize_VkAttachmentReference2KHR(VkAttachmentReference2KHR name);
        VkAttachmentReference2KHR deserialize_VkAttachmentReference2KHR(object &name);
    

        object serialize_VkSubpassDescription2(VkSubpassDescription2 name);
        VkSubpassDescription2 deserialize_VkSubpassDescription2(object &name);
    

        object serialize_VkSubpassDescription2KHR(VkSubpassDescription2KHR name);
        VkSubpassDescription2KHR deserialize_VkSubpassDescription2KHR(object &name);
    

        object serialize_VkSubpassDependency2(VkSubpassDependency2 name);
        VkSubpassDependency2 deserialize_VkSubpassDependency2(object &name);
    

        object serialize_VkSubpassDependency2KHR(VkSubpassDependency2KHR name);
        VkSubpassDependency2KHR deserialize_VkSubpassDependency2KHR(object &name);
    

        object serialize_VkRenderPassCreateInfo2(VkRenderPassCreateInfo2 name);
        VkRenderPassCreateInfo2 deserialize_VkRenderPassCreateInfo2(object &name);
    

        object serialize_VkRenderPassCreateInfo2KHR(VkRenderPassCreateInfo2KHR name);
        VkRenderPassCreateInfo2KHR deserialize_VkRenderPassCreateInfo2KHR(object &name);
    

        object serialize_VkSubpassBeginInfo(VkSubpassBeginInfo name);
        VkSubpassBeginInfo deserialize_VkSubpassBeginInfo(object &name);
    

        object serialize_VkSubpassBeginInfoKHR(VkSubpassBeginInfoKHR name);
        VkSubpassBeginInfoKHR deserialize_VkSubpassBeginInfoKHR(object &name);
    

        object serialize_VkSubpassEndInfo(VkSubpassEndInfo name);
        VkSubpassEndInfo deserialize_VkSubpassEndInfo(object &name);
    

        object serialize_VkSubpassEndInfoKHR(VkSubpassEndInfoKHR name);
        VkSubpassEndInfoKHR deserialize_VkSubpassEndInfoKHR(object &name);
    

        object serialize_VkPhysicalDeviceTimelineSemaphoreFeatures(VkPhysicalDeviceTimelineSemaphoreFeatures name);
        VkPhysicalDeviceTimelineSemaphoreFeatures deserialize_VkPhysicalDeviceTimelineSemaphoreFeatures(object &name);
    

        object serialize_VkPhysicalDeviceTimelineSemaphoreFeaturesKHR(VkPhysicalDeviceTimelineSemaphoreFeaturesKHR name);
        VkPhysicalDeviceTimelineSemaphoreFeaturesKHR deserialize_VkPhysicalDeviceTimelineSemaphoreFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceTimelineSemaphoreProperties(VkPhysicalDeviceTimelineSemaphoreProperties name);
        VkPhysicalDeviceTimelineSemaphoreProperties deserialize_VkPhysicalDeviceTimelineSemaphoreProperties(object &name);
    

        object serialize_VkPhysicalDeviceTimelineSemaphorePropertiesKHR(VkPhysicalDeviceTimelineSemaphorePropertiesKHR name);
        VkPhysicalDeviceTimelineSemaphorePropertiesKHR deserialize_VkPhysicalDeviceTimelineSemaphorePropertiesKHR(object &name);
    

        object serialize_VkSemaphoreTypeCreateInfo(VkSemaphoreTypeCreateInfo name);
        VkSemaphoreTypeCreateInfo deserialize_VkSemaphoreTypeCreateInfo(object &name);
    

        object serialize_VkSemaphoreTypeCreateInfoKHR(VkSemaphoreTypeCreateInfoKHR name);
        VkSemaphoreTypeCreateInfoKHR deserialize_VkSemaphoreTypeCreateInfoKHR(object &name);
    

        object serialize_VkTimelineSemaphoreSubmitInfo(VkTimelineSemaphoreSubmitInfo name);
        VkTimelineSemaphoreSubmitInfo deserialize_VkTimelineSemaphoreSubmitInfo(object &name);
    

        object serialize_VkTimelineSemaphoreSubmitInfoKHR(VkTimelineSemaphoreSubmitInfoKHR name);
        VkTimelineSemaphoreSubmitInfoKHR deserialize_VkTimelineSemaphoreSubmitInfoKHR(object &name);
    

        object serialize_VkSemaphoreWaitInfo(VkSemaphoreWaitInfo name);
        VkSemaphoreWaitInfo deserialize_VkSemaphoreWaitInfo(object &name);
    

        object serialize_VkSemaphoreWaitInfoKHR(VkSemaphoreWaitInfoKHR name);
        VkSemaphoreWaitInfoKHR deserialize_VkSemaphoreWaitInfoKHR(object &name);
    

        object serialize_VkSemaphoreSignalInfo(VkSemaphoreSignalInfo name);
        VkSemaphoreSignalInfo deserialize_VkSemaphoreSignalInfo(object &name);
    

        object serialize_VkSemaphoreSignalInfoKHR(VkSemaphoreSignalInfoKHR name);
        VkSemaphoreSignalInfoKHR deserialize_VkSemaphoreSignalInfoKHR(object &name);
    

        object serialize_VkVertexInputBindingDivisorDescriptionEXT(VkVertexInputBindingDivisorDescriptionEXT name);
        VkVertexInputBindingDivisorDescriptionEXT deserialize_VkVertexInputBindingDivisorDescriptionEXT(object &name);
    

        object serialize_VkPipelineVertexInputDivisorStateCreateInfoEXT(VkPipelineVertexInputDivisorStateCreateInfoEXT name);
        VkPipelineVertexInputDivisorStateCreateInfoEXT deserialize_VkPipelineVertexInputDivisorStateCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT name);
        VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT deserialize_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(object &name);
    

        object serialize_VkPhysicalDevicePCIBusInfoPropertiesEXT(VkPhysicalDevicePCIBusInfoPropertiesEXT name);
        VkPhysicalDevicePCIBusInfoPropertiesEXT deserialize_VkPhysicalDevicePCIBusInfoPropertiesEXT(object &name);
    

        object serialize_VkCommandBufferInheritanceConditionalRenderingInfoEXT(VkCommandBufferInheritanceConditionalRenderingInfoEXT name);
        VkCommandBufferInheritanceConditionalRenderingInfoEXT deserialize_VkCommandBufferInheritanceConditionalRenderingInfoEXT(object &name);
    

        object serialize_VkPhysicalDevice8BitStorageFeatures(VkPhysicalDevice8BitStorageFeatures name);
        VkPhysicalDevice8BitStorageFeatures deserialize_VkPhysicalDevice8BitStorageFeatures(object &name);
    

        object serialize_VkPhysicalDevice8BitStorageFeaturesKHR(VkPhysicalDevice8BitStorageFeaturesKHR name);
        VkPhysicalDevice8BitStorageFeaturesKHR deserialize_VkPhysicalDevice8BitStorageFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceConditionalRenderingFeaturesEXT(VkPhysicalDeviceConditionalRenderingFeaturesEXT name);
        VkPhysicalDeviceConditionalRenderingFeaturesEXT deserialize_VkPhysicalDeviceConditionalRenderingFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceVulkanMemoryModelFeatures(VkPhysicalDeviceVulkanMemoryModelFeatures name);
        VkPhysicalDeviceVulkanMemoryModelFeatures deserialize_VkPhysicalDeviceVulkanMemoryModelFeatures(object &name);
    

        object serialize_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR(VkPhysicalDeviceVulkanMemoryModelFeaturesKHR name);
        VkPhysicalDeviceVulkanMemoryModelFeaturesKHR deserialize_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceShaderAtomicInt64Features(VkPhysicalDeviceShaderAtomicInt64Features name);
        VkPhysicalDeviceShaderAtomicInt64Features deserialize_VkPhysicalDeviceShaderAtomicInt64Features(object &name);
    

        object serialize_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR(VkPhysicalDeviceShaderAtomicInt64FeaturesKHR name);
        VkPhysicalDeviceShaderAtomicInt64FeaturesKHR deserialize_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT name);
        VkPhysicalDeviceShaderAtomicFloatFeaturesEXT deserialize_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT name);
        VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT deserialize_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT(VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT name);
        VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT deserialize_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT(object &name);
    

        object serialize_VkQueueFamilyCheckpointPropertiesNV(VkQueueFamilyCheckpointPropertiesNV name);
        VkQueueFamilyCheckpointPropertiesNV deserialize_VkQueueFamilyCheckpointPropertiesNV(object &name);
    

        object serialize_VkCheckpointDataNV(VkCheckpointDataNV name);
        VkCheckpointDataNV deserialize_VkCheckpointDataNV(object &name);
    

        object serialize_VkPhysicalDeviceDepthStencilResolveProperties(VkPhysicalDeviceDepthStencilResolveProperties name);
        VkPhysicalDeviceDepthStencilResolveProperties deserialize_VkPhysicalDeviceDepthStencilResolveProperties(object &name);
    

        object serialize_VkPhysicalDeviceDepthStencilResolvePropertiesKHR(VkPhysicalDeviceDepthStencilResolvePropertiesKHR name);
        VkPhysicalDeviceDepthStencilResolvePropertiesKHR deserialize_VkPhysicalDeviceDepthStencilResolvePropertiesKHR(object &name);
    

        object serialize_VkSubpassDescriptionDepthStencilResolve(VkSubpassDescriptionDepthStencilResolve name);
        VkSubpassDescriptionDepthStencilResolve deserialize_VkSubpassDescriptionDepthStencilResolve(object &name);
    

        object serialize_VkSubpassDescriptionDepthStencilResolveKHR(VkSubpassDescriptionDepthStencilResolveKHR name);
        VkSubpassDescriptionDepthStencilResolveKHR deserialize_VkSubpassDescriptionDepthStencilResolveKHR(object &name);
    

        object serialize_VkImageViewASTCDecodeModeEXT(VkImageViewASTCDecodeModeEXT name);
        VkImageViewASTCDecodeModeEXT deserialize_VkImageViewASTCDecodeModeEXT(object &name);
    

        object serialize_VkPhysicalDeviceASTCDecodeFeaturesEXT(VkPhysicalDeviceASTCDecodeFeaturesEXT name);
        VkPhysicalDeviceASTCDecodeFeaturesEXT deserialize_VkPhysicalDeviceASTCDecodeFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceTransformFeedbackFeaturesEXT(VkPhysicalDeviceTransformFeedbackFeaturesEXT name);
        VkPhysicalDeviceTransformFeedbackFeaturesEXT deserialize_VkPhysicalDeviceTransformFeedbackFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceTransformFeedbackPropertiesEXT(VkPhysicalDeviceTransformFeedbackPropertiesEXT name);
        VkPhysicalDeviceTransformFeedbackPropertiesEXT deserialize_VkPhysicalDeviceTransformFeedbackPropertiesEXT(object &name);
    

        object serialize_VkPipelineRasterizationStateStreamCreateInfoEXT(VkPipelineRasterizationStateStreamCreateInfoEXT name);
        VkPipelineRasterizationStateStreamCreateInfoEXT deserialize_VkPipelineRasterizationStateStreamCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV name);
        VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV deserialize_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV(object &name);
    

        object serialize_VkPipelineRepresentativeFragmentTestStateCreateInfoNV(VkPipelineRepresentativeFragmentTestStateCreateInfoNV name);
        VkPipelineRepresentativeFragmentTestStateCreateInfoNV deserialize_VkPipelineRepresentativeFragmentTestStateCreateInfoNV(object &name);
    

        object serialize_VkPhysicalDeviceExclusiveScissorFeaturesNV(VkPhysicalDeviceExclusiveScissorFeaturesNV name);
        VkPhysicalDeviceExclusiveScissorFeaturesNV deserialize_VkPhysicalDeviceExclusiveScissorFeaturesNV(object &name);
    

        object serialize_VkPipelineViewportExclusiveScissorStateCreateInfoNV(VkPipelineViewportExclusiveScissorStateCreateInfoNV name);
        VkPipelineViewportExclusiveScissorStateCreateInfoNV deserialize_VkPipelineViewportExclusiveScissorStateCreateInfoNV(object &name);
    

        object serialize_VkPhysicalDeviceCornerSampledImageFeaturesNV(VkPhysicalDeviceCornerSampledImageFeaturesNV name);
        VkPhysicalDeviceCornerSampledImageFeaturesNV deserialize_VkPhysicalDeviceCornerSampledImageFeaturesNV(object &name);
    

        object serialize_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV(VkPhysicalDeviceComputeShaderDerivativesFeaturesNV name);
        VkPhysicalDeviceComputeShaderDerivativesFeaturesNV deserialize_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV(object &name);
    

        object serialize_VkPhysicalDeviceShaderImageFootprintFeaturesNV(VkPhysicalDeviceShaderImageFootprintFeaturesNV name);
        VkPhysicalDeviceShaderImageFootprintFeaturesNV deserialize_VkPhysicalDeviceShaderImageFootprintFeaturesNV(object &name);
    

        object serialize_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV name);
        VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV deserialize_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(object &name);
    

        object serialize_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV(VkPhysicalDeviceCopyMemoryIndirectFeaturesNV name);
        VkPhysicalDeviceCopyMemoryIndirectFeaturesNV deserialize_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV(object &name);
    

        object serialize_VkPhysicalDeviceCopyMemoryIndirectPropertiesNV(VkPhysicalDeviceCopyMemoryIndirectPropertiesNV name);
        VkPhysicalDeviceCopyMemoryIndirectPropertiesNV deserialize_VkPhysicalDeviceCopyMemoryIndirectPropertiesNV(object &name);
    

        object serialize_VkPhysicalDeviceMemoryDecompressionFeaturesNV(VkPhysicalDeviceMemoryDecompressionFeaturesNV name);
        VkPhysicalDeviceMemoryDecompressionFeaturesNV deserialize_VkPhysicalDeviceMemoryDecompressionFeaturesNV(object &name);
    

        object serialize_VkPhysicalDeviceMemoryDecompressionPropertiesNV(VkPhysicalDeviceMemoryDecompressionPropertiesNV name);
        VkPhysicalDeviceMemoryDecompressionPropertiesNV deserialize_VkPhysicalDeviceMemoryDecompressionPropertiesNV(object &name);
    

        object serialize_VkShadingRatePaletteNV(VkShadingRatePaletteNV name);
        VkShadingRatePaletteNV deserialize_VkShadingRatePaletteNV(object &name);
    

        object serialize_VkPipelineViewportShadingRateImageStateCreateInfoNV(VkPipelineViewportShadingRateImageStateCreateInfoNV name);
        VkPipelineViewportShadingRateImageStateCreateInfoNV deserialize_VkPipelineViewportShadingRateImageStateCreateInfoNV(object &name);
    

        object serialize_VkPhysicalDeviceShadingRateImageFeaturesNV(VkPhysicalDeviceShadingRateImageFeaturesNV name);
        VkPhysicalDeviceShadingRateImageFeaturesNV deserialize_VkPhysicalDeviceShadingRateImageFeaturesNV(object &name);
    

        object serialize_VkPhysicalDeviceShadingRateImagePropertiesNV(VkPhysicalDeviceShadingRateImagePropertiesNV name);
        VkPhysicalDeviceShadingRateImagePropertiesNV deserialize_VkPhysicalDeviceShadingRateImagePropertiesNV(object &name);
    

        object serialize_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI(VkPhysicalDeviceInvocationMaskFeaturesHUAWEI name);
        VkPhysicalDeviceInvocationMaskFeaturesHUAWEI deserialize_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI(object &name);
    

        object serialize_VkCoarseSampleLocationNV(VkCoarseSampleLocationNV name);
        VkCoarseSampleLocationNV deserialize_VkCoarseSampleLocationNV(object &name);
    

        object serialize_VkCoarseSampleOrderCustomNV(VkCoarseSampleOrderCustomNV name);
        VkCoarseSampleOrderCustomNV deserialize_VkCoarseSampleOrderCustomNV(object &name);
    

        object serialize_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV(VkPipelineViewportCoarseSampleOrderStateCreateInfoNV name);
        VkPipelineViewportCoarseSampleOrderStateCreateInfoNV deserialize_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV(object &name);
    

        object serialize_VkPhysicalDeviceMeshShaderFeaturesNV(VkPhysicalDeviceMeshShaderFeaturesNV name);
        VkPhysicalDeviceMeshShaderFeaturesNV deserialize_VkPhysicalDeviceMeshShaderFeaturesNV(object &name);
    

        object serialize_VkPhysicalDeviceMeshShaderPropertiesNV(VkPhysicalDeviceMeshShaderPropertiesNV name);
        VkPhysicalDeviceMeshShaderPropertiesNV deserialize_VkPhysicalDeviceMeshShaderPropertiesNV(object &name);
    

        object serialize_VkDrawMeshTasksIndirectCommandNV(VkDrawMeshTasksIndirectCommandNV name);
        VkDrawMeshTasksIndirectCommandNV deserialize_VkDrawMeshTasksIndirectCommandNV(object &name);
    

        object serialize_VkPhysicalDeviceMeshShaderFeaturesEXT(VkPhysicalDeviceMeshShaderFeaturesEXT name);
        VkPhysicalDeviceMeshShaderFeaturesEXT deserialize_VkPhysicalDeviceMeshShaderFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceMeshShaderPropertiesEXT(VkPhysicalDeviceMeshShaderPropertiesEXT name);
        VkPhysicalDeviceMeshShaderPropertiesEXT deserialize_VkPhysicalDeviceMeshShaderPropertiesEXT(object &name);
    

        object serialize_VkDrawMeshTasksIndirectCommandEXT(VkDrawMeshTasksIndirectCommandEXT name);
        VkDrawMeshTasksIndirectCommandEXT deserialize_VkDrawMeshTasksIndirectCommandEXT(object &name);
    

        object serialize_VkRayTracingShaderGroupCreateInfoNV(VkRayTracingShaderGroupCreateInfoNV name);
        VkRayTracingShaderGroupCreateInfoNV deserialize_VkRayTracingShaderGroupCreateInfoNV(object &name);
    

        object serialize_VkRayTracingShaderGroupCreateInfoKHR(VkRayTracingShaderGroupCreateInfoKHR name);
        VkRayTracingShaderGroupCreateInfoKHR deserialize_VkRayTracingShaderGroupCreateInfoKHR(object &name);
    

        object serialize_VkRayTracingPipelineCreateInfoNV(VkRayTracingPipelineCreateInfoNV name);
        VkRayTracingPipelineCreateInfoNV deserialize_VkRayTracingPipelineCreateInfoNV(object &name);
    

        object serialize_VkRayTracingPipelineCreateInfoKHR(VkRayTracingPipelineCreateInfoKHR name);
        VkRayTracingPipelineCreateInfoKHR deserialize_VkRayTracingPipelineCreateInfoKHR(object &name);
    

        object serialize_VkGeometryTrianglesNV(VkGeometryTrianglesNV name);
        VkGeometryTrianglesNV deserialize_VkGeometryTrianglesNV(object &name);
    

        object serialize_VkGeometryAABBNV(VkGeometryAABBNV name);
        VkGeometryAABBNV deserialize_VkGeometryAABBNV(object &name);
    

        object serialize_VkGeometryDataNV(VkGeometryDataNV name);
        VkGeometryDataNV deserialize_VkGeometryDataNV(object &name);
    

        object serialize_VkGeometryNV(VkGeometryNV name);
        VkGeometryNV deserialize_VkGeometryNV(object &name);
    

        object serialize_VkAccelerationStructureInfoNV(VkAccelerationStructureInfoNV name);
        VkAccelerationStructureInfoNV deserialize_VkAccelerationStructureInfoNV(object &name);
    

        object serialize_VkAccelerationStructureCreateInfoNV(VkAccelerationStructureCreateInfoNV name);
        VkAccelerationStructureCreateInfoNV deserialize_VkAccelerationStructureCreateInfoNV(object &name);
    

        object serialize_VkBindAccelerationStructureMemoryInfoNV(VkBindAccelerationStructureMemoryInfoNV name);
        VkBindAccelerationStructureMemoryInfoNV deserialize_VkBindAccelerationStructureMemoryInfoNV(object &name);
    

        object serialize_VkWriteDescriptorSetAccelerationStructureKHR(VkWriteDescriptorSetAccelerationStructureKHR name);
        VkWriteDescriptorSetAccelerationStructureKHR deserialize_VkWriteDescriptorSetAccelerationStructureKHR(object &name);
    

        object serialize_VkWriteDescriptorSetAccelerationStructureNV(VkWriteDescriptorSetAccelerationStructureNV name);
        VkWriteDescriptorSetAccelerationStructureNV deserialize_VkWriteDescriptorSetAccelerationStructureNV(object &name);
    

        object serialize_VkAccelerationStructureMemoryRequirementsInfoNV(VkAccelerationStructureMemoryRequirementsInfoNV name);
        VkAccelerationStructureMemoryRequirementsInfoNV deserialize_VkAccelerationStructureMemoryRequirementsInfoNV(object &name);
    

        object serialize_VkPhysicalDeviceAccelerationStructureFeaturesKHR(VkPhysicalDeviceAccelerationStructureFeaturesKHR name);
        VkPhysicalDeviceAccelerationStructureFeaturesKHR deserialize_VkPhysicalDeviceAccelerationStructureFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceRayTracingPipelineFeaturesKHR(VkPhysicalDeviceRayTracingPipelineFeaturesKHR name);
        VkPhysicalDeviceRayTracingPipelineFeaturesKHR deserialize_VkPhysicalDeviceRayTracingPipelineFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceRayQueryFeaturesKHR(VkPhysicalDeviceRayQueryFeaturesKHR name);
        VkPhysicalDeviceRayQueryFeaturesKHR deserialize_VkPhysicalDeviceRayQueryFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceAccelerationStructurePropertiesKHR(VkPhysicalDeviceAccelerationStructurePropertiesKHR name);
        VkPhysicalDeviceAccelerationStructurePropertiesKHR deserialize_VkPhysicalDeviceAccelerationStructurePropertiesKHR(object &name);
    

        object serialize_VkPhysicalDeviceRayTracingPipelinePropertiesKHR(VkPhysicalDeviceRayTracingPipelinePropertiesKHR name);
        VkPhysicalDeviceRayTracingPipelinePropertiesKHR deserialize_VkPhysicalDeviceRayTracingPipelinePropertiesKHR(object &name);
    

        object serialize_VkPhysicalDeviceRayTracingPropertiesNV(VkPhysicalDeviceRayTracingPropertiesNV name);
        VkPhysicalDeviceRayTracingPropertiesNV deserialize_VkPhysicalDeviceRayTracingPropertiesNV(object &name);
    

        object serialize_VkStridedDeviceAddressRegionKHR(VkStridedDeviceAddressRegionKHR name);
        VkStridedDeviceAddressRegionKHR deserialize_VkStridedDeviceAddressRegionKHR(object &name);
    

        object serialize_VkTraceRaysIndirectCommandKHR(VkTraceRaysIndirectCommandKHR name);
        VkTraceRaysIndirectCommandKHR deserialize_VkTraceRaysIndirectCommandKHR(object &name);
    

        object serialize_VkTraceRaysIndirectCommand2KHR(VkTraceRaysIndirectCommand2KHR name);
        VkTraceRaysIndirectCommand2KHR deserialize_VkTraceRaysIndirectCommand2KHR(object &name);
    

        object serialize_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR(VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR name);
        VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR deserialize_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR(object &name);
    

        object serialize_VkDrmFormatModifierPropertiesListEXT(VkDrmFormatModifierPropertiesListEXT name);
        VkDrmFormatModifierPropertiesListEXT deserialize_VkDrmFormatModifierPropertiesListEXT(object &name);
    

        object serialize_VkDrmFormatModifierPropertiesEXT(VkDrmFormatModifierPropertiesEXT name);
        VkDrmFormatModifierPropertiesEXT deserialize_VkDrmFormatModifierPropertiesEXT(object &name);
    

        object serialize_VkPhysicalDeviceImageDrmFormatModifierInfoEXT(VkPhysicalDeviceImageDrmFormatModifierInfoEXT name);
        VkPhysicalDeviceImageDrmFormatModifierInfoEXT deserialize_VkPhysicalDeviceImageDrmFormatModifierInfoEXT(object &name);
    

        object serialize_VkImageDrmFormatModifierListCreateInfoEXT(VkImageDrmFormatModifierListCreateInfoEXT name);
        VkImageDrmFormatModifierListCreateInfoEXT deserialize_VkImageDrmFormatModifierListCreateInfoEXT(object &name);
    

        object serialize_VkImageDrmFormatModifierExplicitCreateInfoEXT(VkImageDrmFormatModifierExplicitCreateInfoEXT name);
        VkImageDrmFormatModifierExplicitCreateInfoEXT deserialize_VkImageDrmFormatModifierExplicitCreateInfoEXT(object &name);
    

        object serialize_VkImageDrmFormatModifierPropertiesEXT(VkImageDrmFormatModifierPropertiesEXT name);
        VkImageDrmFormatModifierPropertiesEXT deserialize_VkImageDrmFormatModifierPropertiesEXT(object &name);
    

        object serialize_VkImageStencilUsageCreateInfo(VkImageStencilUsageCreateInfo name);
        VkImageStencilUsageCreateInfo deserialize_VkImageStencilUsageCreateInfo(object &name);
    

        object serialize_VkImageStencilUsageCreateInfoEXT(VkImageStencilUsageCreateInfoEXT name);
        VkImageStencilUsageCreateInfoEXT deserialize_VkImageStencilUsageCreateInfoEXT(object &name);
    

        object serialize_VkDeviceMemoryOverallocationCreateInfoAMD(VkDeviceMemoryOverallocationCreateInfoAMD name);
        VkDeviceMemoryOverallocationCreateInfoAMD deserialize_VkDeviceMemoryOverallocationCreateInfoAMD(object &name);
    

        object serialize_VkPhysicalDeviceFragmentDensityMapFeaturesEXT(VkPhysicalDeviceFragmentDensityMapFeaturesEXT name);
        VkPhysicalDeviceFragmentDensityMapFeaturesEXT deserialize_VkPhysicalDeviceFragmentDensityMapFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT name);
        VkPhysicalDeviceFragmentDensityMap2FeaturesEXT deserialize_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM name);
        VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM deserialize_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM(object &name);
    

        object serialize_VkPhysicalDeviceFragmentDensityMapPropertiesEXT(VkPhysicalDeviceFragmentDensityMapPropertiesEXT name);
        VkPhysicalDeviceFragmentDensityMapPropertiesEXT deserialize_VkPhysicalDeviceFragmentDensityMapPropertiesEXT(object &name);
    

        object serialize_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT(VkPhysicalDeviceFragmentDensityMap2PropertiesEXT name);
        VkPhysicalDeviceFragmentDensityMap2PropertiesEXT deserialize_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT(object &name);
    

        object serialize_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM(VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM name);
        VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM deserialize_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM(object &name);
    

        object serialize_VkRenderPassFragmentDensityMapCreateInfoEXT(VkRenderPassFragmentDensityMapCreateInfoEXT name);
        VkRenderPassFragmentDensityMapCreateInfoEXT deserialize_VkRenderPassFragmentDensityMapCreateInfoEXT(object &name);
    

        object serialize_VkSubpassFragmentDensityMapOffsetEndInfoQCOM(VkSubpassFragmentDensityMapOffsetEndInfoQCOM name);
        VkSubpassFragmentDensityMapOffsetEndInfoQCOM deserialize_VkSubpassFragmentDensityMapOffsetEndInfoQCOM(object &name);
    

        object serialize_VkPhysicalDeviceScalarBlockLayoutFeatures(VkPhysicalDeviceScalarBlockLayoutFeatures name);
        VkPhysicalDeviceScalarBlockLayoutFeatures deserialize_VkPhysicalDeviceScalarBlockLayoutFeatures(object &name);
    

        object serialize_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT(VkPhysicalDeviceScalarBlockLayoutFeaturesEXT name);
        VkPhysicalDeviceScalarBlockLayoutFeaturesEXT deserialize_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT(object &name);
    

        object serialize_VkSurfaceProtectedCapabilitiesKHR(VkSurfaceProtectedCapabilitiesKHR name);
        VkSurfaceProtectedCapabilitiesKHR deserialize_VkSurfaceProtectedCapabilitiesKHR(object &name);
    

        object serialize_VkPhysicalDeviceUniformBufferStandardLayoutFeatures(VkPhysicalDeviceUniformBufferStandardLayoutFeatures name);
        VkPhysicalDeviceUniformBufferStandardLayoutFeatures deserialize_VkPhysicalDeviceUniformBufferStandardLayoutFeatures(object &name);
    

        object serialize_VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR(VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR name);
        VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR deserialize_VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceDepthClipEnableFeaturesEXT(VkPhysicalDeviceDepthClipEnableFeaturesEXT name);
        VkPhysicalDeviceDepthClipEnableFeaturesEXT deserialize_VkPhysicalDeviceDepthClipEnableFeaturesEXT(object &name);
    

        object serialize_VkPipelineRasterizationDepthClipStateCreateInfoEXT(VkPipelineRasterizationDepthClipStateCreateInfoEXT name);
        VkPipelineRasterizationDepthClipStateCreateInfoEXT deserialize_VkPipelineRasterizationDepthClipStateCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceMemoryBudgetPropertiesEXT(VkPhysicalDeviceMemoryBudgetPropertiesEXT name);
        VkPhysicalDeviceMemoryBudgetPropertiesEXT deserialize_VkPhysicalDeviceMemoryBudgetPropertiesEXT(object &name);
    

        object serialize_VkPhysicalDeviceMemoryPriorityFeaturesEXT(VkPhysicalDeviceMemoryPriorityFeaturesEXT name);
        VkPhysicalDeviceMemoryPriorityFeaturesEXT deserialize_VkPhysicalDeviceMemoryPriorityFeaturesEXT(object &name);
    

        object serialize_VkMemoryPriorityAllocateInfoEXT(VkMemoryPriorityAllocateInfoEXT name);
        VkMemoryPriorityAllocateInfoEXT deserialize_VkMemoryPriorityAllocateInfoEXT(object &name);
    

        object serialize_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT name);
        VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT deserialize_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceBufferDeviceAddressFeatures(VkPhysicalDeviceBufferDeviceAddressFeatures name);
        VkPhysicalDeviceBufferDeviceAddressFeatures deserialize_VkPhysicalDeviceBufferDeviceAddressFeatures(object &name);
    

        object serialize_VkPhysicalDeviceBufferDeviceAddressFeaturesKHR(VkPhysicalDeviceBufferDeviceAddressFeaturesKHR name);
        VkPhysicalDeviceBufferDeviceAddressFeaturesKHR deserialize_VkPhysicalDeviceBufferDeviceAddressFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT name);
        VkPhysicalDeviceBufferDeviceAddressFeaturesEXT deserialize_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceBufferAddressFeaturesEXT(VkPhysicalDeviceBufferAddressFeaturesEXT name);
        VkPhysicalDeviceBufferAddressFeaturesEXT deserialize_VkPhysicalDeviceBufferAddressFeaturesEXT(object &name);
    

        object serialize_VkBufferDeviceAddressInfo(VkBufferDeviceAddressInfo name);
        VkBufferDeviceAddressInfo deserialize_VkBufferDeviceAddressInfo(object &name);
    

        object serialize_VkBufferDeviceAddressInfoKHR(VkBufferDeviceAddressInfoKHR name);
        VkBufferDeviceAddressInfoKHR deserialize_VkBufferDeviceAddressInfoKHR(object &name);
    

        object serialize_VkBufferDeviceAddressInfoEXT(VkBufferDeviceAddressInfoEXT name);
        VkBufferDeviceAddressInfoEXT deserialize_VkBufferDeviceAddressInfoEXT(object &name);
    

        object serialize_VkBufferOpaqueCaptureAddressCreateInfo(VkBufferOpaqueCaptureAddressCreateInfo name);
        VkBufferOpaqueCaptureAddressCreateInfo deserialize_VkBufferOpaqueCaptureAddressCreateInfo(object &name);
    

        object serialize_VkBufferOpaqueCaptureAddressCreateInfoKHR(VkBufferOpaqueCaptureAddressCreateInfoKHR name);
        VkBufferOpaqueCaptureAddressCreateInfoKHR deserialize_VkBufferOpaqueCaptureAddressCreateInfoKHR(object &name);
    

        object serialize_VkBufferDeviceAddressCreateInfoEXT(VkBufferDeviceAddressCreateInfoEXT name);
        VkBufferDeviceAddressCreateInfoEXT deserialize_VkBufferDeviceAddressCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceImageViewImageFormatInfoEXT(VkPhysicalDeviceImageViewImageFormatInfoEXT name);
        VkPhysicalDeviceImageViewImageFormatInfoEXT deserialize_VkPhysicalDeviceImageViewImageFormatInfoEXT(object &name);
    

        object serialize_VkFilterCubicImageViewImageFormatPropertiesEXT(VkFilterCubicImageViewImageFormatPropertiesEXT name);
        VkFilterCubicImageViewImageFormatPropertiesEXT deserialize_VkFilterCubicImageViewImageFormatPropertiesEXT(object &name);
    

        object serialize_VkPhysicalDeviceImagelessFramebufferFeatures(VkPhysicalDeviceImagelessFramebufferFeatures name);
        VkPhysicalDeviceImagelessFramebufferFeatures deserialize_VkPhysicalDeviceImagelessFramebufferFeatures(object &name);
    

        object serialize_VkPhysicalDeviceImagelessFramebufferFeaturesKHR(VkPhysicalDeviceImagelessFramebufferFeaturesKHR name);
        VkPhysicalDeviceImagelessFramebufferFeaturesKHR deserialize_VkPhysicalDeviceImagelessFramebufferFeaturesKHR(object &name);
    

        object serialize_VkFramebufferAttachmentsCreateInfo(VkFramebufferAttachmentsCreateInfo name);
        VkFramebufferAttachmentsCreateInfo deserialize_VkFramebufferAttachmentsCreateInfo(object &name);
    

        object serialize_VkFramebufferAttachmentsCreateInfoKHR(VkFramebufferAttachmentsCreateInfoKHR name);
        VkFramebufferAttachmentsCreateInfoKHR deserialize_VkFramebufferAttachmentsCreateInfoKHR(object &name);
    

        object serialize_VkFramebufferAttachmentImageInfo(VkFramebufferAttachmentImageInfo name);
        VkFramebufferAttachmentImageInfo deserialize_VkFramebufferAttachmentImageInfo(object &name);
    

        object serialize_VkFramebufferAttachmentImageInfoKHR(VkFramebufferAttachmentImageInfoKHR name);
        VkFramebufferAttachmentImageInfoKHR deserialize_VkFramebufferAttachmentImageInfoKHR(object &name);
    

        object serialize_VkRenderPassAttachmentBeginInfo(VkRenderPassAttachmentBeginInfo name);
        VkRenderPassAttachmentBeginInfo deserialize_VkRenderPassAttachmentBeginInfo(object &name);
    

        object serialize_VkRenderPassAttachmentBeginInfoKHR(VkRenderPassAttachmentBeginInfoKHR name);
        VkRenderPassAttachmentBeginInfoKHR deserialize_VkRenderPassAttachmentBeginInfoKHR(object &name);
    

        object serialize_VkPhysicalDeviceTextureCompressionASTCHDRFeatures(VkPhysicalDeviceTextureCompressionASTCHDRFeatures name);
        VkPhysicalDeviceTextureCompressionASTCHDRFeatures deserialize_VkPhysicalDeviceTextureCompressionASTCHDRFeatures(object &name);
    

        object serialize_VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT(VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT name);
        VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT deserialize_VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceCooperativeMatrixFeaturesNV(VkPhysicalDeviceCooperativeMatrixFeaturesNV name);
        VkPhysicalDeviceCooperativeMatrixFeaturesNV deserialize_VkPhysicalDeviceCooperativeMatrixFeaturesNV(object &name);
    

        object serialize_VkPhysicalDeviceCooperativeMatrixPropertiesNV(VkPhysicalDeviceCooperativeMatrixPropertiesNV name);
        VkPhysicalDeviceCooperativeMatrixPropertiesNV deserialize_VkPhysicalDeviceCooperativeMatrixPropertiesNV(object &name);
    

        object serialize_VkCooperativeMatrixPropertiesNV(VkCooperativeMatrixPropertiesNV name);
        VkCooperativeMatrixPropertiesNV deserialize_VkCooperativeMatrixPropertiesNV(object &name);
    

        object serialize_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT name);
        VkPhysicalDeviceYcbcrImageArraysFeaturesEXT deserialize_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT(object &name);
    

        object serialize_VkImageViewHandleInfoNVX(VkImageViewHandleInfoNVX name);
        VkImageViewHandleInfoNVX deserialize_VkImageViewHandleInfoNVX(object &name);
    

        object serialize_VkImageViewAddressPropertiesNVX(VkImageViewAddressPropertiesNVX name);
        VkImageViewAddressPropertiesNVX deserialize_VkImageViewAddressPropertiesNVX(object &name);
    

        object serialize_VkPipelineCreationFeedback(VkPipelineCreationFeedback name);
        VkPipelineCreationFeedback deserialize_VkPipelineCreationFeedback(object &name);
    

        object serialize_VkPipelineCreationFeedbackEXT(VkPipelineCreationFeedbackEXT name);
        VkPipelineCreationFeedbackEXT deserialize_VkPipelineCreationFeedbackEXT(object &name);
    

        object serialize_VkPipelineCreationFeedbackCreateInfo(VkPipelineCreationFeedbackCreateInfo name);
        VkPipelineCreationFeedbackCreateInfo deserialize_VkPipelineCreationFeedbackCreateInfo(object &name);
    

        object serialize_VkPipelineCreationFeedbackCreateInfoEXT(VkPipelineCreationFeedbackCreateInfoEXT name);
        VkPipelineCreationFeedbackCreateInfoEXT deserialize_VkPipelineCreationFeedbackCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDevicePresentBarrierFeaturesNV(VkPhysicalDevicePresentBarrierFeaturesNV name);
        VkPhysicalDevicePresentBarrierFeaturesNV deserialize_VkPhysicalDevicePresentBarrierFeaturesNV(object &name);
    

        object serialize_VkSurfaceCapabilitiesPresentBarrierNV(VkSurfaceCapabilitiesPresentBarrierNV name);
        VkSurfaceCapabilitiesPresentBarrierNV deserialize_VkSurfaceCapabilitiesPresentBarrierNV(object &name);
    

        object serialize_VkSwapchainPresentBarrierCreateInfoNV(VkSwapchainPresentBarrierCreateInfoNV name);
        VkSwapchainPresentBarrierCreateInfoNV deserialize_VkSwapchainPresentBarrierCreateInfoNV(object &name);
    

        object serialize_VkPhysicalDevicePerformanceQueryFeaturesKHR(VkPhysicalDevicePerformanceQueryFeaturesKHR name);
        VkPhysicalDevicePerformanceQueryFeaturesKHR deserialize_VkPhysicalDevicePerformanceQueryFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDevicePerformanceQueryPropertiesKHR(VkPhysicalDevicePerformanceQueryPropertiesKHR name);
        VkPhysicalDevicePerformanceQueryPropertiesKHR deserialize_VkPhysicalDevicePerformanceQueryPropertiesKHR(object &name);
    

        object serialize_VkPerformanceCounterKHR(VkPerformanceCounterKHR name);
        VkPerformanceCounterKHR deserialize_VkPerformanceCounterKHR(object &name);
    

        object serialize_VkPerformanceCounterDescriptionKHR(VkPerformanceCounterDescriptionKHR name);
        VkPerformanceCounterDescriptionKHR deserialize_VkPerformanceCounterDescriptionKHR(object &name);
    

        object serialize_VkQueryPoolPerformanceCreateInfoKHR(VkQueryPoolPerformanceCreateInfoKHR name);
        VkQueryPoolPerformanceCreateInfoKHR deserialize_VkQueryPoolPerformanceCreateInfoKHR(object &name);
    

        object serialize_VkPerformanceCounterResultKHR(VkPerformanceCounterResultKHR name);
        VkPerformanceCounterResultKHR deserialize_VkPerformanceCounterResultKHR(object &name);
    

        object serialize_VkAcquireProfilingLockInfoKHR(VkAcquireProfilingLockInfoKHR name);
        VkAcquireProfilingLockInfoKHR deserialize_VkAcquireProfilingLockInfoKHR(object &name);
    

        object serialize_VkPerformanceQuerySubmitInfoKHR(VkPerformanceQuerySubmitInfoKHR name);
        VkPerformanceQuerySubmitInfoKHR deserialize_VkPerformanceQuerySubmitInfoKHR(object &name);
    

        object serialize_VkHeadlessSurfaceCreateInfoEXT(VkHeadlessSurfaceCreateInfoEXT name);
        VkHeadlessSurfaceCreateInfoEXT deserialize_VkHeadlessSurfaceCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceCoverageReductionModeFeaturesNV(VkPhysicalDeviceCoverageReductionModeFeaturesNV name);
        VkPhysicalDeviceCoverageReductionModeFeaturesNV deserialize_VkPhysicalDeviceCoverageReductionModeFeaturesNV(object &name);
    

        object serialize_VkPipelineCoverageReductionStateCreateInfoNV(VkPipelineCoverageReductionStateCreateInfoNV name);
        VkPipelineCoverageReductionStateCreateInfoNV deserialize_VkPipelineCoverageReductionStateCreateInfoNV(object &name);
    

        object serialize_VkFramebufferMixedSamplesCombinationNV(VkFramebufferMixedSamplesCombinationNV name);
        VkFramebufferMixedSamplesCombinationNV deserialize_VkFramebufferMixedSamplesCombinationNV(object &name);
    

        object serialize_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL name);
        VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL deserialize_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(object &name);
    

        object serialize_VkPerformanceValueDataINTEL(VkPerformanceValueDataINTEL name);
        VkPerformanceValueDataINTEL deserialize_VkPerformanceValueDataINTEL(object &name);
    

        object serialize_VkPerformanceValueINTEL(VkPerformanceValueINTEL name);
        VkPerformanceValueINTEL deserialize_VkPerformanceValueINTEL(object &name);
    

        object serialize_VkInitializePerformanceApiInfoINTEL(VkInitializePerformanceApiInfoINTEL name);
        VkInitializePerformanceApiInfoINTEL deserialize_VkInitializePerformanceApiInfoINTEL(object &name);
    

        object serialize_VkQueryPoolPerformanceQueryCreateInfoINTEL(VkQueryPoolPerformanceQueryCreateInfoINTEL name);
        VkQueryPoolPerformanceQueryCreateInfoINTEL deserialize_VkQueryPoolPerformanceQueryCreateInfoINTEL(object &name);
    

        object serialize_VkQueryPoolCreateInfoINTEL(VkQueryPoolCreateInfoINTEL name);
        VkQueryPoolCreateInfoINTEL deserialize_VkQueryPoolCreateInfoINTEL(object &name);
    

        object serialize_VkPerformanceMarkerInfoINTEL(VkPerformanceMarkerInfoINTEL name);
        VkPerformanceMarkerInfoINTEL deserialize_VkPerformanceMarkerInfoINTEL(object &name);
    

        object serialize_VkPerformanceStreamMarkerInfoINTEL(VkPerformanceStreamMarkerInfoINTEL name);
        VkPerformanceStreamMarkerInfoINTEL deserialize_VkPerformanceStreamMarkerInfoINTEL(object &name);
    

        object serialize_VkPerformanceOverrideInfoINTEL(VkPerformanceOverrideInfoINTEL name);
        VkPerformanceOverrideInfoINTEL deserialize_VkPerformanceOverrideInfoINTEL(object &name);
    

        object serialize_VkPerformanceConfigurationAcquireInfoINTEL(VkPerformanceConfigurationAcquireInfoINTEL name);
        VkPerformanceConfigurationAcquireInfoINTEL deserialize_VkPerformanceConfigurationAcquireInfoINTEL(object &name);
    

        object serialize_VkPhysicalDeviceShaderClockFeaturesKHR(VkPhysicalDeviceShaderClockFeaturesKHR name);
        VkPhysicalDeviceShaderClockFeaturesKHR deserialize_VkPhysicalDeviceShaderClockFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceIndexTypeUint8FeaturesEXT(VkPhysicalDeviceIndexTypeUint8FeaturesEXT name);
        VkPhysicalDeviceIndexTypeUint8FeaturesEXT deserialize_VkPhysicalDeviceIndexTypeUint8FeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV(VkPhysicalDeviceShaderSMBuiltinsPropertiesNV name);
        VkPhysicalDeviceShaderSMBuiltinsPropertiesNV deserialize_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV(object &name);
    

        object serialize_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV(VkPhysicalDeviceShaderSMBuiltinsFeaturesNV name);
        VkPhysicalDeviceShaderSMBuiltinsFeaturesNV deserialize_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV(object &name);
    

        object serialize_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT name);
        VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT deserialize_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures name);
        VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures deserialize_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures(object &name);
    

        object serialize_VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR(VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR name);
        VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR deserialize_VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR(object &name);
    

        object serialize_VkAttachmentReferenceStencilLayout(VkAttachmentReferenceStencilLayout name);
        VkAttachmentReferenceStencilLayout deserialize_VkAttachmentReferenceStencilLayout(object &name);
    

        object serialize_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT name);
        VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT deserialize_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(object &name);
    

        object serialize_VkAttachmentReferenceStencilLayoutKHR(VkAttachmentReferenceStencilLayoutKHR name);
        VkAttachmentReferenceStencilLayoutKHR deserialize_VkAttachmentReferenceStencilLayoutKHR(object &name);
    

        object serialize_VkAttachmentDescriptionStencilLayout(VkAttachmentDescriptionStencilLayout name);
        VkAttachmentDescriptionStencilLayout deserialize_VkAttachmentDescriptionStencilLayout(object &name);
    

        object serialize_VkAttachmentDescriptionStencilLayoutKHR(VkAttachmentDescriptionStencilLayoutKHR name);
        VkAttachmentDescriptionStencilLayoutKHR deserialize_VkAttachmentDescriptionStencilLayoutKHR(object &name);
    

        object serialize_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR name);
        VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR deserialize_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR(object &name);
    

        object serialize_VkPipelineInfoKHR(VkPipelineInfoKHR name);
        VkPipelineInfoKHR deserialize_VkPipelineInfoKHR(object &name);
    

        object serialize_VkPipelineInfoEXT(VkPipelineInfoEXT name);
        VkPipelineInfoEXT deserialize_VkPipelineInfoEXT(object &name);
    

        object serialize_VkPipelineExecutablePropertiesKHR(VkPipelineExecutablePropertiesKHR name);
        VkPipelineExecutablePropertiesKHR deserialize_VkPipelineExecutablePropertiesKHR(object &name);
    

        object serialize_VkPipelineExecutableInfoKHR(VkPipelineExecutableInfoKHR name);
        VkPipelineExecutableInfoKHR deserialize_VkPipelineExecutableInfoKHR(object &name);
    

        object serialize_VkPipelineExecutableStatisticValueKHR(VkPipelineExecutableStatisticValueKHR name);
        VkPipelineExecutableStatisticValueKHR deserialize_VkPipelineExecutableStatisticValueKHR(object &name);
    

        object serialize_VkPipelineExecutableStatisticKHR(VkPipelineExecutableStatisticKHR name);
        VkPipelineExecutableStatisticKHR deserialize_VkPipelineExecutableStatisticKHR(object &name);
    

        object serialize_VkPipelineExecutableInternalRepresentationKHR(VkPipelineExecutableInternalRepresentationKHR name);
        VkPipelineExecutableInternalRepresentationKHR deserialize_VkPipelineExecutableInternalRepresentationKHR(object &name);
    

        object serialize_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures name);
        VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures deserialize_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures(object &name);
    

        object serialize_VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT(VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT name);
        VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT deserialize_VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT name);
        VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT deserialize_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceTexelBufferAlignmentProperties(VkPhysicalDeviceTexelBufferAlignmentProperties name);
        VkPhysicalDeviceTexelBufferAlignmentProperties deserialize_VkPhysicalDeviceTexelBufferAlignmentProperties(object &name);
    

        object serialize_VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT(VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT name);
        VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT deserialize_VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT(object &name);
    

        object serialize_VkPhysicalDeviceSubgroupSizeControlFeatures(VkPhysicalDeviceSubgroupSizeControlFeatures name);
        VkPhysicalDeviceSubgroupSizeControlFeatures deserialize_VkPhysicalDeviceSubgroupSizeControlFeatures(object &name);
    

        object serialize_VkPhysicalDeviceSubgroupSizeControlFeaturesEXT(VkPhysicalDeviceSubgroupSizeControlFeaturesEXT name);
        VkPhysicalDeviceSubgroupSizeControlFeaturesEXT deserialize_VkPhysicalDeviceSubgroupSizeControlFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceSubgroupSizeControlProperties(VkPhysicalDeviceSubgroupSizeControlProperties name);
        VkPhysicalDeviceSubgroupSizeControlProperties deserialize_VkPhysicalDeviceSubgroupSizeControlProperties(object &name);
    

        object serialize_VkPhysicalDeviceSubgroupSizeControlPropertiesEXT(VkPhysicalDeviceSubgroupSizeControlPropertiesEXT name);
        VkPhysicalDeviceSubgroupSizeControlPropertiesEXT deserialize_VkPhysicalDeviceSubgroupSizeControlPropertiesEXT(object &name);
    

        object serialize_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo(VkPipelineShaderStageRequiredSubgroupSizeCreateInfo name);
        VkPipelineShaderStageRequiredSubgroupSizeCreateInfo deserialize_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo(object &name);
    

        object serialize_VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT(VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT name);
        VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT deserialize_VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT(object &name);
    

        object serialize_VkShaderRequiredSubgroupSizeCreateInfoEXT(VkShaderRequiredSubgroupSizeCreateInfoEXT name);
        VkShaderRequiredSubgroupSizeCreateInfoEXT deserialize_VkShaderRequiredSubgroupSizeCreateInfoEXT(object &name);
    

        object serialize_VkSubpassShadingPipelineCreateInfoHUAWEI(VkSubpassShadingPipelineCreateInfoHUAWEI name);
        VkSubpassShadingPipelineCreateInfoHUAWEI deserialize_VkSubpassShadingPipelineCreateInfoHUAWEI(object &name);
    

        object serialize_VkPhysicalDeviceSubpassShadingPropertiesHUAWEI(VkPhysicalDeviceSubpassShadingPropertiesHUAWEI name);
        VkPhysicalDeviceSubpassShadingPropertiesHUAWEI deserialize_VkPhysicalDeviceSubpassShadingPropertiesHUAWEI(object &name);
    

        object serialize_VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI(VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI name);
        VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI deserialize_VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI(object &name);
    

        object serialize_VkMemoryOpaqueCaptureAddressAllocateInfo(VkMemoryOpaqueCaptureAddressAllocateInfo name);
        VkMemoryOpaqueCaptureAddressAllocateInfo deserialize_VkMemoryOpaqueCaptureAddressAllocateInfo(object &name);
    

        object serialize_VkMemoryOpaqueCaptureAddressAllocateInfoKHR(VkMemoryOpaqueCaptureAddressAllocateInfoKHR name);
        VkMemoryOpaqueCaptureAddressAllocateInfoKHR deserialize_VkMemoryOpaqueCaptureAddressAllocateInfoKHR(object &name);
    

        object serialize_VkDeviceMemoryOpaqueCaptureAddressInfo(VkDeviceMemoryOpaqueCaptureAddressInfo name);
        VkDeviceMemoryOpaqueCaptureAddressInfo deserialize_VkDeviceMemoryOpaqueCaptureAddressInfo(object &name);
    

        object serialize_VkDeviceMemoryOpaqueCaptureAddressInfoKHR(VkDeviceMemoryOpaqueCaptureAddressInfoKHR name);
        VkDeviceMemoryOpaqueCaptureAddressInfoKHR deserialize_VkDeviceMemoryOpaqueCaptureAddressInfoKHR(object &name);
    

        object serialize_VkPhysicalDeviceLineRasterizationFeaturesEXT(VkPhysicalDeviceLineRasterizationFeaturesEXT name);
        VkPhysicalDeviceLineRasterizationFeaturesEXT deserialize_VkPhysicalDeviceLineRasterizationFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceLineRasterizationPropertiesEXT(VkPhysicalDeviceLineRasterizationPropertiesEXT name);
        VkPhysicalDeviceLineRasterizationPropertiesEXT deserialize_VkPhysicalDeviceLineRasterizationPropertiesEXT(object &name);
    

        object serialize_VkPipelineRasterizationLineStateCreateInfoEXT(VkPipelineRasterizationLineStateCreateInfoEXT name);
        VkPipelineRasterizationLineStateCreateInfoEXT deserialize_VkPipelineRasterizationLineStateCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDevicePipelineCreationCacheControlFeatures(VkPhysicalDevicePipelineCreationCacheControlFeatures name);
        VkPhysicalDevicePipelineCreationCacheControlFeatures deserialize_VkPhysicalDevicePipelineCreationCacheControlFeatures(object &name);
    

        object serialize_VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT(VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT name);
        VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT deserialize_VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceVulkan11Features(VkPhysicalDeviceVulkan11Features name);
        VkPhysicalDeviceVulkan11Features deserialize_VkPhysicalDeviceVulkan11Features(object &name);
    

        object serialize_VkPhysicalDeviceVulkan11Properties(VkPhysicalDeviceVulkan11Properties name);
        VkPhysicalDeviceVulkan11Properties deserialize_VkPhysicalDeviceVulkan11Properties(object &name);
    

        object serialize_VkPhysicalDeviceVulkan12Features(VkPhysicalDeviceVulkan12Features name);
        VkPhysicalDeviceVulkan12Features deserialize_VkPhysicalDeviceVulkan12Features(object &name);
    

        object serialize_VkPhysicalDeviceVulkan12Properties(VkPhysicalDeviceVulkan12Properties name);
        VkPhysicalDeviceVulkan12Properties deserialize_VkPhysicalDeviceVulkan12Properties(object &name);
    

        object serialize_VkPhysicalDeviceVulkan13Features(VkPhysicalDeviceVulkan13Features name);
        VkPhysicalDeviceVulkan13Features deserialize_VkPhysicalDeviceVulkan13Features(object &name);
    

        object serialize_VkPhysicalDeviceVulkan13Properties(VkPhysicalDeviceVulkan13Properties name);
        VkPhysicalDeviceVulkan13Properties deserialize_VkPhysicalDeviceVulkan13Properties(object &name);
    

        object serialize_VkPipelineCompilerControlCreateInfoAMD(VkPipelineCompilerControlCreateInfoAMD name);
        VkPipelineCompilerControlCreateInfoAMD deserialize_VkPipelineCompilerControlCreateInfoAMD(object &name);
    

        object serialize_VkPhysicalDeviceCoherentMemoryFeaturesAMD(VkPhysicalDeviceCoherentMemoryFeaturesAMD name);
        VkPhysicalDeviceCoherentMemoryFeaturesAMD deserialize_VkPhysicalDeviceCoherentMemoryFeaturesAMD(object &name);
    

        object serialize_VkPhysicalDeviceToolProperties(VkPhysicalDeviceToolProperties name);
        VkPhysicalDeviceToolProperties deserialize_VkPhysicalDeviceToolProperties(object &name);
    

        object serialize_VkPhysicalDeviceToolPropertiesEXT(VkPhysicalDeviceToolPropertiesEXT name);
        VkPhysicalDeviceToolPropertiesEXT deserialize_VkPhysicalDeviceToolPropertiesEXT(object &name);
    

        object serialize_VkSamplerCustomBorderColorCreateInfoEXT(VkSamplerCustomBorderColorCreateInfoEXT name);
        VkSamplerCustomBorderColorCreateInfoEXT deserialize_VkSamplerCustomBorderColorCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceCustomBorderColorPropertiesEXT(VkPhysicalDeviceCustomBorderColorPropertiesEXT name);
        VkPhysicalDeviceCustomBorderColorPropertiesEXT deserialize_VkPhysicalDeviceCustomBorderColorPropertiesEXT(object &name);
    

        object serialize_VkPhysicalDeviceCustomBorderColorFeaturesEXT(VkPhysicalDeviceCustomBorderColorFeaturesEXT name);
        VkPhysicalDeviceCustomBorderColorFeaturesEXT deserialize_VkPhysicalDeviceCustomBorderColorFeaturesEXT(object &name);
    

        object serialize_VkSamplerBorderColorComponentMappingCreateInfoEXT(VkSamplerBorderColorComponentMappingCreateInfoEXT name);
        VkSamplerBorderColorComponentMappingCreateInfoEXT deserialize_VkSamplerBorderColorComponentMappingCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT(VkPhysicalDeviceBorderColorSwizzleFeaturesEXT name);
        VkPhysicalDeviceBorderColorSwizzleFeaturesEXT deserialize_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT(object &name);
    

        object serialize_VkDeviceOrHostAddressKHR(VkDeviceOrHostAddressKHR name);
        VkDeviceOrHostAddressKHR deserialize_VkDeviceOrHostAddressKHR(object &name);
    

        object serialize_VkDeviceOrHostAddressConstKHR(VkDeviceOrHostAddressConstKHR name);
        VkDeviceOrHostAddressConstKHR deserialize_VkDeviceOrHostAddressConstKHR(object &name);
    

        object serialize_VkAccelerationStructureGeometryTrianglesDataKHR(VkAccelerationStructureGeometryTrianglesDataKHR name);
        VkAccelerationStructureGeometryTrianglesDataKHR deserialize_VkAccelerationStructureGeometryTrianglesDataKHR(object &name);
    

        object serialize_VkAccelerationStructureGeometryAabbsDataKHR(VkAccelerationStructureGeometryAabbsDataKHR name);
        VkAccelerationStructureGeometryAabbsDataKHR deserialize_VkAccelerationStructureGeometryAabbsDataKHR(object &name);
    

        object serialize_VkAccelerationStructureGeometryInstancesDataKHR(VkAccelerationStructureGeometryInstancesDataKHR name);
        VkAccelerationStructureGeometryInstancesDataKHR deserialize_VkAccelerationStructureGeometryInstancesDataKHR(object &name);
    

        object serialize_VkAccelerationStructureGeometryDataKHR(VkAccelerationStructureGeometryDataKHR name);
        VkAccelerationStructureGeometryDataKHR deserialize_VkAccelerationStructureGeometryDataKHR(object &name);
    

        object serialize_VkAccelerationStructureGeometryKHR(VkAccelerationStructureGeometryKHR name);
        VkAccelerationStructureGeometryKHR deserialize_VkAccelerationStructureGeometryKHR(object &name);
    

        object serialize_VkAccelerationStructureBuildGeometryInfoKHR(VkAccelerationStructureBuildGeometryInfoKHR name);
        VkAccelerationStructureBuildGeometryInfoKHR deserialize_VkAccelerationStructureBuildGeometryInfoKHR(object &name);
    

        object serialize_VkAccelerationStructureBuildRangeInfoKHR(VkAccelerationStructureBuildRangeInfoKHR name);
        VkAccelerationStructureBuildRangeInfoKHR deserialize_VkAccelerationStructureBuildRangeInfoKHR(object &name);
    

        object serialize_VkAccelerationStructureCreateInfoKHR(VkAccelerationStructureCreateInfoKHR name);
        VkAccelerationStructureCreateInfoKHR deserialize_VkAccelerationStructureCreateInfoKHR(object &name);
    

        object serialize_VkAabbPositionsKHR(VkAabbPositionsKHR name);
        VkAabbPositionsKHR deserialize_VkAabbPositionsKHR(object &name);
    

        object serialize_VkAabbPositionsNV(VkAabbPositionsNV name);
        VkAabbPositionsNV deserialize_VkAabbPositionsNV(object &name);
    

        object serialize_VkTransformMatrixKHR(VkTransformMatrixKHR name);
        VkTransformMatrixKHR deserialize_VkTransformMatrixKHR(object &name);
    

        object serialize_VkTransformMatrixNV(VkTransformMatrixNV name);
        VkTransformMatrixNV deserialize_VkTransformMatrixNV(object &name);
    

        object serialize_VkAccelerationStructureInstanceKHR(VkAccelerationStructureInstanceKHR name);
        VkAccelerationStructureInstanceKHR deserialize_VkAccelerationStructureInstanceKHR(object &name);
    

        object serialize_VkAccelerationStructureInstanceNV(VkAccelerationStructureInstanceNV name);
        VkAccelerationStructureInstanceNV deserialize_VkAccelerationStructureInstanceNV(object &name);
    

        object serialize_VkAccelerationStructureDeviceAddressInfoKHR(VkAccelerationStructureDeviceAddressInfoKHR name);
        VkAccelerationStructureDeviceAddressInfoKHR deserialize_VkAccelerationStructureDeviceAddressInfoKHR(object &name);
    

        object serialize_VkAccelerationStructureVersionInfoKHR(VkAccelerationStructureVersionInfoKHR name);
        VkAccelerationStructureVersionInfoKHR deserialize_VkAccelerationStructureVersionInfoKHR(object &name);
    

        object serialize_VkCopyAccelerationStructureInfoKHR(VkCopyAccelerationStructureInfoKHR name);
        VkCopyAccelerationStructureInfoKHR deserialize_VkCopyAccelerationStructureInfoKHR(object &name);
    

        object serialize_VkCopyAccelerationStructureToMemoryInfoKHR(VkCopyAccelerationStructureToMemoryInfoKHR name);
        VkCopyAccelerationStructureToMemoryInfoKHR deserialize_VkCopyAccelerationStructureToMemoryInfoKHR(object &name);
    

        object serialize_VkCopyMemoryToAccelerationStructureInfoKHR(VkCopyMemoryToAccelerationStructureInfoKHR name);
        VkCopyMemoryToAccelerationStructureInfoKHR deserialize_VkCopyMemoryToAccelerationStructureInfoKHR(object &name);
    

        object serialize_VkRayTracingPipelineInterfaceCreateInfoKHR(VkRayTracingPipelineInterfaceCreateInfoKHR name);
        VkRayTracingPipelineInterfaceCreateInfoKHR deserialize_VkRayTracingPipelineInterfaceCreateInfoKHR(object &name);
    

        object serialize_VkPipelineLibraryCreateInfoKHR(VkPipelineLibraryCreateInfoKHR name);
        VkPipelineLibraryCreateInfoKHR deserialize_VkPipelineLibraryCreateInfoKHR(object &name);
    

        object serialize_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT name);
        VkPhysicalDeviceExtendedDynamicStateFeaturesEXT deserialize_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT name);
        VkPhysicalDeviceExtendedDynamicState2FeaturesEXT deserialize_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT(VkPhysicalDeviceExtendedDynamicState3FeaturesEXT name);
        VkPhysicalDeviceExtendedDynamicState3FeaturesEXT deserialize_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT(VkPhysicalDeviceExtendedDynamicState3PropertiesEXT name);
        VkPhysicalDeviceExtendedDynamicState3PropertiesEXT deserialize_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT(object &name);
    

        object serialize_VkColorBlendEquationEXT(VkColorBlendEquationEXT name);
        VkColorBlendEquationEXT deserialize_VkColorBlendEquationEXT(object &name);
    

        object serialize_VkColorBlendAdvancedEXT(VkColorBlendAdvancedEXT name);
        VkColorBlendAdvancedEXT deserialize_VkColorBlendAdvancedEXT(object &name);
    

        object serialize_VkRenderPassTransformBeginInfoQCOM(VkRenderPassTransformBeginInfoQCOM name);
        VkRenderPassTransformBeginInfoQCOM deserialize_VkRenderPassTransformBeginInfoQCOM(object &name);
    

        object serialize_VkCopyCommandTransformInfoQCOM(VkCopyCommandTransformInfoQCOM name);
        VkCopyCommandTransformInfoQCOM deserialize_VkCopyCommandTransformInfoQCOM(object &name);
    

        object serialize_VkCommandBufferInheritanceRenderPassTransformInfoQCOM(VkCommandBufferInheritanceRenderPassTransformInfoQCOM name);
        VkCommandBufferInheritanceRenderPassTransformInfoQCOM deserialize_VkCommandBufferInheritanceRenderPassTransformInfoQCOM(object &name);
    

        object serialize_VkPhysicalDeviceDiagnosticsConfigFeaturesNV(VkPhysicalDeviceDiagnosticsConfigFeaturesNV name);
        VkPhysicalDeviceDiagnosticsConfigFeaturesNV deserialize_VkPhysicalDeviceDiagnosticsConfigFeaturesNV(object &name);
    

        object serialize_VkDeviceDiagnosticsConfigCreateInfoNV(VkDeviceDiagnosticsConfigCreateInfoNV name);
        VkDeviceDiagnosticsConfigCreateInfoNV deserialize_VkDeviceDiagnosticsConfigCreateInfoNV(object &name);
    

        object serialize_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures name);
        VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures deserialize_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(object &name);
    

        object serialize_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR name);
        VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR deserialize_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR name);
        VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR deserialize_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceRobustness2FeaturesEXT(VkPhysicalDeviceRobustness2FeaturesEXT name);
        VkPhysicalDeviceRobustness2FeaturesEXT deserialize_VkPhysicalDeviceRobustness2FeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceRobustness2PropertiesEXT(VkPhysicalDeviceRobustness2PropertiesEXT name);
        VkPhysicalDeviceRobustness2PropertiesEXT deserialize_VkPhysicalDeviceRobustness2PropertiesEXT(object &name);
    

        object serialize_VkPhysicalDeviceImageRobustnessFeatures(VkPhysicalDeviceImageRobustnessFeatures name);
        VkPhysicalDeviceImageRobustnessFeatures deserialize_VkPhysicalDeviceImageRobustnessFeatures(object &name);
    

        object serialize_VkPhysicalDeviceImageRobustnessFeaturesEXT(VkPhysicalDeviceImageRobustnessFeaturesEXT name);
        VkPhysicalDeviceImageRobustnessFeaturesEXT deserialize_VkPhysicalDeviceImageRobustnessFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR name);
        VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR deserialize_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDevice4444FormatsFeaturesEXT(VkPhysicalDevice4444FormatsFeaturesEXT name);
        VkPhysicalDevice4444FormatsFeaturesEXT deserialize_VkPhysicalDevice4444FormatsFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI name);
        VkPhysicalDeviceSubpassShadingFeaturesHUAWEI deserialize_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI(object &name);
    

        object serialize_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI(VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI name);
        VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI deserialize_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI(object &name);
    

        object serialize_VkBufferCopy2(VkBufferCopy2 name);
        VkBufferCopy2 deserialize_VkBufferCopy2(object &name);
    

        object serialize_VkBufferCopy2KHR(VkBufferCopy2KHR name);
        VkBufferCopy2KHR deserialize_VkBufferCopy2KHR(object &name);
    

        object serialize_VkImageCopy2(VkImageCopy2 name);
        VkImageCopy2 deserialize_VkImageCopy2(object &name);
    

        object serialize_VkImageCopy2KHR(VkImageCopy2KHR name);
        VkImageCopy2KHR deserialize_VkImageCopy2KHR(object &name);
    

        object serialize_VkImageBlit2(VkImageBlit2 name);
        VkImageBlit2 deserialize_VkImageBlit2(object &name);
    

        object serialize_VkImageBlit2KHR(VkImageBlit2KHR name);
        VkImageBlit2KHR deserialize_VkImageBlit2KHR(object &name);
    

        object serialize_VkBufferImageCopy2(VkBufferImageCopy2 name);
        VkBufferImageCopy2 deserialize_VkBufferImageCopy2(object &name);
    

        object serialize_VkBufferImageCopy2KHR(VkBufferImageCopy2KHR name);
        VkBufferImageCopy2KHR deserialize_VkBufferImageCopy2KHR(object &name);
    

        object serialize_VkImageResolve2(VkImageResolve2 name);
        VkImageResolve2 deserialize_VkImageResolve2(object &name);
    

        object serialize_VkImageResolve2KHR(VkImageResolve2KHR name);
        VkImageResolve2KHR deserialize_VkImageResolve2KHR(object &name);
    

        object serialize_VkCopyBufferInfo2(VkCopyBufferInfo2 name);
        VkCopyBufferInfo2 deserialize_VkCopyBufferInfo2(object &name);
    

        object serialize_VkCopyBufferInfo2KHR(VkCopyBufferInfo2KHR name);
        VkCopyBufferInfo2KHR deserialize_VkCopyBufferInfo2KHR(object &name);
    

        object serialize_VkCopyImageInfo2(VkCopyImageInfo2 name);
        VkCopyImageInfo2 deserialize_VkCopyImageInfo2(object &name);
    

        object serialize_VkCopyImageInfo2KHR(VkCopyImageInfo2KHR name);
        VkCopyImageInfo2KHR deserialize_VkCopyImageInfo2KHR(object &name);
    

        object serialize_VkBlitImageInfo2(VkBlitImageInfo2 name);
        VkBlitImageInfo2 deserialize_VkBlitImageInfo2(object &name);
    

        object serialize_VkBlitImageInfo2KHR(VkBlitImageInfo2KHR name);
        VkBlitImageInfo2KHR deserialize_VkBlitImageInfo2KHR(object &name);
    

        object serialize_VkCopyBufferToImageInfo2(VkCopyBufferToImageInfo2 name);
        VkCopyBufferToImageInfo2 deserialize_VkCopyBufferToImageInfo2(object &name);
    

        object serialize_VkCopyBufferToImageInfo2KHR(VkCopyBufferToImageInfo2KHR name);
        VkCopyBufferToImageInfo2KHR deserialize_VkCopyBufferToImageInfo2KHR(object &name);
    

        object serialize_VkCopyImageToBufferInfo2(VkCopyImageToBufferInfo2 name);
        VkCopyImageToBufferInfo2 deserialize_VkCopyImageToBufferInfo2(object &name);
    

        object serialize_VkCopyImageToBufferInfo2KHR(VkCopyImageToBufferInfo2KHR name);
        VkCopyImageToBufferInfo2KHR deserialize_VkCopyImageToBufferInfo2KHR(object &name);
    

        object serialize_VkResolveImageInfo2(VkResolveImageInfo2 name);
        VkResolveImageInfo2 deserialize_VkResolveImageInfo2(object &name);
    

        object serialize_VkResolveImageInfo2KHR(VkResolveImageInfo2KHR name);
        VkResolveImageInfo2KHR deserialize_VkResolveImageInfo2KHR(object &name);
    

        object serialize_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT name);
        VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT deserialize_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT(object &name);
    

        object serialize_VkFragmentShadingRateAttachmentInfoKHR(VkFragmentShadingRateAttachmentInfoKHR name);
        VkFragmentShadingRateAttachmentInfoKHR deserialize_VkFragmentShadingRateAttachmentInfoKHR(object &name);
    

        object serialize_VkPipelineFragmentShadingRateStateCreateInfoKHR(VkPipelineFragmentShadingRateStateCreateInfoKHR name);
        VkPipelineFragmentShadingRateStateCreateInfoKHR deserialize_VkPipelineFragmentShadingRateStateCreateInfoKHR(object &name);
    

        object serialize_VkPhysicalDeviceFragmentShadingRateFeaturesKHR(VkPhysicalDeviceFragmentShadingRateFeaturesKHR name);
        VkPhysicalDeviceFragmentShadingRateFeaturesKHR deserialize_VkPhysicalDeviceFragmentShadingRateFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceFragmentShadingRatePropertiesKHR(VkPhysicalDeviceFragmentShadingRatePropertiesKHR name);
        VkPhysicalDeviceFragmentShadingRatePropertiesKHR deserialize_VkPhysicalDeviceFragmentShadingRatePropertiesKHR(object &name);
    

        object serialize_VkPhysicalDeviceFragmentShadingRateKHR(VkPhysicalDeviceFragmentShadingRateKHR name);
        VkPhysicalDeviceFragmentShadingRateKHR deserialize_VkPhysicalDeviceFragmentShadingRateKHR(object &name);
    

        object serialize_VkPhysicalDeviceShaderTerminateInvocationFeatures(VkPhysicalDeviceShaderTerminateInvocationFeatures name);
        VkPhysicalDeviceShaderTerminateInvocationFeatures deserialize_VkPhysicalDeviceShaderTerminateInvocationFeatures(object &name);
    

        object serialize_VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR(VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR name);
        VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR deserialize_VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV(VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV name);
        VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV deserialize_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV(object &name);
    

        object serialize_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV(VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV name);
        VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV deserialize_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV(object &name);
    

        object serialize_VkPipelineFragmentShadingRateEnumStateCreateInfoNV(VkPipelineFragmentShadingRateEnumStateCreateInfoNV name);
        VkPipelineFragmentShadingRateEnumStateCreateInfoNV deserialize_VkPipelineFragmentShadingRateEnumStateCreateInfoNV(object &name);
    

        object serialize_VkAccelerationStructureBuildSizesInfoKHR(VkAccelerationStructureBuildSizesInfoKHR name);
        VkAccelerationStructureBuildSizesInfoKHR deserialize_VkAccelerationStructureBuildSizesInfoKHR(object &name);
    

        object serialize_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT(VkPhysicalDeviceImage2DViewOf3DFeaturesEXT name);
        VkPhysicalDeviceImage2DViewOf3DFeaturesEXT deserialize_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT(VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT name);
        VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT deserialize_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT name);
        VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT deserialize_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT(VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT name);
        VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT deserialize_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE(VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE name);
        VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE deserialize_VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE(object &name);
    

        object serialize_VkMutableDescriptorTypeListEXT(VkMutableDescriptorTypeListEXT name);
        VkMutableDescriptorTypeListEXT deserialize_VkMutableDescriptorTypeListEXT(object &name);
    

        object serialize_VkMutableDescriptorTypeListVALVE(VkMutableDescriptorTypeListVALVE name);
        VkMutableDescriptorTypeListVALVE deserialize_VkMutableDescriptorTypeListVALVE(object &name);
    

        object serialize_VkMutableDescriptorTypeCreateInfoEXT(VkMutableDescriptorTypeCreateInfoEXT name);
        VkMutableDescriptorTypeCreateInfoEXT deserialize_VkMutableDescriptorTypeCreateInfoEXT(object &name);
    

        object serialize_VkMutableDescriptorTypeCreateInfoVALVE(VkMutableDescriptorTypeCreateInfoVALVE name);
        VkMutableDescriptorTypeCreateInfoVALVE deserialize_VkMutableDescriptorTypeCreateInfoVALVE(object &name);
    

        object serialize_VkPhysicalDeviceDepthClipControlFeaturesEXT(VkPhysicalDeviceDepthClipControlFeaturesEXT name);
        VkPhysicalDeviceDepthClipControlFeaturesEXT deserialize_VkPhysicalDeviceDepthClipControlFeaturesEXT(object &name);
    

        object serialize_VkPipelineViewportDepthClipControlCreateInfoEXT(VkPipelineViewportDepthClipControlCreateInfoEXT name);
        VkPipelineViewportDepthClipControlCreateInfoEXT deserialize_VkPipelineViewportDepthClipControlCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT name);
        VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT deserialize_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV(VkPhysicalDeviceExternalMemoryRDMAFeaturesNV name);
        VkPhysicalDeviceExternalMemoryRDMAFeaturesNV deserialize_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV(object &name);
    

        object serialize_VkVertexInputBindingDescription2EXT(VkVertexInputBindingDescription2EXT name);
        VkVertexInputBindingDescription2EXT deserialize_VkVertexInputBindingDescription2EXT(object &name);
    

        object serialize_VkVertexInputAttributeDescription2EXT(VkVertexInputAttributeDescription2EXT name);
        VkVertexInputAttributeDescription2EXT deserialize_VkVertexInputAttributeDescription2EXT(object &name);
    

        object serialize_VkPhysicalDeviceColorWriteEnableFeaturesEXT(VkPhysicalDeviceColorWriteEnableFeaturesEXT name);
        VkPhysicalDeviceColorWriteEnableFeaturesEXT deserialize_VkPhysicalDeviceColorWriteEnableFeaturesEXT(object &name);
    

        object serialize_VkPipelineColorWriteCreateInfoEXT(VkPipelineColorWriteCreateInfoEXT name);
        VkPipelineColorWriteCreateInfoEXT deserialize_VkPipelineColorWriteCreateInfoEXT(object &name);
    

        object serialize_VkMemoryBarrier2(VkMemoryBarrier2 name);
        VkMemoryBarrier2 deserialize_VkMemoryBarrier2(object &name);
    

        object serialize_VkMemoryBarrier2KHR(VkMemoryBarrier2KHR name);
        VkMemoryBarrier2KHR deserialize_VkMemoryBarrier2KHR(object &name);
    

        object serialize_VkImageMemoryBarrier2(VkImageMemoryBarrier2 name);
        VkImageMemoryBarrier2 deserialize_VkImageMemoryBarrier2(object &name);
    

        object serialize_VkImageMemoryBarrier2KHR(VkImageMemoryBarrier2KHR name);
        VkImageMemoryBarrier2KHR deserialize_VkImageMemoryBarrier2KHR(object &name);
    

        object serialize_VkBufferMemoryBarrier2(VkBufferMemoryBarrier2 name);
        VkBufferMemoryBarrier2 deserialize_VkBufferMemoryBarrier2(object &name);
    

        object serialize_VkBufferMemoryBarrier2KHR(VkBufferMemoryBarrier2KHR name);
        VkBufferMemoryBarrier2KHR deserialize_VkBufferMemoryBarrier2KHR(object &name);
    

        object serialize_VkDependencyInfo(VkDependencyInfo name);
        VkDependencyInfo deserialize_VkDependencyInfo(object &name);
    

        object serialize_VkDependencyInfoKHR(VkDependencyInfoKHR name);
        VkDependencyInfoKHR deserialize_VkDependencyInfoKHR(object &name);
    

        object serialize_VkSemaphoreSubmitInfo(VkSemaphoreSubmitInfo name);
        VkSemaphoreSubmitInfo deserialize_VkSemaphoreSubmitInfo(object &name);
    

        object serialize_VkSemaphoreSubmitInfoKHR(VkSemaphoreSubmitInfoKHR name);
        VkSemaphoreSubmitInfoKHR deserialize_VkSemaphoreSubmitInfoKHR(object &name);
    

        object serialize_VkCommandBufferSubmitInfo(VkCommandBufferSubmitInfo name);
        VkCommandBufferSubmitInfo deserialize_VkCommandBufferSubmitInfo(object &name);
    

        object serialize_VkCommandBufferSubmitInfoKHR(VkCommandBufferSubmitInfoKHR name);
        VkCommandBufferSubmitInfoKHR deserialize_VkCommandBufferSubmitInfoKHR(object &name);
    

        object serialize_VkSubmitInfo2(VkSubmitInfo2 name);
        VkSubmitInfo2 deserialize_VkSubmitInfo2(object &name);
    

        object serialize_VkSubmitInfo2KHR(VkSubmitInfo2KHR name);
        VkSubmitInfo2KHR deserialize_VkSubmitInfo2KHR(object &name);
    

        object serialize_VkQueueFamilyCheckpointProperties2NV(VkQueueFamilyCheckpointProperties2NV name);
        VkQueueFamilyCheckpointProperties2NV deserialize_VkQueueFamilyCheckpointProperties2NV(object &name);
    

        object serialize_VkCheckpointData2NV(VkCheckpointData2NV name);
        VkCheckpointData2NV deserialize_VkCheckpointData2NV(object &name);
    

        object serialize_VkPhysicalDeviceSynchronization2Features(VkPhysicalDeviceSynchronization2Features name);
        VkPhysicalDeviceSynchronization2Features deserialize_VkPhysicalDeviceSynchronization2Features(object &name);
    

        object serialize_VkPhysicalDeviceSynchronization2FeaturesKHR(VkPhysicalDeviceSynchronization2FeaturesKHR name);
        VkPhysicalDeviceSynchronization2FeaturesKHR deserialize_VkPhysicalDeviceSynchronization2FeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceHostImageCopyFeaturesEXT(VkPhysicalDeviceHostImageCopyFeaturesEXT name);
        VkPhysicalDeviceHostImageCopyFeaturesEXT deserialize_VkPhysicalDeviceHostImageCopyFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceHostImageCopyPropertiesEXT(VkPhysicalDeviceHostImageCopyPropertiesEXT name);
        VkPhysicalDeviceHostImageCopyPropertiesEXT deserialize_VkPhysicalDeviceHostImageCopyPropertiesEXT(object &name);
    

        object serialize_VkMemoryToImageCopyEXT(VkMemoryToImageCopyEXT name);
        VkMemoryToImageCopyEXT deserialize_VkMemoryToImageCopyEXT(object &name);
    

        object serialize_VkImageToMemoryCopyEXT(VkImageToMemoryCopyEXT name);
        VkImageToMemoryCopyEXT deserialize_VkImageToMemoryCopyEXT(object &name);
    

        object serialize_VkCopyMemoryToImageInfoEXT(VkCopyMemoryToImageInfoEXT name);
        VkCopyMemoryToImageInfoEXT deserialize_VkCopyMemoryToImageInfoEXT(object &name);
    

        object serialize_VkCopyImageToMemoryInfoEXT(VkCopyImageToMemoryInfoEXT name);
        VkCopyImageToMemoryInfoEXT deserialize_VkCopyImageToMemoryInfoEXT(object &name);
    

        object serialize_VkCopyImageToImageInfoEXT(VkCopyImageToImageInfoEXT name);
        VkCopyImageToImageInfoEXT deserialize_VkCopyImageToImageInfoEXT(object &name);
    

        object serialize_VkHostImageLayoutTransitionInfoEXT(VkHostImageLayoutTransitionInfoEXT name);
        VkHostImageLayoutTransitionInfoEXT deserialize_VkHostImageLayoutTransitionInfoEXT(object &name);
    

        object serialize_VkSubresourceHostMemcpySizeEXT(VkSubresourceHostMemcpySizeEXT name);
        VkSubresourceHostMemcpySizeEXT deserialize_VkSubresourceHostMemcpySizeEXT(object &name);
    

        object serialize_VkHostImageCopyDevicePerformanceQueryEXT(VkHostImageCopyDevicePerformanceQueryEXT name);
        VkHostImageCopyDevicePerformanceQueryEXT deserialize_VkHostImageCopyDevicePerformanceQueryEXT(object &name);
    

        object serialize_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT name);
        VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT deserialize_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceLegacyDitheringFeaturesEXT(VkPhysicalDeviceLegacyDitheringFeaturesEXT name);
        VkPhysicalDeviceLegacyDitheringFeaturesEXT deserialize_VkPhysicalDeviceLegacyDitheringFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT name);
        VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT deserialize_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(object &name);
    

        object serialize_VkSubpassResolvePerformanceQueryEXT(VkSubpassResolvePerformanceQueryEXT name);
        VkSubpassResolvePerformanceQueryEXT deserialize_VkSubpassResolvePerformanceQueryEXT(object &name);
    

        object serialize_VkMultisampledRenderToSingleSampledInfoEXT(VkMultisampledRenderToSingleSampledInfoEXT name);
        VkMultisampledRenderToSingleSampledInfoEXT deserialize_VkMultisampledRenderToSingleSampledInfoEXT(object &name);
    

        object serialize_VkPhysicalDevicePipelineProtectedAccessFeaturesEXT(VkPhysicalDevicePipelineProtectedAccessFeaturesEXT name);
        VkPhysicalDevicePipelineProtectedAccessFeaturesEXT deserialize_VkPhysicalDevicePipelineProtectedAccessFeaturesEXT(object &name);
    

        object serialize_VkQueueFamilyVideoPropertiesKHR(VkQueueFamilyVideoPropertiesKHR name);
        VkQueueFamilyVideoPropertiesKHR deserialize_VkQueueFamilyVideoPropertiesKHR(object &name);
    

        object serialize_VkQueueFamilyQueryResultStatusPropertiesKHR(VkQueueFamilyQueryResultStatusPropertiesKHR name);
        VkQueueFamilyQueryResultStatusPropertiesKHR deserialize_VkQueueFamilyQueryResultStatusPropertiesKHR(object &name);
    

        object serialize_VkVideoProfileListInfoKHR(VkVideoProfileListInfoKHR name);
        VkVideoProfileListInfoKHR deserialize_VkVideoProfileListInfoKHR(object &name);
    

        object serialize_VkPhysicalDeviceVideoFormatInfoKHR(VkPhysicalDeviceVideoFormatInfoKHR name);
        VkPhysicalDeviceVideoFormatInfoKHR deserialize_VkPhysicalDeviceVideoFormatInfoKHR(object &name);
    

        object serialize_VkVideoFormatPropertiesKHR(VkVideoFormatPropertiesKHR name);
        VkVideoFormatPropertiesKHR deserialize_VkVideoFormatPropertiesKHR(object &name);
    

        object serialize_VkVideoProfileInfoKHR(VkVideoProfileInfoKHR name);
        VkVideoProfileInfoKHR deserialize_VkVideoProfileInfoKHR(object &name);
    

        object serialize_VkVideoCapabilitiesKHR(VkVideoCapabilitiesKHR name);
        VkVideoCapabilitiesKHR deserialize_VkVideoCapabilitiesKHR(object &name);
    

        object serialize_VkVideoSessionMemoryRequirementsKHR(VkVideoSessionMemoryRequirementsKHR name);
        VkVideoSessionMemoryRequirementsKHR deserialize_VkVideoSessionMemoryRequirementsKHR(object &name);
    

        object serialize_VkBindVideoSessionMemoryInfoKHR(VkBindVideoSessionMemoryInfoKHR name);
        VkBindVideoSessionMemoryInfoKHR deserialize_VkBindVideoSessionMemoryInfoKHR(object &name);
    

        object serialize_VkVideoPictureResourceInfoKHR(VkVideoPictureResourceInfoKHR name);
        VkVideoPictureResourceInfoKHR deserialize_VkVideoPictureResourceInfoKHR(object &name);
    

        object serialize_VkVideoReferenceSlotInfoKHR(VkVideoReferenceSlotInfoKHR name);
        VkVideoReferenceSlotInfoKHR deserialize_VkVideoReferenceSlotInfoKHR(object &name);
    

        object serialize_VkVideoDecodeCapabilitiesKHR(VkVideoDecodeCapabilitiesKHR name);
        VkVideoDecodeCapabilitiesKHR deserialize_VkVideoDecodeCapabilitiesKHR(object &name);
    

        object serialize_VkVideoDecodeUsageInfoKHR(VkVideoDecodeUsageInfoKHR name);
        VkVideoDecodeUsageInfoKHR deserialize_VkVideoDecodeUsageInfoKHR(object &name);
    

        object serialize_VkVideoDecodeInfoKHR(VkVideoDecodeInfoKHR name);
        VkVideoDecodeInfoKHR deserialize_VkVideoDecodeInfoKHR(object &name);
    

        object serialize_VkVideoDecodeH264ProfileInfoKHR(VkVideoDecodeH264ProfileInfoKHR name);
        VkVideoDecodeH264ProfileInfoKHR deserialize_VkVideoDecodeH264ProfileInfoKHR(object &name);
    

        object serialize_VkVideoDecodeH264CapabilitiesKHR(VkVideoDecodeH264CapabilitiesKHR name);
        VkVideoDecodeH264CapabilitiesKHR deserialize_VkVideoDecodeH264CapabilitiesKHR(object &name);
    

        object serialize_VkVideoDecodeH264SessionParametersAddInfoKHR(VkVideoDecodeH264SessionParametersAddInfoKHR name);
        VkVideoDecodeH264SessionParametersAddInfoKHR deserialize_VkVideoDecodeH264SessionParametersAddInfoKHR(object &name);
    

        object serialize_VkVideoDecodeH264SessionParametersCreateInfoKHR(VkVideoDecodeH264SessionParametersCreateInfoKHR name);
        VkVideoDecodeH264SessionParametersCreateInfoKHR deserialize_VkVideoDecodeH264SessionParametersCreateInfoKHR(object &name);
    

        object serialize_VkVideoDecodeH264PictureInfoKHR(VkVideoDecodeH264PictureInfoKHR name);
        VkVideoDecodeH264PictureInfoKHR deserialize_VkVideoDecodeH264PictureInfoKHR(object &name);
    

        object serialize_VkVideoDecodeH264DpbSlotInfoKHR(VkVideoDecodeH264DpbSlotInfoKHR name);
        VkVideoDecodeH264DpbSlotInfoKHR deserialize_VkVideoDecodeH264DpbSlotInfoKHR(object &name);
    

        object serialize_VkVideoDecodeH265ProfileInfoKHR(VkVideoDecodeH265ProfileInfoKHR name);
        VkVideoDecodeH265ProfileInfoKHR deserialize_VkVideoDecodeH265ProfileInfoKHR(object &name);
    

        object serialize_VkVideoDecodeH265CapabilitiesKHR(VkVideoDecodeH265CapabilitiesKHR name);
        VkVideoDecodeH265CapabilitiesKHR deserialize_VkVideoDecodeH265CapabilitiesKHR(object &name);
    

        object serialize_VkVideoDecodeH265SessionParametersAddInfoKHR(VkVideoDecodeH265SessionParametersAddInfoKHR name);
        VkVideoDecodeH265SessionParametersAddInfoKHR deserialize_VkVideoDecodeH265SessionParametersAddInfoKHR(object &name);
    

        object serialize_VkVideoDecodeH265SessionParametersCreateInfoKHR(VkVideoDecodeH265SessionParametersCreateInfoKHR name);
        VkVideoDecodeH265SessionParametersCreateInfoKHR deserialize_VkVideoDecodeH265SessionParametersCreateInfoKHR(object &name);
    

        object serialize_VkVideoDecodeH265PictureInfoKHR(VkVideoDecodeH265PictureInfoKHR name);
        VkVideoDecodeH265PictureInfoKHR deserialize_VkVideoDecodeH265PictureInfoKHR(object &name);
    

        object serialize_VkVideoDecodeH265DpbSlotInfoKHR(VkVideoDecodeH265DpbSlotInfoKHR name);
        VkVideoDecodeH265DpbSlotInfoKHR deserialize_VkVideoDecodeH265DpbSlotInfoKHR(object &name);
    

        object serialize_VkVideoSessionCreateInfoKHR(VkVideoSessionCreateInfoKHR name);
        VkVideoSessionCreateInfoKHR deserialize_VkVideoSessionCreateInfoKHR(object &name);
    

        object serialize_VkVideoSessionParametersCreateInfoKHR(VkVideoSessionParametersCreateInfoKHR name);
        VkVideoSessionParametersCreateInfoKHR deserialize_VkVideoSessionParametersCreateInfoKHR(object &name);
    

        object serialize_VkVideoSessionParametersUpdateInfoKHR(VkVideoSessionParametersUpdateInfoKHR name);
        VkVideoSessionParametersUpdateInfoKHR deserialize_VkVideoSessionParametersUpdateInfoKHR(object &name);
    

        object serialize_VkVideoBeginCodingInfoKHR(VkVideoBeginCodingInfoKHR name);
        VkVideoBeginCodingInfoKHR deserialize_VkVideoBeginCodingInfoKHR(object &name);
    

        object serialize_VkVideoEndCodingInfoKHR(VkVideoEndCodingInfoKHR name);
        VkVideoEndCodingInfoKHR deserialize_VkVideoEndCodingInfoKHR(object &name);
    

        object serialize_VkVideoCodingControlInfoKHR(VkVideoCodingControlInfoKHR name);
        VkVideoCodingControlInfoKHR deserialize_VkVideoCodingControlInfoKHR(object &name);
    

        object serialize_VkPhysicalDeviceInheritedViewportScissorFeaturesNV(VkPhysicalDeviceInheritedViewportScissorFeaturesNV name);
        VkPhysicalDeviceInheritedViewportScissorFeaturesNV deserialize_VkPhysicalDeviceInheritedViewportScissorFeaturesNV(object &name);
    

        object serialize_VkCommandBufferInheritanceViewportScissorInfoNV(VkCommandBufferInheritanceViewportScissorInfoNV name);
        VkCommandBufferInheritanceViewportScissorInfoNV deserialize_VkCommandBufferInheritanceViewportScissorInfoNV(object &name);
    

        object serialize_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT name);
        VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT deserialize_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceProvokingVertexFeaturesEXT(VkPhysicalDeviceProvokingVertexFeaturesEXT name);
        VkPhysicalDeviceProvokingVertexFeaturesEXT deserialize_VkPhysicalDeviceProvokingVertexFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceProvokingVertexPropertiesEXT(VkPhysicalDeviceProvokingVertexPropertiesEXT name);
        VkPhysicalDeviceProvokingVertexPropertiesEXT deserialize_VkPhysicalDeviceProvokingVertexPropertiesEXT(object &name);
    

        object serialize_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT(VkPipelineRasterizationProvokingVertexStateCreateInfoEXT name);
        VkPipelineRasterizationProvokingVertexStateCreateInfoEXT deserialize_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT(object &name);
    

        object serialize_VkCuModuleCreateInfoNVX(VkCuModuleCreateInfoNVX name);
        VkCuModuleCreateInfoNVX deserialize_VkCuModuleCreateInfoNVX(object &name);
    

        object serialize_VkCuFunctionCreateInfoNVX(VkCuFunctionCreateInfoNVX name);
        VkCuFunctionCreateInfoNVX deserialize_VkCuFunctionCreateInfoNVX(object &name);
    

        object serialize_VkCuLaunchInfoNVX(VkCuLaunchInfoNVX name);
        VkCuLaunchInfoNVX deserialize_VkCuLaunchInfoNVX(object &name);
    

        object serialize_VkPhysicalDeviceDescriptorBufferFeaturesEXT(VkPhysicalDeviceDescriptorBufferFeaturesEXT name);
        VkPhysicalDeviceDescriptorBufferFeaturesEXT deserialize_VkPhysicalDeviceDescriptorBufferFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceDescriptorBufferPropertiesEXT(VkPhysicalDeviceDescriptorBufferPropertiesEXT name);
        VkPhysicalDeviceDescriptorBufferPropertiesEXT deserialize_VkPhysicalDeviceDescriptorBufferPropertiesEXT(object &name);
    

        object serialize_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT name);
        VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT deserialize_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(object &name);
    

        object serialize_VkDescriptorAddressInfoEXT(VkDescriptorAddressInfoEXT name);
        VkDescriptorAddressInfoEXT deserialize_VkDescriptorAddressInfoEXT(object &name);
    

        object serialize_VkDescriptorBufferBindingInfoEXT(VkDescriptorBufferBindingInfoEXT name);
        VkDescriptorBufferBindingInfoEXT deserialize_VkDescriptorBufferBindingInfoEXT(object &name);
    

        object serialize_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT(VkDescriptorBufferBindingPushDescriptorBufferHandleEXT name);
        VkDescriptorBufferBindingPushDescriptorBufferHandleEXT deserialize_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT(object &name);
    

        object serialize_VkDescriptorDataEXT(VkDescriptorDataEXT name);
        VkDescriptorDataEXT deserialize_VkDescriptorDataEXT(object &name);
    

        object serialize_VkDescriptorGetInfoEXT(VkDescriptorGetInfoEXT name);
        VkDescriptorGetInfoEXT deserialize_VkDescriptorGetInfoEXT(object &name);
    

        object serialize_VkBufferCaptureDescriptorDataInfoEXT(VkBufferCaptureDescriptorDataInfoEXT name);
        VkBufferCaptureDescriptorDataInfoEXT deserialize_VkBufferCaptureDescriptorDataInfoEXT(object &name);
    

        object serialize_VkImageCaptureDescriptorDataInfoEXT(VkImageCaptureDescriptorDataInfoEXT name);
        VkImageCaptureDescriptorDataInfoEXT deserialize_VkImageCaptureDescriptorDataInfoEXT(object &name);
    

        object serialize_VkImageViewCaptureDescriptorDataInfoEXT(VkImageViewCaptureDescriptorDataInfoEXT name);
        VkImageViewCaptureDescriptorDataInfoEXT deserialize_VkImageViewCaptureDescriptorDataInfoEXT(object &name);
    

        object serialize_VkSamplerCaptureDescriptorDataInfoEXT(VkSamplerCaptureDescriptorDataInfoEXT name);
        VkSamplerCaptureDescriptorDataInfoEXT deserialize_VkSamplerCaptureDescriptorDataInfoEXT(object &name);
    

        object serialize_VkAccelerationStructureCaptureDescriptorDataInfoEXT(VkAccelerationStructureCaptureDescriptorDataInfoEXT name);
        VkAccelerationStructureCaptureDescriptorDataInfoEXT deserialize_VkAccelerationStructureCaptureDescriptorDataInfoEXT(object &name);
    

        object serialize_VkOpaqueCaptureDescriptorDataCreateInfoEXT(VkOpaqueCaptureDescriptorDataCreateInfoEXT name);
        VkOpaqueCaptureDescriptorDataCreateInfoEXT deserialize_VkOpaqueCaptureDescriptorDataCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceShaderIntegerDotProductFeatures(VkPhysicalDeviceShaderIntegerDotProductFeatures name);
        VkPhysicalDeviceShaderIntegerDotProductFeatures deserialize_VkPhysicalDeviceShaderIntegerDotProductFeatures(object &name);
    

        object serialize_VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR(VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR name);
        VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR deserialize_VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceShaderIntegerDotProductProperties(VkPhysicalDeviceShaderIntegerDotProductProperties name);
        VkPhysicalDeviceShaderIntegerDotProductProperties deserialize_VkPhysicalDeviceShaderIntegerDotProductProperties(object &name);
    

        object serialize_VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR(VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR name);
        VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR deserialize_VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR(object &name);
    

        object serialize_VkPhysicalDeviceDrmPropertiesEXT(VkPhysicalDeviceDrmPropertiesEXT name);
        VkPhysicalDeviceDrmPropertiesEXT deserialize_VkPhysicalDeviceDrmPropertiesEXT(object &name);
    

        object serialize_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR(VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR name);
        VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR deserialize_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR(object &name);
    

        object serialize_VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV(VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV name);
        VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV deserialize_VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV(object &name);
    

        object serialize_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR(VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR name);
        VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR deserialize_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR(object &name);
    

        object serialize_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV(VkPhysicalDeviceRayTracingMotionBlurFeaturesNV name);
        VkPhysicalDeviceRayTracingMotionBlurFeaturesNV deserialize_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV(object &name);
    

        object serialize_VkAccelerationStructureGeometryMotionTrianglesDataNV(VkAccelerationStructureGeometryMotionTrianglesDataNV name);
        VkAccelerationStructureGeometryMotionTrianglesDataNV deserialize_VkAccelerationStructureGeometryMotionTrianglesDataNV(object &name);
    

        object serialize_VkAccelerationStructureMotionInfoNV(VkAccelerationStructureMotionInfoNV name);
        VkAccelerationStructureMotionInfoNV deserialize_VkAccelerationStructureMotionInfoNV(object &name);
    

        object serialize_VkSRTDataNV(VkSRTDataNV name);
        VkSRTDataNV deserialize_VkSRTDataNV(object &name);
    

        object serialize_VkAccelerationStructureSRTMotionInstanceNV(VkAccelerationStructureSRTMotionInstanceNV name);
        VkAccelerationStructureSRTMotionInstanceNV deserialize_VkAccelerationStructureSRTMotionInstanceNV(object &name);
    

        object serialize_VkAccelerationStructureMatrixMotionInstanceNV(VkAccelerationStructureMatrixMotionInstanceNV name);
        VkAccelerationStructureMatrixMotionInstanceNV deserialize_VkAccelerationStructureMatrixMotionInstanceNV(object &name);
    

        object serialize_VkAccelerationStructureMotionInstanceDataNV(VkAccelerationStructureMotionInstanceDataNV name);
        VkAccelerationStructureMotionInstanceDataNV deserialize_VkAccelerationStructureMotionInstanceDataNV(object &name);
    

        object serialize_VkAccelerationStructureMotionInstanceNV(VkAccelerationStructureMotionInstanceNV name);
        VkAccelerationStructureMotionInstanceNV deserialize_VkAccelerationStructureMotionInstanceNV(object &name);
    

        object serialize_VkMemoryGetRemoteAddressInfoNV(VkMemoryGetRemoteAddressInfoNV name);
        VkMemoryGetRemoteAddressInfoNV deserialize_VkMemoryGetRemoteAddressInfoNV(object &name);
    

        object serialize_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT(VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT name);
        VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT deserialize_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT(object &name);
    

        object serialize_VkFormatProperties3(VkFormatProperties3 name);
        VkFormatProperties3 deserialize_VkFormatProperties3(object &name);
    

        object serialize_VkFormatProperties3KHR(VkFormatProperties3KHR name);
        VkFormatProperties3KHR deserialize_VkFormatProperties3KHR(object &name);
    

        object serialize_VkDrmFormatModifierPropertiesList2EXT(VkDrmFormatModifierPropertiesList2EXT name);
        VkDrmFormatModifierPropertiesList2EXT deserialize_VkDrmFormatModifierPropertiesList2EXT(object &name);
    

        object serialize_VkDrmFormatModifierProperties2EXT(VkDrmFormatModifierProperties2EXT name);
        VkDrmFormatModifierProperties2EXT deserialize_VkDrmFormatModifierProperties2EXT(object &name);
    

        object serialize_VkPipelineRenderingCreateInfo(VkPipelineRenderingCreateInfo name);
        VkPipelineRenderingCreateInfo deserialize_VkPipelineRenderingCreateInfo(object &name);
    

        object serialize_VkPipelineRenderingCreateInfoKHR(VkPipelineRenderingCreateInfoKHR name);
        VkPipelineRenderingCreateInfoKHR deserialize_VkPipelineRenderingCreateInfoKHR(object &name);
    

        object serialize_VkRenderingInfo(VkRenderingInfo name);
        VkRenderingInfo deserialize_VkRenderingInfo(object &name);
    

        object serialize_VkRenderingInfoKHR(VkRenderingInfoKHR name);
        VkRenderingInfoKHR deserialize_VkRenderingInfoKHR(object &name);
    

        object serialize_VkRenderingAttachmentInfo(VkRenderingAttachmentInfo name);
        VkRenderingAttachmentInfo deserialize_VkRenderingAttachmentInfo(object &name);
    

        object serialize_VkRenderingAttachmentInfoKHR(VkRenderingAttachmentInfoKHR name);
        VkRenderingAttachmentInfoKHR deserialize_VkRenderingAttachmentInfoKHR(object &name);
    

        object serialize_VkRenderingFragmentShadingRateAttachmentInfoKHR(VkRenderingFragmentShadingRateAttachmentInfoKHR name);
        VkRenderingFragmentShadingRateAttachmentInfoKHR deserialize_VkRenderingFragmentShadingRateAttachmentInfoKHR(object &name);
    

        object serialize_VkRenderingFragmentDensityMapAttachmentInfoEXT(VkRenderingFragmentDensityMapAttachmentInfoEXT name);
        VkRenderingFragmentDensityMapAttachmentInfoEXT deserialize_VkRenderingFragmentDensityMapAttachmentInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceDynamicRenderingFeatures(VkPhysicalDeviceDynamicRenderingFeatures name);
        VkPhysicalDeviceDynamicRenderingFeatures deserialize_VkPhysicalDeviceDynamicRenderingFeatures(object &name);
    

        object serialize_VkPhysicalDeviceDynamicRenderingFeaturesKHR(VkPhysicalDeviceDynamicRenderingFeaturesKHR name);
        VkPhysicalDeviceDynamicRenderingFeaturesKHR deserialize_VkPhysicalDeviceDynamicRenderingFeaturesKHR(object &name);
    

        object serialize_VkCommandBufferInheritanceRenderingInfo(VkCommandBufferInheritanceRenderingInfo name);
        VkCommandBufferInheritanceRenderingInfo deserialize_VkCommandBufferInheritanceRenderingInfo(object &name);
    

        object serialize_VkCommandBufferInheritanceRenderingInfoKHR(VkCommandBufferInheritanceRenderingInfoKHR name);
        VkCommandBufferInheritanceRenderingInfoKHR deserialize_VkCommandBufferInheritanceRenderingInfoKHR(object &name);
    

        object serialize_VkAttachmentSampleCountInfoAMD(VkAttachmentSampleCountInfoAMD name);
        VkAttachmentSampleCountInfoAMD deserialize_VkAttachmentSampleCountInfoAMD(object &name);
    

        object serialize_VkAttachmentSampleCountInfoNV(VkAttachmentSampleCountInfoNV name);
        VkAttachmentSampleCountInfoNV deserialize_VkAttachmentSampleCountInfoNV(object &name);
    

        object serialize_VkMultiviewPerViewAttributesInfoNVX(VkMultiviewPerViewAttributesInfoNVX name);
        VkMultiviewPerViewAttributesInfoNVX deserialize_VkMultiviewPerViewAttributesInfoNVX(object &name);
    

        object serialize_VkPhysicalDeviceImageViewMinLodFeaturesEXT(VkPhysicalDeviceImageViewMinLodFeaturesEXT name);
        VkPhysicalDeviceImageViewMinLodFeaturesEXT deserialize_VkPhysicalDeviceImageViewMinLodFeaturesEXT(object &name);
    

        object serialize_VkImageViewMinLodCreateInfoEXT(VkImageViewMinLodCreateInfoEXT name);
        VkImageViewMinLodCreateInfoEXT deserialize_VkImageViewMinLodCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT name);
        VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT deserialize_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM name);
        VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM deserialize_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM(object &name);
    

        object serialize_VkPhysicalDeviceLinearColorAttachmentFeaturesNV(VkPhysicalDeviceLinearColorAttachmentFeaturesNV name);
        VkPhysicalDeviceLinearColorAttachmentFeaturesNV deserialize_VkPhysicalDeviceLinearColorAttachmentFeaturesNV(object &name);
    

        object serialize_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT name);
        VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT deserialize_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT name);
        VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT deserialize_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(object &name);
    

        object serialize_VkGraphicsPipelineLibraryCreateInfoEXT(VkGraphicsPipelineLibraryCreateInfoEXT name);
        VkGraphicsPipelineLibraryCreateInfoEXT deserialize_VkGraphicsPipelineLibraryCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE name);
        VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE deserialize_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(object &name);
    

        object serialize_VkDescriptorSetBindingReferenceVALVE(VkDescriptorSetBindingReferenceVALVE name);
        VkDescriptorSetBindingReferenceVALVE deserialize_VkDescriptorSetBindingReferenceVALVE(object &name);
    

        object serialize_VkDescriptorSetLayoutHostMappingInfoVALVE(VkDescriptorSetLayoutHostMappingInfoVALVE name);
        VkDescriptorSetLayoutHostMappingInfoVALVE deserialize_VkDescriptorSetLayoutHostMappingInfoVALVE(object &name);
    

        object serialize_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT(VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT name);
        VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT deserialize_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT(VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT name);
        VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT deserialize_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT(object &name);
    

        object serialize_VkPipelineShaderStageModuleIdentifierCreateInfoEXT(VkPipelineShaderStageModuleIdentifierCreateInfoEXT name);
        VkPipelineShaderStageModuleIdentifierCreateInfoEXT deserialize_VkPipelineShaderStageModuleIdentifierCreateInfoEXT(object &name);
    

        object serialize_VkShaderModuleIdentifierEXT(VkShaderModuleIdentifierEXT name);
        VkShaderModuleIdentifierEXT deserialize_VkShaderModuleIdentifierEXT(object &name);
    

        object serialize_VkImageCompressionControlEXT(VkImageCompressionControlEXT name);
        VkImageCompressionControlEXT deserialize_VkImageCompressionControlEXT(object &name);
    

        object serialize_VkPhysicalDeviceImageCompressionControlFeaturesEXT(VkPhysicalDeviceImageCompressionControlFeaturesEXT name);
        VkPhysicalDeviceImageCompressionControlFeaturesEXT deserialize_VkPhysicalDeviceImageCompressionControlFeaturesEXT(object &name);
    

        object serialize_VkImageCompressionPropertiesEXT(VkImageCompressionPropertiesEXT name);
        VkImageCompressionPropertiesEXT deserialize_VkImageCompressionPropertiesEXT(object &name);
    

        object serialize_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT name);
        VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT deserialize_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(object &name);
    

        object serialize_VkImageSubresource2KHR(VkImageSubresource2KHR name);
        VkImageSubresource2KHR deserialize_VkImageSubresource2KHR(object &name);
    

        object serialize_VkImageSubresource2EXT(VkImageSubresource2EXT name);
        VkImageSubresource2EXT deserialize_VkImageSubresource2EXT(object &name);
    

        object serialize_VkSubresourceLayout2KHR(VkSubresourceLayout2KHR name);
        VkSubresourceLayout2KHR deserialize_VkSubresourceLayout2KHR(object &name);
    

        object serialize_VkSubresourceLayout2EXT(VkSubresourceLayout2EXT name);
        VkSubresourceLayout2EXT deserialize_VkSubresourceLayout2EXT(object &name);
    

        object serialize_VkRenderPassCreationControlEXT(VkRenderPassCreationControlEXT name);
        VkRenderPassCreationControlEXT deserialize_VkRenderPassCreationControlEXT(object &name);
    

        object serialize_VkRenderPassCreationFeedbackInfoEXT(VkRenderPassCreationFeedbackInfoEXT name);
        VkRenderPassCreationFeedbackInfoEXT deserialize_VkRenderPassCreationFeedbackInfoEXT(object &name);
    

        object serialize_VkRenderPassCreationFeedbackCreateInfoEXT(VkRenderPassCreationFeedbackCreateInfoEXT name);
        VkRenderPassCreationFeedbackCreateInfoEXT deserialize_VkRenderPassCreationFeedbackCreateInfoEXT(object &name);
    

        object serialize_VkRenderPassSubpassFeedbackInfoEXT(VkRenderPassSubpassFeedbackInfoEXT name);
        VkRenderPassSubpassFeedbackInfoEXT deserialize_VkRenderPassSubpassFeedbackInfoEXT(object &name);
    

        object serialize_VkRenderPassSubpassFeedbackCreateInfoEXT(VkRenderPassSubpassFeedbackCreateInfoEXT name);
        VkRenderPassSubpassFeedbackCreateInfoEXT deserialize_VkRenderPassSubpassFeedbackCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT name);
        VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT deserialize_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT(object &name);
    

        object serialize_VkMicromapBuildInfoEXT(VkMicromapBuildInfoEXT name);
        VkMicromapBuildInfoEXT deserialize_VkMicromapBuildInfoEXT(object &name);
    

        object serialize_VkMicromapCreateInfoEXT(VkMicromapCreateInfoEXT name);
        VkMicromapCreateInfoEXT deserialize_VkMicromapCreateInfoEXT(object &name);
    

        object serialize_VkMicromapVersionInfoEXT(VkMicromapVersionInfoEXT name);
        VkMicromapVersionInfoEXT deserialize_VkMicromapVersionInfoEXT(object &name);
    

        object serialize_VkCopyMicromapInfoEXT(VkCopyMicromapInfoEXT name);
        VkCopyMicromapInfoEXT deserialize_VkCopyMicromapInfoEXT(object &name);
    

        object serialize_VkCopyMicromapToMemoryInfoEXT(VkCopyMicromapToMemoryInfoEXT name);
        VkCopyMicromapToMemoryInfoEXT deserialize_VkCopyMicromapToMemoryInfoEXT(object &name);
    

        object serialize_VkCopyMemoryToMicromapInfoEXT(VkCopyMemoryToMicromapInfoEXT name);
        VkCopyMemoryToMicromapInfoEXT deserialize_VkCopyMemoryToMicromapInfoEXT(object &name);
    

        object serialize_VkMicromapBuildSizesInfoEXT(VkMicromapBuildSizesInfoEXT name);
        VkMicromapBuildSizesInfoEXT deserialize_VkMicromapBuildSizesInfoEXT(object &name);
    

        object serialize_VkMicromapUsageEXT(VkMicromapUsageEXT name);
        VkMicromapUsageEXT deserialize_VkMicromapUsageEXT(object &name);
    

        object serialize_VkMicromapTriangleEXT(VkMicromapTriangleEXT name);
        VkMicromapTriangleEXT deserialize_VkMicromapTriangleEXT(object &name);
    

        object serialize_VkPhysicalDeviceOpacityMicromapFeaturesEXT(VkPhysicalDeviceOpacityMicromapFeaturesEXT name);
        VkPhysicalDeviceOpacityMicromapFeaturesEXT deserialize_VkPhysicalDeviceOpacityMicromapFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceOpacityMicromapPropertiesEXT(VkPhysicalDeviceOpacityMicromapPropertiesEXT name);
        VkPhysicalDeviceOpacityMicromapPropertiesEXT deserialize_VkPhysicalDeviceOpacityMicromapPropertiesEXT(object &name);
    

        object serialize_VkAccelerationStructureTrianglesOpacityMicromapEXT(VkAccelerationStructureTrianglesOpacityMicromapEXT name);
        VkAccelerationStructureTrianglesOpacityMicromapEXT deserialize_VkAccelerationStructureTrianglesOpacityMicromapEXT(object &name);
    

        object serialize_VkPipelinePropertiesIdentifierEXT(VkPipelinePropertiesIdentifierEXT name);
        VkPipelinePropertiesIdentifierEXT deserialize_VkPipelinePropertiesIdentifierEXT(object &name);
    

        object serialize_VkPhysicalDevicePipelinePropertiesFeaturesEXT(VkPhysicalDevicePipelinePropertiesFeaturesEXT name);
        VkPhysicalDevicePipelinePropertiesFeaturesEXT deserialize_VkPhysicalDevicePipelinePropertiesFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD name);
        VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD deserialize_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(object &name);
    

        object serialize_VkExternalMemoryAcquireUnmodifiedEXT(VkExternalMemoryAcquireUnmodifiedEXT name);
        VkExternalMemoryAcquireUnmodifiedEXT deserialize_VkExternalMemoryAcquireUnmodifiedEXT(object &name);
    

        object serialize_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT(VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT name);
        VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT deserialize_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDevicePipelineRobustnessFeaturesEXT(VkPhysicalDevicePipelineRobustnessFeaturesEXT name);
        VkPhysicalDevicePipelineRobustnessFeaturesEXT deserialize_VkPhysicalDevicePipelineRobustnessFeaturesEXT(object &name);
    

        object serialize_VkPipelineRobustnessCreateInfoEXT(VkPipelineRobustnessCreateInfoEXT name);
        VkPipelineRobustnessCreateInfoEXT deserialize_VkPipelineRobustnessCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDevicePipelineRobustnessPropertiesEXT(VkPhysicalDevicePipelineRobustnessPropertiesEXT name);
        VkPhysicalDevicePipelineRobustnessPropertiesEXT deserialize_VkPhysicalDevicePipelineRobustnessPropertiesEXT(object &name);
    

        object serialize_VkImageViewSampleWeightCreateInfoQCOM(VkImageViewSampleWeightCreateInfoQCOM name);
        VkImageViewSampleWeightCreateInfoQCOM deserialize_VkImageViewSampleWeightCreateInfoQCOM(object &name);
    

        object serialize_VkPhysicalDeviceImageProcessingFeaturesQCOM(VkPhysicalDeviceImageProcessingFeaturesQCOM name);
        VkPhysicalDeviceImageProcessingFeaturesQCOM deserialize_VkPhysicalDeviceImageProcessingFeaturesQCOM(object &name);
    

        object serialize_VkPhysicalDeviceImageProcessingPropertiesQCOM(VkPhysicalDeviceImageProcessingPropertiesQCOM name);
        VkPhysicalDeviceImageProcessingPropertiesQCOM deserialize_VkPhysicalDeviceImageProcessingPropertiesQCOM(object &name);
    

        object serialize_VkPhysicalDeviceTilePropertiesFeaturesQCOM(VkPhysicalDeviceTilePropertiesFeaturesQCOM name);
        VkPhysicalDeviceTilePropertiesFeaturesQCOM deserialize_VkPhysicalDeviceTilePropertiesFeaturesQCOM(object &name);
    

        object serialize_VkTilePropertiesQCOM(VkTilePropertiesQCOM name);
        VkTilePropertiesQCOM deserialize_VkTilePropertiesQCOM(object &name);
    

        object serialize_VkPhysicalDeviceAmigoProfilingFeaturesSEC(VkPhysicalDeviceAmigoProfilingFeaturesSEC name);
        VkPhysicalDeviceAmigoProfilingFeaturesSEC deserialize_VkPhysicalDeviceAmigoProfilingFeaturesSEC(object &name);
    

        object serialize_VkAmigoProfilingSubmitInfoSEC(VkAmigoProfilingSubmitInfoSEC name);
        VkAmigoProfilingSubmitInfoSEC deserialize_VkAmigoProfilingSubmitInfoSEC(object &name);
    

        object serialize_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT name);
        VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT deserialize_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceDepthClampZeroOneFeaturesEXT(VkPhysicalDeviceDepthClampZeroOneFeaturesEXT name);
        VkPhysicalDeviceDepthClampZeroOneFeaturesEXT deserialize_VkPhysicalDeviceDepthClampZeroOneFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceAddressBindingReportFeaturesEXT(VkPhysicalDeviceAddressBindingReportFeaturesEXT name);
        VkPhysicalDeviceAddressBindingReportFeaturesEXT deserialize_VkPhysicalDeviceAddressBindingReportFeaturesEXT(object &name);
    

        object serialize_VkDeviceAddressBindingCallbackDataEXT(VkDeviceAddressBindingCallbackDataEXT name);
        VkDeviceAddressBindingCallbackDataEXT deserialize_VkDeviceAddressBindingCallbackDataEXT(object &name);
    

        object serialize_VkPhysicalDeviceOpticalFlowFeaturesNV(VkPhysicalDeviceOpticalFlowFeaturesNV name);
        VkPhysicalDeviceOpticalFlowFeaturesNV deserialize_VkPhysicalDeviceOpticalFlowFeaturesNV(object &name);
    

        object serialize_VkPhysicalDeviceOpticalFlowPropertiesNV(VkPhysicalDeviceOpticalFlowPropertiesNV name);
        VkPhysicalDeviceOpticalFlowPropertiesNV deserialize_VkPhysicalDeviceOpticalFlowPropertiesNV(object &name);
    

        object serialize_VkOpticalFlowImageFormatInfoNV(VkOpticalFlowImageFormatInfoNV name);
        VkOpticalFlowImageFormatInfoNV deserialize_VkOpticalFlowImageFormatInfoNV(object &name);
    

        object serialize_VkOpticalFlowImageFormatPropertiesNV(VkOpticalFlowImageFormatPropertiesNV name);
        VkOpticalFlowImageFormatPropertiesNV deserialize_VkOpticalFlowImageFormatPropertiesNV(object &name);
    

        object serialize_VkOpticalFlowSessionCreateInfoNV(VkOpticalFlowSessionCreateInfoNV name);
        VkOpticalFlowSessionCreateInfoNV deserialize_VkOpticalFlowSessionCreateInfoNV(object &name);
    

        object serialize_VkOpticalFlowSessionCreatePrivateDataInfoNV(VkOpticalFlowSessionCreatePrivateDataInfoNV name);
        VkOpticalFlowSessionCreatePrivateDataInfoNV deserialize_VkOpticalFlowSessionCreatePrivateDataInfoNV(object &name);
    

        object serialize_VkOpticalFlowExecuteInfoNV(VkOpticalFlowExecuteInfoNV name);
        VkOpticalFlowExecuteInfoNV deserialize_VkOpticalFlowExecuteInfoNV(object &name);
    

        object serialize_VkPhysicalDeviceFaultFeaturesEXT(VkPhysicalDeviceFaultFeaturesEXT name);
        VkPhysicalDeviceFaultFeaturesEXT deserialize_VkPhysicalDeviceFaultFeaturesEXT(object &name);
    

        object serialize_VkDeviceFaultAddressInfoEXT(VkDeviceFaultAddressInfoEXT name);
        VkDeviceFaultAddressInfoEXT deserialize_VkDeviceFaultAddressInfoEXT(object &name);
    

        object serialize_VkDeviceFaultVendorInfoEXT(VkDeviceFaultVendorInfoEXT name);
        VkDeviceFaultVendorInfoEXT deserialize_VkDeviceFaultVendorInfoEXT(object &name);
    

        object serialize_VkDeviceFaultCountsEXT(VkDeviceFaultCountsEXT name);
        VkDeviceFaultCountsEXT deserialize_VkDeviceFaultCountsEXT(object &name);
    

        object serialize_VkDeviceFaultInfoEXT(VkDeviceFaultInfoEXT name);
        VkDeviceFaultInfoEXT deserialize_VkDeviceFaultInfoEXT(object &name);
    

        object serialize_VkDeviceFaultVendorBinaryHeaderVersionOneEXT(VkDeviceFaultVendorBinaryHeaderVersionOneEXT name);
        VkDeviceFaultVendorBinaryHeaderVersionOneEXT deserialize_VkDeviceFaultVendorBinaryHeaderVersionOneEXT(object &name);
    

        object serialize_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT name);
        VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT deserialize_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(object &name);
    

        object serialize_VkDepthBiasInfoEXT(VkDepthBiasInfoEXT name);
        VkDepthBiasInfoEXT deserialize_VkDepthBiasInfoEXT(object &name);
    

        object serialize_VkDepthBiasRepresentationInfoEXT(VkDepthBiasRepresentationInfoEXT name);
        VkDepthBiasRepresentationInfoEXT deserialize_VkDepthBiasRepresentationInfoEXT(object &name);
    

        object serialize_VkDecompressMemoryRegionNV(VkDecompressMemoryRegionNV name);
        VkDecompressMemoryRegionNV deserialize_VkDecompressMemoryRegionNV(object &name);
    

        object serialize_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM(VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM name);
        VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM deserialize_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM(object &name);
    

        object serialize_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM(VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM name);
        VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM deserialize_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM(object &name);
    

        object serialize_VkFrameBoundaryEXT(VkFrameBoundaryEXT name);
        VkFrameBoundaryEXT deserialize_VkFrameBoundaryEXT(object &name);
    

        object serialize_VkPhysicalDeviceFrameBoundaryFeaturesEXT(VkPhysicalDeviceFrameBoundaryFeaturesEXT name);
        VkPhysicalDeviceFrameBoundaryFeaturesEXT deserialize_VkPhysicalDeviceFrameBoundaryFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT name);
        VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT deserialize_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(object &name);
    

        object serialize_VkSurfacePresentModeEXT(VkSurfacePresentModeEXT name);
        VkSurfacePresentModeEXT deserialize_VkSurfacePresentModeEXT(object &name);
    

        object serialize_VkSurfacePresentScalingCapabilitiesEXT(VkSurfacePresentScalingCapabilitiesEXT name);
        VkSurfacePresentScalingCapabilitiesEXT deserialize_VkSurfacePresentScalingCapabilitiesEXT(object &name);
    

        object serialize_VkSurfacePresentModeCompatibilityEXT(VkSurfacePresentModeCompatibilityEXT name);
        VkSurfacePresentModeCompatibilityEXT deserialize_VkSurfacePresentModeCompatibilityEXT(object &name);
    

        object serialize_VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT(VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT name);
        VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT deserialize_VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT(object &name);
    

        object serialize_VkSwapchainPresentFenceInfoEXT(VkSwapchainPresentFenceInfoEXT name);
        VkSwapchainPresentFenceInfoEXT deserialize_VkSwapchainPresentFenceInfoEXT(object &name);
    

        object serialize_VkSwapchainPresentModesCreateInfoEXT(VkSwapchainPresentModesCreateInfoEXT name);
        VkSwapchainPresentModesCreateInfoEXT deserialize_VkSwapchainPresentModesCreateInfoEXT(object &name);
    

        object serialize_VkSwapchainPresentModeInfoEXT(VkSwapchainPresentModeInfoEXT name);
        VkSwapchainPresentModeInfoEXT deserialize_VkSwapchainPresentModeInfoEXT(object &name);
    

        object serialize_VkSwapchainPresentScalingCreateInfoEXT(VkSwapchainPresentScalingCreateInfoEXT name);
        VkSwapchainPresentScalingCreateInfoEXT deserialize_VkSwapchainPresentScalingCreateInfoEXT(object &name);
    

        object serialize_VkReleaseSwapchainImagesInfoEXT(VkReleaseSwapchainImagesInfoEXT name);
        VkReleaseSwapchainImagesInfoEXT deserialize_VkReleaseSwapchainImagesInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceDepthBiasControlFeaturesEXT(VkPhysicalDeviceDepthBiasControlFeaturesEXT name);
        VkPhysicalDeviceDepthBiasControlFeaturesEXT deserialize_VkPhysicalDeviceDepthBiasControlFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV(VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV name);
        VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV deserialize_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV(object &name);
    

        object serialize_VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV(VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV name);
        VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV deserialize_VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV(object &name);
    

        object serialize_VkDirectDriverLoadingInfoLUNARG(VkDirectDriverLoadingInfoLUNARG name);
        VkDirectDriverLoadingInfoLUNARG deserialize_VkDirectDriverLoadingInfoLUNARG(object &name);
    

        object serialize_VkDirectDriverLoadingListLUNARG(VkDirectDriverLoadingListLUNARG name);
        VkDirectDriverLoadingListLUNARG deserialize_VkDirectDriverLoadingListLUNARG(object &name);
    

        object serialize_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM name);
        VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM deserialize_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(object &name);
    

        object serialize_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR(VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR name);
        VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR deserialize_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR(object &name);
    

        object serialize_VkDeviceImageSubresourceInfoKHR(VkDeviceImageSubresourceInfoKHR name);
        VkDeviceImageSubresourceInfoKHR deserialize_VkDeviceImageSubresourceInfoKHR(object &name);
    

        object serialize_VkPhysicalDeviceShaderCorePropertiesARM(VkPhysicalDeviceShaderCorePropertiesARM name);
        VkPhysicalDeviceShaderCorePropertiesARM deserialize_VkPhysicalDeviceShaderCorePropertiesARM(object &name);
    

        object serialize_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM name);
        VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM deserialize_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(object &name);
    

        object serialize_VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM(VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM name);
        VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM deserialize_VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM(object &name);
    

        object serialize_VkQueryLowLatencySupportNV(VkQueryLowLatencySupportNV name);
        VkQueryLowLatencySupportNV deserialize_VkQueryLowLatencySupportNV(object &name);
    

        object serialize_VkMemoryMapInfoKHR(VkMemoryMapInfoKHR name);
        VkMemoryMapInfoKHR deserialize_VkMemoryMapInfoKHR(object &name);
    

        object serialize_VkMemoryUnmapInfoKHR(VkMemoryUnmapInfoKHR name);
        VkMemoryUnmapInfoKHR deserialize_VkMemoryUnmapInfoKHR(object &name);
    

        object serialize_VkPhysicalDeviceShaderObjectFeaturesEXT(VkPhysicalDeviceShaderObjectFeaturesEXT name);
        VkPhysicalDeviceShaderObjectFeaturesEXT deserialize_VkPhysicalDeviceShaderObjectFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceShaderObjectPropertiesEXT(VkPhysicalDeviceShaderObjectPropertiesEXT name);
        VkPhysicalDeviceShaderObjectPropertiesEXT deserialize_VkPhysicalDeviceShaderObjectPropertiesEXT(object &name);
    

        object serialize_VkShaderCreateInfoEXT(VkShaderCreateInfoEXT name);
        VkShaderCreateInfoEXT deserialize_VkShaderCreateInfoEXT(object &name);
    

        object serialize_VkPhysicalDeviceShaderTileImageFeaturesEXT(VkPhysicalDeviceShaderTileImageFeaturesEXT name);
        VkPhysicalDeviceShaderTileImageFeaturesEXT deserialize_VkPhysicalDeviceShaderTileImageFeaturesEXT(object &name);
    

        object serialize_VkPhysicalDeviceShaderTileImagePropertiesEXT(VkPhysicalDeviceShaderTileImagePropertiesEXT name);
        VkPhysicalDeviceShaderTileImagePropertiesEXT deserialize_VkPhysicalDeviceShaderTileImagePropertiesEXT(object &name);
    

        object serialize_VkPhysicalDeviceCooperativeMatrixFeaturesKHR(VkPhysicalDeviceCooperativeMatrixFeaturesKHR name);
        VkPhysicalDeviceCooperativeMatrixFeaturesKHR deserialize_VkPhysicalDeviceCooperativeMatrixFeaturesKHR(object &name);
    

        object serialize_VkCooperativeMatrixPropertiesKHR(VkCooperativeMatrixPropertiesKHR name);
        VkCooperativeMatrixPropertiesKHR deserialize_VkCooperativeMatrixPropertiesKHR(object &name);
    

        object serialize_VkPhysicalDeviceCooperativeMatrixPropertiesKHR(VkPhysicalDeviceCooperativeMatrixPropertiesKHR name);
        VkPhysicalDeviceCooperativeMatrixPropertiesKHR deserialize_VkPhysicalDeviceCooperativeMatrixPropertiesKHR(object &name);
    

        object serialize_VkPhysicalDeviceCubicClampFeaturesQCOM(VkPhysicalDeviceCubicClampFeaturesQCOM name);
        VkPhysicalDeviceCubicClampFeaturesQCOM deserialize_VkPhysicalDeviceCubicClampFeaturesQCOM(object &name);
    

        object serialize_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM(VkPhysicalDeviceYcbcrDegammaFeaturesQCOM name);
        VkPhysicalDeviceYcbcrDegammaFeaturesQCOM deserialize_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM(object &name);
    

        object serialize_VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM(VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM name);
        VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM deserialize_VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM(object &name);
    

        object serialize_VkPhysicalDeviceCubicWeightsFeaturesQCOM(VkPhysicalDeviceCubicWeightsFeaturesQCOM name);
        VkPhysicalDeviceCubicWeightsFeaturesQCOM deserialize_VkPhysicalDeviceCubicWeightsFeaturesQCOM(object &name);
    

        object serialize_VkSamplerCubicWeightsCreateInfoQCOM(VkSamplerCubicWeightsCreateInfoQCOM name);
        VkSamplerCubicWeightsCreateInfoQCOM deserialize_VkSamplerCubicWeightsCreateInfoQCOM(object &name);
    

        object serialize_VkBlitImageCubicWeightsInfoQCOM(VkBlitImageCubicWeightsInfoQCOM name);
        VkBlitImageCubicWeightsInfoQCOM deserialize_VkBlitImageCubicWeightsInfoQCOM(object &name);
    

        object serialize_VkPhysicalDeviceImageProcessing2FeaturesQCOM(VkPhysicalDeviceImageProcessing2FeaturesQCOM name);
        VkPhysicalDeviceImageProcessing2FeaturesQCOM deserialize_VkPhysicalDeviceImageProcessing2FeaturesQCOM(object &name);
    

        object serialize_VkPhysicalDeviceImageProcessing2PropertiesQCOM(VkPhysicalDeviceImageProcessing2PropertiesQCOM name);
        VkPhysicalDeviceImageProcessing2PropertiesQCOM deserialize_VkPhysicalDeviceImageProcessing2PropertiesQCOM(object &name);
    

        object serialize_VkSamplerBlockMatchWindowCreateInfoQCOM(VkSamplerBlockMatchWindowCreateInfoQCOM name);
        VkSamplerBlockMatchWindowCreateInfoQCOM deserialize_VkSamplerBlockMatchWindowCreateInfoQCOM(object &name);
    

        object serialize_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV(VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV name);
        VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV deserialize_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV(object &name);
    

        object serialize_VkPhysicalDeviceLayeredDriverPropertiesMSFT(VkPhysicalDeviceLayeredDriverPropertiesMSFT name);
        VkPhysicalDeviceLayeredDriverPropertiesMSFT deserialize_VkPhysicalDeviceLayeredDriverPropertiesMSFT(object &name);
    

        object serialize_int(int name);
        int deserialize_int(object &name);
    

        object serialize_char(char name);
        char deserialize_char(object &name);
    

        object serialize_float(float name);
        float deserialize_float(object &name);
    

        object serialize_double(double name);
        double deserialize_double(object &name);
    

        object serialize_int8_t(int8_t name);
        int8_t deserialize_int8_t(object &name);
    

        object serialize_uint8_t(uint8_t name);
        uint8_t deserialize_uint8_t(object &name);
    

        object serialize_int16_t(int16_t name);
        int16_t deserialize_int16_t(object &name);
    

        object serialize_uint16_t(uint16_t name);
        uint16_t deserialize_uint16_t(object &name);
    

        object serialize_uint32_t(uint32_t name);
        uint32_t deserialize_uint32_t(object &name);
    

        object serialize_uint64_t(uint64_t name);
        uint64_t deserialize_uint64_t(object &name);
    

        object serialize_int32_t(int32_t name);
        int32_t deserialize_int32_t(object &name);
    

        object serialize_int64_t(int64_t name);
        int64_t deserialize_int64_t(object &name);
    

        object serialize_size_t(size_t name);
        size_t deserialize_size_t(object &name);
    

        object serialize_VkFramebufferCreateFlags(VkFramebufferCreateFlags name);
        VkFramebufferCreateFlags deserialize_VkFramebufferCreateFlags(object &name);
    

        object serialize_VkQueryPoolCreateFlags(VkQueryPoolCreateFlags name);
        VkQueryPoolCreateFlags deserialize_VkQueryPoolCreateFlags(object &name);
    

        object serialize_VkRenderPassCreateFlags(VkRenderPassCreateFlags name);
        VkRenderPassCreateFlags deserialize_VkRenderPassCreateFlags(object &name);
    

        object serialize_VkSamplerCreateFlags(VkSamplerCreateFlags name);
        VkSamplerCreateFlags deserialize_VkSamplerCreateFlags(object &name);
    

        object serialize_VkPipelineLayoutCreateFlags(VkPipelineLayoutCreateFlags name);
        VkPipelineLayoutCreateFlags deserialize_VkPipelineLayoutCreateFlags(object &name);
    

        object serialize_VkPipelineCacheCreateFlags(VkPipelineCacheCreateFlags name);
        VkPipelineCacheCreateFlags deserialize_VkPipelineCacheCreateFlags(object &name);
    

        object serialize_VkPipelineDepthStencilStateCreateFlags(VkPipelineDepthStencilStateCreateFlags name);
        VkPipelineDepthStencilStateCreateFlags deserialize_VkPipelineDepthStencilStateCreateFlags(object &name);
    

        object serialize_VkPipelineDynamicStateCreateFlags(VkPipelineDynamicStateCreateFlags name);
        VkPipelineDynamicStateCreateFlags deserialize_VkPipelineDynamicStateCreateFlags(object &name);
    

        object serialize_VkPipelineColorBlendStateCreateFlags(VkPipelineColorBlendStateCreateFlags name);
        VkPipelineColorBlendStateCreateFlags deserialize_VkPipelineColorBlendStateCreateFlags(object &name);
    

        object serialize_VkPipelineMultisampleStateCreateFlags(VkPipelineMultisampleStateCreateFlags name);
        VkPipelineMultisampleStateCreateFlags deserialize_VkPipelineMultisampleStateCreateFlags(object &name);
    

        object serialize_VkPipelineRasterizationStateCreateFlags(VkPipelineRasterizationStateCreateFlags name);
        VkPipelineRasterizationStateCreateFlags deserialize_VkPipelineRasterizationStateCreateFlags(object &name);
    

        object serialize_VkPipelineViewportStateCreateFlags(VkPipelineViewportStateCreateFlags name);
        VkPipelineViewportStateCreateFlags deserialize_VkPipelineViewportStateCreateFlags(object &name);
    

        object serialize_VkPipelineTessellationStateCreateFlags(VkPipelineTessellationStateCreateFlags name);
        VkPipelineTessellationStateCreateFlags deserialize_VkPipelineTessellationStateCreateFlags(object &name);
    

        object serialize_VkPipelineInputAssemblyStateCreateFlags(VkPipelineInputAssemblyStateCreateFlags name);
        VkPipelineInputAssemblyStateCreateFlags deserialize_VkPipelineInputAssemblyStateCreateFlags(object &name);
    

        object serialize_VkPipelineVertexInputStateCreateFlags(VkPipelineVertexInputStateCreateFlags name);
        VkPipelineVertexInputStateCreateFlags deserialize_VkPipelineVertexInputStateCreateFlags(object &name);
    

        object serialize_VkPipelineShaderStageCreateFlags(VkPipelineShaderStageCreateFlags name);
        VkPipelineShaderStageCreateFlags deserialize_VkPipelineShaderStageCreateFlags(object &name);
    

        object serialize_VkDescriptorSetLayoutCreateFlags(VkDescriptorSetLayoutCreateFlags name);
        VkDescriptorSetLayoutCreateFlags deserialize_VkDescriptorSetLayoutCreateFlags(object &name);
    

        object serialize_VkBufferViewCreateFlags(VkBufferViewCreateFlags name);
        VkBufferViewCreateFlags deserialize_VkBufferViewCreateFlags(object &name);
    

        object serialize_VkInstanceCreateFlags(VkInstanceCreateFlags name);
        VkInstanceCreateFlags deserialize_VkInstanceCreateFlags(object &name);
    

        object serialize_VkDeviceCreateFlags(VkDeviceCreateFlags name);
        VkDeviceCreateFlags deserialize_VkDeviceCreateFlags(object &name);
    

        object serialize_VkDeviceQueueCreateFlags(VkDeviceQueueCreateFlags name);
        VkDeviceQueueCreateFlags deserialize_VkDeviceQueueCreateFlags(object &name);
    

        object serialize_VkQueueFlags(VkQueueFlags name);
        VkQueueFlags deserialize_VkQueueFlags(object &name);
    

        object serialize_VkMemoryPropertyFlags(VkMemoryPropertyFlags name);
        VkMemoryPropertyFlags deserialize_VkMemoryPropertyFlags(object &name);
    

        object serialize_VkMemoryHeapFlags(VkMemoryHeapFlags name);
        VkMemoryHeapFlags deserialize_VkMemoryHeapFlags(object &name);
    

        object serialize_VkAccessFlags(VkAccessFlags name);
        VkAccessFlags deserialize_VkAccessFlags(object &name);
    

        object serialize_VkBufferUsageFlags(VkBufferUsageFlags name);
        VkBufferUsageFlags deserialize_VkBufferUsageFlags(object &name);
    

        object serialize_VkBufferCreateFlags(VkBufferCreateFlags name);
        VkBufferCreateFlags deserialize_VkBufferCreateFlags(object &name);
    

        object serialize_VkShaderStageFlags(VkShaderStageFlags name);
        VkShaderStageFlags deserialize_VkShaderStageFlags(object &name);
    

        object serialize_VkImageUsageFlags(VkImageUsageFlags name);
        VkImageUsageFlags deserialize_VkImageUsageFlags(object &name);
    

        object serialize_VkImageCreateFlags(VkImageCreateFlags name);
        VkImageCreateFlags deserialize_VkImageCreateFlags(object &name);
    

        object serialize_VkImageViewCreateFlags(VkImageViewCreateFlags name);
        VkImageViewCreateFlags deserialize_VkImageViewCreateFlags(object &name);
    

        object serialize_VkPipelineCreateFlags(VkPipelineCreateFlags name);
        VkPipelineCreateFlags deserialize_VkPipelineCreateFlags(object &name);
    

        object serialize_VkColorComponentFlags(VkColorComponentFlags name);
        VkColorComponentFlags deserialize_VkColorComponentFlags(object &name);
    

        object serialize_VkFenceCreateFlags(VkFenceCreateFlags name);
        VkFenceCreateFlags deserialize_VkFenceCreateFlags(object &name);
    

        object serialize_VkSemaphoreCreateFlags(VkSemaphoreCreateFlags name);
        VkSemaphoreCreateFlags deserialize_VkSemaphoreCreateFlags(object &name);
    

        object serialize_VkFormatFeatureFlags(VkFormatFeatureFlags name);
        VkFormatFeatureFlags deserialize_VkFormatFeatureFlags(object &name);
    

        object serialize_VkQueryControlFlags(VkQueryControlFlags name);
        VkQueryControlFlags deserialize_VkQueryControlFlags(object &name);
    

        object serialize_VkQueryResultFlags(VkQueryResultFlags name);
        VkQueryResultFlags deserialize_VkQueryResultFlags(object &name);
    

        object serialize_VkShaderModuleCreateFlags(VkShaderModuleCreateFlags name);
        VkShaderModuleCreateFlags deserialize_VkShaderModuleCreateFlags(object &name);
    

        object serialize_VkEventCreateFlags(VkEventCreateFlags name);
        VkEventCreateFlags deserialize_VkEventCreateFlags(object &name);
    

        object serialize_VkCommandPoolCreateFlags(VkCommandPoolCreateFlags name);
        VkCommandPoolCreateFlags deserialize_VkCommandPoolCreateFlags(object &name);
    

        object serialize_VkCommandPoolResetFlags(VkCommandPoolResetFlags name);
        VkCommandPoolResetFlags deserialize_VkCommandPoolResetFlags(object &name);
    

        object serialize_VkCommandBufferResetFlags(VkCommandBufferResetFlags name);
        VkCommandBufferResetFlags deserialize_VkCommandBufferResetFlags(object &name);
    

        object serialize_VkCommandBufferUsageFlags(VkCommandBufferUsageFlags name);
        VkCommandBufferUsageFlags deserialize_VkCommandBufferUsageFlags(object &name);
    

        object serialize_VkQueryPipelineStatisticFlags(VkQueryPipelineStatisticFlags name);
        VkQueryPipelineStatisticFlags deserialize_VkQueryPipelineStatisticFlags(object &name);
    

        object serialize_VkMemoryMapFlags(VkMemoryMapFlags name);
        VkMemoryMapFlags deserialize_VkMemoryMapFlags(object &name);
    

        object serialize_VkMemoryUnmapFlagsKHR(VkMemoryUnmapFlagsKHR name);
        VkMemoryUnmapFlagsKHR deserialize_VkMemoryUnmapFlagsKHR(object &name);
    

        object serialize_VkImageAspectFlags(VkImageAspectFlags name);
        VkImageAspectFlags deserialize_VkImageAspectFlags(object &name);
    

        object serialize_VkSparseMemoryBindFlags(VkSparseMemoryBindFlags name);
        VkSparseMemoryBindFlags deserialize_VkSparseMemoryBindFlags(object &name);
    

        object serialize_VkSparseImageFormatFlags(VkSparseImageFormatFlags name);
        VkSparseImageFormatFlags deserialize_VkSparseImageFormatFlags(object &name);
    

        object serialize_VkSubpassDescriptionFlags(VkSubpassDescriptionFlags name);
        VkSubpassDescriptionFlags deserialize_VkSubpassDescriptionFlags(object &name);
    

        object serialize_VkPipelineStageFlags(VkPipelineStageFlags name);
        VkPipelineStageFlags deserialize_VkPipelineStageFlags(object &name);
    

        object serialize_VkSampleCountFlags(VkSampleCountFlags name);
        VkSampleCountFlags deserialize_VkSampleCountFlags(object &name);
    

        object serialize_VkAttachmentDescriptionFlags(VkAttachmentDescriptionFlags name);
        VkAttachmentDescriptionFlags deserialize_VkAttachmentDescriptionFlags(object &name);
    

        object serialize_VkStencilFaceFlags(VkStencilFaceFlags name);
        VkStencilFaceFlags deserialize_VkStencilFaceFlags(object &name);
    

        object serialize_VkCullModeFlags(VkCullModeFlags name);
        VkCullModeFlags deserialize_VkCullModeFlags(object &name);
    

        object serialize_VkDescriptorPoolCreateFlags(VkDescriptorPoolCreateFlags name);
        VkDescriptorPoolCreateFlags deserialize_VkDescriptorPoolCreateFlags(object &name);
    

        object serialize_VkDescriptorPoolResetFlags(VkDescriptorPoolResetFlags name);
        VkDescriptorPoolResetFlags deserialize_VkDescriptorPoolResetFlags(object &name);
    

        object serialize_VkDependencyFlags(VkDependencyFlags name);
        VkDependencyFlags deserialize_VkDependencyFlags(object &name);
    

        object serialize_VkSubgroupFeatureFlags(VkSubgroupFeatureFlags name);
        VkSubgroupFeatureFlags deserialize_VkSubgroupFeatureFlags(object &name);
    

        object serialize_VkIndirectCommandsLayoutUsageFlagsNV(VkIndirectCommandsLayoutUsageFlagsNV name);
        VkIndirectCommandsLayoutUsageFlagsNV deserialize_VkIndirectCommandsLayoutUsageFlagsNV(object &name);
    

        object serialize_VkIndirectStateFlagsNV(VkIndirectStateFlagsNV name);
        VkIndirectStateFlagsNV deserialize_VkIndirectStateFlagsNV(object &name);
    

        object serialize_VkGeometryFlagsKHR(VkGeometryFlagsKHR name);
        VkGeometryFlagsKHR deserialize_VkGeometryFlagsKHR(object &name);
    

        object serialize_VkGeometryFlagsNV(VkGeometryFlagsNV name);
        VkGeometryFlagsNV deserialize_VkGeometryFlagsNV(object &name);
    

        object serialize_VkGeometryInstanceFlagsKHR(VkGeometryInstanceFlagsKHR name);
        VkGeometryInstanceFlagsKHR deserialize_VkGeometryInstanceFlagsKHR(object &name);
    

        object serialize_VkGeometryInstanceFlagsNV(VkGeometryInstanceFlagsNV name);
        VkGeometryInstanceFlagsNV deserialize_VkGeometryInstanceFlagsNV(object &name);
    

        object serialize_VkBuildAccelerationStructureFlagsKHR(VkBuildAccelerationStructureFlagsKHR name);
        VkBuildAccelerationStructureFlagsKHR deserialize_VkBuildAccelerationStructureFlagsKHR(object &name);
    

        object serialize_VkBuildAccelerationStructureFlagsNV(VkBuildAccelerationStructureFlagsNV name);
        VkBuildAccelerationStructureFlagsNV deserialize_VkBuildAccelerationStructureFlagsNV(object &name);
    

        object serialize_VkPrivateDataSlotCreateFlags(VkPrivateDataSlotCreateFlags name);
        VkPrivateDataSlotCreateFlags deserialize_VkPrivateDataSlotCreateFlags(object &name);
    

        object serialize_VkPrivateDataSlotCreateFlagsEXT(VkPrivateDataSlotCreateFlagsEXT name);
        VkPrivateDataSlotCreateFlagsEXT deserialize_VkPrivateDataSlotCreateFlagsEXT(object &name);
    

        object serialize_VkAccelerationStructureCreateFlagsKHR(VkAccelerationStructureCreateFlagsKHR name);
        VkAccelerationStructureCreateFlagsKHR deserialize_VkAccelerationStructureCreateFlagsKHR(object &name);
    

        object serialize_VkDescriptorUpdateTemplateCreateFlags(VkDescriptorUpdateTemplateCreateFlags name);
        VkDescriptorUpdateTemplateCreateFlags deserialize_VkDescriptorUpdateTemplateCreateFlags(object &name);
    

        object serialize_VkDescriptorUpdateTemplateCreateFlagsKHR(VkDescriptorUpdateTemplateCreateFlagsKHR name);
        VkDescriptorUpdateTemplateCreateFlagsKHR deserialize_VkDescriptorUpdateTemplateCreateFlagsKHR(object &name);
    

        object serialize_VkPipelineCreationFeedbackFlags(VkPipelineCreationFeedbackFlags name);
        VkPipelineCreationFeedbackFlags deserialize_VkPipelineCreationFeedbackFlags(object &name);
    

        object serialize_VkPipelineCreationFeedbackFlagsEXT(VkPipelineCreationFeedbackFlagsEXT name);
        VkPipelineCreationFeedbackFlagsEXT deserialize_VkPipelineCreationFeedbackFlagsEXT(object &name);
    

        object serialize_VkPerformanceCounterDescriptionFlagsKHR(VkPerformanceCounterDescriptionFlagsKHR name);
        VkPerformanceCounterDescriptionFlagsKHR deserialize_VkPerformanceCounterDescriptionFlagsKHR(object &name);
    

        object serialize_VkAcquireProfilingLockFlagsKHR(VkAcquireProfilingLockFlagsKHR name);
        VkAcquireProfilingLockFlagsKHR deserialize_VkAcquireProfilingLockFlagsKHR(object &name);
    

        object serialize_VkSemaphoreWaitFlags(VkSemaphoreWaitFlags name);
        VkSemaphoreWaitFlags deserialize_VkSemaphoreWaitFlags(object &name);
    

        object serialize_VkSemaphoreWaitFlagsKHR(VkSemaphoreWaitFlagsKHR name);
        VkSemaphoreWaitFlagsKHR deserialize_VkSemaphoreWaitFlagsKHR(object &name);
    

        object serialize_VkPipelineCompilerControlFlagsAMD(VkPipelineCompilerControlFlagsAMD name);
        VkPipelineCompilerControlFlagsAMD deserialize_VkPipelineCompilerControlFlagsAMD(object &name);
    

        object serialize_VkShaderCorePropertiesFlagsAMD(VkShaderCorePropertiesFlagsAMD name);
        VkShaderCorePropertiesFlagsAMD deserialize_VkShaderCorePropertiesFlagsAMD(object &name);
    

        object serialize_VkDeviceDiagnosticsConfigFlagsNV(VkDeviceDiagnosticsConfigFlagsNV name);
        VkDeviceDiagnosticsConfigFlagsNV deserialize_VkDeviceDiagnosticsConfigFlagsNV(object &name);
    

        object serialize_VkAccessFlags2(VkAccessFlags2 name);
        VkAccessFlags2 deserialize_VkAccessFlags2(object &name);
    

        object serialize_VkAccessFlags2KHR(VkAccessFlags2KHR name);
        VkAccessFlags2KHR deserialize_VkAccessFlags2KHR(object &name);
    

        object serialize_VkPipelineStageFlags2(VkPipelineStageFlags2 name);
        VkPipelineStageFlags2 deserialize_VkPipelineStageFlags2(object &name);
    

        object serialize_VkPipelineStageFlags2KHR(VkPipelineStageFlags2KHR name);
        VkPipelineStageFlags2KHR deserialize_VkPipelineStageFlags2KHR(object &name);
    

        object serialize_VkAccelerationStructureMotionInfoFlagsNV(VkAccelerationStructureMotionInfoFlagsNV name);
        VkAccelerationStructureMotionInfoFlagsNV deserialize_VkAccelerationStructureMotionInfoFlagsNV(object &name);
    

        object serialize_VkAccelerationStructureMotionInstanceFlagsNV(VkAccelerationStructureMotionInstanceFlagsNV name);
        VkAccelerationStructureMotionInstanceFlagsNV deserialize_VkAccelerationStructureMotionInstanceFlagsNV(object &name);
    

        object serialize_VkFormatFeatureFlags2(VkFormatFeatureFlags2 name);
        VkFormatFeatureFlags2 deserialize_VkFormatFeatureFlags2(object &name);
    

        object serialize_VkFormatFeatureFlags2KHR(VkFormatFeatureFlags2KHR name);
        VkFormatFeatureFlags2KHR deserialize_VkFormatFeatureFlags2KHR(object &name);
    

        object serialize_VkRenderingFlags(VkRenderingFlags name);
        VkRenderingFlags deserialize_VkRenderingFlags(object &name);
    

        object serialize_VkMemoryDecompressionMethodFlagsNV(VkMemoryDecompressionMethodFlagsNV name);
        VkMemoryDecompressionMethodFlagsNV deserialize_VkMemoryDecompressionMethodFlagsNV(object &name);
    

        object serialize_VkRenderingFlagsKHR(VkRenderingFlagsKHR name);
        VkRenderingFlagsKHR deserialize_VkRenderingFlagsKHR(object &name);
    

        object serialize_VkBuildMicromapFlagsEXT(VkBuildMicromapFlagsEXT name);
        VkBuildMicromapFlagsEXT deserialize_VkBuildMicromapFlagsEXT(object &name);
    

        object serialize_VkMicromapCreateFlagsEXT(VkMicromapCreateFlagsEXT name);
        VkMicromapCreateFlagsEXT deserialize_VkMicromapCreateFlagsEXT(object &name);
    

        object serialize_VkDirectDriverLoadingFlagsLUNARG(VkDirectDriverLoadingFlagsLUNARG name);
        VkDirectDriverLoadingFlagsLUNARG deserialize_VkDirectDriverLoadingFlagsLUNARG(object &name);
    

        object serialize_VkPipelineCreateFlags2KHR(VkPipelineCreateFlags2KHR name);
        VkPipelineCreateFlags2KHR deserialize_VkPipelineCreateFlags2KHR(object &name);
    

        object serialize_VkBufferUsageFlags2KHR(VkBufferUsageFlags2KHR name);
        VkBufferUsageFlags2KHR deserialize_VkBufferUsageFlags2KHR(object &name);
    

        object serialize_VkCompositeAlphaFlagsKHR(VkCompositeAlphaFlagsKHR name);
        VkCompositeAlphaFlagsKHR deserialize_VkCompositeAlphaFlagsKHR(object &name);
    

        object serialize_VkDisplayPlaneAlphaFlagsKHR(VkDisplayPlaneAlphaFlagsKHR name);
        VkDisplayPlaneAlphaFlagsKHR deserialize_VkDisplayPlaneAlphaFlagsKHR(object &name);
    

        object serialize_VkSurfaceTransformFlagsKHR(VkSurfaceTransformFlagsKHR name);
        VkSurfaceTransformFlagsKHR deserialize_VkSurfaceTransformFlagsKHR(object &name);
    

        object serialize_VkSwapchainCreateFlagsKHR(VkSwapchainCreateFlagsKHR name);
        VkSwapchainCreateFlagsKHR deserialize_VkSwapchainCreateFlagsKHR(object &name);
    

        object serialize_VkDisplayModeCreateFlagsKHR(VkDisplayModeCreateFlagsKHR name);
        VkDisplayModeCreateFlagsKHR deserialize_VkDisplayModeCreateFlagsKHR(object &name);
    

        object serialize_VkDisplaySurfaceCreateFlagsKHR(VkDisplaySurfaceCreateFlagsKHR name);
        VkDisplaySurfaceCreateFlagsKHR deserialize_VkDisplaySurfaceCreateFlagsKHR(object &name);
    

        object serialize_VkXlibSurfaceCreateFlagsKHR(VkXlibSurfaceCreateFlagsKHR name);
        VkXlibSurfaceCreateFlagsKHR deserialize_VkXlibSurfaceCreateFlagsKHR(object &name);
    

        object serialize_VkXcbSurfaceCreateFlagsKHR(VkXcbSurfaceCreateFlagsKHR name);
        VkXcbSurfaceCreateFlagsKHR deserialize_VkXcbSurfaceCreateFlagsKHR(object &name);
    

        object serialize_VkHeadlessSurfaceCreateFlagsEXT(VkHeadlessSurfaceCreateFlagsEXT name);
        VkHeadlessSurfaceCreateFlagsEXT deserialize_VkHeadlessSurfaceCreateFlagsEXT(object &name);
    

        object serialize_VkPeerMemoryFeatureFlags(VkPeerMemoryFeatureFlags name);
        VkPeerMemoryFeatureFlags deserialize_VkPeerMemoryFeatureFlags(object &name);
    

        object serialize_VkPeerMemoryFeatureFlagsKHR(VkPeerMemoryFeatureFlagsKHR name);
        VkPeerMemoryFeatureFlagsKHR deserialize_VkPeerMemoryFeatureFlagsKHR(object &name);
    

        object serialize_VkMemoryAllocateFlags(VkMemoryAllocateFlags name);
        VkMemoryAllocateFlags deserialize_VkMemoryAllocateFlags(object &name);
    

        object serialize_VkMemoryAllocateFlagsKHR(VkMemoryAllocateFlagsKHR name);
        VkMemoryAllocateFlagsKHR deserialize_VkMemoryAllocateFlagsKHR(object &name);
    

        object serialize_VkDeviceGroupPresentModeFlagsKHR(VkDeviceGroupPresentModeFlagsKHR name);
        VkDeviceGroupPresentModeFlagsKHR deserialize_VkDeviceGroupPresentModeFlagsKHR(object &name);
    

        object serialize_VkDebugReportFlagsEXT(VkDebugReportFlagsEXT name);
        VkDebugReportFlagsEXT deserialize_VkDebugReportFlagsEXT(object &name);
    

        object serialize_VkCommandPoolTrimFlags(VkCommandPoolTrimFlags name);
        VkCommandPoolTrimFlags deserialize_VkCommandPoolTrimFlags(object &name);
    

        object serialize_VkCommandPoolTrimFlagsKHR(VkCommandPoolTrimFlagsKHR name);
        VkCommandPoolTrimFlagsKHR deserialize_VkCommandPoolTrimFlagsKHR(object &name);
    

        object serialize_VkExternalMemoryHandleTypeFlagsNV(VkExternalMemoryHandleTypeFlagsNV name);
        VkExternalMemoryHandleTypeFlagsNV deserialize_VkExternalMemoryHandleTypeFlagsNV(object &name);
    

        object serialize_VkExternalMemoryFeatureFlagsNV(VkExternalMemoryFeatureFlagsNV name);
        VkExternalMemoryFeatureFlagsNV deserialize_VkExternalMemoryFeatureFlagsNV(object &name);
    

        object serialize_VkExternalMemoryHandleTypeFlags(VkExternalMemoryHandleTypeFlags name);
        VkExternalMemoryHandleTypeFlags deserialize_VkExternalMemoryHandleTypeFlags(object &name);
    

        object serialize_VkExternalMemoryHandleTypeFlagsKHR(VkExternalMemoryHandleTypeFlagsKHR name);
        VkExternalMemoryHandleTypeFlagsKHR deserialize_VkExternalMemoryHandleTypeFlagsKHR(object &name);
    

        object serialize_VkExternalMemoryFeatureFlags(VkExternalMemoryFeatureFlags name);
        VkExternalMemoryFeatureFlags deserialize_VkExternalMemoryFeatureFlags(object &name);
    

        object serialize_VkExternalMemoryFeatureFlagsKHR(VkExternalMemoryFeatureFlagsKHR name);
        VkExternalMemoryFeatureFlagsKHR deserialize_VkExternalMemoryFeatureFlagsKHR(object &name);
    

        object serialize_VkExternalSemaphoreHandleTypeFlags(VkExternalSemaphoreHandleTypeFlags name);
        VkExternalSemaphoreHandleTypeFlags deserialize_VkExternalSemaphoreHandleTypeFlags(object &name);
    

        object serialize_VkExternalSemaphoreHandleTypeFlagsKHR(VkExternalSemaphoreHandleTypeFlagsKHR name);
        VkExternalSemaphoreHandleTypeFlagsKHR deserialize_VkExternalSemaphoreHandleTypeFlagsKHR(object &name);
    

        object serialize_VkExternalSemaphoreFeatureFlags(VkExternalSemaphoreFeatureFlags name);
        VkExternalSemaphoreFeatureFlags deserialize_VkExternalSemaphoreFeatureFlags(object &name);
    

        object serialize_VkExternalSemaphoreFeatureFlagsKHR(VkExternalSemaphoreFeatureFlagsKHR name);
        VkExternalSemaphoreFeatureFlagsKHR deserialize_VkExternalSemaphoreFeatureFlagsKHR(object &name);
    

        object serialize_VkSemaphoreImportFlags(VkSemaphoreImportFlags name);
        VkSemaphoreImportFlags deserialize_VkSemaphoreImportFlags(object &name);
    

        object serialize_VkSemaphoreImportFlagsKHR(VkSemaphoreImportFlagsKHR name);
        VkSemaphoreImportFlagsKHR deserialize_VkSemaphoreImportFlagsKHR(object &name);
    

        object serialize_VkExternalFenceHandleTypeFlags(VkExternalFenceHandleTypeFlags name);
        VkExternalFenceHandleTypeFlags deserialize_VkExternalFenceHandleTypeFlags(object &name);
    

        object serialize_VkExternalFenceHandleTypeFlagsKHR(VkExternalFenceHandleTypeFlagsKHR name);
        VkExternalFenceHandleTypeFlagsKHR deserialize_VkExternalFenceHandleTypeFlagsKHR(object &name);
    

        object serialize_VkExternalFenceFeatureFlags(VkExternalFenceFeatureFlags name);
        VkExternalFenceFeatureFlags deserialize_VkExternalFenceFeatureFlags(object &name);
    

        object serialize_VkExternalFenceFeatureFlagsKHR(VkExternalFenceFeatureFlagsKHR name);
        VkExternalFenceFeatureFlagsKHR deserialize_VkExternalFenceFeatureFlagsKHR(object &name);
    

        object serialize_VkFenceImportFlags(VkFenceImportFlags name);
        VkFenceImportFlags deserialize_VkFenceImportFlags(object &name);
    

        object serialize_VkFenceImportFlagsKHR(VkFenceImportFlagsKHR name);
        VkFenceImportFlagsKHR deserialize_VkFenceImportFlagsKHR(object &name);
    

        object serialize_VkSurfaceCounterFlagsEXT(VkSurfaceCounterFlagsEXT name);
        VkSurfaceCounterFlagsEXT deserialize_VkSurfaceCounterFlagsEXT(object &name);
    

        object serialize_VkPipelineViewportSwizzleStateCreateFlagsNV(VkPipelineViewportSwizzleStateCreateFlagsNV name);
        VkPipelineViewportSwizzleStateCreateFlagsNV deserialize_VkPipelineViewportSwizzleStateCreateFlagsNV(object &name);
    

        object serialize_VkPipelineDiscardRectangleStateCreateFlagsEXT(VkPipelineDiscardRectangleStateCreateFlagsEXT name);
        VkPipelineDiscardRectangleStateCreateFlagsEXT deserialize_VkPipelineDiscardRectangleStateCreateFlagsEXT(object &name);
    

        object serialize_VkPipelineCoverageToColorStateCreateFlagsNV(VkPipelineCoverageToColorStateCreateFlagsNV name);
        VkPipelineCoverageToColorStateCreateFlagsNV deserialize_VkPipelineCoverageToColorStateCreateFlagsNV(object &name);
    

        object serialize_VkPipelineCoverageModulationStateCreateFlagsNV(VkPipelineCoverageModulationStateCreateFlagsNV name);
        VkPipelineCoverageModulationStateCreateFlagsNV deserialize_VkPipelineCoverageModulationStateCreateFlagsNV(object &name);
    

        object serialize_VkPipelineCoverageReductionStateCreateFlagsNV(VkPipelineCoverageReductionStateCreateFlagsNV name);
        VkPipelineCoverageReductionStateCreateFlagsNV deserialize_VkPipelineCoverageReductionStateCreateFlagsNV(object &name);
    

        object serialize_VkValidationCacheCreateFlagsEXT(VkValidationCacheCreateFlagsEXT name);
        VkValidationCacheCreateFlagsEXT deserialize_VkValidationCacheCreateFlagsEXT(object &name);
    

        object serialize_VkDebugUtilsMessageSeverityFlagsEXT(VkDebugUtilsMessageSeverityFlagsEXT name);
        VkDebugUtilsMessageSeverityFlagsEXT deserialize_VkDebugUtilsMessageSeverityFlagsEXT(object &name);
    

        object serialize_VkDebugUtilsMessageTypeFlagsEXT(VkDebugUtilsMessageTypeFlagsEXT name);
        VkDebugUtilsMessageTypeFlagsEXT deserialize_VkDebugUtilsMessageTypeFlagsEXT(object &name);
    

        object serialize_VkDebugUtilsMessengerCreateFlagsEXT(VkDebugUtilsMessengerCreateFlagsEXT name);
        VkDebugUtilsMessengerCreateFlagsEXT deserialize_VkDebugUtilsMessengerCreateFlagsEXT(object &name);
    

        object serialize_VkDebugUtilsMessengerCallbackDataFlagsEXT(VkDebugUtilsMessengerCallbackDataFlagsEXT name);
        VkDebugUtilsMessengerCallbackDataFlagsEXT deserialize_VkDebugUtilsMessengerCallbackDataFlagsEXT(object &name);
    

        object serialize_VkDeviceMemoryReportFlagsEXT(VkDeviceMemoryReportFlagsEXT name);
        VkDeviceMemoryReportFlagsEXT deserialize_VkDeviceMemoryReportFlagsEXT(object &name);
    

        object serialize_VkPipelineRasterizationConservativeStateCreateFlagsEXT(VkPipelineRasterizationConservativeStateCreateFlagsEXT name);
        VkPipelineRasterizationConservativeStateCreateFlagsEXT deserialize_VkPipelineRasterizationConservativeStateCreateFlagsEXT(object &name);
    

        object serialize_VkDescriptorBindingFlags(VkDescriptorBindingFlags name);
        VkDescriptorBindingFlags deserialize_VkDescriptorBindingFlags(object &name);
    

        object serialize_VkDescriptorBindingFlagsEXT(VkDescriptorBindingFlagsEXT name);
        VkDescriptorBindingFlagsEXT deserialize_VkDescriptorBindingFlagsEXT(object &name);
    

        object serialize_VkConditionalRenderingFlagsEXT(VkConditionalRenderingFlagsEXT name);
        VkConditionalRenderingFlagsEXT deserialize_VkConditionalRenderingFlagsEXT(object &name);
    

        object serialize_VkResolveModeFlags(VkResolveModeFlags name);
        VkResolveModeFlags deserialize_VkResolveModeFlags(object &name);
    

        object serialize_VkResolveModeFlagsKHR(VkResolveModeFlagsKHR name);
        VkResolveModeFlagsKHR deserialize_VkResolveModeFlagsKHR(object &name);
    

        object serialize_VkPipelineRasterizationStateStreamCreateFlagsEXT(VkPipelineRasterizationStateStreamCreateFlagsEXT name);
        VkPipelineRasterizationStateStreamCreateFlagsEXT deserialize_VkPipelineRasterizationStateStreamCreateFlagsEXT(object &name);
    

        object serialize_VkPipelineRasterizationDepthClipStateCreateFlagsEXT(VkPipelineRasterizationDepthClipStateCreateFlagsEXT name);
        VkPipelineRasterizationDepthClipStateCreateFlagsEXT deserialize_VkPipelineRasterizationDepthClipStateCreateFlagsEXT(object &name);
    

        object serialize_VkToolPurposeFlags(VkToolPurposeFlags name);
        VkToolPurposeFlags deserialize_VkToolPurposeFlags(object &name);
    

        object serialize_VkToolPurposeFlagsEXT(VkToolPurposeFlagsEXT name);
        VkToolPurposeFlagsEXT deserialize_VkToolPurposeFlagsEXT(object &name);
    

        object serialize_VkSubmitFlags(VkSubmitFlags name);
        VkSubmitFlags deserialize_VkSubmitFlags(object &name);
    

        object serialize_VkSubmitFlagsKHR(VkSubmitFlagsKHR name);
        VkSubmitFlagsKHR deserialize_VkSubmitFlagsKHR(object &name);
    

        object serialize_VkHostImageCopyFlagsEXT(VkHostImageCopyFlagsEXT name);
        VkHostImageCopyFlagsEXT deserialize_VkHostImageCopyFlagsEXT(object &name);
    

        object serialize_VkGraphicsPipelineLibraryFlagsEXT(VkGraphicsPipelineLibraryFlagsEXT name);
        VkGraphicsPipelineLibraryFlagsEXT deserialize_VkGraphicsPipelineLibraryFlagsEXT(object &name);
    

        object serialize_VkImageCompressionFlagsEXT(VkImageCompressionFlagsEXT name);
        VkImageCompressionFlagsEXT deserialize_VkImageCompressionFlagsEXT(object &name);
    

        object serialize_VkImageCompressionFixedRateFlagsEXT(VkImageCompressionFixedRateFlagsEXT name);
        VkImageCompressionFixedRateFlagsEXT deserialize_VkImageCompressionFixedRateFlagsEXT(object &name);
    

        object serialize_VkDeviceAddressBindingFlagsEXT(VkDeviceAddressBindingFlagsEXT name);
        VkDeviceAddressBindingFlagsEXT deserialize_VkDeviceAddressBindingFlagsEXT(object &name);
    

        object serialize_VkOpticalFlowGridSizeFlagsNV(VkOpticalFlowGridSizeFlagsNV name);
        VkOpticalFlowGridSizeFlagsNV deserialize_VkOpticalFlowGridSizeFlagsNV(object &name);
    

        object serialize_VkOpticalFlowUsageFlagsNV(VkOpticalFlowUsageFlagsNV name);
        VkOpticalFlowUsageFlagsNV deserialize_VkOpticalFlowUsageFlagsNV(object &name);
    

        object serialize_VkOpticalFlowSessionCreateFlagsNV(VkOpticalFlowSessionCreateFlagsNV name);
        VkOpticalFlowSessionCreateFlagsNV deserialize_VkOpticalFlowSessionCreateFlagsNV(object &name);
    

        object serialize_VkOpticalFlowExecuteFlagsNV(VkOpticalFlowExecuteFlagsNV name);
        VkOpticalFlowExecuteFlagsNV deserialize_VkOpticalFlowExecuteFlagsNV(object &name);
    

        object serialize_VkFrameBoundaryFlagsEXT(VkFrameBoundaryFlagsEXT name);
        VkFrameBoundaryFlagsEXT deserialize_VkFrameBoundaryFlagsEXT(object &name);
    

        object serialize_VkPresentScalingFlagsEXT(VkPresentScalingFlagsEXT name);
        VkPresentScalingFlagsEXT deserialize_VkPresentScalingFlagsEXT(object &name);
    

        object serialize_VkPresentGravityFlagsEXT(VkPresentGravityFlagsEXT name);
        VkPresentGravityFlagsEXT deserialize_VkPresentGravityFlagsEXT(object &name);
    

        object serialize_VkShaderCreateFlagsEXT(VkShaderCreateFlagsEXT name);
        VkShaderCreateFlagsEXT deserialize_VkShaderCreateFlagsEXT(object &name);
    

        object serialize_VkVideoCodecOperationFlagsKHR(VkVideoCodecOperationFlagsKHR name);
        VkVideoCodecOperationFlagsKHR deserialize_VkVideoCodecOperationFlagsKHR(object &name);
    

        object serialize_VkVideoCapabilityFlagsKHR(VkVideoCapabilityFlagsKHR name);
        VkVideoCapabilityFlagsKHR deserialize_VkVideoCapabilityFlagsKHR(object &name);
    

        object serialize_VkVideoSessionCreateFlagsKHR(VkVideoSessionCreateFlagsKHR name);
        VkVideoSessionCreateFlagsKHR deserialize_VkVideoSessionCreateFlagsKHR(object &name);
    

        object serialize_VkVideoSessionParametersCreateFlagsKHR(VkVideoSessionParametersCreateFlagsKHR name);
        VkVideoSessionParametersCreateFlagsKHR deserialize_VkVideoSessionParametersCreateFlagsKHR(object &name);
    

        object serialize_VkVideoBeginCodingFlagsKHR(VkVideoBeginCodingFlagsKHR name);
        VkVideoBeginCodingFlagsKHR deserialize_VkVideoBeginCodingFlagsKHR(object &name);
    

        object serialize_VkVideoEndCodingFlagsKHR(VkVideoEndCodingFlagsKHR name);
        VkVideoEndCodingFlagsKHR deserialize_VkVideoEndCodingFlagsKHR(object &name);
    

        object serialize_VkVideoCodingControlFlagsKHR(VkVideoCodingControlFlagsKHR name);
        VkVideoCodingControlFlagsKHR deserialize_VkVideoCodingControlFlagsKHR(object &name);
    

        object serialize_VkVideoDecodeUsageFlagsKHR(VkVideoDecodeUsageFlagsKHR name);
        VkVideoDecodeUsageFlagsKHR deserialize_VkVideoDecodeUsageFlagsKHR(object &name);
    

        object serialize_VkVideoDecodeCapabilityFlagsKHR(VkVideoDecodeCapabilityFlagsKHR name);
        VkVideoDecodeCapabilityFlagsKHR deserialize_VkVideoDecodeCapabilityFlagsKHR(object &name);
    

        object serialize_VkVideoDecodeFlagsKHR(VkVideoDecodeFlagsKHR name);
        VkVideoDecodeFlagsKHR deserialize_VkVideoDecodeFlagsKHR(object &name);
    

        object serialize_VkVideoDecodeH264PictureLayoutFlagsKHR(VkVideoDecodeH264PictureLayoutFlagsKHR name);
        VkVideoDecodeH264PictureLayoutFlagsKHR deserialize_VkVideoDecodeH264PictureLayoutFlagsKHR(object &name);
    

        object serialize_VkVideoChromaSubsamplingFlagsKHR(VkVideoChromaSubsamplingFlagsKHR name);
        VkVideoChromaSubsamplingFlagsKHR deserialize_VkVideoChromaSubsamplingFlagsKHR(object &name);
    

        object serialize_VkVideoComponentBitDepthFlagsKHR(VkVideoComponentBitDepthFlagsKHR name);
        VkVideoComponentBitDepthFlagsKHR deserialize_VkVideoComponentBitDepthFlagsKHR(object &name);
    

        object serialize_VkAttachmentLoadOp(VkAttachmentLoadOp name);
        VkAttachmentLoadOp deserialize_VkAttachmentLoadOp(object &name);
    

        object serialize_VkAttachmentStoreOp(VkAttachmentStoreOp name);
        VkAttachmentStoreOp deserialize_VkAttachmentStoreOp(object &name);
    

        object serialize_VkBlendFactor(VkBlendFactor name);
        VkBlendFactor deserialize_VkBlendFactor(object &name);
    

        object serialize_VkBlendOp(VkBlendOp name);
        VkBlendOp deserialize_VkBlendOp(object &name);
    

        object serialize_VkBorderColor(VkBorderColor name);
        VkBorderColor deserialize_VkBorderColor(object &name);
    

        object serialize_VkFramebufferCreateFlagBits(VkFramebufferCreateFlagBits name);
        VkFramebufferCreateFlagBits deserialize_VkFramebufferCreateFlagBits(object &name);
    

        object serialize_VkRenderPassCreateFlagBits(VkRenderPassCreateFlagBits name);
        VkRenderPassCreateFlagBits deserialize_VkRenderPassCreateFlagBits(object &name);
    

        object serialize_VkSamplerCreateFlagBits(VkSamplerCreateFlagBits name);
        VkSamplerCreateFlagBits deserialize_VkSamplerCreateFlagBits(object &name);
    

        object serialize_VkPipelineCacheHeaderVersion(VkPipelineCacheHeaderVersion name);
        VkPipelineCacheHeaderVersion deserialize_VkPipelineCacheHeaderVersion(object &name);
    

        object serialize_VkPipelineCacheCreateFlagBits(VkPipelineCacheCreateFlagBits name);
        VkPipelineCacheCreateFlagBits deserialize_VkPipelineCacheCreateFlagBits(object &name);
    

        object serialize_VkPipelineShaderStageCreateFlagBits(VkPipelineShaderStageCreateFlagBits name);
        VkPipelineShaderStageCreateFlagBits deserialize_VkPipelineShaderStageCreateFlagBits(object &name);
    

        object serialize_VkDescriptorSetLayoutCreateFlagBits(VkDescriptorSetLayoutCreateFlagBits name);
        VkDescriptorSetLayoutCreateFlagBits deserialize_VkDescriptorSetLayoutCreateFlagBits(object &name);
    

        object serialize_VkInstanceCreateFlagBits(VkInstanceCreateFlagBits name);
        VkInstanceCreateFlagBits deserialize_VkInstanceCreateFlagBits(object &name);
    

        object serialize_VkDeviceQueueCreateFlagBits(VkDeviceQueueCreateFlagBits name);
        VkDeviceQueueCreateFlagBits deserialize_VkDeviceQueueCreateFlagBits(object &name);
    

        object serialize_VkBufferCreateFlagBits(VkBufferCreateFlagBits name);
        VkBufferCreateFlagBits deserialize_VkBufferCreateFlagBits(object &name);
    

        object serialize_VkBufferUsageFlagBits(VkBufferUsageFlagBits name);
        VkBufferUsageFlagBits deserialize_VkBufferUsageFlagBits(object &name);
    

        object serialize_VkColorComponentFlagBits(VkColorComponentFlagBits name);
        VkColorComponentFlagBits deserialize_VkColorComponentFlagBits(object &name);
    

        object serialize_VkComponentSwizzle(VkComponentSwizzle name);
        VkComponentSwizzle deserialize_VkComponentSwizzle(object &name);
    

        object serialize_VkCommandPoolCreateFlagBits(VkCommandPoolCreateFlagBits name);
        VkCommandPoolCreateFlagBits deserialize_VkCommandPoolCreateFlagBits(object &name);
    

        object serialize_VkCommandPoolResetFlagBits(VkCommandPoolResetFlagBits name);
        VkCommandPoolResetFlagBits deserialize_VkCommandPoolResetFlagBits(object &name);
    

        object serialize_VkCommandBufferResetFlagBits(VkCommandBufferResetFlagBits name);
        VkCommandBufferResetFlagBits deserialize_VkCommandBufferResetFlagBits(object &name);
    

        object serialize_VkCommandBufferLevel(VkCommandBufferLevel name);
        VkCommandBufferLevel deserialize_VkCommandBufferLevel(object &name);
    

        object serialize_VkCommandBufferUsageFlagBits(VkCommandBufferUsageFlagBits name);
        VkCommandBufferUsageFlagBits deserialize_VkCommandBufferUsageFlagBits(object &name);
    

        object serialize_VkCompareOp(VkCompareOp name);
        VkCompareOp deserialize_VkCompareOp(object &name);
    

        object serialize_VkCullModeFlagBits(VkCullModeFlagBits name);
        VkCullModeFlagBits deserialize_VkCullModeFlagBits(object &name);
    

        object serialize_VkDescriptorType(VkDescriptorType name);
        VkDescriptorType deserialize_VkDescriptorType(object &name);
    

        object serialize_VkDynamicState(VkDynamicState name);
        VkDynamicState deserialize_VkDynamicState(object &name);
    

        object serialize_VkFenceCreateFlagBits(VkFenceCreateFlagBits name);
        VkFenceCreateFlagBits deserialize_VkFenceCreateFlagBits(object &name);
    

        object serialize_VkPolygonMode(VkPolygonMode name);
        VkPolygonMode deserialize_VkPolygonMode(object &name);
    

        object serialize_VkFormat(VkFormat name);
        VkFormat deserialize_VkFormat(object &name);
    

        object serialize_VkFormatFeatureFlagBits(VkFormatFeatureFlagBits name);
        VkFormatFeatureFlagBits deserialize_VkFormatFeatureFlagBits(object &name);
    

        object serialize_VkFrontFace(VkFrontFace name);
        VkFrontFace deserialize_VkFrontFace(object &name);
    

        object serialize_VkImageAspectFlagBits(VkImageAspectFlagBits name);
        VkImageAspectFlagBits deserialize_VkImageAspectFlagBits(object &name);
    

        object serialize_VkImageCreateFlagBits(VkImageCreateFlagBits name);
        VkImageCreateFlagBits deserialize_VkImageCreateFlagBits(object &name);
    

        object serialize_VkImageLayout(VkImageLayout name);
        VkImageLayout deserialize_VkImageLayout(object &name);
    

        object serialize_VkImageTiling(VkImageTiling name);
        VkImageTiling deserialize_VkImageTiling(object &name);
    

        object serialize_VkImageType(VkImageType name);
        VkImageType deserialize_VkImageType(object &name);
    

        object serialize_VkImageUsageFlagBits(VkImageUsageFlagBits name);
        VkImageUsageFlagBits deserialize_VkImageUsageFlagBits(object &name);
    

        object serialize_VkImageViewCreateFlagBits(VkImageViewCreateFlagBits name);
        VkImageViewCreateFlagBits deserialize_VkImageViewCreateFlagBits(object &name);
    

        object serialize_VkImageViewType(VkImageViewType name);
        VkImageViewType deserialize_VkImageViewType(object &name);
    

        object serialize_VkSharingMode(VkSharingMode name);
        VkSharingMode deserialize_VkSharingMode(object &name);
    

        object serialize_VkIndexType(VkIndexType name);
        VkIndexType deserialize_VkIndexType(object &name);
    

        object serialize_VkLogicOp(VkLogicOp name);
        VkLogicOp deserialize_VkLogicOp(object &name);
    

        object serialize_VkMemoryHeapFlagBits(VkMemoryHeapFlagBits name);
        VkMemoryHeapFlagBits deserialize_VkMemoryHeapFlagBits(object &name);
    

        object serialize_VkAccessFlagBits(VkAccessFlagBits name);
        VkAccessFlagBits deserialize_VkAccessFlagBits(object &name);
    

        object serialize_VkMemoryPropertyFlagBits(VkMemoryPropertyFlagBits name);
        VkMemoryPropertyFlagBits deserialize_VkMemoryPropertyFlagBits(object &name);
    

        object serialize_VkPhysicalDeviceType(VkPhysicalDeviceType name);
        VkPhysicalDeviceType deserialize_VkPhysicalDeviceType(object &name);
    

        object serialize_VkPipelineBindPoint(VkPipelineBindPoint name);
        VkPipelineBindPoint deserialize_VkPipelineBindPoint(object &name);
    

        object serialize_VkPipelineCreateFlagBits(VkPipelineCreateFlagBits name);
        VkPipelineCreateFlagBits deserialize_VkPipelineCreateFlagBits(object &name);
    

        object serialize_VkPrimitiveTopology(VkPrimitiveTopology name);
        VkPrimitiveTopology deserialize_VkPrimitiveTopology(object &name);
    

        object serialize_VkQueryControlFlagBits(VkQueryControlFlagBits name);
        VkQueryControlFlagBits deserialize_VkQueryControlFlagBits(object &name);
    

        object serialize_VkQueryPipelineStatisticFlagBits(VkQueryPipelineStatisticFlagBits name);
        VkQueryPipelineStatisticFlagBits deserialize_VkQueryPipelineStatisticFlagBits(object &name);
    

        object serialize_VkQueryResultFlagBits(VkQueryResultFlagBits name);
        VkQueryResultFlagBits deserialize_VkQueryResultFlagBits(object &name);
    

        object serialize_VkQueryType(VkQueryType name);
        VkQueryType deserialize_VkQueryType(object &name);
    

        object serialize_VkQueueFlagBits(VkQueueFlagBits name);
        VkQueueFlagBits deserialize_VkQueueFlagBits(object &name);
    

        object serialize_VkSubpassContents(VkSubpassContents name);
        VkSubpassContents deserialize_VkSubpassContents(object &name);
    

        object serialize_VkResult(VkResult name);
        VkResult deserialize_VkResult(object &name);
    

        object serialize_VkShaderStageFlagBits(VkShaderStageFlagBits name);
        VkShaderStageFlagBits deserialize_VkShaderStageFlagBits(object &name);
    

        object serialize_VkSparseMemoryBindFlagBits(VkSparseMemoryBindFlagBits name);
        VkSparseMemoryBindFlagBits deserialize_VkSparseMemoryBindFlagBits(object &name);
    

        object serialize_VkStencilFaceFlagBits(VkStencilFaceFlagBits name);
        VkStencilFaceFlagBits deserialize_VkStencilFaceFlagBits(object &name);
    

        object serialize_VkStencilOp(VkStencilOp name);
        VkStencilOp deserialize_VkStencilOp(object &name);
    

        object serialize_VkStructureType(VkStructureType name);
        VkStructureType deserialize_VkStructureType(object &name);
    

        object serialize_VkSystemAllocationScope(VkSystemAllocationScope name);
        VkSystemAllocationScope deserialize_VkSystemAllocationScope(object &name);
    

        object serialize_VkInternalAllocationType(VkInternalAllocationType name);
        VkInternalAllocationType deserialize_VkInternalAllocationType(object &name);
    

        object serialize_VkSamplerAddressMode(VkSamplerAddressMode name);
        VkSamplerAddressMode deserialize_VkSamplerAddressMode(object &name);
    

        object serialize_VkFilter(VkFilter name);
        VkFilter deserialize_VkFilter(object &name);
    

        object serialize_VkSamplerMipmapMode(VkSamplerMipmapMode name);
        VkSamplerMipmapMode deserialize_VkSamplerMipmapMode(object &name);
    

        object serialize_VkVertexInputRate(VkVertexInputRate name);
        VkVertexInputRate deserialize_VkVertexInputRate(object &name);
    

        object serialize_VkPipelineStageFlagBits(VkPipelineStageFlagBits name);
        VkPipelineStageFlagBits deserialize_VkPipelineStageFlagBits(object &name);
    

        object serialize_VkSparseImageFormatFlagBits(VkSparseImageFormatFlagBits name);
        VkSparseImageFormatFlagBits deserialize_VkSparseImageFormatFlagBits(object &name);
    

        object serialize_VkSampleCountFlagBits(VkSampleCountFlagBits name);
        VkSampleCountFlagBits deserialize_VkSampleCountFlagBits(object &name);
    

        object serialize_VkAttachmentDescriptionFlagBits(VkAttachmentDescriptionFlagBits name);
        VkAttachmentDescriptionFlagBits deserialize_VkAttachmentDescriptionFlagBits(object &name);
    

        object serialize_VkDescriptorPoolCreateFlagBits(VkDescriptorPoolCreateFlagBits name);
        VkDescriptorPoolCreateFlagBits deserialize_VkDescriptorPoolCreateFlagBits(object &name);
    

        object serialize_VkDependencyFlagBits(VkDependencyFlagBits name);
        VkDependencyFlagBits deserialize_VkDependencyFlagBits(object &name);
    

        object serialize_VkObjectType(VkObjectType name);
        VkObjectType deserialize_VkObjectType(object &name);
    

        object serialize_VkEventCreateFlagBits(VkEventCreateFlagBits name);
        VkEventCreateFlagBits deserialize_VkEventCreateFlagBits(object &name);
    

        object serialize_VkPipelineLayoutCreateFlagBits(VkPipelineLayoutCreateFlagBits name);
        VkPipelineLayoutCreateFlagBits deserialize_VkPipelineLayoutCreateFlagBits(object &name);
    

        object serialize_VkRayTracingInvocationReorderModeNV(VkRayTracingInvocationReorderModeNV name);
        VkRayTracingInvocationReorderModeNV deserialize_VkRayTracingInvocationReorderModeNV(object &name);
    

        object serialize_VkIndirectCommandsLayoutUsageFlagBitsNV(VkIndirectCommandsLayoutUsageFlagBitsNV name);
        VkIndirectCommandsLayoutUsageFlagBitsNV deserialize_VkIndirectCommandsLayoutUsageFlagBitsNV(object &name);
    

        object serialize_VkIndirectCommandsTokenTypeNV(VkIndirectCommandsTokenTypeNV name);
        VkIndirectCommandsTokenTypeNV deserialize_VkIndirectCommandsTokenTypeNV(object &name);
    

        object serialize_VkIndirectStateFlagBitsNV(VkIndirectStateFlagBitsNV name);
        VkIndirectStateFlagBitsNV deserialize_VkIndirectStateFlagBitsNV(object &name);
    

        object serialize_VkDescriptorUpdateTemplateType(VkDescriptorUpdateTemplateType name);
        VkDescriptorUpdateTemplateType deserialize_VkDescriptorUpdateTemplateType(object &name);
    

        object serialize_VkDescriptorUpdateTemplateTypeKHR(VkDescriptorUpdateTemplateTypeKHR name);
        VkDescriptorUpdateTemplateTypeKHR deserialize_VkDescriptorUpdateTemplateTypeKHR(object &name);
    

        object serialize_VkViewportCoordinateSwizzleNV(VkViewportCoordinateSwizzleNV name);
        VkViewportCoordinateSwizzleNV deserialize_VkViewportCoordinateSwizzleNV(object &name);
    

        object serialize_VkDiscardRectangleModeEXT(VkDiscardRectangleModeEXT name);
        VkDiscardRectangleModeEXT deserialize_VkDiscardRectangleModeEXT(object &name);
    

        object serialize_VkSubpassDescriptionFlagBits(VkSubpassDescriptionFlagBits name);
        VkSubpassDescriptionFlagBits deserialize_VkSubpassDescriptionFlagBits(object &name);
    

        object serialize_VkPointClippingBehavior(VkPointClippingBehavior name);
        VkPointClippingBehavior deserialize_VkPointClippingBehavior(object &name);
    

        object serialize_VkPointClippingBehaviorKHR(VkPointClippingBehaviorKHR name);
        VkPointClippingBehaviorKHR deserialize_VkPointClippingBehaviorKHR(object &name);
    

        object serialize_VkCoverageModulationModeNV(VkCoverageModulationModeNV name);
        VkCoverageModulationModeNV deserialize_VkCoverageModulationModeNV(object &name);
    

        object serialize_VkCoverageReductionModeNV(VkCoverageReductionModeNV name);
        VkCoverageReductionModeNV deserialize_VkCoverageReductionModeNV(object &name);
    

        object serialize_VkValidationCacheHeaderVersionEXT(VkValidationCacheHeaderVersionEXT name);
        VkValidationCacheHeaderVersionEXT deserialize_VkValidationCacheHeaderVersionEXT(object &name);
    

        object serialize_VkShaderInfoTypeAMD(VkShaderInfoTypeAMD name);
        VkShaderInfoTypeAMD deserialize_VkShaderInfoTypeAMD(object &name);
    

        object serialize_VkQueueGlobalPriorityKHR(VkQueueGlobalPriorityKHR name);
        VkQueueGlobalPriorityKHR deserialize_VkQueueGlobalPriorityKHR(object &name);
    

        object serialize_VkQueueGlobalPriorityEXT(VkQueueGlobalPriorityEXT name);
        VkQueueGlobalPriorityEXT deserialize_VkQueueGlobalPriorityEXT(object &name);
    

        object serialize_VkTimeDomainEXT(VkTimeDomainEXT name);
        VkTimeDomainEXT deserialize_VkTimeDomainEXT(object &name);
    

        object serialize_VkConservativeRasterizationModeEXT(VkConservativeRasterizationModeEXT name);
        VkConservativeRasterizationModeEXT deserialize_VkConservativeRasterizationModeEXT(object &name);
    

        object serialize_VkResolveModeFlagBits(VkResolveModeFlagBits name);
        VkResolveModeFlagBits deserialize_VkResolveModeFlagBits(object &name);
    

        object serialize_VkResolveModeFlagBitsKHR(VkResolveModeFlagBitsKHR name);
        VkResolveModeFlagBitsKHR deserialize_VkResolveModeFlagBitsKHR(object &name);
    

        object serialize_VkDescriptorBindingFlagBits(VkDescriptorBindingFlagBits name);
        VkDescriptorBindingFlagBits deserialize_VkDescriptorBindingFlagBits(object &name);
    

        object serialize_VkDescriptorBindingFlagBitsEXT(VkDescriptorBindingFlagBitsEXT name);
        VkDescriptorBindingFlagBitsEXT deserialize_VkDescriptorBindingFlagBitsEXT(object &name);
    

        object serialize_VkConditionalRenderingFlagBitsEXT(VkConditionalRenderingFlagBitsEXT name);
        VkConditionalRenderingFlagBitsEXT deserialize_VkConditionalRenderingFlagBitsEXT(object &name);
    

        object serialize_VkSemaphoreType(VkSemaphoreType name);
        VkSemaphoreType deserialize_VkSemaphoreType(object &name);
    

        object serialize_VkSemaphoreTypeKHR(VkSemaphoreTypeKHR name);
        VkSemaphoreTypeKHR deserialize_VkSemaphoreTypeKHR(object &name);
    

        object serialize_VkGeometryFlagBitsKHR(VkGeometryFlagBitsKHR name);
        VkGeometryFlagBitsKHR deserialize_VkGeometryFlagBitsKHR(object &name);
    

        object serialize_VkGeometryFlagBitsNV(VkGeometryFlagBitsNV name);
        VkGeometryFlagBitsNV deserialize_VkGeometryFlagBitsNV(object &name);
    

        object serialize_VkGeometryInstanceFlagBitsKHR(VkGeometryInstanceFlagBitsKHR name);
        VkGeometryInstanceFlagBitsKHR deserialize_VkGeometryInstanceFlagBitsKHR(object &name);
    

        object serialize_VkGeometryInstanceFlagBitsNV(VkGeometryInstanceFlagBitsNV name);
        VkGeometryInstanceFlagBitsNV deserialize_VkGeometryInstanceFlagBitsNV(object &name);
    

        object serialize_VkBuildAccelerationStructureFlagBitsKHR(VkBuildAccelerationStructureFlagBitsKHR name);
        VkBuildAccelerationStructureFlagBitsKHR deserialize_VkBuildAccelerationStructureFlagBitsKHR(object &name);
    

        object serialize_VkBuildAccelerationStructureFlagBitsNV(VkBuildAccelerationStructureFlagBitsNV name);
        VkBuildAccelerationStructureFlagBitsNV deserialize_VkBuildAccelerationStructureFlagBitsNV(object &name);
    

        object serialize_VkAccelerationStructureCreateFlagBitsKHR(VkAccelerationStructureCreateFlagBitsKHR name);
        VkAccelerationStructureCreateFlagBitsKHR deserialize_VkAccelerationStructureCreateFlagBitsKHR(object &name);
    

        object serialize_VkBuildAccelerationStructureModeKHR(VkBuildAccelerationStructureModeKHR name);
        VkBuildAccelerationStructureModeKHR deserialize_VkBuildAccelerationStructureModeKHR(object &name);
    

        object serialize_VkCopyAccelerationStructureModeKHR(VkCopyAccelerationStructureModeKHR name);
        VkCopyAccelerationStructureModeKHR deserialize_VkCopyAccelerationStructureModeKHR(object &name);
    

        object serialize_VkCopyAccelerationStructureModeNV(VkCopyAccelerationStructureModeNV name);
        VkCopyAccelerationStructureModeNV deserialize_VkCopyAccelerationStructureModeNV(object &name);
    

        object serialize_VkAccelerationStructureTypeKHR(VkAccelerationStructureTypeKHR name);
        VkAccelerationStructureTypeKHR deserialize_VkAccelerationStructureTypeKHR(object &name);
    

        object serialize_VkAccelerationStructureTypeNV(VkAccelerationStructureTypeNV name);
        VkAccelerationStructureTypeNV deserialize_VkAccelerationStructureTypeNV(object &name);
    

        object serialize_VkGeometryTypeKHR(VkGeometryTypeKHR name);
        VkGeometryTypeKHR deserialize_VkGeometryTypeKHR(object &name);
    

        object serialize_VkGeometryTypeNV(VkGeometryTypeNV name);
        VkGeometryTypeNV deserialize_VkGeometryTypeNV(object &name);
    

        object serialize_VkRayTracingShaderGroupTypeKHR(VkRayTracingShaderGroupTypeKHR name);
        VkRayTracingShaderGroupTypeKHR deserialize_VkRayTracingShaderGroupTypeKHR(object &name);
    

        object serialize_VkRayTracingShaderGroupTypeNV(VkRayTracingShaderGroupTypeNV name);
        VkRayTracingShaderGroupTypeNV deserialize_VkRayTracingShaderGroupTypeNV(object &name);
    

        object serialize_VkAccelerationStructureMemoryRequirementsTypeNV(VkAccelerationStructureMemoryRequirementsTypeNV name);
        VkAccelerationStructureMemoryRequirementsTypeNV deserialize_VkAccelerationStructureMemoryRequirementsTypeNV(object &name);
    

        object serialize_VkAccelerationStructureBuildTypeKHR(VkAccelerationStructureBuildTypeKHR name);
        VkAccelerationStructureBuildTypeKHR deserialize_VkAccelerationStructureBuildTypeKHR(object &name);
    

        object serialize_VkAccelerationStructureCompatibilityKHR(VkAccelerationStructureCompatibilityKHR name);
        VkAccelerationStructureCompatibilityKHR deserialize_VkAccelerationStructureCompatibilityKHR(object &name);
    

        object serialize_VkShaderGroupShaderKHR(VkShaderGroupShaderKHR name);
        VkShaderGroupShaderKHR deserialize_VkShaderGroupShaderKHR(object &name);
    

        object serialize_VkMemoryOverallocationBehaviorAMD(VkMemoryOverallocationBehaviorAMD name);
        VkMemoryOverallocationBehaviorAMD deserialize_VkMemoryOverallocationBehaviorAMD(object &name);
    

        object serialize_VkDeviceDiagnosticsConfigFlagBitsNV(VkDeviceDiagnosticsConfigFlagBitsNV name);
        VkDeviceDiagnosticsConfigFlagBitsNV deserialize_VkDeviceDiagnosticsConfigFlagBitsNV(object &name);
    

        object serialize_VkPipelineCreationFeedbackFlagBits(VkPipelineCreationFeedbackFlagBits name);
        VkPipelineCreationFeedbackFlagBits deserialize_VkPipelineCreationFeedbackFlagBits(object &name);
    

        object serialize_VkPipelineCreationFeedbackFlagBitsEXT(VkPipelineCreationFeedbackFlagBitsEXT name);
        VkPipelineCreationFeedbackFlagBitsEXT deserialize_VkPipelineCreationFeedbackFlagBitsEXT(object &name);
    

        object serialize_VkPerformanceCounterScopeKHR(VkPerformanceCounterScopeKHR name);
        VkPerformanceCounterScopeKHR deserialize_VkPerformanceCounterScopeKHR(object &name);
    

        object serialize_VkPerformanceCounterUnitKHR(VkPerformanceCounterUnitKHR name);
        VkPerformanceCounterUnitKHR deserialize_VkPerformanceCounterUnitKHR(object &name);
    

        object serialize_VkPerformanceCounterStorageKHR(VkPerformanceCounterStorageKHR name);
        VkPerformanceCounterStorageKHR deserialize_VkPerformanceCounterStorageKHR(object &name);
    

        object serialize_VkPerformanceCounterDescriptionFlagBitsKHR(VkPerformanceCounterDescriptionFlagBitsKHR name);
        VkPerformanceCounterDescriptionFlagBitsKHR deserialize_VkPerformanceCounterDescriptionFlagBitsKHR(object &name);
    

        object serialize_VkAcquireProfilingLockFlagBitsKHR(VkAcquireProfilingLockFlagBitsKHR name);
        VkAcquireProfilingLockFlagBitsKHR deserialize_VkAcquireProfilingLockFlagBitsKHR(object &name);
    

        object serialize_VkSemaphoreWaitFlagBits(VkSemaphoreWaitFlagBits name);
        VkSemaphoreWaitFlagBits deserialize_VkSemaphoreWaitFlagBits(object &name);
    

        object serialize_VkSemaphoreWaitFlagBitsKHR(VkSemaphoreWaitFlagBitsKHR name);
        VkSemaphoreWaitFlagBitsKHR deserialize_VkSemaphoreWaitFlagBitsKHR(object &name);
    

        object serialize_VkPerformanceConfigurationTypeINTEL(VkPerformanceConfigurationTypeINTEL name);
        VkPerformanceConfigurationTypeINTEL deserialize_VkPerformanceConfigurationTypeINTEL(object &name);
    

        object serialize_VkQueryPoolSamplingModeINTEL(VkQueryPoolSamplingModeINTEL name);
        VkQueryPoolSamplingModeINTEL deserialize_VkQueryPoolSamplingModeINTEL(object &name);
    

        object serialize_VkPerformanceOverrideTypeINTEL(VkPerformanceOverrideTypeINTEL name);
        VkPerformanceOverrideTypeINTEL deserialize_VkPerformanceOverrideTypeINTEL(object &name);
    

        object serialize_VkPerformanceParameterTypeINTEL(VkPerformanceParameterTypeINTEL name);
        VkPerformanceParameterTypeINTEL deserialize_VkPerformanceParameterTypeINTEL(object &name);
    

        object serialize_VkPerformanceValueTypeINTEL(VkPerformanceValueTypeINTEL name);
        VkPerformanceValueTypeINTEL deserialize_VkPerformanceValueTypeINTEL(object &name);
    

        object serialize_VkLineRasterizationModeEXT(VkLineRasterizationModeEXT name);
        VkLineRasterizationModeEXT deserialize_VkLineRasterizationModeEXT(object &name);
    

        object serialize_VkPipelineCompilerControlFlagBitsAMD(VkPipelineCompilerControlFlagBitsAMD name);
        VkPipelineCompilerControlFlagBitsAMD deserialize_VkPipelineCompilerControlFlagBitsAMD(object &name);
    

        object serialize_VkShaderCorePropertiesFlagBitsAMD(VkShaderCorePropertiesFlagBitsAMD name);
        VkShaderCorePropertiesFlagBitsAMD deserialize_VkShaderCorePropertiesFlagBitsAMD(object &name);
    

        object serialize_VkToolPurposeFlagBits(VkToolPurposeFlagBits name);
        VkToolPurposeFlagBits deserialize_VkToolPurposeFlagBits(object &name);
    

        object serialize_VkToolPurposeFlagBitsEXT(VkToolPurposeFlagBitsEXT name);
        VkToolPurposeFlagBitsEXT deserialize_VkToolPurposeFlagBitsEXT(object &name);
    

        object serialize_VkFragmentShadingRateNV(VkFragmentShadingRateNV name);
        VkFragmentShadingRateNV deserialize_VkFragmentShadingRateNV(object &name);
    

        object serialize_VkFragmentShadingRateTypeNV(VkFragmentShadingRateTypeNV name);
        VkFragmentShadingRateTypeNV deserialize_VkFragmentShadingRateTypeNV(object &name);
    

        object serialize_VkSubpassMergeStatusEXT(VkSubpassMergeStatusEXT name);
        VkSubpassMergeStatusEXT deserialize_VkSubpassMergeStatusEXT(object &name);
    

        object serialize_VkAccessFlagBits2(VkAccessFlagBits2 name);
        VkAccessFlagBits2 deserialize_VkAccessFlagBits2(object &name);
    

        object serialize_VkAccessFlagBits2KHR(VkAccessFlagBits2KHR name);
        VkAccessFlagBits2KHR deserialize_VkAccessFlagBits2KHR(object &name);
    

        object serialize_VkPipelineStageFlagBits2(VkPipelineStageFlagBits2 name);
        VkPipelineStageFlagBits2 deserialize_VkPipelineStageFlagBits2(object &name);
    

        object serialize_VkPipelineStageFlagBits2KHR(VkPipelineStageFlagBits2KHR name);
        VkPipelineStageFlagBits2KHR deserialize_VkPipelineStageFlagBits2KHR(object &name);
    

        object serialize_VkProvokingVertexModeEXT(VkProvokingVertexModeEXT name);
        VkProvokingVertexModeEXT deserialize_VkProvokingVertexModeEXT(object &name);
    

        object serialize_VkHostImageCopyFlagBitsEXT(VkHostImageCopyFlagBitsEXT name);
        VkHostImageCopyFlagBitsEXT deserialize_VkHostImageCopyFlagBitsEXT(object &name);
    

        object serialize_VkFormatFeatureFlagBits2(VkFormatFeatureFlagBits2 name);
        VkFormatFeatureFlagBits2 deserialize_VkFormatFeatureFlagBits2(object &name);
    

        object serialize_VkFormatFeatureFlagBits2KHR(VkFormatFeatureFlagBits2KHR name);
        VkFormatFeatureFlagBits2KHR deserialize_VkFormatFeatureFlagBits2KHR(object &name);
    

        object serialize_VkRenderingFlagBits(VkRenderingFlagBits name);
        VkRenderingFlagBits deserialize_VkRenderingFlagBits(object &name);
    

        object serialize_VkRenderingFlagBitsKHR(VkRenderingFlagBitsKHR name);
        VkRenderingFlagBitsKHR deserialize_VkRenderingFlagBitsKHR(object &name);
    

        object serialize_VkPipelineDepthStencilStateCreateFlagBits(VkPipelineDepthStencilStateCreateFlagBits name);
        VkPipelineDepthStencilStateCreateFlagBits deserialize_VkPipelineDepthStencilStateCreateFlagBits(object &name);
    

        object serialize_VkPipelineColorBlendStateCreateFlagBits(VkPipelineColorBlendStateCreateFlagBits name);
        VkPipelineColorBlendStateCreateFlagBits deserialize_VkPipelineColorBlendStateCreateFlagBits(object &name);
    

        object serialize_VkImageCompressionFlagBitsEXT(VkImageCompressionFlagBitsEXT name);
        VkImageCompressionFlagBitsEXT deserialize_VkImageCompressionFlagBitsEXT(object &name);
    

        object serialize_VkImageCompressionFixedRateFlagBitsEXT(VkImageCompressionFixedRateFlagBitsEXT name);
        VkImageCompressionFixedRateFlagBitsEXT deserialize_VkImageCompressionFixedRateFlagBitsEXT(object &name);
    

        object serialize_VkPipelineRobustnessBufferBehaviorEXT(VkPipelineRobustnessBufferBehaviorEXT name);
        VkPipelineRobustnessBufferBehaviorEXT deserialize_VkPipelineRobustnessBufferBehaviorEXT(object &name);
    

        object serialize_VkPipelineRobustnessImageBehaviorEXT(VkPipelineRobustnessImageBehaviorEXT name);
        VkPipelineRobustnessImageBehaviorEXT deserialize_VkPipelineRobustnessImageBehaviorEXT(object &name);
    

        object serialize_VkDeviceAddressBindingFlagBitsEXT(VkDeviceAddressBindingFlagBitsEXT name);
        VkDeviceAddressBindingFlagBitsEXT deserialize_VkDeviceAddressBindingFlagBitsEXT(object &name);
    

        object serialize_VkDeviceAddressBindingTypeEXT(VkDeviceAddressBindingTypeEXT name);
        VkDeviceAddressBindingTypeEXT deserialize_VkDeviceAddressBindingTypeEXT(object &name);
    

        object serialize_VkMicromapTypeEXT(VkMicromapTypeEXT name);
        VkMicromapTypeEXT deserialize_VkMicromapTypeEXT(object &name);
    

        object serialize_VkBuildMicromapModeEXT(VkBuildMicromapModeEXT name);
        VkBuildMicromapModeEXT deserialize_VkBuildMicromapModeEXT(object &name);
    

        object serialize_VkCopyMicromapModeEXT(VkCopyMicromapModeEXT name);
        VkCopyMicromapModeEXT deserialize_VkCopyMicromapModeEXT(object &name);
    

        object serialize_VkBuildMicromapFlagBitsEXT(VkBuildMicromapFlagBitsEXT name);
        VkBuildMicromapFlagBitsEXT deserialize_VkBuildMicromapFlagBitsEXT(object &name);
    

        object serialize_VkMicromapCreateFlagBitsEXT(VkMicromapCreateFlagBitsEXT name);
        VkMicromapCreateFlagBitsEXT deserialize_VkMicromapCreateFlagBitsEXT(object &name);
    

        object serialize_VkOpacityMicromapFormatEXT(VkOpacityMicromapFormatEXT name);
        VkOpacityMicromapFormatEXT deserialize_VkOpacityMicromapFormatEXT(object &name);
    

        object serialize_VkOpacityMicromapSpecialIndexEXT(VkOpacityMicromapSpecialIndexEXT name);
        VkOpacityMicromapSpecialIndexEXT deserialize_VkOpacityMicromapSpecialIndexEXT(object &name);
    

        object serialize_VkDeviceFaultVendorBinaryHeaderVersionEXT(VkDeviceFaultVendorBinaryHeaderVersionEXT name);
        VkDeviceFaultVendorBinaryHeaderVersionEXT deserialize_VkDeviceFaultVendorBinaryHeaderVersionEXT(object &name);
    

        object serialize_VkFrameBoundaryFlagBitsEXT(VkFrameBoundaryFlagBitsEXT name);
        VkFrameBoundaryFlagBitsEXT deserialize_VkFrameBoundaryFlagBitsEXT(object &name);
    

        object serialize_VkMemoryDecompressionMethodFlagBitsNV(VkMemoryDecompressionMethodFlagBitsNV name);
        VkMemoryDecompressionMethodFlagBitsNV deserialize_VkMemoryDecompressionMethodFlagBitsNV(object &name);
    

        object serialize_VkDepthBiasRepresentationEXT(VkDepthBiasRepresentationEXT name);
        VkDepthBiasRepresentationEXT deserialize_VkDepthBiasRepresentationEXT(object &name);
    

        object serialize_VkDirectDriverLoadingModeLUNARG(VkDirectDriverLoadingModeLUNARG name);
        VkDirectDriverLoadingModeLUNARG deserialize_VkDirectDriverLoadingModeLUNARG(object &name);
    

        object serialize_VkPipelineCreateFlagBits2KHR(VkPipelineCreateFlagBits2KHR name);
        VkPipelineCreateFlagBits2KHR deserialize_VkPipelineCreateFlagBits2KHR(object &name);
    

        object serialize_VkBufferUsageFlagBits2KHR(VkBufferUsageFlagBits2KHR name);
        VkBufferUsageFlagBits2KHR deserialize_VkBufferUsageFlagBits2KHR(object &name);
    

        object serialize_VkShaderCreateFlagBitsEXT(VkShaderCreateFlagBitsEXT name);
        VkShaderCreateFlagBitsEXT deserialize_VkShaderCreateFlagBitsEXT(object &name);
    

        object serialize_VkShaderCodeTypeEXT(VkShaderCodeTypeEXT name);
        VkShaderCodeTypeEXT deserialize_VkShaderCodeTypeEXT(object &name);
    

        object serialize_VkScopeKHR(VkScopeKHR name);
        VkScopeKHR deserialize_VkScopeKHR(object &name);
    

        object serialize_VkComponentTypeKHR(VkComponentTypeKHR name);
        VkComponentTypeKHR deserialize_VkComponentTypeKHR(object &name);
    

        object serialize_VkScopeNV(VkScopeNV name);
        VkScopeNV deserialize_VkScopeNV(object &name);
    

        object serialize_VkComponentTypeNV(VkComponentTypeNV name);
        VkComponentTypeNV deserialize_VkComponentTypeNV(object &name);
    

        object serialize_VkCubicFilterWeightsQCOM(VkCubicFilterWeightsQCOM name);
        VkCubicFilterWeightsQCOM deserialize_VkCubicFilterWeightsQCOM(object &name);
    

        object serialize_VkBlockMatchWindowCompareModeQCOM(VkBlockMatchWindowCompareModeQCOM name);
        VkBlockMatchWindowCompareModeQCOM deserialize_VkBlockMatchWindowCompareModeQCOM(object &name);
    

        object serialize_VkLayeredDriverUnderlyingApiMSFT(VkLayeredDriverUnderlyingApiMSFT name);
        VkLayeredDriverUnderlyingApiMSFT deserialize_VkLayeredDriverUnderlyingApiMSFT(object &name);
    

        object serialize_VkColorSpaceKHR(VkColorSpaceKHR name);
        VkColorSpaceKHR deserialize_VkColorSpaceKHR(object &name);
    

        object serialize_VkCompositeAlphaFlagBitsKHR(VkCompositeAlphaFlagBitsKHR name);
        VkCompositeAlphaFlagBitsKHR deserialize_VkCompositeAlphaFlagBitsKHR(object &name);
    

        object serialize_VkDisplayPlaneAlphaFlagBitsKHR(VkDisplayPlaneAlphaFlagBitsKHR name);
        VkDisplayPlaneAlphaFlagBitsKHR deserialize_VkDisplayPlaneAlphaFlagBitsKHR(object &name);
    

        object serialize_VkPresentModeKHR(VkPresentModeKHR name);
        VkPresentModeKHR deserialize_VkPresentModeKHR(object &name);
    

        object serialize_VkSurfaceTransformFlagBitsKHR(VkSurfaceTransformFlagBitsKHR name);
        VkSurfaceTransformFlagBitsKHR deserialize_VkSurfaceTransformFlagBitsKHR(object &name);
    

        object serialize_VkDebugReportFlagBitsEXT(VkDebugReportFlagBitsEXT name);
        VkDebugReportFlagBitsEXT deserialize_VkDebugReportFlagBitsEXT(object &name);
    

        object serialize_VkDebugReportObjectTypeEXT(VkDebugReportObjectTypeEXT name);
        VkDebugReportObjectTypeEXT deserialize_VkDebugReportObjectTypeEXT(object &name);
    

        object serialize_VkDeviceMemoryReportEventTypeEXT(VkDeviceMemoryReportEventTypeEXT name);
        VkDeviceMemoryReportEventTypeEXT deserialize_VkDeviceMemoryReportEventTypeEXT(object &name);
    

        object serialize_VkRasterizationOrderAMD(VkRasterizationOrderAMD name);
        VkRasterizationOrderAMD deserialize_VkRasterizationOrderAMD(object &name);
    

        object serialize_VkExternalMemoryHandleTypeFlagBitsNV(VkExternalMemoryHandleTypeFlagBitsNV name);
        VkExternalMemoryHandleTypeFlagBitsNV deserialize_VkExternalMemoryHandleTypeFlagBitsNV(object &name);
    

        object serialize_VkExternalMemoryFeatureFlagBitsNV(VkExternalMemoryFeatureFlagBitsNV name);
        VkExternalMemoryFeatureFlagBitsNV deserialize_VkExternalMemoryFeatureFlagBitsNV(object &name);
    

        object serialize_VkValidationCheckEXT(VkValidationCheckEXT name);
        VkValidationCheckEXT deserialize_VkValidationCheckEXT(object &name);
    

        object serialize_VkValidationFeatureEnableEXT(VkValidationFeatureEnableEXT name);
        VkValidationFeatureEnableEXT deserialize_VkValidationFeatureEnableEXT(object &name);
    

        object serialize_VkValidationFeatureDisableEXT(VkValidationFeatureDisableEXT name);
        VkValidationFeatureDisableEXT deserialize_VkValidationFeatureDisableEXT(object &name);
    

        object serialize_VkExternalMemoryHandleTypeFlagBits(VkExternalMemoryHandleTypeFlagBits name);
        VkExternalMemoryHandleTypeFlagBits deserialize_VkExternalMemoryHandleTypeFlagBits(object &name);
    

        object serialize_VkExternalMemoryHandleTypeFlagBitsKHR(VkExternalMemoryHandleTypeFlagBitsKHR name);
        VkExternalMemoryHandleTypeFlagBitsKHR deserialize_VkExternalMemoryHandleTypeFlagBitsKHR(object &name);
    

        object serialize_VkExternalMemoryFeatureFlagBits(VkExternalMemoryFeatureFlagBits name);
        VkExternalMemoryFeatureFlagBits deserialize_VkExternalMemoryFeatureFlagBits(object &name);
    

        object serialize_VkExternalMemoryFeatureFlagBitsKHR(VkExternalMemoryFeatureFlagBitsKHR name);
        VkExternalMemoryFeatureFlagBitsKHR deserialize_VkExternalMemoryFeatureFlagBitsKHR(object &name);
    

        object serialize_VkExternalSemaphoreHandleTypeFlagBits(VkExternalSemaphoreHandleTypeFlagBits name);
        VkExternalSemaphoreHandleTypeFlagBits deserialize_VkExternalSemaphoreHandleTypeFlagBits(object &name);
    

        object serialize_VkExternalSemaphoreHandleTypeFlagBitsKHR(VkExternalSemaphoreHandleTypeFlagBitsKHR name);
        VkExternalSemaphoreHandleTypeFlagBitsKHR deserialize_VkExternalSemaphoreHandleTypeFlagBitsKHR(object &name);
    

        object serialize_VkExternalSemaphoreFeatureFlagBits(VkExternalSemaphoreFeatureFlagBits name);
        VkExternalSemaphoreFeatureFlagBits deserialize_VkExternalSemaphoreFeatureFlagBits(object &name);
    

        object serialize_VkExternalSemaphoreFeatureFlagBitsKHR(VkExternalSemaphoreFeatureFlagBitsKHR name);
        VkExternalSemaphoreFeatureFlagBitsKHR deserialize_VkExternalSemaphoreFeatureFlagBitsKHR(object &name);
    

        object serialize_VkSemaphoreImportFlagBits(VkSemaphoreImportFlagBits name);
        VkSemaphoreImportFlagBits deserialize_VkSemaphoreImportFlagBits(object &name);
    

        object serialize_VkSemaphoreImportFlagBitsKHR(VkSemaphoreImportFlagBitsKHR name);
        VkSemaphoreImportFlagBitsKHR deserialize_VkSemaphoreImportFlagBitsKHR(object &name);
    

        object serialize_VkExternalFenceHandleTypeFlagBits(VkExternalFenceHandleTypeFlagBits name);
        VkExternalFenceHandleTypeFlagBits deserialize_VkExternalFenceHandleTypeFlagBits(object &name);
    

        object serialize_VkExternalFenceHandleTypeFlagBitsKHR(VkExternalFenceHandleTypeFlagBitsKHR name);
        VkExternalFenceHandleTypeFlagBitsKHR deserialize_VkExternalFenceHandleTypeFlagBitsKHR(object &name);
    

        object serialize_VkExternalFenceFeatureFlagBits(VkExternalFenceFeatureFlagBits name);
        VkExternalFenceFeatureFlagBits deserialize_VkExternalFenceFeatureFlagBits(object &name);
    

        object serialize_VkExternalFenceFeatureFlagBitsKHR(VkExternalFenceFeatureFlagBitsKHR name);
        VkExternalFenceFeatureFlagBitsKHR deserialize_VkExternalFenceFeatureFlagBitsKHR(object &name);
    

        object serialize_VkFenceImportFlagBits(VkFenceImportFlagBits name);
        VkFenceImportFlagBits deserialize_VkFenceImportFlagBits(object &name);
    

        object serialize_VkFenceImportFlagBitsKHR(VkFenceImportFlagBitsKHR name);
        VkFenceImportFlagBitsKHR deserialize_VkFenceImportFlagBitsKHR(object &name);
    

        object serialize_VkSurfaceCounterFlagBitsEXT(VkSurfaceCounterFlagBitsEXT name);
        VkSurfaceCounterFlagBitsEXT deserialize_VkSurfaceCounterFlagBitsEXT(object &name);
    

        object serialize_VkDisplayPowerStateEXT(VkDisplayPowerStateEXT name);
        VkDisplayPowerStateEXT deserialize_VkDisplayPowerStateEXT(object &name);
    

        object serialize_VkDeviceEventTypeEXT(VkDeviceEventTypeEXT name);
        VkDeviceEventTypeEXT deserialize_VkDeviceEventTypeEXT(object &name);
    

        object serialize_VkDisplayEventTypeEXT(VkDisplayEventTypeEXT name);
        VkDisplayEventTypeEXT deserialize_VkDisplayEventTypeEXT(object &name);
    

        object serialize_VkPeerMemoryFeatureFlagBits(VkPeerMemoryFeatureFlagBits name);
        VkPeerMemoryFeatureFlagBits deserialize_VkPeerMemoryFeatureFlagBits(object &name);
    

        object serialize_VkPeerMemoryFeatureFlagBitsKHR(VkPeerMemoryFeatureFlagBitsKHR name);
        VkPeerMemoryFeatureFlagBitsKHR deserialize_VkPeerMemoryFeatureFlagBitsKHR(object &name);
    

        object serialize_VkMemoryAllocateFlagBits(VkMemoryAllocateFlagBits name);
        VkMemoryAllocateFlagBits deserialize_VkMemoryAllocateFlagBits(object &name);
    

        object serialize_VkMemoryAllocateFlagBitsKHR(VkMemoryAllocateFlagBitsKHR name);
        VkMemoryAllocateFlagBitsKHR deserialize_VkMemoryAllocateFlagBitsKHR(object &name);
    

        object serialize_VkDeviceGroupPresentModeFlagBitsKHR(VkDeviceGroupPresentModeFlagBitsKHR name);
        VkDeviceGroupPresentModeFlagBitsKHR deserialize_VkDeviceGroupPresentModeFlagBitsKHR(object &name);
    

        object serialize_VkSwapchainCreateFlagBitsKHR(VkSwapchainCreateFlagBitsKHR name);
        VkSwapchainCreateFlagBitsKHR deserialize_VkSwapchainCreateFlagBitsKHR(object &name);
    

        object serialize_VkSubgroupFeatureFlagBits(VkSubgroupFeatureFlagBits name);
        VkSubgroupFeatureFlagBits deserialize_VkSubgroupFeatureFlagBits(object &name);
    

        object serialize_VkTessellationDomainOrigin(VkTessellationDomainOrigin name);
        VkTessellationDomainOrigin deserialize_VkTessellationDomainOrigin(object &name);
    

        object serialize_VkTessellationDomainOriginKHR(VkTessellationDomainOriginKHR name);
        VkTessellationDomainOriginKHR deserialize_VkTessellationDomainOriginKHR(object &name);
    

        object serialize_VkSamplerYcbcrModelConversion(VkSamplerYcbcrModelConversion name);
        VkSamplerYcbcrModelConversion deserialize_VkSamplerYcbcrModelConversion(object &name);
    

        object serialize_VkSamplerYcbcrModelConversionKHR(VkSamplerYcbcrModelConversionKHR name);
        VkSamplerYcbcrModelConversionKHR deserialize_VkSamplerYcbcrModelConversionKHR(object &name);
    

        object serialize_VkSamplerYcbcrRange(VkSamplerYcbcrRange name);
        VkSamplerYcbcrRange deserialize_VkSamplerYcbcrRange(object &name);
    

        object serialize_VkSamplerYcbcrRangeKHR(VkSamplerYcbcrRangeKHR name);
        VkSamplerYcbcrRangeKHR deserialize_VkSamplerYcbcrRangeKHR(object &name);
    

        object serialize_VkChromaLocation(VkChromaLocation name);
        VkChromaLocation deserialize_VkChromaLocation(object &name);
    

        object serialize_VkChromaLocationKHR(VkChromaLocationKHR name);
        VkChromaLocationKHR deserialize_VkChromaLocationKHR(object &name);
    

        object serialize_VkSamplerReductionMode(VkSamplerReductionMode name);
        VkSamplerReductionMode deserialize_VkSamplerReductionMode(object &name);
    

        object serialize_VkSamplerReductionModeEXT(VkSamplerReductionModeEXT name);
        VkSamplerReductionModeEXT deserialize_VkSamplerReductionModeEXT(object &name);
    

        object serialize_VkBlendOverlapEXT(VkBlendOverlapEXT name);
        VkBlendOverlapEXT deserialize_VkBlendOverlapEXT(object &name);
    

        object serialize_VkDebugUtilsMessageSeverityFlagBitsEXT(VkDebugUtilsMessageSeverityFlagBitsEXT name);
        VkDebugUtilsMessageSeverityFlagBitsEXT deserialize_VkDebugUtilsMessageSeverityFlagBitsEXT(object &name);
    

        object serialize_VkDebugUtilsMessageTypeFlagBitsEXT(VkDebugUtilsMessageTypeFlagBitsEXT name);
        VkDebugUtilsMessageTypeFlagBitsEXT deserialize_VkDebugUtilsMessageTypeFlagBitsEXT(object &name);
    

        object serialize_VkShaderFloatControlsIndependence(VkShaderFloatControlsIndependence name);
        VkShaderFloatControlsIndependence deserialize_VkShaderFloatControlsIndependence(object &name);
    

        object serialize_VkShaderFloatControlsIndependenceKHR(VkShaderFloatControlsIndependenceKHR name);
        VkShaderFloatControlsIndependenceKHR deserialize_VkShaderFloatControlsIndependenceKHR(object &name);
    

        object serialize_VkFragmentShadingRateCombinerOpKHR(VkFragmentShadingRateCombinerOpKHR name);
        VkFragmentShadingRateCombinerOpKHR deserialize_VkFragmentShadingRateCombinerOpKHR(object &name);
    

        object serialize_VkSubmitFlagBits(VkSubmitFlagBits name);
        VkSubmitFlagBits deserialize_VkSubmitFlagBits(object &name);
    

        object serialize_VkSubmitFlagBitsKHR(VkSubmitFlagBitsKHR name);
        VkSubmitFlagBitsKHR deserialize_VkSubmitFlagBitsKHR(object &name);
    

        object serialize_VkGraphicsPipelineLibraryFlagBitsEXT(VkGraphicsPipelineLibraryFlagBitsEXT name);
        VkGraphicsPipelineLibraryFlagBitsEXT deserialize_VkGraphicsPipelineLibraryFlagBitsEXT(object &name);
    

        object serialize_VkOpticalFlowGridSizeFlagBitsNV(VkOpticalFlowGridSizeFlagBitsNV name);
        VkOpticalFlowGridSizeFlagBitsNV deserialize_VkOpticalFlowGridSizeFlagBitsNV(object &name);
    

        object serialize_VkOpticalFlowUsageFlagBitsNV(VkOpticalFlowUsageFlagBitsNV name);
        VkOpticalFlowUsageFlagBitsNV deserialize_VkOpticalFlowUsageFlagBitsNV(object &name);
    

        object serialize_VkOpticalFlowPerformanceLevelNV(VkOpticalFlowPerformanceLevelNV name);
        VkOpticalFlowPerformanceLevelNV deserialize_VkOpticalFlowPerformanceLevelNV(object &name);
    

        object serialize_VkOpticalFlowSessionBindingPointNV(VkOpticalFlowSessionBindingPointNV name);
        VkOpticalFlowSessionBindingPointNV deserialize_VkOpticalFlowSessionBindingPointNV(object &name);
    

        object serialize_VkOpticalFlowSessionCreateFlagBitsNV(VkOpticalFlowSessionCreateFlagBitsNV name);
        VkOpticalFlowSessionCreateFlagBitsNV deserialize_VkOpticalFlowSessionCreateFlagBitsNV(object &name);
    

        object serialize_VkOpticalFlowExecuteFlagBitsNV(VkOpticalFlowExecuteFlagBitsNV name);
        VkOpticalFlowExecuteFlagBitsNV deserialize_VkOpticalFlowExecuteFlagBitsNV(object &name);
    

        object serialize_VkDeviceFaultAddressTypeEXT(VkDeviceFaultAddressTypeEXT name);
        VkDeviceFaultAddressTypeEXT deserialize_VkDeviceFaultAddressTypeEXT(object &name);
    

        object serialize_VkPresentScalingFlagBitsEXT(VkPresentScalingFlagBitsEXT name);
        VkPresentScalingFlagBitsEXT deserialize_VkPresentScalingFlagBitsEXT(object &name);
    

        object serialize_VkPresentGravityFlagBitsEXT(VkPresentGravityFlagBitsEXT name);
        VkPresentGravityFlagBitsEXT deserialize_VkPresentGravityFlagBitsEXT(object &name);
    

        object serialize_VkVendorId(VkVendorId name);
        VkVendorId deserialize_VkVendorId(object &name);
    

        object serialize_VkDriverId(VkDriverId name);
        VkDriverId deserialize_VkDriverId(object &name);
    

        object serialize_VkDriverIdKHR(VkDriverIdKHR name);
        VkDriverIdKHR deserialize_VkDriverIdKHR(object &name);
    

        object serialize_VkShadingRatePaletteEntryNV(VkShadingRatePaletteEntryNV name);
        VkShadingRatePaletteEntryNV deserialize_VkShadingRatePaletteEntryNV(object &name);
    

        object serialize_VkCoarseSampleOrderTypeNV(VkCoarseSampleOrderTypeNV name);
        VkCoarseSampleOrderTypeNV deserialize_VkCoarseSampleOrderTypeNV(object &name);
    

        object serialize_VkPipelineExecutableStatisticFormatKHR(VkPipelineExecutableStatisticFormatKHR name);
        VkPipelineExecutableStatisticFormatKHR deserialize_VkPipelineExecutableStatisticFormatKHR(object &name);
    

        object serialize_VkVideoCodecOperationFlagBitsKHR(VkVideoCodecOperationFlagBitsKHR name);
        VkVideoCodecOperationFlagBitsKHR deserialize_VkVideoCodecOperationFlagBitsKHR(object &name);
    

        object serialize_VkVideoChromaSubsamplingFlagBitsKHR(VkVideoChromaSubsamplingFlagBitsKHR name);
        VkVideoChromaSubsamplingFlagBitsKHR deserialize_VkVideoChromaSubsamplingFlagBitsKHR(object &name);
    

        object serialize_VkVideoComponentBitDepthFlagBitsKHR(VkVideoComponentBitDepthFlagBitsKHR name);
        VkVideoComponentBitDepthFlagBitsKHR deserialize_VkVideoComponentBitDepthFlagBitsKHR(object &name);
    

        object serialize_VkVideoCapabilityFlagBitsKHR(VkVideoCapabilityFlagBitsKHR name);
        VkVideoCapabilityFlagBitsKHR deserialize_VkVideoCapabilityFlagBitsKHR(object &name);
    

        object serialize_VkVideoSessionCreateFlagBitsKHR(VkVideoSessionCreateFlagBitsKHR name);
        VkVideoSessionCreateFlagBitsKHR deserialize_VkVideoSessionCreateFlagBitsKHR(object &name);
    

        object serialize_VkVideoCodingControlFlagBitsKHR(VkVideoCodingControlFlagBitsKHR name);
        VkVideoCodingControlFlagBitsKHR deserialize_VkVideoCodingControlFlagBitsKHR(object &name);
    

        object serialize_VkQueryResultStatusKHR(VkQueryResultStatusKHR name);
        VkQueryResultStatusKHR deserialize_VkQueryResultStatusKHR(object &name);
    

        object serialize_VkVideoDecodeUsageFlagBitsKHR(VkVideoDecodeUsageFlagBitsKHR name);
        VkVideoDecodeUsageFlagBitsKHR deserialize_VkVideoDecodeUsageFlagBitsKHR(object &name);
    

        object serialize_VkVideoDecodeCapabilityFlagBitsKHR(VkVideoDecodeCapabilityFlagBitsKHR name);
        VkVideoDecodeCapabilityFlagBitsKHR deserialize_VkVideoDecodeCapabilityFlagBitsKHR(object &name);
    

        object serialize_VkVideoDecodeH264PictureLayoutFlagBitsKHR(VkVideoDecodeH264PictureLayoutFlagBitsKHR name);
        VkVideoDecodeH264PictureLayoutFlagBitsKHR deserialize_VkVideoDecodeH264PictureLayoutFlagBitsKHR(object &name);
    

        object serialize_VkAccelerationStructureMotionInstanceTypeNV(VkAccelerationStructureMotionInstanceTypeNV name);
        VkAccelerationStructureMotionInstanceTypeNV deserialize_VkAccelerationStructureMotionInstanceTypeNV(object &name);
    

        object serialize_Display_p(const Display* name);
        Display* deserialize_Display_p(object &name);
    

        object serialize_VisualID_p(const VisualID* name);
        VisualID* deserialize_VisualID_p(object &name);
    

            object serialize_VisualID(const VisualID name);
            VisualID deserialize_VisualID(object &name);
        

        object serialize_Window_p(const Window* name);
        Window* deserialize_Window_p(object &name);
    

            object serialize_Window(const Window name);
            Window deserialize_Window(object &name);
        

        object serialize_xcb_connection_t_p(const xcb_connection_t* name);
        xcb_connection_t* deserialize_xcb_connection_t_p(object &name);
    

        object serialize_xcb_visualid_t_p(const xcb_visualid_t* name);
        xcb_visualid_t* deserialize_xcb_visualid_t_p(object &name);
    

            object serialize_xcb_visualid_t(const xcb_visualid_t name);
            xcb_visualid_t deserialize_xcb_visualid_t(object &name);
        

        object serialize_xcb_window_t_p(const xcb_window_t* name);
        xcb_window_t* deserialize_xcb_window_t_p(object &name);
    

            object serialize_xcb_window_t(const xcb_window_t name);
            xcb_window_t deserialize_xcb_window_t(object &name);
        

        object serialize_StdVideoH264ProfileIdc_p(const StdVideoH264ProfileIdc* name);
        StdVideoH264ProfileIdc* deserialize_StdVideoH264ProfileIdc_p(object &name);
    

            object serialize_StdVideoH264ProfileIdc(const StdVideoH264ProfileIdc name);
            StdVideoH264ProfileIdc deserialize_StdVideoH264ProfileIdc(object &name);
        

        object serialize_StdVideoH264LevelIdc_p(const StdVideoH264LevelIdc* name);
        StdVideoH264LevelIdc* deserialize_StdVideoH264LevelIdc_p(object &name);
    

            object serialize_StdVideoH264LevelIdc(const StdVideoH264LevelIdc name);
            StdVideoH264LevelIdc deserialize_StdVideoH264LevelIdc(object &name);
        

        object serialize_StdVideoH264ChromaFormatIdc_p(const StdVideoH264ChromaFormatIdc* name);
        StdVideoH264ChromaFormatIdc* deserialize_StdVideoH264ChromaFormatIdc_p(object &name);
    

        object serialize_StdVideoH264PocType_p(const StdVideoH264PocType* name);
        StdVideoH264PocType* deserialize_StdVideoH264PocType_p(object &name);
    

        object serialize_StdVideoH264SpsFlags_p(const StdVideoH264SpsFlags* name);
        StdVideoH264SpsFlags* deserialize_StdVideoH264SpsFlags_p(object &name);
    

        object serialize_StdVideoH264ScalingLists_p(const StdVideoH264ScalingLists* name);
        StdVideoH264ScalingLists* deserialize_StdVideoH264ScalingLists_p(object &name);
    

        object serialize_StdVideoH264SequenceParameterSetVui_p(const StdVideoH264SequenceParameterSetVui* name);
        StdVideoH264SequenceParameterSetVui* deserialize_StdVideoH264SequenceParameterSetVui_p(object &name);
    

        object serialize_StdVideoH264AspectRatioIdc_p(const StdVideoH264AspectRatioIdc* name);
        StdVideoH264AspectRatioIdc* deserialize_StdVideoH264AspectRatioIdc_p(object &name);
    

        object serialize_StdVideoH264HrdParameters_p(const StdVideoH264HrdParameters* name);
        StdVideoH264HrdParameters* deserialize_StdVideoH264HrdParameters_p(object &name);
    

        object serialize_StdVideoH264SpsVuiFlags_p(const StdVideoH264SpsVuiFlags* name);
        StdVideoH264SpsVuiFlags* deserialize_StdVideoH264SpsVuiFlags_p(object &name);
    

        object serialize_StdVideoH264WeightedBipredIdc_p(const StdVideoH264WeightedBipredIdc* name);
        StdVideoH264WeightedBipredIdc* deserialize_StdVideoH264WeightedBipredIdc_p(object &name);
    

        object serialize_StdVideoH264PpsFlags_p(const StdVideoH264PpsFlags* name);
        StdVideoH264PpsFlags* deserialize_StdVideoH264PpsFlags_p(object &name);
    

        object serialize_StdVideoH264SliceType_p(const StdVideoH264SliceType* name);
        StdVideoH264SliceType* deserialize_StdVideoH264SliceType_p(object &name);
    

        object serialize_StdVideoH264CabacInitIdc_p(const StdVideoH264CabacInitIdc* name);
        StdVideoH264CabacInitIdc* deserialize_StdVideoH264CabacInitIdc_p(object &name);
    

        object serialize_StdVideoH264DisableDeblockingFilterIdc_p(const StdVideoH264DisableDeblockingFilterIdc* name);
        StdVideoH264DisableDeblockingFilterIdc* deserialize_StdVideoH264DisableDeblockingFilterIdc_p(object &name);
    

        object serialize_StdVideoH264PictureType_p(const StdVideoH264PictureType* name);
        StdVideoH264PictureType* deserialize_StdVideoH264PictureType_p(object &name);
    

        object serialize_StdVideoH264ModificationOfPicNumsIdc_p(const StdVideoH264ModificationOfPicNumsIdc* name);
        StdVideoH264ModificationOfPicNumsIdc* deserialize_StdVideoH264ModificationOfPicNumsIdc_p(object &name);
    

        object serialize_StdVideoH264MemMgmtControlOp_p(const StdVideoH264MemMgmtControlOp* name);
        StdVideoH264MemMgmtControlOp* deserialize_StdVideoH264MemMgmtControlOp_p(object &name);
    

        object serialize_StdVideoDecodeH264PictureInfo_p(const StdVideoDecodeH264PictureInfo* name);
        StdVideoDecodeH264PictureInfo* deserialize_StdVideoDecodeH264PictureInfo_p(object &name);
    

        object serialize_StdVideoDecodeH264ReferenceInfo_p(const StdVideoDecodeH264ReferenceInfo* name);
        StdVideoDecodeH264ReferenceInfo* deserialize_StdVideoDecodeH264ReferenceInfo_p(object &name);
    

        object serialize_StdVideoDecodeH264PictureInfoFlags_p(const StdVideoDecodeH264PictureInfoFlags* name);
        StdVideoDecodeH264PictureInfoFlags* deserialize_StdVideoDecodeH264PictureInfoFlags_p(object &name);
    

        object serialize_StdVideoDecodeH264ReferenceInfoFlags_p(const StdVideoDecodeH264ReferenceInfoFlags* name);
        StdVideoDecodeH264ReferenceInfoFlags* deserialize_StdVideoDecodeH264ReferenceInfoFlags_p(object &name);
    

        object serialize_StdVideoH264SequenceParameterSet_p(const StdVideoH264SequenceParameterSet* name);
        StdVideoH264SequenceParameterSet* deserialize_StdVideoH264SequenceParameterSet_p(object &name);
    

        object serialize_StdVideoH264PictureParameterSet_p(const StdVideoH264PictureParameterSet* name);
        StdVideoH264PictureParameterSet* deserialize_StdVideoH264PictureParameterSet_p(object &name);
    

        object serialize_StdVideoH265ProfileIdc_p(const StdVideoH265ProfileIdc* name);
        StdVideoH265ProfileIdc* deserialize_StdVideoH265ProfileIdc_p(object &name);
    

            object serialize_StdVideoH265ProfileIdc(const StdVideoH265ProfileIdc name);
            StdVideoH265ProfileIdc deserialize_StdVideoH265ProfileIdc(object &name);
        

        object serialize_StdVideoH265VideoParameterSet_p(const StdVideoH265VideoParameterSet* name);
        StdVideoH265VideoParameterSet* deserialize_StdVideoH265VideoParameterSet_p(object &name);
    

        object serialize_StdVideoH265SequenceParameterSet_p(const StdVideoH265SequenceParameterSet* name);
        StdVideoH265SequenceParameterSet* deserialize_StdVideoH265SequenceParameterSet_p(object &name);
    

        object serialize_StdVideoH265PictureParameterSet_p(const StdVideoH265PictureParameterSet* name);
        StdVideoH265PictureParameterSet* deserialize_StdVideoH265PictureParameterSet_p(object &name);
    

        object serialize_StdVideoH265DecPicBufMgr_p(const StdVideoH265DecPicBufMgr* name);
        StdVideoH265DecPicBufMgr* deserialize_StdVideoH265DecPicBufMgr_p(object &name);
    

        object serialize_StdVideoH265HrdParameters_p(const StdVideoH265HrdParameters* name);
        StdVideoH265HrdParameters* deserialize_StdVideoH265HrdParameters_p(object &name);
    

        object serialize_StdVideoH265VpsFlags_p(const StdVideoH265VpsFlags* name);
        StdVideoH265VpsFlags* deserialize_StdVideoH265VpsFlags_p(object &name);
    

        object serialize_StdVideoH265LevelIdc_p(const StdVideoH265LevelIdc* name);
        StdVideoH265LevelIdc* deserialize_StdVideoH265LevelIdc_p(object &name);
    

            object serialize_StdVideoH265LevelIdc(const StdVideoH265LevelIdc name);
            StdVideoH265LevelIdc deserialize_StdVideoH265LevelIdc(object &name);
        

        object serialize_StdVideoH265SpsFlags_p(const StdVideoH265SpsFlags* name);
        StdVideoH265SpsFlags* deserialize_StdVideoH265SpsFlags_p(object &name);
    

        object serialize_StdVideoH265ScalingLists_p(const StdVideoH265ScalingLists* name);
        StdVideoH265ScalingLists* deserialize_StdVideoH265ScalingLists_p(object &name);
    

        object serialize_StdVideoH265SequenceParameterSetVui_p(const StdVideoH265SequenceParameterSetVui* name);
        StdVideoH265SequenceParameterSetVui* deserialize_StdVideoH265SequenceParameterSetVui_p(object &name);
    

        object serialize_StdVideoH265PredictorPaletteEntries_p(const StdVideoH265PredictorPaletteEntries* name);
        StdVideoH265PredictorPaletteEntries* deserialize_StdVideoH265PredictorPaletteEntries_p(object &name);
    

        object serialize_StdVideoH265PpsFlags_p(const StdVideoH265PpsFlags* name);
        StdVideoH265PpsFlags* deserialize_StdVideoH265PpsFlags_p(object &name);
    

        object serialize_StdVideoH265SubLayerHrdParameters_p(const StdVideoH265SubLayerHrdParameters* name);
        StdVideoH265SubLayerHrdParameters* deserialize_StdVideoH265SubLayerHrdParameters_p(object &name);
    

        object serialize_StdVideoH265HrdFlags_p(const StdVideoH265HrdFlags* name);
        StdVideoH265HrdFlags* deserialize_StdVideoH265HrdFlags_p(object &name);
    

        object serialize_StdVideoH265SpsVuiFlags_p(const StdVideoH265SpsVuiFlags* name);
        StdVideoH265SpsVuiFlags* deserialize_StdVideoH265SpsVuiFlags_p(object &name);
    

        object serialize_StdVideoH265SliceType_p(const StdVideoH265SliceType* name);
        StdVideoH265SliceType* deserialize_StdVideoH265SliceType_p(object &name);
    

        object serialize_StdVideoH265PictureType_p(const StdVideoH265PictureType* name);
        StdVideoH265PictureType* deserialize_StdVideoH265PictureType_p(object &name);
    

        object serialize_StdVideoDecodeH265PictureInfo_p(const StdVideoDecodeH265PictureInfo* name);
        StdVideoDecodeH265PictureInfo* deserialize_StdVideoDecodeH265PictureInfo_p(object &name);
    

        object serialize_StdVideoDecodeH265ReferenceInfo_p(const StdVideoDecodeH265ReferenceInfo* name);
        StdVideoDecodeH265ReferenceInfo* deserialize_StdVideoDecodeH265ReferenceInfo_p(object &name);
    

        object serialize_StdVideoDecodeH265PictureInfoFlags_p(const StdVideoDecodeH265PictureInfoFlags* name);
        StdVideoDecodeH265PictureInfoFlags* deserialize_StdVideoDecodeH265PictureInfoFlags_p(object &name);
    

        object serialize_StdVideoDecodeH265ReferenceInfoFlags_p(const StdVideoDecodeH265ReferenceInfoFlags* name);
        StdVideoDecodeH265ReferenceInfoFlags* deserialize_StdVideoDecodeH265ReferenceInfoFlags_p(object &name);
    
object serialize_PFN_vkInternalAllocationNotification(PFN_vkInternalAllocationNotification name);
void handle_PFN_vkInternalAllocationNotification_request(object &data);
void handle_PFN_vkInternalAllocationNotification_response(object& data, 
    void*                                       pUserData,
    size_t                                      size,
    VkInternalAllocationType                    allocationType,
    VkSystemAllocationScope                     allocationScope);
PFN_vkInternalAllocationNotification deserialize_PFN_vkInternalAllocationNotification(object &name);
object serialize_PFN_vkInternalFreeNotification(PFN_vkInternalFreeNotification name);
void handle_PFN_vkInternalFreeNotification_request(object &data);
void handle_PFN_vkInternalFreeNotification_response(object& data, 
    void*                                       pUserData,
    size_t                                      size,
    VkInternalAllocationType                    allocationType,
    VkSystemAllocationScope                     allocationScope);
PFN_vkInternalFreeNotification deserialize_PFN_vkInternalFreeNotification(object &name);
object serialize_PFN_vkReallocationFunction(PFN_vkReallocationFunction name);
void handle_PFN_vkReallocationFunction_request(object &data);
void* handle_PFN_vkReallocationFunction_response(object& data, 
    void*                                       pUserData,
    void*                                       pOriginal,
    size_t                                      size,
    size_t                                      alignment,
    VkSystemAllocationScope                     allocationScope);
PFN_vkReallocationFunction deserialize_PFN_vkReallocationFunction(object &name);
object serialize_PFN_vkAllocationFunction(PFN_vkAllocationFunction name);
void handle_PFN_vkAllocationFunction_request(object &data);
void* handle_PFN_vkAllocationFunction_response(object& data, 
    void*                                       pUserData,
    size_t                                      size,
    size_t                                      alignment,
    VkSystemAllocationScope                     allocationScope);
PFN_vkAllocationFunction deserialize_PFN_vkAllocationFunction(object &name);
object serialize_PFN_vkFreeFunction(PFN_vkFreeFunction name);
void handle_PFN_vkFreeFunction_request(object &data);
void handle_PFN_vkFreeFunction_response(object& data, 
    void*                                       pUserData,
    void*                                       pMemory);
PFN_vkFreeFunction deserialize_PFN_vkFreeFunction(object &name);
object serialize_PFN_vkDebugReportCallbackEXT(PFN_vkDebugReportCallbackEXT name);
void handle_PFN_vkDebugReportCallbackEXT_request(object &data);
VkBool32 handle_PFN_vkDebugReportCallbackEXT_response(object& data, 
    VkDebugReportFlagsEXT                       flags,
    VkDebugReportObjectTypeEXT                  objectType,
    uint64_t                                    object,
    size_t                                      location,
    int32_t                                     messageCode,
    const char*                                 pLayerPrefix,
    const char*                                 pMessage,
    void*                                       pUserData);
PFN_vkDebugReportCallbackEXT deserialize_PFN_vkDebugReportCallbackEXT(object &name);
object serialize_PFN_vkDebugUtilsMessengerCallbackEXT(PFN_vkDebugUtilsMessengerCallbackEXT name);
void handle_PFN_vkDebugUtilsMessengerCallbackEXT_request(object &data);
VkBool32 handle_PFN_vkDebugUtilsMessengerCallbackEXT_response(object& data, 
    VkDebugUtilsMessageSeverityFlagBitsEXT           messageSeverity,
    VkDebugUtilsMessageTypeFlagsEXT                  messageTypes,
    const VkDebugUtilsMessengerCallbackDataEXT*      pCallbackData,
    void*                                            pUserData);
PFN_vkDebugUtilsMessengerCallbackEXT deserialize_PFN_vkDebugUtilsMessengerCallbackEXT(object &name);
object serialize_PFN_vkDeviceMemoryReportCallbackEXT(PFN_vkDeviceMemoryReportCallbackEXT name);
void handle_PFN_vkDeviceMemoryReportCallbackEXT_request(object &data);
void handle_PFN_vkDeviceMemoryReportCallbackEXT_response(object& data, 
    const VkDeviceMemoryReportCallbackDataEXT*  pCallbackData,
    void*                                       pUserData);
PFN_vkDeviceMemoryReportCallbackEXT deserialize_PFN_vkDeviceMemoryReportCallbackEXT(object &name);
object serialize_PFN_vkGetInstanceProcAddrLUNARG(PFN_vkGetInstanceProcAddrLUNARG name);
PFN_vkGetInstanceProcAddrLUNARG deserialize_PFN_vkGetInstanceProcAddrLUNARG(object &name);
object serialize_VkInstance(VkInstance data);
VkInstance deserialize_VkInstance(object& data);
object serialize_VkPhysicalDevice(VkPhysicalDevice data);
VkPhysicalDevice deserialize_VkPhysicalDevice(object& data);
object serialize_VkDevice(VkDevice data);
VkDevice deserialize_VkDevice(object& data);
object serialize_VkQueue(VkQueue data);
VkQueue deserialize_VkQueue(object& data);
object serialize_VkCommandBuffer(VkCommandBuffer data);
VkCommandBuffer deserialize_VkCommandBuffer(object& data);
object serialize_VkDeviceMemory(VkDeviceMemory data);
VkDeviceMemory deserialize_VkDeviceMemory(object& data);
object serialize_VkCommandPool(VkCommandPool data);
VkCommandPool deserialize_VkCommandPool(object& data);
object serialize_VkBuffer(VkBuffer data);
VkBuffer deserialize_VkBuffer(object& data);
object serialize_VkBufferView(VkBufferView data);
VkBufferView deserialize_VkBufferView(object& data);
object serialize_VkImage(VkImage data);
VkImage deserialize_VkImage(object& data);
object serialize_VkImageView(VkImageView data);
VkImageView deserialize_VkImageView(object& data);
object serialize_VkShaderModule(VkShaderModule data);
VkShaderModule deserialize_VkShaderModule(object& data);
object serialize_VkPipeline(VkPipeline data);
VkPipeline deserialize_VkPipeline(object& data);
object serialize_VkPipelineLayout(VkPipelineLayout data);
VkPipelineLayout deserialize_VkPipelineLayout(object& data);
object serialize_VkSampler(VkSampler data);
VkSampler deserialize_VkSampler(object& data);
object serialize_VkDescriptorSet(VkDescriptorSet data);
VkDescriptorSet deserialize_VkDescriptorSet(object& data);
object serialize_VkDescriptorSetLayout(VkDescriptorSetLayout data);
VkDescriptorSetLayout deserialize_VkDescriptorSetLayout(object& data);
object serialize_VkDescriptorPool(VkDescriptorPool data);
VkDescriptorPool deserialize_VkDescriptorPool(object& data);
object serialize_VkFence(VkFence data);
VkFence deserialize_VkFence(object& data);
object serialize_VkSemaphore(VkSemaphore data);
VkSemaphore deserialize_VkSemaphore(object& data);
object serialize_VkEvent(VkEvent data);
VkEvent deserialize_VkEvent(object& data);
object serialize_VkQueryPool(VkQueryPool data);
VkQueryPool deserialize_VkQueryPool(object& data);
object serialize_VkFramebuffer(VkFramebuffer data);
VkFramebuffer deserialize_VkFramebuffer(object& data);
object serialize_VkRenderPass(VkRenderPass data);
VkRenderPass deserialize_VkRenderPass(object& data);
object serialize_VkPipelineCache(VkPipelineCache data);
VkPipelineCache deserialize_VkPipelineCache(object& data);
object serialize_VkIndirectCommandsLayoutNV(VkIndirectCommandsLayoutNV data);
VkIndirectCommandsLayoutNV deserialize_VkIndirectCommandsLayoutNV(object& data);
object serialize_VkDescriptorUpdateTemplate(VkDescriptorUpdateTemplate data);
VkDescriptorUpdateTemplate deserialize_VkDescriptorUpdateTemplate(object& data);
object serialize_VkDescriptorUpdateTemplateKHR(VkDescriptorUpdateTemplateKHR data);
VkDescriptorUpdateTemplateKHR deserialize_VkDescriptorUpdateTemplateKHR(object& data);
object serialize_VkSamplerYcbcrConversion(VkSamplerYcbcrConversion data);
VkSamplerYcbcrConversion deserialize_VkSamplerYcbcrConversion(object& data);
object serialize_VkSamplerYcbcrConversionKHR(VkSamplerYcbcrConversionKHR data);
VkSamplerYcbcrConversionKHR deserialize_VkSamplerYcbcrConversionKHR(object& data);
object serialize_VkValidationCacheEXT(VkValidationCacheEXT data);
VkValidationCacheEXT deserialize_VkValidationCacheEXT(object& data);
object serialize_VkAccelerationStructureKHR(VkAccelerationStructureKHR data);
VkAccelerationStructureKHR deserialize_VkAccelerationStructureKHR(object& data);
object serialize_VkAccelerationStructureNV(VkAccelerationStructureNV data);
VkAccelerationStructureNV deserialize_VkAccelerationStructureNV(object& data);
object serialize_VkPerformanceConfigurationINTEL(VkPerformanceConfigurationINTEL data);
VkPerformanceConfigurationINTEL deserialize_VkPerformanceConfigurationINTEL(object& data);
object serialize_VkDeferredOperationKHR(VkDeferredOperationKHR data);
VkDeferredOperationKHR deserialize_VkDeferredOperationKHR(object& data);
object serialize_VkPrivateDataSlot(VkPrivateDataSlot data);
VkPrivateDataSlot deserialize_VkPrivateDataSlot(object& data);
object serialize_VkPrivateDataSlotEXT(VkPrivateDataSlotEXT data);
VkPrivateDataSlotEXT deserialize_VkPrivateDataSlotEXT(object& data);
object serialize_VkCuModuleNVX(VkCuModuleNVX data);
VkCuModuleNVX deserialize_VkCuModuleNVX(object& data);
object serialize_VkCuFunctionNVX(VkCuFunctionNVX data);
VkCuFunctionNVX deserialize_VkCuFunctionNVX(object& data);
object serialize_VkOpticalFlowSessionNV(VkOpticalFlowSessionNV data);
VkOpticalFlowSessionNV deserialize_VkOpticalFlowSessionNV(object& data);
object serialize_VkMicromapEXT(VkMicromapEXT data);
VkMicromapEXT deserialize_VkMicromapEXT(object& data);
object serialize_VkShaderEXT(VkShaderEXT data);
VkShaderEXT deserialize_VkShaderEXT(object& data);
object serialize_VkDisplayKHR(VkDisplayKHR data);
VkDisplayKHR deserialize_VkDisplayKHR(object& data);
object serialize_VkDisplayModeKHR(VkDisplayModeKHR data);
VkDisplayModeKHR deserialize_VkDisplayModeKHR(object& data);
object serialize_VkSurfaceKHR(VkSurfaceKHR data);
VkSurfaceKHR deserialize_VkSurfaceKHR(object& data);
object serialize_VkSwapchainKHR(VkSwapchainKHR data);
VkSwapchainKHR deserialize_VkSwapchainKHR(object& data);
object serialize_VkDebugReportCallbackEXT(VkDebugReportCallbackEXT data);
VkDebugReportCallbackEXT deserialize_VkDebugReportCallbackEXT(object& data);
object serialize_VkDebugUtilsMessengerEXT(VkDebugUtilsMessengerEXT data);
VkDebugUtilsMessengerEXT deserialize_VkDebugUtilsMessengerEXT(object& data);
object serialize_VkVideoSessionKHR(VkVideoSessionKHR data);
VkVideoSessionKHR deserialize_VkVideoSessionKHR(object& data);
object serialize_VkVideoSessionParametersKHR(VkVideoSessionParametersKHR data);
VkVideoSessionParametersKHR deserialize_VkVideoSessionParametersKHR(object& data);
