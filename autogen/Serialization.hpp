#include <vulkan/vulkan.h>

typedef struct StreamStructure{
    VkStructureType sType;
    const void* pNext;
} StreamStructure;

#include <debug.hpp>
typedef void* pNext;
void* memdup(const void* mem, size_t size);
void* copyVkStruct (const void* data);

        void serialize_struct(stream::VkBaseOutStructure::Builder&, VkBaseOutStructure);
        VkBaseOutStructure deserialize_struct(stream::VkBaseOutStructure::Reader&);
    

        void serialize_struct(stream::VkBaseInStructure::Builder&, VkBaseInStructure);
        VkBaseInStructure deserialize_struct(stream::VkBaseInStructure::Reader&);
    

        void serialize_struct(stream::VkOffset2D::Builder&, VkOffset2D);
        VkOffset2D deserialize_struct(stream::VkOffset2D::Reader&);
    

        void serialize_struct(stream::VkOffset3D::Builder&, VkOffset3D);
        VkOffset3D deserialize_struct(stream::VkOffset3D::Reader&);
    

        void serialize_struct(stream::VkExtent2D::Builder&, VkExtent2D);
        VkExtent2D deserialize_struct(stream::VkExtent2D::Reader&);
    

        void serialize_struct(stream::VkExtent3D::Builder&, VkExtent3D);
        VkExtent3D deserialize_struct(stream::VkExtent3D::Reader&);
    

        void serialize_struct(stream::VkViewport::Builder&, VkViewport);
        VkViewport deserialize_struct(stream::VkViewport::Reader&);
    

        void serialize_struct(stream::VkRect2D::Builder&, VkRect2D);
        VkRect2D deserialize_struct(stream::VkRect2D::Reader&);
    

        void serialize_struct(stream::VkClearRect::Builder&, VkClearRect);
        VkClearRect deserialize_struct(stream::VkClearRect::Reader&);
    

        void serialize_struct(stream::VkComponentMapping::Builder&, VkComponentMapping);
        VkComponentMapping deserialize_struct(stream::VkComponentMapping::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceProperties::Builder&, VkPhysicalDeviceProperties);
        VkPhysicalDeviceProperties deserialize_struct(stream::VkPhysicalDeviceProperties::Reader&);
    

        void serialize_struct(stream::VkExtensionProperties::Builder&, VkExtensionProperties);
        VkExtensionProperties deserialize_struct(stream::VkExtensionProperties::Reader&);
    

        void serialize_struct(stream::VkLayerProperties::Builder&, VkLayerProperties);
        VkLayerProperties deserialize_struct(stream::VkLayerProperties::Reader&);
    

        void serialize_struct(stream::VkApplicationInfo::Builder&, VkApplicationInfo);
        VkApplicationInfo deserialize_struct(stream::VkApplicationInfo::Reader&);
    

        void serialize_struct(stream::VkAllocationCallbacks::Builder&, VkAllocationCallbacks);
        VkAllocationCallbacks deserialize_struct(stream::VkAllocationCallbacks::Reader&);
    

        void serialize_struct(stream::VkDeviceQueueCreateInfo::Builder&, VkDeviceQueueCreateInfo);
        VkDeviceQueueCreateInfo deserialize_struct(stream::VkDeviceQueueCreateInfo::Reader&);
    

        void serialize_struct(stream::VkDeviceCreateInfo::Builder&, VkDeviceCreateInfo);
        VkDeviceCreateInfo deserialize_struct(stream::VkDeviceCreateInfo::Reader&);
    

        void serialize_struct(stream::VkInstanceCreateInfo::Builder&, VkInstanceCreateInfo);
        VkInstanceCreateInfo deserialize_struct(stream::VkInstanceCreateInfo::Reader&);
    

        void serialize_struct(stream::VkQueueFamilyProperties::Builder&, VkQueueFamilyProperties);
        VkQueueFamilyProperties deserialize_struct(stream::VkQueueFamilyProperties::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMemoryProperties::Builder&, VkPhysicalDeviceMemoryProperties);
        VkPhysicalDeviceMemoryProperties deserialize_struct(stream::VkPhysicalDeviceMemoryProperties::Reader&);
    

        void serialize_struct(stream::VkMemoryAllocateInfo::Builder&, VkMemoryAllocateInfo);
        VkMemoryAllocateInfo deserialize_struct(stream::VkMemoryAllocateInfo::Reader&);
    

        void serialize_struct(stream::VkMemoryRequirements::Builder&, VkMemoryRequirements);
        VkMemoryRequirements deserialize_struct(stream::VkMemoryRequirements::Reader&);
    

        void serialize_struct(stream::VkSparseImageFormatProperties::Builder&, VkSparseImageFormatProperties);
        VkSparseImageFormatProperties deserialize_struct(stream::VkSparseImageFormatProperties::Reader&);
    

        void serialize_struct(stream::VkSparseImageMemoryRequirements::Builder&, VkSparseImageMemoryRequirements);
        VkSparseImageMemoryRequirements deserialize_struct(stream::VkSparseImageMemoryRequirements::Reader&);
    

        void serialize_struct(stream::VkMemoryType::Builder&, VkMemoryType);
        VkMemoryType deserialize_struct(stream::VkMemoryType::Reader&);
    

        void serialize_struct(stream::VkMemoryHeap::Builder&, VkMemoryHeap);
        VkMemoryHeap deserialize_struct(stream::VkMemoryHeap::Reader&);
    

        void serialize_struct(stream::VkMappedMemoryRange::Builder&, VkMappedMemoryRange);
        VkMappedMemoryRange deserialize_struct(stream::VkMappedMemoryRange::Reader&);
    

        void serialize_struct(stream::VkFormatProperties::Builder&, VkFormatProperties);
        VkFormatProperties deserialize_struct(stream::VkFormatProperties::Reader&);
    

        void serialize_struct(stream::VkImageFormatProperties::Builder&, VkImageFormatProperties);
        VkImageFormatProperties deserialize_struct(stream::VkImageFormatProperties::Reader&);
    

        void serialize_struct(stream::VkDescriptorBufferInfo::Builder&, VkDescriptorBufferInfo);
        VkDescriptorBufferInfo deserialize_struct(stream::VkDescriptorBufferInfo::Reader&);
    

        void serialize_struct(stream::VkDescriptorImageInfo::Builder&, VkDescriptorImageInfo);
        VkDescriptorImageInfo deserialize_struct(stream::VkDescriptorImageInfo::Reader&);
    

        void serialize_struct(stream::VkWriteDescriptorSet::Builder&, VkWriteDescriptorSet);
        VkWriteDescriptorSet deserialize_struct(stream::VkWriteDescriptorSet::Reader&);
    

        void serialize_struct(stream::VkCopyDescriptorSet::Builder&, VkCopyDescriptorSet);
        VkCopyDescriptorSet deserialize_struct(stream::VkCopyDescriptorSet::Reader&);
    

        void serialize_struct(stream::VkBufferUsageFlags2CreateInfoKHR::Builder&, VkBufferUsageFlags2CreateInfoKHR);
        VkBufferUsageFlags2CreateInfoKHR deserialize_struct(stream::VkBufferUsageFlags2CreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkBufferCreateInfo::Builder&, VkBufferCreateInfo);
        VkBufferCreateInfo deserialize_struct(stream::VkBufferCreateInfo::Reader&);
    

        void serialize_struct(stream::VkBufferViewCreateInfo::Builder&, VkBufferViewCreateInfo);
        VkBufferViewCreateInfo deserialize_struct(stream::VkBufferViewCreateInfo::Reader&);
    

        void serialize_struct(stream::VkImageSubresource::Builder&, VkImageSubresource);
        VkImageSubresource deserialize_struct(stream::VkImageSubresource::Reader&);
    

        void serialize_struct(stream::VkImageSubresourceLayers::Builder&, VkImageSubresourceLayers);
        VkImageSubresourceLayers deserialize_struct(stream::VkImageSubresourceLayers::Reader&);
    

        void serialize_struct(stream::VkImageSubresourceRange::Builder&, VkImageSubresourceRange);
        VkImageSubresourceRange deserialize_struct(stream::VkImageSubresourceRange::Reader&);
    

        void serialize_struct(stream::VkMemoryBarrier::Builder&, VkMemoryBarrier);
        VkMemoryBarrier deserialize_struct(stream::VkMemoryBarrier::Reader&);
    

        void serialize_struct(stream::VkBufferMemoryBarrier::Builder&, VkBufferMemoryBarrier);
        VkBufferMemoryBarrier deserialize_struct(stream::VkBufferMemoryBarrier::Reader&);
    

        void serialize_struct(stream::VkImageMemoryBarrier::Builder&, VkImageMemoryBarrier);
        VkImageMemoryBarrier deserialize_struct(stream::VkImageMemoryBarrier::Reader&);
    

        void serialize_struct(stream::VkImageCreateInfo::Builder&, VkImageCreateInfo);
        VkImageCreateInfo deserialize_struct(stream::VkImageCreateInfo::Reader&);
    

        void serialize_struct(stream::VkSubresourceLayout::Builder&, VkSubresourceLayout);
        VkSubresourceLayout deserialize_struct(stream::VkSubresourceLayout::Reader&);
    

        void serialize_struct(stream::VkImageViewCreateInfo::Builder&, VkImageViewCreateInfo);
        VkImageViewCreateInfo deserialize_struct(stream::VkImageViewCreateInfo::Reader&);
    

        void serialize_struct(stream::VkBufferCopy::Builder&, VkBufferCopy);
        VkBufferCopy deserialize_struct(stream::VkBufferCopy::Reader&);
    

        void serialize_struct(stream::VkSparseMemoryBind::Builder&, VkSparseMemoryBind);
        VkSparseMemoryBind deserialize_struct(stream::VkSparseMemoryBind::Reader&);
    

        void serialize_struct(stream::VkSparseImageMemoryBind::Builder&, VkSparseImageMemoryBind);
        VkSparseImageMemoryBind deserialize_struct(stream::VkSparseImageMemoryBind::Reader&);
    

        void serialize_struct(stream::VkSparseBufferMemoryBindInfo::Builder&, VkSparseBufferMemoryBindInfo);
        VkSparseBufferMemoryBindInfo deserialize_struct(stream::VkSparseBufferMemoryBindInfo::Reader&);
    

        void serialize_struct(stream::VkSparseImageOpaqueMemoryBindInfo::Builder&, VkSparseImageOpaqueMemoryBindInfo);
        VkSparseImageOpaqueMemoryBindInfo deserialize_struct(stream::VkSparseImageOpaqueMemoryBindInfo::Reader&);
    

        void serialize_struct(stream::VkSparseImageMemoryBindInfo::Builder&, VkSparseImageMemoryBindInfo);
        VkSparseImageMemoryBindInfo deserialize_struct(stream::VkSparseImageMemoryBindInfo::Reader&);
    

        void serialize_struct(stream::VkBindSparseInfo::Builder&, VkBindSparseInfo);
        VkBindSparseInfo deserialize_struct(stream::VkBindSparseInfo::Reader&);
    

        void serialize_struct(stream::VkImageCopy::Builder&, VkImageCopy);
        VkImageCopy deserialize_struct(stream::VkImageCopy::Reader&);
    

        void serialize_struct(stream::VkImageBlit::Builder&, VkImageBlit);
        VkImageBlit deserialize_struct(stream::VkImageBlit::Reader&);
    

        void serialize_struct(stream::VkBufferImageCopy::Builder&, VkBufferImageCopy);
        VkBufferImageCopy deserialize_struct(stream::VkBufferImageCopy::Reader&);
    

        void serialize_struct(stream::VkCopyMemoryIndirectCommandNV::Builder&, VkCopyMemoryIndirectCommandNV);
        VkCopyMemoryIndirectCommandNV deserialize_struct(stream::VkCopyMemoryIndirectCommandNV::Reader&);
    

        void serialize_struct(stream::VkCopyMemoryToImageIndirectCommandNV::Builder&, VkCopyMemoryToImageIndirectCommandNV);
        VkCopyMemoryToImageIndirectCommandNV deserialize_struct(stream::VkCopyMemoryToImageIndirectCommandNV::Reader&);
    

        void serialize_struct(stream::VkImageResolve::Builder&, VkImageResolve);
        VkImageResolve deserialize_struct(stream::VkImageResolve::Reader&);
    

        void serialize_struct(stream::VkShaderModuleCreateInfo::Builder&, VkShaderModuleCreateInfo);
        VkShaderModuleCreateInfo deserialize_struct(stream::VkShaderModuleCreateInfo::Reader&);
    

        void serialize_struct(stream::VkDescriptorSetLayoutBinding::Builder&, VkDescriptorSetLayoutBinding);
        VkDescriptorSetLayoutBinding deserialize_struct(stream::VkDescriptorSetLayoutBinding::Reader&);
    

        void serialize_struct(stream::VkDescriptorSetLayoutCreateInfo::Builder&, VkDescriptorSetLayoutCreateInfo);
        VkDescriptorSetLayoutCreateInfo deserialize_struct(stream::VkDescriptorSetLayoutCreateInfo::Reader&);
    

        void serialize_struct(stream::VkDescriptorPoolSize::Builder&, VkDescriptorPoolSize);
        VkDescriptorPoolSize deserialize_struct(stream::VkDescriptorPoolSize::Reader&);
    

        void serialize_struct(stream::VkDescriptorPoolCreateInfo::Builder&, VkDescriptorPoolCreateInfo);
        VkDescriptorPoolCreateInfo deserialize_struct(stream::VkDescriptorPoolCreateInfo::Reader&);
    

        void serialize_struct(stream::VkDescriptorSetAllocateInfo::Builder&, VkDescriptorSetAllocateInfo);
        VkDescriptorSetAllocateInfo deserialize_struct(stream::VkDescriptorSetAllocateInfo::Reader&);
    

        void serialize_struct(stream::VkSpecializationMapEntry::Builder&, VkSpecializationMapEntry);
        VkSpecializationMapEntry deserialize_struct(stream::VkSpecializationMapEntry::Reader&);
    

        void serialize_struct(stream::VkSpecializationInfo::Builder&, VkSpecializationInfo);
        VkSpecializationInfo deserialize_struct(stream::VkSpecializationInfo::Reader&);
    

        void serialize_struct(stream::VkPipelineShaderStageCreateInfo::Builder&, VkPipelineShaderStageCreateInfo);
        VkPipelineShaderStageCreateInfo deserialize_struct(stream::VkPipelineShaderStageCreateInfo::Reader&);
    

        void serialize_struct(stream::VkComputePipelineCreateInfo::Builder&, VkComputePipelineCreateInfo);
        VkComputePipelineCreateInfo deserialize_struct(stream::VkComputePipelineCreateInfo::Reader&);
    

        void serialize_struct(stream::VkComputePipelineIndirectBufferInfoNV::Builder&, VkComputePipelineIndirectBufferInfoNV);
        VkComputePipelineIndirectBufferInfoNV deserialize_struct(stream::VkComputePipelineIndirectBufferInfoNV::Reader&);
    

        void serialize_struct(stream::VkPipelineCreateFlags2CreateInfoKHR::Builder&, VkPipelineCreateFlags2CreateInfoKHR);
        VkPipelineCreateFlags2CreateInfoKHR deserialize_struct(stream::VkPipelineCreateFlags2CreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVertexInputBindingDescription::Builder&, VkVertexInputBindingDescription);
        VkVertexInputBindingDescription deserialize_struct(stream::VkVertexInputBindingDescription::Reader&);
    

        void serialize_struct(stream::VkVertexInputAttributeDescription::Builder&, VkVertexInputAttributeDescription);
        VkVertexInputAttributeDescription deserialize_struct(stream::VkVertexInputAttributeDescription::Reader&);
    

        void serialize_struct(stream::VkPipelineVertexInputStateCreateInfo::Builder&, VkPipelineVertexInputStateCreateInfo);
        VkPipelineVertexInputStateCreateInfo deserialize_struct(stream::VkPipelineVertexInputStateCreateInfo::Reader&);
    

        void serialize_struct(stream::VkPipelineInputAssemblyStateCreateInfo::Builder&, VkPipelineInputAssemblyStateCreateInfo);
        VkPipelineInputAssemblyStateCreateInfo deserialize_struct(stream::VkPipelineInputAssemblyStateCreateInfo::Reader&);
    

        void serialize_struct(stream::VkPipelineTessellationStateCreateInfo::Builder&, VkPipelineTessellationStateCreateInfo);
        VkPipelineTessellationStateCreateInfo deserialize_struct(stream::VkPipelineTessellationStateCreateInfo::Reader&);
    

        void serialize_struct(stream::VkPipelineViewportStateCreateInfo::Builder&, VkPipelineViewportStateCreateInfo);
        VkPipelineViewportStateCreateInfo deserialize_struct(stream::VkPipelineViewportStateCreateInfo::Reader&);
    

        void serialize_struct(stream::VkPipelineRasterizationStateCreateInfo::Builder&, VkPipelineRasterizationStateCreateInfo);
        VkPipelineRasterizationStateCreateInfo deserialize_struct(stream::VkPipelineRasterizationStateCreateInfo::Reader&);
    

        void serialize_struct(stream::VkPipelineMultisampleStateCreateInfo::Builder&, VkPipelineMultisampleStateCreateInfo);
        VkPipelineMultisampleStateCreateInfo deserialize_struct(stream::VkPipelineMultisampleStateCreateInfo::Reader&);
    

        void serialize_struct(stream::VkPipelineColorBlendAttachmentState::Builder&, VkPipelineColorBlendAttachmentState);
        VkPipelineColorBlendAttachmentState deserialize_struct(stream::VkPipelineColorBlendAttachmentState::Reader&);
    

        void serialize_struct(stream::VkPipelineColorBlendStateCreateInfo::Builder&, VkPipelineColorBlendStateCreateInfo);
        VkPipelineColorBlendStateCreateInfo deserialize_struct(stream::VkPipelineColorBlendStateCreateInfo::Reader&);
    

        void serialize_struct(stream::VkPipelineDynamicStateCreateInfo::Builder&, VkPipelineDynamicStateCreateInfo);
        VkPipelineDynamicStateCreateInfo deserialize_struct(stream::VkPipelineDynamicStateCreateInfo::Reader&);
    

        void serialize_struct(stream::VkStencilOpState::Builder&, VkStencilOpState);
        VkStencilOpState deserialize_struct(stream::VkStencilOpState::Reader&);
    

        void serialize_struct(stream::VkPipelineDepthStencilStateCreateInfo::Builder&, VkPipelineDepthStencilStateCreateInfo);
        VkPipelineDepthStencilStateCreateInfo deserialize_struct(stream::VkPipelineDepthStencilStateCreateInfo::Reader&);
    

        void serialize_struct(stream::VkGraphicsPipelineCreateInfo::Builder&, VkGraphicsPipelineCreateInfo);
        VkGraphicsPipelineCreateInfo deserialize_struct(stream::VkGraphicsPipelineCreateInfo::Reader&);
    

        void serialize_struct(stream::VkPipelineCacheCreateInfo::Builder&, VkPipelineCacheCreateInfo);
        VkPipelineCacheCreateInfo deserialize_struct(stream::VkPipelineCacheCreateInfo::Reader&);
    

        void serialize_struct(stream::VkPipelineCacheHeaderVersionOne::Builder&, VkPipelineCacheHeaderVersionOne);
        VkPipelineCacheHeaderVersionOne deserialize_struct(stream::VkPipelineCacheHeaderVersionOne::Reader&);
    

        void serialize_struct(stream::VkPushConstantRange::Builder&, VkPushConstantRange);
        VkPushConstantRange deserialize_struct(stream::VkPushConstantRange::Reader&);
    

        void serialize_struct(stream::VkPipelineLayoutCreateInfo::Builder&, VkPipelineLayoutCreateInfo);
        VkPipelineLayoutCreateInfo deserialize_struct(stream::VkPipelineLayoutCreateInfo::Reader&);
    

        void serialize_struct(stream::VkSamplerCreateInfo::Builder&, VkSamplerCreateInfo);
        VkSamplerCreateInfo deserialize_struct(stream::VkSamplerCreateInfo::Reader&);
    

        void serialize_struct(stream::VkCommandPoolCreateInfo::Builder&, VkCommandPoolCreateInfo);
        VkCommandPoolCreateInfo deserialize_struct(stream::VkCommandPoolCreateInfo::Reader&);
    

        void serialize_struct(stream::VkCommandBufferAllocateInfo::Builder&, VkCommandBufferAllocateInfo);
        VkCommandBufferAllocateInfo deserialize_struct(stream::VkCommandBufferAllocateInfo::Reader&);
    

        void serialize_struct(stream::VkCommandBufferInheritanceInfo::Builder&, VkCommandBufferInheritanceInfo);
        VkCommandBufferInheritanceInfo deserialize_struct(stream::VkCommandBufferInheritanceInfo::Reader&);
    

        void serialize_struct(stream::VkCommandBufferBeginInfo::Builder&, VkCommandBufferBeginInfo);
        VkCommandBufferBeginInfo deserialize_struct(stream::VkCommandBufferBeginInfo::Reader&);
    

        void serialize_struct(stream::VkRenderPassBeginInfo::Builder&, VkRenderPassBeginInfo);
        VkRenderPassBeginInfo deserialize_struct(stream::VkRenderPassBeginInfo::Reader&);
    

        void serialize_struct(stream::VkClearColorValue::Builder&, VkClearColorValue);
        VkClearColorValue deserialize_struct(stream::VkClearColorValue::Reader&);
    

        void serialize_struct(stream::VkClearDepthStencilValue::Builder&, VkClearDepthStencilValue);
        VkClearDepthStencilValue deserialize_struct(stream::VkClearDepthStencilValue::Reader&);
    

        void serialize_struct(stream::VkClearValue::Builder&, VkClearValue);
        VkClearValue deserialize_struct(stream::VkClearValue::Reader&);
    

        void serialize_struct(stream::VkClearAttachment::Builder&, VkClearAttachment);
        VkClearAttachment deserialize_struct(stream::VkClearAttachment::Reader&);
    

        void serialize_struct(stream::VkAttachmentDescription::Builder&, VkAttachmentDescription);
        VkAttachmentDescription deserialize_struct(stream::VkAttachmentDescription::Reader&);
    

        void serialize_struct(stream::VkAttachmentReference::Builder&, VkAttachmentReference);
        VkAttachmentReference deserialize_struct(stream::VkAttachmentReference::Reader&);
    

        void serialize_struct(stream::VkSubpassDescription::Builder&, VkSubpassDescription);
        VkSubpassDescription deserialize_struct(stream::VkSubpassDescription::Reader&);
    

        void serialize_struct(stream::VkSubpassDependency::Builder&, VkSubpassDependency);
        VkSubpassDependency deserialize_struct(stream::VkSubpassDependency::Reader&);
    

        void serialize_struct(stream::VkRenderPassCreateInfo::Builder&, VkRenderPassCreateInfo);
        VkRenderPassCreateInfo deserialize_struct(stream::VkRenderPassCreateInfo::Reader&);
    

        void serialize_struct(stream::VkEventCreateInfo::Builder&, VkEventCreateInfo);
        VkEventCreateInfo deserialize_struct(stream::VkEventCreateInfo::Reader&);
    

        void serialize_struct(stream::VkFenceCreateInfo::Builder&, VkFenceCreateInfo);
        VkFenceCreateInfo deserialize_struct(stream::VkFenceCreateInfo::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceFeatures::Builder&, VkPhysicalDeviceFeatures);
        VkPhysicalDeviceFeatures deserialize_struct(stream::VkPhysicalDeviceFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceSparseProperties::Builder&, VkPhysicalDeviceSparseProperties);
        VkPhysicalDeviceSparseProperties deserialize_struct(stream::VkPhysicalDeviceSparseProperties::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceLimits::Builder&, VkPhysicalDeviceLimits);
        VkPhysicalDeviceLimits deserialize_struct(stream::VkPhysicalDeviceLimits::Reader&);
    

        void serialize_struct(stream::VkSemaphoreCreateInfo::Builder&, VkSemaphoreCreateInfo);
        VkSemaphoreCreateInfo deserialize_struct(stream::VkSemaphoreCreateInfo::Reader&);
    

        void serialize_struct(stream::VkQueryPoolCreateInfo::Builder&, VkQueryPoolCreateInfo);
        VkQueryPoolCreateInfo deserialize_struct(stream::VkQueryPoolCreateInfo::Reader&);
    

        void serialize_struct(stream::VkFramebufferCreateInfo::Builder&, VkFramebufferCreateInfo);
        VkFramebufferCreateInfo deserialize_struct(stream::VkFramebufferCreateInfo::Reader&);
    

        void serialize_struct(stream::VkDrawIndirectCommand::Builder&, VkDrawIndirectCommand);
        VkDrawIndirectCommand deserialize_struct(stream::VkDrawIndirectCommand::Reader&);
    

        void serialize_struct(stream::VkDrawIndexedIndirectCommand::Builder&, VkDrawIndexedIndirectCommand);
        VkDrawIndexedIndirectCommand deserialize_struct(stream::VkDrawIndexedIndirectCommand::Reader&);
    

        void serialize_struct(stream::VkDispatchIndirectCommand::Builder&, VkDispatchIndirectCommand);
        VkDispatchIndirectCommand deserialize_struct(stream::VkDispatchIndirectCommand::Reader&);
    

        void serialize_struct(stream::VkMultiDrawInfoEXT::Builder&, VkMultiDrawInfoEXT);
        VkMultiDrawInfoEXT deserialize_struct(stream::VkMultiDrawInfoEXT::Reader&);
    

        void serialize_struct(stream::VkMultiDrawIndexedInfoEXT::Builder&, VkMultiDrawIndexedInfoEXT);
        VkMultiDrawIndexedInfoEXT deserialize_struct(stream::VkMultiDrawIndexedInfoEXT::Reader&);
    

        void serialize_struct(stream::VkSubmitInfo::Builder&, VkSubmitInfo);
        VkSubmitInfo deserialize_struct(stream::VkSubmitInfo::Reader&);
    

        void serialize_struct(stream::VkDisplayPropertiesKHR::Builder&, VkDisplayPropertiesKHR);
        VkDisplayPropertiesKHR deserialize_struct(stream::VkDisplayPropertiesKHR::Reader&);
    

        void serialize_struct(stream::VkDisplayPlanePropertiesKHR::Builder&, VkDisplayPlanePropertiesKHR);
        VkDisplayPlanePropertiesKHR deserialize_struct(stream::VkDisplayPlanePropertiesKHR::Reader&);
    

        void serialize_struct(stream::VkDisplayModeParametersKHR::Builder&, VkDisplayModeParametersKHR);
        VkDisplayModeParametersKHR deserialize_struct(stream::VkDisplayModeParametersKHR::Reader&);
    

        void serialize_struct(stream::VkDisplayModePropertiesKHR::Builder&, VkDisplayModePropertiesKHR);
        VkDisplayModePropertiesKHR deserialize_struct(stream::VkDisplayModePropertiesKHR::Reader&);
    

        void serialize_struct(stream::VkDisplayModeCreateInfoKHR::Builder&, VkDisplayModeCreateInfoKHR);
        VkDisplayModeCreateInfoKHR deserialize_struct(stream::VkDisplayModeCreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkDisplayPlaneCapabilitiesKHR::Builder&, VkDisplayPlaneCapabilitiesKHR);
        VkDisplayPlaneCapabilitiesKHR deserialize_struct(stream::VkDisplayPlaneCapabilitiesKHR::Reader&);
    

        void serialize_struct(stream::VkDisplaySurfaceCreateInfoKHR::Builder&, VkDisplaySurfaceCreateInfoKHR);
        VkDisplaySurfaceCreateInfoKHR deserialize_struct(stream::VkDisplaySurfaceCreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkDisplayPresentInfoKHR::Builder&, VkDisplayPresentInfoKHR);
        VkDisplayPresentInfoKHR deserialize_struct(stream::VkDisplayPresentInfoKHR::Reader&);
    

        void serialize_struct(stream::VkSurfaceCapabilitiesKHR::Builder&, VkSurfaceCapabilitiesKHR);
        VkSurfaceCapabilitiesKHR deserialize_struct(stream::VkSurfaceCapabilitiesKHR::Reader&);
    

        void serialize_struct(stream::VkXlibSurfaceCreateInfoKHR::Builder&, VkXlibSurfaceCreateInfoKHR);
        VkXlibSurfaceCreateInfoKHR deserialize_struct(stream::VkXlibSurfaceCreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkXcbSurfaceCreateInfoKHR::Builder&, VkXcbSurfaceCreateInfoKHR);
        VkXcbSurfaceCreateInfoKHR deserialize_struct(stream::VkXcbSurfaceCreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkSurfaceFormatKHR::Builder&, VkSurfaceFormatKHR);
        VkSurfaceFormatKHR deserialize_struct(stream::VkSurfaceFormatKHR::Reader&);
    

        void serialize_struct(stream::VkSwapchainCreateInfoKHR::Builder&, VkSwapchainCreateInfoKHR);
        VkSwapchainCreateInfoKHR deserialize_struct(stream::VkSwapchainCreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkPresentInfoKHR::Builder&, VkPresentInfoKHR);
        VkPresentInfoKHR deserialize_struct(stream::VkPresentInfoKHR::Reader&);
    

        void serialize_struct(stream::VkDebugReportCallbackCreateInfoEXT::Builder&, VkDebugReportCallbackCreateInfoEXT);
        VkDebugReportCallbackCreateInfoEXT deserialize_struct(stream::VkDebugReportCallbackCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkValidationFlagsEXT::Builder&, VkValidationFlagsEXT);
        VkValidationFlagsEXT deserialize_struct(stream::VkValidationFlagsEXT::Reader&);
    

        void serialize_struct(stream::VkValidationFeaturesEXT::Builder&, VkValidationFeaturesEXT);
        VkValidationFeaturesEXT deserialize_struct(stream::VkValidationFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPipelineRasterizationStateRasterizationOrderAMD::Builder&, VkPipelineRasterizationStateRasterizationOrderAMD);
        VkPipelineRasterizationStateRasterizationOrderAMD deserialize_struct(stream::VkPipelineRasterizationStateRasterizationOrderAMD::Reader&);
    

        void serialize_struct(stream::VkDebugMarkerObjectNameInfoEXT::Builder&, VkDebugMarkerObjectNameInfoEXT);
        VkDebugMarkerObjectNameInfoEXT deserialize_struct(stream::VkDebugMarkerObjectNameInfoEXT::Reader&);
    

        void serialize_struct(stream::VkDebugMarkerObjectTagInfoEXT::Builder&, VkDebugMarkerObjectTagInfoEXT);
        VkDebugMarkerObjectTagInfoEXT deserialize_struct(stream::VkDebugMarkerObjectTagInfoEXT::Reader&);
    

        void serialize_struct(stream::VkDebugMarkerMarkerInfoEXT::Builder&, VkDebugMarkerMarkerInfoEXT);
        VkDebugMarkerMarkerInfoEXT deserialize_struct(stream::VkDebugMarkerMarkerInfoEXT::Reader&);
    

        void serialize_struct(stream::VkDedicatedAllocationImageCreateInfoNV::Builder&, VkDedicatedAllocationImageCreateInfoNV);
        VkDedicatedAllocationImageCreateInfoNV deserialize_struct(stream::VkDedicatedAllocationImageCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkDedicatedAllocationBufferCreateInfoNV::Builder&, VkDedicatedAllocationBufferCreateInfoNV);
        VkDedicatedAllocationBufferCreateInfoNV deserialize_struct(stream::VkDedicatedAllocationBufferCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkDedicatedAllocationMemoryAllocateInfoNV::Builder&, VkDedicatedAllocationMemoryAllocateInfoNV);
        VkDedicatedAllocationMemoryAllocateInfoNV deserialize_struct(stream::VkDedicatedAllocationMemoryAllocateInfoNV::Reader&);
    

        void serialize_struct(stream::VkExternalImageFormatPropertiesNV::Builder&, VkExternalImageFormatPropertiesNV);
        VkExternalImageFormatPropertiesNV deserialize_struct(stream::VkExternalImageFormatPropertiesNV::Reader&);
    

        void serialize_struct(stream::VkExternalMemoryImageCreateInfoNV::Builder&, VkExternalMemoryImageCreateInfoNV);
        VkExternalMemoryImageCreateInfoNV deserialize_struct(stream::VkExternalMemoryImageCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkExportMemoryAllocateInfoNV::Builder&, VkExportMemoryAllocateInfoNV);
        VkExportMemoryAllocateInfoNV deserialize_struct(stream::VkExportMemoryAllocateInfoNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV::Builder&, VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV);
        VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV deserialize_struct(stream::VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV::Builder&, VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV);
        VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV deserialize_struct(stream::VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkDevicePrivateDataCreateInfo::Builder&, VkDevicePrivateDataCreateInfo);
        VkDevicePrivateDataCreateInfo deserialize_struct(stream::VkDevicePrivateDataCreateInfo::Reader&);
    

        void serialize_struct(stream::VkPrivateDataSlotCreateInfo::Builder&, VkPrivateDataSlotCreateInfo);
        VkPrivateDataSlotCreateInfo deserialize_struct(stream::VkPrivateDataSlotCreateInfo::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevicePrivateDataFeatures::Builder&, VkPhysicalDevicePrivateDataFeatures);
        VkPhysicalDevicePrivateDataFeatures deserialize_struct(stream::VkPhysicalDevicePrivateDataFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV::Builder&, VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV);
        VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV deserialize_struct(stream::VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMultiDrawPropertiesEXT::Builder&, VkPhysicalDeviceMultiDrawPropertiesEXT);
        VkPhysicalDeviceMultiDrawPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceMultiDrawPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkGraphicsShaderGroupCreateInfoNV::Builder&, VkGraphicsShaderGroupCreateInfoNV);
        VkGraphicsShaderGroupCreateInfoNV deserialize_struct(stream::VkGraphicsShaderGroupCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkGraphicsPipelineShaderGroupsCreateInfoNV::Builder&, VkGraphicsPipelineShaderGroupsCreateInfoNV);
        VkGraphicsPipelineShaderGroupsCreateInfoNV deserialize_struct(stream::VkGraphicsPipelineShaderGroupsCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkBindShaderGroupIndirectCommandNV::Builder&, VkBindShaderGroupIndirectCommandNV);
        VkBindShaderGroupIndirectCommandNV deserialize_struct(stream::VkBindShaderGroupIndirectCommandNV::Reader&);
    

        void serialize_struct(stream::VkBindIndexBufferIndirectCommandNV::Builder&, VkBindIndexBufferIndirectCommandNV);
        VkBindIndexBufferIndirectCommandNV deserialize_struct(stream::VkBindIndexBufferIndirectCommandNV::Reader&);
    

        void serialize_struct(stream::VkBindVertexBufferIndirectCommandNV::Builder&, VkBindVertexBufferIndirectCommandNV);
        VkBindVertexBufferIndirectCommandNV deserialize_struct(stream::VkBindVertexBufferIndirectCommandNV::Reader&);
    

        void serialize_struct(stream::VkSetStateFlagsIndirectCommandNV::Builder&, VkSetStateFlagsIndirectCommandNV);
        VkSetStateFlagsIndirectCommandNV deserialize_struct(stream::VkSetStateFlagsIndirectCommandNV::Reader&);
    

        void serialize_struct(stream::VkIndirectCommandsStreamNV::Builder&, VkIndirectCommandsStreamNV);
        VkIndirectCommandsStreamNV deserialize_struct(stream::VkIndirectCommandsStreamNV::Reader&);
    

        void serialize_struct(stream::VkIndirectCommandsLayoutTokenNV::Builder&, VkIndirectCommandsLayoutTokenNV);
        VkIndirectCommandsLayoutTokenNV deserialize_struct(stream::VkIndirectCommandsLayoutTokenNV::Reader&);
    

        void serialize_struct(stream::VkIndirectCommandsLayoutCreateInfoNV::Builder&, VkIndirectCommandsLayoutCreateInfoNV);
        VkIndirectCommandsLayoutCreateInfoNV deserialize_struct(stream::VkIndirectCommandsLayoutCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkGeneratedCommandsInfoNV::Builder&, VkGeneratedCommandsInfoNV);
        VkGeneratedCommandsInfoNV deserialize_struct(stream::VkGeneratedCommandsInfoNV::Reader&);
    

        void serialize_struct(stream::VkGeneratedCommandsMemoryRequirementsInfoNV::Builder&, VkGeneratedCommandsMemoryRequirementsInfoNV);
        VkGeneratedCommandsMemoryRequirementsInfoNV deserialize_struct(stream::VkGeneratedCommandsMemoryRequirementsInfoNV::Reader&);
    

        void serialize_struct(stream::VkPipelineIndirectDeviceAddressInfoNV::Builder&, VkPipelineIndirectDeviceAddressInfoNV);
        VkPipelineIndirectDeviceAddressInfoNV deserialize_struct(stream::VkPipelineIndirectDeviceAddressInfoNV::Reader&);
    

        void serialize_struct(stream::VkBindPipelineIndirectCommandNV::Builder&, VkBindPipelineIndirectCommandNV);
        VkBindPipelineIndirectCommandNV deserialize_struct(stream::VkBindPipelineIndirectCommandNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceFeatures2::Builder&, VkPhysicalDeviceFeatures2);
        VkPhysicalDeviceFeatures2 deserialize_struct(stream::VkPhysicalDeviceFeatures2::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceProperties2::Builder&, VkPhysicalDeviceProperties2);
        VkPhysicalDeviceProperties2 deserialize_struct(stream::VkPhysicalDeviceProperties2::Reader&);
    

        void serialize_struct(stream::VkFormatProperties2::Builder&, VkFormatProperties2);
        VkFormatProperties2 deserialize_struct(stream::VkFormatProperties2::Reader&);
    

        void serialize_struct(stream::VkImageFormatProperties2::Builder&, VkImageFormatProperties2);
        VkImageFormatProperties2 deserialize_struct(stream::VkImageFormatProperties2::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceImageFormatInfo2::Builder&, VkPhysicalDeviceImageFormatInfo2);
        VkPhysicalDeviceImageFormatInfo2 deserialize_struct(stream::VkPhysicalDeviceImageFormatInfo2::Reader&);
    

        void serialize_struct(stream::VkQueueFamilyProperties2::Builder&, VkQueueFamilyProperties2);
        VkQueueFamilyProperties2 deserialize_struct(stream::VkQueueFamilyProperties2::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMemoryProperties2::Builder&, VkPhysicalDeviceMemoryProperties2);
        VkPhysicalDeviceMemoryProperties2 deserialize_struct(stream::VkPhysicalDeviceMemoryProperties2::Reader&);
    

        void serialize_struct(stream::VkSparseImageFormatProperties2::Builder&, VkSparseImageFormatProperties2);
        VkSparseImageFormatProperties2 deserialize_struct(stream::VkSparseImageFormatProperties2::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceSparseImageFormatInfo2::Builder&, VkPhysicalDeviceSparseImageFormatInfo2);
        VkPhysicalDeviceSparseImageFormatInfo2 deserialize_struct(stream::VkPhysicalDeviceSparseImageFormatInfo2::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevicePushDescriptorPropertiesKHR::Builder&, VkPhysicalDevicePushDescriptorPropertiesKHR);
        VkPhysicalDevicePushDescriptorPropertiesKHR deserialize_struct(stream::VkPhysicalDevicePushDescriptorPropertiesKHR::Reader&);
    

        void serialize_struct(stream::VkConformanceVersion::Builder&, VkConformanceVersion);
        VkConformanceVersion deserialize_struct(stream::VkConformanceVersion::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDriverProperties::Builder&, VkPhysicalDeviceDriverProperties);
        VkPhysicalDeviceDriverProperties deserialize_struct(stream::VkPhysicalDeviceDriverProperties::Reader&);
    

        void serialize_struct(stream::VkPresentRegionsKHR::Builder&, VkPresentRegionsKHR);
        VkPresentRegionsKHR deserialize_struct(stream::VkPresentRegionsKHR::Reader&);
    

        void serialize_struct(stream::VkPresentRegionKHR::Builder&, VkPresentRegionKHR);
        VkPresentRegionKHR deserialize_struct(stream::VkPresentRegionKHR::Reader&);
    

        void serialize_struct(stream::VkRectLayerKHR::Builder&, VkRectLayerKHR);
        VkRectLayerKHR deserialize_struct(stream::VkRectLayerKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceVariablePointersFeatures::Builder&, VkPhysicalDeviceVariablePointersFeatures);
        VkPhysicalDeviceVariablePointersFeatures deserialize_struct(stream::VkPhysicalDeviceVariablePointersFeatures::Reader&);
    

        void serialize_struct(stream::VkExternalMemoryProperties::Builder&, VkExternalMemoryProperties);
        VkExternalMemoryProperties deserialize_struct(stream::VkExternalMemoryProperties::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceExternalImageFormatInfo::Builder&, VkPhysicalDeviceExternalImageFormatInfo);
        VkPhysicalDeviceExternalImageFormatInfo deserialize_struct(stream::VkPhysicalDeviceExternalImageFormatInfo::Reader&);
    

        void serialize_struct(stream::VkExternalImageFormatProperties::Builder&, VkExternalImageFormatProperties);
        VkExternalImageFormatProperties deserialize_struct(stream::VkExternalImageFormatProperties::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceExternalBufferInfo::Builder&, VkPhysicalDeviceExternalBufferInfo);
        VkPhysicalDeviceExternalBufferInfo deserialize_struct(stream::VkPhysicalDeviceExternalBufferInfo::Reader&);
    

        void serialize_struct(stream::VkExternalBufferProperties::Builder&, VkExternalBufferProperties);
        VkExternalBufferProperties deserialize_struct(stream::VkExternalBufferProperties::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceIDProperties::Builder&, VkPhysicalDeviceIDProperties);
        VkPhysicalDeviceIDProperties deserialize_struct(stream::VkPhysicalDeviceIDProperties::Reader&);
    

        void serialize_struct(stream::VkExternalMemoryImageCreateInfo::Builder&, VkExternalMemoryImageCreateInfo);
        VkExternalMemoryImageCreateInfo deserialize_struct(stream::VkExternalMemoryImageCreateInfo::Reader&);
    

        void serialize_struct(stream::VkExternalMemoryBufferCreateInfo::Builder&, VkExternalMemoryBufferCreateInfo);
        VkExternalMemoryBufferCreateInfo deserialize_struct(stream::VkExternalMemoryBufferCreateInfo::Reader&);
    

        void serialize_struct(stream::VkExportMemoryAllocateInfo::Builder&, VkExportMemoryAllocateInfo);
        VkExportMemoryAllocateInfo deserialize_struct(stream::VkExportMemoryAllocateInfo::Reader&);
    

        void serialize_struct(stream::VkImportMemoryFdInfoKHR::Builder&, VkImportMemoryFdInfoKHR);
        VkImportMemoryFdInfoKHR deserialize_struct(stream::VkImportMemoryFdInfoKHR::Reader&);
    

        void serialize_struct(stream::VkMemoryFdPropertiesKHR::Builder&, VkMemoryFdPropertiesKHR);
        VkMemoryFdPropertiesKHR deserialize_struct(stream::VkMemoryFdPropertiesKHR::Reader&);
    

        void serialize_struct(stream::VkMemoryGetFdInfoKHR::Builder&, VkMemoryGetFdInfoKHR);
        VkMemoryGetFdInfoKHR deserialize_struct(stream::VkMemoryGetFdInfoKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceExternalSemaphoreInfo::Builder&, VkPhysicalDeviceExternalSemaphoreInfo);
        VkPhysicalDeviceExternalSemaphoreInfo deserialize_struct(stream::VkPhysicalDeviceExternalSemaphoreInfo::Reader&);
    

        void serialize_struct(stream::VkExternalSemaphoreProperties::Builder&, VkExternalSemaphoreProperties);
        VkExternalSemaphoreProperties deserialize_struct(stream::VkExternalSemaphoreProperties::Reader&);
    

        void serialize_struct(stream::VkExportSemaphoreCreateInfo::Builder&, VkExportSemaphoreCreateInfo);
        VkExportSemaphoreCreateInfo deserialize_struct(stream::VkExportSemaphoreCreateInfo::Reader&);
    

        void serialize_struct(stream::VkImportSemaphoreFdInfoKHR::Builder&, VkImportSemaphoreFdInfoKHR);
        VkImportSemaphoreFdInfoKHR deserialize_struct(stream::VkImportSemaphoreFdInfoKHR::Reader&);
    

        void serialize_struct(stream::VkSemaphoreGetFdInfoKHR::Builder&, VkSemaphoreGetFdInfoKHR);
        VkSemaphoreGetFdInfoKHR deserialize_struct(stream::VkSemaphoreGetFdInfoKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceExternalFenceInfo::Builder&, VkPhysicalDeviceExternalFenceInfo);
        VkPhysicalDeviceExternalFenceInfo deserialize_struct(stream::VkPhysicalDeviceExternalFenceInfo::Reader&);
    

        void serialize_struct(stream::VkExternalFenceProperties::Builder&, VkExternalFenceProperties);
        VkExternalFenceProperties deserialize_struct(stream::VkExternalFenceProperties::Reader&);
    

        void serialize_struct(stream::VkExportFenceCreateInfo::Builder&, VkExportFenceCreateInfo);
        VkExportFenceCreateInfo deserialize_struct(stream::VkExportFenceCreateInfo::Reader&);
    

        void serialize_struct(stream::VkImportFenceFdInfoKHR::Builder&, VkImportFenceFdInfoKHR);
        VkImportFenceFdInfoKHR deserialize_struct(stream::VkImportFenceFdInfoKHR::Reader&);
    

        void serialize_struct(stream::VkFenceGetFdInfoKHR::Builder&, VkFenceGetFdInfoKHR);
        VkFenceGetFdInfoKHR deserialize_struct(stream::VkFenceGetFdInfoKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMultiviewFeatures::Builder&, VkPhysicalDeviceMultiviewFeatures);
        VkPhysicalDeviceMultiviewFeatures deserialize_struct(stream::VkPhysicalDeviceMultiviewFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMultiviewProperties::Builder&, VkPhysicalDeviceMultiviewProperties);
        VkPhysicalDeviceMultiviewProperties deserialize_struct(stream::VkPhysicalDeviceMultiviewProperties::Reader&);
    

        void serialize_struct(stream::VkRenderPassMultiviewCreateInfo::Builder&, VkRenderPassMultiviewCreateInfo);
        VkRenderPassMultiviewCreateInfo deserialize_struct(stream::VkRenderPassMultiviewCreateInfo::Reader&);
    

        void serialize_struct(stream::VkSurfaceCapabilities2EXT::Builder&, VkSurfaceCapabilities2EXT);
        VkSurfaceCapabilities2EXT deserialize_struct(stream::VkSurfaceCapabilities2EXT::Reader&);
    

        void serialize_struct(stream::VkDisplayPowerInfoEXT::Builder&, VkDisplayPowerInfoEXT);
        VkDisplayPowerInfoEXT deserialize_struct(stream::VkDisplayPowerInfoEXT::Reader&);
    

        void serialize_struct(stream::VkDeviceEventInfoEXT::Builder&, VkDeviceEventInfoEXT);
        VkDeviceEventInfoEXT deserialize_struct(stream::VkDeviceEventInfoEXT::Reader&);
    

        void serialize_struct(stream::VkDisplayEventInfoEXT::Builder&, VkDisplayEventInfoEXT);
        VkDisplayEventInfoEXT deserialize_struct(stream::VkDisplayEventInfoEXT::Reader&);
    

        void serialize_struct(stream::VkSwapchainCounterCreateInfoEXT::Builder&, VkSwapchainCounterCreateInfoEXT);
        VkSwapchainCounterCreateInfoEXT deserialize_struct(stream::VkSwapchainCounterCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceGroupProperties::Builder&, VkPhysicalDeviceGroupProperties);
        VkPhysicalDeviceGroupProperties deserialize_struct(stream::VkPhysicalDeviceGroupProperties::Reader&);
    

        void serialize_struct(stream::VkMemoryAllocateFlagsInfo::Builder&, VkMemoryAllocateFlagsInfo);
        VkMemoryAllocateFlagsInfo deserialize_struct(stream::VkMemoryAllocateFlagsInfo::Reader&);
    

        void serialize_struct(stream::VkBindBufferMemoryInfo::Builder&, VkBindBufferMemoryInfo);
        VkBindBufferMemoryInfo deserialize_struct(stream::VkBindBufferMemoryInfo::Reader&);
    

        void serialize_struct(stream::VkBindBufferMemoryDeviceGroupInfo::Builder&, VkBindBufferMemoryDeviceGroupInfo);
        VkBindBufferMemoryDeviceGroupInfo deserialize_struct(stream::VkBindBufferMemoryDeviceGroupInfo::Reader&);
    

        void serialize_struct(stream::VkBindImageMemoryInfo::Builder&, VkBindImageMemoryInfo);
        VkBindImageMemoryInfo deserialize_struct(stream::VkBindImageMemoryInfo::Reader&);
    

        void serialize_struct(stream::VkBindImageMemoryDeviceGroupInfo::Builder&, VkBindImageMemoryDeviceGroupInfo);
        VkBindImageMemoryDeviceGroupInfo deserialize_struct(stream::VkBindImageMemoryDeviceGroupInfo::Reader&);
    

        void serialize_struct(stream::VkDeviceGroupRenderPassBeginInfo::Builder&, VkDeviceGroupRenderPassBeginInfo);
        VkDeviceGroupRenderPassBeginInfo deserialize_struct(stream::VkDeviceGroupRenderPassBeginInfo::Reader&);
    

        void serialize_struct(stream::VkDeviceGroupCommandBufferBeginInfo::Builder&, VkDeviceGroupCommandBufferBeginInfo);
        VkDeviceGroupCommandBufferBeginInfo deserialize_struct(stream::VkDeviceGroupCommandBufferBeginInfo::Reader&);
    

        void serialize_struct(stream::VkDeviceGroupSubmitInfo::Builder&, VkDeviceGroupSubmitInfo);
        VkDeviceGroupSubmitInfo deserialize_struct(stream::VkDeviceGroupSubmitInfo::Reader&);
    

        void serialize_struct(stream::VkDeviceGroupBindSparseInfo::Builder&, VkDeviceGroupBindSparseInfo);
        VkDeviceGroupBindSparseInfo deserialize_struct(stream::VkDeviceGroupBindSparseInfo::Reader&);
    

        void serialize_struct(stream::VkDeviceGroupPresentCapabilitiesKHR::Builder&, VkDeviceGroupPresentCapabilitiesKHR);
        VkDeviceGroupPresentCapabilitiesKHR deserialize_struct(stream::VkDeviceGroupPresentCapabilitiesKHR::Reader&);
    

        void serialize_struct(stream::VkImageSwapchainCreateInfoKHR::Builder&, VkImageSwapchainCreateInfoKHR);
        VkImageSwapchainCreateInfoKHR deserialize_struct(stream::VkImageSwapchainCreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkBindImageMemorySwapchainInfoKHR::Builder&, VkBindImageMemorySwapchainInfoKHR);
        VkBindImageMemorySwapchainInfoKHR deserialize_struct(stream::VkBindImageMemorySwapchainInfoKHR::Reader&);
    

        void serialize_struct(stream::VkAcquireNextImageInfoKHR::Builder&, VkAcquireNextImageInfoKHR);
        VkAcquireNextImageInfoKHR deserialize_struct(stream::VkAcquireNextImageInfoKHR::Reader&);
    

        void serialize_struct(stream::VkDeviceGroupPresentInfoKHR::Builder&, VkDeviceGroupPresentInfoKHR);
        VkDeviceGroupPresentInfoKHR deserialize_struct(stream::VkDeviceGroupPresentInfoKHR::Reader&);
    

        void serialize_struct(stream::VkDeviceGroupDeviceCreateInfo::Builder&, VkDeviceGroupDeviceCreateInfo);
        VkDeviceGroupDeviceCreateInfo deserialize_struct(stream::VkDeviceGroupDeviceCreateInfo::Reader&);
    

        void serialize_struct(stream::VkDeviceGroupSwapchainCreateInfoKHR::Builder&, VkDeviceGroupSwapchainCreateInfoKHR);
        VkDeviceGroupSwapchainCreateInfoKHR deserialize_struct(stream::VkDeviceGroupSwapchainCreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkDescriptorUpdateTemplateEntry::Builder&, VkDescriptorUpdateTemplateEntry);
        VkDescriptorUpdateTemplateEntry deserialize_struct(stream::VkDescriptorUpdateTemplateEntry::Reader&);
    

        void serialize_struct(stream::VkDescriptorUpdateTemplateCreateInfo::Builder&, VkDescriptorUpdateTemplateCreateInfo);
        VkDescriptorUpdateTemplateCreateInfo deserialize_struct(stream::VkDescriptorUpdateTemplateCreateInfo::Reader&);
    

        void serialize_struct(stream::VkXYColorEXT::Builder&, VkXYColorEXT);
        VkXYColorEXT deserialize_struct(stream::VkXYColorEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevicePresentIdFeaturesKHR::Builder&, VkPhysicalDevicePresentIdFeaturesKHR);
        VkPhysicalDevicePresentIdFeaturesKHR deserialize_struct(stream::VkPhysicalDevicePresentIdFeaturesKHR::Reader&);
    

        void serialize_struct(stream::VkPresentIdKHR::Builder&, VkPresentIdKHR);
        VkPresentIdKHR deserialize_struct(stream::VkPresentIdKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevicePresentWaitFeaturesKHR::Builder&, VkPhysicalDevicePresentWaitFeaturesKHR);
        VkPhysicalDevicePresentWaitFeaturesKHR deserialize_struct(stream::VkPhysicalDevicePresentWaitFeaturesKHR::Reader&);
    

        void serialize_struct(stream::VkHdrMetadataEXT::Builder&, VkHdrMetadataEXT);
        VkHdrMetadataEXT deserialize_struct(stream::VkHdrMetadataEXT::Reader&);
    

        void serialize_struct(stream::VkDisplayNativeHdrSurfaceCapabilitiesAMD::Builder&, VkDisplayNativeHdrSurfaceCapabilitiesAMD);
        VkDisplayNativeHdrSurfaceCapabilitiesAMD deserialize_struct(stream::VkDisplayNativeHdrSurfaceCapabilitiesAMD::Reader&);
    

        void serialize_struct(stream::VkSwapchainDisplayNativeHdrCreateInfoAMD::Builder&, VkSwapchainDisplayNativeHdrCreateInfoAMD);
        VkSwapchainDisplayNativeHdrCreateInfoAMD deserialize_struct(stream::VkSwapchainDisplayNativeHdrCreateInfoAMD::Reader&);
    

        void serialize_struct(stream::VkRefreshCycleDurationGOOGLE::Builder&, VkRefreshCycleDurationGOOGLE);
        VkRefreshCycleDurationGOOGLE deserialize_struct(stream::VkRefreshCycleDurationGOOGLE::Reader&);
    

        void serialize_struct(stream::VkPastPresentationTimingGOOGLE::Builder&, VkPastPresentationTimingGOOGLE);
        VkPastPresentationTimingGOOGLE deserialize_struct(stream::VkPastPresentationTimingGOOGLE::Reader&);
    

        void serialize_struct(stream::VkPresentTimesInfoGOOGLE::Builder&, VkPresentTimesInfoGOOGLE);
        VkPresentTimesInfoGOOGLE deserialize_struct(stream::VkPresentTimesInfoGOOGLE::Reader&);
    

        void serialize_struct(stream::VkPresentTimeGOOGLE::Builder&, VkPresentTimeGOOGLE);
        VkPresentTimeGOOGLE deserialize_struct(stream::VkPresentTimeGOOGLE::Reader&);
    

        void serialize_struct(stream::VkViewportWScalingNV::Builder&, VkViewportWScalingNV);
        VkViewportWScalingNV deserialize_struct(stream::VkViewportWScalingNV::Reader&);
    

        void serialize_struct(stream::VkPipelineViewportWScalingStateCreateInfoNV::Builder&, VkPipelineViewportWScalingStateCreateInfoNV);
        VkPipelineViewportWScalingStateCreateInfoNV deserialize_struct(stream::VkPipelineViewportWScalingStateCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkViewportSwizzleNV::Builder&, VkViewportSwizzleNV);
        VkViewportSwizzleNV deserialize_struct(stream::VkViewportSwizzleNV::Reader&);
    

        void serialize_struct(stream::VkPipelineViewportSwizzleStateCreateInfoNV::Builder&, VkPipelineViewportSwizzleStateCreateInfoNV);
        VkPipelineViewportSwizzleStateCreateInfoNV deserialize_struct(stream::VkPipelineViewportSwizzleStateCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDiscardRectanglePropertiesEXT::Builder&, VkPhysicalDeviceDiscardRectanglePropertiesEXT);
        VkPhysicalDeviceDiscardRectanglePropertiesEXT deserialize_struct(stream::VkPhysicalDeviceDiscardRectanglePropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkPipelineDiscardRectangleStateCreateInfoEXT::Builder&, VkPipelineDiscardRectangleStateCreateInfoEXT);
        VkPipelineDiscardRectangleStateCreateInfoEXT deserialize_struct(stream::VkPipelineDiscardRectangleStateCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::Builder&, VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX);
        VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX deserialize_struct(stream::VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::Reader&);
    

        void serialize_struct(stream::VkInputAttachmentAspectReference::Builder&, VkInputAttachmentAspectReference);
        VkInputAttachmentAspectReference deserialize_struct(stream::VkInputAttachmentAspectReference::Reader&);
    

        void serialize_struct(stream::VkRenderPassInputAttachmentAspectCreateInfo::Builder&, VkRenderPassInputAttachmentAspectCreateInfo);
        VkRenderPassInputAttachmentAspectCreateInfo deserialize_struct(stream::VkRenderPassInputAttachmentAspectCreateInfo::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceSurfaceInfo2KHR::Builder&, VkPhysicalDeviceSurfaceInfo2KHR);
        VkPhysicalDeviceSurfaceInfo2KHR deserialize_struct(stream::VkPhysicalDeviceSurfaceInfo2KHR::Reader&);
    

        void serialize_struct(stream::VkSurfaceCapabilities2KHR::Builder&, VkSurfaceCapabilities2KHR);
        VkSurfaceCapabilities2KHR deserialize_struct(stream::VkSurfaceCapabilities2KHR::Reader&);
    

        void serialize_struct(stream::VkSurfaceFormat2KHR::Builder&, VkSurfaceFormat2KHR);
        VkSurfaceFormat2KHR deserialize_struct(stream::VkSurfaceFormat2KHR::Reader&);
    

        void serialize_struct(stream::VkDisplayProperties2KHR::Builder&, VkDisplayProperties2KHR);
        VkDisplayProperties2KHR deserialize_struct(stream::VkDisplayProperties2KHR::Reader&);
    

        void serialize_struct(stream::VkDisplayPlaneProperties2KHR::Builder&, VkDisplayPlaneProperties2KHR);
        VkDisplayPlaneProperties2KHR deserialize_struct(stream::VkDisplayPlaneProperties2KHR::Reader&);
    

        void serialize_struct(stream::VkDisplayModeProperties2KHR::Builder&, VkDisplayModeProperties2KHR);
        VkDisplayModeProperties2KHR deserialize_struct(stream::VkDisplayModeProperties2KHR::Reader&);
    

        void serialize_struct(stream::VkDisplayPlaneInfo2KHR::Builder&, VkDisplayPlaneInfo2KHR);
        VkDisplayPlaneInfo2KHR deserialize_struct(stream::VkDisplayPlaneInfo2KHR::Reader&);
    

        void serialize_struct(stream::VkDisplayPlaneCapabilities2KHR::Builder&, VkDisplayPlaneCapabilities2KHR);
        VkDisplayPlaneCapabilities2KHR deserialize_struct(stream::VkDisplayPlaneCapabilities2KHR::Reader&);
    

        void serialize_struct(stream::VkSharedPresentSurfaceCapabilitiesKHR::Builder&, VkSharedPresentSurfaceCapabilitiesKHR);
        VkSharedPresentSurfaceCapabilitiesKHR deserialize_struct(stream::VkSharedPresentSurfaceCapabilitiesKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevice16BitStorageFeatures::Builder&, VkPhysicalDevice16BitStorageFeatures);
        VkPhysicalDevice16BitStorageFeatures deserialize_struct(stream::VkPhysicalDevice16BitStorageFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceSubgroupProperties::Builder&, VkPhysicalDeviceSubgroupProperties);
        VkPhysicalDeviceSubgroupProperties deserialize_struct(stream::VkPhysicalDeviceSubgroupProperties::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures::Builder&, VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures);
        VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures deserialize_struct(stream::VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures::Reader&);
    

        void serialize_struct(stream::VkBufferMemoryRequirementsInfo2::Builder&, VkBufferMemoryRequirementsInfo2);
        VkBufferMemoryRequirementsInfo2 deserialize_struct(stream::VkBufferMemoryRequirementsInfo2::Reader&);
    

        void serialize_struct(stream::VkDeviceBufferMemoryRequirements::Builder&, VkDeviceBufferMemoryRequirements);
        VkDeviceBufferMemoryRequirements deserialize_struct(stream::VkDeviceBufferMemoryRequirements::Reader&);
    

        void serialize_struct(stream::VkImageMemoryRequirementsInfo2::Builder&, VkImageMemoryRequirementsInfo2);
        VkImageMemoryRequirementsInfo2 deserialize_struct(stream::VkImageMemoryRequirementsInfo2::Reader&);
    

        void serialize_struct(stream::VkImageSparseMemoryRequirementsInfo2::Builder&, VkImageSparseMemoryRequirementsInfo2);
        VkImageSparseMemoryRequirementsInfo2 deserialize_struct(stream::VkImageSparseMemoryRequirementsInfo2::Reader&);
    

        void serialize_struct(stream::VkDeviceImageMemoryRequirements::Builder&, VkDeviceImageMemoryRequirements);
        VkDeviceImageMemoryRequirements deserialize_struct(stream::VkDeviceImageMemoryRequirements::Reader&);
    

        void serialize_struct(stream::VkMemoryRequirements2::Builder&, VkMemoryRequirements2);
        VkMemoryRequirements2 deserialize_struct(stream::VkMemoryRequirements2::Reader&);
    

        void serialize_struct(stream::VkSparseImageMemoryRequirements2::Builder&, VkSparseImageMemoryRequirements2);
        VkSparseImageMemoryRequirements2 deserialize_struct(stream::VkSparseImageMemoryRequirements2::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevicePointClippingProperties::Builder&, VkPhysicalDevicePointClippingProperties);
        VkPhysicalDevicePointClippingProperties deserialize_struct(stream::VkPhysicalDevicePointClippingProperties::Reader&);
    

        void serialize_struct(stream::VkMemoryDedicatedRequirements::Builder&, VkMemoryDedicatedRequirements);
        VkMemoryDedicatedRequirements deserialize_struct(stream::VkMemoryDedicatedRequirements::Reader&);
    

        void serialize_struct(stream::VkMemoryDedicatedAllocateInfo::Builder&, VkMemoryDedicatedAllocateInfo);
        VkMemoryDedicatedAllocateInfo deserialize_struct(stream::VkMemoryDedicatedAllocateInfo::Reader&);
    

        void serialize_struct(stream::VkImageViewUsageCreateInfo::Builder&, VkImageViewUsageCreateInfo);
        VkImageViewUsageCreateInfo deserialize_struct(stream::VkImageViewUsageCreateInfo::Reader&);
    

        void serialize_struct(stream::VkImageViewSlicedCreateInfoEXT::Builder&, VkImageViewSlicedCreateInfoEXT);
        VkImageViewSlicedCreateInfoEXT deserialize_struct(stream::VkImageViewSlicedCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPipelineTessellationDomainOriginStateCreateInfo::Builder&, VkPipelineTessellationDomainOriginStateCreateInfo);
        VkPipelineTessellationDomainOriginStateCreateInfo deserialize_struct(stream::VkPipelineTessellationDomainOriginStateCreateInfo::Reader&);
    

        void serialize_struct(stream::VkSamplerYcbcrConversionInfo::Builder&, VkSamplerYcbcrConversionInfo);
        VkSamplerYcbcrConversionInfo deserialize_struct(stream::VkSamplerYcbcrConversionInfo::Reader&);
    

        void serialize_struct(stream::VkSamplerYcbcrConversionCreateInfo::Builder&, VkSamplerYcbcrConversionCreateInfo);
        VkSamplerYcbcrConversionCreateInfo deserialize_struct(stream::VkSamplerYcbcrConversionCreateInfo::Reader&);
    

        void serialize_struct(stream::VkBindImagePlaneMemoryInfo::Builder&, VkBindImagePlaneMemoryInfo);
        VkBindImagePlaneMemoryInfo deserialize_struct(stream::VkBindImagePlaneMemoryInfo::Reader&);
    

        void serialize_struct(stream::VkImagePlaneMemoryRequirementsInfo::Builder&, VkImagePlaneMemoryRequirementsInfo);
        VkImagePlaneMemoryRequirementsInfo deserialize_struct(stream::VkImagePlaneMemoryRequirementsInfo::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceSamplerYcbcrConversionFeatures::Builder&, VkPhysicalDeviceSamplerYcbcrConversionFeatures);
        VkPhysicalDeviceSamplerYcbcrConversionFeatures deserialize_struct(stream::VkPhysicalDeviceSamplerYcbcrConversionFeatures::Reader&);
    

        void serialize_struct(stream::VkSamplerYcbcrConversionImageFormatProperties::Builder&, VkSamplerYcbcrConversionImageFormatProperties);
        VkSamplerYcbcrConversionImageFormatProperties deserialize_struct(stream::VkSamplerYcbcrConversionImageFormatProperties::Reader&);
    

        void serialize_struct(stream::VkTextureLODGatherFormatPropertiesAMD::Builder&, VkTextureLODGatherFormatPropertiesAMD);
        VkTextureLODGatherFormatPropertiesAMD deserialize_struct(stream::VkTextureLODGatherFormatPropertiesAMD::Reader&);
    

        void serialize_struct(stream::VkConditionalRenderingBeginInfoEXT::Builder&, VkConditionalRenderingBeginInfoEXT);
        VkConditionalRenderingBeginInfoEXT deserialize_struct(stream::VkConditionalRenderingBeginInfoEXT::Reader&);
    

        void serialize_struct(stream::VkProtectedSubmitInfo::Builder&, VkProtectedSubmitInfo);
        VkProtectedSubmitInfo deserialize_struct(stream::VkProtectedSubmitInfo::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceProtectedMemoryFeatures::Builder&, VkPhysicalDeviceProtectedMemoryFeatures);
        VkPhysicalDeviceProtectedMemoryFeatures deserialize_struct(stream::VkPhysicalDeviceProtectedMemoryFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceProtectedMemoryProperties::Builder&, VkPhysicalDeviceProtectedMemoryProperties);
        VkPhysicalDeviceProtectedMemoryProperties deserialize_struct(stream::VkPhysicalDeviceProtectedMemoryProperties::Reader&);
    

        void serialize_struct(stream::VkDeviceQueueInfo2::Builder&, VkDeviceQueueInfo2);
        VkDeviceQueueInfo2 deserialize_struct(stream::VkDeviceQueueInfo2::Reader&);
    

        void serialize_struct(stream::VkPipelineCoverageToColorStateCreateInfoNV::Builder&, VkPipelineCoverageToColorStateCreateInfoNV);
        VkPipelineCoverageToColorStateCreateInfoNV deserialize_struct(stream::VkPipelineCoverageToColorStateCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceSamplerFilterMinmaxProperties::Builder&, VkPhysicalDeviceSamplerFilterMinmaxProperties);
        VkPhysicalDeviceSamplerFilterMinmaxProperties deserialize_struct(stream::VkPhysicalDeviceSamplerFilterMinmaxProperties::Reader&);
    

        void serialize_struct(stream::VkSampleLocationEXT::Builder&, VkSampleLocationEXT);
        VkSampleLocationEXT deserialize_struct(stream::VkSampleLocationEXT::Reader&);
    

        void serialize_struct(stream::VkSampleLocationsInfoEXT::Builder&, VkSampleLocationsInfoEXT);
        VkSampleLocationsInfoEXT deserialize_struct(stream::VkSampleLocationsInfoEXT::Reader&);
    

        void serialize_struct(stream::VkAttachmentSampleLocationsEXT::Builder&, VkAttachmentSampleLocationsEXT);
        VkAttachmentSampleLocationsEXT deserialize_struct(stream::VkAttachmentSampleLocationsEXT::Reader&);
    

        void serialize_struct(stream::VkSubpassSampleLocationsEXT::Builder&, VkSubpassSampleLocationsEXT);
        VkSubpassSampleLocationsEXT deserialize_struct(stream::VkSubpassSampleLocationsEXT::Reader&);
    

        void serialize_struct(stream::VkRenderPassSampleLocationsBeginInfoEXT::Builder&, VkRenderPassSampleLocationsBeginInfoEXT);
        VkRenderPassSampleLocationsBeginInfoEXT deserialize_struct(stream::VkRenderPassSampleLocationsBeginInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPipelineSampleLocationsStateCreateInfoEXT::Builder&, VkPipelineSampleLocationsStateCreateInfoEXT);
        VkPipelineSampleLocationsStateCreateInfoEXT deserialize_struct(stream::VkPipelineSampleLocationsStateCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceSampleLocationsPropertiesEXT::Builder&, VkPhysicalDeviceSampleLocationsPropertiesEXT);
        VkPhysicalDeviceSampleLocationsPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceSampleLocationsPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkMultisamplePropertiesEXT::Builder&, VkMultisamplePropertiesEXT);
        VkMultisamplePropertiesEXT deserialize_struct(stream::VkMultisamplePropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkSamplerReductionModeCreateInfo::Builder&, VkSamplerReductionModeCreateInfo);
        VkSamplerReductionModeCreateInfo deserialize_struct(stream::VkSamplerReductionModeCreateInfo::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::Builder&, VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT);
        VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMultiDrawFeaturesEXT::Builder&, VkPhysicalDeviceMultiDrawFeaturesEXT);
        VkPhysicalDeviceMultiDrawFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceMultiDrawFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::Builder&, VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT);
        VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkPipelineColorBlendAdvancedStateCreateInfoEXT::Builder&, VkPipelineColorBlendAdvancedStateCreateInfoEXT);
        VkPipelineColorBlendAdvancedStateCreateInfoEXT deserialize_struct(stream::VkPipelineColorBlendAdvancedStateCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceInlineUniformBlockFeatures::Builder&, VkPhysicalDeviceInlineUniformBlockFeatures);
        VkPhysicalDeviceInlineUniformBlockFeatures deserialize_struct(stream::VkPhysicalDeviceInlineUniformBlockFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceInlineUniformBlockProperties::Builder&, VkPhysicalDeviceInlineUniformBlockProperties);
        VkPhysicalDeviceInlineUniformBlockProperties deserialize_struct(stream::VkPhysicalDeviceInlineUniformBlockProperties::Reader&);
    

        void serialize_struct(stream::VkWriteDescriptorSetInlineUniformBlock::Builder&, VkWriteDescriptorSetInlineUniformBlock);
        VkWriteDescriptorSetInlineUniformBlock deserialize_struct(stream::VkWriteDescriptorSetInlineUniformBlock::Reader&);
    

        void serialize_struct(stream::VkDescriptorPoolInlineUniformBlockCreateInfo::Builder&, VkDescriptorPoolInlineUniformBlockCreateInfo);
        VkDescriptorPoolInlineUniformBlockCreateInfo deserialize_struct(stream::VkDescriptorPoolInlineUniformBlockCreateInfo::Reader&);
    

        void serialize_struct(stream::VkPipelineCoverageModulationStateCreateInfoNV::Builder&, VkPipelineCoverageModulationStateCreateInfoNV);
        VkPipelineCoverageModulationStateCreateInfoNV deserialize_struct(stream::VkPipelineCoverageModulationStateCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkImageFormatListCreateInfo::Builder&, VkImageFormatListCreateInfo);
        VkImageFormatListCreateInfo deserialize_struct(stream::VkImageFormatListCreateInfo::Reader&);
    

        void serialize_struct(stream::VkValidationCacheCreateInfoEXT::Builder&, VkValidationCacheCreateInfoEXT);
        VkValidationCacheCreateInfoEXT deserialize_struct(stream::VkValidationCacheCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkShaderModuleValidationCacheCreateInfoEXT::Builder&, VkShaderModuleValidationCacheCreateInfoEXT);
        VkShaderModuleValidationCacheCreateInfoEXT deserialize_struct(stream::VkShaderModuleValidationCacheCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMaintenance3Properties::Builder&, VkPhysicalDeviceMaintenance3Properties);
        VkPhysicalDeviceMaintenance3Properties deserialize_struct(stream::VkPhysicalDeviceMaintenance3Properties::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMaintenance4Features::Builder&, VkPhysicalDeviceMaintenance4Features);
        VkPhysicalDeviceMaintenance4Features deserialize_struct(stream::VkPhysicalDeviceMaintenance4Features::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMaintenance4Properties::Builder&, VkPhysicalDeviceMaintenance4Properties);
        VkPhysicalDeviceMaintenance4Properties deserialize_struct(stream::VkPhysicalDeviceMaintenance4Properties::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMaintenance5FeaturesKHR::Builder&, VkPhysicalDeviceMaintenance5FeaturesKHR);
        VkPhysicalDeviceMaintenance5FeaturesKHR deserialize_struct(stream::VkPhysicalDeviceMaintenance5FeaturesKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMaintenance5PropertiesKHR::Builder&, VkPhysicalDeviceMaintenance5PropertiesKHR);
        VkPhysicalDeviceMaintenance5PropertiesKHR deserialize_struct(stream::VkPhysicalDeviceMaintenance5PropertiesKHR::Reader&);
    

        void serialize_struct(stream::VkRenderingAreaInfoKHR::Builder&, VkRenderingAreaInfoKHR);
        VkRenderingAreaInfoKHR deserialize_struct(stream::VkRenderingAreaInfoKHR::Reader&);
    

        void serialize_struct(stream::VkDescriptorSetLayoutSupport::Builder&, VkDescriptorSetLayoutSupport);
        VkDescriptorSetLayoutSupport deserialize_struct(stream::VkDescriptorSetLayoutSupport::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderDrawParametersFeatures::Builder&, VkPhysicalDeviceShaderDrawParametersFeatures);
        VkPhysicalDeviceShaderDrawParametersFeatures deserialize_struct(stream::VkPhysicalDeviceShaderDrawParametersFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderFloat16Int8Features::Builder&, VkPhysicalDeviceShaderFloat16Int8Features);
        VkPhysicalDeviceShaderFloat16Int8Features deserialize_struct(stream::VkPhysicalDeviceShaderFloat16Int8Features::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceFloatControlsProperties::Builder&, VkPhysicalDeviceFloatControlsProperties);
        VkPhysicalDeviceFloatControlsProperties deserialize_struct(stream::VkPhysicalDeviceFloatControlsProperties::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceHostQueryResetFeatures::Builder&, VkPhysicalDeviceHostQueryResetFeatures);
        VkPhysicalDeviceHostQueryResetFeatures deserialize_struct(stream::VkPhysicalDeviceHostQueryResetFeatures::Reader&);
    

        void serialize_struct(stream::VkShaderResourceUsageAMD::Builder&, VkShaderResourceUsageAMD);
        VkShaderResourceUsageAMD deserialize_struct(stream::VkShaderResourceUsageAMD::Reader&);
    

        void serialize_struct(stream::VkShaderStatisticsInfoAMD::Builder&, VkShaderStatisticsInfoAMD);
        VkShaderStatisticsInfoAMD deserialize_struct(stream::VkShaderStatisticsInfoAMD::Reader&);
    

        void serialize_struct(stream::VkDeviceQueueGlobalPriorityCreateInfoKHR::Builder&, VkDeviceQueueGlobalPriorityCreateInfoKHR);
        VkDeviceQueueGlobalPriorityCreateInfoKHR deserialize_struct(stream::VkDeviceQueueGlobalPriorityCreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR::Builder&, VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR);
        VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR deserialize_struct(stream::VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR::Reader&);
    

        void serialize_struct(stream::VkQueueFamilyGlobalPriorityPropertiesKHR::Builder&, VkQueueFamilyGlobalPriorityPropertiesKHR);
        VkQueueFamilyGlobalPriorityPropertiesKHR deserialize_struct(stream::VkQueueFamilyGlobalPriorityPropertiesKHR::Reader&);
    

        void serialize_struct(stream::VkDebugUtilsObjectNameInfoEXT::Builder&, VkDebugUtilsObjectNameInfoEXT);
        VkDebugUtilsObjectNameInfoEXT deserialize_struct(stream::VkDebugUtilsObjectNameInfoEXT::Reader&);
    

        void serialize_struct(stream::VkDebugUtilsObjectTagInfoEXT::Builder&, VkDebugUtilsObjectTagInfoEXT);
        VkDebugUtilsObjectTagInfoEXT deserialize_struct(stream::VkDebugUtilsObjectTagInfoEXT::Reader&);
    

        void serialize_struct(stream::VkDebugUtilsLabelEXT::Builder&, VkDebugUtilsLabelEXT);
        VkDebugUtilsLabelEXT deserialize_struct(stream::VkDebugUtilsLabelEXT::Reader&);
    

        void serialize_struct(stream::VkDebugUtilsMessengerCreateInfoEXT::Builder&, VkDebugUtilsMessengerCreateInfoEXT);
        VkDebugUtilsMessengerCreateInfoEXT deserialize_struct(stream::VkDebugUtilsMessengerCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkDebugUtilsMessengerCallbackDataEXT::Builder&, VkDebugUtilsMessengerCallbackDataEXT);
        VkDebugUtilsMessengerCallbackDataEXT deserialize_struct(stream::VkDebugUtilsMessengerCallbackDataEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDeviceMemoryReportFeaturesEXT::Builder&, VkPhysicalDeviceDeviceMemoryReportFeaturesEXT);
        VkPhysicalDeviceDeviceMemoryReportFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceDeviceMemoryReportFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkDeviceDeviceMemoryReportCreateInfoEXT::Builder&, VkDeviceDeviceMemoryReportCreateInfoEXT);
        VkDeviceDeviceMemoryReportCreateInfoEXT deserialize_struct(stream::VkDeviceDeviceMemoryReportCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkDeviceMemoryReportCallbackDataEXT::Builder&, VkDeviceMemoryReportCallbackDataEXT);
        VkDeviceMemoryReportCallbackDataEXT deserialize_struct(stream::VkDeviceMemoryReportCallbackDataEXT::Reader&);
    

        void serialize_struct(stream::VkImportMemoryHostPointerInfoEXT::Builder&, VkImportMemoryHostPointerInfoEXT);
        VkImportMemoryHostPointerInfoEXT deserialize_struct(stream::VkImportMemoryHostPointerInfoEXT::Reader&);
    

        void serialize_struct(stream::VkMemoryHostPointerPropertiesEXT::Builder&, VkMemoryHostPointerPropertiesEXT);
        VkMemoryHostPointerPropertiesEXT deserialize_struct(stream::VkMemoryHostPointerPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceExternalMemoryHostPropertiesEXT::Builder&, VkPhysicalDeviceExternalMemoryHostPropertiesEXT);
        VkPhysicalDeviceExternalMemoryHostPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceExternalMemoryHostPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceConservativeRasterizationPropertiesEXT::Builder&, VkPhysicalDeviceConservativeRasterizationPropertiesEXT);
        VkPhysicalDeviceConservativeRasterizationPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceConservativeRasterizationPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkCalibratedTimestampInfoEXT::Builder&, VkCalibratedTimestampInfoEXT);
        VkCalibratedTimestampInfoEXT deserialize_struct(stream::VkCalibratedTimestampInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderCorePropertiesAMD::Builder&, VkPhysicalDeviceShaderCorePropertiesAMD);
        VkPhysicalDeviceShaderCorePropertiesAMD deserialize_struct(stream::VkPhysicalDeviceShaderCorePropertiesAMD::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderCoreProperties2AMD::Builder&, VkPhysicalDeviceShaderCoreProperties2AMD);
        VkPhysicalDeviceShaderCoreProperties2AMD deserialize_struct(stream::VkPhysicalDeviceShaderCoreProperties2AMD::Reader&);
    

        void serialize_struct(stream::VkPipelineRasterizationConservativeStateCreateInfoEXT::Builder&, VkPipelineRasterizationConservativeStateCreateInfoEXT);
        VkPipelineRasterizationConservativeStateCreateInfoEXT deserialize_struct(stream::VkPipelineRasterizationConservativeStateCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDescriptorIndexingFeatures::Builder&, VkPhysicalDeviceDescriptorIndexingFeatures);
        VkPhysicalDeviceDescriptorIndexingFeatures deserialize_struct(stream::VkPhysicalDeviceDescriptorIndexingFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDescriptorIndexingProperties::Builder&, VkPhysicalDeviceDescriptorIndexingProperties);
        VkPhysicalDeviceDescriptorIndexingProperties deserialize_struct(stream::VkPhysicalDeviceDescriptorIndexingProperties::Reader&);
    

        void serialize_struct(stream::VkDescriptorSetLayoutBindingFlagsCreateInfo::Builder&, VkDescriptorSetLayoutBindingFlagsCreateInfo);
        VkDescriptorSetLayoutBindingFlagsCreateInfo deserialize_struct(stream::VkDescriptorSetLayoutBindingFlagsCreateInfo::Reader&);
    

        void serialize_struct(stream::VkDescriptorSetVariableDescriptorCountAllocateInfo::Builder&, VkDescriptorSetVariableDescriptorCountAllocateInfo);
        VkDescriptorSetVariableDescriptorCountAllocateInfo deserialize_struct(stream::VkDescriptorSetVariableDescriptorCountAllocateInfo::Reader&);
    

        void serialize_struct(stream::VkDescriptorSetVariableDescriptorCountLayoutSupport::Builder&, VkDescriptorSetVariableDescriptorCountLayoutSupport);
        VkDescriptorSetVariableDescriptorCountLayoutSupport deserialize_struct(stream::VkDescriptorSetVariableDescriptorCountLayoutSupport::Reader&);
    

        void serialize_struct(stream::VkAttachmentDescription2::Builder&, VkAttachmentDescription2);
        VkAttachmentDescription2 deserialize_struct(stream::VkAttachmentDescription2::Reader&);
    

        void serialize_struct(stream::VkAttachmentReference2::Builder&, VkAttachmentReference2);
        VkAttachmentReference2 deserialize_struct(stream::VkAttachmentReference2::Reader&);
    

        void serialize_struct(stream::VkSubpassDescription2::Builder&, VkSubpassDescription2);
        VkSubpassDescription2 deserialize_struct(stream::VkSubpassDescription2::Reader&);
    

        void serialize_struct(stream::VkSubpassDependency2::Builder&, VkSubpassDependency2);
        VkSubpassDependency2 deserialize_struct(stream::VkSubpassDependency2::Reader&);
    

        void serialize_struct(stream::VkRenderPassCreateInfo2::Builder&, VkRenderPassCreateInfo2);
        VkRenderPassCreateInfo2 deserialize_struct(stream::VkRenderPassCreateInfo2::Reader&);
    

        void serialize_struct(stream::VkSubpassBeginInfo::Builder&, VkSubpassBeginInfo);
        VkSubpassBeginInfo deserialize_struct(stream::VkSubpassBeginInfo::Reader&);
    

        void serialize_struct(stream::VkSubpassEndInfo::Builder&, VkSubpassEndInfo);
        VkSubpassEndInfo deserialize_struct(stream::VkSubpassEndInfo::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceTimelineSemaphoreFeatures::Builder&, VkPhysicalDeviceTimelineSemaphoreFeatures);
        VkPhysicalDeviceTimelineSemaphoreFeatures deserialize_struct(stream::VkPhysicalDeviceTimelineSemaphoreFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceTimelineSemaphoreProperties::Builder&, VkPhysicalDeviceTimelineSemaphoreProperties);
        VkPhysicalDeviceTimelineSemaphoreProperties deserialize_struct(stream::VkPhysicalDeviceTimelineSemaphoreProperties::Reader&);
    

        void serialize_struct(stream::VkSemaphoreTypeCreateInfo::Builder&, VkSemaphoreTypeCreateInfo);
        VkSemaphoreTypeCreateInfo deserialize_struct(stream::VkSemaphoreTypeCreateInfo::Reader&);
    

        void serialize_struct(stream::VkTimelineSemaphoreSubmitInfo::Builder&, VkTimelineSemaphoreSubmitInfo);
        VkTimelineSemaphoreSubmitInfo deserialize_struct(stream::VkTimelineSemaphoreSubmitInfo::Reader&);
    

        void serialize_struct(stream::VkSemaphoreWaitInfo::Builder&, VkSemaphoreWaitInfo);
        VkSemaphoreWaitInfo deserialize_struct(stream::VkSemaphoreWaitInfo::Reader&);
    

        void serialize_struct(stream::VkSemaphoreSignalInfo::Builder&, VkSemaphoreSignalInfo);
        VkSemaphoreSignalInfo deserialize_struct(stream::VkSemaphoreSignalInfo::Reader&);
    

        void serialize_struct(stream::VkVertexInputBindingDivisorDescriptionEXT::Builder&, VkVertexInputBindingDivisorDescriptionEXT);
        VkVertexInputBindingDivisorDescriptionEXT deserialize_struct(stream::VkVertexInputBindingDivisorDescriptionEXT::Reader&);
    

        void serialize_struct(stream::VkPipelineVertexInputDivisorStateCreateInfoEXT::Builder&, VkPipelineVertexInputDivisorStateCreateInfoEXT);
        VkPipelineVertexInputDivisorStateCreateInfoEXT deserialize_struct(stream::VkPipelineVertexInputDivisorStateCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::Builder&, VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT);
        VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevicePCIBusInfoPropertiesEXT::Builder&, VkPhysicalDevicePCIBusInfoPropertiesEXT);
        VkPhysicalDevicePCIBusInfoPropertiesEXT deserialize_struct(stream::VkPhysicalDevicePCIBusInfoPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkCommandBufferInheritanceConditionalRenderingInfoEXT::Builder&, VkCommandBufferInheritanceConditionalRenderingInfoEXT);
        VkCommandBufferInheritanceConditionalRenderingInfoEXT deserialize_struct(stream::VkCommandBufferInheritanceConditionalRenderingInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevice8BitStorageFeatures::Builder&, VkPhysicalDevice8BitStorageFeatures);
        VkPhysicalDevice8BitStorageFeatures deserialize_struct(stream::VkPhysicalDevice8BitStorageFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceConditionalRenderingFeaturesEXT::Builder&, VkPhysicalDeviceConditionalRenderingFeaturesEXT);
        VkPhysicalDeviceConditionalRenderingFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceConditionalRenderingFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceVulkanMemoryModelFeatures::Builder&, VkPhysicalDeviceVulkanMemoryModelFeatures);
        VkPhysicalDeviceVulkanMemoryModelFeatures deserialize_struct(stream::VkPhysicalDeviceVulkanMemoryModelFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderAtomicInt64Features::Builder&, VkPhysicalDeviceShaderAtomicInt64Features);
        VkPhysicalDeviceShaderAtomicInt64Features deserialize_struct(stream::VkPhysicalDeviceShaderAtomicInt64Features::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderAtomicFloatFeaturesEXT::Builder&, VkPhysicalDeviceShaderAtomicFloatFeaturesEXT);
        VkPhysicalDeviceShaderAtomicFloatFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceShaderAtomicFloatFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT::Builder&, VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT);
        VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT deserialize_struct(stream::VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::Builder&, VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT);
        VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkQueueFamilyCheckpointPropertiesNV::Builder&, VkQueueFamilyCheckpointPropertiesNV);
        VkQueueFamilyCheckpointPropertiesNV deserialize_struct(stream::VkQueueFamilyCheckpointPropertiesNV::Reader&);
    

        void serialize_struct(stream::VkCheckpointDataNV::Builder&, VkCheckpointDataNV);
        VkCheckpointDataNV deserialize_struct(stream::VkCheckpointDataNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDepthStencilResolveProperties::Builder&, VkPhysicalDeviceDepthStencilResolveProperties);
        VkPhysicalDeviceDepthStencilResolveProperties deserialize_struct(stream::VkPhysicalDeviceDepthStencilResolveProperties::Reader&);
    

        void serialize_struct(stream::VkSubpassDescriptionDepthStencilResolve::Builder&, VkSubpassDescriptionDepthStencilResolve);
        VkSubpassDescriptionDepthStencilResolve deserialize_struct(stream::VkSubpassDescriptionDepthStencilResolve::Reader&);
    

        void serialize_struct(stream::VkImageViewASTCDecodeModeEXT::Builder&, VkImageViewASTCDecodeModeEXT);
        VkImageViewASTCDecodeModeEXT deserialize_struct(stream::VkImageViewASTCDecodeModeEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceASTCDecodeFeaturesEXT::Builder&, VkPhysicalDeviceASTCDecodeFeaturesEXT);
        VkPhysicalDeviceASTCDecodeFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceASTCDecodeFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceTransformFeedbackFeaturesEXT::Builder&, VkPhysicalDeviceTransformFeedbackFeaturesEXT);
        VkPhysicalDeviceTransformFeedbackFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceTransformFeedbackFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceTransformFeedbackPropertiesEXT::Builder&, VkPhysicalDeviceTransformFeedbackPropertiesEXT);
        VkPhysicalDeviceTransformFeedbackPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceTransformFeedbackPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkPipelineRasterizationStateStreamCreateInfoEXT::Builder&, VkPipelineRasterizationStateStreamCreateInfoEXT);
        VkPipelineRasterizationStateStreamCreateInfoEXT deserialize_struct(stream::VkPipelineRasterizationStateStreamCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV::Builder&, VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV);
        VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV deserialize_struct(stream::VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkPipelineRepresentativeFragmentTestStateCreateInfoNV::Builder&, VkPipelineRepresentativeFragmentTestStateCreateInfoNV);
        VkPipelineRepresentativeFragmentTestStateCreateInfoNV deserialize_struct(stream::VkPipelineRepresentativeFragmentTestStateCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceExclusiveScissorFeaturesNV::Builder&, VkPhysicalDeviceExclusiveScissorFeaturesNV);
        VkPhysicalDeviceExclusiveScissorFeaturesNV deserialize_struct(stream::VkPhysicalDeviceExclusiveScissorFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkPipelineViewportExclusiveScissorStateCreateInfoNV::Builder&, VkPipelineViewportExclusiveScissorStateCreateInfoNV);
        VkPipelineViewportExclusiveScissorStateCreateInfoNV deserialize_struct(stream::VkPipelineViewportExclusiveScissorStateCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceCornerSampledImageFeaturesNV::Builder&, VkPhysicalDeviceCornerSampledImageFeaturesNV);
        VkPhysicalDeviceCornerSampledImageFeaturesNV deserialize_struct(stream::VkPhysicalDeviceCornerSampledImageFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::Builder&, VkPhysicalDeviceComputeShaderDerivativesFeaturesNV);
        VkPhysicalDeviceComputeShaderDerivativesFeaturesNV deserialize_struct(stream::VkPhysicalDeviceComputeShaderDerivativesFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderImageFootprintFeaturesNV::Builder&, VkPhysicalDeviceShaderImageFootprintFeaturesNV);
        VkPhysicalDeviceShaderImageFootprintFeaturesNV deserialize_struct(stream::VkPhysicalDeviceShaderImageFootprintFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV::Builder&, VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV);
        VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV deserialize_struct(stream::VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceCopyMemoryIndirectFeaturesNV::Builder&, VkPhysicalDeviceCopyMemoryIndirectFeaturesNV);
        VkPhysicalDeviceCopyMemoryIndirectFeaturesNV deserialize_struct(stream::VkPhysicalDeviceCopyMemoryIndirectFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceCopyMemoryIndirectPropertiesNV::Builder&, VkPhysicalDeviceCopyMemoryIndirectPropertiesNV);
        VkPhysicalDeviceCopyMemoryIndirectPropertiesNV deserialize_struct(stream::VkPhysicalDeviceCopyMemoryIndirectPropertiesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMemoryDecompressionFeaturesNV::Builder&, VkPhysicalDeviceMemoryDecompressionFeaturesNV);
        VkPhysicalDeviceMemoryDecompressionFeaturesNV deserialize_struct(stream::VkPhysicalDeviceMemoryDecompressionFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMemoryDecompressionPropertiesNV::Builder&, VkPhysicalDeviceMemoryDecompressionPropertiesNV);
        VkPhysicalDeviceMemoryDecompressionPropertiesNV deserialize_struct(stream::VkPhysicalDeviceMemoryDecompressionPropertiesNV::Reader&);
    

        void serialize_struct(stream::VkShadingRatePaletteNV::Builder&, VkShadingRatePaletteNV);
        VkShadingRatePaletteNV deserialize_struct(stream::VkShadingRatePaletteNV::Reader&);
    

        void serialize_struct(stream::VkPipelineViewportShadingRateImageStateCreateInfoNV::Builder&, VkPipelineViewportShadingRateImageStateCreateInfoNV);
        VkPipelineViewportShadingRateImageStateCreateInfoNV deserialize_struct(stream::VkPipelineViewportShadingRateImageStateCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShadingRateImageFeaturesNV::Builder&, VkPhysicalDeviceShadingRateImageFeaturesNV);
        VkPhysicalDeviceShadingRateImageFeaturesNV deserialize_struct(stream::VkPhysicalDeviceShadingRateImageFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShadingRateImagePropertiesNV::Builder&, VkPhysicalDeviceShadingRateImagePropertiesNV);
        VkPhysicalDeviceShadingRateImagePropertiesNV deserialize_struct(stream::VkPhysicalDeviceShadingRateImagePropertiesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceInvocationMaskFeaturesHUAWEI::Builder&, VkPhysicalDeviceInvocationMaskFeaturesHUAWEI);
        VkPhysicalDeviceInvocationMaskFeaturesHUAWEI deserialize_struct(stream::VkPhysicalDeviceInvocationMaskFeaturesHUAWEI::Reader&);
    

        void serialize_struct(stream::VkCoarseSampleLocationNV::Builder&, VkCoarseSampleLocationNV);
        VkCoarseSampleLocationNV deserialize_struct(stream::VkCoarseSampleLocationNV::Reader&);
    

        void serialize_struct(stream::VkCoarseSampleOrderCustomNV::Builder&, VkCoarseSampleOrderCustomNV);
        VkCoarseSampleOrderCustomNV deserialize_struct(stream::VkCoarseSampleOrderCustomNV::Reader&);
    

        void serialize_struct(stream::VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::Builder&, VkPipelineViewportCoarseSampleOrderStateCreateInfoNV);
        VkPipelineViewportCoarseSampleOrderStateCreateInfoNV deserialize_struct(stream::VkPipelineViewportCoarseSampleOrderStateCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMeshShaderFeaturesNV::Builder&, VkPhysicalDeviceMeshShaderFeaturesNV);
        VkPhysicalDeviceMeshShaderFeaturesNV deserialize_struct(stream::VkPhysicalDeviceMeshShaderFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMeshShaderPropertiesNV::Builder&, VkPhysicalDeviceMeshShaderPropertiesNV);
        VkPhysicalDeviceMeshShaderPropertiesNV deserialize_struct(stream::VkPhysicalDeviceMeshShaderPropertiesNV::Reader&);
    

        void serialize_struct(stream::VkDrawMeshTasksIndirectCommandNV::Builder&, VkDrawMeshTasksIndirectCommandNV);
        VkDrawMeshTasksIndirectCommandNV deserialize_struct(stream::VkDrawMeshTasksIndirectCommandNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMeshShaderFeaturesEXT::Builder&, VkPhysicalDeviceMeshShaderFeaturesEXT);
        VkPhysicalDeviceMeshShaderFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceMeshShaderFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMeshShaderPropertiesEXT::Builder&, VkPhysicalDeviceMeshShaderPropertiesEXT);
        VkPhysicalDeviceMeshShaderPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceMeshShaderPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkDrawMeshTasksIndirectCommandEXT::Builder&, VkDrawMeshTasksIndirectCommandEXT);
        VkDrawMeshTasksIndirectCommandEXT deserialize_struct(stream::VkDrawMeshTasksIndirectCommandEXT::Reader&);
    

        void serialize_struct(stream::VkRayTracingShaderGroupCreateInfoNV::Builder&, VkRayTracingShaderGroupCreateInfoNV);
        VkRayTracingShaderGroupCreateInfoNV deserialize_struct(stream::VkRayTracingShaderGroupCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkRayTracingShaderGroupCreateInfoKHR::Builder&, VkRayTracingShaderGroupCreateInfoKHR);
        VkRayTracingShaderGroupCreateInfoKHR deserialize_struct(stream::VkRayTracingShaderGroupCreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkRayTracingPipelineCreateInfoNV::Builder&, VkRayTracingPipelineCreateInfoNV);
        VkRayTracingPipelineCreateInfoNV deserialize_struct(stream::VkRayTracingPipelineCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkRayTracingPipelineCreateInfoKHR::Builder&, VkRayTracingPipelineCreateInfoKHR);
        VkRayTracingPipelineCreateInfoKHR deserialize_struct(stream::VkRayTracingPipelineCreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkGeometryTrianglesNV::Builder&, VkGeometryTrianglesNV);
        VkGeometryTrianglesNV deserialize_struct(stream::VkGeometryTrianglesNV::Reader&);
    

        void serialize_struct(stream::VkGeometryAABBNV::Builder&, VkGeometryAABBNV);
        VkGeometryAABBNV deserialize_struct(stream::VkGeometryAABBNV::Reader&);
    

        void serialize_struct(stream::VkGeometryDataNV::Builder&, VkGeometryDataNV);
        VkGeometryDataNV deserialize_struct(stream::VkGeometryDataNV::Reader&);
    

        void serialize_struct(stream::VkGeometryNV::Builder&, VkGeometryNV);
        VkGeometryNV deserialize_struct(stream::VkGeometryNV::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureInfoNV::Builder&, VkAccelerationStructureInfoNV);
        VkAccelerationStructureInfoNV deserialize_struct(stream::VkAccelerationStructureInfoNV::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureCreateInfoNV::Builder&, VkAccelerationStructureCreateInfoNV);
        VkAccelerationStructureCreateInfoNV deserialize_struct(stream::VkAccelerationStructureCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkBindAccelerationStructureMemoryInfoNV::Builder&, VkBindAccelerationStructureMemoryInfoNV);
        VkBindAccelerationStructureMemoryInfoNV deserialize_struct(stream::VkBindAccelerationStructureMemoryInfoNV::Reader&);
    

        void serialize_struct(stream::VkWriteDescriptorSetAccelerationStructureKHR::Builder&, VkWriteDescriptorSetAccelerationStructureKHR);
        VkWriteDescriptorSetAccelerationStructureKHR deserialize_struct(stream::VkWriteDescriptorSetAccelerationStructureKHR::Reader&);
    

        void serialize_struct(stream::VkWriteDescriptorSetAccelerationStructureNV::Builder&, VkWriteDescriptorSetAccelerationStructureNV);
        VkWriteDescriptorSetAccelerationStructureNV deserialize_struct(stream::VkWriteDescriptorSetAccelerationStructureNV::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureMemoryRequirementsInfoNV::Builder&, VkAccelerationStructureMemoryRequirementsInfoNV);
        VkAccelerationStructureMemoryRequirementsInfoNV deserialize_struct(stream::VkAccelerationStructureMemoryRequirementsInfoNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceAccelerationStructureFeaturesKHR::Builder&, VkPhysicalDeviceAccelerationStructureFeaturesKHR);
        VkPhysicalDeviceAccelerationStructureFeaturesKHR deserialize_struct(stream::VkPhysicalDeviceAccelerationStructureFeaturesKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceRayTracingPipelineFeaturesKHR::Builder&, VkPhysicalDeviceRayTracingPipelineFeaturesKHR);
        VkPhysicalDeviceRayTracingPipelineFeaturesKHR deserialize_struct(stream::VkPhysicalDeviceRayTracingPipelineFeaturesKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceRayQueryFeaturesKHR::Builder&, VkPhysicalDeviceRayQueryFeaturesKHR);
        VkPhysicalDeviceRayQueryFeaturesKHR deserialize_struct(stream::VkPhysicalDeviceRayQueryFeaturesKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceAccelerationStructurePropertiesKHR::Builder&, VkPhysicalDeviceAccelerationStructurePropertiesKHR);
        VkPhysicalDeviceAccelerationStructurePropertiesKHR deserialize_struct(stream::VkPhysicalDeviceAccelerationStructurePropertiesKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceRayTracingPipelinePropertiesKHR::Builder&, VkPhysicalDeviceRayTracingPipelinePropertiesKHR);
        VkPhysicalDeviceRayTracingPipelinePropertiesKHR deserialize_struct(stream::VkPhysicalDeviceRayTracingPipelinePropertiesKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceRayTracingPropertiesNV::Builder&, VkPhysicalDeviceRayTracingPropertiesNV);
        VkPhysicalDeviceRayTracingPropertiesNV deserialize_struct(stream::VkPhysicalDeviceRayTracingPropertiesNV::Reader&);
    

        void serialize_struct(stream::VkStridedDeviceAddressRegionKHR::Builder&, VkStridedDeviceAddressRegionKHR);
        VkStridedDeviceAddressRegionKHR deserialize_struct(stream::VkStridedDeviceAddressRegionKHR::Reader&);
    

        void serialize_struct(stream::VkTraceRaysIndirectCommandKHR::Builder&, VkTraceRaysIndirectCommandKHR);
        VkTraceRaysIndirectCommandKHR deserialize_struct(stream::VkTraceRaysIndirectCommandKHR::Reader&);
    

        void serialize_struct(stream::VkTraceRaysIndirectCommand2KHR::Builder&, VkTraceRaysIndirectCommand2KHR);
        VkTraceRaysIndirectCommand2KHR deserialize_struct(stream::VkTraceRaysIndirectCommand2KHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR::Builder&, VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR);
        VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR deserialize_struct(stream::VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR::Reader&);
    

        void serialize_struct(stream::VkDrmFormatModifierPropertiesListEXT::Builder&, VkDrmFormatModifierPropertiesListEXT);
        VkDrmFormatModifierPropertiesListEXT deserialize_struct(stream::VkDrmFormatModifierPropertiesListEXT::Reader&);
    

        void serialize_struct(stream::VkDrmFormatModifierPropertiesEXT::Builder&, VkDrmFormatModifierPropertiesEXT);
        VkDrmFormatModifierPropertiesEXT deserialize_struct(stream::VkDrmFormatModifierPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceImageDrmFormatModifierInfoEXT::Builder&, VkPhysicalDeviceImageDrmFormatModifierInfoEXT);
        VkPhysicalDeviceImageDrmFormatModifierInfoEXT deserialize_struct(stream::VkPhysicalDeviceImageDrmFormatModifierInfoEXT::Reader&);
    

        void serialize_struct(stream::VkImageDrmFormatModifierListCreateInfoEXT::Builder&, VkImageDrmFormatModifierListCreateInfoEXT);
        VkImageDrmFormatModifierListCreateInfoEXT deserialize_struct(stream::VkImageDrmFormatModifierListCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkImageDrmFormatModifierExplicitCreateInfoEXT::Builder&, VkImageDrmFormatModifierExplicitCreateInfoEXT);
        VkImageDrmFormatModifierExplicitCreateInfoEXT deserialize_struct(stream::VkImageDrmFormatModifierExplicitCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkImageDrmFormatModifierPropertiesEXT::Builder&, VkImageDrmFormatModifierPropertiesEXT);
        VkImageDrmFormatModifierPropertiesEXT deserialize_struct(stream::VkImageDrmFormatModifierPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkImageStencilUsageCreateInfo::Builder&, VkImageStencilUsageCreateInfo);
        VkImageStencilUsageCreateInfo deserialize_struct(stream::VkImageStencilUsageCreateInfo::Reader&);
    

        void serialize_struct(stream::VkDeviceMemoryOverallocationCreateInfoAMD::Builder&, VkDeviceMemoryOverallocationCreateInfoAMD);
        VkDeviceMemoryOverallocationCreateInfoAMD deserialize_struct(stream::VkDeviceMemoryOverallocationCreateInfoAMD::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceFragmentDensityMapFeaturesEXT::Builder&, VkPhysicalDeviceFragmentDensityMapFeaturesEXT);
        VkPhysicalDeviceFragmentDensityMapFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceFragmentDensityMapFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceFragmentDensityMap2FeaturesEXT::Builder&, VkPhysicalDeviceFragmentDensityMap2FeaturesEXT);
        VkPhysicalDeviceFragmentDensityMap2FeaturesEXT deserialize_struct(stream::VkPhysicalDeviceFragmentDensityMap2FeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM::Builder&, VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM);
        VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM deserialize_struct(stream::VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceFragmentDensityMapPropertiesEXT::Builder&, VkPhysicalDeviceFragmentDensityMapPropertiesEXT);
        VkPhysicalDeviceFragmentDensityMapPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceFragmentDensityMapPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceFragmentDensityMap2PropertiesEXT::Builder&, VkPhysicalDeviceFragmentDensityMap2PropertiesEXT);
        VkPhysicalDeviceFragmentDensityMap2PropertiesEXT deserialize_struct(stream::VkPhysicalDeviceFragmentDensityMap2PropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM::Builder&, VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM);
        VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM deserialize_struct(stream::VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM::Reader&);
    

        void serialize_struct(stream::VkRenderPassFragmentDensityMapCreateInfoEXT::Builder&, VkRenderPassFragmentDensityMapCreateInfoEXT);
        VkRenderPassFragmentDensityMapCreateInfoEXT deserialize_struct(stream::VkRenderPassFragmentDensityMapCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkSubpassFragmentDensityMapOffsetEndInfoQCOM::Builder&, VkSubpassFragmentDensityMapOffsetEndInfoQCOM);
        VkSubpassFragmentDensityMapOffsetEndInfoQCOM deserialize_struct(stream::VkSubpassFragmentDensityMapOffsetEndInfoQCOM::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceScalarBlockLayoutFeatures::Builder&, VkPhysicalDeviceScalarBlockLayoutFeatures);
        VkPhysicalDeviceScalarBlockLayoutFeatures deserialize_struct(stream::VkPhysicalDeviceScalarBlockLayoutFeatures::Reader&);
    

        void serialize_struct(stream::VkSurfaceProtectedCapabilitiesKHR::Builder&, VkSurfaceProtectedCapabilitiesKHR);
        VkSurfaceProtectedCapabilitiesKHR deserialize_struct(stream::VkSurfaceProtectedCapabilitiesKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceUniformBufferStandardLayoutFeatures::Builder&, VkPhysicalDeviceUniformBufferStandardLayoutFeatures);
        VkPhysicalDeviceUniformBufferStandardLayoutFeatures deserialize_struct(stream::VkPhysicalDeviceUniformBufferStandardLayoutFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDepthClipEnableFeaturesEXT::Builder&, VkPhysicalDeviceDepthClipEnableFeaturesEXT);
        VkPhysicalDeviceDepthClipEnableFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceDepthClipEnableFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPipelineRasterizationDepthClipStateCreateInfoEXT::Builder&, VkPipelineRasterizationDepthClipStateCreateInfoEXT);
        VkPipelineRasterizationDepthClipStateCreateInfoEXT deserialize_struct(stream::VkPipelineRasterizationDepthClipStateCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMemoryBudgetPropertiesEXT::Builder&, VkPhysicalDeviceMemoryBudgetPropertiesEXT);
        VkPhysicalDeviceMemoryBudgetPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceMemoryBudgetPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMemoryPriorityFeaturesEXT::Builder&, VkPhysicalDeviceMemoryPriorityFeaturesEXT);
        VkPhysicalDeviceMemoryPriorityFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceMemoryPriorityFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkMemoryPriorityAllocateInfoEXT::Builder&, VkMemoryPriorityAllocateInfoEXT);
        VkMemoryPriorityAllocateInfoEXT deserialize_struct(stream::VkMemoryPriorityAllocateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT::Builder&, VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT);
        VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT deserialize_struct(stream::VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceBufferDeviceAddressFeatures::Builder&, VkPhysicalDeviceBufferDeviceAddressFeatures);
        VkPhysicalDeviceBufferDeviceAddressFeatures deserialize_struct(stream::VkPhysicalDeviceBufferDeviceAddressFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceBufferDeviceAddressFeaturesEXT::Builder&, VkPhysicalDeviceBufferDeviceAddressFeaturesEXT);
        VkPhysicalDeviceBufferDeviceAddressFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceBufferDeviceAddressFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkBufferDeviceAddressInfo::Builder&, VkBufferDeviceAddressInfo);
        VkBufferDeviceAddressInfo deserialize_struct(stream::VkBufferDeviceAddressInfo::Reader&);
    

        void serialize_struct(stream::VkBufferOpaqueCaptureAddressCreateInfo::Builder&, VkBufferOpaqueCaptureAddressCreateInfo);
        VkBufferOpaqueCaptureAddressCreateInfo deserialize_struct(stream::VkBufferOpaqueCaptureAddressCreateInfo::Reader&);
    

        void serialize_struct(stream::VkBufferDeviceAddressCreateInfoEXT::Builder&, VkBufferDeviceAddressCreateInfoEXT);
        VkBufferDeviceAddressCreateInfoEXT deserialize_struct(stream::VkBufferDeviceAddressCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceImageViewImageFormatInfoEXT::Builder&, VkPhysicalDeviceImageViewImageFormatInfoEXT);
        VkPhysicalDeviceImageViewImageFormatInfoEXT deserialize_struct(stream::VkPhysicalDeviceImageViewImageFormatInfoEXT::Reader&);
    

        void serialize_struct(stream::VkFilterCubicImageViewImageFormatPropertiesEXT::Builder&, VkFilterCubicImageViewImageFormatPropertiesEXT);
        VkFilterCubicImageViewImageFormatPropertiesEXT deserialize_struct(stream::VkFilterCubicImageViewImageFormatPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceImagelessFramebufferFeatures::Builder&, VkPhysicalDeviceImagelessFramebufferFeatures);
        VkPhysicalDeviceImagelessFramebufferFeatures deserialize_struct(stream::VkPhysicalDeviceImagelessFramebufferFeatures::Reader&);
    

        void serialize_struct(stream::VkFramebufferAttachmentsCreateInfo::Builder&, VkFramebufferAttachmentsCreateInfo);
        VkFramebufferAttachmentsCreateInfo deserialize_struct(stream::VkFramebufferAttachmentsCreateInfo::Reader&);
    

        void serialize_struct(stream::VkFramebufferAttachmentImageInfo::Builder&, VkFramebufferAttachmentImageInfo);
        VkFramebufferAttachmentImageInfo deserialize_struct(stream::VkFramebufferAttachmentImageInfo::Reader&);
    

        void serialize_struct(stream::VkRenderPassAttachmentBeginInfo::Builder&, VkRenderPassAttachmentBeginInfo);
        VkRenderPassAttachmentBeginInfo deserialize_struct(stream::VkRenderPassAttachmentBeginInfo::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceTextureCompressionASTCHDRFeatures::Builder&, VkPhysicalDeviceTextureCompressionASTCHDRFeatures);
        VkPhysicalDeviceTextureCompressionASTCHDRFeatures deserialize_struct(stream::VkPhysicalDeviceTextureCompressionASTCHDRFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceCooperativeMatrixFeaturesNV::Builder&, VkPhysicalDeviceCooperativeMatrixFeaturesNV);
        VkPhysicalDeviceCooperativeMatrixFeaturesNV deserialize_struct(stream::VkPhysicalDeviceCooperativeMatrixFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceCooperativeMatrixPropertiesNV::Builder&, VkPhysicalDeviceCooperativeMatrixPropertiesNV);
        VkPhysicalDeviceCooperativeMatrixPropertiesNV deserialize_struct(stream::VkPhysicalDeviceCooperativeMatrixPropertiesNV::Reader&);
    

        void serialize_struct(stream::VkCooperativeMatrixPropertiesNV::Builder&, VkCooperativeMatrixPropertiesNV);
        VkCooperativeMatrixPropertiesNV deserialize_struct(stream::VkCooperativeMatrixPropertiesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceYcbcrImageArraysFeaturesEXT::Builder&, VkPhysicalDeviceYcbcrImageArraysFeaturesEXT);
        VkPhysicalDeviceYcbcrImageArraysFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceYcbcrImageArraysFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkImageViewHandleInfoNVX::Builder&, VkImageViewHandleInfoNVX);
        VkImageViewHandleInfoNVX deserialize_struct(stream::VkImageViewHandleInfoNVX::Reader&);
    

        void serialize_struct(stream::VkImageViewAddressPropertiesNVX::Builder&, VkImageViewAddressPropertiesNVX);
        VkImageViewAddressPropertiesNVX deserialize_struct(stream::VkImageViewAddressPropertiesNVX::Reader&);
    

        void serialize_struct(stream::VkPipelineCreationFeedback::Builder&, VkPipelineCreationFeedback);
        VkPipelineCreationFeedback deserialize_struct(stream::VkPipelineCreationFeedback::Reader&);
    

        void serialize_struct(stream::VkPipelineCreationFeedbackCreateInfo::Builder&, VkPipelineCreationFeedbackCreateInfo);
        VkPipelineCreationFeedbackCreateInfo deserialize_struct(stream::VkPipelineCreationFeedbackCreateInfo::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevicePresentBarrierFeaturesNV::Builder&, VkPhysicalDevicePresentBarrierFeaturesNV);
        VkPhysicalDevicePresentBarrierFeaturesNV deserialize_struct(stream::VkPhysicalDevicePresentBarrierFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkSurfaceCapabilitiesPresentBarrierNV::Builder&, VkSurfaceCapabilitiesPresentBarrierNV);
        VkSurfaceCapabilitiesPresentBarrierNV deserialize_struct(stream::VkSurfaceCapabilitiesPresentBarrierNV::Reader&);
    

        void serialize_struct(stream::VkSwapchainPresentBarrierCreateInfoNV::Builder&, VkSwapchainPresentBarrierCreateInfoNV);
        VkSwapchainPresentBarrierCreateInfoNV deserialize_struct(stream::VkSwapchainPresentBarrierCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevicePerformanceQueryFeaturesKHR::Builder&, VkPhysicalDevicePerformanceQueryFeaturesKHR);
        VkPhysicalDevicePerformanceQueryFeaturesKHR deserialize_struct(stream::VkPhysicalDevicePerformanceQueryFeaturesKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevicePerformanceQueryPropertiesKHR::Builder&, VkPhysicalDevicePerformanceQueryPropertiesKHR);
        VkPhysicalDevicePerformanceQueryPropertiesKHR deserialize_struct(stream::VkPhysicalDevicePerformanceQueryPropertiesKHR::Reader&);
    

        void serialize_struct(stream::VkPerformanceCounterKHR::Builder&, VkPerformanceCounterKHR);
        VkPerformanceCounterKHR deserialize_struct(stream::VkPerformanceCounterKHR::Reader&);
    

        void serialize_struct(stream::VkPerformanceCounterDescriptionKHR::Builder&, VkPerformanceCounterDescriptionKHR);
        VkPerformanceCounterDescriptionKHR deserialize_struct(stream::VkPerformanceCounterDescriptionKHR::Reader&);
    

        void serialize_struct(stream::VkQueryPoolPerformanceCreateInfoKHR::Builder&, VkQueryPoolPerformanceCreateInfoKHR);
        VkQueryPoolPerformanceCreateInfoKHR deserialize_struct(stream::VkQueryPoolPerformanceCreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkPerformanceCounterResultKHR::Builder&, VkPerformanceCounterResultKHR);
        VkPerformanceCounterResultKHR deserialize_struct(stream::VkPerformanceCounterResultKHR::Reader&);
    

        void serialize_struct(stream::VkAcquireProfilingLockInfoKHR::Builder&, VkAcquireProfilingLockInfoKHR);
        VkAcquireProfilingLockInfoKHR deserialize_struct(stream::VkAcquireProfilingLockInfoKHR::Reader&);
    

        void serialize_struct(stream::VkPerformanceQuerySubmitInfoKHR::Builder&, VkPerformanceQuerySubmitInfoKHR);
        VkPerformanceQuerySubmitInfoKHR deserialize_struct(stream::VkPerformanceQuerySubmitInfoKHR::Reader&);
    

        void serialize_struct(stream::VkHeadlessSurfaceCreateInfoEXT::Builder&, VkHeadlessSurfaceCreateInfoEXT);
        VkHeadlessSurfaceCreateInfoEXT deserialize_struct(stream::VkHeadlessSurfaceCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceCoverageReductionModeFeaturesNV::Builder&, VkPhysicalDeviceCoverageReductionModeFeaturesNV);
        VkPhysicalDeviceCoverageReductionModeFeaturesNV deserialize_struct(stream::VkPhysicalDeviceCoverageReductionModeFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkPipelineCoverageReductionStateCreateInfoNV::Builder&, VkPipelineCoverageReductionStateCreateInfoNV);
        VkPipelineCoverageReductionStateCreateInfoNV deserialize_struct(stream::VkPipelineCoverageReductionStateCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkFramebufferMixedSamplesCombinationNV::Builder&, VkFramebufferMixedSamplesCombinationNV);
        VkFramebufferMixedSamplesCombinationNV deserialize_struct(stream::VkFramebufferMixedSamplesCombinationNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL::Builder&, VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL);
        VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL deserialize_struct(stream::VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL::Reader&);
    

        void serialize_struct(stream::VkPerformanceValueDataINTEL::Builder&, VkPerformanceValueDataINTEL);
        VkPerformanceValueDataINTEL deserialize_struct(stream::VkPerformanceValueDataINTEL::Reader&);
    

        void serialize_struct(stream::VkPerformanceValueINTEL::Builder&, VkPerformanceValueINTEL);
        VkPerformanceValueINTEL deserialize_struct(stream::VkPerformanceValueINTEL::Reader&);
    

        void serialize_struct(stream::VkInitializePerformanceApiInfoINTEL::Builder&, VkInitializePerformanceApiInfoINTEL);
        VkInitializePerformanceApiInfoINTEL deserialize_struct(stream::VkInitializePerformanceApiInfoINTEL::Reader&);
    

        void serialize_struct(stream::VkQueryPoolPerformanceQueryCreateInfoINTEL::Builder&, VkQueryPoolPerformanceQueryCreateInfoINTEL);
        VkQueryPoolPerformanceQueryCreateInfoINTEL deserialize_struct(stream::VkQueryPoolPerformanceQueryCreateInfoINTEL::Reader&);
    

        void serialize_struct(stream::VkPerformanceMarkerInfoINTEL::Builder&, VkPerformanceMarkerInfoINTEL);
        VkPerformanceMarkerInfoINTEL deserialize_struct(stream::VkPerformanceMarkerInfoINTEL::Reader&);
    

        void serialize_struct(stream::VkPerformanceStreamMarkerInfoINTEL::Builder&, VkPerformanceStreamMarkerInfoINTEL);
        VkPerformanceStreamMarkerInfoINTEL deserialize_struct(stream::VkPerformanceStreamMarkerInfoINTEL::Reader&);
    

        void serialize_struct(stream::VkPerformanceOverrideInfoINTEL::Builder&, VkPerformanceOverrideInfoINTEL);
        VkPerformanceOverrideInfoINTEL deserialize_struct(stream::VkPerformanceOverrideInfoINTEL::Reader&);
    

        void serialize_struct(stream::VkPerformanceConfigurationAcquireInfoINTEL::Builder&, VkPerformanceConfigurationAcquireInfoINTEL);
        VkPerformanceConfigurationAcquireInfoINTEL deserialize_struct(stream::VkPerformanceConfigurationAcquireInfoINTEL::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderClockFeaturesKHR::Builder&, VkPhysicalDeviceShaderClockFeaturesKHR);
        VkPhysicalDeviceShaderClockFeaturesKHR deserialize_struct(stream::VkPhysicalDeviceShaderClockFeaturesKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceIndexTypeUint8FeaturesEXT::Builder&, VkPhysicalDeviceIndexTypeUint8FeaturesEXT);
        VkPhysicalDeviceIndexTypeUint8FeaturesEXT deserialize_struct(stream::VkPhysicalDeviceIndexTypeUint8FeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderSMBuiltinsPropertiesNV::Builder&, VkPhysicalDeviceShaderSMBuiltinsPropertiesNV);
        VkPhysicalDeviceShaderSMBuiltinsPropertiesNV deserialize_struct(stream::VkPhysicalDeviceShaderSMBuiltinsPropertiesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderSMBuiltinsFeaturesNV::Builder&, VkPhysicalDeviceShaderSMBuiltinsFeaturesNV);
        VkPhysicalDeviceShaderSMBuiltinsFeaturesNV deserialize_struct(stream::VkPhysicalDeviceShaderSMBuiltinsFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT::Builder&, VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT);
        VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures::Builder&, VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures);
        VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures deserialize_struct(stream::VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures::Reader&);
    

        void serialize_struct(stream::VkAttachmentReferenceStencilLayout::Builder&, VkAttachmentReferenceStencilLayout);
        VkAttachmentReferenceStencilLayout deserialize_struct(stream::VkAttachmentReferenceStencilLayout::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT::Builder&, VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT);
        VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT deserialize_struct(stream::VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkAttachmentDescriptionStencilLayout::Builder&, VkAttachmentDescriptionStencilLayout);
        VkAttachmentDescriptionStencilLayout deserialize_struct(stream::VkAttachmentDescriptionStencilLayout::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR::Builder&, VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR);
        VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR deserialize_struct(stream::VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR::Reader&);
    

        void serialize_struct(stream::VkPipelineInfoKHR::Builder&, VkPipelineInfoKHR);
        VkPipelineInfoKHR deserialize_struct(stream::VkPipelineInfoKHR::Reader&);
    

        void serialize_struct(stream::VkPipelineExecutablePropertiesKHR::Builder&, VkPipelineExecutablePropertiesKHR);
        VkPipelineExecutablePropertiesKHR deserialize_struct(stream::VkPipelineExecutablePropertiesKHR::Reader&);
    

        void serialize_struct(stream::VkPipelineExecutableInfoKHR::Builder&, VkPipelineExecutableInfoKHR);
        VkPipelineExecutableInfoKHR deserialize_struct(stream::VkPipelineExecutableInfoKHR::Reader&);
    

        void serialize_struct(stream::VkPipelineExecutableStatisticValueKHR::Builder&, VkPipelineExecutableStatisticValueKHR);
        VkPipelineExecutableStatisticValueKHR deserialize_struct(stream::VkPipelineExecutableStatisticValueKHR::Reader&);
    

        void serialize_struct(stream::VkPipelineExecutableStatisticKHR::Builder&, VkPipelineExecutableStatisticKHR);
        VkPipelineExecutableStatisticKHR deserialize_struct(stream::VkPipelineExecutableStatisticKHR::Reader&);
    

        void serialize_struct(stream::VkPipelineExecutableInternalRepresentationKHR::Builder&, VkPipelineExecutableInternalRepresentationKHR);
        VkPipelineExecutableInternalRepresentationKHR deserialize_struct(stream::VkPipelineExecutableInternalRepresentationKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures::Builder&, VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures);
        VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures deserialize_struct(stream::VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT::Builder&, VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT);
        VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceTexelBufferAlignmentProperties::Builder&, VkPhysicalDeviceTexelBufferAlignmentProperties);
        VkPhysicalDeviceTexelBufferAlignmentProperties deserialize_struct(stream::VkPhysicalDeviceTexelBufferAlignmentProperties::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceSubgroupSizeControlFeatures::Builder&, VkPhysicalDeviceSubgroupSizeControlFeatures);
        VkPhysicalDeviceSubgroupSizeControlFeatures deserialize_struct(stream::VkPhysicalDeviceSubgroupSizeControlFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceSubgroupSizeControlProperties::Builder&, VkPhysicalDeviceSubgroupSizeControlProperties);
        VkPhysicalDeviceSubgroupSizeControlProperties deserialize_struct(stream::VkPhysicalDeviceSubgroupSizeControlProperties::Reader&);
    

        void serialize_struct(stream::VkPipelineShaderStageRequiredSubgroupSizeCreateInfo::Builder&, VkPipelineShaderStageRequiredSubgroupSizeCreateInfo);
        VkPipelineShaderStageRequiredSubgroupSizeCreateInfo deserialize_struct(stream::VkPipelineShaderStageRequiredSubgroupSizeCreateInfo::Reader&);
    

        void serialize_struct(stream::VkSubpassShadingPipelineCreateInfoHUAWEI::Builder&, VkSubpassShadingPipelineCreateInfoHUAWEI);
        VkSubpassShadingPipelineCreateInfoHUAWEI deserialize_struct(stream::VkSubpassShadingPipelineCreateInfoHUAWEI::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceSubpassShadingPropertiesHUAWEI::Builder&, VkPhysicalDeviceSubpassShadingPropertiesHUAWEI);
        VkPhysicalDeviceSubpassShadingPropertiesHUAWEI deserialize_struct(stream::VkPhysicalDeviceSubpassShadingPropertiesHUAWEI::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI::Builder&, VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI);
        VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI deserialize_struct(stream::VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI::Reader&);
    

        void serialize_struct(stream::VkMemoryOpaqueCaptureAddressAllocateInfo::Builder&, VkMemoryOpaqueCaptureAddressAllocateInfo);
        VkMemoryOpaqueCaptureAddressAllocateInfo deserialize_struct(stream::VkMemoryOpaqueCaptureAddressAllocateInfo::Reader&);
    

        void serialize_struct(stream::VkDeviceMemoryOpaqueCaptureAddressInfo::Builder&, VkDeviceMemoryOpaqueCaptureAddressInfo);
        VkDeviceMemoryOpaqueCaptureAddressInfo deserialize_struct(stream::VkDeviceMemoryOpaqueCaptureAddressInfo::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceLineRasterizationFeaturesEXT::Builder&, VkPhysicalDeviceLineRasterizationFeaturesEXT);
        VkPhysicalDeviceLineRasterizationFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceLineRasterizationFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceLineRasterizationPropertiesEXT::Builder&, VkPhysicalDeviceLineRasterizationPropertiesEXT);
        VkPhysicalDeviceLineRasterizationPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceLineRasterizationPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkPipelineRasterizationLineStateCreateInfoEXT::Builder&, VkPipelineRasterizationLineStateCreateInfoEXT);
        VkPipelineRasterizationLineStateCreateInfoEXT deserialize_struct(stream::VkPipelineRasterizationLineStateCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevicePipelineCreationCacheControlFeatures::Builder&, VkPhysicalDevicePipelineCreationCacheControlFeatures);
        VkPhysicalDevicePipelineCreationCacheControlFeatures deserialize_struct(stream::VkPhysicalDevicePipelineCreationCacheControlFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceVulkan11Features::Builder&, VkPhysicalDeviceVulkan11Features);
        VkPhysicalDeviceVulkan11Features deserialize_struct(stream::VkPhysicalDeviceVulkan11Features::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceVulkan11Properties::Builder&, VkPhysicalDeviceVulkan11Properties);
        VkPhysicalDeviceVulkan11Properties deserialize_struct(stream::VkPhysicalDeviceVulkan11Properties::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceVulkan12Features::Builder&, VkPhysicalDeviceVulkan12Features);
        VkPhysicalDeviceVulkan12Features deserialize_struct(stream::VkPhysicalDeviceVulkan12Features::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceVulkan12Properties::Builder&, VkPhysicalDeviceVulkan12Properties);
        VkPhysicalDeviceVulkan12Properties deserialize_struct(stream::VkPhysicalDeviceVulkan12Properties::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceVulkan13Features::Builder&, VkPhysicalDeviceVulkan13Features);
        VkPhysicalDeviceVulkan13Features deserialize_struct(stream::VkPhysicalDeviceVulkan13Features::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceVulkan13Properties::Builder&, VkPhysicalDeviceVulkan13Properties);
        VkPhysicalDeviceVulkan13Properties deserialize_struct(stream::VkPhysicalDeviceVulkan13Properties::Reader&);
    

        void serialize_struct(stream::VkPipelineCompilerControlCreateInfoAMD::Builder&, VkPipelineCompilerControlCreateInfoAMD);
        VkPipelineCompilerControlCreateInfoAMD deserialize_struct(stream::VkPipelineCompilerControlCreateInfoAMD::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceCoherentMemoryFeaturesAMD::Builder&, VkPhysicalDeviceCoherentMemoryFeaturesAMD);
        VkPhysicalDeviceCoherentMemoryFeaturesAMD deserialize_struct(stream::VkPhysicalDeviceCoherentMemoryFeaturesAMD::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceToolProperties::Builder&, VkPhysicalDeviceToolProperties);
        VkPhysicalDeviceToolProperties deserialize_struct(stream::VkPhysicalDeviceToolProperties::Reader&);
    

        void serialize_struct(stream::VkSamplerCustomBorderColorCreateInfoEXT::Builder&, VkSamplerCustomBorderColorCreateInfoEXT);
        VkSamplerCustomBorderColorCreateInfoEXT deserialize_struct(stream::VkSamplerCustomBorderColorCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceCustomBorderColorPropertiesEXT::Builder&, VkPhysicalDeviceCustomBorderColorPropertiesEXT);
        VkPhysicalDeviceCustomBorderColorPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceCustomBorderColorPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceCustomBorderColorFeaturesEXT::Builder&, VkPhysicalDeviceCustomBorderColorFeaturesEXT);
        VkPhysicalDeviceCustomBorderColorFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceCustomBorderColorFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkSamplerBorderColorComponentMappingCreateInfoEXT::Builder&, VkSamplerBorderColorComponentMappingCreateInfoEXT);
        VkSamplerBorderColorComponentMappingCreateInfoEXT deserialize_struct(stream::VkSamplerBorderColorComponentMappingCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceBorderColorSwizzleFeaturesEXT::Builder&, VkPhysicalDeviceBorderColorSwizzleFeaturesEXT);
        VkPhysicalDeviceBorderColorSwizzleFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceBorderColorSwizzleFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkDeviceOrHostAddressKHR::Builder&, VkDeviceOrHostAddressKHR);
        VkDeviceOrHostAddressKHR deserialize_struct(stream::VkDeviceOrHostAddressKHR::Reader&);
    

        void serialize_struct(stream::VkDeviceOrHostAddressConstKHR::Builder&, VkDeviceOrHostAddressConstKHR);
        VkDeviceOrHostAddressConstKHR deserialize_struct(stream::VkDeviceOrHostAddressConstKHR::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureGeometryTrianglesDataKHR::Builder&, VkAccelerationStructureGeometryTrianglesDataKHR);
        VkAccelerationStructureGeometryTrianglesDataKHR deserialize_struct(stream::VkAccelerationStructureGeometryTrianglesDataKHR::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureGeometryAabbsDataKHR::Builder&, VkAccelerationStructureGeometryAabbsDataKHR);
        VkAccelerationStructureGeometryAabbsDataKHR deserialize_struct(stream::VkAccelerationStructureGeometryAabbsDataKHR::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureGeometryInstancesDataKHR::Builder&, VkAccelerationStructureGeometryInstancesDataKHR);
        VkAccelerationStructureGeometryInstancesDataKHR deserialize_struct(stream::VkAccelerationStructureGeometryInstancesDataKHR::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureGeometryDataKHR::Builder&, VkAccelerationStructureGeometryDataKHR);
        VkAccelerationStructureGeometryDataKHR deserialize_struct(stream::VkAccelerationStructureGeometryDataKHR::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureGeometryKHR::Builder&, VkAccelerationStructureGeometryKHR);
        VkAccelerationStructureGeometryKHR deserialize_struct(stream::VkAccelerationStructureGeometryKHR::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureBuildGeometryInfoKHR::Builder&, VkAccelerationStructureBuildGeometryInfoKHR);
        VkAccelerationStructureBuildGeometryInfoKHR deserialize_struct(stream::VkAccelerationStructureBuildGeometryInfoKHR::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureBuildRangeInfoKHR::Builder&, VkAccelerationStructureBuildRangeInfoKHR);
        VkAccelerationStructureBuildRangeInfoKHR deserialize_struct(stream::VkAccelerationStructureBuildRangeInfoKHR::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureCreateInfoKHR::Builder&, VkAccelerationStructureCreateInfoKHR);
        VkAccelerationStructureCreateInfoKHR deserialize_struct(stream::VkAccelerationStructureCreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkAabbPositionsKHR::Builder&, VkAabbPositionsKHR);
        VkAabbPositionsKHR deserialize_struct(stream::VkAabbPositionsKHR::Reader&);
    

        void serialize_struct(stream::VkTransformMatrixKHR::Builder&, VkTransformMatrixKHR);
        VkTransformMatrixKHR deserialize_struct(stream::VkTransformMatrixKHR::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureInstanceKHR::Builder&, VkAccelerationStructureInstanceKHR);
        VkAccelerationStructureInstanceKHR deserialize_struct(stream::VkAccelerationStructureInstanceKHR::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureDeviceAddressInfoKHR::Builder&, VkAccelerationStructureDeviceAddressInfoKHR);
        VkAccelerationStructureDeviceAddressInfoKHR deserialize_struct(stream::VkAccelerationStructureDeviceAddressInfoKHR::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureVersionInfoKHR::Builder&, VkAccelerationStructureVersionInfoKHR);
        VkAccelerationStructureVersionInfoKHR deserialize_struct(stream::VkAccelerationStructureVersionInfoKHR::Reader&);
    

        void serialize_struct(stream::VkCopyAccelerationStructureInfoKHR::Builder&, VkCopyAccelerationStructureInfoKHR);
        VkCopyAccelerationStructureInfoKHR deserialize_struct(stream::VkCopyAccelerationStructureInfoKHR::Reader&);
    

        void serialize_struct(stream::VkCopyAccelerationStructureToMemoryInfoKHR::Builder&, VkCopyAccelerationStructureToMemoryInfoKHR);
        VkCopyAccelerationStructureToMemoryInfoKHR deserialize_struct(stream::VkCopyAccelerationStructureToMemoryInfoKHR::Reader&);
    

        void serialize_struct(stream::VkCopyMemoryToAccelerationStructureInfoKHR::Builder&, VkCopyMemoryToAccelerationStructureInfoKHR);
        VkCopyMemoryToAccelerationStructureInfoKHR deserialize_struct(stream::VkCopyMemoryToAccelerationStructureInfoKHR::Reader&);
    

        void serialize_struct(stream::VkRayTracingPipelineInterfaceCreateInfoKHR::Builder&, VkRayTracingPipelineInterfaceCreateInfoKHR);
        VkRayTracingPipelineInterfaceCreateInfoKHR deserialize_struct(stream::VkRayTracingPipelineInterfaceCreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkPipelineLibraryCreateInfoKHR::Builder&, VkPipelineLibraryCreateInfoKHR);
        VkPipelineLibraryCreateInfoKHR deserialize_struct(stream::VkPipelineLibraryCreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceExtendedDynamicStateFeaturesEXT::Builder&, VkPhysicalDeviceExtendedDynamicStateFeaturesEXT);
        VkPhysicalDeviceExtendedDynamicStateFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceExtendedDynamicStateFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceExtendedDynamicState2FeaturesEXT::Builder&, VkPhysicalDeviceExtendedDynamicState2FeaturesEXT);
        VkPhysicalDeviceExtendedDynamicState2FeaturesEXT deserialize_struct(stream::VkPhysicalDeviceExtendedDynamicState2FeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceExtendedDynamicState3FeaturesEXT::Builder&, VkPhysicalDeviceExtendedDynamicState3FeaturesEXT);
        VkPhysicalDeviceExtendedDynamicState3FeaturesEXT deserialize_struct(stream::VkPhysicalDeviceExtendedDynamicState3FeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceExtendedDynamicState3PropertiesEXT::Builder&, VkPhysicalDeviceExtendedDynamicState3PropertiesEXT);
        VkPhysicalDeviceExtendedDynamicState3PropertiesEXT deserialize_struct(stream::VkPhysicalDeviceExtendedDynamicState3PropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkColorBlendEquationEXT::Builder&, VkColorBlendEquationEXT);
        VkColorBlendEquationEXT deserialize_struct(stream::VkColorBlendEquationEXT::Reader&);
    

        void serialize_struct(stream::VkColorBlendAdvancedEXT::Builder&, VkColorBlendAdvancedEXT);
        VkColorBlendAdvancedEXT deserialize_struct(stream::VkColorBlendAdvancedEXT::Reader&);
    

        void serialize_struct(stream::VkRenderPassTransformBeginInfoQCOM::Builder&, VkRenderPassTransformBeginInfoQCOM);
        VkRenderPassTransformBeginInfoQCOM deserialize_struct(stream::VkRenderPassTransformBeginInfoQCOM::Reader&);
    

        void serialize_struct(stream::VkCopyCommandTransformInfoQCOM::Builder&, VkCopyCommandTransformInfoQCOM);
        VkCopyCommandTransformInfoQCOM deserialize_struct(stream::VkCopyCommandTransformInfoQCOM::Reader&);
    

        void serialize_struct(stream::VkCommandBufferInheritanceRenderPassTransformInfoQCOM::Builder&, VkCommandBufferInheritanceRenderPassTransformInfoQCOM);
        VkCommandBufferInheritanceRenderPassTransformInfoQCOM deserialize_struct(stream::VkCommandBufferInheritanceRenderPassTransformInfoQCOM::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDiagnosticsConfigFeaturesNV::Builder&, VkPhysicalDeviceDiagnosticsConfigFeaturesNV);
        VkPhysicalDeviceDiagnosticsConfigFeaturesNV deserialize_struct(stream::VkPhysicalDeviceDiagnosticsConfigFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkDeviceDiagnosticsConfigCreateInfoNV::Builder&, VkDeviceDiagnosticsConfigCreateInfoNV);
        VkDeviceDiagnosticsConfigCreateInfoNV deserialize_struct(stream::VkDeviceDiagnosticsConfigCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::Builder&, VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures);
        VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures deserialize_struct(stream::VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR::Builder&, VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR);
        VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR deserialize_struct(stream::VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceRobustness2FeaturesEXT::Builder&, VkPhysicalDeviceRobustness2FeaturesEXT);
        VkPhysicalDeviceRobustness2FeaturesEXT deserialize_struct(stream::VkPhysicalDeviceRobustness2FeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceRobustness2PropertiesEXT::Builder&, VkPhysicalDeviceRobustness2PropertiesEXT);
        VkPhysicalDeviceRobustness2PropertiesEXT deserialize_struct(stream::VkPhysicalDeviceRobustness2PropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceImageRobustnessFeatures::Builder&, VkPhysicalDeviceImageRobustnessFeatures);
        VkPhysicalDeviceImageRobustnessFeatures deserialize_struct(stream::VkPhysicalDeviceImageRobustnessFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR::Builder&, VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR);
        VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR deserialize_struct(stream::VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevice4444FormatsFeaturesEXT::Builder&, VkPhysicalDevice4444FormatsFeaturesEXT);
        VkPhysicalDevice4444FormatsFeaturesEXT deserialize_struct(stream::VkPhysicalDevice4444FormatsFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceSubpassShadingFeaturesHUAWEI::Builder&, VkPhysicalDeviceSubpassShadingFeaturesHUAWEI);
        VkPhysicalDeviceSubpassShadingFeaturesHUAWEI deserialize_struct(stream::VkPhysicalDeviceSubpassShadingFeaturesHUAWEI::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI::Builder&, VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI);
        VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI deserialize_struct(stream::VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI::Reader&);
    

        void serialize_struct(stream::VkBufferCopy2::Builder&, VkBufferCopy2);
        VkBufferCopy2 deserialize_struct(stream::VkBufferCopy2::Reader&);
    

        void serialize_struct(stream::VkImageCopy2::Builder&, VkImageCopy2);
        VkImageCopy2 deserialize_struct(stream::VkImageCopy2::Reader&);
    

        void serialize_struct(stream::VkImageBlit2::Builder&, VkImageBlit2);
        VkImageBlit2 deserialize_struct(stream::VkImageBlit2::Reader&);
    

        void serialize_struct(stream::VkBufferImageCopy2::Builder&, VkBufferImageCopy2);
        VkBufferImageCopy2 deserialize_struct(stream::VkBufferImageCopy2::Reader&);
    

        void serialize_struct(stream::VkImageResolve2::Builder&, VkImageResolve2);
        VkImageResolve2 deserialize_struct(stream::VkImageResolve2::Reader&);
    

        void serialize_struct(stream::VkCopyBufferInfo2::Builder&, VkCopyBufferInfo2);
        VkCopyBufferInfo2 deserialize_struct(stream::VkCopyBufferInfo2::Reader&);
    

        void serialize_struct(stream::VkCopyImageInfo2::Builder&, VkCopyImageInfo2);
        VkCopyImageInfo2 deserialize_struct(stream::VkCopyImageInfo2::Reader&);
    

        void serialize_struct(stream::VkBlitImageInfo2::Builder&, VkBlitImageInfo2);
        VkBlitImageInfo2 deserialize_struct(stream::VkBlitImageInfo2::Reader&);
    

        void serialize_struct(stream::VkCopyBufferToImageInfo2::Builder&, VkCopyBufferToImageInfo2);
        VkCopyBufferToImageInfo2 deserialize_struct(stream::VkCopyBufferToImageInfo2::Reader&);
    

        void serialize_struct(stream::VkCopyImageToBufferInfo2::Builder&, VkCopyImageToBufferInfo2);
        VkCopyImageToBufferInfo2 deserialize_struct(stream::VkCopyImageToBufferInfo2::Reader&);
    

        void serialize_struct(stream::VkResolveImageInfo2::Builder&, VkResolveImageInfo2);
        VkResolveImageInfo2 deserialize_struct(stream::VkResolveImageInfo2::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT::Builder&, VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT);
        VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT deserialize_struct(stream::VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkFragmentShadingRateAttachmentInfoKHR::Builder&, VkFragmentShadingRateAttachmentInfoKHR);
        VkFragmentShadingRateAttachmentInfoKHR deserialize_struct(stream::VkFragmentShadingRateAttachmentInfoKHR::Reader&);
    

        void serialize_struct(stream::VkPipelineFragmentShadingRateStateCreateInfoKHR::Builder&, VkPipelineFragmentShadingRateStateCreateInfoKHR);
        VkPipelineFragmentShadingRateStateCreateInfoKHR deserialize_struct(stream::VkPipelineFragmentShadingRateStateCreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceFragmentShadingRateFeaturesKHR::Builder&, VkPhysicalDeviceFragmentShadingRateFeaturesKHR);
        VkPhysicalDeviceFragmentShadingRateFeaturesKHR deserialize_struct(stream::VkPhysicalDeviceFragmentShadingRateFeaturesKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceFragmentShadingRatePropertiesKHR::Builder&, VkPhysicalDeviceFragmentShadingRatePropertiesKHR);
        VkPhysicalDeviceFragmentShadingRatePropertiesKHR deserialize_struct(stream::VkPhysicalDeviceFragmentShadingRatePropertiesKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceFragmentShadingRateKHR::Builder&, VkPhysicalDeviceFragmentShadingRateKHR);
        VkPhysicalDeviceFragmentShadingRateKHR deserialize_struct(stream::VkPhysicalDeviceFragmentShadingRateKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderTerminateInvocationFeatures::Builder&, VkPhysicalDeviceShaderTerminateInvocationFeatures);
        VkPhysicalDeviceShaderTerminateInvocationFeatures deserialize_struct(stream::VkPhysicalDeviceShaderTerminateInvocationFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV::Builder&, VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV);
        VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV deserialize_struct(stream::VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV::Builder&, VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV);
        VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV deserialize_struct(stream::VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV::Reader&);
    

        void serialize_struct(stream::VkPipelineFragmentShadingRateEnumStateCreateInfoNV::Builder&, VkPipelineFragmentShadingRateEnumStateCreateInfoNV);
        VkPipelineFragmentShadingRateEnumStateCreateInfoNV deserialize_struct(stream::VkPipelineFragmentShadingRateEnumStateCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureBuildSizesInfoKHR::Builder&, VkAccelerationStructureBuildSizesInfoKHR);
        VkAccelerationStructureBuildSizesInfoKHR deserialize_struct(stream::VkAccelerationStructureBuildSizesInfoKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceImage2DViewOf3DFeaturesEXT::Builder&, VkPhysicalDeviceImage2DViewOf3DFeaturesEXT);
        VkPhysicalDeviceImage2DViewOf3DFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceImage2DViewOf3DFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT::Builder&, VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT);
        VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT::Builder&, VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT);
        VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT::Builder&, VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT);
        VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkMutableDescriptorTypeListEXT::Builder&, VkMutableDescriptorTypeListEXT);
        VkMutableDescriptorTypeListEXT deserialize_struct(stream::VkMutableDescriptorTypeListEXT::Reader&);
    

        void serialize_struct(stream::VkMutableDescriptorTypeCreateInfoEXT::Builder&, VkMutableDescriptorTypeCreateInfoEXT);
        VkMutableDescriptorTypeCreateInfoEXT deserialize_struct(stream::VkMutableDescriptorTypeCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDepthClipControlFeaturesEXT::Builder&, VkPhysicalDeviceDepthClipControlFeaturesEXT);
        VkPhysicalDeviceDepthClipControlFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceDepthClipControlFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPipelineViewportDepthClipControlCreateInfoEXT::Builder&, VkPipelineViewportDepthClipControlCreateInfoEXT);
        VkPipelineViewportDepthClipControlCreateInfoEXT deserialize_struct(stream::VkPipelineViewportDepthClipControlCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT::Builder&, VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT);
        VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceExternalMemoryRDMAFeaturesNV::Builder&, VkPhysicalDeviceExternalMemoryRDMAFeaturesNV);
        VkPhysicalDeviceExternalMemoryRDMAFeaturesNV deserialize_struct(stream::VkPhysicalDeviceExternalMemoryRDMAFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkVertexInputBindingDescription2EXT::Builder&, VkVertexInputBindingDescription2EXT);
        VkVertexInputBindingDescription2EXT deserialize_struct(stream::VkVertexInputBindingDescription2EXT::Reader&);
    

        void serialize_struct(stream::VkVertexInputAttributeDescription2EXT::Builder&, VkVertexInputAttributeDescription2EXT);
        VkVertexInputAttributeDescription2EXT deserialize_struct(stream::VkVertexInputAttributeDescription2EXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceColorWriteEnableFeaturesEXT::Builder&, VkPhysicalDeviceColorWriteEnableFeaturesEXT);
        VkPhysicalDeviceColorWriteEnableFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceColorWriteEnableFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPipelineColorWriteCreateInfoEXT::Builder&, VkPipelineColorWriteCreateInfoEXT);
        VkPipelineColorWriteCreateInfoEXT deserialize_struct(stream::VkPipelineColorWriteCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkMemoryBarrier2::Builder&, VkMemoryBarrier2);
        VkMemoryBarrier2 deserialize_struct(stream::VkMemoryBarrier2::Reader&);
    

        void serialize_struct(stream::VkImageMemoryBarrier2::Builder&, VkImageMemoryBarrier2);
        VkImageMemoryBarrier2 deserialize_struct(stream::VkImageMemoryBarrier2::Reader&);
    

        void serialize_struct(stream::VkBufferMemoryBarrier2::Builder&, VkBufferMemoryBarrier2);
        VkBufferMemoryBarrier2 deserialize_struct(stream::VkBufferMemoryBarrier2::Reader&);
    

        void serialize_struct(stream::VkDependencyInfo::Builder&, VkDependencyInfo);
        VkDependencyInfo deserialize_struct(stream::VkDependencyInfo::Reader&);
    

        void serialize_struct(stream::VkSemaphoreSubmitInfo::Builder&, VkSemaphoreSubmitInfo);
        VkSemaphoreSubmitInfo deserialize_struct(stream::VkSemaphoreSubmitInfo::Reader&);
    

        void serialize_struct(stream::VkCommandBufferSubmitInfo::Builder&, VkCommandBufferSubmitInfo);
        VkCommandBufferSubmitInfo deserialize_struct(stream::VkCommandBufferSubmitInfo::Reader&);
    

        void serialize_struct(stream::VkSubmitInfo2::Builder&, VkSubmitInfo2);
        VkSubmitInfo2 deserialize_struct(stream::VkSubmitInfo2::Reader&);
    

        void serialize_struct(stream::VkQueueFamilyCheckpointProperties2NV::Builder&, VkQueueFamilyCheckpointProperties2NV);
        VkQueueFamilyCheckpointProperties2NV deserialize_struct(stream::VkQueueFamilyCheckpointProperties2NV::Reader&);
    

        void serialize_struct(stream::VkCheckpointData2NV::Builder&, VkCheckpointData2NV);
        VkCheckpointData2NV deserialize_struct(stream::VkCheckpointData2NV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceSynchronization2Features::Builder&, VkPhysicalDeviceSynchronization2Features);
        VkPhysicalDeviceSynchronization2Features deserialize_struct(stream::VkPhysicalDeviceSynchronization2Features::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceHostImageCopyFeaturesEXT::Builder&, VkPhysicalDeviceHostImageCopyFeaturesEXT);
        VkPhysicalDeviceHostImageCopyFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceHostImageCopyFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceHostImageCopyPropertiesEXT::Builder&, VkPhysicalDeviceHostImageCopyPropertiesEXT);
        VkPhysicalDeviceHostImageCopyPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceHostImageCopyPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkMemoryToImageCopyEXT::Builder&, VkMemoryToImageCopyEXT);
        VkMemoryToImageCopyEXT deserialize_struct(stream::VkMemoryToImageCopyEXT::Reader&);
    

        void serialize_struct(stream::VkImageToMemoryCopyEXT::Builder&, VkImageToMemoryCopyEXT);
        VkImageToMemoryCopyEXT deserialize_struct(stream::VkImageToMemoryCopyEXT::Reader&);
    

        void serialize_struct(stream::VkCopyMemoryToImageInfoEXT::Builder&, VkCopyMemoryToImageInfoEXT);
        VkCopyMemoryToImageInfoEXT deserialize_struct(stream::VkCopyMemoryToImageInfoEXT::Reader&);
    

        void serialize_struct(stream::VkCopyImageToMemoryInfoEXT::Builder&, VkCopyImageToMemoryInfoEXT);
        VkCopyImageToMemoryInfoEXT deserialize_struct(stream::VkCopyImageToMemoryInfoEXT::Reader&);
    

        void serialize_struct(stream::VkCopyImageToImageInfoEXT::Builder&, VkCopyImageToImageInfoEXT);
        VkCopyImageToImageInfoEXT deserialize_struct(stream::VkCopyImageToImageInfoEXT::Reader&);
    

        void serialize_struct(stream::VkHostImageLayoutTransitionInfoEXT::Builder&, VkHostImageLayoutTransitionInfoEXT);
        VkHostImageLayoutTransitionInfoEXT deserialize_struct(stream::VkHostImageLayoutTransitionInfoEXT::Reader&);
    

        void serialize_struct(stream::VkSubresourceHostMemcpySizeEXT::Builder&, VkSubresourceHostMemcpySizeEXT);
        VkSubresourceHostMemcpySizeEXT deserialize_struct(stream::VkSubresourceHostMemcpySizeEXT::Reader&);
    

        void serialize_struct(stream::VkHostImageCopyDevicePerformanceQueryEXT::Builder&, VkHostImageCopyDevicePerformanceQueryEXT);
        VkHostImageCopyDevicePerformanceQueryEXT deserialize_struct(stream::VkHostImageCopyDevicePerformanceQueryEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT::Builder&, VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT);
        VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT deserialize_struct(stream::VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceLegacyDitheringFeaturesEXT::Builder&, VkPhysicalDeviceLegacyDitheringFeaturesEXT);
        VkPhysicalDeviceLegacyDitheringFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceLegacyDitheringFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT::Builder&, VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT);
        VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkSubpassResolvePerformanceQueryEXT::Builder&, VkSubpassResolvePerformanceQueryEXT);
        VkSubpassResolvePerformanceQueryEXT deserialize_struct(stream::VkSubpassResolvePerformanceQueryEXT::Reader&);
    

        void serialize_struct(stream::VkMultisampledRenderToSingleSampledInfoEXT::Builder&, VkMultisampledRenderToSingleSampledInfoEXT);
        VkMultisampledRenderToSingleSampledInfoEXT deserialize_struct(stream::VkMultisampledRenderToSingleSampledInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevicePipelineProtectedAccessFeaturesEXT::Builder&, VkPhysicalDevicePipelineProtectedAccessFeaturesEXT);
        VkPhysicalDevicePipelineProtectedAccessFeaturesEXT deserialize_struct(stream::VkPhysicalDevicePipelineProtectedAccessFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkQueueFamilyVideoPropertiesKHR::Builder&, VkQueueFamilyVideoPropertiesKHR);
        VkQueueFamilyVideoPropertiesKHR deserialize_struct(stream::VkQueueFamilyVideoPropertiesKHR::Reader&);
    

        void serialize_struct(stream::VkQueueFamilyQueryResultStatusPropertiesKHR::Builder&, VkQueueFamilyQueryResultStatusPropertiesKHR);
        VkQueueFamilyQueryResultStatusPropertiesKHR deserialize_struct(stream::VkQueueFamilyQueryResultStatusPropertiesKHR::Reader&);
    

        void serialize_struct(stream::VkVideoProfileListInfoKHR::Builder&, VkVideoProfileListInfoKHR);
        VkVideoProfileListInfoKHR deserialize_struct(stream::VkVideoProfileListInfoKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceVideoFormatInfoKHR::Builder&, VkPhysicalDeviceVideoFormatInfoKHR);
        VkPhysicalDeviceVideoFormatInfoKHR deserialize_struct(stream::VkPhysicalDeviceVideoFormatInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoFormatPropertiesKHR::Builder&, VkVideoFormatPropertiesKHR);
        VkVideoFormatPropertiesKHR deserialize_struct(stream::VkVideoFormatPropertiesKHR::Reader&);
    

        void serialize_struct(stream::VkVideoProfileInfoKHR::Builder&, VkVideoProfileInfoKHR);
        VkVideoProfileInfoKHR deserialize_struct(stream::VkVideoProfileInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoCapabilitiesKHR::Builder&, VkVideoCapabilitiesKHR);
        VkVideoCapabilitiesKHR deserialize_struct(stream::VkVideoCapabilitiesKHR::Reader&);
    

        void serialize_struct(stream::VkVideoSessionMemoryRequirementsKHR::Builder&, VkVideoSessionMemoryRequirementsKHR);
        VkVideoSessionMemoryRequirementsKHR deserialize_struct(stream::VkVideoSessionMemoryRequirementsKHR::Reader&);
    

        void serialize_struct(stream::VkBindVideoSessionMemoryInfoKHR::Builder&, VkBindVideoSessionMemoryInfoKHR);
        VkBindVideoSessionMemoryInfoKHR deserialize_struct(stream::VkBindVideoSessionMemoryInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoPictureResourceInfoKHR::Builder&, VkVideoPictureResourceInfoKHR);
        VkVideoPictureResourceInfoKHR deserialize_struct(stream::VkVideoPictureResourceInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoReferenceSlotInfoKHR::Builder&, VkVideoReferenceSlotInfoKHR);
        VkVideoReferenceSlotInfoKHR deserialize_struct(stream::VkVideoReferenceSlotInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoDecodeCapabilitiesKHR::Builder&, VkVideoDecodeCapabilitiesKHR);
        VkVideoDecodeCapabilitiesKHR deserialize_struct(stream::VkVideoDecodeCapabilitiesKHR::Reader&);
    

        void serialize_struct(stream::VkVideoDecodeUsageInfoKHR::Builder&, VkVideoDecodeUsageInfoKHR);
        VkVideoDecodeUsageInfoKHR deserialize_struct(stream::VkVideoDecodeUsageInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoDecodeInfoKHR::Builder&, VkVideoDecodeInfoKHR);
        VkVideoDecodeInfoKHR deserialize_struct(stream::VkVideoDecodeInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoDecodeH264ProfileInfoKHR::Builder&, VkVideoDecodeH264ProfileInfoKHR);
        VkVideoDecodeH264ProfileInfoKHR deserialize_struct(stream::VkVideoDecodeH264ProfileInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoDecodeH264CapabilitiesKHR::Builder&, VkVideoDecodeH264CapabilitiesKHR);
        VkVideoDecodeH264CapabilitiesKHR deserialize_struct(stream::VkVideoDecodeH264CapabilitiesKHR::Reader&);
    

        void serialize_struct(stream::VkVideoDecodeH264SessionParametersAddInfoKHR::Builder&, VkVideoDecodeH264SessionParametersAddInfoKHR);
        VkVideoDecodeH264SessionParametersAddInfoKHR deserialize_struct(stream::VkVideoDecodeH264SessionParametersAddInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoDecodeH264SessionParametersCreateInfoKHR::Builder&, VkVideoDecodeH264SessionParametersCreateInfoKHR);
        VkVideoDecodeH264SessionParametersCreateInfoKHR deserialize_struct(stream::VkVideoDecodeH264SessionParametersCreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoDecodeH264PictureInfoKHR::Builder&, VkVideoDecodeH264PictureInfoKHR);
        VkVideoDecodeH264PictureInfoKHR deserialize_struct(stream::VkVideoDecodeH264PictureInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoDecodeH264DpbSlotInfoKHR::Builder&, VkVideoDecodeH264DpbSlotInfoKHR);
        VkVideoDecodeH264DpbSlotInfoKHR deserialize_struct(stream::VkVideoDecodeH264DpbSlotInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoDecodeH265ProfileInfoKHR::Builder&, VkVideoDecodeH265ProfileInfoKHR);
        VkVideoDecodeH265ProfileInfoKHR deserialize_struct(stream::VkVideoDecodeH265ProfileInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoDecodeH265CapabilitiesKHR::Builder&, VkVideoDecodeH265CapabilitiesKHR);
        VkVideoDecodeH265CapabilitiesKHR deserialize_struct(stream::VkVideoDecodeH265CapabilitiesKHR::Reader&);
    

        void serialize_struct(stream::VkVideoDecodeH265SessionParametersAddInfoKHR::Builder&, VkVideoDecodeH265SessionParametersAddInfoKHR);
        VkVideoDecodeH265SessionParametersAddInfoKHR deserialize_struct(stream::VkVideoDecodeH265SessionParametersAddInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoDecodeH265SessionParametersCreateInfoKHR::Builder&, VkVideoDecodeH265SessionParametersCreateInfoKHR);
        VkVideoDecodeH265SessionParametersCreateInfoKHR deserialize_struct(stream::VkVideoDecodeH265SessionParametersCreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoDecodeH265PictureInfoKHR::Builder&, VkVideoDecodeH265PictureInfoKHR);
        VkVideoDecodeH265PictureInfoKHR deserialize_struct(stream::VkVideoDecodeH265PictureInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoDecodeH265DpbSlotInfoKHR::Builder&, VkVideoDecodeH265DpbSlotInfoKHR);
        VkVideoDecodeH265DpbSlotInfoKHR deserialize_struct(stream::VkVideoDecodeH265DpbSlotInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoSessionCreateInfoKHR::Builder&, VkVideoSessionCreateInfoKHR);
        VkVideoSessionCreateInfoKHR deserialize_struct(stream::VkVideoSessionCreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoSessionParametersCreateInfoKHR::Builder&, VkVideoSessionParametersCreateInfoKHR);
        VkVideoSessionParametersCreateInfoKHR deserialize_struct(stream::VkVideoSessionParametersCreateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoSessionParametersUpdateInfoKHR::Builder&, VkVideoSessionParametersUpdateInfoKHR);
        VkVideoSessionParametersUpdateInfoKHR deserialize_struct(stream::VkVideoSessionParametersUpdateInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoBeginCodingInfoKHR::Builder&, VkVideoBeginCodingInfoKHR);
        VkVideoBeginCodingInfoKHR deserialize_struct(stream::VkVideoBeginCodingInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoEndCodingInfoKHR::Builder&, VkVideoEndCodingInfoKHR);
        VkVideoEndCodingInfoKHR deserialize_struct(stream::VkVideoEndCodingInfoKHR::Reader&);
    

        void serialize_struct(stream::VkVideoCodingControlInfoKHR::Builder&, VkVideoCodingControlInfoKHR);
        VkVideoCodingControlInfoKHR deserialize_struct(stream::VkVideoCodingControlInfoKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceInheritedViewportScissorFeaturesNV::Builder&, VkPhysicalDeviceInheritedViewportScissorFeaturesNV);
        VkPhysicalDeviceInheritedViewportScissorFeaturesNV deserialize_struct(stream::VkPhysicalDeviceInheritedViewportScissorFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkCommandBufferInheritanceViewportScissorInfoNV::Builder&, VkCommandBufferInheritanceViewportScissorInfoNV);
        VkCommandBufferInheritanceViewportScissorInfoNV deserialize_struct(stream::VkCommandBufferInheritanceViewportScissorInfoNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT::Builder&, VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT);
        VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceProvokingVertexFeaturesEXT::Builder&, VkPhysicalDeviceProvokingVertexFeaturesEXT);
        VkPhysicalDeviceProvokingVertexFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceProvokingVertexFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceProvokingVertexPropertiesEXT::Builder&, VkPhysicalDeviceProvokingVertexPropertiesEXT);
        VkPhysicalDeviceProvokingVertexPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceProvokingVertexPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkPipelineRasterizationProvokingVertexStateCreateInfoEXT::Builder&, VkPipelineRasterizationProvokingVertexStateCreateInfoEXT);
        VkPipelineRasterizationProvokingVertexStateCreateInfoEXT deserialize_struct(stream::VkPipelineRasterizationProvokingVertexStateCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkCuModuleCreateInfoNVX::Builder&, VkCuModuleCreateInfoNVX);
        VkCuModuleCreateInfoNVX deserialize_struct(stream::VkCuModuleCreateInfoNVX::Reader&);
    

        void serialize_struct(stream::VkCuFunctionCreateInfoNVX::Builder&, VkCuFunctionCreateInfoNVX);
        VkCuFunctionCreateInfoNVX deserialize_struct(stream::VkCuFunctionCreateInfoNVX::Reader&);
    

        void serialize_struct(stream::VkCuLaunchInfoNVX::Builder&, VkCuLaunchInfoNVX);
        VkCuLaunchInfoNVX deserialize_struct(stream::VkCuLaunchInfoNVX::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDescriptorBufferFeaturesEXT::Builder&, VkPhysicalDeviceDescriptorBufferFeaturesEXT);
        VkPhysicalDeviceDescriptorBufferFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceDescriptorBufferFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDescriptorBufferPropertiesEXT::Builder&, VkPhysicalDeviceDescriptorBufferPropertiesEXT);
        VkPhysicalDeviceDescriptorBufferPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceDescriptorBufferPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::Builder&, VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT);
        VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkDescriptorAddressInfoEXT::Builder&, VkDescriptorAddressInfoEXT);
        VkDescriptorAddressInfoEXT deserialize_struct(stream::VkDescriptorAddressInfoEXT::Reader&);
    

        void serialize_struct(stream::VkDescriptorBufferBindingInfoEXT::Builder&, VkDescriptorBufferBindingInfoEXT);
        VkDescriptorBufferBindingInfoEXT deserialize_struct(stream::VkDescriptorBufferBindingInfoEXT::Reader&);
    

        void serialize_struct(stream::VkDescriptorBufferBindingPushDescriptorBufferHandleEXT::Builder&, VkDescriptorBufferBindingPushDescriptorBufferHandleEXT);
        VkDescriptorBufferBindingPushDescriptorBufferHandleEXT deserialize_struct(stream::VkDescriptorBufferBindingPushDescriptorBufferHandleEXT::Reader&);
    

        void serialize_struct(stream::VkDescriptorDataEXT::Builder&, VkDescriptorDataEXT);
        VkDescriptorDataEXT deserialize_struct(stream::VkDescriptorDataEXT::Reader&);
    

        void serialize_struct(stream::VkDescriptorGetInfoEXT::Builder&, VkDescriptorGetInfoEXT);
        VkDescriptorGetInfoEXT deserialize_struct(stream::VkDescriptorGetInfoEXT::Reader&);
    

        void serialize_struct(stream::VkBufferCaptureDescriptorDataInfoEXT::Builder&, VkBufferCaptureDescriptorDataInfoEXT);
        VkBufferCaptureDescriptorDataInfoEXT deserialize_struct(stream::VkBufferCaptureDescriptorDataInfoEXT::Reader&);
    

        void serialize_struct(stream::VkImageCaptureDescriptorDataInfoEXT::Builder&, VkImageCaptureDescriptorDataInfoEXT);
        VkImageCaptureDescriptorDataInfoEXT deserialize_struct(stream::VkImageCaptureDescriptorDataInfoEXT::Reader&);
    

        void serialize_struct(stream::VkImageViewCaptureDescriptorDataInfoEXT::Builder&, VkImageViewCaptureDescriptorDataInfoEXT);
        VkImageViewCaptureDescriptorDataInfoEXT deserialize_struct(stream::VkImageViewCaptureDescriptorDataInfoEXT::Reader&);
    

        void serialize_struct(stream::VkSamplerCaptureDescriptorDataInfoEXT::Builder&, VkSamplerCaptureDescriptorDataInfoEXT);
        VkSamplerCaptureDescriptorDataInfoEXT deserialize_struct(stream::VkSamplerCaptureDescriptorDataInfoEXT::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureCaptureDescriptorDataInfoEXT::Builder&, VkAccelerationStructureCaptureDescriptorDataInfoEXT);
        VkAccelerationStructureCaptureDescriptorDataInfoEXT deserialize_struct(stream::VkAccelerationStructureCaptureDescriptorDataInfoEXT::Reader&);
    

        void serialize_struct(stream::VkOpaqueCaptureDescriptorDataCreateInfoEXT::Builder&, VkOpaqueCaptureDescriptorDataCreateInfoEXT);
        VkOpaqueCaptureDescriptorDataCreateInfoEXT deserialize_struct(stream::VkOpaqueCaptureDescriptorDataCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderIntegerDotProductFeatures::Builder&, VkPhysicalDeviceShaderIntegerDotProductFeatures);
        VkPhysicalDeviceShaderIntegerDotProductFeatures deserialize_struct(stream::VkPhysicalDeviceShaderIntegerDotProductFeatures::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderIntegerDotProductProperties::Builder&, VkPhysicalDeviceShaderIntegerDotProductProperties);
        VkPhysicalDeviceShaderIntegerDotProductProperties deserialize_struct(stream::VkPhysicalDeviceShaderIntegerDotProductProperties::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDrmPropertiesEXT::Builder&, VkPhysicalDeviceDrmPropertiesEXT);
        VkPhysicalDeviceDrmPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceDrmPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR::Builder&, VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR);
        VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR deserialize_struct(stream::VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR::Builder&, VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR);
        VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR deserialize_struct(stream::VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceRayTracingMotionBlurFeaturesNV::Builder&, VkPhysicalDeviceRayTracingMotionBlurFeaturesNV);
        VkPhysicalDeviceRayTracingMotionBlurFeaturesNV deserialize_struct(stream::VkPhysicalDeviceRayTracingMotionBlurFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureGeometryMotionTrianglesDataNV::Builder&, VkAccelerationStructureGeometryMotionTrianglesDataNV);
        VkAccelerationStructureGeometryMotionTrianglesDataNV deserialize_struct(stream::VkAccelerationStructureGeometryMotionTrianglesDataNV::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureMotionInfoNV::Builder&, VkAccelerationStructureMotionInfoNV);
        VkAccelerationStructureMotionInfoNV deserialize_struct(stream::VkAccelerationStructureMotionInfoNV::Reader&);
    

        void serialize_struct(stream::VkSRTDataNV::Builder&, VkSRTDataNV);
        VkSRTDataNV deserialize_struct(stream::VkSRTDataNV::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureSRTMotionInstanceNV::Builder&, VkAccelerationStructureSRTMotionInstanceNV);
        VkAccelerationStructureSRTMotionInstanceNV deserialize_struct(stream::VkAccelerationStructureSRTMotionInstanceNV::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureMatrixMotionInstanceNV::Builder&, VkAccelerationStructureMatrixMotionInstanceNV);
        VkAccelerationStructureMatrixMotionInstanceNV deserialize_struct(stream::VkAccelerationStructureMatrixMotionInstanceNV::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureMotionInstanceDataNV::Builder&, VkAccelerationStructureMotionInstanceDataNV);
        VkAccelerationStructureMotionInstanceDataNV deserialize_struct(stream::VkAccelerationStructureMotionInstanceDataNV::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureMotionInstanceNV::Builder&, VkAccelerationStructureMotionInstanceNV);
        VkAccelerationStructureMotionInstanceNV deserialize_struct(stream::VkAccelerationStructureMotionInstanceNV::Reader&);
    

        void serialize_struct(stream::VkMemoryGetRemoteAddressInfoNV::Builder&, VkMemoryGetRemoteAddressInfoNV);
        VkMemoryGetRemoteAddressInfoNV deserialize_struct(stream::VkMemoryGetRemoteAddressInfoNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT::Builder&, VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT);
        VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkFormatProperties3::Builder&, VkFormatProperties3);
        VkFormatProperties3 deserialize_struct(stream::VkFormatProperties3::Reader&);
    

        void serialize_struct(stream::VkDrmFormatModifierPropertiesList2EXT::Builder&, VkDrmFormatModifierPropertiesList2EXT);
        VkDrmFormatModifierPropertiesList2EXT deserialize_struct(stream::VkDrmFormatModifierPropertiesList2EXT::Reader&);
    

        void serialize_struct(stream::VkDrmFormatModifierProperties2EXT::Builder&, VkDrmFormatModifierProperties2EXT);
        VkDrmFormatModifierProperties2EXT deserialize_struct(stream::VkDrmFormatModifierProperties2EXT::Reader&);
    

        void serialize_struct(stream::VkPipelineRenderingCreateInfo::Builder&, VkPipelineRenderingCreateInfo);
        VkPipelineRenderingCreateInfo deserialize_struct(stream::VkPipelineRenderingCreateInfo::Reader&);
    

        void serialize_struct(stream::VkRenderingInfo::Builder&, VkRenderingInfo);
        VkRenderingInfo deserialize_struct(stream::VkRenderingInfo::Reader&);
    

        void serialize_struct(stream::VkRenderingAttachmentInfo::Builder&, VkRenderingAttachmentInfo);
        VkRenderingAttachmentInfo deserialize_struct(stream::VkRenderingAttachmentInfo::Reader&);
    

        void serialize_struct(stream::VkRenderingFragmentShadingRateAttachmentInfoKHR::Builder&, VkRenderingFragmentShadingRateAttachmentInfoKHR);
        VkRenderingFragmentShadingRateAttachmentInfoKHR deserialize_struct(stream::VkRenderingFragmentShadingRateAttachmentInfoKHR::Reader&);
    

        void serialize_struct(stream::VkRenderingFragmentDensityMapAttachmentInfoEXT::Builder&, VkRenderingFragmentDensityMapAttachmentInfoEXT);
        VkRenderingFragmentDensityMapAttachmentInfoEXT deserialize_struct(stream::VkRenderingFragmentDensityMapAttachmentInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDynamicRenderingFeatures::Builder&, VkPhysicalDeviceDynamicRenderingFeatures);
        VkPhysicalDeviceDynamicRenderingFeatures deserialize_struct(stream::VkPhysicalDeviceDynamicRenderingFeatures::Reader&);
    

        void serialize_struct(stream::VkCommandBufferInheritanceRenderingInfo::Builder&, VkCommandBufferInheritanceRenderingInfo);
        VkCommandBufferInheritanceRenderingInfo deserialize_struct(stream::VkCommandBufferInheritanceRenderingInfo::Reader&);
    

        void serialize_struct(stream::VkAttachmentSampleCountInfoAMD::Builder&, VkAttachmentSampleCountInfoAMD);
        VkAttachmentSampleCountInfoAMD deserialize_struct(stream::VkAttachmentSampleCountInfoAMD::Reader&);
    

        void serialize_struct(stream::VkMultiviewPerViewAttributesInfoNVX::Builder&, VkMultiviewPerViewAttributesInfoNVX);
        VkMultiviewPerViewAttributesInfoNVX deserialize_struct(stream::VkMultiviewPerViewAttributesInfoNVX::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceImageViewMinLodFeaturesEXT::Builder&, VkPhysicalDeviceImageViewMinLodFeaturesEXT);
        VkPhysicalDeviceImageViewMinLodFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceImageViewMinLodFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkImageViewMinLodCreateInfoEXT::Builder&, VkImageViewMinLodCreateInfoEXT);
        VkImageViewMinLodCreateInfoEXT deserialize_struct(stream::VkImageViewMinLodCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT::Builder&, VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT);
        VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceLinearColorAttachmentFeaturesNV::Builder&, VkPhysicalDeviceLinearColorAttachmentFeaturesNV);
        VkPhysicalDeviceLinearColorAttachmentFeaturesNV deserialize_struct(stream::VkPhysicalDeviceLinearColorAttachmentFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT::Builder&, VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT);
        VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::Builder&, VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT);
        VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkGraphicsPipelineLibraryCreateInfoEXT::Builder&, VkGraphicsPipelineLibraryCreateInfoEXT);
        VkGraphicsPipelineLibraryCreateInfoEXT deserialize_struct(stream::VkGraphicsPipelineLibraryCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE::Builder&, VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE);
        VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE deserialize_struct(stream::VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE::Reader&);
    

        void serialize_struct(stream::VkDescriptorSetBindingReferenceVALVE::Builder&, VkDescriptorSetBindingReferenceVALVE);
        VkDescriptorSetBindingReferenceVALVE deserialize_struct(stream::VkDescriptorSetBindingReferenceVALVE::Reader&);
    

        void serialize_struct(stream::VkDescriptorSetLayoutHostMappingInfoVALVE::Builder&, VkDescriptorSetLayoutHostMappingInfoVALVE);
        VkDescriptorSetLayoutHostMappingInfoVALVE deserialize_struct(stream::VkDescriptorSetLayoutHostMappingInfoVALVE::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT::Builder&, VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT);
        VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT::Builder&, VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT);
        VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkPipelineShaderStageModuleIdentifierCreateInfoEXT::Builder&, VkPipelineShaderStageModuleIdentifierCreateInfoEXT);
        VkPipelineShaderStageModuleIdentifierCreateInfoEXT deserialize_struct(stream::VkPipelineShaderStageModuleIdentifierCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkShaderModuleIdentifierEXT::Builder&, VkShaderModuleIdentifierEXT);
        VkShaderModuleIdentifierEXT deserialize_struct(stream::VkShaderModuleIdentifierEXT::Reader&);
    

        void serialize_struct(stream::VkImageCompressionControlEXT::Builder&, VkImageCompressionControlEXT);
        VkImageCompressionControlEXT deserialize_struct(stream::VkImageCompressionControlEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceImageCompressionControlFeaturesEXT::Builder&, VkPhysicalDeviceImageCompressionControlFeaturesEXT);
        VkPhysicalDeviceImageCompressionControlFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceImageCompressionControlFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkImageCompressionPropertiesEXT::Builder&, VkImageCompressionPropertiesEXT);
        VkImageCompressionPropertiesEXT deserialize_struct(stream::VkImageCompressionPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT::Builder&, VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT);
        VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkImageSubresource2KHR::Builder&, VkImageSubresource2KHR);
        VkImageSubresource2KHR deserialize_struct(stream::VkImageSubresource2KHR::Reader&);
    

        void serialize_struct(stream::VkSubresourceLayout2KHR::Builder&, VkSubresourceLayout2KHR);
        VkSubresourceLayout2KHR deserialize_struct(stream::VkSubresourceLayout2KHR::Reader&);
    

        void serialize_struct(stream::VkRenderPassCreationControlEXT::Builder&, VkRenderPassCreationControlEXT);
        VkRenderPassCreationControlEXT deserialize_struct(stream::VkRenderPassCreationControlEXT::Reader&);
    

        void serialize_struct(stream::VkRenderPassCreationFeedbackInfoEXT::Builder&, VkRenderPassCreationFeedbackInfoEXT);
        VkRenderPassCreationFeedbackInfoEXT deserialize_struct(stream::VkRenderPassCreationFeedbackInfoEXT::Reader&);
    

        void serialize_struct(stream::VkRenderPassCreationFeedbackCreateInfoEXT::Builder&, VkRenderPassCreationFeedbackCreateInfoEXT);
        VkRenderPassCreationFeedbackCreateInfoEXT deserialize_struct(stream::VkRenderPassCreationFeedbackCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkRenderPassSubpassFeedbackInfoEXT::Builder&, VkRenderPassSubpassFeedbackInfoEXT);
        VkRenderPassSubpassFeedbackInfoEXT deserialize_struct(stream::VkRenderPassSubpassFeedbackInfoEXT::Reader&);
    

        void serialize_struct(stream::VkRenderPassSubpassFeedbackCreateInfoEXT::Builder&, VkRenderPassSubpassFeedbackCreateInfoEXT);
        VkRenderPassSubpassFeedbackCreateInfoEXT deserialize_struct(stream::VkRenderPassSubpassFeedbackCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT::Builder&, VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT);
        VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkMicromapBuildInfoEXT::Builder&, VkMicromapBuildInfoEXT);
        VkMicromapBuildInfoEXT deserialize_struct(stream::VkMicromapBuildInfoEXT::Reader&);
    

        void serialize_struct(stream::VkMicromapCreateInfoEXT::Builder&, VkMicromapCreateInfoEXT);
        VkMicromapCreateInfoEXT deserialize_struct(stream::VkMicromapCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkMicromapVersionInfoEXT::Builder&, VkMicromapVersionInfoEXT);
        VkMicromapVersionInfoEXT deserialize_struct(stream::VkMicromapVersionInfoEXT::Reader&);
    

        void serialize_struct(stream::VkCopyMicromapInfoEXT::Builder&, VkCopyMicromapInfoEXT);
        VkCopyMicromapInfoEXT deserialize_struct(stream::VkCopyMicromapInfoEXT::Reader&);
    

        void serialize_struct(stream::VkCopyMicromapToMemoryInfoEXT::Builder&, VkCopyMicromapToMemoryInfoEXT);
        VkCopyMicromapToMemoryInfoEXT deserialize_struct(stream::VkCopyMicromapToMemoryInfoEXT::Reader&);
    

        void serialize_struct(stream::VkCopyMemoryToMicromapInfoEXT::Builder&, VkCopyMemoryToMicromapInfoEXT);
        VkCopyMemoryToMicromapInfoEXT deserialize_struct(stream::VkCopyMemoryToMicromapInfoEXT::Reader&);
    

        void serialize_struct(stream::VkMicromapBuildSizesInfoEXT::Builder&, VkMicromapBuildSizesInfoEXT);
        VkMicromapBuildSizesInfoEXT deserialize_struct(stream::VkMicromapBuildSizesInfoEXT::Reader&);
    

        void serialize_struct(stream::VkMicromapUsageEXT::Builder&, VkMicromapUsageEXT);
        VkMicromapUsageEXT deserialize_struct(stream::VkMicromapUsageEXT::Reader&);
    

        void serialize_struct(stream::VkMicromapTriangleEXT::Builder&, VkMicromapTriangleEXT);
        VkMicromapTriangleEXT deserialize_struct(stream::VkMicromapTriangleEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceOpacityMicromapFeaturesEXT::Builder&, VkPhysicalDeviceOpacityMicromapFeaturesEXT);
        VkPhysicalDeviceOpacityMicromapFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceOpacityMicromapFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceOpacityMicromapPropertiesEXT::Builder&, VkPhysicalDeviceOpacityMicromapPropertiesEXT);
        VkPhysicalDeviceOpacityMicromapPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceOpacityMicromapPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkAccelerationStructureTrianglesOpacityMicromapEXT::Builder&, VkAccelerationStructureTrianglesOpacityMicromapEXT);
        VkAccelerationStructureTrianglesOpacityMicromapEXT deserialize_struct(stream::VkAccelerationStructureTrianglesOpacityMicromapEXT::Reader&);
    

        void serialize_struct(stream::VkPipelinePropertiesIdentifierEXT::Builder&, VkPipelinePropertiesIdentifierEXT);
        VkPipelinePropertiesIdentifierEXT deserialize_struct(stream::VkPipelinePropertiesIdentifierEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevicePipelinePropertiesFeaturesEXT::Builder&, VkPhysicalDevicePipelinePropertiesFeaturesEXT);
        VkPhysicalDevicePipelinePropertiesFeaturesEXT deserialize_struct(stream::VkPhysicalDevicePipelinePropertiesFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD::Builder&, VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD);
        VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD deserialize_struct(stream::VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD::Reader&);
    

        void serialize_struct(stream::VkExternalMemoryAcquireUnmodifiedEXT::Builder&, VkExternalMemoryAcquireUnmodifiedEXT);
        VkExternalMemoryAcquireUnmodifiedEXT deserialize_struct(stream::VkExternalMemoryAcquireUnmodifiedEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT::Builder&, VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT);
        VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevicePipelineRobustnessFeaturesEXT::Builder&, VkPhysicalDevicePipelineRobustnessFeaturesEXT);
        VkPhysicalDevicePipelineRobustnessFeaturesEXT deserialize_struct(stream::VkPhysicalDevicePipelineRobustnessFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPipelineRobustnessCreateInfoEXT::Builder&, VkPipelineRobustnessCreateInfoEXT);
        VkPipelineRobustnessCreateInfoEXT deserialize_struct(stream::VkPipelineRobustnessCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevicePipelineRobustnessPropertiesEXT::Builder&, VkPhysicalDevicePipelineRobustnessPropertiesEXT);
        VkPhysicalDevicePipelineRobustnessPropertiesEXT deserialize_struct(stream::VkPhysicalDevicePipelineRobustnessPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkImageViewSampleWeightCreateInfoQCOM::Builder&, VkImageViewSampleWeightCreateInfoQCOM);
        VkImageViewSampleWeightCreateInfoQCOM deserialize_struct(stream::VkImageViewSampleWeightCreateInfoQCOM::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceImageProcessingFeaturesQCOM::Builder&, VkPhysicalDeviceImageProcessingFeaturesQCOM);
        VkPhysicalDeviceImageProcessingFeaturesQCOM deserialize_struct(stream::VkPhysicalDeviceImageProcessingFeaturesQCOM::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceImageProcessingPropertiesQCOM::Builder&, VkPhysicalDeviceImageProcessingPropertiesQCOM);
        VkPhysicalDeviceImageProcessingPropertiesQCOM deserialize_struct(stream::VkPhysicalDeviceImageProcessingPropertiesQCOM::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceTilePropertiesFeaturesQCOM::Builder&, VkPhysicalDeviceTilePropertiesFeaturesQCOM);
        VkPhysicalDeviceTilePropertiesFeaturesQCOM deserialize_struct(stream::VkPhysicalDeviceTilePropertiesFeaturesQCOM::Reader&);
    

        void serialize_struct(stream::VkTilePropertiesQCOM::Builder&, VkTilePropertiesQCOM);
        VkTilePropertiesQCOM deserialize_struct(stream::VkTilePropertiesQCOM::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceAmigoProfilingFeaturesSEC::Builder&, VkPhysicalDeviceAmigoProfilingFeaturesSEC);
        VkPhysicalDeviceAmigoProfilingFeaturesSEC deserialize_struct(stream::VkPhysicalDeviceAmigoProfilingFeaturesSEC::Reader&);
    

        void serialize_struct(stream::VkAmigoProfilingSubmitInfoSEC::Builder&, VkAmigoProfilingSubmitInfoSEC);
        VkAmigoProfilingSubmitInfoSEC deserialize_struct(stream::VkAmigoProfilingSubmitInfoSEC::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT::Builder&, VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT);
        VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDepthClampZeroOneFeaturesEXT::Builder&, VkPhysicalDeviceDepthClampZeroOneFeaturesEXT);
        VkPhysicalDeviceDepthClampZeroOneFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceDepthClampZeroOneFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceAddressBindingReportFeaturesEXT::Builder&, VkPhysicalDeviceAddressBindingReportFeaturesEXT);
        VkPhysicalDeviceAddressBindingReportFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceAddressBindingReportFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkDeviceAddressBindingCallbackDataEXT::Builder&, VkDeviceAddressBindingCallbackDataEXT);
        VkDeviceAddressBindingCallbackDataEXT deserialize_struct(stream::VkDeviceAddressBindingCallbackDataEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceOpticalFlowFeaturesNV::Builder&, VkPhysicalDeviceOpticalFlowFeaturesNV);
        VkPhysicalDeviceOpticalFlowFeaturesNV deserialize_struct(stream::VkPhysicalDeviceOpticalFlowFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceOpticalFlowPropertiesNV::Builder&, VkPhysicalDeviceOpticalFlowPropertiesNV);
        VkPhysicalDeviceOpticalFlowPropertiesNV deserialize_struct(stream::VkPhysicalDeviceOpticalFlowPropertiesNV::Reader&);
    

        void serialize_struct(stream::VkOpticalFlowImageFormatInfoNV::Builder&, VkOpticalFlowImageFormatInfoNV);
        VkOpticalFlowImageFormatInfoNV deserialize_struct(stream::VkOpticalFlowImageFormatInfoNV::Reader&);
    

        void serialize_struct(stream::VkOpticalFlowImageFormatPropertiesNV::Builder&, VkOpticalFlowImageFormatPropertiesNV);
        VkOpticalFlowImageFormatPropertiesNV deserialize_struct(stream::VkOpticalFlowImageFormatPropertiesNV::Reader&);
    

        void serialize_struct(stream::VkOpticalFlowSessionCreateInfoNV::Builder&, VkOpticalFlowSessionCreateInfoNV);
        VkOpticalFlowSessionCreateInfoNV deserialize_struct(stream::VkOpticalFlowSessionCreateInfoNV::Reader&);
    

        void serialize_struct(stream::VkOpticalFlowSessionCreatePrivateDataInfoNV::Builder&, VkOpticalFlowSessionCreatePrivateDataInfoNV);
        VkOpticalFlowSessionCreatePrivateDataInfoNV deserialize_struct(stream::VkOpticalFlowSessionCreatePrivateDataInfoNV::Reader&);
    

        void serialize_struct(stream::VkOpticalFlowExecuteInfoNV::Builder&, VkOpticalFlowExecuteInfoNV);
        VkOpticalFlowExecuteInfoNV deserialize_struct(stream::VkOpticalFlowExecuteInfoNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceFaultFeaturesEXT::Builder&, VkPhysicalDeviceFaultFeaturesEXT);
        VkPhysicalDeviceFaultFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceFaultFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkDeviceFaultAddressInfoEXT::Builder&, VkDeviceFaultAddressInfoEXT);
        VkDeviceFaultAddressInfoEXT deserialize_struct(stream::VkDeviceFaultAddressInfoEXT::Reader&);
    

        void serialize_struct(stream::VkDeviceFaultVendorInfoEXT::Builder&, VkDeviceFaultVendorInfoEXT);
        VkDeviceFaultVendorInfoEXT deserialize_struct(stream::VkDeviceFaultVendorInfoEXT::Reader&);
    

        void serialize_struct(stream::VkDeviceFaultCountsEXT::Builder&, VkDeviceFaultCountsEXT);
        VkDeviceFaultCountsEXT deserialize_struct(stream::VkDeviceFaultCountsEXT::Reader&);
    

        void serialize_struct(stream::VkDeviceFaultInfoEXT::Builder&, VkDeviceFaultInfoEXT);
        VkDeviceFaultInfoEXT deserialize_struct(stream::VkDeviceFaultInfoEXT::Reader&);
    

        void serialize_struct(stream::VkDeviceFaultVendorBinaryHeaderVersionOneEXT::Builder&, VkDeviceFaultVendorBinaryHeaderVersionOneEXT);
        VkDeviceFaultVendorBinaryHeaderVersionOneEXT deserialize_struct(stream::VkDeviceFaultVendorBinaryHeaderVersionOneEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT::Builder&, VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT);
        VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT deserialize_struct(stream::VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkDepthBiasInfoEXT::Builder&, VkDepthBiasInfoEXT);
        VkDepthBiasInfoEXT deserialize_struct(stream::VkDepthBiasInfoEXT::Reader&);
    

        void serialize_struct(stream::VkDepthBiasRepresentationInfoEXT::Builder&, VkDepthBiasRepresentationInfoEXT);
        VkDepthBiasRepresentationInfoEXT deserialize_struct(stream::VkDepthBiasRepresentationInfoEXT::Reader&);
    

        void serialize_struct(stream::VkDecompressMemoryRegionNV::Builder&, VkDecompressMemoryRegionNV);
        VkDecompressMemoryRegionNV deserialize_struct(stream::VkDecompressMemoryRegionNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM::Builder&, VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM);
        VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM deserialize_struct(stream::VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM::Builder&, VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM);
        VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM deserialize_struct(stream::VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM::Reader&);
    

        void serialize_struct(stream::VkFrameBoundaryEXT::Builder&, VkFrameBoundaryEXT);
        VkFrameBoundaryEXT deserialize_struct(stream::VkFrameBoundaryEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceFrameBoundaryFeaturesEXT::Builder&, VkPhysicalDeviceFrameBoundaryFeaturesEXT);
        VkPhysicalDeviceFrameBoundaryFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceFrameBoundaryFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT::Builder&, VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT);
        VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkSurfacePresentModeEXT::Builder&, VkSurfacePresentModeEXT);
        VkSurfacePresentModeEXT deserialize_struct(stream::VkSurfacePresentModeEXT::Reader&);
    

        void serialize_struct(stream::VkSurfacePresentScalingCapabilitiesEXT::Builder&, VkSurfacePresentScalingCapabilitiesEXT);
        VkSurfacePresentScalingCapabilitiesEXT deserialize_struct(stream::VkSurfacePresentScalingCapabilitiesEXT::Reader&);
    

        void serialize_struct(stream::VkSurfacePresentModeCompatibilityEXT::Builder&, VkSurfacePresentModeCompatibilityEXT);
        VkSurfacePresentModeCompatibilityEXT deserialize_struct(stream::VkSurfacePresentModeCompatibilityEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT::Builder&, VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT);
        VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT deserialize_struct(stream::VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkSwapchainPresentFenceInfoEXT::Builder&, VkSwapchainPresentFenceInfoEXT);
        VkSwapchainPresentFenceInfoEXT deserialize_struct(stream::VkSwapchainPresentFenceInfoEXT::Reader&);
    

        void serialize_struct(stream::VkSwapchainPresentModesCreateInfoEXT::Builder&, VkSwapchainPresentModesCreateInfoEXT);
        VkSwapchainPresentModesCreateInfoEXT deserialize_struct(stream::VkSwapchainPresentModesCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkSwapchainPresentModeInfoEXT::Builder&, VkSwapchainPresentModeInfoEXT);
        VkSwapchainPresentModeInfoEXT deserialize_struct(stream::VkSwapchainPresentModeInfoEXT::Reader&);
    

        void serialize_struct(stream::VkSwapchainPresentScalingCreateInfoEXT::Builder&, VkSwapchainPresentScalingCreateInfoEXT);
        VkSwapchainPresentScalingCreateInfoEXT deserialize_struct(stream::VkSwapchainPresentScalingCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkReleaseSwapchainImagesInfoEXT::Builder&, VkReleaseSwapchainImagesInfoEXT);
        VkReleaseSwapchainImagesInfoEXT deserialize_struct(stream::VkReleaseSwapchainImagesInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDepthBiasControlFeaturesEXT::Builder&, VkPhysicalDeviceDepthBiasControlFeaturesEXT);
        VkPhysicalDeviceDepthBiasControlFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceDepthBiasControlFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV::Builder&, VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV);
        VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV deserialize_struct(stream::VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV::Builder&, VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV);
        VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV deserialize_struct(stream::VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV::Reader&);
    

        void serialize_struct(stream::VkDirectDriverLoadingInfoLUNARG::Builder&, VkDirectDriverLoadingInfoLUNARG);
        VkDirectDriverLoadingInfoLUNARG deserialize_struct(stream::VkDirectDriverLoadingInfoLUNARG::Reader&);
    

        void serialize_struct(stream::VkDirectDriverLoadingListLUNARG::Builder&, VkDirectDriverLoadingListLUNARG);
        VkDirectDriverLoadingListLUNARG deserialize_struct(stream::VkDirectDriverLoadingListLUNARG::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM::Builder&, VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM);
        VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM deserialize_struct(stream::VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR::Builder&, VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR);
        VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR deserialize_struct(stream::VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR::Reader&);
    

        void serialize_struct(stream::VkDeviceImageSubresourceInfoKHR::Builder&, VkDeviceImageSubresourceInfoKHR);
        VkDeviceImageSubresourceInfoKHR deserialize_struct(stream::VkDeviceImageSubresourceInfoKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderCorePropertiesARM::Builder&, VkPhysicalDeviceShaderCorePropertiesARM);
        VkPhysicalDeviceShaderCorePropertiesARM deserialize_struct(stream::VkPhysicalDeviceShaderCorePropertiesARM::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM::Builder&, VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM);
        VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM deserialize_struct(stream::VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM::Reader&);
    

        void serialize_struct(stream::VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM::Builder&, VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM);
        VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM deserialize_struct(stream::VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM::Reader&);
    

        void serialize_struct(stream::VkQueryLowLatencySupportNV::Builder&, VkQueryLowLatencySupportNV);
        VkQueryLowLatencySupportNV deserialize_struct(stream::VkQueryLowLatencySupportNV::Reader&);
    

        void serialize_struct(stream::VkMemoryMapInfoKHR::Builder&, VkMemoryMapInfoKHR);
        VkMemoryMapInfoKHR deserialize_struct(stream::VkMemoryMapInfoKHR::Reader&);
    

        void serialize_struct(stream::VkMemoryUnmapInfoKHR::Builder&, VkMemoryUnmapInfoKHR);
        VkMemoryUnmapInfoKHR deserialize_struct(stream::VkMemoryUnmapInfoKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderObjectFeaturesEXT::Builder&, VkPhysicalDeviceShaderObjectFeaturesEXT);
        VkPhysicalDeviceShaderObjectFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceShaderObjectFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderObjectPropertiesEXT::Builder&, VkPhysicalDeviceShaderObjectPropertiesEXT);
        VkPhysicalDeviceShaderObjectPropertiesEXT deserialize_struct(stream::VkPhysicalDeviceShaderObjectPropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkShaderCreateInfoEXT::Builder&, VkShaderCreateInfoEXT);
        VkShaderCreateInfoEXT deserialize_struct(stream::VkShaderCreateInfoEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderTileImageFeaturesEXT::Builder&, VkPhysicalDeviceShaderTileImageFeaturesEXT);
        VkPhysicalDeviceShaderTileImageFeaturesEXT deserialize_struct(stream::VkPhysicalDeviceShaderTileImageFeaturesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceShaderTileImagePropertiesEXT::Builder&, VkPhysicalDeviceShaderTileImagePropertiesEXT);
        VkPhysicalDeviceShaderTileImagePropertiesEXT deserialize_struct(stream::VkPhysicalDeviceShaderTileImagePropertiesEXT::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceCooperativeMatrixFeaturesKHR::Builder&, VkPhysicalDeviceCooperativeMatrixFeaturesKHR);
        VkPhysicalDeviceCooperativeMatrixFeaturesKHR deserialize_struct(stream::VkPhysicalDeviceCooperativeMatrixFeaturesKHR::Reader&);
    

        void serialize_struct(stream::VkCooperativeMatrixPropertiesKHR::Builder&, VkCooperativeMatrixPropertiesKHR);
        VkCooperativeMatrixPropertiesKHR deserialize_struct(stream::VkCooperativeMatrixPropertiesKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceCooperativeMatrixPropertiesKHR::Builder&, VkPhysicalDeviceCooperativeMatrixPropertiesKHR);
        VkPhysicalDeviceCooperativeMatrixPropertiesKHR deserialize_struct(stream::VkPhysicalDeviceCooperativeMatrixPropertiesKHR::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceCubicClampFeaturesQCOM::Builder&, VkPhysicalDeviceCubicClampFeaturesQCOM);
        VkPhysicalDeviceCubicClampFeaturesQCOM deserialize_struct(stream::VkPhysicalDeviceCubicClampFeaturesQCOM::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceYcbcrDegammaFeaturesQCOM::Builder&, VkPhysicalDeviceYcbcrDegammaFeaturesQCOM);
        VkPhysicalDeviceYcbcrDegammaFeaturesQCOM deserialize_struct(stream::VkPhysicalDeviceYcbcrDegammaFeaturesQCOM::Reader&);
    

        void serialize_struct(stream::VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM::Builder&, VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM);
        VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM deserialize_struct(stream::VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceCubicWeightsFeaturesQCOM::Builder&, VkPhysicalDeviceCubicWeightsFeaturesQCOM);
        VkPhysicalDeviceCubicWeightsFeaturesQCOM deserialize_struct(stream::VkPhysicalDeviceCubicWeightsFeaturesQCOM::Reader&);
    

        void serialize_struct(stream::VkSamplerCubicWeightsCreateInfoQCOM::Builder&, VkSamplerCubicWeightsCreateInfoQCOM);
        VkSamplerCubicWeightsCreateInfoQCOM deserialize_struct(stream::VkSamplerCubicWeightsCreateInfoQCOM::Reader&);
    

        void serialize_struct(stream::VkBlitImageCubicWeightsInfoQCOM::Builder&, VkBlitImageCubicWeightsInfoQCOM);
        VkBlitImageCubicWeightsInfoQCOM deserialize_struct(stream::VkBlitImageCubicWeightsInfoQCOM::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceImageProcessing2FeaturesQCOM::Builder&, VkPhysicalDeviceImageProcessing2FeaturesQCOM);
        VkPhysicalDeviceImageProcessing2FeaturesQCOM deserialize_struct(stream::VkPhysicalDeviceImageProcessing2FeaturesQCOM::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceImageProcessing2PropertiesQCOM::Builder&, VkPhysicalDeviceImageProcessing2PropertiesQCOM);
        VkPhysicalDeviceImageProcessing2PropertiesQCOM deserialize_struct(stream::VkPhysicalDeviceImageProcessing2PropertiesQCOM::Reader&);
    

        void serialize_struct(stream::VkSamplerBlockMatchWindowCreateInfoQCOM::Builder&, VkSamplerBlockMatchWindowCreateInfoQCOM);
        VkSamplerBlockMatchWindowCreateInfoQCOM deserialize_struct(stream::VkSamplerBlockMatchWindowCreateInfoQCOM::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV::Builder&, VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV);
        VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV deserialize_struct(stream::VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV::Reader&);
    

        void serialize_struct(stream::VkPhysicalDeviceLayeredDriverPropertiesMSFT::Builder&, VkPhysicalDeviceLayeredDriverPropertiesMSFT);
        VkPhysicalDeviceLayeredDriverPropertiesMSFT deserialize_struct(stream::VkPhysicalDeviceLayeredDriverPropertiesMSFT::Reader&);
    
