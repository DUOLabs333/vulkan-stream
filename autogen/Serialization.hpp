#include <vulkan/vulkan.h>

typedef struct StreamStructure{
    VkStructureType sType;
    const void* pNext;
} StreamStructure;

#include <debug.hpp>
typedef void* pNext;
void* memdup(const void* mem, size_t size);
void* copyVkStruct (const void* data);

        void serialize_struct(VkBaseOutStructure::Builder&, VkBaseOutStructure);
        VkBaseOutStructure deserialize_struct(VkBaseOutStructure::Reader&);
    

        void serialize_struct(VkBaseInStructure::Builder&, VkBaseInStructure);
        VkBaseInStructure deserialize_struct(VkBaseInStructure::Reader&);
    

        void serialize_struct(VkOffset2D::Builder&, VkOffset2D);
        VkOffset2D deserialize_struct(VkOffset2D::Reader&);
    

        void serialize_struct(VkOffset3D::Builder&, VkOffset3D);
        VkOffset3D deserialize_struct(VkOffset3D::Reader&);
    

        void serialize_struct(VkExtent2D::Builder&, VkExtent2D);
        VkExtent2D deserialize_struct(VkExtent2D::Reader&);
    

        void serialize_struct(VkExtent3D::Builder&, VkExtent3D);
        VkExtent3D deserialize_struct(VkExtent3D::Reader&);
    

        void serialize_struct(VkViewport::Builder&, VkViewport);
        VkViewport deserialize_struct(VkViewport::Reader&);
    

        void serialize_struct(VkRect2D::Builder&, VkRect2D);
        VkRect2D deserialize_struct(VkRect2D::Reader&);
    

        void serialize_struct(VkClearRect::Builder&, VkClearRect);
        VkClearRect deserialize_struct(VkClearRect::Reader&);
    

        void serialize_struct(VkComponentMapping::Builder&, VkComponentMapping);
        VkComponentMapping deserialize_struct(VkComponentMapping::Reader&);
    

        void serialize_struct(VkPhysicalDeviceProperties::Builder&, VkPhysicalDeviceProperties);
        VkPhysicalDeviceProperties deserialize_struct(VkPhysicalDeviceProperties::Reader&);
    

        void serialize_struct(VkExtensionProperties::Builder&, VkExtensionProperties);
        VkExtensionProperties deserialize_struct(VkExtensionProperties::Reader&);
    

        void serialize_struct(VkLayerProperties::Builder&, VkLayerProperties);
        VkLayerProperties deserialize_struct(VkLayerProperties::Reader&);
    

        void serialize_struct(VkApplicationInfo::Builder&, VkApplicationInfo);
        VkApplicationInfo deserialize_struct(VkApplicationInfo::Reader&);
    

        void serialize_struct(VkAllocationCallbacks::Builder&, VkAllocationCallbacks);
        VkAllocationCallbacks deserialize_struct(VkAllocationCallbacks::Reader&);
    

        void serialize_struct(VkDeviceQueueCreateInfo::Builder&, VkDeviceQueueCreateInfo);
        VkDeviceQueueCreateInfo deserialize_struct(VkDeviceQueueCreateInfo::Reader&);
    

        void serialize_struct(VkDeviceCreateInfo::Builder&, VkDeviceCreateInfo);
        VkDeviceCreateInfo deserialize_struct(VkDeviceCreateInfo::Reader&);
    

        void serialize_struct(VkInstanceCreateInfo::Builder&, VkInstanceCreateInfo);
        VkInstanceCreateInfo deserialize_struct(VkInstanceCreateInfo::Reader&);
    

        void serialize_struct(VkQueueFamilyProperties::Builder&, VkQueueFamilyProperties);
        VkQueueFamilyProperties deserialize_struct(VkQueueFamilyProperties::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMemoryProperties::Builder&, VkPhysicalDeviceMemoryProperties);
        VkPhysicalDeviceMemoryProperties deserialize_struct(VkPhysicalDeviceMemoryProperties::Reader&);
    

        void serialize_struct(VkMemoryAllocateInfo::Builder&, VkMemoryAllocateInfo);
        VkMemoryAllocateInfo deserialize_struct(VkMemoryAllocateInfo::Reader&);
    

        void serialize_struct(VkMemoryRequirements::Builder&, VkMemoryRequirements);
        VkMemoryRequirements deserialize_struct(VkMemoryRequirements::Reader&);
    

        void serialize_struct(VkSparseImageFormatProperties::Builder&, VkSparseImageFormatProperties);
        VkSparseImageFormatProperties deserialize_struct(VkSparseImageFormatProperties::Reader&);
    

        void serialize_struct(VkSparseImageMemoryRequirements::Builder&, VkSparseImageMemoryRequirements);
        VkSparseImageMemoryRequirements deserialize_struct(VkSparseImageMemoryRequirements::Reader&);
    

        void serialize_struct(VkMemoryType::Builder&, VkMemoryType);
        VkMemoryType deserialize_struct(VkMemoryType::Reader&);
    

        void serialize_struct(VkMemoryHeap::Builder&, VkMemoryHeap);
        VkMemoryHeap deserialize_struct(VkMemoryHeap::Reader&);
    

        void serialize_struct(VkMappedMemoryRange::Builder&, VkMappedMemoryRange);
        VkMappedMemoryRange deserialize_struct(VkMappedMemoryRange::Reader&);
    

        void serialize_struct(VkFormatProperties::Builder&, VkFormatProperties);
        VkFormatProperties deserialize_struct(VkFormatProperties::Reader&);
    

        void serialize_struct(VkImageFormatProperties::Builder&, VkImageFormatProperties);
        VkImageFormatProperties deserialize_struct(VkImageFormatProperties::Reader&);
    

        void serialize_struct(VkDescriptorBufferInfo::Builder&, VkDescriptorBufferInfo);
        VkDescriptorBufferInfo deserialize_struct(VkDescriptorBufferInfo::Reader&);
    

        void serialize_struct(VkDescriptorImageInfo::Builder&, VkDescriptorImageInfo);
        VkDescriptorImageInfo deserialize_struct(VkDescriptorImageInfo::Reader&);
    

        void serialize_struct(VkWriteDescriptorSet::Builder&, VkWriteDescriptorSet);
        VkWriteDescriptorSet deserialize_struct(VkWriteDescriptorSet::Reader&);
    

        void serialize_struct(VkCopyDescriptorSet::Builder&, VkCopyDescriptorSet);
        VkCopyDescriptorSet deserialize_struct(VkCopyDescriptorSet::Reader&);
    

        void serialize_struct(VkBufferUsageFlags2CreateInfoKHR::Builder&, VkBufferUsageFlags2CreateInfoKHR);
        VkBufferUsageFlags2CreateInfoKHR deserialize_struct(VkBufferUsageFlags2CreateInfoKHR::Reader&);
    

        void serialize_struct(VkBufferCreateInfo::Builder&, VkBufferCreateInfo);
        VkBufferCreateInfo deserialize_struct(VkBufferCreateInfo::Reader&);
    

        void serialize_struct(VkBufferViewCreateInfo::Builder&, VkBufferViewCreateInfo);
        VkBufferViewCreateInfo deserialize_struct(VkBufferViewCreateInfo::Reader&);
    

        void serialize_struct(VkImageSubresource::Builder&, VkImageSubresource);
        VkImageSubresource deserialize_struct(VkImageSubresource::Reader&);
    

        void serialize_struct(VkImageSubresourceLayers::Builder&, VkImageSubresourceLayers);
        VkImageSubresourceLayers deserialize_struct(VkImageSubresourceLayers::Reader&);
    

        void serialize_struct(VkImageSubresourceRange::Builder&, VkImageSubresourceRange);
        VkImageSubresourceRange deserialize_struct(VkImageSubresourceRange::Reader&);
    

        void serialize_struct(VkMemoryBarrier::Builder&, VkMemoryBarrier);
        VkMemoryBarrier deserialize_struct(VkMemoryBarrier::Reader&);
    

        void serialize_struct(VkBufferMemoryBarrier::Builder&, VkBufferMemoryBarrier);
        VkBufferMemoryBarrier deserialize_struct(VkBufferMemoryBarrier::Reader&);
    

        void serialize_struct(VkImageMemoryBarrier::Builder&, VkImageMemoryBarrier);
        VkImageMemoryBarrier deserialize_struct(VkImageMemoryBarrier::Reader&);
    

        void serialize_struct(VkImageCreateInfo::Builder&, VkImageCreateInfo);
        VkImageCreateInfo deserialize_struct(VkImageCreateInfo::Reader&);
    

        void serialize_struct(VkSubresourceLayout::Builder&, VkSubresourceLayout);
        VkSubresourceLayout deserialize_struct(VkSubresourceLayout::Reader&);
    

        void serialize_struct(VkImageViewCreateInfo::Builder&, VkImageViewCreateInfo);
        VkImageViewCreateInfo deserialize_struct(VkImageViewCreateInfo::Reader&);
    

        void serialize_struct(VkBufferCopy::Builder&, VkBufferCopy);
        VkBufferCopy deserialize_struct(VkBufferCopy::Reader&);
    

        void serialize_struct(VkSparseMemoryBind::Builder&, VkSparseMemoryBind);
        VkSparseMemoryBind deserialize_struct(VkSparseMemoryBind::Reader&);
    

        void serialize_struct(VkSparseImageMemoryBind::Builder&, VkSparseImageMemoryBind);
        VkSparseImageMemoryBind deserialize_struct(VkSparseImageMemoryBind::Reader&);
    

        void serialize_struct(VkSparseBufferMemoryBindInfo::Builder&, VkSparseBufferMemoryBindInfo);
        VkSparseBufferMemoryBindInfo deserialize_struct(VkSparseBufferMemoryBindInfo::Reader&);
    

        void serialize_struct(VkSparseImageOpaqueMemoryBindInfo::Builder&, VkSparseImageOpaqueMemoryBindInfo);
        VkSparseImageOpaqueMemoryBindInfo deserialize_struct(VkSparseImageOpaqueMemoryBindInfo::Reader&);
    

        void serialize_struct(VkSparseImageMemoryBindInfo::Builder&, VkSparseImageMemoryBindInfo);
        VkSparseImageMemoryBindInfo deserialize_struct(VkSparseImageMemoryBindInfo::Reader&);
    

        void serialize_struct(VkBindSparseInfo::Builder&, VkBindSparseInfo);
        VkBindSparseInfo deserialize_struct(VkBindSparseInfo::Reader&);
    

        void serialize_struct(VkImageCopy::Builder&, VkImageCopy);
        VkImageCopy deserialize_struct(VkImageCopy::Reader&);
    

        void serialize_struct(VkImageBlit::Builder&, VkImageBlit);
        VkImageBlit deserialize_struct(VkImageBlit::Reader&);
    

        void serialize_struct(VkBufferImageCopy::Builder&, VkBufferImageCopy);
        VkBufferImageCopy deserialize_struct(VkBufferImageCopy::Reader&);
    

        void serialize_struct(VkCopyMemoryIndirectCommandNV::Builder&, VkCopyMemoryIndirectCommandNV);
        VkCopyMemoryIndirectCommandNV deserialize_struct(VkCopyMemoryIndirectCommandNV::Reader&);
    

        void serialize_struct(VkCopyMemoryToImageIndirectCommandNV::Builder&, VkCopyMemoryToImageIndirectCommandNV);
        VkCopyMemoryToImageIndirectCommandNV deserialize_struct(VkCopyMemoryToImageIndirectCommandNV::Reader&);
    

        void serialize_struct(VkImageResolve::Builder&, VkImageResolve);
        VkImageResolve deserialize_struct(VkImageResolve::Reader&);
    

        void serialize_struct(VkShaderModuleCreateInfo::Builder&, VkShaderModuleCreateInfo);
        VkShaderModuleCreateInfo deserialize_struct(VkShaderModuleCreateInfo::Reader&);
    

        void serialize_struct(VkDescriptorSetLayoutBinding::Builder&, VkDescriptorSetLayoutBinding);
        VkDescriptorSetLayoutBinding deserialize_struct(VkDescriptorSetLayoutBinding::Reader&);
    

        void serialize_struct(VkDescriptorSetLayoutCreateInfo::Builder&, VkDescriptorSetLayoutCreateInfo);
        VkDescriptorSetLayoutCreateInfo deserialize_struct(VkDescriptorSetLayoutCreateInfo::Reader&);
    

        void serialize_struct(VkDescriptorPoolSize::Builder&, VkDescriptorPoolSize);
        VkDescriptorPoolSize deserialize_struct(VkDescriptorPoolSize::Reader&);
    

        void serialize_struct(VkDescriptorPoolCreateInfo::Builder&, VkDescriptorPoolCreateInfo);
        VkDescriptorPoolCreateInfo deserialize_struct(VkDescriptorPoolCreateInfo::Reader&);
    

        void serialize_struct(VkDescriptorSetAllocateInfo::Builder&, VkDescriptorSetAllocateInfo);
        VkDescriptorSetAllocateInfo deserialize_struct(VkDescriptorSetAllocateInfo::Reader&);
    

        void serialize_struct(VkSpecializationMapEntry::Builder&, VkSpecializationMapEntry);
        VkSpecializationMapEntry deserialize_struct(VkSpecializationMapEntry::Reader&);
    

        void serialize_struct(VkSpecializationInfo::Builder&, VkSpecializationInfo);
        VkSpecializationInfo deserialize_struct(VkSpecializationInfo::Reader&);
    

        void serialize_struct(VkPipelineShaderStageCreateInfo::Builder&, VkPipelineShaderStageCreateInfo);
        VkPipelineShaderStageCreateInfo deserialize_struct(VkPipelineShaderStageCreateInfo::Reader&);
    

        void serialize_struct(VkComputePipelineCreateInfo::Builder&, VkComputePipelineCreateInfo);
        VkComputePipelineCreateInfo deserialize_struct(VkComputePipelineCreateInfo::Reader&);
    

        void serialize_struct(VkComputePipelineIndirectBufferInfoNV::Builder&, VkComputePipelineIndirectBufferInfoNV);
        VkComputePipelineIndirectBufferInfoNV deserialize_struct(VkComputePipelineIndirectBufferInfoNV::Reader&);
    

        void serialize_struct(VkPipelineCreateFlags2CreateInfoKHR::Builder&, VkPipelineCreateFlags2CreateInfoKHR);
        VkPipelineCreateFlags2CreateInfoKHR deserialize_struct(VkPipelineCreateFlags2CreateInfoKHR::Reader&);
    

        void serialize_struct(VkVertexInputBindingDescription::Builder&, VkVertexInputBindingDescription);
        VkVertexInputBindingDescription deserialize_struct(VkVertexInputBindingDescription::Reader&);
    

        void serialize_struct(VkVertexInputAttributeDescription::Builder&, VkVertexInputAttributeDescription);
        VkVertexInputAttributeDescription deserialize_struct(VkVertexInputAttributeDescription::Reader&);
    

        void serialize_struct(VkPipelineVertexInputStateCreateInfo::Builder&, VkPipelineVertexInputStateCreateInfo);
        VkPipelineVertexInputStateCreateInfo deserialize_struct(VkPipelineVertexInputStateCreateInfo::Reader&);
    

        void serialize_struct(VkPipelineInputAssemblyStateCreateInfo::Builder&, VkPipelineInputAssemblyStateCreateInfo);
        VkPipelineInputAssemblyStateCreateInfo deserialize_struct(VkPipelineInputAssemblyStateCreateInfo::Reader&);
    

        void serialize_struct(VkPipelineTessellationStateCreateInfo::Builder&, VkPipelineTessellationStateCreateInfo);
        VkPipelineTessellationStateCreateInfo deserialize_struct(VkPipelineTessellationStateCreateInfo::Reader&);
    

        void serialize_struct(VkPipelineViewportStateCreateInfo::Builder&, VkPipelineViewportStateCreateInfo);
        VkPipelineViewportStateCreateInfo deserialize_struct(VkPipelineViewportStateCreateInfo::Reader&);
    

        void serialize_struct(VkPipelineRasterizationStateCreateInfo::Builder&, VkPipelineRasterizationStateCreateInfo);
        VkPipelineRasterizationStateCreateInfo deserialize_struct(VkPipelineRasterizationStateCreateInfo::Reader&);
    

        void serialize_struct(VkPipelineMultisampleStateCreateInfo::Builder&, VkPipelineMultisampleStateCreateInfo);
        VkPipelineMultisampleStateCreateInfo deserialize_struct(VkPipelineMultisampleStateCreateInfo::Reader&);
    

        void serialize_struct(VkPipelineColorBlendAttachmentState::Builder&, VkPipelineColorBlendAttachmentState);
        VkPipelineColorBlendAttachmentState deserialize_struct(VkPipelineColorBlendAttachmentState::Reader&);
    

        void serialize_struct(VkPipelineColorBlendStateCreateInfo::Builder&, VkPipelineColorBlendStateCreateInfo);
        VkPipelineColorBlendStateCreateInfo deserialize_struct(VkPipelineColorBlendStateCreateInfo::Reader&);
    

        void serialize_struct(VkPipelineDynamicStateCreateInfo::Builder&, VkPipelineDynamicStateCreateInfo);
        VkPipelineDynamicStateCreateInfo deserialize_struct(VkPipelineDynamicStateCreateInfo::Reader&);
    

        void serialize_struct(VkStencilOpState::Builder&, VkStencilOpState);
        VkStencilOpState deserialize_struct(VkStencilOpState::Reader&);
    

        void serialize_struct(VkPipelineDepthStencilStateCreateInfo::Builder&, VkPipelineDepthStencilStateCreateInfo);
        VkPipelineDepthStencilStateCreateInfo deserialize_struct(VkPipelineDepthStencilStateCreateInfo::Reader&);
    

        void serialize_struct(VkGraphicsPipelineCreateInfo::Builder&, VkGraphicsPipelineCreateInfo);
        VkGraphicsPipelineCreateInfo deserialize_struct(VkGraphicsPipelineCreateInfo::Reader&);
    

        void serialize_struct(VkPipelineCacheCreateInfo::Builder&, VkPipelineCacheCreateInfo);
        VkPipelineCacheCreateInfo deserialize_struct(VkPipelineCacheCreateInfo::Reader&);
    

        void serialize_struct(VkPipelineCacheHeaderVersionOne::Builder&, VkPipelineCacheHeaderVersionOne);
        VkPipelineCacheHeaderVersionOne deserialize_struct(VkPipelineCacheHeaderVersionOne::Reader&);
    

        void serialize_struct(VkPushConstantRange::Builder&, VkPushConstantRange);
        VkPushConstantRange deserialize_struct(VkPushConstantRange::Reader&);
    

        void serialize_struct(VkPipelineLayoutCreateInfo::Builder&, VkPipelineLayoutCreateInfo);
        VkPipelineLayoutCreateInfo deserialize_struct(VkPipelineLayoutCreateInfo::Reader&);
    

        void serialize_struct(VkSamplerCreateInfo::Builder&, VkSamplerCreateInfo);
        VkSamplerCreateInfo deserialize_struct(VkSamplerCreateInfo::Reader&);
    

        void serialize_struct(VkCommandPoolCreateInfo::Builder&, VkCommandPoolCreateInfo);
        VkCommandPoolCreateInfo deserialize_struct(VkCommandPoolCreateInfo::Reader&);
    

        void serialize_struct(VkCommandBufferAllocateInfo::Builder&, VkCommandBufferAllocateInfo);
        VkCommandBufferAllocateInfo deserialize_struct(VkCommandBufferAllocateInfo::Reader&);
    

        void serialize_struct(VkCommandBufferInheritanceInfo::Builder&, VkCommandBufferInheritanceInfo);
        VkCommandBufferInheritanceInfo deserialize_struct(VkCommandBufferInheritanceInfo::Reader&);
    

        void serialize_struct(VkCommandBufferBeginInfo::Builder&, VkCommandBufferBeginInfo);
        VkCommandBufferBeginInfo deserialize_struct(VkCommandBufferBeginInfo::Reader&);
    

        void serialize_struct(VkRenderPassBeginInfo::Builder&, VkRenderPassBeginInfo);
        VkRenderPassBeginInfo deserialize_struct(VkRenderPassBeginInfo::Reader&);
    

        void serialize_struct(VkClearColorValue::Builder&, VkClearColorValue);
        VkClearColorValue deserialize_struct(VkClearColorValue::Reader&);
    

        void serialize_struct(VkClearDepthStencilValue::Builder&, VkClearDepthStencilValue);
        VkClearDepthStencilValue deserialize_struct(VkClearDepthStencilValue::Reader&);
    

        void serialize_struct(VkClearValue::Builder&, VkClearValue);
        VkClearValue deserialize_struct(VkClearValue::Reader&);
    

        void serialize_struct(VkClearAttachment::Builder&, VkClearAttachment);
        VkClearAttachment deserialize_struct(VkClearAttachment::Reader&);
    

        void serialize_struct(VkAttachmentDescription::Builder&, VkAttachmentDescription);
        VkAttachmentDescription deserialize_struct(VkAttachmentDescription::Reader&);
    

        void serialize_struct(VkAttachmentReference::Builder&, VkAttachmentReference);
        VkAttachmentReference deserialize_struct(VkAttachmentReference::Reader&);
    

        void serialize_struct(VkSubpassDescription::Builder&, VkSubpassDescription);
        VkSubpassDescription deserialize_struct(VkSubpassDescription::Reader&);
    

        void serialize_struct(VkSubpassDependency::Builder&, VkSubpassDependency);
        VkSubpassDependency deserialize_struct(VkSubpassDependency::Reader&);
    

        void serialize_struct(VkRenderPassCreateInfo::Builder&, VkRenderPassCreateInfo);
        VkRenderPassCreateInfo deserialize_struct(VkRenderPassCreateInfo::Reader&);
    

        void serialize_struct(VkEventCreateInfo::Builder&, VkEventCreateInfo);
        VkEventCreateInfo deserialize_struct(VkEventCreateInfo::Reader&);
    

        void serialize_struct(VkFenceCreateInfo::Builder&, VkFenceCreateInfo);
        VkFenceCreateInfo deserialize_struct(VkFenceCreateInfo::Reader&);
    

        void serialize_struct(VkPhysicalDeviceFeatures::Builder&, VkPhysicalDeviceFeatures);
        VkPhysicalDeviceFeatures deserialize_struct(VkPhysicalDeviceFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceSparseProperties::Builder&, VkPhysicalDeviceSparseProperties);
        VkPhysicalDeviceSparseProperties deserialize_struct(VkPhysicalDeviceSparseProperties::Reader&);
    

        void serialize_struct(VkPhysicalDeviceLimits::Builder&, VkPhysicalDeviceLimits);
        VkPhysicalDeviceLimits deserialize_struct(VkPhysicalDeviceLimits::Reader&);
    

        void serialize_struct(VkSemaphoreCreateInfo::Builder&, VkSemaphoreCreateInfo);
        VkSemaphoreCreateInfo deserialize_struct(VkSemaphoreCreateInfo::Reader&);
    

        void serialize_struct(VkQueryPoolCreateInfo::Builder&, VkQueryPoolCreateInfo);
        VkQueryPoolCreateInfo deserialize_struct(VkQueryPoolCreateInfo::Reader&);
    

        void serialize_struct(VkFramebufferCreateInfo::Builder&, VkFramebufferCreateInfo);
        VkFramebufferCreateInfo deserialize_struct(VkFramebufferCreateInfo::Reader&);
    

        void serialize_struct(VkDrawIndirectCommand::Builder&, VkDrawIndirectCommand);
        VkDrawIndirectCommand deserialize_struct(VkDrawIndirectCommand::Reader&);
    

        void serialize_struct(VkDrawIndexedIndirectCommand::Builder&, VkDrawIndexedIndirectCommand);
        VkDrawIndexedIndirectCommand deserialize_struct(VkDrawIndexedIndirectCommand::Reader&);
    

        void serialize_struct(VkDispatchIndirectCommand::Builder&, VkDispatchIndirectCommand);
        VkDispatchIndirectCommand deserialize_struct(VkDispatchIndirectCommand::Reader&);
    

        void serialize_struct(VkMultiDrawInfoEXT::Builder&, VkMultiDrawInfoEXT);
        VkMultiDrawInfoEXT deserialize_struct(VkMultiDrawInfoEXT::Reader&);
    

        void serialize_struct(VkMultiDrawIndexedInfoEXT::Builder&, VkMultiDrawIndexedInfoEXT);
        VkMultiDrawIndexedInfoEXT deserialize_struct(VkMultiDrawIndexedInfoEXT::Reader&);
    

        void serialize_struct(VkSubmitInfo::Builder&, VkSubmitInfo);
        VkSubmitInfo deserialize_struct(VkSubmitInfo::Reader&);
    

        void serialize_struct(VkDisplayPropertiesKHR::Builder&, VkDisplayPropertiesKHR);
        VkDisplayPropertiesKHR deserialize_struct(VkDisplayPropertiesKHR::Reader&);
    

        void serialize_struct(VkDisplayPlanePropertiesKHR::Builder&, VkDisplayPlanePropertiesKHR);
        VkDisplayPlanePropertiesKHR deserialize_struct(VkDisplayPlanePropertiesKHR::Reader&);
    

        void serialize_struct(VkDisplayModeParametersKHR::Builder&, VkDisplayModeParametersKHR);
        VkDisplayModeParametersKHR deserialize_struct(VkDisplayModeParametersKHR::Reader&);
    

        void serialize_struct(VkDisplayModePropertiesKHR::Builder&, VkDisplayModePropertiesKHR);
        VkDisplayModePropertiesKHR deserialize_struct(VkDisplayModePropertiesKHR::Reader&);
    

        void serialize_struct(VkDisplayModeCreateInfoKHR::Builder&, VkDisplayModeCreateInfoKHR);
        VkDisplayModeCreateInfoKHR deserialize_struct(VkDisplayModeCreateInfoKHR::Reader&);
    

        void serialize_struct(VkDisplayPlaneCapabilitiesKHR::Builder&, VkDisplayPlaneCapabilitiesKHR);
        VkDisplayPlaneCapabilitiesKHR deserialize_struct(VkDisplayPlaneCapabilitiesKHR::Reader&);
    

        void serialize_struct(VkDisplaySurfaceCreateInfoKHR::Builder&, VkDisplaySurfaceCreateInfoKHR);
        VkDisplaySurfaceCreateInfoKHR deserialize_struct(VkDisplaySurfaceCreateInfoKHR::Reader&);
    

        void serialize_struct(VkDisplayPresentInfoKHR::Builder&, VkDisplayPresentInfoKHR);
        VkDisplayPresentInfoKHR deserialize_struct(VkDisplayPresentInfoKHR::Reader&);
    

        void serialize_struct(VkSurfaceCapabilitiesKHR::Builder&, VkSurfaceCapabilitiesKHR);
        VkSurfaceCapabilitiesKHR deserialize_struct(VkSurfaceCapabilitiesKHR::Reader&);
    

        void serialize_struct(VkXlibSurfaceCreateInfoKHR::Builder&, VkXlibSurfaceCreateInfoKHR);
        VkXlibSurfaceCreateInfoKHR deserialize_struct(VkXlibSurfaceCreateInfoKHR::Reader&);
    

        void serialize_struct(VkXcbSurfaceCreateInfoKHR::Builder&, VkXcbSurfaceCreateInfoKHR);
        VkXcbSurfaceCreateInfoKHR deserialize_struct(VkXcbSurfaceCreateInfoKHR::Reader&);
    

        void serialize_struct(VkSurfaceFormatKHR::Builder&, VkSurfaceFormatKHR);
        VkSurfaceFormatKHR deserialize_struct(VkSurfaceFormatKHR::Reader&);
    

        void serialize_struct(VkSwapchainCreateInfoKHR::Builder&, VkSwapchainCreateInfoKHR);
        VkSwapchainCreateInfoKHR deserialize_struct(VkSwapchainCreateInfoKHR::Reader&);
    

        void serialize_struct(VkPresentInfoKHR::Builder&, VkPresentInfoKHR);
        VkPresentInfoKHR deserialize_struct(VkPresentInfoKHR::Reader&);
    

        void serialize_struct(VkDebugReportCallbackCreateInfoEXT::Builder&, VkDebugReportCallbackCreateInfoEXT);
        VkDebugReportCallbackCreateInfoEXT deserialize_struct(VkDebugReportCallbackCreateInfoEXT::Reader&);
    

        void serialize_struct(VkValidationFlagsEXT::Builder&, VkValidationFlagsEXT);
        VkValidationFlagsEXT deserialize_struct(VkValidationFlagsEXT::Reader&);
    

        void serialize_struct(VkValidationFeaturesEXT::Builder&, VkValidationFeaturesEXT);
        VkValidationFeaturesEXT deserialize_struct(VkValidationFeaturesEXT::Reader&);
    

        void serialize_struct(VkPipelineRasterizationStateRasterizationOrderAMD::Builder&, VkPipelineRasterizationStateRasterizationOrderAMD);
        VkPipelineRasterizationStateRasterizationOrderAMD deserialize_struct(VkPipelineRasterizationStateRasterizationOrderAMD::Reader&);
    

        void serialize_struct(VkDebugMarkerObjectNameInfoEXT::Builder&, VkDebugMarkerObjectNameInfoEXT);
        VkDebugMarkerObjectNameInfoEXT deserialize_struct(VkDebugMarkerObjectNameInfoEXT::Reader&);
    

        void serialize_struct(VkDebugMarkerObjectTagInfoEXT::Builder&, VkDebugMarkerObjectTagInfoEXT);
        VkDebugMarkerObjectTagInfoEXT deserialize_struct(VkDebugMarkerObjectTagInfoEXT::Reader&);
    

        void serialize_struct(VkDebugMarkerMarkerInfoEXT::Builder&, VkDebugMarkerMarkerInfoEXT);
        VkDebugMarkerMarkerInfoEXT deserialize_struct(VkDebugMarkerMarkerInfoEXT::Reader&);
    

        void serialize_struct(VkDedicatedAllocationImageCreateInfoNV::Builder&, VkDedicatedAllocationImageCreateInfoNV);
        VkDedicatedAllocationImageCreateInfoNV deserialize_struct(VkDedicatedAllocationImageCreateInfoNV::Reader&);
    

        void serialize_struct(VkDedicatedAllocationBufferCreateInfoNV::Builder&, VkDedicatedAllocationBufferCreateInfoNV);
        VkDedicatedAllocationBufferCreateInfoNV deserialize_struct(VkDedicatedAllocationBufferCreateInfoNV::Reader&);
    

        void serialize_struct(VkDedicatedAllocationMemoryAllocateInfoNV::Builder&, VkDedicatedAllocationMemoryAllocateInfoNV);
        VkDedicatedAllocationMemoryAllocateInfoNV deserialize_struct(VkDedicatedAllocationMemoryAllocateInfoNV::Reader&);
    

        void serialize_struct(VkExternalImageFormatPropertiesNV::Builder&, VkExternalImageFormatPropertiesNV);
        VkExternalImageFormatPropertiesNV deserialize_struct(VkExternalImageFormatPropertiesNV::Reader&);
    

        void serialize_struct(VkExternalMemoryImageCreateInfoNV::Builder&, VkExternalMemoryImageCreateInfoNV);
        VkExternalMemoryImageCreateInfoNV deserialize_struct(VkExternalMemoryImageCreateInfoNV::Reader&);
    

        void serialize_struct(VkExportMemoryAllocateInfoNV::Builder&, VkExportMemoryAllocateInfoNV);
        VkExportMemoryAllocateInfoNV deserialize_struct(VkExportMemoryAllocateInfoNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV::Builder&, VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV);
        VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV deserialize_struct(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV::Builder&, VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV);
        VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV deserialize_struct(VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV::Reader&);
    

        void serialize_struct(VkDevicePrivateDataCreateInfo::Builder&, VkDevicePrivateDataCreateInfo);
        VkDevicePrivateDataCreateInfo deserialize_struct(VkDevicePrivateDataCreateInfo::Reader&);
    

        void serialize_struct(VkPrivateDataSlotCreateInfo::Builder&, VkPrivateDataSlotCreateInfo);
        VkPrivateDataSlotCreateInfo deserialize_struct(VkPrivateDataSlotCreateInfo::Reader&);
    

        void serialize_struct(VkPhysicalDevicePrivateDataFeatures::Builder&, VkPhysicalDevicePrivateDataFeatures);
        VkPhysicalDevicePrivateDataFeatures deserialize_struct(VkPhysicalDevicePrivateDataFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV::Builder&, VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV);
        VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV deserialize_struct(VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMultiDrawPropertiesEXT::Builder&, VkPhysicalDeviceMultiDrawPropertiesEXT);
        VkPhysicalDeviceMultiDrawPropertiesEXT deserialize_struct(VkPhysicalDeviceMultiDrawPropertiesEXT::Reader&);
    

        void serialize_struct(VkGraphicsShaderGroupCreateInfoNV::Builder&, VkGraphicsShaderGroupCreateInfoNV);
        VkGraphicsShaderGroupCreateInfoNV deserialize_struct(VkGraphicsShaderGroupCreateInfoNV::Reader&);
    

        void serialize_struct(VkGraphicsPipelineShaderGroupsCreateInfoNV::Builder&, VkGraphicsPipelineShaderGroupsCreateInfoNV);
        VkGraphicsPipelineShaderGroupsCreateInfoNV deserialize_struct(VkGraphicsPipelineShaderGroupsCreateInfoNV::Reader&);
    

        void serialize_struct(VkBindShaderGroupIndirectCommandNV::Builder&, VkBindShaderGroupIndirectCommandNV);
        VkBindShaderGroupIndirectCommandNV deserialize_struct(VkBindShaderGroupIndirectCommandNV::Reader&);
    

        void serialize_struct(VkBindIndexBufferIndirectCommandNV::Builder&, VkBindIndexBufferIndirectCommandNV);
        VkBindIndexBufferIndirectCommandNV deserialize_struct(VkBindIndexBufferIndirectCommandNV::Reader&);
    

        void serialize_struct(VkBindVertexBufferIndirectCommandNV::Builder&, VkBindVertexBufferIndirectCommandNV);
        VkBindVertexBufferIndirectCommandNV deserialize_struct(VkBindVertexBufferIndirectCommandNV::Reader&);
    

        void serialize_struct(VkSetStateFlagsIndirectCommandNV::Builder&, VkSetStateFlagsIndirectCommandNV);
        VkSetStateFlagsIndirectCommandNV deserialize_struct(VkSetStateFlagsIndirectCommandNV::Reader&);
    

        void serialize_struct(VkIndirectCommandsStreamNV::Builder&, VkIndirectCommandsStreamNV);
        VkIndirectCommandsStreamNV deserialize_struct(VkIndirectCommandsStreamNV::Reader&);
    

        void serialize_struct(VkIndirectCommandsLayoutTokenNV::Builder&, VkIndirectCommandsLayoutTokenNV);
        VkIndirectCommandsLayoutTokenNV deserialize_struct(VkIndirectCommandsLayoutTokenNV::Reader&);
    

        void serialize_struct(VkIndirectCommandsLayoutCreateInfoNV::Builder&, VkIndirectCommandsLayoutCreateInfoNV);
        VkIndirectCommandsLayoutCreateInfoNV deserialize_struct(VkIndirectCommandsLayoutCreateInfoNV::Reader&);
    

        void serialize_struct(VkGeneratedCommandsInfoNV::Builder&, VkGeneratedCommandsInfoNV);
        VkGeneratedCommandsInfoNV deserialize_struct(VkGeneratedCommandsInfoNV::Reader&);
    

        void serialize_struct(VkGeneratedCommandsMemoryRequirementsInfoNV::Builder&, VkGeneratedCommandsMemoryRequirementsInfoNV);
        VkGeneratedCommandsMemoryRequirementsInfoNV deserialize_struct(VkGeneratedCommandsMemoryRequirementsInfoNV::Reader&);
    

        void serialize_struct(VkPipelineIndirectDeviceAddressInfoNV::Builder&, VkPipelineIndirectDeviceAddressInfoNV);
        VkPipelineIndirectDeviceAddressInfoNV deserialize_struct(VkPipelineIndirectDeviceAddressInfoNV::Reader&);
    

        void serialize_struct(VkBindPipelineIndirectCommandNV::Builder&, VkBindPipelineIndirectCommandNV);
        VkBindPipelineIndirectCommandNV deserialize_struct(VkBindPipelineIndirectCommandNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceFeatures2::Builder&, VkPhysicalDeviceFeatures2);
        VkPhysicalDeviceFeatures2 deserialize_struct(VkPhysicalDeviceFeatures2::Reader&);
    

        void serialize_struct(VkPhysicalDeviceProperties2::Builder&, VkPhysicalDeviceProperties2);
        VkPhysicalDeviceProperties2 deserialize_struct(VkPhysicalDeviceProperties2::Reader&);
    

        void serialize_struct(VkFormatProperties2::Builder&, VkFormatProperties2);
        VkFormatProperties2 deserialize_struct(VkFormatProperties2::Reader&);
    

        void serialize_struct(VkImageFormatProperties2::Builder&, VkImageFormatProperties2);
        VkImageFormatProperties2 deserialize_struct(VkImageFormatProperties2::Reader&);
    

        void serialize_struct(VkPhysicalDeviceImageFormatInfo2::Builder&, VkPhysicalDeviceImageFormatInfo2);
        VkPhysicalDeviceImageFormatInfo2 deserialize_struct(VkPhysicalDeviceImageFormatInfo2::Reader&);
    

        void serialize_struct(VkQueueFamilyProperties2::Builder&, VkQueueFamilyProperties2);
        VkQueueFamilyProperties2 deserialize_struct(VkQueueFamilyProperties2::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMemoryProperties2::Builder&, VkPhysicalDeviceMemoryProperties2);
        VkPhysicalDeviceMemoryProperties2 deserialize_struct(VkPhysicalDeviceMemoryProperties2::Reader&);
    

        void serialize_struct(VkSparseImageFormatProperties2::Builder&, VkSparseImageFormatProperties2);
        VkSparseImageFormatProperties2 deserialize_struct(VkSparseImageFormatProperties2::Reader&);
    

        void serialize_struct(VkPhysicalDeviceSparseImageFormatInfo2::Builder&, VkPhysicalDeviceSparseImageFormatInfo2);
        VkPhysicalDeviceSparseImageFormatInfo2 deserialize_struct(VkPhysicalDeviceSparseImageFormatInfo2::Reader&);
    

        void serialize_struct(VkPhysicalDevicePushDescriptorPropertiesKHR::Builder&, VkPhysicalDevicePushDescriptorPropertiesKHR);
        VkPhysicalDevicePushDescriptorPropertiesKHR deserialize_struct(VkPhysicalDevicePushDescriptorPropertiesKHR::Reader&);
    

        void serialize_struct(VkConformanceVersion::Builder&, VkConformanceVersion);
        VkConformanceVersion deserialize_struct(VkConformanceVersion::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDriverProperties::Builder&, VkPhysicalDeviceDriverProperties);
        VkPhysicalDeviceDriverProperties deserialize_struct(VkPhysicalDeviceDriverProperties::Reader&);
    

        void serialize_struct(VkPresentRegionsKHR::Builder&, VkPresentRegionsKHR);
        VkPresentRegionsKHR deserialize_struct(VkPresentRegionsKHR::Reader&);
    

        void serialize_struct(VkPresentRegionKHR::Builder&, VkPresentRegionKHR);
        VkPresentRegionKHR deserialize_struct(VkPresentRegionKHR::Reader&);
    

        void serialize_struct(VkRectLayerKHR::Builder&, VkRectLayerKHR);
        VkRectLayerKHR deserialize_struct(VkRectLayerKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceVariablePointersFeatures::Builder&, VkPhysicalDeviceVariablePointersFeatures);
        VkPhysicalDeviceVariablePointersFeatures deserialize_struct(VkPhysicalDeviceVariablePointersFeatures::Reader&);
    

        void serialize_struct(VkExternalMemoryProperties::Builder&, VkExternalMemoryProperties);
        VkExternalMemoryProperties deserialize_struct(VkExternalMemoryProperties::Reader&);
    

        void serialize_struct(VkPhysicalDeviceExternalImageFormatInfo::Builder&, VkPhysicalDeviceExternalImageFormatInfo);
        VkPhysicalDeviceExternalImageFormatInfo deserialize_struct(VkPhysicalDeviceExternalImageFormatInfo::Reader&);
    

        void serialize_struct(VkExternalImageFormatProperties::Builder&, VkExternalImageFormatProperties);
        VkExternalImageFormatProperties deserialize_struct(VkExternalImageFormatProperties::Reader&);
    

        void serialize_struct(VkPhysicalDeviceExternalBufferInfo::Builder&, VkPhysicalDeviceExternalBufferInfo);
        VkPhysicalDeviceExternalBufferInfo deserialize_struct(VkPhysicalDeviceExternalBufferInfo::Reader&);
    

        void serialize_struct(VkExternalBufferProperties::Builder&, VkExternalBufferProperties);
        VkExternalBufferProperties deserialize_struct(VkExternalBufferProperties::Reader&);
    

        void serialize_struct(VkPhysicalDeviceIDProperties::Builder&, VkPhysicalDeviceIDProperties);
        VkPhysicalDeviceIDProperties deserialize_struct(VkPhysicalDeviceIDProperties::Reader&);
    

        void serialize_struct(VkExternalMemoryImageCreateInfo::Builder&, VkExternalMemoryImageCreateInfo);
        VkExternalMemoryImageCreateInfo deserialize_struct(VkExternalMemoryImageCreateInfo::Reader&);
    

        void serialize_struct(VkExternalMemoryBufferCreateInfo::Builder&, VkExternalMemoryBufferCreateInfo);
        VkExternalMemoryBufferCreateInfo deserialize_struct(VkExternalMemoryBufferCreateInfo::Reader&);
    

        void serialize_struct(VkExportMemoryAllocateInfo::Builder&, VkExportMemoryAllocateInfo);
        VkExportMemoryAllocateInfo deserialize_struct(VkExportMemoryAllocateInfo::Reader&);
    

        void serialize_struct(VkImportMemoryFdInfoKHR::Builder&, VkImportMemoryFdInfoKHR);
        VkImportMemoryFdInfoKHR deserialize_struct(VkImportMemoryFdInfoKHR::Reader&);
    

        void serialize_struct(VkMemoryFdPropertiesKHR::Builder&, VkMemoryFdPropertiesKHR);
        VkMemoryFdPropertiesKHR deserialize_struct(VkMemoryFdPropertiesKHR::Reader&);
    

        void serialize_struct(VkMemoryGetFdInfoKHR::Builder&, VkMemoryGetFdInfoKHR);
        VkMemoryGetFdInfoKHR deserialize_struct(VkMemoryGetFdInfoKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceExternalSemaphoreInfo::Builder&, VkPhysicalDeviceExternalSemaphoreInfo);
        VkPhysicalDeviceExternalSemaphoreInfo deserialize_struct(VkPhysicalDeviceExternalSemaphoreInfo::Reader&);
    

        void serialize_struct(VkExternalSemaphoreProperties::Builder&, VkExternalSemaphoreProperties);
        VkExternalSemaphoreProperties deserialize_struct(VkExternalSemaphoreProperties::Reader&);
    

        void serialize_struct(VkExportSemaphoreCreateInfo::Builder&, VkExportSemaphoreCreateInfo);
        VkExportSemaphoreCreateInfo deserialize_struct(VkExportSemaphoreCreateInfo::Reader&);
    

        void serialize_struct(VkImportSemaphoreFdInfoKHR::Builder&, VkImportSemaphoreFdInfoKHR);
        VkImportSemaphoreFdInfoKHR deserialize_struct(VkImportSemaphoreFdInfoKHR::Reader&);
    

        void serialize_struct(VkSemaphoreGetFdInfoKHR::Builder&, VkSemaphoreGetFdInfoKHR);
        VkSemaphoreGetFdInfoKHR deserialize_struct(VkSemaphoreGetFdInfoKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceExternalFenceInfo::Builder&, VkPhysicalDeviceExternalFenceInfo);
        VkPhysicalDeviceExternalFenceInfo deserialize_struct(VkPhysicalDeviceExternalFenceInfo::Reader&);
    

        void serialize_struct(VkExternalFenceProperties::Builder&, VkExternalFenceProperties);
        VkExternalFenceProperties deserialize_struct(VkExternalFenceProperties::Reader&);
    

        void serialize_struct(VkExportFenceCreateInfo::Builder&, VkExportFenceCreateInfo);
        VkExportFenceCreateInfo deserialize_struct(VkExportFenceCreateInfo::Reader&);
    

        void serialize_struct(VkImportFenceFdInfoKHR::Builder&, VkImportFenceFdInfoKHR);
        VkImportFenceFdInfoKHR deserialize_struct(VkImportFenceFdInfoKHR::Reader&);
    

        void serialize_struct(VkFenceGetFdInfoKHR::Builder&, VkFenceGetFdInfoKHR);
        VkFenceGetFdInfoKHR deserialize_struct(VkFenceGetFdInfoKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMultiviewFeatures::Builder&, VkPhysicalDeviceMultiviewFeatures);
        VkPhysicalDeviceMultiviewFeatures deserialize_struct(VkPhysicalDeviceMultiviewFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMultiviewProperties::Builder&, VkPhysicalDeviceMultiviewProperties);
        VkPhysicalDeviceMultiviewProperties deserialize_struct(VkPhysicalDeviceMultiviewProperties::Reader&);
    

        void serialize_struct(VkRenderPassMultiviewCreateInfo::Builder&, VkRenderPassMultiviewCreateInfo);
        VkRenderPassMultiviewCreateInfo deserialize_struct(VkRenderPassMultiviewCreateInfo::Reader&);
    

        void serialize_struct(VkSurfaceCapabilities2EXT::Builder&, VkSurfaceCapabilities2EXT);
        VkSurfaceCapabilities2EXT deserialize_struct(VkSurfaceCapabilities2EXT::Reader&);
    

        void serialize_struct(VkDisplayPowerInfoEXT::Builder&, VkDisplayPowerInfoEXT);
        VkDisplayPowerInfoEXT deserialize_struct(VkDisplayPowerInfoEXT::Reader&);
    

        void serialize_struct(VkDeviceEventInfoEXT::Builder&, VkDeviceEventInfoEXT);
        VkDeviceEventInfoEXT deserialize_struct(VkDeviceEventInfoEXT::Reader&);
    

        void serialize_struct(VkDisplayEventInfoEXT::Builder&, VkDisplayEventInfoEXT);
        VkDisplayEventInfoEXT deserialize_struct(VkDisplayEventInfoEXT::Reader&);
    

        void serialize_struct(VkSwapchainCounterCreateInfoEXT::Builder&, VkSwapchainCounterCreateInfoEXT);
        VkSwapchainCounterCreateInfoEXT deserialize_struct(VkSwapchainCounterCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceGroupProperties::Builder&, VkPhysicalDeviceGroupProperties);
        VkPhysicalDeviceGroupProperties deserialize_struct(VkPhysicalDeviceGroupProperties::Reader&);
    

        void serialize_struct(VkMemoryAllocateFlagsInfo::Builder&, VkMemoryAllocateFlagsInfo);
        VkMemoryAllocateFlagsInfo deserialize_struct(VkMemoryAllocateFlagsInfo::Reader&);
    

        void serialize_struct(VkBindBufferMemoryInfo::Builder&, VkBindBufferMemoryInfo);
        VkBindBufferMemoryInfo deserialize_struct(VkBindBufferMemoryInfo::Reader&);
    

        void serialize_struct(VkBindBufferMemoryDeviceGroupInfo::Builder&, VkBindBufferMemoryDeviceGroupInfo);
        VkBindBufferMemoryDeviceGroupInfo deserialize_struct(VkBindBufferMemoryDeviceGroupInfo::Reader&);
    

        void serialize_struct(VkBindImageMemoryInfo::Builder&, VkBindImageMemoryInfo);
        VkBindImageMemoryInfo deserialize_struct(VkBindImageMemoryInfo::Reader&);
    

        void serialize_struct(VkBindImageMemoryDeviceGroupInfo::Builder&, VkBindImageMemoryDeviceGroupInfo);
        VkBindImageMemoryDeviceGroupInfo deserialize_struct(VkBindImageMemoryDeviceGroupInfo::Reader&);
    

        void serialize_struct(VkDeviceGroupRenderPassBeginInfo::Builder&, VkDeviceGroupRenderPassBeginInfo);
        VkDeviceGroupRenderPassBeginInfo deserialize_struct(VkDeviceGroupRenderPassBeginInfo::Reader&);
    

        void serialize_struct(VkDeviceGroupCommandBufferBeginInfo::Builder&, VkDeviceGroupCommandBufferBeginInfo);
        VkDeviceGroupCommandBufferBeginInfo deserialize_struct(VkDeviceGroupCommandBufferBeginInfo::Reader&);
    

        void serialize_struct(VkDeviceGroupSubmitInfo::Builder&, VkDeviceGroupSubmitInfo);
        VkDeviceGroupSubmitInfo deserialize_struct(VkDeviceGroupSubmitInfo::Reader&);
    

        void serialize_struct(VkDeviceGroupBindSparseInfo::Builder&, VkDeviceGroupBindSparseInfo);
        VkDeviceGroupBindSparseInfo deserialize_struct(VkDeviceGroupBindSparseInfo::Reader&);
    

        void serialize_struct(VkDeviceGroupPresentCapabilitiesKHR::Builder&, VkDeviceGroupPresentCapabilitiesKHR);
        VkDeviceGroupPresentCapabilitiesKHR deserialize_struct(VkDeviceGroupPresentCapabilitiesKHR::Reader&);
    

        void serialize_struct(VkImageSwapchainCreateInfoKHR::Builder&, VkImageSwapchainCreateInfoKHR);
        VkImageSwapchainCreateInfoKHR deserialize_struct(VkImageSwapchainCreateInfoKHR::Reader&);
    

        void serialize_struct(VkBindImageMemorySwapchainInfoKHR::Builder&, VkBindImageMemorySwapchainInfoKHR);
        VkBindImageMemorySwapchainInfoKHR deserialize_struct(VkBindImageMemorySwapchainInfoKHR::Reader&);
    

        void serialize_struct(VkAcquireNextImageInfoKHR::Builder&, VkAcquireNextImageInfoKHR);
        VkAcquireNextImageInfoKHR deserialize_struct(VkAcquireNextImageInfoKHR::Reader&);
    

        void serialize_struct(VkDeviceGroupPresentInfoKHR::Builder&, VkDeviceGroupPresentInfoKHR);
        VkDeviceGroupPresentInfoKHR deserialize_struct(VkDeviceGroupPresentInfoKHR::Reader&);
    

        void serialize_struct(VkDeviceGroupDeviceCreateInfo::Builder&, VkDeviceGroupDeviceCreateInfo);
        VkDeviceGroupDeviceCreateInfo deserialize_struct(VkDeviceGroupDeviceCreateInfo::Reader&);
    

        void serialize_struct(VkDeviceGroupSwapchainCreateInfoKHR::Builder&, VkDeviceGroupSwapchainCreateInfoKHR);
        VkDeviceGroupSwapchainCreateInfoKHR deserialize_struct(VkDeviceGroupSwapchainCreateInfoKHR::Reader&);
    

        void serialize_struct(VkDescriptorUpdateTemplateEntry::Builder&, VkDescriptorUpdateTemplateEntry);
        VkDescriptorUpdateTemplateEntry deserialize_struct(VkDescriptorUpdateTemplateEntry::Reader&);
    

        void serialize_struct(VkDescriptorUpdateTemplateCreateInfo::Builder&, VkDescriptorUpdateTemplateCreateInfo);
        VkDescriptorUpdateTemplateCreateInfo deserialize_struct(VkDescriptorUpdateTemplateCreateInfo::Reader&);
    

        void serialize_struct(VkXYColorEXT::Builder&, VkXYColorEXT);
        VkXYColorEXT deserialize_struct(VkXYColorEXT::Reader&);
    

        void serialize_struct(VkPhysicalDevicePresentIdFeaturesKHR::Builder&, VkPhysicalDevicePresentIdFeaturesKHR);
        VkPhysicalDevicePresentIdFeaturesKHR deserialize_struct(VkPhysicalDevicePresentIdFeaturesKHR::Reader&);
    

        void serialize_struct(VkPresentIdKHR::Builder&, VkPresentIdKHR);
        VkPresentIdKHR deserialize_struct(VkPresentIdKHR::Reader&);
    

        void serialize_struct(VkPhysicalDevicePresentWaitFeaturesKHR::Builder&, VkPhysicalDevicePresentWaitFeaturesKHR);
        VkPhysicalDevicePresentWaitFeaturesKHR deserialize_struct(VkPhysicalDevicePresentWaitFeaturesKHR::Reader&);
    

        void serialize_struct(VkHdrMetadataEXT::Builder&, VkHdrMetadataEXT);
        VkHdrMetadataEXT deserialize_struct(VkHdrMetadataEXT::Reader&);
    

        void serialize_struct(VkDisplayNativeHdrSurfaceCapabilitiesAMD::Builder&, VkDisplayNativeHdrSurfaceCapabilitiesAMD);
        VkDisplayNativeHdrSurfaceCapabilitiesAMD deserialize_struct(VkDisplayNativeHdrSurfaceCapabilitiesAMD::Reader&);
    

        void serialize_struct(VkSwapchainDisplayNativeHdrCreateInfoAMD::Builder&, VkSwapchainDisplayNativeHdrCreateInfoAMD);
        VkSwapchainDisplayNativeHdrCreateInfoAMD deserialize_struct(VkSwapchainDisplayNativeHdrCreateInfoAMD::Reader&);
    

        void serialize_struct(VkRefreshCycleDurationGOOGLE::Builder&, VkRefreshCycleDurationGOOGLE);
        VkRefreshCycleDurationGOOGLE deserialize_struct(VkRefreshCycleDurationGOOGLE::Reader&);
    

        void serialize_struct(VkPastPresentationTimingGOOGLE::Builder&, VkPastPresentationTimingGOOGLE);
        VkPastPresentationTimingGOOGLE deserialize_struct(VkPastPresentationTimingGOOGLE::Reader&);
    

        void serialize_struct(VkPresentTimesInfoGOOGLE::Builder&, VkPresentTimesInfoGOOGLE);
        VkPresentTimesInfoGOOGLE deserialize_struct(VkPresentTimesInfoGOOGLE::Reader&);
    

        void serialize_struct(VkPresentTimeGOOGLE::Builder&, VkPresentTimeGOOGLE);
        VkPresentTimeGOOGLE deserialize_struct(VkPresentTimeGOOGLE::Reader&);
    

        void serialize_struct(VkViewportWScalingNV::Builder&, VkViewportWScalingNV);
        VkViewportWScalingNV deserialize_struct(VkViewportWScalingNV::Reader&);
    

        void serialize_struct(VkPipelineViewportWScalingStateCreateInfoNV::Builder&, VkPipelineViewportWScalingStateCreateInfoNV);
        VkPipelineViewportWScalingStateCreateInfoNV deserialize_struct(VkPipelineViewportWScalingStateCreateInfoNV::Reader&);
    

        void serialize_struct(VkViewportSwizzleNV::Builder&, VkViewportSwizzleNV);
        VkViewportSwizzleNV deserialize_struct(VkViewportSwizzleNV::Reader&);
    

        void serialize_struct(VkPipelineViewportSwizzleStateCreateInfoNV::Builder&, VkPipelineViewportSwizzleStateCreateInfoNV);
        VkPipelineViewportSwizzleStateCreateInfoNV deserialize_struct(VkPipelineViewportSwizzleStateCreateInfoNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDiscardRectanglePropertiesEXT::Builder&, VkPhysicalDeviceDiscardRectanglePropertiesEXT);
        VkPhysicalDeviceDiscardRectanglePropertiesEXT deserialize_struct(VkPhysicalDeviceDiscardRectanglePropertiesEXT::Reader&);
    

        void serialize_struct(VkPipelineDiscardRectangleStateCreateInfoEXT::Builder&, VkPipelineDiscardRectangleStateCreateInfoEXT);
        VkPipelineDiscardRectangleStateCreateInfoEXT deserialize_struct(VkPipelineDiscardRectangleStateCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::Builder&, VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX);
        VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX deserialize_struct(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::Reader&);
    

        void serialize_struct(VkInputAttachmentAspectReference::Builder&, VkInputAttachmentAspectReference);
        VkInputAttachmentAspectReference deserialize_struct(VkInputAttachmentAspectReference::Reader&);
    

        void serialize_struct(VkRenderPassInputAttachmentAspectCreateInfo::Builder&, VkRenderPassInputAttachmentAspectCreateInfo);
        VkRenderPassInputAttachmentAspectCreateInfo deserialize_struct(VkRenderPassInputAttachmentAspectCreateInfo::Reader&);
    

        void serialize_struct(VkPhysicalDeviceSurfaceInfo2KHR::Builder&, VkPhysicalDeviceSurfaceInfo2KHR);
        VkPhysicalDeviceSurfaceInfo2KHR deserialize_struct(VkPhysicalDeviceSurfaceInfo2KHR::Reader&);
    

        void serialize_struct(VkSurfaceCapabilities2KHR::Builder&, VkSurfaceCapabilities2KHR);
        VkSurfaceCapabilities2KHR deserialize_struct(VkSurfaceCapabilities2KHR::Reader&);
    

        void serialize_struct(VkSurfaceFormat2KHR::Builder&, VkSurfaceFormat2KHR);
        VkSurfaceFormat2KHR deserialize_struct(VkSurfaceFormat2KHR::Reader&);
    

        void serialize_struct(VkDisplayProperties2KHR::Builder&, VkDisplayProperties2KHR);
        VkDisplayProperties2KHR deserialize_struct(VkDisplayProperties2KHR::Reader&);
    

        void serialize_struct(VkDisplayPlaneProperties2KHR::Builder&, VkDisplayPlaneProperties2KHR);
        VkDisplayPlaneProperties2KHR deserialize_struct(VkDisplayPlaneProperties2KHR::Reader&);
    

        void serialize_struct(VkDisplayModeProperties2KHR::Builder&, VkDisplayModeProperties2KHR);
        VkDisplayModeProperties2KHR deserialize_struct(VkDisplayModeProperties2KHR::Reader&);
    

        void serialize_struct(VkDisplayPlaneInfo2KHR::Builder&, VkDisplayPlaneInfo2KHR);
        VkDisplayPlaneInfo2KHR deserialize_struct(VkDisplayPlaneInfo2KHR::Reader&);
    

        void serialize_struct(VkDisplayPlaneCapabilities2KHR::Builder&, VkDisplayPlaneCapabilities2KHR);
        VkDisplayPlaneCapabilities2KHR deserialize_struct(VkDisplayPlaneCapabilities2KHR::Reader&);
    

        void serialize_struct(VkSharedPresentSurfaceCapabilitiesKHR::Builder&, VkSharedPresentSurfaceCapabilitiesKHR);
        VkSharedPresentSurfaceCapabilitiesKHR deserialize_struct(VkSharedPresentSurfaceCapabilitiesKHR::Reader&);
    

        void serialize_struct(VkPhysicalDevice16BitStorageFeatures::Builder&, VkPhysicalDevice16BitStorageFeatures);
        VkPhysicalDevice16BitStorageFeatures deserialize_struct(VkPhysicalDevice16BitStorageFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceSubgroupProperties::Builder&, VkPhysicalDeviceSubgroupProperties);
        VkPhysicalDeviceSubgroupProperties deserialize_struct(VkPhysicalDeviceSubgroupProperties::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures::Builder&, VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures);
        VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures deserialize_struct(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures::Reader&);
    

        void serialize_struct(VkBufferMemoryRequirementsInfo2::Builder&, VkBufferMemoryRequirementsInfo2);
        VkBufferMemoryRequirementsInfo2 deserialize_struct(VkBufferMemoryRequirementsInfo2::Reader&);
    

        void serialize_struct(VkDeviceBufferMemoryRequirements::Builder&, VkDeviceBufferMemoryRequirements);
        VkDeviceBufferMemoryRequirements deserialize_struct(VkDeviceBufferMemoryRequirements::Reader&);
    

        void serialize_struct(VkImageMemoryRequirementsInfo2::Builder&, VkImageMemoryRequirementsInfo2);
        VkImageMemoryRequirementsInfo2 deserialize_struct(VkImageMemoryRequirementsInfo2::Reader&);
    

        void serialize_struct(VkImageSparseMemoryRequirementsInfo2::Builder&, VkImageSparseMemoryRequirementsInfo2);
        VkImageSparseMemoryRequirementsInfo2 deserialize_struct(VkImageSparseMemoryRequirementsInfo2::Reader&);
    

        void serialize_struct(VkDeviceImageMemoryRequirements::Builder&, VkDeviceImageMemoryRequirements);
        VkDeviceImageMemoryRequirements deserialize_struct(VkDeviceImageMemoryRequirements::Reader&);
    

        void serialize_struct(VkMemoryRequirements2::Builder&, VkMemoryRequirements2);
        VkMemoryRequirements2 deserialize_struct(VkMemoryRequirements2::Reader&);
    

        void serialize_struct(VkSparseImageMemoryRequirements2::Builder&, VkSparseImageMemoryRequirements2);
        VkSparseImageMemoryRequirements2 deserialize_struct(VkSparseImageMemoryRequirements2::Reader&);
    

        void serialize_struct(VkPhysicalDevicePointClippingProperties::Builder&, VkPhysicalDevicePointClippingProperties);
        VkPhysicalDevicePointClippingProperties deserialize_struct(VkPhysicalDevicePointClippingProperties::Reader&);
    

        void serialize_struct(VkMemoryDedicatedRequirements::Builder&, VkMemoryDedicatedRequirements);
        VkMemoryDedicatedRequirements deserialize_struct(VkMemoryDedicatedRequirements::Reader&);
    

        void serialize_struct(VkMemoryDedicatedAllocateInfo::Builder&, VkMemoryDedicatedAllocateInfo);
        VkMemoryDedicatedAllocateInfo deserialize_struct(VkMemoryDedicatedAllocateInfo::Reader&);
    

        void serialize_struct(VkImageViewUsageCreateInfo::Builder&, VkImageViewUsageCreateInfo);
        VkImageViewUsageCreateInfo deserialize_struct(VkImageViewUsageCreateInfo::Reader&);
    

        void serialize_struct(VkImageViewSlicedCreateInfoEXT::Builder&, VkImageViewSlicedCreateInfoEXT);
        VkImageViewSlicedCreateInfoEXT deserialize_struct(VkImageViewSlicedCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPipelineTessellationDomainOriginStateCreateInfo::Builder&, VkPipelineTessellationDomainOriginStateCreateInfo);
        VkPipelineTessellationDomainOriginStateCreateInfo deserialize_struct(VkPipelineTessellationDomainOriginStateCreateInfo::Reader&);
    

        void serialize_struct(VkSamplerYcbcrConversionInfo::Builder&, VkSamplerYcbcrConversionInfo);
        VkSamplerYcbcrConversionInfo deserialize_struct(VkSamplerYcbcrConversionInfo::Reader&);
    

        void serialize_struct(VkSamplerYcbcrConversionCreateInfo::Builder&, VkSamplerYcbcrConversionCreateInfo);
        VkSamplerYcbcrConversionCreateInfo deserialize_struct(VkSamplerYcbcrConversionCreateInfo::Reader&);
    

        void serialize_struct(VkBindImagePlaneMemoryInfo::Builder&, VkBindImagePlaneMemoryInfo);
        VkBindImagePlaneMemoryInfo deserialize_struct(VkBindImagePlaneMemoryInfo::Reader&);
    

        void serialize_struct(VkImagePlaneMemoryRequirementsInfo::Builder&, VkImagePlaneMemoryRequirementsInfo);
        VkImagePlaneMemoryRequirementsInfo deserialize_struct(VkImagePlaneMemoryRequirementsInfo::Reader&);
    

        void serialize_struct(VkPhysicalDeviceSamplerYcbcrConversionFeatures::Builder&, VkPhysicalDeviceSamplerYcbcrConversionFeatures);
        VkPhysicalDeviceSamplerYcbcrConversionFeatures deserialize_struct(VkPhysicalDeviceSamplerYcbcrConversionFeatures::Reader&);
    

        void serialize_struct(VkSamplerYcbcrConversionImageFormatProperties::Builder&, VkSamplerYcbcrConversionImageFormatProperties);
        VkSamplerYcbcrConversionImageFormatProperties deserialize_struct(VkSamplerYcbcrConversionImageFormatProperties::Reader&);
    

        void serialize_struct(VkTextureLODGatherFormatPropertiesAMD::Builder&, VkTextureLODGatherFormatPropertiesAMD);
        VkTextureLODGatherFormatPropertiesAMD deserialize_struct(VkTextureLODGatherFormatPropertiesAMD::Reader&);
    

        void serialize_struct(VkConditionalRenderingBeginInfoEXT::Builder&, VkConditionalRenderingBeginInfoEXT);
        VkConditionalRenderingBeginInfoEXT deserialize_struct(VkConditionalRenderingBeginInfoEXT::Reader&);
    

        void serialize_struct(VkProtectedSubmitInfo::Builder&, VkProtectedSubmitInfo);
        VkProtectedSubmitInfo deserialize_struct(VkProtectedSubmitInfo::Reader&);
    

        void serialize_struct(VkPhysicalDeviceProtectedMemoryFeatures::Builder&, VkPhysicalDeviceProtectedMemoryFeatures);
        VkPhysicalDeviceProtectedMemoryFeatures deserialize_struct(VkPhysicalDeviceProtectedMemoryFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceProtectedMemoryProperties::Builder&, VkPhysicalDeviceProtectedMemoryProperties);
        VkPhysicalDeviceProtectedMemoryProperties deserialize_struct(VkPhysicalDeviceProtectedMemoryProperties::Reader&);
    

        void serialize_struct(VkDeviceQueueInfo2::Builder&, VkDeviceQueueInfo2);
        VkDeviceQueueInfo2 deserialize_struct(VkDeviceQueueInfo2::Reader&);
    

        void serialize_struct(VkPipelineCoverageToColorStateCreateInfoNV::Builder&, VkPipelineCoverageToColorStateCreateInfoNV);
        VkPipelineCoverageToColorStateCreateInfoNV deserialize_struct(VkPipelineCoverageToColorStateCreateInfoNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceSamplerFilterMinmaxProperties::Builder&, VkPhysicalDeviceSamplerFilterMinmaxProperties);
        VkPhysicalDeviceSamplerFilterMinmaxProperties deserialize_struct(VkPhysicalDeviceSamplerFilterMinmaxProperties::Reader&);
    

        void serialize_struct(VkSampleLocationEXT::Builder&, VkSampleLocationEXT);
        VkSampleLocationEXT deserialize_struct(VkSampleLocationEXT::Reader&);
    

        void serialize_struct(VkSampleLocationsInfoEXT::Builder&, VkSampleLocationsInfoEXT);
        VkSampleLocationsInfoEXT deserialize_struct(VkSampleLocationsInfoEXT::Reader&);
    

        void serialize_struct(VkAttachmentSampleLocationsEXT::Builder&, VkAttachmentSampleLocationsEXT);
        VkAttachmentSampleLocationsEXT deserialize_struct(VkAttachmentSampleLocationsEXT::Reader&);
    

        void serialize_struct(VkSubpassSampleLocationsEXT::Builder&, VkSubpassSampleLocationsEXT);
        VkSubpassSampleLocationsEXT deserialize_struct(VkSubpassSampleLocationsEXT::Reader&);
    

        void serialize_struct(VkRenderPassSampleLocationsBeginInfoEXT::Builder&, VkRenderPassSampleLocationsBeginInfoEXT);
        VkRenderPassSampleLocationsBeginInfoEXT deserialize_struct(VkRenderPassSampleLocationsBeginInfoEXT::Reader&);
    

        void serialize_struct(VkPipelineSampleLocationsStateCreateInfoEXT::Builder&, VkPipelineSampleLocationsStateCreateInfoEXT);
        VkPipelineSampleLocationsStateCreateInfoEXT deserialize_struct(VkPipelineSampleLocationsStateCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceSampleLocationsPropertiesEXT::Builder&, VkPhysicalDeviceSampleLocationsPropertiesEXT);
        VkPhysicalDeviceSampleLocationsPropertiesEXT deserialize_struct(VkPhysicalDeviceSampleLocationsPropertiesEXT::Reader&);
    

        void serialize_struct(VkMultisamplePropertiesEXT::Builder&, VkMultisamplePropertiesEXT);
        VkMultisamplePropertiesEXT deserialize_struct(VkMultisamplePropertiesEXT::Reader&);
    

        void serialize_struct(VkSamplerReductionModeCreateInfo::Builder&, VkSamplerReductionModeCreateInfo);
        VkSamplerReductionModeCreateInfo deserialize_struct(VkSamplerReductionModeCreateInfo::Reader&);
    

        void serialize_struct(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::Builder&, VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT);
        VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT deserialize_struct(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMultiDrawFeaturesEXT::Builder&, VkPhysicalDeviceMultiDrawFeaturesEXT);
        VkPhysicalDeviceMultiDrawFeaturesEXT deserialize_struct(VkPhysicalDeviceMultiDrawFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::Builder&, VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT);
        VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT deserialize_struct(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::Reader&);
    

        void serialize_struct(VkPipelineColorBlendAdvancedStateCreateInfoEXT::Builder&, VkPipelineColorBlendAdvancedStateCreateInfoEXT);
        VkPipelineColorBlendAdvancedStateCreateInfoEXT deserialize_struct(VkPipelineColorBlendAdvancedStateCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceInlineUniformBlockFeatures::Builder&, VkPhysicalDeviceInlineUniformBlockFeatures);
        VkPhysicalDeviceInlineUniformBlockFeatures deserialize_struct(VkPhysicalDeviceInlineUniformBlockFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceInlineUniformBlockProperties::Builder&, VkPhysicalDeviceInlineUniformBlockProperties);
        VkPhysicalDeviceInlineUniformBlockProperties deserialize_struct(VkPhysicalDeviceInlineUniformBlockProperties::Reader&);
    

        void serialize_struct(VkWriteDescriptorSetInlineUniformBlock::Builder&, VkWriteDescriptorSetInlineUniformBlock);
        VkWriteDescriptorSetInlineUniformBlock deserialize_struct(VkWriteDescriptorSetInlineUniformBlock::Reader&);
    

        void serialize_struct(VkDescriptorPoolInlineUniformBlockCreateInfo::Builder&, VkDescriptorPoolInlineUniformBlockCreateInfo);
        VkDescriptorPoolInlineUniformBlockCreateInfo deserialize_struct(VkDescriptorPoolInlineUniformBlockCreateInfo::Reader&);
    

        void serialize_struct(VkPipelineCoverageModulationStateCreateInfoNV::Builder&, VkPipelineCoverageModulationStateCreateInfoNV);
        VkPipelineCoverageModulationStateCreateInfoNV deserialize_struct(VkPipelineCoverageModulationStateCreateInfoNV::Reader&);
    

        void serialize_struct(VkImageFormatListCreateInfo::Builder&, VkImageFormatListCreateInfo);
        VkImageFormatListCreateInfo deserialize_struct(VkImageFormatListCreateInfo::Reader&);
    

        void serialize_struct(VkValidationCacheCreateInfoEXT::Builder&, VkValidationCacheCreateInfoEXT);
        VkValidationCacheCreateInfoEXT deserialize_struct(VkValidationCacheCreateInfoEXT::Reader&);
    

        void serialize_struct(VkShaderModuleValidationCacheCreateInfoEXT::Builder&, VkShaderModuleValidationCacheCreateInfoEXT);
        VkShaderModuleValidationCacheCreateInfoEXT deserialize_struct(VkShaderModuleValidationCacheCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMaintenance3Properties::Builder&, VkPhysicalDeviceMaintenance3Properties);
        VkPhysicalDeviceMaintenance3Properties deserialize_struct(VkPhysicalDeviceMaintenance3Properties::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMaintenance4Features::Builder&, VkPhysicalDeviceMaintenance4Features);
        VkPhysicalDeviceMaintenance4Features deserialize_struct(VkPhysicalDeviceMaintenance4Features::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMaintenance4Properties::Builder&, VkPhysicalDeviceMaintenance4Properties);
        VkPhysicalDeviceMaintenance4Properties deserialize_struct(VkPhysicalDeviceMaintenance4Properties::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMaintenance5FeaturesKHR::Builder&, VkPhysicalDeviceMaintenance5FeaturesKHR);
        VkPhysicalDeviceMaintenance5FeaturesKHR deserialize_struct(VkPhysicalDeviceMaintenance5FeaturesKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMaintenance5PropertiesKHR::Builder&, VkPhysicalDeviceMaintenance5PropertiesKHR);
        VkPhysicalDeviceMaintenance5PropertiesKHR deserialize_struct(VkPhysicalDeviceMaintenance5PropertiesKHR::Reader&);
    

        void serialize_struct(VkRenderingAreaInfoKHR::Builder&, VkRenderingAreaInfoKHR);
        VkRenderingAreaInfoKHR deserialize_struct(VkRenderingAreaInfoKHR::Reader&);
    

        void serialize_struct(VkDescriptorSetLayoutSupport::Builder&, VkDescriptorSetLayoutSupport);
        VkDescriptorSetLayoutSupport deserialize_struct(VkDescriptorSetLayoutSupport::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderDrawParametersFeatures::Builder&, VkPhysicalDeviceShaderDrawParametersFeatures);
        VkPhysicalDeviceShaderDrawParametersFeatures deserialize_struct(VkPhysicalDeviceShaderDrawParametersFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderFloat16Int8Features::Builder&, VkPhysicalDeviceShaderFloat16Int8Features);
        VkPhysicalDeviceShaderFloat16Int8Features deserialize_struct(VkPhysicalDeviceShaderFloat16Int8Features::Reader&);
    

        void serialize_struct(VkPhysicalDeviceFloatControlsProperties::Builder&, VkPhysicalDeviceFloatControlsProperties);
        VkPhysicalDeviceFloatControlsProperties deserialize_struct(VkPhysicalDeviceFloatControlsProperties::Reader&);
    

        void serialize_struct(VkPhysicalDeviceHostQueryResetFeatures::Builder&, VkPhysicalDeviceHostQueryResetFeatures);
        VkPhysicalDeviceHostQueryResetFeatures deserialize_struct(VkPhysicalDeviceHostQueryResetFeatures::Reader&);
    

        void serialize_struct(VkShaderResourceUsageAMD::Builder&, VkShaderResourceUsageAMD);
        VkShaderResourceUsageAMD deserialize_struct(VkShaderResourceUsageAMD::Reader&);
    

        void serialize_struct(VkShaderStatisticsInfoAMD::Builder&, VkShaderStatisticsInfoAMD);
        VkShaderStatisticsInfoAMD deserialize_struct(VkShaderStatisticsInfoAMD::Reader&);
    

        void serialize_struct(VkDeviceQueueGlobalPriorityCreateInfoKHR::Builder&, VkDeviceQueueGlobalPriorityCreateInfoKHR);
        VkDeviceQueueGlobalPriorityCreateInfoKHR deserialize_struct(VkDeviceQueueGlobalPriorityCreateInfoKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR::Builder&, VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR);
        VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR deserialize_struct(VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR::Reader&);
    

        void serialize_struct(VkQueueFamilyGlobalPriorityPropertiesKHR::Builder&, VkQueueFamilyGlobalPriorityPropertiesKHR);
        VkQueueFamilyGlobalPriorityPropertiesKHR deserialize_struct(VkQueueFamilyGlobalPriorityPropertiesKHR::Reader&);
    

        void serialize_struct(VkDebugUtilsObjectNameInfoEXT::Builder&, VkDebugUtilsObjectNameInfoEXT);
        VkDebugUtilsObjectNameInfoEXT deserialize_struct(VkDebugUtilsObjectNameInfoEXT::Reader&);
    

        void serialize_struct(VkDebugUtilsObjectTagInfoEXT::Builder&, VkDebugUtilsObjectTagInfoEXT);
        VkDebugUtilsObjectTagInfoEXT deserialize_struct(VkDebugUtilsObjectTagInfoEXT::Reader&);
    

        void serialize_struct(VkDebugUtilsLabelEXT::Builder&, VkDebugUtilsLabelEXT);
        VkDebugUtilsLabelEXT deserialize_struct(VkDebugUtilsLabelEXT::Reader&);
    

        void serialize_struct(VkDebugUtilsMessengerCreateInfoEXT::Builder&, VkDebugUtilsMessengerCreateInfoEXT);
        VkDebugUtilsMessengerCreateInfoEXT deserialize_struct(VkDebugUtilsMessengerCreateInfoEXT::Reader&);
    

        void serialize_struct(VkDebugUtilsMessengerCallbackDataEXT::Builder&, VkDebugUtilsMessengerCallbackDataEXT);
        VkDebugUtilsMessengerCallbackDataEXT deserialize_struct(VkDebugUtilsMessengerCallbackDataEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDeviceMemoryReportFeaturesEXT::Builder&, VkPhysicalDeviceDeviceMemoryReportFeaturesEXT);
        VkPhysicalDeviceDeviceMemoryReportFeaturesEXT deserialize_struct(VkPhysicalDeviceDeviceMemoryReportFeaturesEXT::Reader&);
    

        void serialize_struct(VkDeviceDeviceMemoryReportCreateInfoEXT::Builder&, VkDeviceDeviceMemoryReportCreateInfoEXT);
        VkDeviceDeviceMemoryReportCreateInfoEXT deserialize_struct(VkDeviceDeviceMemoryReportCreateInfoEXT::Reader&);
    

        void serialize_struct(VkDeviceMemoryReportCallbackDataEXT::Builder&, VkDeviceMemoryReportCallbackDataEXT);
        VkDeviceMemoryReportCallbackDataEXT deserialize_struct(VkDeviceMemoryReportCallbackDataEXT::Reader&);
    

        void serialize_struct(VkImportMemoryHostPointerInfoEXT::Builder&, VkImportMemoryHostPointerInfoEXT);
        VkImportMemoryHostPointerInfoEXT deserialize_struct(VkImportMemoryHostPointerInfoEXT::Reader&);
    

        void serialize_struct(VkMemoryHostPointerPropertiesEXT::Builder&, VkMemoryHostPointerPropertiesEXT);
        VkMemoryHostPointerPropertiesEXT deserialize_struct(VkMemoryHostPointerPropertiesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceExternalMemoryHostPropertiesEXT::Builder&, VkPhysicalDeviceExternalMemoryHostPropertiesEXT);
        VkPhysicalDeviceExternalMemoryHostPropertiesEXT deserialize_struct(VkPhysicalDeviceExternalMemoryHostPropertiesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceConservativeRasterizationPropertiesEXT::Builder&, VkPhysicalDeviceConservativeRasterizationPropertiesEXT);
        VkPhysicalDeviceConservativeRasterizationPropertiesEXT deserialize_struct(VkPhysicalDeviceConservativeRasterizationPropertiesEXT::Reader&);
    

        void serialize_struct(VkCalibratedTimestampInfoEXT::Builder&, VkCalibratedTimestampInfoEXT);
        VkCalibratedTimestampInfoEXT deserialize_struct(VkCalibratedTimestampInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderCorePropertiesAMD::Builder&, VkPhysicalDeviceShaderCorePropertiesAMD);
        VkPhysicalDeviceShaderCorePropertiesAMD deserialize_struct(VkPhysicalDeviceShaderCorePropertiesAMD::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderCoreProperties2AMD::Builder&, VkPhysicalDeviceShaderCoreProperties2AMD);
        VkPhysicalDeviceShaderCoreProperties2AMD deserialize_struct(VkPhysicalDeviceShaderCoreProperties2AMD::Reader&);
    

        void serialize_struct(VkPipelineRasterizationConservativeStateCreateInfoEXT::Builder&, VkPipelineRasterizationConservativeStateCreateInfoEXT);
        VkPipelineRasterizationConservativeStateCreateInfoEXT deserialize_struct(VkPipelineRasterizationConservativeStateCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDescriptorIndexingFeatures::Builder&, VkPhysicalDeviceDescriptorIndexingFeatures);
        VkPhysicalDeviceDescriptorIndexingFeatures deserialize_struct(VkPhysicalDeviceDescriptorIndexingFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDescriptorIndexingProperties::Builder&, VkPhysicalDeviceDescriptorIndexingProperties);
        VkPhysicalDeviceDescriptorIndexingProperties deserialize_struct(VkPhysicalDeviceDescriptorIndexingProperties::Reader&);
    

        void serialize_struct(VkDescriptorSetLayoutBindingFlagsCreateInfo::Builder&, VkDescriptorSetLayoutBindingFlagsCreateInfo);
        VkDescriptorSetLayoutBindingFlagsCreateInfo deserialize_struct(VkDescriptorSetLayoutBindingFlagsCreateInfo::Reader&);
    

        void serialize_struct(VkDescriptorSetVariableDescriptorCountAllocateInfo::Builder&, VkDescriptorSetVariableDescriptorCountAllocateInfo);
        VkDescriptorSetVariableDescriptorCountAllocateInfo deserialize_struct(VkDescriptorSetVariableDescriptorCountAllocateInfo::Reader&);
    

        void serialize_struct(VkDescriptorSetVariableDescriptorCountLayoutSupport::Builder&, VkDescriptorSetVariableDescriptorCountLayoutSupport);
        VkDescriptorSetVariableDescriptorCountLayoutSupport deserialize_struct(VkDescriptorSetVariableDescriptorCountLayoutSupport::Reader&);
    

        void serialize_struct(VkAttachmentDescription2::Builder&, VkAttachmentDescription2);
        VkAttachmentDescription2 deserialize_struct(VkAttachmentDescription2::Reader&);
    

        void serialize_struct(VkAttachmentReference2::Builder&, VkAttachmentReference2);
        VkAttachmentReference2 deserialize_struct(VkAttachmentReference2::Reader&);
    

        void serialize_struct(VkSubpassDescription2::Builder&, VkSubpassDescription2);
        VkSubpassDescription2 deserialize_struct(VkSubpassDescription2::Reader&);
    

        void serialize_struct(VkSubpassDependency2::Builder&, VkSubpassDependency2);
        VkSubpassDependency2 deserialize_struct(VkSubpassDependency2::Reader&);
    

        void serialize_struct(VkRenderPassCreateInfo2::Builder&, VkRenderPassCreateInfo2);
        VkRenderPassCreateInfo2 deserialize_struct(VkRenderPassCreateInfo2::Reader&);
    

        void serialize_struct(VkSubpassBeginInfo::Builder&, VkSubpassBeginInfo);
        VkSubpassBeginInfo deserialize_struct(VkSubpassBeginInfo::Reader&);
    

        void serialize_struct(VkSubpassEndInfo::Builder&, VkSubpassEndInfo);
        VkSubpassEndInfo deserialize_struct(VkSubpassEndInfo::Reader&);
    

        void serialize_struct(VkPhysicalDeviceTimelineSemaphoreFeatures::Builder&, VkPhysicalDeviceTimelineSemaphoreFeatures);
        VkPhysicalDeviceTimelineSemaphoreFeatures deserialize_struct(VkPhysicalDeviceTimelineSemaphoreFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceTimelineSemaphoreProperties::Builder&, VkPhysicalDeviceTimelineSemaphoreProperties);
        VkPhysicalDeviceTimelineSemaphoreProperties deserialize_struct(VkPhysicalDeviceTimelineSemaphoreProperties::Reader&);
    

        void serialize_struct(VkSemaphoreTypeCreateInfo::Builder&, VkSemaphoreTypeCreateInfo);
        VkSemaphoreTypeCreateInfo deserialize_struct(VkSemaphoreTypeCreateInfo::Reader&);
    

        void serialize_struct(VkTimelineSemaphoreSubmitInfo::Builder&, VkTimelineSemaphoreSubmitInfo);
        VkTimelineSemaphoreSubmitInfo deserialize_struct(VkTimelineSemaphoreSubmitInfo::Reader&);
    

        void serialize_struct(VkSemaphoreWaitInfo::Builder&, VkSemaphoreWaitInfo);
        VkSemaphoreWaitInfo deserialize_struct(VkSemaphoreWaitInfo::Reader&);
    

        void serialize_struct(VkSemaphoreSignalInfo::Builder&, VkSemaphoreSignalInfo);
        VkSemaphoreSignalInfo deserialize_struct(VkSemaphoreSignalInfo::Reader&);
    

        void serialize_struct(VkVertexInputBindingDivisorDescriptionEXT::Builder&, VkVertexInputBindingDivisorDescriptionEXT);
        VkVertexInputBindingDivisorDescriptionEXT deserialize_struct(VkVertexInputBindingDivisorDescriptionEXT::Reader&);
    

        void serialize_struct(VkPipelineVertexInputDivisorStateCreateInfoEXT::Builder&, VkPipelineVertexInputDivisorStateCreateInfoEXT);
        VkPipelineVertexInputDivisorStateCreateInfoEXT deserialize_struct(VkPipelineVertexInputDivisorStateCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::Builder&, VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT);
        VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT deserialize_struct(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDevicePCIBusInfoPropertiesEXT::Builder&, VkPhysicalDevicePCIBusInfoPropertiesEXT);
        VkPhysicalDevicePCIBusInfoPropertiesEXT deserialize_struct(VkPhysicalDevicePCIBusInfoPropertiesEXT::Reader&);
    

        void serialize_struct(VkCommandBufferInheritanceConditionalRenderingInfoEXT::Builder&, VkCommandBufferInheritanceConditionalRenderingInfoEXT);
        VkCommandBufferInheritanceConditionalRenderingInfoEXT deserialize_struct(VkCommandBufferInheritanceConditionalRenderingInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDevice8BitStorageFeatures::Builder&, VkPhysicalDevice8BitStorageFeatures);
        VkPhysicalDevice8BitStorageFeatures deserialize_struct(VkPhysicalDevice8BitStorageFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceConditionalRenderingFeaturesEXT::Builder&, VkPhysicalDeviceConditionalRenderingFeaturesEXT);
        VkPhysicalDeviceConditionalRenderingFeaturesEXT deserialize_struct(VkPhysicalDeviceConditionalRenderingFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceVulkanMemoryModelFeatures::Builder&, VkPhysicalDeviceVulkanMemoryModelFeatures);
        VkPhysicalDeviceVulkanMemoryModelFeatures deserialize_struct(VkPhysicalDeviceVulkanMemoryModelFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderAtomicInt64Features::Builder&, VkPhysicalDeviceShaderAtomicInt64Features);
        VkPhysicalDeviceShaderAtomicInt64Features deserialize_struct(VkPhysicalDeviceShaderAtomicInt64Features::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT::Builder&, VkPhysicalDeviceShaderAtomicFloatFeaturesEXT);
        VkPhysicalDeviceShaderAtomicFloatFeaturesEXT deserialize_struct(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT::Builder&, VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT);
        VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT deserialize_struct(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::Builder&, VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT);
        VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT deserialize_struct(VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::Reader&);
    

        void serialize_struct(VkQueueFamilyCheckpointPropertiesNV::Builder&, VkQueueFamilyCheckpointPropertiesNV);
        VkQueueFamilyCheckpointPropertiesNV deserialize_struct(VkQueueFamilyCheckpointPropertiesNV::Reader&);
    

        void serialize_struct(VkCheckpointDataNV::Builder&, VkCheckpointDataNV);
        VkCheckpointDataNV deserialize_struct(VkCheckpointDataNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDepthStencilResolveProperties::Builder&, VkPhysicalDeviceDepthStencilResolveProperties);
        VkPhysicalDeviceDepthStencilResolveProperties deserialize_struct(VkPhysicalDeviceDepthStencilResolveProperties::Reader&);
    

        void serialize_struct(VkSubpassDescriptionDepthStencilResolve::Builder&, VkSubpassDescriptionDepthStencilResolve);
        VkSubpassDescriptionDepthStencilResolve deserialize_struct(VkSubpassDescriptionDepthStencilResolve::Reader&);
    

        void serialize_struct(VkImageViewASTCDecodeModeEXT::Builder&, VkImageViewASTCDecodeModeEXT);
        VkImageViewASTCDecodeModeEXT deserialize_struct(VkImageViewASTCDecodeModeEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceASTCDecodeFeaturesEXT::Builder&, VkPhysicalDeviceASTCDecodeFeaturesEXT);
        VkPhysicalDeviceASTCDecodeFeaturesEXT deserialize_struct(VkPhysicalDeviceASTCDecodeFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceTransformFeedbackFeaturesEXT::Builder&, VkPhysicalDeviceTransformFeedbackFeaturesEXT);
        VkPhysicalDeviceTransformFeedbackFeaturesEXT deserialize_struct(VkPhysicalDeviceTransformFeedbackFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceTransformFeedbackPropertiesEXT::Builder&, VkPhysicalDeviceTransformFeedbackPropertiesEXT);
        VkPhysicalDeviceTransformFeedbackPropertiesEXT deserialize_struct(VkPhysicalDeviceTransformFeedbackPropertiesEXT::Reader&);
    

        void serialize_struct(VkPipelineRasterizationStateStreamCreateInfoEXT::Builder&, VkPipelineRasterizationStateStreamCreateInfoEXT);
        VkPipelineRasterizationStateStreamCreateInfoEXT deserialize_struct(VkPipelineRasterizationStateStreamCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV::Builder&, VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV);
        VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV deserialize_struct(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV::Reader&);
    

        void serialize_struct(VkPipelineRepresentativeFragmentTestStateCreateInfoNV::Builder&, VkPipelineRepresentativeFragmentTestStateCreateInfoNV);
        VkPipelineRepresentativeFragmentTestStateCreateInfoNV deserialize_struct(VkPipelineRepresentativeFragmentTestStateCreateInfoNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceExclusiveScissorFeaturesNV::Builder&, VkPhysicalDeviceExclusiveScissorFeaturesNV);
        VkPhysicalDeviceExclusiveScissorFeaturesNV deserialize_struct(VkPhysicalDeviceExclusiveScissorFeaturesNV::Reader&);
    

        void serialize_struct(VkPipelineViewportExclusiveScissorStateCreateInfoNV::Builder&, VkPipelineViewportExclusiveScissorStateCreateInfoNV);
        VkPipelineViewportExclusiveScissorStateCreateInfoNV deserialize_struct(VkPipelineViewportExclusiveScissorStateCreateInfoNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceCornerSampledImageFeaturesNV::Builder&, VkPhysicalDeviceCornerSampledImageFeaturesNV);
        VkPhysicalDeviceCornerSampledImageFeaturesNV deserialize_struct(VkPhysicalDeviceCornerSampledImageFeaturesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::Builder&, VkPhysicalDeviceComputeShaderDerivativesFeaturesNV);
        VkPhysicalDeviceComputeShaderDerivativesFeaturesNV deserialize_struct(VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderImageFootprintFeaturesNV::Builder&, VkPhysicalDeviceShaderImageFootprintFeaturesNV);
        VkPhysicalDeviceShaderImageFootprintFeaturesNV deserialize_struct(VkPhysicalDeviceShaderImageFootprintFeaturesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV::Builder&, VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV);
        VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV deserialize_struct(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceCopyMemoryIndirectFeaturesNV::Builder&, VkPhysicalDeviceCopyMemoryIndirectFeaturesNV);
        VkPhysicalDeviceCopyMemoryIndirectFeaturesNV deserialize_struct(VkPhysicalDeviceCopyMemoryIndirectFeaturesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceCopyMemoryIndirectPropertiesNV::Builder&, VkPhysicalDeviceCopyMemoryIndirectPropertiesNV);
        VkPhysicalDeviceCopyMemoryIndirectPropertiesNV deserialize_struct(VkPhysicalDeviceCopyMemoryIndirectPropertiesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMemoryDecompressionFeaturesNV::Builder&, VkPhysicalDeviceMemoryDecompressionFeaturesNV);
        VkPhysicalDeviceMemoryDecompressionFeaturesNV deserialize_struct(VkPhysicalDeviceMemoryDecompressionFeaturesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMemoryDecompressionPropertiesNV::Builder&, VkPhysicalDeviceMemoryDecompressionPropertiesNV);
        VkPhysicalDeviceMemoryDecompressionPropertiesNV deserialize_struct(VkPhysicalDeviceMemoryDecompressionPropertiesNV::Reader&);
    

        void serialize_struct(VkShadingRatePaletteNV::Builder&, VkShadingRatePaletteNV);
        VkShadingRatePaletteNV deserialize_struct(VkShadingRatePaletteNV::Reader&);
    

        void serialize_struct(VkPipelineViewportShadingRateImageStateCreateInfoNV::Builder&, VkPipelineViewportShadingRateImageStateCreateInfoNV);
        VkPipelineViewportShadingRateImageStateCreateInfoNV deserialize_struct(VkPipelineViewportShadingRateImageStateCreateInfoNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShadingRateImageFeaturesNV::Builder&, VkPhysicalDeviceShadingRateImageFeaturesNV);
        VkPhysicalDeviceShadingRateImageFeaturesNV deserialize_struct(VkPhysicalDeviceShadingRateImageFeaturesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShadingRateImagePropertiesNV::Builder&, VkPhysicalDeviceShadingRateImagePropertiesNV);
        VkPhysicalDeviceShadingRateImagePropertiesNV deserialize_struct(VkPhysicalDeviceShadingRateImagePropertiesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceInvocationMaskFeaturesHUAWEI::Builder&, VkPhysicalDeviceInvocationMaskFeaturesHUAWEI);
        VkPhysicalDeviceInvocationMaskFeaturesHUAWEI deserialize_struct(VkPhysicalDeviceInvocationMaskFeaturesHUAWEI::Reader&);
    

        void serialize_struct(VkCoarseSampleLocationNV::Builder&, VkCoarseSampleLocationNV);
        VkCoarseSampleLocationNV deserialize_struct(VkCoarseSampleLocationNV::Reader&);
    

        void serialize_struct(VkCoarseSampleOrderCustomNV::Builder&, VkCoarseSampleOrderCustomNV);
        VkCoarseSampleOrderCustomNV deserialize_struct(VkCoarseSampleOrderCustomNV::Reader&);
    

        void serialize_struct(VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::Builder&, VkPipelineViewportCoarseSampleOrderStateCreateInfoNV);
        VkPipelineViewportCoarseSampleOrderStateCreateInfoNV deserialize_struct(VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMeshShaderFeaturesNV::Builder&, VkPhysicalDeviceMeshShaderFeaturesNV);
        VkPhysicalDeviceMeshShaderFeaturesNV deserialize_struct(VkPhysicalDeviceMeshShaderFeaturesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMeshShaderPropertiesNV::Builder&, VkPhysicalDeviceMeshShaderPropertiesNV);
        VkPhysicalDeviceMeshShaderPropertiesNV deserialize_struct(VkPhysicalDeviceMeshShaderPropertiesNV::Reader&);
    

        void serialize_struct(VkDrawMeshTasksIndirectCommandNV::Builder&, VkDrawMeshTasksIndirectCommandNV);
        VkDrawMeshTasksIndirectCommandNV deserialize_struct(VkDrawMeshTasksIndirectCommandNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMeshShaderFeaturesEXT::Builder&, VkPhysicalDeviceMeshShaderFeaturesEXT);
        VkPhysicalDeviceMeshShaderFeaturesEXT deserialize_struct(VkPhysicalDeviceMeshShaderFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMeshShaderPropertiesEXT::Builder&, VkPhysicalDeviceMeshShaderPropertiesEXT);
        VkPhysicalDeviceMeshShaderPropertiesEXT deserialize_struct(VkPhysicalDeviceMeshShaderPropertiesEXT::Reader&);
    

        void serialize_struct(VkDrawMeshTasksIndirectCommandEXT::Builder&, VkDrawMeshTasksIndirectCommandEXT);
        VkDrawMeshTasksIndirectCommandEXT deserialize_struct(VkDrawMeshTasksIndirectCommandEXT::Reader&);
    

        void serialize_struct(VkRayTracingShaderGroupCreateInfoNV::Builder&, VkRayTracingShaderGroupCreateInfoNV);
        VkRayTracingShaderGroupCreateInfoNV deserialize_struct(VkRayTracingShaderGroupCreateInfoNV::Reader&);
    

        void serialize_struct(VkRayTracingShaderGroupCreateInfoKHR::Builder&, VkRayTracingShaderGroupCreateInfoKHR);
        VkRayTracingShaderGroupCreateInfoKHR deserialize_struct(VkRayTracingShaderGroupCreateInfoKHR::Reader&);
    

        void serialize_struct(VkRayTracingPipelineCreateInfoNV::Builder&, VkRayTracingPipelineCreateInfoNV);
        VkRayTracingPipelineCreateInfoNV deserialize_struct(VkRayTracingPipelineCreateInfoNV::Reader&);
    

        void serialize_struct(VkRayTracingPipelineCreateInfoKHR::Builder&, VkRayTracingPipelineCreateInfoKHR);
        VkRayTracingPipelineCreateInfoKHR deserialize_struct(VkRayTracingPipelineCreateInfoKHR::Reader&);
    

        void serialize_struct(VkGeometryTrianglesNV::Builder&, VkGeometryTrianglesNV);
        VkGeometryTrianglesNV deserialize_struct(VkGeometryTrianglesNV::Reader&);
    

        void serialize_struct(VkGeometryAABBNV::Builder&, VkGeometryAABBNV);
        VkGeometryAABBNV deserialize_struct(VkGeometryAABBNV::Reader&);
    

        void serialize_struct(VkGeometryDataNV::Builder&, VkGeometryDataNV);
        VkGeometryDataNV deserialize_struct(VkGeometryDataNV::Reader&);
    

        void serialize_struct(VkGeometryNV::Builder&, VkGeometryNV);
        VkGeometryNV deserialize_struct(VkGeometryNV::Reader&);
    

        void serialize_struct(VkAccelerationStructureInfoNV::Builder&, VkAccelerationStructureInfoNV);
        VkAccelerationStructureInfoNV deserialize_struct(VkAccelerationStructureInfoNV::Reader&);
    

        void serialize_struct(VkAccelerationStructureCreateInfoNV::Builder&, VkAccelerationStructureCreateInfoNV);
        VkAccelerationStructureCreateInfoNV deserialize_struct(VkAccelerationStructureCreateInfoNV::Reader&);
    

        void serialize_struct(VkBindAccelerationStructureMemoryInfoNV::Builder&, VkBindAccelerationStructureMemoryInfoNV);
        VkBindAccelerationStructureMemoryInfoNV deserialize_struct(VkBindAccelerationStructureMemoryInfoNV::Reader&);
    

        void serialize_struct(VkWriteDescriptorSetAccelerationStructureKHR::Builder&, VkWriteDescriptorSetAccelerationStructureKHR);
        VkWriteDescriptorSetAccelerationStructureKHR deserialize_struct(VkWriteDescriptorSetAccelerationStructureKHR::Reader&);
    

        void serialize_struct(VkWriteDescriptorSetAccelerationStructureNV::Builder&, VkWriteDescriptorSetAccelerationStructureNV);
        VkWriteDescriptorSetAccelerationStructureNV deserialize_struct(VkWriteDescriptorSetAccelerationStructureNV::Reader&);
    

        void serialize_struct(VkAccelerationStructureMemoryRequirementsInfoNV::Builder&, VkAccelerationStructureMemoryRequirementsInfoNV);
        VkAccelerationStructureMemoryRequirementsInfoNV deserialize_struct(VkAccelerationStructureMemoryRequirementsInfoNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceAccelerationStructureFeaturesKHR::Builder&, VkPhysicalDeviceAccelerationStructureFeaturesKHR);
        VkPhysicalDeviceAccelerationStructureFeaturesKHR deserialize_struct(VkPhysicalDeviceAccelerationStructureFeaturesKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceRayTracingPipelineFeaturesKHR::Builder&, VkPhysicalDeviceRayTracingPipelineFeaturesKHR);
        VkPhysicalDeviceRayTracingPipelineFeaturesKHR deserialize_struct(VkPhysicalDeviceRayTracingPipelineFeaturesKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceRayQueryFeaturesKHR::Builder&, VkPhysicalDeviceRayQueryFeaturesKHR);
        VkPhysicalDeviceRayQueryFeaturesKHR deserialize_struct(VkPhysicalDeviceRayQueryFeaturesKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceAccelerationStructurePropertiesKHR::Builder&, VkPhysicalDeviceAccelerationStructurePropertiesKHR);
        VkPhysicalDeviceAccelerationStructurePropertiesKHR deserialize_struct(VkPhysicalDeviceAccelerationStructurePropertiesKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceRayTracingPipelinePropertiesKHR::Builder&, VkPhysicalDeviceRayTracingPipelinePropertiesKHR);
        VkPhysicalDeviceRayTracingPipelinePropertiesKHR deserialize_struct(VkPhysicalDeviceRayTracingPipelinePropertiesKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceRayTracingPropertiesNV::Builder&, VkPhysicalDeviceRayTracingPropertiesNV);
        VkPhysicalDeviceRayTracingPropertiesNV deserialize_struct(VkPhysicalDeviceRayTracingPropertiesNV::Reader&);
    

        void serialize_struct(VkStridedDeviceAddressRegionKHR::Builder&, VkStridedDeviceAddressRegionKHR);
        VkStridedDeviceAddressRegionKHR deserialize_struct(VkStridedDeviceAddressRegionKHR::Reader&);
    

        void serialize_struct(VkTraceRaysIndirectCommandKHR::Builder&, VkTraceRaysIndirectCommandKHR);
        VkTraceRaysIndirectCommandKHR deserialize_struct(VkTraceRaysIndirectCommandKHR::Reader&);
    

        void serialize_struct(VkTraceRaysIndirectCommand2KHR::Builder&, VkTraceRaysIndirectCommand2KHR);
        VkTraceRaysIndirectCommand2KHR deserialize_struct(VkTraceRaysIndirectCommand2KHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR::Builder&, VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR);
        VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR deserialize_struct(VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR::Reader&);
    

        void serialize_struct(VkDrmFormatModifierPropertiesListEXT::Builder&, VkDrmFormatModifierPropertiesListEXT);
        VkDrmFormatModifierPropertiesListEXT deserialize_struct(VkDrmFormatModifierPropertiesListEXT::Reader&);
    

        void serialize_struct(VkDrmFormatModifierPropertiesEXT::Builder&, VkDrmFormatModifierPropertiesEXT);
        VkDrmFormatModifierPropertiesEXT deserialize_struct(VkDrmFormatModifierPropertiesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceImageDrmFormatModifierInfoEXT::Builder&, VkPhysicalDeviceImageDrmFormatModifierInfoEXT);
        VkPhysicalDeviceImageDrmFormatModifierInfoEXT deserialize_struct(VkPhysicalDeviceImageDrmFormatModifierInfoEXT::Reader&);
    

        void serialize_struct(VkImageDrmFormatModifierListCreateInfoEXT::Builder&, VkImageDrmFormatModifierListCreateInfoEXT);
        VkImageDrmFormatModifierListCreateInfoEXT deserialize_struct(VkImageDrmFormatModifierListCreateInfoEXT::Reader&);
    

        void serialize_struct(VkImageDrmFormatModifierExplicitCreateInfoEXT::Builder&, VkImageDrmFormatModifierExplicitCreateInfoEXT);
        VkImageDrmFormatModifierExplicitCreateInfoEXT deserialize_struct(VkImageDrmFormatModifierExplicitCreateInfoEXT::Reader&);
    

        void serialize_struct(VkImageDrmFormatModifierPropertiesEXT::Builder&, VkImageDrmFormatModifierPropertiesEXT);
        VkImageDrmFormatModifierPropertiesEXT deserialize_struct(VkImageDrmFormatModifierPropertiesEXT::Reader&);
    

        void serialize_struct(VkImageStencilUsageCreateInfo::Builder&, VkImageStencilUsageCreateInfo);
        VkImageStencilUsageCreateInfo deserialize_struct(VkImageStencilUsageCreateInfo::Reader&);
    

        void serialize_struct(VkDeviceMemoryOverallocationCreateInfoAMD::Builder&, VkDeviceMemoryOverallocationCreateInfoAMD);
        VkDeviceMemoryOverallocationCreateInfoAMD deserialize_struct(VkDeviceMemoryOverallocationCreateInfoAMD::Reader&);
    

        void serialize_struct(VkPhysicalDeviceFragmentDensityMapFeaturesEXT::Builder&, VkPhysicalDeviceFragmentDensityMapFeaturesEXT);
        VkPhysicalDeviceFragmentDensityMapFeaturesEXT deserialize_struct(VkPhysicalDeviceFragmentDensityMapFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT::Builder&, VkPhysicalDeviceFragmentDensityMap2FeaturesEXT);
        VkPhysicalDeviceFragmentDensityMap2FeaturesEXT deserialize_struct(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM::Builder&, VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM);
        VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM deserialize_struct(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM::Reader&);
    

        void serialize_struct(VkPhysicalDeviceFragmentDensityMapPropertiesEXT::Builder&, VkPhysicalDeviceFragmentDensityMapPropertiesEXT);
        VkPhysicalDeviceFragmentDensityMapPropertiesEXT deserialize_struct(VkPhysicalDeviceFragmentDensityMapPropertiesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceFragmentDensityMap2PropertiesEXT::Builder&, VkPhysicalDeviceFragmentDensityMap2PropertiesEXT);
        VkPhysicalDeviceFragmentDensityMap2PropertiesEXT deserialize_struct(VkPhysicalDeviceFragmentDensityMap2PropertiesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM::Builder&, VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM);
        VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM deserialize_struct(VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM::Reader&);
    

        void serialize_struct(VkRenderPassFragmentDensityMapCreateInfoEXT::Builder&, VkRenderPassFragmentDensityMapCreateInfoEXT);
        VkRenderPassFragmentDensityMapCreateInfoEXT deserialize_struct(VkRenderPassFragmentDensityMapCreateInfoEXT::Reader&);
    

        void serialize_struct(VkSubpassFragmentDensityMapOffsetEndInfoQCOM::Builder&, VkSubpassFragmentDensityMapOffsetEndInfoQCOM);
        VkSubpassFragmentDensityMapOffsetEndInfoQCOM deserialize_struct(VkSubpassFragmentDensityMapOffsetEndInfoQCOM::Reader&);
    

        void serialize_struct(VkPhysicalDeviceScalarBlockLayoutFeatures::Builder&, VkPhysicalDeviceScalarBlockLayoutFeatures);
        VkPhysicalDeviceScalarBlockLayoutFeatures deserialize_struct(VkPhysicalDeviceScalarBlockLayoutFeatures::Reader&);
    

        void serialize_struct(VkSurfaceProtectedCapabilitiesKHR::Builder&, VkSurfaceProtectedCapabilitiesKHR);
        VkSurfaceProtectedCapabilitiesKHR deserialize_struct(VkSurfaceProtectedCapabilitiesKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceUniformBufferStandardLayoutFeatures::Builder&, VkPhysicalDeviceUniformBufferStandardLayoutFeatures);
        VkPhysicalDeviceUniformBufferStandardLayoutFeatures deserialize_struct(VkPhysicalDeviceUniformBufferStandardLayoutFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDepthClipEnableFeaturesEXT::Builder&, VkPhysicalDeviceDepthClipEnableFeaturesEXT);
        VkPhysicalDeviceDepthClipEnableFeaturesEXT deserialize_struct(VkPhysicalDeviceDepthClipEnableFeaturesEXT::Reader&);
    

        void serialize_struct(VkPipelineRasterizationDepthClipStateCreateInfoEXT::Builder&, VkPipelineRasterizationDepthClipStateCreateInfoEXT);
        VkPipelineRasterizationDepthClipStateCreateInfoEXT deserialize_struct(VkPipelineRasterizationDepthClipStateCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMemoryBudgetPropertiesEXT::Builder&, VkPhysicalDeviceMemoryBudgetPropertiesEXT);
        VkPhysicalDeviceMemoryBudgetPropertiesEXT deserialize_struct(VkPhysicalDeviceMemoryBudgetPropertiesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMemoryPriorityFeaturesEXT::Builder&, VkPhysicalDeviceMemoryPriorityFeaturesEXT);
        VkPhysicalDeviceMemoryPriorityFeaturesEXT deserialize_struct(VkPhysicalDeviceMemoryPriorityFeaturesEXT::Reader&);
    

        void serialize_struct(VkMemoryPriorityAllocateInfoEXT::Builder&, VkMemoryPriorityAllocateInfoEXT);
        VkMemoryPriorityAllocateInfoEXT deserialize_struct(VkMemoryPriorityAllocateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT::Builder&, VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT);
        VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT deserialize_struct(VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceBufferDeviceAddressFeatures::Builder&, VkPhysicalDeviceBufferDeviceAddressFeatures);
        VkPhysicalDeviceBufferDeviceAddressFeatures deserialize_struct(VkPhysicalDeviceBufferDeviceAddressFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT::Builder&, VkPhysicalDeviceBufferDeviceAddressFeaturesEXT);
        VkPhysicalDeviceBufferDeviceAddressFeaturesEXT deserialize_struct(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT::Reader&);
    

        void serialize_struct(VkBufferDeviceAddressInfo::Builder&, VkBufferDeviceAddressInfo);
        VkBufferDeviceAddressInfo deserialize_struct(VkBufferDeviceAddressInfo::Reader&);
    

        void serialize_struct(VkBufferOpaqueCaptureAddressCreateInfo::Builder&, VkBufferOpaqueCaptureAddressCreateInfo);
        VkBufferOpaqueCaptureAddressCreateInfo deserialize_struct(VkBufferOpaqueCaptureAddressCreateInfo::Reader&);
    

        void serialize_struct(VkBufferDeviceAddressCreateInfoEXT::Builder&, VkBufferDeviceAddressCreateInfoEXT);
        VkBufferDeviceAddressCreateInfoEXT deserialize_struct(VkBufferDeviceAddressCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceImageViewImageFormatInfoEXT::Builder&, VkPhysicalDeviceImageViewImageFormatInfoEXT);
        VkPhysicalDeviceImageViewImageFormatInfoEXT deserialize_struct(VkPhysicalDeviceImageViewImageFormatInfoEXT::Reader&);
    

        void serialize_struct(VkFilterCubicImageViewImageFormatPropertiesEXT::Builder&, VkFilterCubicImageViewImageFormatPropertiesEXT);
        VkFilterCubicImageViewImageFormatPropertiesEXT deserialize_struct(VkFilterCubicImageViewImageFormatPropertiesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceImagelessFramebufferFeatures::Builder&, VkPhysicalDeviceImagelessFramebufferFeatures);
        VkPhysicalDeviceImagelessFramebufferFeatures deserialize_struct(VkPhysicalDeviceImagelessFramebufferFeatures::Reader&);
    

        void serialize_struct(VkFramebufferAttachmentsCreateInfo::Builder&, VkFramebufferAttachmentsCreateInfo);
        VkFramebufferAttachmentsCreateInfo deserialize_struct(VkFramebufferAttachmentsCreateInfo::Reader&);
    

        void serialize_struct(VkFramebufferAttachmentImageInfo::Builder&, VkFramebufferAttachmentImageInfo);
        VkFramebufferAttachmentImageInfo deserialize_struct(VkFramebufferAttachmentImageInfo::Reader&);
    

        void serialize_struct(VkRenderPassAttachmentBeginInfo::Builder&, VkRenderPassAttachmentBeginInfo);
        VkRenderPassAttachmentBeginInfo deserialize_struct(VkRenderPassAttachmentBeginInfo::Reader&);
    

        void serialize_struct(VkPhysicalDeviceTextureCompressionASTCHDRFeatures::Builder&, VkPhysicalDeviceTextureCompressionASTCHDRFeatures);
        VkPhysicalDeviceTextureCompressionASTCHDRFeatures deserialize_struct(VkPhysicalDeviceTextureCompressionASTCHDRFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceCooperativeMatrixFeaturesNV::Builder&, VkPhysicalDeviceCooperativeMatrixFeaturesNV);
        VkPhysicalDeviceCooperativeMatrixFeaturesNV deserialize_struct(VkPhysicalDeviceCooperativeMatrixFeaturesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceCooperativeMatrixPropertiesNV::Builder&, VkPhysicalDeviceCooperativeMatrixPropertiesNV);
        VkPhysicalDeviceCooperativeMatrixPropertiesNV deserialize_struct(VkPhysicalDeviceCooperativeMatrixPropertiesNV::Reader&);
    

        void serialize_struct(VkCooperativeMatrixPropertiesNV::Builder&, VkCooperativeMatrixPropertiesNV);
        VkCooperativeMatrixPropertiesNV deserialize_struct(VkCooperativeMatrixPropertiesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT::Builder&, VkPhysicalDeviceYcbcrImageArraysFeaturesEXT);
        VkPhysicalDeviceYcbcrImageArraysFeaturesEXT deserialize_struct(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT::Reader&);
    

        void serialize_struct(VkImageViewHandleInfoNVX::Builder&, VkImageViewHandleInfoNVX);
        VkImageViewHandleInfoNVX deserialize_struct(VkImageViewHandleInfoNVX::Reader&);
    

        void serialize_struct(VkImageViewAddressPropertiesNVX::Builder&, VkImageViewAddressPropertiesNVX);
        VkImageViewAddressPropertiesNVX deserialize_struct(VkImageViewAddressPropertiesNVX::Reader&);
    

        void serialize_struct(VkPipelineCreationFeedback::Builder&, VkPipelineCreationFeedback);
        VkPipelineCreationFeedback deserialize_struct(VkPipelineCreationFeedback::Reader&);
    

        void serialize_struct(VkPipelineCreationFeedbackCreateInfo::Builder&, VkPipelineCreationFeedbackCreateInfo);
        VkPipelineCreationFeedbackCreateInfo deserialize_struct(VkPipelineCreationFeedbackCreateInfo::Reader&);
    

        void serialize_struct(VkPhysicalDevicePresentBarrierFeaturesNV::Builder&, VkPhysicalDevicePresentBarrierFeaturesNV);
        VkPhysicalDevicePresentBarrierFeaturesNV deserialize_struct(VkPhysicalDevicePresentBarrierFeaturesNV::Reader&);
    

        void serialize_struct(VkSurfaceCapabilitiesPresentBarrierNV::Builder&, VkSurfaceCapabilitiesPresentBarrierNV);
        VkSurfaceCapabilitiesPresentBarrierNV deserialize_struct(VkSurfaceCapabilitiesPresentBarrierNV::Reader&);
    

        void serialize_struct(VkSwapchainPresentBarrierCreateInfoNV::Builder&, VkSwapchainPresentBarrierCreateInfoNV);
        VkSwapchainPresentBarrierCreateInfoNV deserialize_struct(VkSwapchainPresentBarrierCreateInfoNV::Reader&);
    

        void serialize_struct(VkPhysicalDevicePerformanceQueryFeaturesKHR::Builder&, VkPhysicalDevicePerformanceQueryFeaturesKHR);
        VkPhysicalDevicePerformanceQueryFeaturesKHR deserialize_struct(VkPhysicalDevicePerformanceQueryFeaturesKHR::Reader&);
    

        void serialize_struct(VkPhysicalDevicePerformanceQueryPropertiesKHR::Builder&, VkPhysicalDevicePerformanceQueryPropertiesKHR);
        VkPhysicalDevicePerformanceQueryPropertiesKHR deserialize_struct(VkPhysicalDevicePerformanceQueryPropertiesKHR::Reader&);
    

        void serialize_struct(VkPerformanceCounterKHR::Builder&, VkPerformanceCounterKHR);
        VkPerformanceCounterKHR deserialize_struct(VkPerformanceCounterKHR::Reader&);
    

        void serialize_struct(VkPerformanceCounterDescriptionKHR::Builder&, VkPerformanceCounterDescriptionKHR);
        VkPerformanceCounterDescriptionKHR deserialize_struct(VkPerformanceCounterDescriptionKHR::Reader&);
    

        void serialize_struct(VkQueryPoolPerformanceCreateInfoKHR::Builder&, VkQueryPoolPerformanceCreateInfoKHR);
        VkQueryPoolPerformanceCreateInfoKHR deserialize_struct(VkQueryPoolPerformanceCreateInfoKHR::Reader&);
    

        void serialize_struct(VkPerformanceCounterResultKHR::Builder&, VkPerformanceCounterResultKHR);
        VkPerformanceCounterResultKHR deserialize_struct(VkPerformanceCounterResultKHR::Reader&);
    

        void serialize_struct(VkAcquireProfilingLockInfoKHR::Builder&, VkAcquireProfilingLockInfoKHR);
        VkAcquireProfilingLockInfoKHR deserialize_struct(VkAcquireProfilingLockInfoKHR::Reader&);
    

        void serialize_struct(VkPerformanceQuerySubmitInfoKHR::Builder&, VkPerformanceQuerySubmitInfoKHR);
        VkPerformanceQuerySubmitInfoKHR deserialize_struct(VkPerformanceQuerySubmitInfoKHR::Reader&);
    

        void serialize_struct(VkHeadlessSurfaceCreateInfoEXT::Builder&, VkHeadlessSurfaceCreateInfoEXT);
        VkHeadlessSurfaceCreateInfoEXT deserialize_struct(VkHeadlessSurfaceCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceCoverageReductionModeFeaturesNV::Builder&, VkPhysicalDeviceCoverageReductionModeFeaturesNV);
        VkPhysicalDeviceCoverageReductionModeFeaturesNV deserialize_struct(VkPhysicalDeviceCoverageReductionModeFeaturesNV::Reader&);
    

        void serialize_struct(VkPipelineCoverageReductionStateCreateInfoNV::Builder&, VkPipelineCoverageReductionStateCreateInfoNV);
        VkPipelineCoverageReductionStateCreateInfoNV deserialize_struct(VkPipelineCoverageReductionStateCreateInfoNV::Reader&);
    

        void serialize_struct(VkFramebufferMixedSamplesCombinationNV::Builder&, VkFramebufferMixedSamplesCombinationNV);
        VkFramebufferMixedSamplesCombinationNV deserialize_struct(VkFramebufferMixedSamplesCombinationNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL::Builder&, VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL);
        VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL deserialize_struct(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL::Reader&);
    

        void serialize_struct(VkPerformanceValueDataINTEL::Builder&, VkPerformanceValueDataINTEL);
        VkPerformanceValueDataINTEL deserialize_struct(VkPerformanceValueDataINTEL::Reader&);
    

        void serialize_struct(VkPerformanceValueINTEL::Builder&, VkPerformanceValueINTEL);
        VkPerformanceValueINTEL deserialize_struct(VkPerformanceValueINTEL::Reader&);
    

        void serialize_struct(VkInitializePerformanceApiInfoINTEL::Builder&, VkInitializePerformanceApiInfoINTEL);
        VkInitializePerformanceApiInfoINTEL deserialize_struct(VkInitializePerformanceApiInfoINTEL::Reader&);
    

        void serialize_struct(VkQueryPoolPerformanceQueryCreateInfoINTEL::Builder&, VkQueryPoolPerformanceQueryCreateInfoINTEL);
        VkQueryPoolPerformanceQueryCreateInfoINTEL deserialize_struct(VkQueryPoolPerformanceQueryCreateInfoINTEL::Reader&);
    

        void serialize_struct(VkPerformanceMarkerInfoINTEL::Builder&, VkPerformanceMarkerInfoINTEL);
        VkPerformanceMarkerInfoINTEL deserialize_struct(VkPerformanceMarkerInfoINTEL::Reader&);
    

        void serialize_struct(VkPerformanceStreamMarkerInfoINTEL::Builder&, VkPerformanceStreamMarkerInfoINTEL);
        VkPerformanceStreamMarkerInfoINTEL deserialize_struct(VkPerformanceStreamMarkerInfoINTEL::Reader&);
    

        void serialize_struct(VkPerformanceOverrideInfoINTEL::Builder&, VkPerformanceOverrideInfoINTEL);
        VkPerformanceOverrideInfoINTEL deserialize_struct(VkPerformanceOverrideInfoINTEL::Reader&);
    

        void serialize_struct(VkPerformanceConfigurationAcquireInfoINTEL::Builder&, VkPerformanceConfigurationAcquireInfoINTEL);
        VkPerformanceConfigurationAcquireInfoINTEL deserialize_struct(VkPerformanceConfigurationAcquireInfoINTEL::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderClockFeaturesKHR::Builder&, VkPhysicalDeviceShaderClockFeaturesKHR);
        VkPhysicalDeviceShaderClockFeaturesKHR deserialize_struct(VkPhysicalDeviceShaderClockFeaturesKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceIndexTypeUint8FeaturesEXT::Builder&, VkPhysicalDeviceIndexTypeUint8FeaturesEXT);
        VkPhysicalDeviceIndexTypeUint8FeaturesEXT deserialize_struct(VkPhysicalDeviceIndexTypeUint8FeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderSMBuiltinsPropertiesNV::Builder&, VkPhysicalDeviceShaderSMBuiltinsPropertiesNV);
        VkPhysicalDeviceShaderSMBuiltinsPropertiesNV deserialize_struct(VkPhysicalDeviceShaderSMBuiltinsPropertiesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderSMBuiltinsFeaturesNV::Builder&, VkPhysicalDeviceShaderSMBuiltinsFeaturesNV);
        VkPhysicalDeviceShaderSMBuiltinsFeaturesNV deserialize_struct(VkPhysicalDeviceShaderSMBuiltinsFeaturesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT::Builder&, VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT);
        VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT deserialize_struct(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures::Builder&, VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures);
        VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures deserialize_struct(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures::Reader&);
    

        void serialize_struct(VkAttachmentReferenceStencilLayout::Builder&, VkAttachmentReferenceStencilLayout);
        VkAttachmentReferenceStencilLayout deserialize_struct(VkAttachmentReferenceStencilLayout::Reader&);
    

        void serialize_struct(VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT::Builder&, VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT);
        VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT deserialize_struct(VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT::Reader&);
    

        void serialize_struct(VkAttachmentDescriptionStencilLayout::Builder&, VkAttachmentDescriptionStencilLayout);
        VkAttachmentDescriptionStencilLayout deserialize_struct(VkAttachmentDescriptionStencilLayout::Reader&);
    

        void serialize_struct(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR::Builder&, VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR);
        VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR deserialize_struct(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR::Reader&);
    

        void serialize_struct(VkPipelineInfoKHR::Builder&, VkPipelineInfoKHR);
        VkPipelineInfoKHR deserialize_struct(VkPipelineInfoKHR::Reader&);
    

        void serialize_struct(VkPipelineExecutablePropertiesKHR::Builder&, VkPipelineExecutablePropertiesKHR);
        VkPipelineExecutablePropertiesKHR deserialize_struct(VkPipelineExecutablePropertiesKHR::Reader&);
    

        void serialize_struct(VkPipelineExecutableInfoKHR::Builder&, VkPipelineExecutableInfoKHR);
        VkPipelineExecutableInfoKHR deserialize_struct(VkPipelineExecutableInfoKHR::Reader&);
    

        void serialize_struct(VkPipelineExecutableStatisticValueKHR::Builder&, VkPipelineExecutableStatisticValueKHR);
        VkPipelineExecutableStatisticValueKHR deserialize_struct(VkPipelineExecutableStatisticValueKHR::Reader&);
    

        void serialize_struct(VkPipelineExecutableStatisticKHR::Builder&, VkPipelineExecutableStatisticKHR);
        VkPipelineExecutableStatisticKHR deserialize_struct(VkPipelineExecutableStatisticKHR::Reader&);
    

        void serialize_struct(VkPipelineExecutableInternalRepresentationKHR::Builder&, VkPipelineExecutableInternalRepresentationKHR);
        VkPipelineExecutableInternalRepresentationKHR deserialize_struct(VkPipelineExecutableInternalRepresentationKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures::Builder&, VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures);
        VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures deserialize_struct(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT::Builder&, VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT);
        VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT deserialize_struct(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceTexelBufferAlignmentProperties::Builder&, VkPhysicalDeviceTexelBufferAlignmentProperties);
        VkPhysicalDeviceTexelBufferAlignmentProperties deserialize_struct(VkPhysicalDeviceTexelBufferAlignmentProperties::Reader&);
    

        void serialize_struct(VkPhysicalDeviceSubgroupSizeControlFeatures::Builder&, VkPhysicalDeviceSubgroupSizeControlFeatures);
        VkPhysicalDeviceSubgroupSizeControlFeatures deserialize_struct(VkPhysicalDeviceSubgroupSizeControlFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceSubgroupSizeControlProperties::Builder&, VkPhysicalDeviceSubgroupSizeControlProperties);
        VkPhysicalDeviceSubgroupSizeControlProperties deserialize_struct(VkPhysicalDeviceSubgroupSizeControlProperties::Reader&);
    

        void serialize_struct(VkPipelineShaderStageRequiredSubgroupSizeCreateInfo::Builder&, VkPipelineShaderStageRequiredSubgroupSizeCreateInfo);
        VkPipelineShaderStageRequiredSubgroupSizeCreateInfo deserialize_struct(VkPipelineShaderStageRequiredSubgroupSizeCreateInfo::Reader&);
    

        void serialize_struct(VkSubpassShadingPipelineCreateInfoHUAWEI::Builder&, VkSubpassShadingPipelineCreateInfoHUAWEI);
        VkSubpassShadingPipelineCreateInfoHUAWEI deserialize_struct(VkSubpassShadingPipelineCreateInfoHUAWEI::Reader&);
    

        void serialize_struct(VkPhysicalDeviceSubpassShadingPropertiesHUAWEI::Builder&, VkPhysicalDeviceSubpassShadingPropertiesHUAWEI);
        VkPhysicalDeviceSubpassShadingPropertiesHUAWEI deserialize_struct(VkPhysicalDeviceSubpassShadingPropertiesHUAWEI::Reader&);
    

        void serialize_struct(VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI::Builder&, VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI);
        VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI deserialize_struct(VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI::Reader&);
    

        void serialize_struct(VkMemoryOpaqueCaptureAddressAllocateInfo::Builder&, VkMemoryOpaqueCaptureAddressAllocateInfo);
        VkMemoryOpaqueCaptureAddressAllocateInfo deserialize_struct(VkMemoryOpaqueCaptureAddressAllocateInfo::Reader&);
    

        void serialize_struct(VkDeviceMemoryOpaqueCaptureAddressInfo::Builder&, VkDeviceMemoryOpaqueCaptureAddressInfo);
        VkDeviceMemoryOpaqueCaptureAddressInfo deserialize_struct(VkDeviceMemoryOpaqueCaptureAddressInfo::Reader&);
    

        void serialize_struct(VkPhysicalDeviceLineRasterizationFeaturesEXT::Builder&, VkPhysicalDeviceLineRasterizationFeaturesEXT);
        VkPhysicalDeviceLineRasterizationFeaturesEXT deserialize_struct(VkPhysicalDeviceLineRasterizationFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceLineRasterizationPropertiesEXT::Builder&, VkPhysicalDeviceLineRasterizationPropertiesEXT);
        VkPhysicalDeviceLineRasterizationPropertiesEXT deserialize_struct(VkPhysicalDeviceLineRasterizationPropertiesEXT::Reader&);
    

        void serialize_struct(VkPipelineRasterizationLineStateCreateInfoEXT::Builder&, VkPipelineRasterizationLineStateCreateInfoEXT);
        VkPipelineRasterizationLineStateCreateInfoEXT deserialize_struct(VkPipelineRasterizationLineStateCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDevicePipelineCreationCacheControlFeatures::Builder&, VkPhysicalDevicePipelineCreationCacheControlFeatures);
        VkPhysicalDevicePipelineCreationCacheControlFeatures deserialize_struct(VkPhysicalDevicePipelineCreationCacheControlFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceVulkan11Features::Builder&, VkPhysicalDeviceVulkan11Features);
        VkPhysicalDeviceVulkan11Features deserialize_struct(VkPhysicalDeviceVulkan11Features::Reader&);
    

        void serialize_struct(VkPhysicalDeviceVulkan11Properties::Builder&, VkPhysicalDeviceVulkan11Properties);
        VkPhysicalDeviceVulkan11Properties deserialize_struct(VkPhysicalDeviceVulkan11Properties::Reader&);
    

        void serialize_struct(VkPhysicalDeviceVulkan12Features::Builder&, VkPhysicalDeviceVulkan12Features);
        VkPhysicalDeviceVulkan12Features deserialize_struct(VkPhysicalDeviceVulkan12Features::Reader&);
    

        void serialize_struct(VkPhysicalDeviceVulkan12Properties::Builder&, VkPhysicalDeviceVulkan12Properties);
        VkPhysicalDeviceVulkan12Properties deserialize_struct(VkPhysicalDeviceVulkan12Properties::Reader&);
    

        void serialize_struct(VkPhysicalDeviceVulkan13Features::Builder&, VkPhysicalDeviceVulkan13Features);
        VkPhysicalDeviceVulkan13Features deserialize_struct(VkPhysicalDeviceVulkan13Features::Reader&);
    

        void serialize_struct(VkPhysicalDeviceVulkan13Properties::Builder&, VkPhysicalDeviceVulkan13Properties);
        VkPhysicalDeviceVulkan13Properties deserialize_struct(VkPhysicalDeviceVulkan13Properties::Reader&);
    

        void serialize_struct(VkPipelineCompilerControlCreateInfoAMD::Builder&, VkPipelineCompilerControlCreateInfoAMD);
        VkPipelineCompilerControlCreateInfoAMD deserialize_struct(VkPipelineCompilerControlCreateInfoAMD::Reader&);
    

        void serialize_struct(VkPhysicalDeviceCoherentMemoryFeaturesAMD::Builder&, VkPhysicalDeviceCoherentMemoryFeaturesAMD);
        VkPhysicalDeviceCoherentMemoryFeaturesAMD deserialize_struct(VkPhysicalDeviceCoherentMemoryFeaturesAMD::Reader&);
    

        void serialize_struct(VkPhysicalDeviceToolProperties::Builder&, VkPhysicalDeviceToolProperties);
        VkPhysicalDeviceToolProperties deserialize_struct(VkPhysicalDeviceToolProperties::Reader&);
    

        void serialize_struct(VkSamplerCustomBorderColorCreateInfoEXT::Builder&, VkSamplerCustomBorderColorCreateInfoEXT);
        VkSamplerCustomBorderColorCreateInfoEXT deserialize_struct(VkSamplerCustomBorderColorCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceCustomBorderColorPropertiesEXT::Builder&, VkPhysicalDeviceCustomBorderColorPropertiesEXT);
        VkPhysicalDeviceCustomBorderColorPropertiesEXT deserialize_struct(VkPhysicalDeviceCustomBorderColorPropertiesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceCustomBorderColorFeaturesEXT::Builder&, VkPhysicalDeviceCustomBorderColorFeaturesEXT);
        VkPhysicalDeviceCustomBorderColorFeaturesEXT deserialize_struct(VkPhysicalDeviceCustomBorderColorFeaturesEXT::Reader&);
    

        void serialize_struct(VkSamplerBorderColorComponentMappingCreateInfoEXT::Builder&, VkSamplerBorderColorComponentMappingCreateInfoEXT);
        VkSamplerBorderColorComponentMappingCreateInfoEXT deserialize_struct(VkSamplerBorderColorComponentMappingCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceBorderColorSwizzleFeaturesEXT::Builder&, VkPhysicalDeviceBorderColorSwizzleFeaturesEXT);
        VkPhysicalDeviceBorderColorSwizzleFeaturesEXT deserialize_struct(VkPhysicalDeviceBorderColorSwizzleFeaturesEXT::Reader&);
    

        void serialize_struct(VkDeviceOrHostAddressKHR::Builder&, VkDeviceOrHostAddressKHR);
        VkDeviceOrHostAddressKHR deserialize_struct(VkDeviceOrHostAddressKHR::Reader&);
    

        void serialize_struct(VkDeviceOrHostAddressConstKHR::Builder&, VkDeviceOrHostAddressConstKHR);
        VkDeviceOrHostAddressConstKHR deserialize_struct(VkDeviceOrHostAddressConstKHR::Reader&);
    

        void serialize_struct(VkAccelerationStructureGeometryTrianglesDataKHR::Builder&, VkAccelerationStructureGeometryTrianglesDataKHR);
        VkAccelerationStructureGeometryTrianglesDataKHR deserialize_struct(VkAccelerationStructureGeometryTrianglesDataKHR::Reader&);
    

        void serialize_struct(VkAccelerationStructureGeometryAabbsDataKHR::Builder&, VkAccelerationStructureGeometryAabbsDataKHR);
        VkAccelerationStructureGeometryAabbsDataKHR deserialize_struct(VkAccelerationStructureGeometryAabbsDataKHR::Reader&);
    

        void serialize_struct(VkAccelerationStructureGeometryInstancesDataKHR::Builder&, VkAccelerationStructureGeometryInstancesDataKHR);
        VkAccelerationStructureGeometryInstancesDataKHR deserialize_struct(VkAccelerationStructureGeometryInstancesDataKHR::Reader&);
    

        void serialize_struct(VkAccelerationStructureGeometryDataKHR::Builder&, VkAccelerationStructureGeometryDataKHR);
        VkAccelerationStructureGeometryDataKHR deserialize_struct(VkAccelerationStructureGeometryDataKHR::Reader&);
    

        void serialize_struct(VkAccelerationStructureGeometryKHR::Builder&, VkAccelerationStructureGeometryKHR);
        VkAccelerationStructureGeometryKHR deserialize_struct(VkAccelerationStructureGeometryKHR::Reader&);
    

        void serialize_struct(VkAccelerationStructureBuildGeometryInfoKHR::Builder&, VkAccelerationStructureBuildGeometryInfoKHR);
        VkAccelerationStructureBuildGeometryInfoKHR deserialize_struct(VkAccelerationStructureBuildGeometryInfoKHR::Reader&);
    

        void serialize_struct(VkAccelerationStructureBuildRangeInfoKHR::Builder&, VkAccelerationStructureBuildRangeInfoKHR);
        VkAccelerationStructureBuildRangeInfoKHR deserialize_struct(VkAccelerationStructureBuildRangeInfoKHR::Reader&);
    

        void serialize_struct(VkAccelerationStructureCreateInfoKHR::Builder&, VkAccelerationStructureCreateInfoKHR);
        VkAccelerationStructureCreateInfoKHR deserialize_struct(VkAccelerationStructureCreateInfoKHR::Reader&);
    

        void serialize_struct(VkAabbPositionsKHR::Builder&, VkAabbPositionsKHR);
        VkAabbPositionsKHR deserialize_struct(VkAabbPositionsKHR::Reader&);
    

        void serialize_struct(VkTransformMatrixKHR::Builder&, VkTransformMatrixKHR);
        VkTransformMatrixKHR deserialize_struct(VkTransformMatrixKHR::Reader&);
    

        void serialize_struct(VkAccelerationStructureInstanceKHR::Builder&, VkAccelerationStructureInstanceKHR);
        VkAccelerationStructureInstanceKHR deserialize_struct(VkAccelerationStructureInstanceKHR::Reader&);
    

        void serialize_struct(VkAccelerationStructureDeviceAddressInfoKHR::Builder&, VkAccelerationStructureDeviceAddressInfoKHR);
        VkAccelerationStructureDeviceAddressInfoKHR deserialize_struct(VkAccelerationStructureDeviceAddressInfoKHR::Reader&);
    

        void serialize_struct(VkAccelerationStructureVersionInfoKHR::Builder&, VkAccelerationStructureVersionInfoKHR);
        VkAccelerationStructureVersionInfoKHR deserialize_struct(VkAccelerationStructureVersionInfoKHR::Reader&);
    

        void serialize_struct(VkCopyAccelerationStructureInfoKHR::Builder&, VkCopyAccelerationStructureInfoKHR);
        VkCopyAccelerationStructureInfoKHR deserialize_struct(VkCopyAccelerationStructureInfoKHR::Reader&);
    

        void serialize_struct(VkCopyAccelerationStructureToMemoryInfoKHR::Builder&, VkCopyAccelerationStructureToMemoryInfoKHR);
        VkCopyAccelerationStructureToMemoryInfoKHR deserialize_struct(VkCopyAccelerationStructureToMemoryInfoKHR::Reader&);
    

        void serialize_struct(VkCopyMemoryToAccelerationStructureInfoKHR::Builder&, VkCopyMemoryToAccelerationStructureInfoKHR);
        VkCopyMemoryToAccelerationStructureInfoKHR deserialize_struct(VkCopyMemoryToAccelerationStructureInfoKHR::Reader&);
    

        void serialize_struct(VkRayTracingPipelineInterfaceCreateInfoKHR::Builder&, VkRayTracingPipelineInterfaceCreateInfoKHR);
        VkRayTracingPipelineInterfaceCreateInfoKHR deserialize_struct(VkRayTracingPipelineInterfaceCreateInfoKHR::Reader&);
    

        void serialize_struct(VkPipelineLibraryCreateInfoKHR::Builder&, VkPipelineLibraryCreateInfoKHR);
        VkPipelineLibraryCreateInfoKHR deserialize_struct(VkPipelineLibraryCreateInfoKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT::Builder&, VkPhysicalDeviceExtendedDynamicStateFeaturesEXT);
        VkPhysicalDeviceExtendedDynamicStateFeaturesEXT deserialize_struct(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT::Builder&, VkPhysicalDeviceExtendedDynamicState2FeaturesEXT);
        VkPhysicalDeviceExtendedDynamicState2FeaturesEXT deserialize_struct(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceExtendedDynamicState3FeaturesEXT::Builder&, VkPhysicalDeviceExtendedDynamicState3FeaturesEXT);
        VkPhysicalDeviceExtendedDynamicState3FeaturesEXT deserialize_struct(VkPhysicalDeviceExtendedDynamicState3FeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceExtendedDynamicState3PropertiesEXT::Builder&, VkPhysicalDeviceExtendedDynamicState3PropertiesEXT);
        VkPhysicalDeviceExtendedDynamicState3PropertiesEXT deserialize_struct(VkPhysicalDeviceExtendedDynamicState3PropertiesEXT::Reader&);
    

        void serialize_struct(VkColorBlendEquationEXT::Builder&, VkColorBlendEquationEXT);
        VkColorBlendEquationEXT deserialize_struct(VkColorBlendEquationEXT::Reader&);
    

        void serialize_struct(VkColorBlendAdvancedEXT::Builder&, VkColorBlendAdvancedEXT);
        VkColorBlendAdvancedEXT deserialize_struct(VkColorBlendAdvancedEXT::Reader&);
    

        void serialize_struct(VkRenderPassTransformBeginInfoQCOM::Builder&, VkRenderPassTransformBeginInfoQCOM);
        VkRenderPassTransformBeginInfoQCOM deserialize_struct(VkRenderPassTransformBeginInfoQCOM::Reader&);
    

        void serialize_struct(VkCopyCommandTransformInfoQCOM::Builder&, VkCopyCommandTransformInfoQCOM);
        VkCopyCommandTransformInfoQCOM deserialize_struct(VkCopyCommandTransformInfoQCOM::Reader&);
    

        void serialize_struct(VkCommandBufferInheritanceRenderPassTransformInfoQCOM::Builder&, VkCommandBufferInheritanceRenderPassTransformInfoQCOM);
        VkCommandBufferInheritanceRenderPassTransformInfoQCOM deserialize_struct(VkCommandBufferInheritanceRenderPassTransformInfoQCOM::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDiagnosticsConfigFeaturesNV::Builder&, VkPhysicalDeviceDiagnosticsConfigFeaturesNV);
        VkPhysicalDeviceDiagnosticsConfigFeaturesNV deserialize_struct(VkPhysicalDeviceDiagnosticsConfigFeaturesNV::Reader&);
    

        void serialize_struct(VkDeviceDiagnosticsConfigCreateInfoNV::Builder&, VkDeviceDiagnosticsConfigCreateInfoNV);
        VkDeviceDiagnosticsConfigCreateInfoNV deserialize_struct(VkDeviceDiagnosticsConfigCreateInfoNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::Builder&, VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures);
        VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures deserialize_struct(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR::Builder&, VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR);
        VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR deserialize_struct(VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceRobustness2FeaturesEXT::Builder&, VkPhysicalDeviceRobustness2FeaturesEXT);
        VkPhysicalDeviceRobustness2FeaturesEXT deserialize_struct(VkPhysicalDeviceRobustness2FeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceRobustness2PropertiesEXT::Builder&, VkPhysicalDeviceRobustness2PropertiesEXT);
        VkPhysicalDeviceRobustness2PropertiesEXT deserialize_struct(VkPhysicalDeviceRobustness2PropertiesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceImageRobustnessFeatures::Builder&, VkPhysicalDeviceImageRobustnessFeatures);
        VkPhysicalDeviceImageRobustnessFeatures deserialize_struct(VkPhysicalDeviceImageRobustnessFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR::Builder&, VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR);
        VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR deserialize_struct(VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR::Reader&);
    

        void serialize_struct(VkPhysicalDevice4444FormatsFeaturesEXT::Builder&, VkPhysicalDevice4444FormatsFeaturesEXT);
        VkPhysicalDevice4444FormatsFeaturesEXT deserialize_struct(VkPhysicalDevice4444FormatsFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI::Builder&, VkPhysicalDeviceSubpassShadingFeaturesHUAWEI);
        VkPhysicalDeviceSubpassShadingFeaturesHUAWEI deserialize_struct(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI::Reader&);
    

        void serialize_struct(VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI::Builder&, VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI);
        VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI deserialize_struct(VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI::Reader&);
    

        void serialize_struct(VkBufferCopy2::Builder&, VkBufferCopy2);
        VkBufferCopy2 deserialize_struct(VkBufferCopy2::Reader&);
    

        void serialize_struct(VkImageCopy2::Builder&, VkImageCopy2);
        VkImageCopy2 deserialize_struct(VkImageCopy2::Reader&);
    

        void serialize_struct(VkImageBlit2::Builder&, VkImageBlit2);
        VkImageBlit2 deserialize_struct(VkImageBlit2::Reader&);
    

        void serialize_struct(VkBufferImageCopy2::Builder&, VkBufferImageCopy2);
        VkBufferImageCopy2 deserialize_struct(VkBufferImageCopy2::Reader&);
    

        void serialize_struct(VkImageResolve2::Builder&, VkImageResolve2);
        VkImageResolve2 deserialize_struct(VkImageResolve2::Reader&);
    

        void serialize_struct(VkCopyBufferInfo2::Builder&, VkCopyBufferInfo2);
        VkCopyBufferInfo2 deserialize_struct(VkCopyBufferInfo2::Reader&);
    

        void serialize_struct(VkCopyImageInfo2::Builder&, VkCopyImageInfo2);
        VkCopyImageInfo2 deserialize_struct(VkCopyImageInfo2::Reader&);
    

        void serialize_struct(VkBlitImageInfo2::Builder&, VkBlitImageInfo2);
        VkBlitImageInfo2 deserialize_struct(VkBlitImageInfo2::Reader&);
    

        void serialize_struct(VkCopyBufferToImageInfo2::Builder&, VkCopyBufferToImageInfo2);
        VkCopyBufferToImageInfo2 deserialize_struct(VkCopyBufferToImageInfo2::Reader&);
    

        void serialize_struct(VkCopyImageToBufferInfo2::Builder&, VkCopyImageToBufferInfo2);
        VkCopyImageToBufferInfo2 deserialize_struct(VkCopyImageToBufferInfo2::Reader&);
    

        void serialize_struct(VkResolveImageInfo2::Builder&, VkResolveImageInfo2);
        VkResolveImageInfo2 deserialize_struct(VkResolveImageInfo2::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT::Builder&, VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT);
        VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT deserialize_struct(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT::Reader&);
    

        void serialize_struct(VkFragmentShadingRateAttachmentInfoKHR::Builder&, VkFragmentShadingRateAttachmentInfoKHR);
        VkFragmentShadingRateAttachmentInfoKHR deserialize_struct(VkFragmentShadingRateAttachmentInfoKHR::Reader&);
    

        void serialize_struct(VkPipelineFragmentShadingRateStateCreateInfoKHR::Builder&, VkPipelineFragmentShadingRateStateCreateInfoKHR);
        VkPipelineFragmentShadingRateStateCreateInfoKHR deserialize_struct(VkPipelineFragmentShadingRateStateCreateInfoKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceFragmentShadingRateFeaturesKHR::Builder&, VkPhysicalDeviceFragmentShadingRateFeaturesKHR);
        VkPhysicalDeviceFragmentShadingRateFeaturesKHR deserialize_struct(VkPhysicalDeviceFragmentShadingRateFeaturesKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceFragmentShadingRatePropertiesKHR::Builder&, VkPhysicalDeviceFragmentShadingRatePropertiesKHR);
        VkPhysicalDeviceFragmentShadingRatePropertiesKHR deserialize_struct(VkPhysicalDeviceFragmentShadingRatePropertiesKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceFragmentShadingRateKHR::Builder&, VkPhysicalDeviceFragmentShadingRateKHR);
        VkPhysicalDeviceFragmentShadingRateKHR deserialize_struct(VkPhysicalDeviceFragmentShadingRateKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderTerminateInvocationFeatures::Builder&, VkPhysicalDeviceShaderTerminateInvocationFeatures);
        VkPhysicalDeviceShaderTerminateInvocationFeatures deserialize_struct(VkPhysicalDeviceShaderTerminateInvocationFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV::Builder&, VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV);
        VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV deserialize_struct(VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV::Builder&, VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV);
        VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV deserialize_struct(VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV::Reader&);
    

        void serialize_struct(VkPipelineFragmentShadingRateEnumStateCreateInfoNV::Builder&, VkPipelineFragmentShadingRateEnumStateCreateInfoNV);
        VkPipelineFragmentShadingRateEnumStateCreateInfoNV deserialize_struct(VkPipelineFragmentShadingRateEnumStateCreateInfoNV::Reader&);
    

        void serialize_struct(VkAccelerationStructureBuildSizesInfoKHR::Builder&, VkAccelerationStructureBuildSizesInfoKHR);
        VkAccelerationStructureBuildSizesInfoKHR deserialize_struct(VkAccelerationStructureBuildSizesInfoKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceImage2DViewOf3DFeaturesEXT::Builder&, VkPhysicalDeviceImage2DViewOf3DFeaturesEXT);
        VkPhysicalDeviceImage2DViewOf3DFeaturesEXT deserialize_struct(VkPhysicalDeviceImage2DViewOf3DFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT::Builder&, VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT);
        VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT deserialize_struct(VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT::Builder&, VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT);
        VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT deserialize_struct(VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT::Builder&, VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT);
        VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT deserialize_struct(VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT::Reader&);
    

        void serialize_struct(VkMutableDescriptorTypeListEXT::Builder&, VkMutableDescriptorTypeListEXT);
        VkMutableDescriptorTypeListEXT deserialize_struct(VkMutableDescriptorTypeListEXT::Reader&);
    

        void serialize_struct(VkMutableDescriptorTypeCreateInfoEXT::Builder&, VkMutableDescriptorTypeCreateInfoEXT);
        VkMutableDescriptorTypeCreateInfoEXT deserialize_struct(VkMutableDescriptorTypeCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDepthClipControlFeaturesEXT::Builder&, VkPhysicalDeviceDepthClipControlFeaturesEXT);
        VkPhysicalDeviceDepthClipControlFeaturesEXT deserialize_struct(VkPhysicalDeviceDepthClipControlFeaturesEXT::Reader&);
    

        void serialize_struct(VkPipelineViewportDepthClipControlCreateInfoEXT::Builder&, VkPipelineViewportDepthClipControlCreateInfoEXT);
        VkPipelineViewportDepthClipControlCreateInfoEXT deserialize_struct(VkPipelineViewportDepthClipControlCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT::Builder&, VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT);
        VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT deserialize_struct(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceExternalMemoryRDMAFeaturesNV::Builder&, VkPhysicalDeviceExternalMemoryRDMAFeaturesNV);
        VkPhysicalDeviceExternalMemoryRDMAFeaturesNV deserialize_struct(VkPhysicalDeviceExternalMemoryRDMAFeaturesNV::Reader&);
    

        void serialize_struct(VkVertexInputBindingDescription2EXT::Builder&, VkVertexInputBindingDescription2EXT);
        VkVertexInputBindingDescription2EXT deserialize_struct(VkVertexInputBindingDescription2EXT::Reader&);
    

        void serialize_struct(VkVertexInputAttributeDescription2EXT::Builder&, VkVertexInputAttributeDescription2EXT);
        VkVertexInputAttributeDescription2EXT deserialize_struct(VkVertexInputAttributeDescription2EXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceColorWriteEnableFeaturesEXT::Builder&, VkPhysicalDeviceColorWriteEnableFeaturesEXT);
        VkPhysicalDeviceColorWriteEnableFeaturesEXT deserialize_struct(VkPhysicalDeviceColorWriteEnableFeaturesEXT::Reader&);
    

        void serialize_struct(VkPipelineColorWriteCreateInfoEXT::Builder&, VkPipelineColorWriteCreateInfoEXT);
        VkPipelineColorWriteCreateInfoEXT deserialize_struct(VkPipelineColorWriteCreateInfoEXT::Reader&);
    

        void serialize_struct(VkMemoryBarrier2::Builder&, VkMemoryBarrier2);
        VkMemoryBarrier2 deserialize_struct(VkMemoryBarrier2::Reader&);
    

        void serialize_struct(VkImageMemoryBarrier2::Builder&, VkImageMemoryBarrier2);
        VkImageMemoryBarrier2 deserialize_struct(VkImageMemoryBarrier2::Reader&);
    

        void serialize_struct(VkBufferMemoryBarrier2::Builder&, VkBufferMemoryBarrier2);
        VkBufferMemoryBarrier2 deserialize_struct(VkBufferMemoryBarrier2::Reader&);
    

        void serialize_struct(VkDependencyInfo::Builder&, VkDependencyInfo);
        VkDependencyInfo deserialize_struct(VkDependencyInfo::Reader&);
    

        void serialize_struct(VkSemaphoreSubmitInfo::Builder&, VkSemaphoreSubmitInfo);
        VkSemaphoreSubmitInfo deserialize_struct(VkSemaphoreSubmitInfo::Reader&);
    

        void serialize_struct(VkCommandBufferSubmitInfo::Builder&, VkCommandBufferSubmitInfo);
        VkCommandBufferSubmitInfo deserialize_struct(VkCommandBufferSubmitInfo::Reader&);
    

        void serialize_struct(VkSubmitInfo2::Builder&, VkSubmitInfo2);
        VkSubmitInfo2 deserialize_struct(VkSubmitInfo2::Reader&);
    

        void serialize_struct(VkQueueFamilyCheckpointProperties2NV::Builder&, VkQueueFamilyCheckpointProperties2NV);
        VkQueueFamilyCheckpointProperties2NV deserialize_struct(VkQueueFamilyCheckpointProperties2NV::Reader&);
    

        void serialize_struct(VkCheckpointData2NV::Builder&, VkCheckpointData2NV);
        VkCheckpointData2NV deserialize_struct(VkCheckpointData2NV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceSynchronization2Features::Builder&, VkPhysicalDeviceSynchronization2Features);
        VkPhysicalDeviceSynchronization2Features deserialize_struct(VkPhysicalDeviceSynchronization2Features::Reader&);
    

        void serialize_struct(VkPhysicalDeviceHostImageCopyFeaturesEXT::Builder&, VkPhysicalDeviceHostImageCopyFeaturesEXT);
        VkPhysicalDeviceHostImageCopyFeaturesEXT deserialize_struct(VkPhysicalDeviceHostImageCopyFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceHostImageCopyPropertiesEXT::Builder&, VkPhysicalDeviceHostImageCopyPropertiesEXT);
        VkPhysicalDeviceHostImageCopyPropertiesEXT deserialize_struct(VkPhysicalDeviceHostImageCopyPropertiesEXT::Reader&);
    

        void serialize_struct(VkMemoryToImageCopyEXT::Builder&, VkMemoryToImageCopyEXT);
        VkMemoryToImageCopyEXT deserialize_struct(VkMemoryToImageCopyEXT::Reader&);
    

        void serialize_struct(VkImageToMemoryCopyEXT::Builder&, VkImageToMemoryCopyEXT);
        VkImageToMemoryCopyEXT deserialize_struct(VkImageToMemoryCopyEXT::Reader&);
    

        void serialize_struct(VkCopyMemoryToImageInfoEXT::Builder&, VkCopyMemoryToImageInfoEXT);
        VkCopyMemoryToImageInfoEXT deserialize_struct(VkCopyMemoryToImageInfoEXT::Reader&);
    

        void serialize_struct(VkCopyImageToMemoryInfoEXT::Builder&, VkCopyImageToMemoryInfoEXT);
        VkCopyImageToMemoryInfoEXT deserialize_struct(VkCopyImageToMemoryInfoEXT::Reader&);
    

        void serialize_struct(VkCopyImageToImageInfoEXT::Builder&, VkCopyImageToImageInfoEXT);
        VkCopyImageToImageInfoEXT deserialize_struct(VkCopyImageToImageInfoEXT::Reader&);
    

        void serialize_struct(VkHostImageLayoutTransitionInfoEXT::Builder&, VkHostImageLayoutTransitionInfoEXT);
        VkHostImageLayoutTransitionInfoEXT deserialize_struct(VkHostImageLayoutTransitionInfoEXT::Reader&);
    

        void serialize_struct(VkSubresourceHostMemcpySizeEXT::Builder&, VkSubresourceHostMemcpySizeEXT);
        VkSubresourceHostMemcpySizeEXT deserialize_struct(VkSubresourceHostMemcpySizeEXT::Reader&);
    

        void serialize_struct(VkHostImageCopyDevicePerformanceQueryEXT::Builder&, VkHostImageCopyDevicePerformanceQueryEXT);
        VkHostImageCopyDevicePerformanceQueryEXT deserialize_struct(VkHostImageCopyDevicePerformanceQueryEXT::Reader&);
    

        void serialize_struct(VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT::Builder&, VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT);
        VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT deserialize_struct(VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceLegacyDitheringFeaturesEXT::Builder&, VkPhysicalDeviceLegacyDitheringFeaturesEXT);
        VkPhysicalDeviceLegacyDitheringFeaturesEXT deserialize_struct(VkPhysicalDeviceLegacyDitheringFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT::Builder&, VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT);
        VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT deserialize_struct(VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT::Reader&);
    

        void serialize_struct(VkSubpassResolvePerformanceQueryEXT::Builder&, VkSubpassResolvePerformanceQueryEXT);
        VkSubpassResolvePerformanceQueryEXT deserialize_struct(VkSubpassResolvePerformanceQueryEXT::Reader&);
    

        void serialize_struct(VkMultisampledRenderToSingleSampledInfoEXT::Builder&, VkMultisampledRenderToSingleSampledInfoEXT);
        VkMultisampledRenderToSingleSampledInfoEXT deserialize_struct(VkMultisampledRenderToSingleSampledInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDevicePipelineProtectedAccessFeaturesEXT::Builder&, VkPhysicalDevicePipelineProtectedAccessFeaturesEXT);
        VkPhysicalDevicePipelineProtectedAccessFeaturesEXT deserialize_struct(VkPhysicalDevicePipelineProtectedAccessFeaturesEXT::Reader&);
    

        void serialize_struct(VkQueueFamilyVideoPropertiesKHR::Builder&, VkQueueFamilyVideoPropertiesKHR);
        VkQueueFamilyVideoPropertiesKHR deserialize_struct(VkQueueFamilyVideoPropertiesKHR::Reader&);
    

        void serialize_struct(VkQueueFamilyQueryResultStatusPropertiesKHR::Builder&, VkQueueFamilyQueryResultStatusPropertiesKHR);
        VkQueueFamilyQueryResultStatusPropertiesKHR deserialize_struct(VkQueueFamilyQueryResultStatusPropertiesKHR::Reader&);
    

        void serialize_struct(VkVideoProfileListInfoKHR::Builder&, VkVideoProfileListInfoKHR);
        VkVideoProfileListInfoKHR deserialize_struct(VkVideoProfileListInfoKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceVideoFormatInfoKHR::Builder&, VkPhysicalDeviceVideoFormatInfoKHR);
        VkPhysicalDeviceVideoFormatInfoKHR deserialize_struct(VkPhysicalDeviceVideoFormatInfoKHR::Reader&);
    

        void serialize_struct(VkVideoFormatPropertiesKHR::Builder&, VkVideoFormatPropertiesKHR);
        VkVideoFormatPropertiesKHR deserialize_struct(VkVideoFormatPropertiesKHR::Reader&);
    

        void serialize_struct(VkVideoProfileInfoKHR::Builder&, VkVideoProfileInfoKHR);
        VkVideoProfileInfoKHR deserialize_struct(VkVideoProfileInfoKHR::Reader&);
    

        void serialize_struct(VkVideoCapabilitiesKHR::Builder&, VkVideoCapabilitiesKHR);
        VkVideoCapabilitiesKHR deserialize_struct(VkVideoCapabilitiesKHR::Reader&);
    

        void serialize_struct(VkVideoSessionMemoryRequirementsKHR::Builder&, VkVideoSessionMemoryRequirementsKHR);
        VkVideoSessionMemoryRequirementsKHR deserialize_struct(VkVideoSessionMemoryRequirementsKHR::Reader&);
    

        void serialize_struct(VkBindVideoSessionMemoryInfoKHR::Builder&, VkBindVideoSessionMemoryInfoKHR);
        VkBindVideoSessionMemoryInfoKHR deserialize_struct(VkBindVideoSessionMemoryInfoKHR::Reader&);
    

        void serialize_struct(VkVideoPictureResourceInfoKHR::Builder&, VkVideoPictureResourceInfoKHR);
        VkVideoPictureResourceInfoKHR deserialize_struct(VkVideoPictureResourceInfoKHR::Reader&);
    

        void serialize_struct(VkVideoReferenceSlotInfoKHR::Builder&, VkVideoReferenceSlotInfoKHR);
        VkVideoReferenceSlotInfoKHR deserialize_struct(VkVideoReferenceSlotInfoKHR::Reader&);
    

        void serialize_struct(VkVideoDecodeCapabilitiesKHR::Builder&, VkVideoDecodeCapabilitiesKHR);
        VkVideoDecodeCapabilitiesKHR deserialize_struct(VkVideoDecodeCapabilitiesKHR::Reader&);
    

        void serialize_struct(VkVideoDecodeUsageInfoKHR::Builder&, VkVideoDecodeUsageInfoKHR);
        VkVideoDecodeUsageInfoKHR deserialize_struct(VkVideoDecodeUsageInfoKHR::Reader&);
    

        void serialize_struct(VkVideoDecodeInfoKHR::Builder&, VkVideoDecodeInfoKHR);
        VkVideoDecodeInfoKHR deserialize_struct(VkVideoDecodeInfoKHR::Reader&);
    

        void serialize_struct(VkVideoDecodeH264ProfileInfoKHR::Builder&, VkVideoDecodeH264ProfileInfoKHR);
        VkVideoDecodeH264ProfileInfoKHR deserialize_struct(VkVideoDecodeH264ProfileInfoKHR::Reader&);
    

        void serialize_struct(VkVideoDecodeH264CapabilitiesKHR::Builder&, VkVideoDecodeH264CapabilitiesKHR);
        VkVideoDecodeH264CapabilitiesKHR deserialize_struct(VkVideoDecodeH264CapabilitiesKHR::Reader&);
    

        void serialize_struct(VkVideoDecodeH264SessionParametersAddInfoKHR::Builder&, VkVideoDecodeH264SessionParametersAddInfoKHR);
        VkVideoDecodeH264SessionParametersAddInfoKHR deserialize_struct(VkVideoDecodeH264SessionParametersAddInfoKHR::Reader&);
    

        void serialize_struct(VkVideoDecodeH264SessionParametersCreateInfoKHR::Builder&, VkVideoDecodeH264SessionParametersCreateInfoKHR);
        VkVideoDecodeH264SessionParametersCreateInfoKHR deserialize_struct(VkVideoDecodeH264SessionParametersCreateInfoKHR::Reader&);
    

        void serialize_struct(VkVideoDecodeH264PictureInfoKHR::Builder&, VkVideoDecodeH264PictureInfoKHR);
        VkVideoDecodeH264PictureInfoKHR deserialize_struct(VkVideoDecodeH264PictureInfoKHR::Reader&);
    

        void serialize_struct(VkVideoDecodeH264DpbSlotInfoKHR::Builder&, VkVideoDecodeH264DpbSlotInfoKHR);
        VkVideoDecodeH264DpbSlotInfoKHR deserialize_struct(VkVideoDecodeH264DpbSlotInfoKHR::Reader&);
    

        void serialize_struct(VkVideoDecodeH265ProfileInfoKHR::Builder&, VkVideoDecodeH265ProfileInfoKHR);
        VkVideoDecodeH265ProfileInfoKHR deserialize_struct(VkVideoDecodeH265ProfileInfoKHR::Reader&);
    

        void serialize_struct(VkVideoDecodeH265CapabilitiesKHR::Builder&, VkVideoDecodeH265CapabilitiesKHR);
        VkVideoDecodeH265CapabilitiesKHR deserialize_struct(VkVideoDecodeH265CapabilitiesKHR::Reader&);
    

        void serialize_struct(VkVideoDecodeH265SessionParametersAddInfoKHR::Builder&, VkVideoDecodeH265SessionParametersAddInfoKHR);
        VkVideoDecodeH265SessionParametersAddInfoKHR deserialize_struct(VkVideoDecodeH265SessionParametersAddInfoKHR::Reader&);
    

        void serialize_struct(VkVideoDecodeH265SessionParametersCreateInfoKHR::Builder&, VkVideoDecodeH265SessionParametersCreateInfoKHR);
        VkVideoDecodeH265SessionParametersCreateInfoKHR deserialize_struct(VkVideoDecodeH265SessionParametersCreateInfoKHR::Reader&);
    

        void serialize_struct(VkVideoDecodeH265PictureInfoKHR::Builder&, VkVideoDecodeH265PictureInfoKHR);
        VkVideoDecodeH265PictureInfoKHR deserialize_struct(VkVideoDecodeH265PictureInfoKHR::Reader&);
    

        void serialize_struct(VkVideoDecodeH265DpbSlotInfoKHR::Builder&, VkVideoDecodeH265DpbSlotInfoKHR);
        VkVideoDecodeH265DpbSlotInfoKHR deserialize_struct(VkVideoDecodeH265DpbSlotInfoKHR::Reader&);
    

        void serialize_struct(VkVideoSessionCreateInfoKHR::Builder&, VkVideoSessionCreateInfoKHR);
        VkVideoSessionCreateInfoKHR deserialize_struct(VkVideoSessionCreateInfoKHR::Reader&);
    

        void serialize_struct(VkVideoSessionParametersCreateInfoKHR::Builder&, VkVideoSessionParametersCreateInfoKHR);
        VkVideoSessionParametersCreateInfoKHR deserialize_struct(VkVideoSessionParametersCreateInfoKHR::Reader&);
    

        void serialize_struct(VkVideoSessionParametersUpdateInfoKHR::Builder&, VkVideoSessionParametersUpdateInfoKHR);
        VkVideoSessionParametersUpdateInfoKHR deserialize_struct(VkVideoSessionParametersUpdateInfoKHR::Reader&);
    

        void serialize_struct(VkVideoBeginCodingInfoKHR::Builder&, VkVideoBeginCodingInfoKHR);
        VkVideoBeginCodingInfoKHR deserialize_struct(VkVideoBeginCodingInfoKHR::Reader&);
    

        void serialize_struct(VkVideoEndCodingInfoKHR::Builder&, VkVideoEndCodingInfoKHR);
        VkVideoEndCodingInfoKHR deserialize_struct(VkVideoEndCodingInfoKHR::Reader&);
    

        void serialize_struct(VkVideoCodingControlInfoKHR::Builder&, VkVideoCodingControlInfoKHR);
        VkVideoCodingControlInfoKHR deserialize_struct(VkVideoCodingControlInfoKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceInheritedViewportScissorFeaturesNV::Builder&, VkPhysicalDeviceInheritedViewportScissorFeaturesNV);
        VkPhysicalDeviceInheritedViewportScissorFeaturesNV deserialize_struct(VkPhysicalDeviceInheritedViewportScissorFeaturesNV::Reader&);
    

        void serialize_struct(VkCommandBufferInheritanceViewportScissorInfoNV::Builder&, VkCommandBufferInheritanceViewportScissorInfoNV);
        VkCommandBufferInheritanceViewportScissorInfoNV deserialize_struct(VkCommandBufferInheritanceViewportScissorInfoNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT::Builder&, VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT);
        VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT deserialize_struct(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceProvokingVertexFeaturesEXT::Builder&, VkPhysicalDeviceProvokingVertexFeaturesEXT);
        VkPhysicalDeviceProvokingVertexFeaturesEXT deserialize_struct(VkPhysicalDeviceProvokingVertexFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceProvokingVertexPropertiesEXT::Builder&, VkPhysicalDeviceProvokingVertexPropertiesEXT);
        VkPhysicalDeviceProvokingVertexPropertiesEXT deserialize_struct(VkPhysicalDeviceProvokingVertexPropertiesEXT::Reader&);
    

        void serialize_struct(VkPipelineRasterizationProvokingVertexStateCreateInfoEXT::Builder&, VkPipelineRasterizationProvokingVertexStateCreateInfoEXT);
        VkPipelineRasterizationProvokingVertexStateCreateInfoEXT deserialize_struct(VkPipelineRasterizationProvokingVertexStateCreateInfoEXT::Reader&);
    

        void serialize_struct(VkCuModuleCreateInfoNVX::Builder&, VkCuModuleCreateInfoNVX);
        VkCuModuleCreateInfoNVX deserialize_struct(VkCuModuleCreateInfoNVX::Reader&);
    

        void serialize_struct(VkCuFunctionCreateInfoNVX::Builder&, VkCuFunctionCreateInfoNVX);
        VkCuFunctionCreateInfoNVX deserialize_struct(VkCuFunctionCreateInfoNVX::Reader&);
    

        void serialize_struct(VkCuLaunchInfoNVX::Builder&, VkCuLaunchInfoNVX);
        VkCuLaunchInfoNVX deserialize_struct(VkCuLaunchInfoNVX::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDescriptorBufferFeaturesEXT::Builder&, VkPhysicalDeviceDescriptorBufferFeaturesEXT);
        VkPhysicalDeviceDescriptorBufferFeaturesEXT deserialize_struct(VkPhysicalDeviceDescriptorBufferFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDescriptorBufferPropertiesEXT::Builder&, VkPhysicalDeviceDescriptorBufferPropertiesEXT);
        VkPhysicalDeviceDescriptorBufferPropertiesEXT deserialize_struct(VkPhysicalDeviceDescriptorBufferPropertiesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::Builder&, VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT);
        VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT deserialize_struct(VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::Reader&);
    

        void serialize_struct(VkDescriptorAddressInfoEXT::Builder&, VkDescriptorAddressInfoEXT);
        VkDescriptorAddressInfoEXT deserialize_struct(VkDescriptorAddressInfoEXT::Reader&);
    

        void serialize_struct(VkDescriptorBufferBindingInfoEXT::Builder&, VkDescriptorBufferBindingInfoEXT);
        VkDescriptorBufferBindingInfoEXT deserialize_struct(VkDescriptorBufferBindingInfoEXT::Reader&);
    

        void serialize_struct(VkDescriptorBufferBindingPushDescriptorBufferHandleEXT::Builder&, VkDescriptorBufferBindingPushDescriptorBufferHandleEXT);
        VkDescriptorBufferBindingPushDescriptorBufferHandleEXT deserialize_struct(VkDescriptorBufferBindingPushDescriptorBufferHandleEXT::Reader&);
    

        void serialize_struct(VkDescriptorDataEXT::Builder&, VkDescriptorDataEXT);
        VkDescriptorDataEXT deserialize_struct(VkDescriptorDataEXT::Reader&);
    

        void serialize_struct(VkDescriptorGetInfoEXT::Builder&, VkDescriptorGetInfoEXT);
        VkDescriptorGetInfoEXT deserialize_struct(VkDescriptorGetInfoEXT::Reader&);
    

        void serialize_struct(VkBufferCaptureDescriptorDataInfoEXT::Builder&, VkBufferCaptureDescriptorDataInfoEXT);
        VkBufferCaptureDescriptorDataInfoEXT deserialize_struct(VkBufferCaptureDescriptorDataInfoEXT::Reader&);
    

        void serialize_struct(VkImageCaptureDescriptorDataInfoEXT::Builder&, VkImageCaptureDescriptorDataInfoEXT);
        VkImageCaptureDescriptorDataInfoEXT deserialize_struct(VkImageCaptureDescriptorDataInfoEXT::Reader&);
    

        void serialize_struct(VkImageViewCaptureDescriptorDataInfoEXT::Builder&, VkImageViewCaptureDescriptorDataInfoEXT);
        VkImageViewCaptureDescriptorDataInfoEXT deserialize_struct(VkImageViewCaptureDescriptorDataInfoEXT::Reader&);
    

        void serialize_struct(VkSamplerCaptureDescriptorDataInfoEXT::Builder&, VkSamplerCaptureDescriptorDataInfoEXT);
        VkSamplerCaptureDescriptorDataInfoEXT deserialize_struct(VkSamplerCaptureDescriptorDataInfoEXT::Reader&);
    

        void serialize_struct(VkAccelerationStructureCaptureDescriptorDataInfoEXT::Builder&, VkAccelerationStructureCaptureDescriptorDataInfoEXT);
        VkAccelerationStructureCaptureDescriptorDataInfoEXT deserialize_struct(VkAccelerationStructureCaptureDescriptorDataInfoEXT::Reader&);
    

        void serialize_struct(VkOpaqueCaptureDescriptorDataCreateInfoEXT::Builder&, VkOpaqueCaptureDescriptorDataCreateInfoEXT);
        VkOpaqueCaptureDescriptorDataCreateInfoEXT deserialize_struct(VkOpaqueCaptureDescriptorDataCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderIntegerDotProductFeatures::Builder&, VkPhysicalDeviceShaderIntegerDotProductFeatures);
        VkPhysicalDeviceShaderIntegerDotProductFeatures deserialize_struct(VkPhysicalDeviceShaderIntegerDotProductFeatures::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderIntegerDotProductProperties::Builder&, VkPhysicalDeviceShaderIntegerDotProductProperties);
        VkPhysicalDeviceShaderIntegerDotProductProperties deserialize_struct(VkPhysicalDeviceShaderIntegerDotProductProperties::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDrmPropertiesEXT::Builder&, VkPhysicalDeviceDrmPropertiesEXT);
        VkPhysicalDeviceDrmPropertiesEXT deserialize_struct(VkPhysicalDeviceDrmPropertiesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR::Builder&, VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR);
        VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR deserialize_struct(VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR::Builder&, VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR);
        VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR deserialize_struct(VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceRayTracingMotionBlurFeaturesNV::Builder&, VkPhysicalDeviceRayTracingMotionBlurFeaturesNV);
        VkPhysicalDeviceRayTracingMotionBlurFeaturesNV deserialize_struct(VkPhysicalDeviceRayTracingMotionBlurFeaturesNV::Reader&);
    

        void serialize_struct(VkAccelerationStructureGeometryMotionTrianglesDataNV::Builder&, VkAccelerationStructureGeometryMotionTrianglesDataNV);
        VkAccelerationStructureGeometryMotionTrianglesDataNV deserialize_struct(VkAccelerationStructureGeometryMotionTrianglesDataNV::Reader&);
    

        void serialize_struct(VkAccelerationStructureMotionInfoNV::Builder&, VkAccelerationStructureMotionInfoNV);
        VkAccelerationStructureMotionInfoNV deserialize_struct(VkAccelerationStructureMotionInfoNV::Reader&);
    

        void serialize_struct(VkSRTDataNV::Builder&, VkSRTDataNV);
        VkSRTDataNV deserialize_struct(VkSRTDataNV::Reader&);
    

        void serialize_struct(VkAccelerationStructureSRTMotionInstanceNV::Builder&, VkAccelerationStructureSRTMotionInstanceNV);
        VkAccelerationStructureSRTMotionInstanceNV deserialize_struct(VkAccelerationStructureSRTMotionInstanceNV::Reader&);
    

        void serialize_struct(VkAccelerationStructureMatrixMotionInstanceNV::Builder&, VkAccelerationStructureMatrixMotionInstanceNV);
        VkAccelerationStructureMatrixMotionInstanceNV deserialize_struct(VkAccelerationStructureMatrixMotionInstanceNV::Reader&);
    

        void serialize_struct(VkAccelerationStructureMotionInstanceDataNV::Builder&, VkAccelerationStructureMotionInstanceDataNV);
        VkAccelerationStructureMotionInstanceDataNV deserialize_struct(VkAccelerationStructureMotionInstanceDataNV::Reader&);
    

        void serialize_struct(VkAccelerationStructureMotionInstanceNV::Builder&, VkAccelerationStructureMotionInstanceNV);
        VkAccelerationStructureMotionInstanceNV deserialize_struct(VkAccelerationStructureMotionInstanceNV::Reader&);
    

        void serialize_struct(VkMemoryGetRemoteAddressInfoNV::Builder&, VkMemoryGetRemoteAddressInfoNV);
        VkMemoryGetRemoteAddressInfoNV deserialize_struct(VkMemoryGetRemoteAddressInfoNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT::Builder&, VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT);
        VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT deserialize_struct(VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT::Reader&);
    

        void serialize_struct(VkFormatProperties3::Builder&, VkFormatProperties3);
        VkFormatProperties3 deserialize_struct(VkFormatProperties3::Reader&);
    

        void serialize_struct(VkDrmFormatModifierPropertiesList2EXT::Builder&, VkDrmFormatModifierPropertiesList2EXT);
        VkDrmFormatModifierPropertiesList2EXT deserialize_struct(VkDrmFormatModifierPropertiesList2EXT::Reader&);
    

        void serialize_struct(VkDrmFormatModifierProperties2EXT::Builder&, VkDrmFormatModifierProperties2EXT);
        VkDrmFormatModifierProperties2EXT deserialize_struct(VkDrmFormatModifierProperties2EXT::Reader&);
    

        void serialize_struct(VkPipelineRenderingCreateInfo::Builder&, VkPipelineRenderingCreateInfo);
        VkPipelineRenderingCreateInfo deserialize_struct(VkPipelineRenderingCreateInfo::Reader&);
    

        void serialize_struct(VkRenderingInfo::Builder&, VkRenderingInfo);
        VkRenderingInfo deserialize_struct(VkRenderingInfo::Reader&);
    

        void serialize_struct(VkRenderingAttachmentInfo::Builder&, VkRenderingAttachmentInfo);
        VkRenderingAttachmentInfo deserialize_struct(VkRenderingAttachmentInfo::Reader&);
    

        void serialize_struct(VkRenderingFragmentShadingRateAttachmentInfoKHR::Builder&, VkRenderingFragmentShadingRateAttachmentInfoKHR);
        VkRenderingFragmentShadingRateAttachmentInfoKHR deserialize_struct(VkRenderingFragmentShadingRateAttachmentInfoKHR::Reader&);
    

        void serialize_struct(VkRenderingFragmentDensityMapAttachmentInfoEXT::Builder&, VkRenderingFragmentDensityMapAttachmentInfoEXT);
        VkRenderingFragmentDensityMapAttachmentInfoEXT deserialize_struct(VkRenderingFragmentDensityMapAttachmentInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDynamicRenderingFeatures::Builder&, VkPhysicalDeviceDynamicRenderingFeatures);
        VkPhysicalDeviceDynamicRenderingFeatures deserialize_struct(VkPhysicalDeviceDynamicRenderingFeatures::Reader&);
    

        void serialize_struct(VkCommandBufferInheritanceRenderingInfo::Builder&, VkCommandBufferInheritanceRenderingInfo);
        VkCommandBufferInheritanceRenderingInfo deserialize_struct(VkCommandBufferInheritanceRenderingInfo::Reader&);
    

        void serialize_struct(VkAttachmentSampleCountInfoAMD::Builder&, VkAttachmentSampleCountInfoAMD);
        VkAttachmentSampleCountInfoAMD deserialize_struct(VkAttachmentSampleCountInfoAMD::Reader&);
    

        void serialize_struct(VkMultiviewPerViewAttributesInfoNVX::Builder&, VkMultiviewPerViewAttributesInfoNVX);
        VkMultiviewPerViewAttributesInfoNVX deserialize_struct(VkMultiviewPerViewAttributesInfoNVX::Reader&);
    

        void serialize_struct(VkPhysicalDeviceImageViewMinLodFeaturesEXT::Builder&, VkPhysicalDeviceImageViewMinLodFeaturesEXT);
        VkPhysicalDeviceImageViewMinLodFeaturesEXT deserialize_struct(VkPhysicalDeviceImageViewMinLodFeaturesEXT::Reader&);
    

        void serialize_struct(VkImageViewMinLodCreateInfoEXT::Builder&, VkImageViewMinLodCreateInfoEXT);
        VkImageViewMinLodCreateInfoEXT deserialize_struct(VkImageViewMinLodCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT::Builder&, VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT);
        VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT deserialize_struct(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceLinearColorAttachmentFeaturesNV::Builder&, VkPhysicalDeviceLinearColorAttachmentFeaturesNV);
        VkPhysicalDeviceLinearColorAttachmentFeaturesNV deserialize_struct(VkPhysicalDeviceLinearColorAttachmentFeaturesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT::Builder&, VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT);
        VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT deserialize_struct(VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::Builder&, VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT);
        VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT deserialize_struct(VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::Reader&);
    

        void serialize_struct(VkGraphicsPipelineLibraryCreateInfoEXT::Builder&, VkGraphicsPipelineLibraryCreateInfoEXT);
        VkGraphicsPipelineLibraryCreateInfoEXT deserialize_struct(VkGraphicsPipelineLibraryCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE::Builder&, VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE);
        VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE deserialize_struct(VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE::Reader&);
    

        void serialize_struct(VkDescriptorSetBindingReferenceVALVE::Builder&, VkDescriptorSetBindingReferenceVALVE);
        VkDescriptorSetBindingReferenceVALVE deserialize_struct(VkDescriptorSetBindingReferenceVALVE::Reader&);
    

        void serialize_struct(VkDescriptorSetLayoutHostMappingInfoVALVE::Builder&, VkDescriptorSetLayoutHostMappingInfoVALVE);
        VkDescriptorSetLayoutHostMappingInfoVALVE deserialize_struct(VkDescriptorSetLayoutHostMappingInfoVALVE::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT::Builder&, VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT);
        VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT deserialize_struct(VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT::Builder&, VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT);
        VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT deserialize_struct(VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT::Reader&);
    

        void serialize_struct(VkPipelineShaderStageModuleIdentifierCreateInfoEXT::Builder&, VkPipelineShaderStageModuleIdentifierCreateInfoEXT);
        VkPipelineShaderStageModuleIdentifierCreateInfoEXT deserialize_struct(VkPipelineShaderStageModuleIdentifierCreateInfoEXT::Reader&);
    

        void serialize_struct(VkShaderModuleIdentifierEXT::Builder&, VkShaderModuleIdentifierEXT);
        VkShaderModuleIdentifierEXT deserialize_struct(VkShaderModuleIdentifierEXT::Reader&);
    

        void serialize_struct(VkImageCompressionControlEXT::Builder&, VkImageCompressionControlEXT);
        VkImageCompressionControlEXT deserialize_struct(VkImageCompressionControlEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceImageCompressionControlFeaturesEXT::Builder&, VkPhysicalDeviceImageCompressionControlFeaturesEXT);
        VkPhysicalDeviceImageCompressionControlFeaturesEXT deserialize_struct(VkPhysicalDeviceImageCompressionControlFeaturesEXT::Reader&);
    

        void serialize_struct(VkImageCompressionPropertiesEXT::Builder&, VkImageCompressionPropertiesEXT);
        VkImageCompressionPropertiesEXT deserialize_struct(VkImageCompressionPropertiesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT::Builder&, VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT);
        VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT deserialize_struct(VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT::Reader&);
    

        void serialize_struct(VkImageSubresource2KHR::Builder&, VkImageSubresource2KHR);
        VkImageSubresource2KHR deserialize_struct(VkImageSubresource2KHR::Reader&);
    

        void serialize_struct(VkSubresourceLayout2KHR::Builder&, VkSubresourceLayout2KHR);
        VkSubresourceLayout2KHR deserialize_struct(VkSubresourceLayout2KHR::Reader&);
    

        void serialize_struct(VkRenderPassCreationControlEXT::Builder&, VkRenderPassCreationControlEXT);
        VkRenderPassCreationControlEXT deserialize_struct(VkRenderPassCreationControlEXT::Reader&);
    

        void serialize_struct(VkRenderPassCreationFeedbackInfoEXT::Builder&, VkRenderPassCreationFeedbackInfoEXT);
        VkRenderPassCreationFeedbackInfoEXT deserialize_struct(VkRenderPassCreationFeedbackInfoEXT::Reader&);
    

        void serialize_struct(VkRenderPassCreationFeedbackCreateInfoEXT::Builder&, VkRenderPassCreationFeedbackCreateInfoEXT);
        VkRenderPassCreationFeedbackCreateInfoEXT deserialize_struct(VkRenderPassCreationFeedbackCreateInfoEXT::Reader&);
    

        void serialize_struct(VkRenderPassSubpassFeedbackInfoEXT::Builder&, VkRenderPassSubpassFeedbackInfoEXT);
        VkRenderPassSubpassFeedbackInfoEXT deserialize_struct(VkRenderPassSubpassFeedbackInfoEXT::Reader&);
    

        void serialize_struct(VkRenderPassSubpassFeedbackCreateInfoEXT::Builder&, VkRenderPassSubpassFeedbackCreateInfoEXT);
        VkRenderPassSubpassFeedbackCreateInfoEXT deserialize_struct(VkRenderPassSubpassFeedbackCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT::Builder&, VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT);
        VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT deserialize_struct(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT::Reader&);
    

        void serialize_struct(VkMicromapBuildInfoEXT::Builder&, VkMicromapBuildInfoEXT);
        VkMicromapBuildInfoEXT deserialize_struct(VkMicromapBuildInfoEXT::Reader&);
    

        void serialize_struct(VkMicromapCreateInfoEXT::Builder&, VkMicromapCreateInfoEXT);
        VkMicromapCreateInfoEXT deserialize_struct(VkMicromapCreateInfoEXT::Reader&);
    

        void serialize_struct(VkMicromapVersionInfoEXT::Builder&, VkMicromapVersionInfoEXT);
        VkMicromapVersionInfoEXT deserialize_struct(VkMicromapVersionInfoEXT::Reader&);
    

        void serialize_struct(VkCopyMicromapInfoEXT::Builder&, VkCopyMicromapInfoEXT);
        VkCopyMicromapInfoEXT deserialize_struct(VkCopyMicromapInfoEXT::Reader&);
    

        void serialize_struct(VkCopyMicromapToMemoryInfoEXT::Builder&, VkCopyMicromapToMemoryInfoEXT);
        VkCopyMicromapToMemoryInfoEXT deserialize_struct(VkCopyMicromapToMemoryInfoEXT::Reader&);
    

        void serialize_struct(VkCopyMemoryToMicromapInfoEXT::Builder&, VkCopyMemoryToMicromapInfoEXT);
        VkCopyMemoryToMicromapInfoEXT deserialize_struct(VkCopyMemoryToMicromapInfoEXT::Reader&);
    

        void serialize_struct(VkMicromapBuildSizesInfoEXT::Builder&, VkMicromapBuildSizesInfoEXT);
        VkMicromapBuildSizesInfoEXT deserialize_struct(VkMicromapBuildSizesInfoEXT::Reader&);
    

        void serialize_struct(VkMicromapUsageEXT::Builder&, VkMicromapUsageEXT);
        VkMicromapUsageEXT deserialize_struct(VkMicromapUsageEXT::Reader&);
    

        void serialize_struct(VkMicromapTriangleEXT::Builder&, VkMicromapTriangleEXT);
        VkMicromapTriangleEXT deserialize_struct(VkMicromapTriangleEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceOpacityMicromapFeaturesEXT::Builder&, VkPhysicalDeviceOpacityMicromapFeaturesEXT);
        VkPhysicalDeviceOpacityMicromapFeaturesEXT deserialize_struct(VkPhysicalDeviceOpacityMicromapFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceOpacityMicromapPropertiesEXT::Builder&, VkPhysicalDeviceOpacityMicromapPropertiesEXT);
        VkPhysicalDeviceOpacityMicromapPropertiesEXT deserialize_struct(VkPhysicalDeviceOpacityMicromapPropertiesEXT::Reader&);
    

        void serialize_struct(VkAccelerationStructureTrianglesOpacityMicromapEXT::Builder&, VkAccelerationStructureTrianglesOpacityMicromapEXT);
        VkAccelerationStructureTrianglesOpacityMicromapEXT deserialize_struct(VkAccelerationStructureTrianglesOpacityMicromapEXT::Reader&);
    

        void serialize_struct(VkPipelinePropertiesIdentifierEXT::Builder&, VkPipelinePropertiesIdentifierEXT);
        VkPipelinePropertiesIdentifierEXT deserialize_struct(VkPipelinePropertiesIdentifierEXT::Reader&);
    

        void serialize_struct(VkPhysicalDevicePipelinePropertiesFeaturesEXT::Builder&, VkPhysicalDevicePipelinePropertiesFeaturesEXT);
        VkPhysicalDevicePipelinePropertiesFeaturesEXT deserialize_struct(VkPhysicalDevicePipelinePropertiesFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD::Builder&, VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD);
        VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD deserialize_struct(VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD::Reader&);
    

        void serialize_struct(VkExternalMemoryAcquireUnmodifiedEXT::Builder&, VkExternalMemoryAcquireUnmodifiedEXT);
        VkExternalMemoryAcquireUnmodifiedEXT deserialize_struct(VkExternalMemoryAcquireUnmodifiedEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT::Builder&, VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT);
        VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT deserialize_struct(VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDevicePipelineRobustnessFeaturesEXT::Builder&, VkPhysicalDevicePipelineRobustnessFeaturesEXT);
        VkPhysicalDevicePipelineRobustnessFeaturesEXT deserialize_struct(VkPhysicalDevicePipelineRobustnessFeaturesEXT::Reader&);
    

        void serialize_struct(VkPipelineRobustnessCreateInfoEXT::Builder&, VkPipelineRobustnessCreateInfoEXT);
        VkPipelineRobustnessCreateInfoEXT deserialize_struct(VkPipelineRobustnessCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDevicePipelineRobustnessPropertiesEXT::Builder&, VkPhysicalDevicePipelineRobustnessPropertiesEXT);
        VkPhysicalDevicePipelineRobustnessPropertiesEXT deserialize_struct(VkPhysicalDevicePipelineRobustnessPropertiesEXT::Reader&);
    

        void serialize_struct(VkImageViewSampleWeightCreateInfoQCOM::Builder&, VkImageViewSampleWeightCreateInfoQCOM);
        VkImageViewSampleWeightCreateInfoQCOM deserialize_struct(VkImageViewSampleWeightCreateInfoQCOM::Reader&);
    

        void serialize_struct(VkPhysicalDeviceImageProcessingFeaturesQCOM::Builder&, VkPhysicalDeviceImageProcessingFeaturesQCOM);
        VkPhysicalDeviceImageProcessingFeaturesQCOM deserialize_struct(VkPhysicalDeviceImageProcessingFeaturesQCOM::Reader&);
    

        void serialize_struct(VkPhysicalDeviceImageProcessingPropertiesQCOM::Builder&, VkPhysicalDeviceImageProcessingPropertiesQCOM);
        VkPhysicalDeviceImageProcessingPropertiesQCOM deserialize_struct(VkPhysicalDeviceImageProcessingPropertiesQCOM::Reader&);
    

        void serialize_struct(VkPhysicalDeviceTilePropertiesFeaturesQCOM::Builder&, VkPhysicalDeviceTilePropertiesFeaturesQCOM);
        VkPhysicalDeviceTilePropertiesFeaturesQCOM deserialize_struct(VkPhysicalDeviceTilePropertiesFeaturesQCOM::Reader&);
    

        void serialize_struct(VkTilePropertiesQCOM::Builder&, VkTilePropertiesQCOM);
        VkTilePropertiesQCOM deserialize_struct(VkTilePropertiesQCOM::Reader&);
    

        void serialize_struct(VkPhysicalDeviceAmigoProfilingFeaturesSEC::Builder&, VkPhysicalDeviceAmigoProfilingFeaturesSEC);
        VkPhysicalDeviceAmigoProfilingFeaturesSEC deserialize_struct(VkPhysicalDeviceAmigoProfilingFeaturesSEC::Reader&);
    

        void serialize_struct(VkAmigoProfilingSubmitInfoSEC::Builder&, VkAmigoProfilingSubmitInfoSEC);
        VkAmigoProfilingSubmitInfoSEC deserialize_struct(VkAmigoProfilingSubmitInfoSEC::Reader&);
    

        void serialize_struct(VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT::Builder&, VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT);
        VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT deserialize_struct(VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDepthClampZeroOneFeaturesEXT::Builder&, VkPhysicalDeviceDepthClampZeroOneFeaturesEXT);
        VkPhysicalDeviceDepthClampZeroOneFeaturesEXT deserialize_struct(VkPhysicalDeviceDepthClampZeroOneFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceAddressBindingReportFeaturesEXT::Builder&, VkPhysicalDeviceAddressBindingReportFeaturesEXT);
        VkPhysicalDeviceAddressBindingReportFeaturesEXT deserialize_struct(VkPhysicalDeviceAddressBindingReportFeaturesEXT::Reader&);
    

        void serialize_struct(VkDeviceAddressBindingCallbackDataEXT::Builder&, VkDeviceAddressBindingCallbackDataEXT);
        VkDeviceAddressBindingCallbackDataEXT deserialize_struct(VkDeviceAddressBindingCallbackDataEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceOpticalFlowFeaturesNV::Builder&, VkPhysicalDeviceOpticalFlowFeaturesNV);
        VkPhysicalDeviceOpticalFlowFeaturesNV deserialize_struct(VkPhysicalDeviceOpticalFlowFeaturesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceOpticalFlowPropertiesNV::Builder&, VkPhysicalDeviceOpticalFlowPropertiesNV);
        VkPhysicalDeviceOpticalFlowPropertiesNV deserialize_struct(VkPhysicalDeviceOpticalFlowPropertiesNV::Reader&);
    

        void serialize_struct(VkOpticalFlowImageFormatInfoNV::Builder&, VkOpticalFlowImageFormatInfoNV);
        VkOpticalFlowImageFormatInfoNV deserialize_struct(VkOpticalFlowImageFormatInfoNV::Reader&);
    

        void serialize_struct(VkOpticalFlowImageFormatPropertiesNV::Builder&, VkOpticalFlowImageFormatPropertiesNV);
        VkOpticalFlowImageFormatPropertiesNV deserialize_struct(VkOpticalFlowImageFormatPropertiesNV::Reader&);
    

        void serialize_struct(VkOpticalFlowSessionCreateInfoNV::Builder&, VkOpticalFlowSessionCreateInfoNV);
        VkOpticalFlowSessionCreateInfoNV deserialize_struct(VkOpticalFlowSessionCreateInfoNV::Reader&);
    

        void serialize_struct(VkOpticalFlowSessionCreatePrivateDataInfoNV::Builder&, VkOpticalFlowSessionCreatePrivateDataInfoNV);
        VkOpticalFlowSessionCreatePrivateDataInfoNV deserialize_struct(VkOpticalFlowSessionCreatePrivateDataInfoNV::Reader&);
    

        void serialize_struct(VkOpticalFlowExecuteInfoNV::Builder&, VkOpticalFlowExecuteInfoNV);
        VkOpticalFlowExecuteInfoNV deserialize_struct(VkOpticalFlowExecuteInfoNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceFaultFeaturesEXT::Builder&, VkPhysicalDeviceFaultFeaturesEXT);
        VkPhysicalDeviceFaultFeaturesEXT deserialize_struct(VkPhysicalDeviceFaultFeaturesEXT::Reader&);
    

        void serialize_struct(VkDeviceFaultAddressInfoEXT::Builder&, VkDeviceFaultAddressInfoEXT);
        VkDeviceFaultAddressInfoEXT deserialize_struct(VkDeviceFaultAddressInfoEXT::Reader&);
    

        void serialize_struct(VkDeviceFaultVendorInfoEXT::Builder&, VkDeviceFaultVendorInfoEXT);
        VkDeviceFaultVendorInfoEXT deserialize_struct(VkDeviceFaultVendorInfoEXT::Reader&);
    

        void serialize_struct(VkDeviceFaultCountsEXT::Builder&, VkDeviceFaultCountsEXT);
        VkDeviceFaultCountsEXT deserialize_struct(VkDeviceFaultCountsEXT::Reader&);
    

        void serialize_struct(VkDeviceFaultInfoEXT::Builder&, VkDeviceFaultInfoEXT);
        VkDeviceFaultInfoEXT deserialize_struct(VkDeviceFaultInfoEXT::Reader&);
    

        void serialize_struct(VkDeviceFaultVendorBinaryHeaderVersionOneEXT::Builder&, VkDeviceFaultVendorBinaryHeaderVersionOneEXT);
        VkDeviceFaultVendorBinaryHeaderVersionOneEXT deserialize_struct(VkDeviceFaultVendorBinaryHeaderVersionOneEXT::Reader&);
    

        void serialize_struct(VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT::Builder&, VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT);
        VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT deserialize_struct(VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT::Reader&);
    

        void serialize_struct(VkDepthBiasInfoEXT::Builder&, VkDepthBiasInfoEXT);
        VkDepthBiasInfoEXT deserialize_struct(VkDepthBiasInfoEXT::Reader&);
    

        void serialize_struct(VkDepthBiasRepresentationInfoEXT::Builder&, VkDepthBiasRepresentationInfoEXT);
        VkDepthBiasRepresentationInfoEXT deserialize_struct(VkDepthBiasRepresentationInfoEXT::Reader&);
    

        void serialize_struct(VkDecompressMemoryRegionNV::Builder&, VkDecompressMemoryRegionNV);
        VkDecompressMemoryRegionNV deserialize_struct(VkDecompressMemoryRegionNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM::Builder&, VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM);
        VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM deserialize_struct(VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM::Builder&, VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM);
        VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM deserialize_struct(VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM::Reader&);
    

        void serialize_struct(VkFrameBoundaryEXT::Builder&, VkFrameBoundaryEXT);
        VkFrameBoundaryEXT deserialize_struct(VkFrameBoundaryEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceFrameBoundaryFeaturesEXT::Builder&, VkPhysicalDeviceFrameBoundaryFeaturesEXT);
        VkPhysicalDeviceFrameBoundaryFeaturesEXT deserialize_struct(VkPhysicalDeviceFrameBoundaryFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT::Builder&, VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT);
        VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT deserialize_struct(VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT::Reader&);
    

        void serialize_struct(VkSurfacePresentModeEXT::Builder&, VkSurfacePresentModeEXT);
        VkSurfacePresentModeEXT deserialize_struct(VkSurfacePresentModeEXT::Reader&);
    

        void serialize_struct(VkSurfacePresentScalingCapabilitiesEXT::Builder&, VkSurfacePresentScalingCapabilitiesEXT);
        VkSurfacePresentScalingCapabilitiesEXT deserialize_struct(VkSurfacePresentScalingCapabilitiesEXT::Reader&);
    

        void serialize_struct(VkSurfacePresentModeCompatibilityEXT::Builder&, VkSurfacePresentModeCompatibilityEXT);
        VkSurfacePresentModeCompatibilityEXT deserialize_struct(VkSurfacePresentModeCompatibilityEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT::Builder&, VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT);
        VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT deserialize_struct(VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT::Reader&);
    

        void serialize_struct(VkSwapchainPresentFenceInfoEXT::Builder&, VkSwapchainPresentFenceInfoEXT);
        VkSwapchainPresentFenceInfoEXT deserialize_struct(VkSwapchainPresentFenceInfoEXT::Reader&);
    

        void serialize_struct(VkSwapchainPresentModesCreateInfoEXT::Builder&, VkSwapchainPresentModesCreateInfoEXT);
        VkSwapchainPresentModesCreateInfoEXT deserialize_struct(VkSwapchainPresentModesCreateInfoEXT::Reader&);
    

        void serialize_struct(VkSwapchainPresentModeInfoEXT::Builder&, VkSwapchainPresentModeInfoEXT);
        VkSwapchainPresentModeInfoEXT deserialize_struct(VkSwapchainPresentModeInfoEXT::Reader&);
    

        void serialize_struct(VkSwapchainPresentScalingCreateInfoEXT::Builder&, VkSwapchainPresentScalingCreateInfoEXT);
        VkSwapchainPresentScalingCreateInfoEXT deserialize_struct(VkSwapchainPresentScalingCreateInfoEXT::Reader&);
    

        void serialize_struct(VkReleaseSwapchainImagesInfoEXT::Builder&, VkReleaseSwapchainImagesInfoEXT);
        VkReleaseSwapchainImagesInfoEXT deserialize_struct(VkReleaseSwapchainImagesInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDepthBiasControlFeaturesEXT::Builder&, VkPhysicalDeviceDepthBiasControlFeaturesEXT);
        VkPhysicalDeviceDepthBiasControlFeaturesEXT deserialize_struct(VkPhysicalDeviceDepthBiasControlFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV::Builder&, VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV);
        VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV deserialize_struct(VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV::Builder&, VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV);
        VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV deserialize_struct(VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV::Reader&);
    

        void serialize_struct(VkDirectDriverLoadingInfoLUNARG::Builder&, VkDirectDriverLoadingInfoLUNARG);
        VkDirectDriverLoadingInfoLUNARG deserialize_struct(VkDirectDriverLoadingInfoLUNARG::Reader&);
    

        void serialize_struct(VkDirectDriverLoadingListLUNARG::Builder&, VkDirectDriverLoadingListLUNARG);
        VkDirectDriverLoadingListLUNARG deserialize_struct(VkDirectDriverLoadingListLUNARG::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM::Builder&, VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM);
        VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM deserialize_struct(VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM::Reader&);
    

        void serialize_struct(VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR::Builder&, VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR);
        VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR deserialize_struct(VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR::Reader&);
    

        void serialize_struct(VkDeviceImageSubresourceInfoKHR::Builder&, VkDeviceImageSubresourceInfoKHR);
        VkDeviceImageSubresourceInfoKHR deserialize_struct(VkDeviceImageSubresourceInfoKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderCorePropertiesARM::Builder&, VkPhysicalDeviceShaderCorePropertiesARM);
        VkPhysicalDeviceShaderCorePropertiesARM deserialize_struct(VkPhysicalDeviceShaderCorePropertiesARM::Reader&);
    

        void serialize_struct(VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM::Builder&, VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM);
        VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM deserialize_struct(VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM::Reader&);
    

        void serialize_struct(VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM::Builder&, VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM);
        VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM deserialize_struct(VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM::Reader&);
    

        void serialize_struct(VkQueryLowLatencySupportNV::Builder&, VkQueryLowLatencySupportNV);
        VkQueryLowLatencySupportNV deserialize_struct(VkQueryLowLatencySupportNV::Reader&);
    

        void serialize_struct(VkMemoryMapInfoKHR::Builder&, VkMemoryMapInfoKHR);
        VkMemoryMapInfoKHR deserialize_struct(VkMemoryMapInfoKHR::Reader&);
    

        void serialize_struct(VkMemoryUnmapInfoKHR::Builder&, VkMemoryUnmapInfoKHR);
        VkMemoryUnmapInfoKHR deserialize_struct(VkMemoryUnmapInfoKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderObjectFeaturesEXT::Builder&, VkPhysicalDeviceShaderObjectFeaturesEXT);
        VkPhysicalDeviceShaderObjectFeaturesEXT deserialize_struct(VkPhysicalDeviceShaderObjectFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderObjectPropertiesEXT::Builder&, VkPhysicalDeviceShaderObjectPropertiesEXT);
        VkPhysicalDeviceShaderObjectPropertiesEXT deserialize_struct(VkPhysicalDeviceShaderObjectPropertiesEXT::Reader&);
    

        void serialize_struct(VkShaderCreateInfoEXT::Builder&, VkShaderCreateInfoEXT);
        VkShaderCreateInfoEXT deserialize_struct(VkShaderCreateInfoEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderTileImageFeaturesEXT::Builder&, VkPhysicalDeviceShaderTileImageFeaturesEXT);
        VkPhysicalDeviceShaderTileImageFeaturesEXT deserialize_struct(VkPhysicalDeviceShaderTileImageFeaturesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceShaderTileImagePropertiesEXT::Builder&, VkPhysicalDeviceShaderTileImagePropertiesEXT);
        VkPhysicalDeviceShaderTileImagePropertiesEXT deserialize_struct(VkPhysicalDeviceShaderTileImagePropertiesEXT::Reader&);
    

        void serialize_struct(VkPhysicalDeviceCooperativeMatrixFeaturesKHR::Builder&, VkPhysicalDeviceCooperativeMatrixFeaturesKHR);
        VkPhysicalDeviceCooperativeMatrixFeaturesKHR deserialize_struct(VkPhysicalDeviceCooperativeMatrixFeaturesKHR::Reader&);
    

        void serialize_struct(VkCooperativeMatrixPropertiesKHR::Builder&, VkCooperativeMatrixPropertiesKHR);
        VkCooperativeMatrixPropertiesKHR deserialize_struct(VkCooperativeMatrixPropertiesKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceCooperativeMatrixPropertiesKHR::Builder&, VkPhysicalDeviceCooperativeMatrixPropertiesKHR);
        VkPhysicalDeviceCooperativeMatrixPropertiesKHR deserialize_struct(VkPhysicalDeviceCooperativeMatrixPropertiesKHR::Reader&);
    

        void serialize_struct(VkPhysicalDeviceCubicClampFeaturesQCOM::Builder&, VkPhysicalDeviceCubicClampFeaturesQCOM);
        VkPhysicalDeviceCubicClampFeaturesQCOM deserialize_struct(VkPhysicalDeviceCubicClampFeaturesQCOM::Reader&);
    

        void serialize_struct(VkPhysicalDeviceYcbcrDegammaFeaturesQCOM::Builder&, VkPhysicalDeviceYcbcrDegammaFeaturesQCOM);
        VkPhysicalDeviceYcbcrDegammaFeaturesQCOM deserialize_struct(VkPhysicalDeviceYcbcrDegammaFeaturesQCOM::Reader&);
    

        void serialize_struct(VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM::Builder&, VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM);
        VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM deserialize_struct(VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM::Reader&);
    

        void serialize_struct(VkPhysicalDeviceCubicWeightsFeaturesQCOM::Builder&, VkPhysicalDeviceCubicWeightsFeaturesQCOM);
        VkPhysicalDeviceCubicWeightsFeaturesQCOM deserialize_struct(VkPhysicalDeviceCubicWeightsFeaturesQCOM::Reader&);
    

        void serialize_struct(VkSamplerCubicWeightsCreateInfoQCOM::Builder&, VkSamplerCubicWeightsCreateInfoQCOM);
        VkSamplerCubicWeightsCreateInfoQCOM deserialize_struct(VkSamplerCubicWeightsCreateInfoQCOM::Reader&);
    

        void serialize_struct(VkBlitImageCubicWeightsInfoQCOM::Builder&, VkBlitImageCubicWeightsInfoQCOM);
        VkBlitImageCubicWeightsInfoQCOM deserialize_struct(VkBlitImageCubicWeightsInfoQCOM::Reader&);
    

        void serialize_struct(VkPhysicalDeviceImageProcessing2FeaturesQCOM::Builder&, VkPhysicalDeviceImageProcessing2FeaturesQCOM);
        VkPhysicalDeviceImageProcessing2FeaturesQCOM deserialize_struct(VkPhysicalDeviceImageProcessing2FeaturesQCOM::Reader&);
    

        void serialize_struct(VkPhysicalDeviceImageProcessing2PropertiesQCOM::Builder&, VkPhysicalDeviceImageProcessing2PropertiesQCOM);
        VkPhysicalDeviceImageProcessing2PropertiesQCOM deserialize_struct(VkPhysicalDeviceImageProcessing2PropertiesQCOM::Reader&);
    

        void serialize_struct(VkSamplerBlockMatchWindowCreateInfoQCOM::Builder&, VkSamplerBlockMatchWindowCreateInfoQCOM);
        VkSamplerBlockMatchWindowCreateInfoQCOM deserialize_struct(VkSamplerBlockMatchWindowCreateInfoQCOM::Reader&);
    

        void serialize_struct(VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV::Builder&, VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV);
        VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV deserialize_struct(VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV::Reader&);
    

        void serialize_struct(VkPhysicalDeviceLayeredDriverPropertiesMSFT::Builder&, VkPhysicalDeviceLayeredDriverPropertiesMSFT);
        VkPhysicalDeviceLayeredDriverPropertiesMSFT deserialize_struct(VkPhysicalDeviceLayeredDriverPropertiesMSFT::Reader&);
    