void serialize_funcpointer(stream::PFNvkInternalAllocationNotification::Builder, PFN_vkInternalAllocationNotification);
void handle_PFN_vkInternalAllocationNotification_request(stream::PFNvkInternalAllocationNotification::Reader);
PFN_vkInternalAllocationNotification deserialize_funcpointer(stream::PFNvkInternalAllocationNotification::Reader reader);
void serialize_funcpointer(stream::PFNvkInternalFreeNotification::Builder, PFN_vkInternalFreeNotification);
void handle_PFN_vkInternalFreeNotification_request(stream::PFNvkInternalFreeNotification::Reader);
PFN_vkInternalFreeNotification deserialize_funcpointer(stream::PFNvkInternalFreeNotification::Reader reader);
void serialize_funcpointer(stream::PFNvkReallocationFunction::Builder, PFN_vkReallocationFunction);
void handle_PFN_vkReallocationFunction_request(stream::PFNvkReallocationFunction::Reader);
PFN_vkReallocationFunction deserialize_funcpointer(stream::PFNvkReallocationFunction::Reader reader);
void serialize_funcpointer(stream::PFNvkAllocationFunction::Builder, PFN_vkAllocationFunction);
void handle_PFN_vkAllocationFunction_request(stream::PFNvkAllocationFunction::Reader);
PFN_vkAllocationFunction deserialize_funcpointer(stream::PFNvkAllocationFunction::Reader reader);
void serialize_funcpointer(stream::PFNvkFreeFunction::Builder, PFN_vkFreeFunction);
void handle_PFN_vkFreeFunction_request(stream::PFNvkFreeFunction::Reader);
PFN_vkFreeFunction deserialize_funcpointer(stream::PFNvkFreeFunction::Reader reader);
void serialize_funcpointer(stream::PFNvkDebugReportCallbackEXT::Builder, PFN_vkDebugReportCallbackEXT);
void handle_PFN_vkDebugReportCallbackEXT_request(stream::PFNvkDebugReportCallbackEXT::Reader);
PFN_vkDebugReportCallbackEXT deserialize_funcpointer(stream::PFNvkDebugReportCallbackEXT::Reader reader);
void serialize_funcpointer(stream::PFNvkDebugUtilsMessengerCallbackEXT::Builder, PFN_vkDebugUtilsMessengerCallbackEXT);
void handle_PFN_vkDebugUtilsMessengerCallbackEXT_request(stream::PFNvkDebugUtilsMessengerCallbackEXT::Reader);
PFN_vkDebugUtilsMessengerCallbackEXT deserialize_funcpointer(stream::PFNvkDebugUtilsMessengerCallbackEXT::Reader reader);
void serialize_funcpointer(stream::PFNvkDeviceMemoryReportCallbackEXT::Builder, PFN_vkDeviceMemoryReportCallbackEXT);
void handle_PFN_vkDeviceMemoryReportCallbackEXT_request(stream::PFNvkDeviceMemoryReportCallbackEXT::Reader);
PFN_vkDeviceMemoryReportCallbackEXT deserialize_funcpointer(stream::PFNvkDeviceMemoryReportCallbackEXT::Reader reader);
void serialize_funcpointer(stream::PFNvkGetInstanceProcAddrLUNARG::Builder, PFN_vkGetInstanceProcAddrLUNARG);
PFN_vkGetInstanceProcAddrLUNARG deserialize_funcpointer(stream::PFNvkGetInstanceProcAddrLUNARG::Reader reader);
uintptr_t serialize_handle(VkInstance data);
VkInstance deserialize_VkInstance(uintptr_t);
uintptr_t serialize_handle(VkPhysicalDevice data);
VkPhysicalDevice deserialize_VkPhysicalDevice(uintptr_t);
uintptr_t serialize_handle(VkDevice data);
VkDevice deserialize_VkDevice(uintptr_t);
uintptr_t serialize_handle(VkQueue data);
VkQueue deserialize_VkQueue(uintptr_t);
uintptr_t serialize_handle(VkCommandBuffer data);
VkCommandBuffer deserialize_VkCommandBuffer(uintptr_t);
uintptr_t serialize_handle(VkDeviceMemory data);
VkDeviceMemory deserialize_VkDeviceMemory(uintptr_t);
uintptr_t serialize_handle(VkCommandPool data);
VkCommandPool deserialize_VkCommandPool(uintptr_t);
uintptr_t serialize_handle(VkBuffer data);
VkBuffer deserialize_VkBuffer(uintptr_t);
uintptr_t serialize_handle(VkBufferView data);
VkBufferView deserialize_VkBufferView(uintptr_t);
uintptr_t serialize_handle(VkImage data);
VkImage deserialize_VkImage(uintptr_t);
uintptr_t serialize_handle(VkImageView data);
VkImageView deserialize_VkImageView(uintptr_t);
uintptr_t serialize_handle(VkShaderModule data);
VkShaderModule deserialize_VkShaderModule(uintptr_t);
uintptr_t serialize_handle(VkPipeline data);
VkPipeline deserialize_VkPipeline(uintptr_t);
uintptr_t serialize_handle(VkPipelineLayout data);
VkPipelineLayout deserialize_VkPipelineLayout(uintptr_t);
uintptr_t serialize_handle(VkSampler data);
VkSampler deserialize_VkSampler(uintptr_t);
uintptr_t serialize_handle(VkDescriptorSet data);
VkDescriptorSet deserialize_VkDescriptorSet(uintptr_t);
uintptr_t serialize_handle(VkDescriptorSetLayout data);
VkDescriptorSetLayout deserialize_VkDescriptorSetLayout(uintptr_t);
uintptr_t serialize_handle(VkDescriptorPool data);
VkDescriptorPool deserialize_VkDescriptorPool(uintptr_t);
uintptr_t serialize_handle(VkFence data);
VkFence deserialize_VkFence(uintptr_t);
uintptr_t serialize_handle(VkSemaphore data);
VkSemaphore deserialize_VkSemaphore(uintptr_t);
uintptr_t serialize_handle(VkEvent data);
VkEvent deserialize_VkEvent(uintptr_t);
uintptr_t serialize_handle(VkQueryPool data);
VkQueryPool deserialize_VkQueryPool(uintptr_t);
uintptr_t serialize_handle(VkFramebuffer data);
VkFramebuffer deserialize_VkFramebuffer(uintptr_t);
uintptr_t serialize_handle(VkRenderPass data);
VkRenderPass deserialize_VkRenderPass(uintptr_t);
uintptr_t serialize_handle(VkPipelineCache data);
VkPipelineCache deserialize_VkPipelineCache(uintptr_t);
uintptr_t serialize_handle(VkIndirectCommandsLayoutNV data);
VkIndirectCommandsLayoutNV deserialize_VkIndirectCommandsLayoutNV(uintptr_t);
uintptr_t serialize_handle(VkDescriptorUpdateTemplate data);
VkDescriptorUpdateTemplate deserialize_VkDescriptorUpdateTemplate(uintptr_t);
uintptr_t serialize_handle(VkDescriptorUpdateTemplateKHR data);
VkDescriptorUpdateTemplateKHR deserialize_VkDescriptorUpdateTemplateKHR(uintptr_t);
uintptr_t serialize_handle(VkSamplerYcbcrConversion data);
VkSamplerYcbcrConversion deserialize_VkSamplerYcbcrConversion(uintptr_t);
uintptr_t serialize_handle(VkSamplerYcbcrConversionKHR data);
VkSamplerYcbcrConversionKHR deserialize_VkSamplerYcbcrConversionKHR(uintptr_t);
uintptr_t serialize_handle(VkValidationCacheEXT data);
VkValidationCacheEXT deserialize_VkValidationCacheEXT(uintptr_t);
uintptr_t serialize_handle(VkAccelerationStructureKHR data);
VkAccelerationStructureKHR deserialize_VkAccelerationStructureKHR(uintptr_t);
uintptr_t serialize_handle(VkAccelerationStructureNV data);
VkAccelerationStructureNV deserialize_VkAccelerationStructureNV(uintptr_t);
uintptr_t serialize_handle(VkPerformanceConfigurationINTEL data);
VkPerformanceConfigurationINTEL deserialize_VkPerformanceConfigurationINTEL(uintptr_t);
uintptr_t serialize_handle(VkDeferredOperationKHR data);
VkDeferredOperationKHR deserialize_VkDeferredOperationKHR(uintptr_t);
uintptr_t serialize_handle(VkPrivateDataSlot data);
VkPrivateDataSlot deserialize_VkPrivateDataSlot(uintptr_t);
uintptr_t serialize_handle(VkPrivateDataSlotEXT data);
VkPrivateDataSlotEXT deserialize_VkPrivateDataSlotEXT(uintptr_t);
uintptr_t serialize_handle(VkCuModuleNVX data);
VkCuModuleNVX deserialize_VkCuModuleNVX(uintptr_t);
uintptr_t serialize_handle(VkCuFunctionNVX data);
VkCuFunctionNVX deserialize_VkCuFunctionNVX(uintptr_t);
uintptr_t serialize_handle(VkOpticalFlowSessionNV data);
VkOpticalFlowSessionNV deserialize_VkOpticalFlowSessionNV(uintptr_t);
uintptr_t serialize_handle(VkMicromapEXT data);
VkMicromapEXT deserialize_VkMicromapEXT(uintptr_t);
uintptr_t serialize_handle(VkShaderEXT data);
VkShaderEXT deserialize_VkShaderEXT(uintptr_t);
uintptr_t serialize_handle(VkDisplayKHR data);
VkDisplayKHR deserialize_VkDisplayKHR(uintptr_t);
uintptr_t serialize_handle(VkDisplayModeKHR data);
VkDisplayModeKHR deserialize_VkDisplayModeKHR(uintptr_t);
uintptr_t serialize_handle(VkSurfaceKHR data);
VkSurfaceKHR deserialize_VkSurfaceKHR(uintptr_t);
uintptr_t serialize_handle(VkSwapchainKHR data);
VkSwapchainKHR deserialize_VkSwapchainKHR(uintptr_t);
uintptr_t serialize_handle(VkDebugReportCallbackEXT data);
VkDebugReportCallbackEXT deserialize_VkDebugReportCallbackEXT(uintptr_t);
uintptr_t serialize_handle(VkDebugUtilsMessengerEXT data);
VkDebugUtilsMessengerEXT deserialize_VkDebugUtilsMessengerEXT(uintptr_t);
uintptr_t serialize_handle(VkVideoSessionKHR data);
VkVideoSessionKHR deserialize_VkVideoSessionKHR(uintptr_t);
uintptr_t serialize_handle(VkVideoSessionParametersKHR data);
VkVideoSessionParametersKHR deserialize_VkVideoSessionParametersKHR(uintptr_t);