void serialize_funcpointer(PFN_vkInternalAllocationNotification::Builder, PFN_vkInternalAllocationNotification);
void handle_PFN_vkInternalAllocationNotification_request(PFN_vkInternalAllocationNotification::Reader);
PFN_vkInternalAllocationNotification deserialize_funcpointer(PFN_vkInternalAllocationNotification::Reader reader);
void serialize_funcpointer(PFN_vkInternalFreeNotification::Builder, PFN_vkInternalFreeNotification);
void handle_PFN_vkInternalFreeNotification_request(PFN_vkInternalFreeNotification::Reader);
PFN_vkInternalFreeNotification deserialize_funcpointer(PFN_vkInternalFreeNotification::Reader reader);
void serialize_funcpointer(PFN_vkReallocationFunction::Builder, PFN_vkReallocationFunction);
void handle_PFN_vkReallocationFunction_request(PFN_vkReallocationFunction::Reader);
PFN_vkReallocationFunction deserialize_funcpointer(PFN_vkReallocationFunction::Reader reader);
void serialize_funcpointer(PFN_vkAllocationFunction::Builder, PFN_vkAllocationFunction);
void handle_PFN_vkAllocationFunction_request(PFN_vkAllocationFunction::Reader);
PFN_vkAllocationFunction deserialize_funcpointer(PFN_vkAllocationFunction::Reader reader);
void serialize_funcpointer(PFN_vkFreeFunction::Builder, PFN_vkFreeFunction);
void handle_PFN_vkFreeFunction_request(PFN_vkFreeFunction::Reader);
PFN_vkFreeFunction deserialize_funcpointer(PFN_vkFreeFunction::Reader reader);
void serialize_funcpointer(PFN_vkDebugReportCallbackEXT::Builder, PFN_vkDebugReportCallbackEXT);
void handle_PFN_vkDebugReportCallbackEXT_request(PFN_vkDebugReportCallbackEXT::Reader);
PFN_vkDebugReportCallbackEXT deserialize_funcpointer(PFN_vkDebugReportCallbackEXT::Reader reader);
void serialize_funcpointer(PFN_vkDebugUtilsMessengerCallbackEXT::Builder, PFN_vkDebugUtilsMessengerCallbackEXT);
void handle_PFN_vkDebugUtilsMessengerCallbackEXT_request(PFN_vkDebugUtilsMessengerCallbackEXT::Reader);
PFN_vkDebugUtilsMessengerCallbackEXT deserialize_funcpointer(PFN_vkDebugUtilsMessengerCallbackEXT::Reader reader);
void serialize_funcpointer(PFN_vkDeviceMemoryReportCallbackEXT::Builder, PFN_vkDeviceMemoryReportCallbackEXT);
void handle_PFN_vkDeviceMemoryReportCallbackEXT_request(PFN_vkDeviceMemoryReportCallbackEXT::Reader);
PFN_vkDeviceMemoryReportCallbackEXT deserialize_funcpointer(PFN_vkDeviceMemoryReportCallbackEXT::Reader reader);
void serialize_funcpointer(PFN_vkGetInstanceProcAddrLUNARG::Builder, PFN_vkGetInstanceProcAddrLUNARG);
PFN_vkGetInstanceProcAddrLUNARG deserialize_funcpointer(PFN_vkGetInstanceProcAddrLUNARG::Reader reader);
uintptr_t serialize_handle(VkInstance data);
VkInstance deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkPhysicalDevice data);
VkPhysicalDevice deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkDevice data);
VkDevice deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkQueue data);
VkQueue deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkCommandBuffer data);
VkCommandBuffer deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkDeviceMemory data);
VkDeviceMemory deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkCommandPool data);
VkCommandPool deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkBuffer data);
VkBuffer deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkBufferView data);
VkBufferView deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkImage data);
VkImage deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkImageView data);
VkImageView deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkShaderModule data);
VkShaderModule deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkPipeline data);
VkPipeline deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkPipelineLayout data);
VkPipelineLayout deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkSampler data);
VkSampler deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkDescriptorSet data);
VkDescriptorSet deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkDescriptorSetLayout data);
VkDescriptorSetLayout deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkDescriptorPool data);
VkDescriptorPool deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkFence data);
VkFence deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkSemaphore data);
VkSemaphore deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkEvent data);
VkEvent deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkQueryPool data);
VkQueryPool deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkFramebuffer data);
VkFramebuffer deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkRenderPass data);
VkRenderPass deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkPipelineCache data);
VkPipelineCache deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkIndirectCommandsLayoutNV data);
VkIndirectCommandsLayoutNV deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkDescriptorUpdateTemplate data);
VkDescriptorUpdateTemplate deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkDescriptorUpdateTemplateKHR data);
VkDescriptorUpdateTemplateKHR deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkSamplerYcbcrConversion data);
VkSamplerYcbcrConversion deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkSamplerYcbcrConversionKHR data);
VkSamplerYcbcrConversionKHR deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkValidationCacheEXT data);
VkValidationCacheEXT deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkAccelerationStructureKHR data);
VkAccelerationStructureKHR deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkAccelerationStructureNV data);
VkAccelerationStructureNV deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkPerformanceConfigurationINTEL data);
VkPerformanceConfigurationINTEL deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkDeferredOperationKHR data);
VkDeferredOperationKHR deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkPrivateDataSlot data);
VkPrivateDataSlot deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkPrivateDataSlotEXT data);
VkPrivateDataSlotEXT deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkCuModuleNVX data);
VkCuModuleNVX deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkCuFunctionNVX data);
VkCuFunctionNVX deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkOpticalFlowSessionNV data);
VkOpticalFlowSessionNV deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkMicromapEXT data);
VkMicromapEXT deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkShaderEXT data);
VkShaderEXT deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkDisplayKHR data);
VkDisplayKHR deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkDisplayModeKHR data);
VkDisplayModeKHR deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkSurfaceKHR data);
VkSurfaceKHR deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkSwapchainKHR data);
VkSwapchainKHR deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkDebugReportCallbackEXT data);
VkDebugReportCallbackEXT deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkDebugUtilsMessengerEXT data);
VkDebugUtilsMessengerEXT deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkVideoSessionKHR data);
VkVideoSessionKHR deserialize_handle(uintptr_t);
uintptr_t serialize_handle(VkVideoSessionParametersKHR data);
VkVideoSessionParametersKHR deserialize_handle(uintptr_t);
