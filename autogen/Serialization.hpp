#include <vulkan/vulkan.h>

typedef struct StreamStructure{
    VkStructureType sType;
    const void* pNext;
} StreamStructure;

#include <debug.hpp>
typedef void* pNext;
void* memdup(const void* mem, size_t size);
void* copyVkStruct (const void* data);

        void serialize_struct(object&, VkBaseOutStructure&);
        void deserialize_struct(object&, VkBaseOutStructure&);
    

        void serialize_struct(object&, VkBaseInStructure&);
        void deserialize_struct(object&, VkBaseInStructure&);
    

        void serialize_struct(object&, VkOffset2D&);
        void deserialize_struct(object&, VkOffset2D&);
    

        void serialize_struct(object&, VkOffset3D&);
        void deserialize_struct(object&, VkOffset3D&);
    

        void serialize_struct(object&, VkExtent2D&);
        void deserialize_struct(object&, VkExtent2D&);
    

        void serialize_struct(object&, VkExtent3D&);
        void deserialize_struct(object&, VkExtent3D&);
    

        void serialize_struct(object&, VkViewport&);
        void deserialize_struct(object&, VkViewport&);
    

        void serialize_struct(object&, VkRect2D&);
        void deserialize_struct(object&, VkRect2D&);
    

        void serialize_struct(object&, VkClearRect&);
        void deserialize_struct(object&, VkClearRect&);
    

        void serialize_struct(object&, VkComponentMapping&);
        void deserialize_struct(object&, VkComponentMapping&);
    

        void serialize_struct(object&, VkPhysicalDeviceProperties&);
        void deserialize_struct(object&, VkPhysicalDeviceProperties&);
    

        void serialize_struct(object&, VkExtensionProperties&);
        void deserialize_struct(object&, VkExtensionProperties&);
    

        void serialize_struct(object&, VkLayerProperties&);
        void deserialize_struct(object&, VkLayerProperties&);
    

        void serialize_struct(object&, VkApplicationInfo&);
        void deserialize_struct(object&, VkApplicationInfo&);
    

        void serialize_struct(object&, VkAllocationCallbacks&);
        void deserialize_struct(object&, VkAllocationCallbacks&);
    

        void serialize_struct(object&, VkDeviceQueueCreateInfo&);
        void deserialize_struct(object&, VkDeviceQueueCreateInfo&);
    

        void serialize_struct(object&, VkDeviceCreateInfo&);
        void deserialize_struct(object&, VkDeviceCreateInfo&);
    

        void serialize_struct(object&, VkInstanceCreateInfo&);
        void deserialize_struct(object&, VkInstanceCreateInfo&);
    

        void serialize_struct(object&, VkQueueFamilyProperties&);
        void deserialize_struct(object&, VkQueueFamilyProperties&);
    

        void serialize_struct(object&, VkPhysicalDeviceMemoryProperties&);
        void deserialize_struct(object&, VkPhysicalDeviceMemoryProperties&);
    

        void serialize_struct(object&, VkMemoryAllocateInfo&);
        void deserialize_struct(object&, VkMemoryAllocateInfo&);
    

        void serialize_struct(object&, VkMemoryRequirements&);
        void deserialize_struct(object&, VkMemoryRequirements&);
    

        void serialize_struct(object&, VkSparseImageFormatProperties&);
        void deserialize_struct(object&, VkSparseImageFormatProperties&);
    

        void serialize_struct(object&, VkSparseImageMemoryRequirements&);
        void deserialize_struct(object&, VkSparseImageMemoryRequirements&);
    

        void serialize_struct(object&, VkMemoryType&);
        void deserialize_struct(object&, VkMemoryType&);
    

        void serialize_struct(object&, VkMemoryHeap&);
        void deserialize_struct(object&, VkMemoryHeap&);
    

        void serialize_struct(object&, VkMappedMemoryRange&);
        void deserialize_struct(object&, VkMappedMemoryRange&);
    

        void serialize_struct(object&, VkFormatProperties&);
        void deserialize_struct(object&, VkFormatProperties&);
    

        void serialize_struct(object&, VkImageFormatProperties&);
        void deserialize_struct(object&, VkImageFormatProperties&);
    

        void serialize_struct(object&, VkDescriptorBufferInfo&);
        void deserialize_struct(object&, VkDescriptorBufferInfo&);
    

        void serialize_struct(object&, VkDescriptorImageInfo&);
        void deserialize_struct(object&, VkDescriptorImageInfo&);
    

        void serialize_struct(object&, VkWriteDescriptorSet&);
        void deserialize_struct(object&, VkWriteDescriptorSet&);
    

        void serialize_struct(object&, VkCopyDescriptorSet&);
        void deserialize_struct(object&, VkCopyDescriptorSet&);
    

        void serialize_struct(object&, VkBufferUsageFlags2CreateInfoKHR&);
        void deserialize_struct(object&, VkBufferUsageFlags2CreateInfoKHR&);
    

        void serialize_struct(object&, VkBufferCreateInfo&);
        void deserialize_struct(object&, VkBufferCreateInfo&);
    

        void serialize_struct(object&, VkBufferViewCreateInfo&);
        void deserialize_struct(object&, VkBufferViewCreateInfo&);
    

        void serialize_struct(object&, VkImageSubresource&);
        void deserialize_struct(object&, VkImageSubresource&);
    

        void serialize_struct(object&, VkImageSubresourceLayers&);
        void deserialize_struct(object&, VkImageSubresourceLayers&);
    

        void serialize_struct(object&, VkImageSubresourceRange&);
        void deserialize_struct(object&, VkImageSubresourceRange&);
    

        void serialize_struct(object&, VkMemoryBarrier&);
        void deserialize_struct(object&, VkMemoryBarrier&);
    

        void serialize_struct(object&, VkBufferMemoryBarrier&);
        void deserialize_struct(object&, VkBufferMemoryBarrier&);
    

        void serialize_struct(object&, VkImageMemoryBarrier&);
        void deserialize_struct(object&, VkImageMemoryBarrier&);
    

        void serialize_struct(object&, VkImageCreateInfo&);
        void deserialize_struct(object&, VkImageCreateInfo&);
    

        void serialize_struct(object&, VkSubresourceLayout&);
        void deserialize_struct(object&, VkSubresourceLayout&);
    

        void serialize_struct(object&, VkImageViewCreateInfo&);
        void deserialize_struct(object&, VkImageViewCreateInfo&);
    

        void serialize_struct(object&, VkBufferCopy&);
        void deserialize_struct(object&, VkBufferCopy&);
    

        void serialize_struct(object&, VkSparseMemoryBind&);
        void deserialize_struct(object&, VkSparseMemoryBind&);
    

        void serialize_struct(object&, VkSparseImageMemoryBind&);
        void deserialize_struct(object&, VkSparseImageMemoryBind&);
    

        void serialize_struct(object&, VkSparseBufferMemoryBindInfo&);
        void deserialize_struct(object&, VkSparseBufferMemoryBindInfo&);
    

        void serialize_struct(object&, VkSparseImageOpaqueMemoryBindInfo&);
        void deserialize_struct(object&, VkSparseImageOpaqueMemoryBindInfo&);
    

        void serialize_struct(object&, VkSparseImageMemoryBindInfo&);
        void deserialize_struct(object&, VkSparseImageMemoryBindInfo&);
    

        void serialize_struct(object&, VkBindSparseInfo&);
        void deserialize_struct(object&, VkBindSparseInfo&);
    

        void serialize_struct(object&, VkImageCopy&);
        void deserialize_struct(object&, VkImageCopy&);
    

        void serialize_struct(object&, VkImageBlit&);
        void deserialize_struct(object&, VkImageBlit&);
    

        void serialize_struct(object&, VkBufferImageCopy&);
        void deserialize_struct(object&, VkBufferImageCopy&);
    

        void serialize_struct(object&, VkCopyMemoryIndirectCommandNV&);
        void deserialize_struct(object&, VkCopyMemoryIndirectCommandNV&);
    

        void serialize_struct(object&, VkCopyMemoryToImageIndirectCommandNV&);
        void deserialize_struct(object&, VkCopyMemoryToImageIndirectCommandNV&);
    

        void serialize_struct(object&, VkImageResolve&);
        void deserialize_struct(object&, VkImageResolve&);
    

        void serialize_struct(object&, VkShaderModuleCreateInfo&);
        void deserialize_struct(object&, VkShaderModuleCreateInfo&);
    

        void serialize_struct(object&, VkDescriptorSetLayoutBinding&);
        void deserialize_struct(object&, VkDescriptorSetLayoutBinding&);
    

        void serialize_struct(object&, VkDescriptorSetLayoutCreateInfo&);
        void deserialize_struct(object&, VkDescriptorSetLayoutCreateInfo&);
    

        void serialize_struct(object&, VkDescriptorPoolSize&);
        void deserialize_struct(object&, VkDescriptorPoolSize&);
    

        void serialize_struct(object&, VkDescriptorPoolCreateInfo&);
        void deserialize_struct(object&, VkDescriptorPoolCreateInfo&);
    

        void serialize_struct(object&, VkDescriptorSetAllocateInfo&);
        void deserialize_struct(object&, VkDescriptorSetAllocateInfo&);
    

        void serialize_struct(object&, VkSpecializationMapEntry&);
        void deserialize_struct(object&, VkSpecializationMapEntry&);
    

        void serialize_struct(object&, VkSpecializationInfo&);
        void deserialize_struct(object&, VkSpecializationInfo&);
    

        void serialize_struct(object&, VkPipelineShaderStageCreateInfo&);
        void deserialize_struct(object&, VkPipelineShaderStageCreateInfo&);
    

        void serialize_struct(object&, VkComputePipelineCreateInfo&);
        void deserialize_struct(object&, VkComputePipelineCreateInfo&);
    

        void serialize_struct(object&, VkComputePipelineIndirectBufferInfoNV&);
        void deserialize_struct(object&, VkComputePipelineIndirectBufferInfoNV&);
    

        void serialize_struct(object&, VkPipelineCreateFlags2CreateInfoKHR&);
        void deserialize_struct(object&, VkPipelineCreateFlags2CreateInfoKHR&);
    

        void serialize_struct(object&, VkVertexInputBindingDescription&);
        void deserialize_struct(object&, VkVertexInputBindingDescription&);
    

        void serialize_struct(object&, VkVertexInputAttributeDescription&);
        void deserialize_struct(object&, VkVertexInputAttributeDescription&);
    

        void serialize_struct(object&, VkPipelineVertexInputStateCreateInfo&);
        void deserialize_struct(object&, VkPipelineVertexInputStateCreateInfo&);
    

        void serialize_struct(object&, VkPipelineInputAssemblyStateCreateInfo&);
        void deserialize_struct(object&, VkPipelineInputAssemblyStateCreateInfo&);
    

        void serialize_struct(object&, VkPipelineTessellationStateCreateInfo&);
        void deserialize_struct(object&, VkPipelineTessellationStateCreateInfo&);
    

        void serialize_struct(object&, VkPipelineViewportStateCreateInfo&);
        void deserialize_struct(object&, VkPipelineViewportStateCreateInfo&);
    

        void serialize_struct(object&, VkPipelineRasterizationStateCreateInfo&);
        void deserialize_struct(object&, VkPipelineRasterizationStateCreateInfo&);
    

        void serialize_struct(object&, VkPipelineMultisampleStateCreateInfo&);
        void deserialize_struct(object&, VkPipelineMultisampleStateCreateInfo&);
    

        void serialize_struct(object&, VkPipelineColorBlendAttachmentState&);
        void deserialize_struct(object&, VkPipelineColorBlendAttachmentState&);
    

        void serialize_struct(object&, VkPipelineColorBlendStateCreateInfo&);
        void deserialize_struct(object&, VkPipelineColorBlendStateCreateInfo&);
    

        void serialize_struct(object&, VkPipelineDynamicStateCreateInfo&);
        void deserialize_struct(object&, VkPipelineDynamicStateCreateInfo&);
    

        void serialize_struct(object&, VkStencilOpState&);
        void deserialize_struct(object&, VkStencilOpState&);
    

        void serialize_struct(object&, VkPipelineDepthStencilStateCreateInfo&);
        void deserialize_struct(object&, VkPipelineDepthStencilStateCreateInfo&);
    

        void serialize_struct(object&, VkGraphicsPipelineCreateInfo&);
        void deserialize_struct(object&, VkGraphicsPipelineCreateInfo&);
    

        void serialize_struct(object&, VkPipelineCacheCreateInfo&);
        void deserialize_struct(object&, VkPipelineCacheCreateInfo&);
    

        void serialize_struct(object&, VkPipelineCacheHeaderVersionOne&);
        void deserialize_struct(object&, VkPipelineCacheHeaderVersionOne&);
    

        void serialize_struct(object&, VkPushConstantRange&);
        void deserialize_struct(object&, VkPushConstantRange&);
    

        void serialize_struct(object&, VkPipelineLayoutCreateInfo&);
        void deserialize_struct(object&, VkPipelineLayoutCreateInfo&);
    

        void serialize_struct(object&, VkSamplerCreateInfo&);
        void deserialize_struct(object&, VkSamplerCreateInfo&);
    

        void serialize_struct(object&, VkCommandPoolCreateInfo&);
        void deserialize_struct(object&, VkCommandPoolCreateInfo&);
    

        void serialize_struct(object&, VkCommandBufferAllocateInfo&);
        void deserialize_struct(object&, VkCommandBufferAllocateInfo&);
    

        void serialize_struct(object&, VkCommandBufferInheritanceInfo&);
        void deserialize_struct(object&, VkCommandBufferInheritanceInfo&);
    

        void serialize_struct(object&, VkCommandBufferBeginInfo&);
        void deserialize_struct(object&, VkCommandBufferBeginInfo&);
    

        void serialize_struct(object&, VkRenderPassBeginInfo&);
        void deserialize_struct(object&, VkRenderPassBeginInfo&);
    

        void serialize_struct(object&, VkClearColorValue&);
        void deserialize_struct(object&, VkClearColorValue&);
    

        void serialize_struct(object&, VkClearDepthStencilValue&);
        void deserialize_struct(object&, VkClearDepthStencilValue&);
    

        void serialize_struct(object&, VkClearValue&);
        void deserialize_struct(object&, VkClearValue&);
    

        void serialize_struct(object&, VkClearAttachment&);
        void deserialize_struct(object&, VkClearAttachment&);
    

        void serialize_struct(object&, VkAttachmentDescription&);
        void deserialize_struct(object&, VkAttachmentDescription&);
    

        void serialize_struct(object&, VkAttachmentReference&);
        void deserialize_struct(object&, VkAttachmentReference&);
    

        void serialize_struct(object&, VkSubpassDescription&);
        void deserialize_struct(object&, VkSubpassDescription&);
    

        void serialize_struct(object&, VkSubpassDependency&);
        void deserialize_struct(object&, VkSubpassDependency&);
    

        void serialize_struct(object&, VkRenderPassCreateInfo&);
        void deserialize_struct(object&, VkRenderPassCreateInfo&);
    

        void serialize_struct(object&, VkEventCreateInfo&);
        void deserialize_struct(object&, VkEventCreateInfo&);
    

        void serialize_struct(object&, VkFenceCreateInfo&);
        void deserialize_struct(object&, VkFenceCreateInfo&);
    

        void serialize_struct(object&, VkPhysicalDeviceFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceSparseProperties&);
        void deserialize_struct(object&, VkPhysicalDeviceSparseProperties&);
    

        void serialize_struct(object&, VkPhysicalDeviceLimits&);
        void deserialize_struct(object&, VkPhysicalDeviceLimits&);
    

        void serialize_struct(object&, VkSemaphoreCreateInfo&);
        void deserialize_struct(object&, VkSemaphoreCreateInfo&);
    

        void serialize_struct(object&, VkQueryPoolCreateInfo&);
        void deserialize_struct(object&, VkQueryPoolCreateInfo&);
    

        void serialize_struct(object&, VkFramebufferCreateInfo&);
        void deserialize_struct(object&, VkFramebufferCreateInfo&);
    

        void serialize_struct(object&, VkDrawIndirectCommand&);
        void deserialize_struct(object&, VkDrawIndirectCommand&);
    

        void serialize_struct(object&, VkDrawIndexedIndirectCommand&);
        void deserialize_struct(object&, VkDrawIndexedIndirectCommand&);
    

        void serialize_struct(object&, VkDispatchIndirectCommand&);
        void deserialize_struct(object&, VkDispatchIndirectCommand&);
    

        void serialize_struct(object&, VkMultiDrawInfoEXT&);
        void deserialize_struct(object&, VkMultiDrawInfoEXT&);
    

        void serialize_struct(object&, VkMultiDrawIndexedInfoEXT&);
        void deserialize_struct(object&, VkMultiDrawIndexedInfoEXT&);
    

        void serialize_struct(object&, VkSubmitInfo&);
        void deserialize_struct(object&, VkSubmitInfo&);
    

        void serialize_struct(object&, VkDisplayPropertiesKHR&);
        void deserialize_struct(object&, VkDisplayPropertiesKHR&);
    

        void serialize_struct(object&, VkDisplayPlanePropertiesKHR&);
        void deserialize_struct(object&, VkDisplayPlanePropertiesKHR&);
    

        void serialize_struct(object&, VkDisplayModeParametersKHR&);
        void deserialize_struct(object&, VkDisplayModeParametersKHR&);
    

        void serialize_struct(object&, VkDisplayModePropertiesKHR&);
        void deserialize_struct(object&, VkDisplayModePropertiesKHR&);
    

        void serialize_struct(object&, VkDisplayModeCreateInfoKHR&);
        void deserialize_struct(object&, VkDisplayModeCreateInfoKHR&);
    

        void serialize_struct(object&, VkDisplayPlaneCapabilitiesKHR&);
        void deserialize_struct(object&, VkDisplayPlaneCapabilitiesKHR&);
    

        void serialize_struct(object&, VkDisplaySurfaceCreateInfoKHR&);
        void deserialize_struct(object&, VkDisplaySurfaceCreateInfoKHR&);
    

        void serialize_struct(object&, VkDisplayPresentInfoKHR&);
        void deserialize_struct(object&, VkDisplayPresentInfoKHR&);
    

        void serialize_struct(object&, VkSurfaceCapabilitiesKHR&);
        void deserialize_struct(object&, VkSurfaceCapabilitiesKHR&);
    

        void serialize_struct(object&, VkXlibSurfaceCreateInfoKHR&);
        void deserialize_struct(object&, VkXlibSurfaceCreateInfoKHR&);
    

        void serialize_struct(object&, VkXcbSurfaceCreateInfoKHR&);
        void deserialize_struct(object&, VkXcbSurfaceCreateInfoKHR&);
    

        void serialize_struct(object&, VkSurfaceFormatKHR&);
        void deserialize_struct(object&, VkSurfaceFormatKHR&);
    

        void serialize_struct(object&, VkSwapchainCreateInfoKHR&);
        void deserialize_struct(object&, VkSwapchainCreateInfoKHR&);
    

        void serialize_struct(object&, VkPresentInfoKHR&);
        void deserialize_struct(object&, VkPresentInfoKHR&);
    

        void serialize_struct(object&, VkDebugReportCallbackCreateInfoEXT&);
        void deserialize_struct(object&, VkDebugReportCallbackCreateInfoEXT&);
    

        void serialize_struct(object&, VkValidationFlagsEXT&);
        void deserialize_struct(object&, VkValidationFlagsEXT&);
    

        void serialize_struct(object&, VkValidationFeaturesEXT&);
        void deserialize_struct(object&, VkValidationFeaturesEXT&);
    

        void serialize_struct(object&, VkPipelineRasterizationStateRasterizationOrderAMD&);
        void deserialize_struct(object&, VkPipelineRasterizationStateRasterizationOrderAMD&);
    

        void serialize_struct(object&, VkDebugMarkerObjectNameInfoEXT&);
        void deserialize_struct(object&, VkDebugMarkerObjectNameInfoEXT&);
    

        void serialize_struct(object&, VkDebugMarkerObjectTagInfoEXT&);
        void deserialize_struct(object&, VkDebugMarkerObjectTagInfoEXT&);
    

        void serialize_struct(object&, VkDebugMarkerMarkerInfoEXT&);
        void deserialize_struct(object&, VkDebugMarkerMarkerInfoEXT&);
    

        void serialize_struct(object&, VkDedicatedAllocationImageCreateInfoNV&);
        void deserialize_struct(object&, VkDedicatedAllocationImageCreateInfoNV&);
    

        void serialize_struct(object&, VkDedicatedAllocationBufferCreateInfoNV&);
        void deserialize_struct(object&, VkDedicatedAllocationBufferCreateInfoNV&);
    

        void serialize_struct(object&, VkDedicatedAllocationMemoryAllocateInfoNV&);
        void deserialize_struct(object&, VkDedicatedAllocationMemoryAllocateInfoNV&);
    

        void serialize_struct(object&, VkExternalImageFormatPropertiesNV&);
        void deserialize_struct(object&, VkExternalImageFormatPropertiesNV&);
    

        void serialize_struct(object&, VkExternalMemoryImageCreateInfoNV&);
        void deserialize_struct(object&, VkExternalMemoryImageCreateInfoNV&);
    

        void serialize_struct(object&, VkExportMemoryAllocateInfoNV&);
        void deserialize_struct(object&, VkExportMemoryAllocateInfoNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV&);
    

        void serialize_struct(object&, VkDevicePrivateDataCreateInfo&);
        void deserialize_struct(object&, VkDevicePrivateDataCreateInfo&);
    

        void serialize_struct(object&, VkPrivateDataSlotCreateInfo&);
        void deserialize_struct(object&, VkPrivateDataSlotCreateInfo&);
    

        void serialize_struct(object&, VkPhysicalDevicePrivateDataFeatures&);
        void deserialize_struct(object&, VkPhysicalDevicePrivateDataFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceMultiDrawPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceMultiDrawPropertiesEXT&);
    

        void serialize_struct(object&, VkGraphicsShaderGroupCreateInfoNV&);
        void deserialize_struct(object&, VkGraphicsShaderGroupCreateInfoNV&);
    

        void serialize_struct(object&, VkGraphicsPipelineShaderGroupsCreateInfoNV&);
        void deserialize_struct(object&, VkGraphicsPipelineShaderGroupsCreateInfoNV&);
    

        void serialize_struct(object&, VkBindShaderGroupIndirectCommandNV&);
        void deserialize_struct(object&, VkBindShaderGroupIndirectCommandNV&);
    

        void serialize_struct(object&, VkBindIndexBufferIndirectCommandNV&);
        void deserialize_struct(object&, VkBindIndexBufferIndirectCommandNV&);
    

        void serialize_struct(object&, VkBindVertexBufferIndirectCommandNV&);
        void deserialize_struct(object&, VkBindVertexBufferIndirectCommandNV&);
    

        void serialize_struct(object&, VkSetStateFlagsIndirectCommandNV&);
        void deserialize_struct(object&, VkSetStateFlagsIndirectCommandNV&);
    

        void serialize_struct(object&, VkIndirectCommandsStreamNV&);
        void deserialize_struct(object&, VkIndirectCommandsStreamNV&);
    

        void serialize_struct(object&, VkIndirectCommandsLayoutTokenNV&);
        void deserialize_struct(object&, VkIndirectCommandsLayoutTokenNV&);
    

        void serialize_struct(object&, VkIndirectCommandsLayoutCreateInfoNV&);
        void deserialize_struct(object&, VkIndirectCommandsLayoutCreateInfoNV&);
    

        void serialize_struct(object&, VkGeneratedCommandsInfoNV&);
        void deserialize_struct(object&, VkGeneratedCommandsInfoNV&);
    

        void serialize_struct(object&, VkGeneratedCommandsMemoryRequirementsInfoNV&);
        void deserialize_struct(object&, VkGeneratedCommandsMemoryRequirementsInfoNV&);
    

        void serialize_struct(object&, VkPipelineIndirectDeviceAddressInfoNV&);
        void deserialize_struct(object&, VkPipelineIndirectDeviceAddressInfoNV&);
    

        void serialize_struct(object&, VkBindPipelineIndirectCommandNV&);
        void deserialize_struct(object&, VkBindPipelineIndirectCommandNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceFeatures2&);
        void deserialize_struct(object&, VkPhysicalDeviceFeatures2&);
    

        void serialize_struct(object&, VkPhysicalDeviceProperties2&);
        void deserialize_struct(object&, VkPhysicalDeviceProperties2&);
    

        void serialize_struct(object&, VkFormatProperties2&);
        void deserialize_struct(object&, VkFormatProperties2&);
    

        void serialize_struct(object&, VkImageFormatProperties2&);
        void deserialize_struct(object&, VkImageFormatProperties2&);
    

        void serialize_struct(object&, VkPhysicalDeviceImageFormatInfo2&);
        void deserialize_struct(object&, VkPhysicalDeviceImageFormatInfo2&);
    

        void serialize_struct(object&, VkQueueFamilyProperties2&);
        void deserialize_struct(object&, VkQueueFamilyProperties2&);
    

        void serialize_struct(object&, VkPhysicalDeviceMemoryProperties2&);
        void deserialize_struct(object&, VkPhysicalDeviceMemoryProperties2&);
    

        void serialize_struct(object&, VkSparseImageFormatProperties2&);
        void deserialize_struct(object&, VkSparseImageFormatProperties2&);
    

        void serialize_struct(object&, VkPhysicalDeviceSparseImageFormatInfo2&);
        void deserialize_struct(object&, VkPhysicalDeviceSparseImageFormatInfo2&);
    

        void serialize_struct(object&, VkPhysicalDevicePushDescriptorPropertiesKHR&);
        void deserialize_struct(object&, VkPhysicalDevicePushDescriptorPropertiesKHR&);
    

        void serialize_struct(object&, VkConformanceVersion&);
        void deserialize_struct(object&, VkConformanceVersion&);
    

        void serialize_struct(object&, VkPhysicalDeviceDriverProperties&);
        void deserialize_struct(object&, VkPhysicalDeviceDriverProperties&);
    

        void serialize_struct(object&, VkPresentRegionsKHR&);
        void deserialize_struct(object&, VkPresentRegionsKHR&);
    

        void serialize_struct(object&, VkPresentRegionKHR&);
        void deserialize_struct(object&, VkPresentRegionKHR&);
    

        void serialize_struct(object&, VkRectLayerKHR&);
        void deserialize_struct(object&, VkRectLayerKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceVariablePointersFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceVariablePointersFeatures&);
    

        void serialize_struct(object&, VkExternalMemoryProperties&);
        void deserialize_struct(object&, VkExternalMemoryProperties&);
    

        void serialize_struct(object&, VkPhysicalDeviceExternalImageFormatInfo&);
        void deserialize_struct(object&, VkPhysicalDeviceExternalImageFormatInfo&);
    

        void serialize_struct(object&, VkExternalImageFormatProperties&);
        void deserialize_struct(object&, VkExternalImageFormatProperties&);
    

        void serialize_struct(object&, VkPhysicalDeviceExternalBufferInfo&);
        void deserialize_struct(object&, VkPhysicalDeviceExternalBufferInfo&);
    

        void serialize_struct(object&, VkExternalBufferProperties&);
        void deserialize_struct(object&, VkExternalBufferProperties&);
    

        void serialize_struct(object&, VkPhysicalDeviceIDProperties&);
        void deserialize_struct(object&, VkPhysicalDeviceIDProperties&);
    

        void serialize_struct(object&, VkExternalMemoryImageCreateInfo&);
        void deserialize_struct(object&, VkExternalMemoryImageCreateInfo&);
    

        void serialize_struct(object&, VkExternalMemoryBufferCreateInfo&);
        void deserialize_struct(object&, VkExternalMemoryBufferCreateInfo&);
    

        void serialize_struct(object&, VkExportMemoryAllocateInfo&);
        void deserialize_struct(object&, VkExportMemoryAllocateInfo&);
    

        void serialize_struct(object&, VkImportMemoryFdInfoKHR&);
        void deserialize_struct(object&, VkImportMemoryFdInfoKHR&);
    

        void serialize_struct(object&, VkMemoryFdPropertiesKHR&);
        void deserialize_struct(object&, VkMemoryFdPropertiesKHR&);
    

        void serialize_struct(object&, VkMemoryGetFdInfoKHR&);
        void deserialize_struct(object&, VkMemoryGetFdInfoKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceExternalSemaphoreInfo&);
        void deserialize_struct(object&, VkPhysicalDeviceExternalSemaphoreInfo&);
    

        void serialize_struct(object&, VkExternalSemaphoreProperties&);
        void deserialize_struct(object&, VkExternalSemaphoreProperties&);
    

        void serialize_struct(object&, VkExportSemaphoreCreateInfo&);
        void deserialize_struct(object&, VkExportSemaphoreCreateInfo&);
    

        void serialize_struct(object&, VkImportSemaphoreFdInfoKHR&);
        void deserialize_struct(object&, VkImportSemaphoreFdInfoKHR&);
    

        void serialize_struct(object&, VkSemaphoreGetFdInfoKHR&);
        void deserialize_struct(object&, VkSemaphoreGetFdInfoKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceExternalFenceInfo&);
        void deserialize_struct(object&, VkPhysicalDeviceExternalFenceInfo&);
    

        void serialize_struct(object&, VkExternalFenceProperties&);
        void deserialize_struct(object&, VkExternalFenceProperties&);
    

        void serialize_struct(object&, VkExportFenceCreateInfo&);
        void deserialize_struct(object&, VkExportFenceCreateInfo&);
    

        void serialize_struct(object&, VkImportFenceFdInfoKHR&);
        void deserialize_struct(object&, VkImportFenceFdInfoKHR&);
    

        void serialize_struct(object&, VkFenceGetFdInfoKHR&);
        void deserialize_struct(object&, VkFenceGetFdInfoKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceMultiviewFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceMultiviewFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceMultiviewProperties&);
        void deserialize_struct(object&, VkPhysicalDeviceMultiviewProperties&);
    

        void serialize_struct(object&, VkRenderPassMultiviewCreateInfo&);
        void deserialize_struct(object&, VkRenderPassMultiviewCreateInfo&);
    

        void serialize_struct(object&, VkSurfaceCapabilities2EXT&);
        void deserialize_struct(object&, VkSurfaceCapabilities2EXT&);
    

        void serialize_struct(object&, VkDisplayPowerInfoEXT&);
        void deserialize_struct(object&, VkDisplayPowerInfoEXT&);
    

        void serialize_struct(object&, VkDeviceEventInfoEXT&);
        void deserialize_struct(object&, VkDeviceEventInfoEXT&);
    

        void serialize_struct(object&, VkDisplayEventInfoEXT&);
        void deserialize_struct(object&, VkDisplayEventInfoEXT&);
    

        void serialize_struct(object&, VkSwapchainCounterCreateInfoEXT&);
        void deserialize_struct(object&, VkSwapchainCounterCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceGroupProperties&);
        void deserialize_struct(object&, VkPhysicalDeviceGroupProperties&);
    

        void serialize_struct(object&, VkMemoryAllocateFlagsInfo&);
        void deserialize_struct(object&, VkMemoryAllocateFlagsInfo&);
    

        void serialize_struct(object&, VkBindBufferMemoryInfo&);
        void deserialize_struct(object&, VkBindBufferMemoryInfo&);
    

        void serialize_struct(object&, VkBindBufferMemoryDeviceGroupInfo&);
        void deserialize_struct(object&, VkBindBufferMemoryDeviceGroupInfo&);
    

        void serialize_struct(object&, VkBindImageMemoryInfo&);
        void deserialize_struct(object&, VkBindImageMemoryInfo&);
    

        void serialize_struct(object&, VkBindImageMemoryDeviceGroupInfo&);
        void deserialize_struct(object&, VkBindImageMemoryDeviceGroupInfo&);
    

        void serialize_struct(object&, VkDeviceGroupRenderPassBeginInfo&);
        void deserialize_struct(object&, VkDeviceGroupRenderPassBeginInfo&);
    

        void serialize_struct(object&, VkDeviceGroupCommandBufferBeginInfo&);
        void deserialize_struct(object&, VkDeviceGroupCommandBufferBeginInfo&);
    

        void serialize_struct(object&, VkDeviceGroupSubmitInfo&);
        void deserialize_struct(object&, VkDeviceGroupSubmitInfo&);
    

        void serialize_struct(object&, VkDeviceGroupBindSparseInfo&);
        void deserialize_struct(object&, VkDeviceGroupBindSparseInfo&);
    

        void serialize_struct(object&, VkDeviceGroupPresentCapabilitiesKHR&);
        void deserialize_struct(object&, VkDeviceGroupPresentCapabilitiesKHR&);
    

        void serialize_struct(object&, VkImageSwapchainCreateInfoKHR&);
        void deserialize_struct(object&, VkImageSwapchainCreateInfoKHR&);
    

        void serialize_struct(object&, VkBindImageMemorySwapchainInfoKHR&);
        void deserialize_struct(object&, VkBindImageMemorySwapchainInfoKHR&);
    

        void serialize_struct(object&, VkAcquireNextImageInfoKHR&);
        void deserialize_struct(object&, VkAcquireNextImageInfoKHR&);
    

        void serialize_struct(object&, VkDeviceGroupPresentInfoKHR&);
        void deserialize_struct(object&, VkDeviceGroupPresentInfoKHR&);
    

        void serialize_struct(object&, VkDeviceGroupDeviceCreateInfo&);
        void deserialize_struct(object&, VkDeviceGroupDeviceCreateInfo&);
    

        void serialize_struct(object&, VkDeviceGroupSwapchainCreateInfoKHR&);
        void deserialize_struct(object&, VkDeviceGroupSwapchainCreateInfoKHR&);
    

        void serialize_struct(object&, VkDescriptorUpdateTemplateEntry&);
        void deserialize_struct(object&, VkDescriptorUpdateTemplateEntry&);
    

        void serialize_struct(object&, VkDescriptorUpdateTemplateCreateInfo&);
        void deserialize_struct(object&, VkDescriptorUpdateTemplateCreateInfo&);
    

        void serialize_struct(object&, VkXYColorEXT&);
        void deserialize_struct(object&, VkXYColorEXT&);
    

        void serialize_struct(object&, VkPhysicalDevicePresentIdFeaturesKHR&);
        void deserialize_struct(object&, VkPhysicalDevicePresentIdFeaturesKHR&);
    

        void serialize_struct(object&, VkPresentIdKHR&);
        void deserialize_struct(object&, VkPresentIdKHR&);
    

        void serialize_struct(object&, VkPhysicalDevicePresentWaitFeaturesKHR&);
        void deserialize_struct(object&, VkPhysicalDevicePresentWaitFeaturesKHR&);
    

        void serialize_struct(object&, VkHdrMetadataEXT&);
        void deserialize_struct(object&, VkHdrMetadataEXT&);
    

        void serialize_struct(object&, VkDisplayNativeHdrSurfaceCapabilitiesAMD&);
        void deserialize_struct(object&, VkDisplayNativeHdrSurfaceCapabilitiesAMD&);
    

        void serialize_struct(object&, VkSwapchainDisplayNativeHdrCreateInfoAMD&);
        void deserialize_struct(object&, VkSwapchainDisplayNativeHdrCreateInfoAMD&);
    

        void serialize_struct(object&, VkRefreshCycleDurationGOOGLE&);
        void deserialize_struct(object&, VkRefreshCycleDurationGOOGLE&);
    

        void serialize_struct(object&, VkPastPresentationTimingGOOGLE&);
        void deserialize_struct(object&, VkPastPresentationTimingGOOGLE&);
    

        void serialize_struct(object&, VkPresentTimesInfoGOOGLE&);
        void deserialize_struct(object&, VkPresentTimesInfoGOOGLE&);
    

        void serialize_struct(object&, VkPresentTimeGOOGLE&);
        void deserialize_struct(object&, VkPresentTimeGOOGLE&);
    

        void serialize_struct(object&, VkViewportWScalingNV&);
        void deserialize_struct(object&, VkViewportWScalingNV&);
    

        void serialize_struct(object&, VkPipelineViewportWScalingStateCreateInfoNV&);
        void deserialize_struct(object&, VkPipelineViewportWScalingStateCreateInfoNV&);
    

        void serialize_struct(object&, VkViewportSwizzleNV&);
        void deserialize_struct(object&, VkViewportSwizzleNV&);
    

        void serialize_struct(object&, VkPipelineViewportSwizzleStateCreateInfoNV&);
        void deserialize_struct(object&, VkPipelineViewportSwizzleStateCreateInfoNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceDiscardRectanglePropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceDiscardRectanglePropertiesEXT&);
    

        void serialize_struct(object&, VkPipelineDiscardRectangleStateCreateInfoEXT&);
        void deserialize_struct(object&, VkPipelineDiscardRectangleStateCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX&);
        void deserialize_struct(object&, VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX&);
    

        void serialize_struct(object&, VkInputAttachmentAspectReference&);
        void deserialize_struct(object&, VkInputAttachmentAspectReference&);
    

        void serialize_struct(object&, VkRenderPassInputAttachmentAspectCreateInfo&);
        void deserialize_struct(object&, VkRenderPassInputAttachmentAspectCreateInfo&);
    

        void serialize_struct(object&, VkPhysicalDeviceSurfaceInfo2KHR&);
        void deserialize_struct(object&, VkPhysicalDeviceSurfaceInfo2KHR&);
    

        void serialize_struct(object&, VkSurfaceCapabilities2KHR&);
        void deserialize_struct(object&, VkSurfaceCapabilities2KHR&);
    

        void serialize_struct(object&, VkSurfaceFormat2KHR&);
        void deserialize_struct(object&, VkSurfaceFormat2KHR&);
    

        void serialize_struct(object&, VkDisplayProperties2KHR&);
        void deserialize_struct(object&, VkDisplayProperties2KHR&);
    

        void serialize_struct(object&, VkDisplayPlaneProperties2KHR&);
        void deserialize_struct(object&, VkDisplayPlaneProperties2KHR&);
    

        void serialize_struct(object&, VkDisplayModeProperties2KHR&);
        void deserialize_struct(object&, VkDisplayModeProperties2KHR&);
    

        void serialize_struct(object&, VkDisplayPlaneInfo2KHR&);
        void deserialize_struct(object&, VkDisplayPlaneInfo2KHR&);
    

        void serialize_struct(object&, VkDisplayPlaneCapabilities2KHR&);
        void deserialize_struct(object&, VkDisplayPlaneCapabilities2KHR&);
    

        void serialize_struct(object&, VkSharedPresentSurfaceCapabilitiesKHR&);
        void deserialize_struct(object&, VkSharedPresentSurfaceCapabilitiesKHR&);
    

        void serialize_struct(object&, VkPhysicalDevice16BitStorageFeatures&);
        void deserialize_struct(object&, VkPhysicalDevice16BitStorageFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceSubgroupProperties&);
        void deserialize_struct(object&, VkPhysicalDeviceSubgroupProperties&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures&);
    

        void serialize_struct(object&, VkBufferMemoryRequirementsInfo2&);
        void deserialize_struct(object&, VkBufferMemoryRequirementsInfo2&);
    

        void serialize_struct(object&, VkDeviceBufferMemoryRequirements&);
        void deserialize_struct(object&, VkDeviceBufferMemoryRequirements&);
    

        void serialize_struct(object&, VkImageMemoryRequirementsInfo2&);
        void deserialize_struct(object&, VkImageMemoryRequirementsInfo2&);
    

        void serialize_struct(object&, VkImageSparseMemoryRequirementsInfo2&);
        void deserialize_struct(object&, VkImageSparseMemoryRequirementsInfo2&);
    

        void serialize_struct(object&, VkDeviceImageMemoryRequirements&);
        void deserialize_struct(object&, VkDeviceImageMemoryRequirements&);
    

        void serialize_struct(object&, VkMemoryRequirements2&);
        void deserialize_struct(object&, VkMemoryRequirements2&);
    

        void serialize_struct(object&, VkSparseImageMemoryRequirements2&);
        void deserialize_struct(object&, VkSparseImageMemoryRequirements2&);
    

        void serialize_struct(object&, VkPhysicalDevicePointClippingProperties&);
        void deserialize_struct(object&, VkPhysicalDevicePointClippingProperties&);
    

        void serialize_struct(object&, VkMemoryDedicatedRequirements&);
        void deserialize_struct(object&, VkMemoryDedicatedRequirements&);
    

        void serialize_struct(object&, VkMemoryDedicatedAllocateInfo&);
        void deserialize_struct(object&, VkMemoryDedicatedAllocateInfo&);
    

        void serialize_struct(object&, VkImageViewUsageCreateInfo&);
        void deserialize_struct(object&, VkImageViewUsageCreateInfo&);
    

        void serialize_struct(object&, VkImageViewSlicedCreateInfoEXT&);
        void deserialize_struct(object&, VkImageViewSlicedCreateInfoEXT&);
    

        void serialize_struct(object&, VkPipelineTessellationDomainOriginStateCreateInfo&);
        void deserialize_struct(object&, VkPipelineTessellationDomainOriginStateCreateInfo&);
    

        void serialize_struct(object&, VkSamplerYcbcrConversionInfo&);
        void deserialize_struct(object&, VkSamplerYcbcrConversionInfo&);
    

        void serialize_struct(object&, VkSamplerYcbcrConversionCreateInfo&);
        void deserialize_struct(object&, VkSamplerYcbcrConversionCreateInfo&);
    

        void serialize_struct(object&, VkBindImagePlaneMemoryInfo&);
        void deserialize_struct(object&, VkBindImagePlaneMemoryInfo&);
    

        void serialize_struct(object&, VkImagePlaneMemoryRequirementsInfo&);
        void deserialize_struct(object&, VkImagePlaneMemoryRequirementsInfo&);
    

        void serialize_struct(object&, VkPhysicalDeviceSamplerYcbcrConversionFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceSamplerYcbcrConversionFeatures&);
    

        void serialize_struct(object&, VkSamplerYcbcrConversionImageFormatProperties&);
        void deserialize_struct(object&, VkSamplerYcbcrConversionImageFormatProperties&);
    

        void serialize_struct(object&, VkTextureLODGatherFormatPropertiesAMD&);
        void deserialize_struct(object&, VkTextureLODGatherFormatPropertiesAMD&);
    

        void serialize_struct(object&, VkConditionalRenderingBeginInfoEXT&);
        void deserialize_struct(object&, VkConditionalRenderingBeginInfoEXT&);
    

        void serialize_struct(object&, VkProtectedSubmitInfo&);
        void deserialize_struct(object&, VkProtectedSubmitInfo&);
    

        void serialize_struct(object&, VkPhysicalDeviceProtectedMemoryFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceProtectedMemoryFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceProtectedMemoryProperties&);
        void deserialize_struct(object&, VkPhysicalDeviceProtectedMemoryProperties&);
    

        void serialize_struct(object&, VkDeviceQueueInfo2&);
        void deserialize_struct(object&, VkDeviceQueueInfo2&);
    

        void serialize_struct(object&, VkPipelineCoverageToColorStateCreateInfoNV&);
        void deserialize_struct(object&, VkPipelineCoverageToColorStateCreateInfoNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceSamplerFilterMinmaxProperties&);
        void deserialize_struct(object&, VkPhysicalDeviceSamplerFilterMinmaxProperties&);
    

        void serialize_struct(object&, VkSampleLocationEXT&);
        void deserialize_struct(object&, VkSampleLocationEXT&);
    

        void serialize_struct(object&, VkSampleLocationsInfoEXT&);
        void deserialize_struct(object&, VkSampleLocationsInfoEXT&);
    

        void serialize_struct(object&, VkAttachmentSampleLocationsEXT&);
        void deserialize_struct(object&, VkAttachmentSampleLocationsEXT&);
    

        void serialize_struct(object&, VkSubpassSampleLocationsEXT&);
        void deserialize_struct(object&, VkSubpassSampleLocationsEXT&);
    

        void serialize_struct(object&, VkRenderPassSampleLocationsBeginInfoEXT&);
        void deserialize_struct(object&, VkRenderPassSampleLocationsBeginInfoEXT&);
    

        void serialize_struct(object&, VkPipelineSampleLocationsStateCreateInfoEXT&);
        void deserialize_struct(object&, VkPipelineSampleLocationsStateCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceSampleLocationsPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceSampleLocationsPropertiesEXT&);
    

        void serialize_struct(object&, VkMultisamplePropertiesEXT&);
        void deserialize_struct(object&, VkMultisamplePropertiesEXT&);
    

        void serialize_struct(object&, VkSamplerReductionModeCreateInfo&);
        void deserialize_struct(object&, VkSamplerReductionModeCreateInfo&);
    

        void serialize_struct(object&, VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceMultiDrawFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceMultiDrawFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&);
    

        void serialize_struct(object&, VkPipelineColorBlendAdvancedStateCreateInfoEXT&);
        void deserialize_struct(object&, VkPipelineColorBlendAdvancedStateCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceInlineUniformBlockFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceInlineUniformBlockFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceInlineUniformBlockProperties&);
        void deserialize_struct(object&, VkPhysicalDeviceInlineUniformBlockProperties&);
    

        void serialize_struct(object&, VkWriteDescriptorSetInlineUniformBlock&);
        void deserialize_struct(object&, VkWriteDescriptorSetInlineUniformBlock&);
    

        void serialize_struct(object&, VkDescriptorPoolInlineUniformBlockCreateInfo&);
        void deserialize_struct(object&, VkDescriptorPoolInlineUniformBlockCreateInfo&);
    

        void serialize_struct(object&, VkPipelineCoverageModulationStateCreateInfoNV&);
        void deserialize_struct(object&, VkPipelineCoverageModulationStateCreateInfoNV&);
    

        void serialize_struct(object&, VkImageFormatListCreateInfo&);
        void deserialize_struct(object&, VkImageFormatListCreateInfo&);
    

        void serialize_struct(object&, VkValidationCacheCreateInfoEXT&);
        void deserialize_struct(object&, VkValidationCacheCreateInfoEXT&);
    

        void serialize_struct(object&, VkShaderModuleValidationCacheCreateInfoEXT&);
        void deserialize_struct(object&, VkShaderModuleValidationCacheCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceMaintenance3Properties&);
        void deserialize_struct(object&, VkPhysicalDeviceMaintenance3Properties&);
    

        void serialize_struct(object&, VkPhysicalDeviceMaintenance4Features&);
        void deserialize_struct(object&, VkPhysicalDeviceMaintenance4Features&);
    

        void serialize_struct(object&, VkPhysicalDeviceMaintenance4Properties&);
        void deserialize_struct(object&, VkPhysicalDeviceMaintenance4Properties&);
    

        void serialize_struct(object&, VkPhysicalDeviceMaintenance5FeaturesKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceMaintenance5FeaturesKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceMaintenance5PropertiesKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceMaintenance5PropertiesKHR&);
    

        void serialize_struct(object&, VkRenderingAreaInfoKHR&);
        void deserialize_struct(object&, VkRenderingAreaInfoKHR&);
    

        void serialize_struct(object&, VkDescriptorSetLayoutSupport&);
        void deserialize_struct(object&, VkDescriptorSetLayoutSupport&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderDrawParametersFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderDrawParametersFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderFloat16Int8Features&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderFloat16Int8Features&);
    

        void serialize_struct(object&, VkPhysicalDeviceFloatControlsProperties&);
        void deserialize_struct(object&, VkPhysicalDeviceFloatControlsProperties&);
    

        void serialize_struct(object&, VkPhysicalDeviceHostQueryResetFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceHostQueryResetFeatures&);
    

        void serialize_struct(object&, VkShaderResourceUsageAMD&);
        void deserialize_struct(object&, VkShaderResourceUsageAMD&);
    

        void serialize_struct(object&, VkShaderStatisticsInfoAMD&);
        void deserialize_struct(object&, VkShaderStatisticsInfoAMD&);
    

        void serialize_struct(object&, VkDeviceQueueGlobalPriorityCreateInfoKHR&);
        void deserialize_struct(object&, VkDeviceQueueGlobalPriorityCreateInfoKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR&);
    

        void serialize_struct(object&, VkQueueFamilyGlobalPriorityPropertiesKHR&);
        void deserialize_struct(object&, VkQueueFamilyGlobalPriorityPropertiesKHR&);
    

        void serialize_struct(object&, VkDebugUtilsObjectNameInfoEXT&);
        void deserialize_struct(object&, VkDebugUtilsObjectNameInfoEXT&);
    

        void serialize_struct(object&, VkDebugUtilsObjectTagInfoEXT&);
        void deserialize_struct(object&, VkDebugUtilsObjectTagInfoEXT&);
    

        void serialize_struct(object&, VkDebugUtilsLabelEXT&);
        void deserialize_struct(object&, VkDebugUtilsLabelEXT&);
    

        void serialize_struct(object&, VkDebugUtilsMessengerCreateInfoEXT&);
        void deserialize_struct(object&, VkDebugUtilsMessengerCreateInfoEXT&);
    

        void serialize_struct(object&, VkDebugUtilsMessengerCallbackDataEXT&);
        void deserialize_struct(object&, VkDebugUtilsMessengerCallbackDataEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceDeviceMemoryReportFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceDeviceMemoryReportFeaturesEXT&);
    

        void serialize_struct(object&, VkDeviceDeviceMemoryReportCreateInfoEXT&);
        void deserialize_struct(object&, VkDeviceDeviceMemoryReportCreateInfoEXT&);
    

        void serialize_struct(object&, VkDeviceMemoryReportCallbackDataEXT&);
        void deserialize_struct(object&, VkDeviceMemoryReportCallbackDataEXT&);
    

        void serialize_struct(object&, VkImportMemoryHostPointerInfoEXT&);
        void deserialize_struct(object&, VkImportMemoryHostPointerInfoEXT&);
    

        void serialize_struct(object&, VkMemoryHostPointerPropertiesEXT&);
        void deserialize_struct(object&, VkMemoryHostPointerPropertiesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceExternalMemoryHostPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceExternalMemoryHostPropertiesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceConservativeRasterizationPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceConservativeRasterizationPropertiesEXT&);
    

        void serialize_struct(object&, VkCalibratedTimestampInfoEXT&);
        void deserialize_struct(object&, VkCalibratedTimestampInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderCorePropertiesAMD&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderCorePropertiesAMD&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderCoreProperties2AMD&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderCoreProperties2AMD&);
    

        void serialize_struct(object&, VkPipelineRasterizationConservativeStateCreateInfoEXT&);
        void deserialize_struct(object&, VkPipelineRasterizationConservativeStateCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceDescriptorIndexingFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceDescriptorIndexingFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceDescriptorIndexingProperties&);
        void deserialize_struct(object&, VkPhysicalDeviceDescriptorIndexingProperties&);
    

        void serialize_struct(object&, VkDescriptorSetLayoutBindingFlagsCreateInfo&);
        void deserialize_struct(object&, VkDescriptorSetLayoutBindingFlagsCreateInfo&);
    

        void serialize_struct(object&, VkDescriptorSetVariableDescriptorCountAllocateInfo&);
        void deserialize_struct(object&, VkDescriptorSetVariableDescriptorCountAllocateInfo&);
    

        void serialize_struct(object&, VkDescriptorSetVariableDescriptorCountLayoutSupport&);
        void deserialize_struct(object&, VkDescriptorSetVariableDescriptorCountLayoutSupport&);
    

        void serialize_struct(object&, VkAttachmentDescription2&);
        void deserialize_struct(object&, VkAttachmentDescription2&);
    

        void serialize_struct(object&, VkAttachmentReference2&);
        void deserialize_struct(object&, VkAttachmentReference2&);
    

        void serialize_struct(object&, VkSubpassDescription2&);
        void deserialize_struct(object&, VkSubpassDescription2&);
    

        void serialize_struct(object&, VkSubpassDependency2&);
        void deserialize_struct(object&, VkSubpassDependency2&);
    

        void serialize_struct(object&, VkRenderPassCreateInfo2&);
        void deserialize_struct(object&, VkRenderPassCreateInfo2&);
    

        void serialize_struct(object&, VkSubpassBeginInfo&);
        void deserialize_struct(object&, VkSubpassBeginInfo&);
    

        void serialize_struct(object&, VkSubpassEndInfo&);
        void deserialize_struct(object&, VkSubpassEndInfo&);
    

        void serialize_struct(object&, VkPhysicalDeviceTimelineSemaphoreFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceTimelineSemaphoreFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceTimelineSemaphoreProperties&);
        void deserialize_struct(object&, VkPhysicalDeviceTimelineSemaphoreProperties&);
    

        void serialize_struct(object&, VkSemaphoreTypeCreateInfo&);
        void deserialize_struct(object&, VkSemaphoreTypeCreateInfo&);
    

        void serialize_struct(object&, VkTimelineSemaphoreSubmitInfo&);
        void deserialize_struct(object&, VkTimelineSemaphoreSubmitInfo&);
    

        void serialize_struct(object&, VkSemaphoreWaitInfo&);
        void deserialize_struct(object&, VkSemaphoreWaitInfo&);
    

        void serialize_struct(object&, VkSemaphoreSignalInfo&);
        void deserialize_struct(object&, VkSemaphoreSignalInfo&);
    

        void serialize_struct(object&, VkVertexInputBindingDivisorDescriptionEXT&);
        void deserialize_struct(object&, VkVertexInputBindingDivisorDescriptionEXT&);
    

        void serialize_struct(object&, VkPipelineVertexInputDivisorStateCreateInfoEXT&);
        void deserialize_struct(object&, VkPipelineVertexInputDivisorStateCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&);
    

        void serialize_struct(object&, VkPhysicalDevicePCIBusInfoPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDevicePCIBusInfoPropertiesEXT&);
    

        void serialize_struct(object&, VkCommandBufferInheritanceConditionalRenderingInfoEXT&);
        void deserialize_struct(object&, VkCommandBufferInheritanceConditionalRenderingInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDevice8BitStorageFeatures&);
        void deserialize_struct(object&, VkPhysicalDevice8BitStorageFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceConditionalRenderingFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceConditionalRenderingFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceVulkanMemoryModelFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceVulkanMemoryModelFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderAtomicInt64Features&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderAtomicInt64Features&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderAtomicFloatFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderAtomicFloatFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT&);
    

        void serialize_struct(object&, VkQueueFamilyCheckpointPropertiesNV&);
        void deserialize_struct(object&, VkQueueFamilyCheckpointPropertiesNV&);
    

        void serialize_struct(object&, VkCheckpointDataNV&);
        void deserialize_struct(object&, VkCheckpointDataNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceDepthStencilResolveProperties&);
        void deserialize_struct(object&, VkPhysicalDeviceDepthStencilResolveProperties&);
    

        void serialize_struct(object&, VkSubpassDescriptionDepthStencilResolve&);
        void deserialize_struct(object&, VkSubpassDescriptionDepthStencilResolve&);
    

        void serialize_struct(object&, VkImageViewASTCDecodeModeEXT&);
        void deserialize_struct(object&, VkImageViewASTCDecodeModeEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceASTCDecodeFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceASTCDecodeFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceTransformFeedbackFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceTransformFeedbackFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceTransformFeedbackPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceTransformFeedbackPropertiesEXT&);
    

        void serialize_struct(object&, VkPipelineRasterizationStateStreamCreateInfoEXT&);
        void deserialize_struct(object&, VkPipelineRasterizationStateStreamCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV&);
    

        void serialize_struct(object&, VkPipelineRepresentativeFragmentTestStateCreateInfoNV&);
        void deserialize_struct(object&, VkPipelineRepresentativeFragmentTestStateCreateInfoNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceExclusiveScissorFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceExclusiveScissorFeaturesNV&);
    

        void serialize_struct(object&, VkPipelineViewportExclusiveScissorStateCreateInfoNV&);
        void deserialize_struct(object&, VkPipelineViewportExclusiveScissorStateCreateInfoNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceCornerSampledImageFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceCornerSampledImageFeaturesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceComputeShaderDerivativesFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceComputeShaderDerivativesFeaturesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderImageFootprintFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderImageFootprintFeaturesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceCopyMemoryIndirectFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceCopyMemoryIndirectFeaturesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceCopyMemoryIndirectPropertiesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceCopyMemoryIndirectPropertiesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceMemoryDecompressionFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceMemoryDecompressionFeaturesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceMemoryDecompressionPropertiesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceMemoryDecompressionPropertiesNV&);
    

        void serialize_struct(object&, VkShadingRatePaletteNV&);
        void deserialize_struct(object&, VkShadingRatePaletteNV&);
    

        void serialize_struct(object&, VkPipelineViewportShadingRateImageStateCreateInfoNV&);
        void deserialize_struct(object&, VkPipelineViewportShadingRateImageStateCreateInfoNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceShadingRateImageFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceShadingRateImageFeaturesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceShadingRateImagePropertiesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceShadingRateImagePropertiesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceInvocationMaskFeaturesHUAWEI&);
        void deserialize_struct(object&, VkPhysicalDeviceInvocationMaskFeaturesHUAWEI&);
    

        void serialize_struct(object&, VkCoarseSampleLocationNV&);
        void deserialize_struct(object&, VkCoarseSampleLocationNV&);
    

        void serialize_struct(object&, VkCoarseSampleOrderCustomNV&);
        void deserialize_struct(object&, VkCoarseSampleOrderCustomNV&);
    

        void serialize_struct(object&, VkPipelineViewportCoarseSampleOrderStateCreateInfoNV&);
        void deserialize_struct(object&, VkPipelineViewportCoarseSampleOrderStateCreateInfoNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceMeshShaderFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceMeshShaderFeaturesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceMeshShaderPropertiesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceMeshShaderPropertiesNV&);
    

        void serialize_struct(object&, VkDrawMeshTasksIndirectCommandNV&);
        void deserialize_struct(object&, VkDrawMeshTasksIndirectCommandNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceMeshShaderFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceMeshShaderFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceMeshShaderPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceMeshShaderPropertiesEXT&);
    

        void serialize_struct(object&, VkDrawMeshTasksIndirectCommandEXT&);
        void deserialize_struct(object&, VkDrawMeshTasksIndirectCommandEXT&);
    

        void serialize_struct(object&, VkRayTracingShaderGroupCreateInfoNV&);
        void deserialize_struct(object&, VkRayTracingShaderGroupCreateInfoNV&);
    

        void serialize_struct(object&, VkRayTracingShaderGroupCreateInfoKHR&);
        void deserialize_struct(object&, VkRayTracingShaderGroupCreateInfoKHR&);
    

        void serialize_struct(object&, VkRayTracingPipelineCreateInfoNV&);
        void deserialize_struct(object&, VkRayTracingPipelineCreateInfoNV&);
    

        void serialize_struct(object&, VkRayTracingPipelineCreateInfoKHR&);
        void deserialize_struct(object&, VkRayTracingPipelineCreateInfoKHR&);
    

        void serialize_struct(object&, VkGeometryTrianglesNV&);
        void deserialize_struct(object&, VkGeometryTrianglesNV&);
    

        void serialize_struct(object&, VkGeometryAABBNV&);
        void deserialize_struct(object&, VkGeometryAABBNV&);
    

        void serialize_struct(object&, VkGeometryDataNV&);
        void deserialize_struct(object&, VkGeometryDataNV&);
    

        void serialize_struct(object&, VkGeometryNV&);
        void deserialize_struct(object&, VkGeometryNV&);
    

        void serialize_struct(object&, VkAccelerationStructureInfoNV&);
        void deserialize_struct(object&, VkAccelerationStructureInfoNV&);
    

        void serialize_struct(object&, VkAccelerationStructureCreateInfoNV&);
        void deserialize_struct(object&, VkAccelerationStructureCreateInfoNV&);
    

        void serialize_struct(object&, VkBindAccelerationStructureMemoryInfoNV&);
        void deserialize_struct(object&, VkBindAccelerationStructureMemoryInfoNV&);
    

        void serialize_struct(object&, VkWriteDescriptorSetAccelerationStructureKHR&);
        void deserialize_struct(object&, VkWriteDescriptorSetAccelerationStructureKHR&);
    

        void serialize_struct(object&, VkWriteDescriptorSetAccelerationStructureNV&);
        void deserialize_struct(object&, VkWriteDescriptorSetAccelerationStructureNV&);
    

        void serialize_struct(object&, VkAccelerationStructureMemoryRequirementsInfoNV&);
        void deserialize_struct(object&, VkAccelerationStructureMemoryRequirementsInfoNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceAccelerationStructureFeaturesKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceAccelerationStructureFeaturesKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceRayTracingPipelineFeaturesKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceRayTracingPipelineFeaturesKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceRayQueryFeaturesKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceRayQueryFeaturesKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceAccelerationStructurePropertiesKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceAccelerationStructurePropertiesKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceRayTracingPipelinePropertiesKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceRayTracingPipelinePropertiesKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceRayTracingPropertiesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceRayTracingPropertiesNV&);
    

        void serialize_struct(object&, VkStridedDeviceAddressRegionKHR&);
        void deserialize_struct(object&, VkStridedDeviceAddressRegionKHR&);
    

        void serialize_struct(object&, VkTraceRaysIndirectCommandKHR&);
        void deserialize_struct(object&, VkTraceRaysIndirectCommandKHR&);
    

        void serialize_struct(object&, VkTraceRaysIndirectCommand2KHR&);
        void deserialize_struct(object&, VkTraceRaysIndirectCommand2KHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR&);
    

        void serialize_struct(object&, VkDrmFormatModifierPropertiesListEXT&);
        void deserialize_struct(object&, VkDrmFormatModifierPropertiesListEXT&);
    

        void serialize_struct(object&, VkDrmFormatModifierPropertiesEXT&);
        void deserialize_struct(object&, VkDrmFormatModifierPropertiesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceImageDrmFormatModifierInfoEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceImageDrmFormatModifierInfoEXT&);
    

        void serialize_struct(object&, VkImageDrmFormatModifierListCreateInfoEXT&);
        void deserialize_struct(object&, VkImageDrmFormatModifierListCreateInfoEXT&);
    

        void serialize_struct(object&, VkImageDrmFormatModifierExplicitCreateInfoEXT&);
        void deserialize_struct(object&, VkImageDrmFormatModifierExplicitCreateInfoEXT&);
    

        void serialize_struct(object&, VkImageDrmFormatModifierPropertiesEXT&);
        void deserialize_struct(object&, VkImageDrmFormatModifierPropertiesEXT&);
    

        void serialize_struct(object&, VkImageStencilUsageCreateInfo&);
        void deserialize_struct(object&, VkImageStencilUsageCreateInfo&);
    

        void serialize_struct(object&, VkDeviceMemoryOverallocationCreateInfoAMD&);
        void deserialize_struct(object&, VkDeviceMemoryOverallocationCreateInfoAMD&);
    

        void serialize_struct(object&, VkPhysicalDeviceFragmentDensityMapFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceFragmentDensityMapFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceFragmentDensityMap2FeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceFragmentDensityMap2FeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM&);
        void deserialize_struct(object&, VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM&);
    

        void serialize_struct(object&, VkPhysicalDeviceFragmentDensityMapPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceFragmentDensityMapPropertiesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceFragmentDensityMap2PropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceFragmentDensityMap2PropertiesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM&);
        void deserialize_struct(object&, VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM&);
    

        void serialize_struct(object&, VkRenderPassFragmentDensityMapCreateInfoEXT&);
        void deserialize_struct(object&, VkRenderPassFragmentDensityMapCreateInfoEXT&);
    

        void serialize_struct(object&, VkSubpassFragmentDensityMapOffsetEndInfoQCOM&);
        void deserialize_struct(object&, VkSubpassFragmentDensityMapOffsetEndInfoQCOM&);
    

        void serialize_struct(object&, VkPhysicalDeviceScalarBlockLayoutFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceScalarBlockLayoutFeatures&);
    

        void serialize_struct(object&, VkSurfaceProtectedCapabilitiesKHR&);
        void deserialize_struct(object&, VkSurfaceProtectedCapabilitiesKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceUniformBufferStandardLayoutFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceUniformBufferStandardLayoutFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceDepthClipEnableFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceDepthClipEnableFeaturesEXT&);
    

        void serialize_struct(object&, VkPipelineRasterizationDepthClipStateCreateInfoEXT&);
        void deserialize_struct(object&, VkPipelineRasterizationDepthClipStateCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceMemoryBudgetPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceMemoryBudgetPropertiesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceMemoryPriorityFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceMemoryPriorityFeaturesEXT&);
    

        void serialize_struct(object&, VkMemoryPriorityAllocateInfoEXT&);
        void deserialize_struct(object&, VkMemoryPriorityAllocateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceBufferDeviceAddressFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceBufferDeviceAddressFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceBufferDeviceAddressFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceBufferDeviceAddressFeaturesEXT&);
    

        void serialize_struct(object&, VkBufferDeviceAddressInfo&);
        void deserialize_struct(object&, VkBufferDeviceAddressInfo&);
    

        void serialize_struct(object&, VkBufferOpaqueCaptureAddressCreateInfo&);
        void deserialize_struct(object&, VkBufferOpaqueCaptureAddressCreateInfo&);
    

        void serialize_struct(object&, VkBufferDeviceAddressCreateInfoEXT&);
        void deserialize_struct(object&, VkBufferDeviceAddressCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceImageViewImageFormatInfoEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceImageViewImageFormatInfoEXT&);
    

        void serialize_struct(object&, VkFilterCubicImageViewImageFormatPropertiesEXT&);
        void deserialize_struct(object&, VkFilterCubicImageViewImageFormatPropertiesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceImagelessFramebufferFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceImagelessFramebufferFeatures&);
    

        void serialize_struct(object&, VkFramebufferAttachmentsCreateInfo&);
        void deserialize_struct(object&, VkFramebufferAttachmentsCreateInfo&);
    

        void serialize_struct(object&, VkFramebufferAttachmentImageInfo&);
        void deserialize_struct(object&, VkFramebufferAttachmentImageInfo&);
    

        void serialize_struct(object&, VkRenderPassAttachmentBeginInfo&);
        void deserialize_struct(object&, VkRenderPassAttachmentBeginInfo&);
    

        void serialize_struct(object&, VkPhysicalDeviceTextureCompressionASTCHDRFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceTextureCompressionASTCHDRFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceCooperativeMatrixFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceCooperativeMatrixFeaturesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceCooperativeMatrixPropertiesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceCooperativeMatrixPropertiesNV&);
    

        void serialize_struct(object&, VkCooperativeMatrixPropertiesNV&);
        void deserialize_struct(object&, VkCooperativeMatrixPropertiesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceYcbcrImageArraysFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceYcbcrImageArraysFeaturesEXT&);
    

        void serialize_struct(object&, VkImageViewHandleInfoNVX&);
        void deserialize_struct(object&, VkImageViewHandleInfoNVX&);
    

        void serialize_struct(object&, VkImageViewAddressPropertiesNVX&);
        void deserialize_struct(object&, VkImageViewAddressPropertiesNVX&);
    

        void serialize_struct(object&, VkPipelineCreationFeedback&);
        void deserialize_struct(object&, VkPipelineCreationFeedback&);
    

        void serialize_struct(object&, VkPipelineCreationFeedbackCreateInfo&);
        void deserialize_struct(object&, VkPipelineCreationFeedbackCreateInfo&);
    

        void serialize_struct(object&, VkPhysicalDevicePresentBarrierFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDevicePresentBarrierFeaturesNV&);
    

        void serialize_struct(object&, VkSurfaceCapabilitiesPresentBarrierNV&);
        void deserialize_struct(object&, VkSurfaceCapabilitiesPresentBarrierNV&);
    

        void serialize_struct(object&, VkSwapchainPresentBarrierCreateInfoNV&);
        void deserialize_struct(object&, VkSwapchainPresentBarrierCreateInfoNV&);
    

        void serialize_struct(object&, VkPhysicalDevicePerformanceQueryFeaturesKHR&);
        void deserialize_struct(object&, VkPhysicalDevicePerformanceQueryFeaturesKHR&);
    

        void serialize_struct(object&, VkPhysicalDevicePerformanceQueryPropertiesKHR&);
        void deserialize_struct(object&, VkPhysicalDevicePerformanceQueryPropertiesKHR&);
    

        void serialize_struct(object&, VkPerformanceCounterKHR&);
        void deserialize_struct(object&, VkPerformanceCounterKHR&);
    

        void serialize_struct(object&, VkPerformanceCounterDescriptionKHR&);
        void deserialize_struct(object&, VkPerformanceCounterDescriptionKHR&);
    

        void serialize_struct(object&, VkQueryPoolPerformanceCreateInfoKHR&);
        void deserialize_struct(object&, VkQueryPoolPerformanceCreateInfoKHR&);
    

        void serialize_struct(object&, VkPerformanceCounterResultKHR&);
        void deserialize_struct(object&, VkPerformanceCounterResultKHR&);
    

        void serialize_struct(object&, VkAcquireProfilingLockInfoKHR&);
        void deserialize_struct(object&, VkAcquireProfilingLockInfoKHR&);
    

        void serialize_struct(object&, VkPerformanceQuerySubmitInfoKHR&);
        void deserialize_struct(object&, VkPerformanceQuerySubmitInfoKHR&);
    

        void serialize_struct(object&, VkHeadlessSurfaceCreateInfoEXT&);
        void deserialize_struct(object&, VkHeadlessSurfaceCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceCoverageReductionModeFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceCoverageReductionModeFeaturesNV&);
    

        void serialize_struct(object&, VkPipelineCoverageReductionStateCreateInfoNV&);
        void deserialize_struct(object&, VkPipelineCoverageReductionStateCreateInfoNV&);
    

        void serialize_struct(object&, VkFramebufferMixedSamplesCombinationNV&);
        void deserialize_struct(object&, VkFramebufferMixedSamplesCombinationNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL&);
    

        void serialize_struct(object&, VkPerformanceValueDataINTEL&);
        void deserialize_struct(object&, VkPerformanceValueDataINTEL&);
    

        void serialize_struct(object&, VkPerformanceValueINTEL&);
        void deserialize_struct(object&, VkPerformanceValueINTEL&);
    

        void serialize_struct(object&, VkInitializePerformanceApiInfoINTEL&);
        void deserialize_struct(object&, VkInitializePerformanceApiInfoINTEL&);
    

        void serialize_struct(object&, VkQueryPoolPerformanceQueryCreateInfoINTEL&);
        void deserialize_struct(object&, VkQueryPoolPerformanceQueryCreateInfoINTEL&);
    

        void serialize_struct(object&, VkPerformanceMarkerInfoINTEL&);
        void deserialize_struct(object&, VkPerformanceMarkerInfoINTEL&);
    

        void serialize_struct(object&, VkPerformanceStreamMarkerInfoINTEL&);
        void deserialize_struct(object&, VkPerformanceStreamMarkerInfoINTEL&);
    

        void serialize_struct(object&, VkPerformanceOverrideInfoINTEL&);
        void deserialize_struct(object&, VkPerformanceOverrideInfoINTEL&);
    

        void serialize_struct(object&, VkPerformanceConfigurationAcquireInfoINTEL&);
        void deserialize_struct(object&, VkPerformanceConfigurationAcquireInfoINTEL&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderClockFeaturesKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderClockFeaturesKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceIndexTypeUint8FeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceIndexTypeUint8FeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderSMBuiltinsPropertiesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderSMBuiltinsPropertiesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderSMBuiltinsFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderSMBuiltinsFeaturesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures&);
    

        void serialize_struct(object&, VkAttachmentReferenceStencilLayout&);
        void deserialize_struct(object&, VkAttachmentReferenceStencilLayout&);
    

        void serialize_struct(object&, VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT&);
    

        void serialize_struct(object&, VkAttachmentDescriptionStencilLayout&);
        void deserialize_struct(object&, VkAttachmentDescriptionStencilLayout&);
    

        void serialize_struct(object&, VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR&);
        void deserialize_struct(object&, VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR&);
    

        void serialize_struct(object&, VkPipelineInfoKHR&);
        void deserialize_struct(object&, VkPipelineInfoKHR&);
    

        void serialize_struct(object&, VkPipelineExecutablePropertiesKHR&);
        void deserialize_struct(object&, VkPipelineExecutablePropertiesKHR&);
    

        void serialize_struct(object&, VkPipelineExecutableInfoKHR&);
        void deserialize_struct(object&, VkPipelineExecutableInfoKHR&);
    

        void serialize_struct(object&, VkPipelineExecutableStatisticValueKHR&);
        void deserialize_struct(object&, VkPipelineExecutableStatisticValueKHR&);
    

        void serialize_struct(object&, VkPipelineExecutableStatisticKHR&);
        void deserialize_struct(object&, VkPipelineExecutableStatisticKHR&);
    

        void serialize_struct(object&, VkPipelineExecutableInternalRepresentationKHR&);
        void deserialize_struct(object&, VkPipelineExecutableInternalRepresentationKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceTexelBufferAlignmentProperties&);
        void deserialize_struct(object&, VkPhysicalDeviceTexelBufferAlignmentProperties&);
    

        void serialize_struct(object&, VkPhysicalDeviceSubgroupSizeControlFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceSubgroupSizeControlFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceSubgroupSizeControlProperties&);
        void deserialize_struct(object&, VkPhysicalDeviceSubgroupSizeControlProperties&);
    

        void serialize_struct(object&, VkPipelineShaderStageRequiredSubgroupSizeCreateInfo&);
        void deserialize_struct(object&, VkPipelineShaderStageRequiredSubgroupSizeCreateInfo&);
    

        void serialize_struct(object&, VkSubpassShadingPipelineCreateInfoHUAWEI&);
        void deserialize_struct(object&, VkSubpassShadingPipelineCreateInfoHUAWEI&);
    

        void serialize_struct(object&, VkPhysicalDeviceSubpassShadingPropertiesHUAWEI&);
        void deserialize_struct(object&, VkPhysicalDeviceSubpassShadingPropertiesHUAWEI&);
    

        void serialize_struct(object&, VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI&);
        void deserialize_struct(object&, VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI&);
    

        void serialize_struct(object&, VkMemoryOpaqueCaptureAddressAllocateInfo&);
        void deserialize_struct(object&, VkMemoryOpaqueCaptureAddressAllocateInfo&);
    

        void serialize_struct(object&, VkDeviceMemoryOpaqueCaptureAddressInfo&);
        void deserialize_struct(object&, VkDeviceMemoryOpaqueCaptureAddressInfo&);
    

        void serialize_struct(object&, VkPhysicalDeviceLineRasterizationFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceLineRasterizationFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceLineRasterizationPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceLineRasterizationPropertiesEXT&);
    

        void serialize_struct(object&, VkPipelineRasterizationLineStateCreateInfoEXT&);
        void deserialize_struct(object&, VkPipelineRasterizationLineStateCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDevicePipelineCreationCacheControlFeatures&);
        void deserialize_struct(object&, VkPhysicalDevicePipelineCreationCacheControlFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceVulkan11Features&);
        void deserialize_struct(object&, VkPhysicalDeviceVulkan11Features&);
    

        void serialize_struct(object&, VkPhysicalDeviceVulkan11Properties&);
        void deserialize_struct(object&, VkPhysicalDeviceVulkan11Properties&);
    

        void serialize_struct(object&, VkPhysicalDeviceVulkan12Features&);
        void deserialize_struct(object&, VkPhysicalDeviceVulkan12Features&);
    

        void serialize_struct(object&, VkPhysicalDeviceVulkan12Properties&);
        void deserialize_struct(object&, VkPhysicalDeviceVulkan12Properties&);
    

        void serialize_struct(object&, VkPhysicalDeviceVulkan13Features&);
        void deserialize_struct(object&, VkPhysicalDeviceVulkan13Features&);
    

        void serialize_struct(object&, VkPhysicalDeviceVulkan13Properties&);
        void deserialize_struct(object&, VkPhysicalDeviceVulkan13Properties&);
    

        void serialize_struct(object&, VkPipelineCompilerControlCreateInfoAMD&);
        void deserialize_struct(object&, VkPipelineCompilerControlCreateInfoAMD&);
    

        void serialize_struct(object&, VkPhysicalDeviceCoherentMemoryFeaturesAMD&);
        void deserialize_struct(object&, VkPhysicalDeviceCoherentMemoryFeaturesAMD&);
    

        void serialize_struct(object&, VkPhysicalDeviceToolProperties&);
        void deserialize_struct(object&, VkPhysicalDeviceToolProperties&);
    

        void serialize_struct(object&, VkSamplerCustomBorderColorCreateInfoEXT&);
        void deserialize_struct(object&, VkSamplerCustomBorderColorCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceCustomBorderColorPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceCustomBorderColorPropertiesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceCustomBorderColorFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceCustomBorderColorFeaturesEXT&);
    

        void serialize_struct(object&, VkSamplerBorderColorComponentMappingCreateInfoEXT&);
        void deserialize_struct(object&, VkSamplerBorderColorComponentMappingCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceBorderColorSwizzleFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceBorderColorSwizzleFeaturesEXT&);
    

        void serialize_struct(object&, VkDeviceOrHostAddressKHR&);
        void deserialize_struct(object&, VkDeviceOrHostAddressKHR&);
    

        void serialize_struct(object&, VkDeviceOrHostAddressConstKHR&);
        void deserialize_struct(object&, VkDeviceOrHostAddressConstKHR&);
    

        void serialize_struct(object&, VkAccelerationStructureGeometryTrianglesDataKHR&);
        void deserialize_struct(object&, VkAccelerationStructureGeometryTrianglesDataKHR&);
    

        void serialize_struct(object&, VkAccelerationStructureGeometryAabbsDataKHR&);
        void deserialize_struct(object&, VkAccelerationStructureGeometryAabbsDataKHR&);
    

        void serialize_struct(object&, VkAccelerationStructureGeometryInstancesDataKHR&);
        void deserialize_struct(object&, VkAccelerationStructureGeometryInstancesDataKHR&);
    

        void serialize_struct(object&, VkAccelerationStructureGeometryDataKHR&);
        void deserialize_struct(object&, VkAccelerationStructureGeometryDataKHR&);
    

        void serialize_struct(object&, VkAccelerationStructureGeometryKHR&);
        void deserialize_struct(object&, VkAccelerationStructureGeometryKHR&);
    

        void serialize_struct(object&, VkAccelerationStructureBuildGeometryInfoKHR&);
        void deserialize_struct(object&, VkAccelerationStructureBuildGeometryInfoKHR&);
    

        void serialize_struct(object&, VkAccelerationStructureBuildRangeInfoKHR&);
        void deserialize_struct(object&, VkAccelerationStructureBuildRangeInfoKHR&);
    

        void serialize_struct(object&, VkAccelerationStructureCreateInfoKHR&);
        void deserialize_struct(object&, VkAccelerationStructureCreateInfoKHR&);
    

        void serialize_struct(object&, VkAabbPositionsKHR&);
        void deserialize_struct(object&, VkAabbPositionsKHR&);
    

        void serialize_struct(object&, VkTransformMatrixKHR&);
        void deserialize_struct(object&, VkTransformMatrixKHR&);
    

        void serialize_struct(object&, VkAccelerationStructureInstanceKHR&);
        void deserialize_struct(object&, VkAccelerationStructureInstanceKHR&);
    

        void serialize_struct(object&, VkAccelerationStructureDeviceAddressInfoKHR&);
        void deserialize_struct(object&, VkAccelerationStructureDeviceAddressInfoKHR&);
    

        void serialize_struct(object&, VkAccelerationStructureVersionInfoKHR&);
        void deserialize_struct(object&, VkAccelerationStructureVersionInfoKHR&);
    

        void serialize_struct(object&, VkCopyAccelerationStructureInfoKHR&);
        void deserialize_struct(object&, VkCopyAccelerationStructureInfoKHR&);
    

        void serialize_struct(object&, VkCopyAccelerationStructureToMemoryInfoKHR&);
        void deserialize_struct(object&, VkCopyAccelerationStructureToMemoryInfoKHR&);
    

        void serialize_struct(object&, VkCopyMemoryToAccelerationStructureInfoKHR&);
        void deserialize_struct(object&, VkCopyMemoryToAccelerationStructureInfoKHR&);
    

        void serialize_struct(object&, VkRayTracingPipelineInterfaceCreateInfoKHR&);
        void deserialize_struct(object&, VkRayTracingPipelineInterfaceCreateInfoKHR&);
    

        void serialize_struct(object&, VkPipelineLibraryCreateInfoKHR&);
        void deserialize_struct(object&, VkPipelineLibraryCreateInfoKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceExtendedDynamicStateFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceExtendedDynamicStateFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceExtendedDynamicState2FeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceExtendedDynamicState2FeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceExtendedDynamicState3FeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceExtendedDynamicState3FeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceExtendedDynamicState3PropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceExtendedDynamicState3PropertiesEXT&);
    

        void serialize_struct(object&, VkColorBlendEquationEXT&);
        void deserialize_struct(object&, VkColorBlendEquationEXT&);
    

        void serialize_struct(object&, VkColorBlendAdvancedEXT&);
        void deserialize_struct(object&, VkColorBlendAdvancedEXT&);
    

        void serialize_struct(object&, VkRenderPassTransformBeginInfoQCOM&);
        void deserialize_struct(object&, VkRenderPassTransformBeginInfoQCOM&);
    

        void serialize_struct(object&, VkCopyCommandTransformInfoQCOM&);
        void deserialize_struct(object&, VkCopyCommandTransformInfoQCOM&);
    

        void serialize_struct(object&, VkCommandBufferInheritanceRenderPassTransformInfoQCOM&);
        void deserialize_struct(object&, VkCommandBufferInheritanceRenderPassTransformInfoQCOM&);
    

        void serialize_struct(object&, VkPhysicalDeviceDiagnosticsConfigFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceDiagnosticsConfigFeaturesNV&);
    

        void serialize_struct(object&, VkDeviceDiagnosticsConfigCreateInfoNV&);
        void deserialize_struct(object&, VkDeviceDiagnosticsConfigCreateInfoNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceRobustness2FeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceRobustness2FeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceRobustness2PropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceRobustness2PropertiesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceImageRobustnessFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceImageRobustnessFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR&);
    

        void serialize_struct(object&, VkPhysicalDevice4444FormatsFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDevice4444FormatsFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceSubpassShadingFeaturesHUAWEI&);
        void deserialize_struct(object&, VkPhysicalDeviceSubpassShadingFeaturesHUAWEI&);
    

        void serialize_struct(object&, VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI&);
        void deserialize_struct(object&, VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI&);
    

        void serialize_struct(object&, VkBufferCopy2&);
        void deserialize_struct(object&, VkBufferCopy2&);
    

        void serialize_struct(object&, VkImageCopy2&);
        void deserialize_struct(object&, VkImageCopy2&);
    

        void serialize_struct(object&, VkImageBlit2&);
        void deserialize_struct(object&, VkImageBlit2&);
    

        void serialize_struct(object&, VkBufferImageCopy2&);
        void deserialize_struct(object&, VkBufferImageCopy2&);
    

        void serialize_struct(object&, VkImageResolve2&);
        void deserialize_struct(object&, VkImageResolve2&);
    

        void serialize_struct(object&, VkCopyBufferInfo2&);
        void deserialize_struct(object&, VkCopyBufferInfo2&);
    

        void serialize_struct(object&, VkCopyImageInfo2&);
        void deserialize_struct(object&, VkCopyImageInfo2&);
    

        void serialize_struct(object&, VkBlitImageInfo2&);
        void deserialize_struct(object&, VkBlitImageInfo2&);
    

        void serialize_struct(object&, VkCopyBufferToImageInfo2&);
        void deserialize_struct(object&, VkCopyBufferToImageInfo2&);
    

        void serialize_struct(object&, VkCopyImageToBufferInfo2&);
        void deserialize_struct(object&, VkCopyImageToBufferInfo2&);
    

        void serialize_struct(object&, VkResolveImageInfo2&);
        void deserialize_struct(object&, VkResolveImageInfo2&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT&);
    

        void serialize_struct(object&, VkFragmentShadingRateAttachmentInfoKHR&);
        void deserialize_struct(object&, VkFragmentShadingRateAttachmentInfoKHR&);
    

        void serialize_struct(object&, VkPipelineFragmentShadingRateStateCreateInfoKHR&);
        void deserialize_struct(object&, VkPipelineFragmentShadingRateStateCreateInfoKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceFragmentShadingRateFeaturesKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceFragmentShadingRateFeaturesKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceFragmentShadingRatePropertiesKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceFragmentShadingRatePropertiesKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceFragmentShadingRateKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceFragmentShadingRateKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderTerminateInvocationFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderTerminateInvocationFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV&);
    

        void serialize_struct(object&, VkPipelineFragmentShadingRateEnumStateCreateInfoNV&);
        void deserialize_struct(object&, VkPipelineFragmentShadingRateEnumStateCreateInfoNV&);
    

        void serialize_struct(object&, VkAccelerationStructureBuildSizesInfoKHR&);
        void deserialize_struct(object&, VkAccelerationStructureBuildSizesInfoKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceImage2DViewOf3DFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceImage2DViewOf3DFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT&);
    

        void serialize_struct(object&, VkMutableDescriptorTypeListEXT&);
        void deserialize_struct(object&, VkMutableDescriptorTypeListEXT&);
    

        void serialize_struct(object&, VkMutableDescriptorTypeCreateInfoEXT&);
        void deserialize_struct(object&, VkMutableDescriptorTypeCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceDepthClipControlFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceDepthClipControlFeaturesEXT&);
    

        void serialize_struct(object&, VkPipelineViewportDepthClipControlCreateInfoEXT&);
        void deserialize_struct(object&, VkPipelineViewportDepthClipControlCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceExternalMemoryRDMAFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceExternalMemoryRDMAFeaturesNV&);
    

        void serialize_struct(object&, VkVertexInputBindingDescription2EXT&);
        void deserialize_struct(object&, VkVertexInputBindingDescription2EXT&);
    

        void serialize_struct(object&, VkVertexInputAttributeDescription2EXT&);
        void deserialize_struct(object&, VkVertexInputAttributeDescription2EXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceColorWriteEnableFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceColorWriteEnableFeaturesEXT&);
    

        void serialize_struct(object&, VkPipelineColorWriteCreateInfoEXT&);
        void deserialize_struct(object&, VkPipelineColorWriteCreateInfoEXT&);
    

        void serialize_struct(object&, VkMemoryBarrier2&);
        void deserialize_struct(object&, VkMemoryBarrier2&);
    

        void serialize_struct(object&, VkImageMemoryBarrier2&);
        void deserialize_struct(object&, VkImageMemoryBarrier2&);
    

        void serialize_struct(object&, VkBufferMemoryBarrier2&);
        void deserialize_struct(object&, VkBufferMemoryBarrier2&);
    

        void serialize_struct(object&, VkDependencyInfo&);
        void deserialize_struct(object&, VkDependencyInfo&);
    

        void serialize_struct(object&, VkSemaphoreSubmitInfo&);
        void deserialize_struct(object&, VkSemaphoreSubmitInfo&);
    

        void serialize_struct(object&, VkCommandBufferSubmitInfo&);
        void deserialize_struct(object&, VkCommandBufferSubmitInfo&);
    

        void serialize_struct(object&, VkSubmitInfo2&);
        void deserialize_struct(object&, VkSubmitInfo2&);
    

        void serialize_struct(object&, VkQueueFamilyCheckpointProperties2NV&);
        void deserialize_struct(object&, VkQueueFamilyCheckpointProperties2NV&);
    

        void serialize_struct(object&, VkCheckpointData2NV&);
        void deserialize_struct(object&, VkCheckpointData2NV&);
    

        void serialize_struct(object&, VkPhysicalDeviceSynchronization2Features&);
        void deserialize_struct(object&, VkPhysicalDeviceSynchronization2Features&);
    

        void serialize_struct(object&, VkPhysicalDeviceHostImageCopyFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceHostImageCopyFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceHostImageCopyPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceHostImageCopyPropertiesEXT&);
    

        void serialize_struct(object&, VkMemoryToImageCopyEXT&);
        void deserialize_struct(object&, VkMemoryToImageCopyEXT&);
    

        void serialize_struct(object&, VkImageToMemoryCopyEXT&);
        void deserialize_struct(object&, VkImageToMemoryCopyEXT&);
    

        void serialize_struct(object&, VkCopyMemoryToImageInfoEXT&);
        void deserialize_struct(object&, VkCopyMemoryToImageInfoEXT&);
    

        void serialize_struct(object&, VkCopyImageToMemoryInfoEXT&);
        void deserialize_struct(object&, VkCopyImageToMemoryInfoEXT&);
    

        void serialize_struct(object&, VkCopyImageToImageInfoEXT&);
        void deserialize_struct(object&, VkCopyImageToImageInfoEXT&);
    

        void serialize_struct(object&, VkHostImageLayoutTransitionInfoEXT&);
        void deserialize_struct(object&, VkHostImageLayoutTransitionInfoEXT&);
    

        void serialize_struct(object&, VkSubresourceHostMemcpySizeEXT&);
        void deserialize_struct(object&, VkSubresourceHostMemcpySizeEXT&);
    

        void serialize_struct(object&, VkHostImageCopyDevicePerformanceQueryEXT&);
        void deserialize_struct(object&, VkHostImageCopyDevicePerformanceQueryEXT&);
    

        void serialize_struct(object&, VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceLegacyDitheringFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceLegacyDitheringFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT&);
    

        void serialize_struct(object&, VkSubpassResolvePerformanceQueryEXT&);
        void deserialize_struct(object&, VkSubpassResolvePerformanceQueryEXT&);
    

        void serialize_struct(object&, VkMultisampledRenderToSingleSampledInfoEXT&);
        void deserialize_struct(object&, VkMultisampledRenderToSingleSampledInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDevicePipelineProtectedAccessFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDevicePipelineProtectedAccessFeaturesEXT&);
    

        void serialize_struct(object&, VkQueueFamilyVideoPropertiesKHR&);
        void deserialize_struct(object&, VkQueueFamilyVideoPropertiesKHR&);
    

        void serialize_struct(object&, VkQueueFamilyQueryResultStatusPropertiesKHR&);
        void deserialize_struct(object&, VkQueueFamilyQueryResultStatusPropertiesKHR&);
    

        void serialize_struct(object&, VkVideoProfileListInfoKHR&);
        void deserialize_struct(object&, VkVideoProfileListInfoKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceVideoFormatInfoKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceVideoFormatInfoKHR&);
    

        void serialize_struct(object&, VkVideoFormatPropertiesKHR&);
        void deserialize_struct(object&, VkVideoFormatPropertiesKHR&);
    

        void serialize_struct(object&, VkVideoProfileInfoKHR&);
        void deserialize_struct(object&, VkVideoProfileInfoKHR&);
    

        void serialize_struct(object&, VkVideoCapabilitiesKHR&);
        void deserialize_struct(object&, VkVideoCapabilitiesKHR&);
    

        void serialize_struct(object&, VkVideoSessionMemoryRequirementsKHR&);
        void deserialize_struct(object&, VkVideoSessionMemoryRequirementsKHR&);
    

        void serialize_struct(object&, VkBindVideoSessionMemoryInfoKHR&);
        void deserialize_struct(object&, VkBindVideoSessionMemoryInfoKHR&);
    

        void serialize_struct(object&, VkVideoPictureResourceInfoKHR&);
        void deserialize_struct(object&, VkVideoPictureResourceInfoKHR&);
    

        void serialize_struct(object&, VkVideoReferenceSlotInfoKHR&);
        void deserialize_struct(object&, VkVideoReferenceSlotInfoKHR&);
    

        void serialize_struct(object&, VkVideoDecodeCapabilitiesKHR&);
        void deserialize_struct(object&, VkVideoDecodeCapabilitiesKHR&);
    

        void serialize_struct(object&, VkVideoDecodeUsageInfoKHR&);
        void deserialize_struct(object&, VkVideoDecodeUsageInfoKHR&);
    

        void serialize_struct(object&, VkVideoDecodeInfoKHR&);
        void deserialize_struct(object&, VkVideoDecodeInfoKHR&);
    

        void serialize_struct(object&, VkVideoDecodeH264ProfileInfoKHR&);
        void deserialize_struct(object&, VkVideoDecodeH264ProfileInfoKHR&);
    

        void serialize_struct(object&, VkVideoDecodeH264CapabilitiesKHR&);
        void deserialize_struct(object&, VkVideoDecodeH264CapabilitiesKHR&);
    

        void serialize_struct(object&, VkVideoDecodeH264SessionParametersAddInfoKHR&);
        void deserialize_struct(object&, VkVideoDecodeH264SessionParametersAddInfoKHR&);
    

        void serialize_struct(object&, VkVideoDecodeH264SessionParametersCreateInfoKHR&);
        void deserialize_struct(object&, VkVideoDecodeH264SessionParametersCreateInfoKHR&);
    

        void serialize_struct(object&, VkVideoDecodeH264PictureInfoKHR&);
        void deserialize_struct(object&, VkVideoDecodeH264PictureInfoKHR&);
    

        void serialize_struct(object&, VkVideoDecodeH264DpbSlotInfoKHR&);
        void deserialize_struct(object&, VkVideoDecodeH264DpbSlotInfoKHR&);
    

        void serialize_struct(object&, VkVideoDecodeH265ProfileInfoKHR&);
        void deserialize_struct(object&, VkVideoDecodeH265ProfileInfoKHR&);
    

        void serialize_struct(object&, VkVideoDecodeH265CapabilitiesKHR&);
        void deserialize_struct(object&, VkVideoDecodeH265CapabilitiesKHR&);
    

        void serialize_struct(object&, VkVideoDecodeH265SessionParametersAddInfoKHR&);
        void deserialize_struct(object&, VkVideoDecodeH265SessionParametersAddInfoKHR&);
    

        void serialize_struct(object&, VkVideoDecodeH265SessionParametersCreateInfoKHR&);
        void deserialize_struct(object&, VkVideoDecodeH265SessionParametersCreateInfoKHR&);
    

        void serialize_struct(object&, VkVideoDecodeH265PictureInfoKHR&);
        void deserialize_struct(object&, VkVideoDecodeH265PictureInfoKHR&);
    

        void serialize_struct(object&, VkVideoDecodeH265DpbSlotInfoKHR&);
        void deserialize_struct(object&, VkVideoDecodeH265DpbSlotInfoKHR&);
    

        void serialize_struct(object&, VkVideoSessionCreateInfoKHR&);
        void deserialize_struct(object&, VkVideoSessionCreateInfoKHR&);
    

        void serialize_struct(object&, VkVideoSessionParametersCreateInfoKHR&);
        void deserialize_struct(object&, VkVideoSessionParametersCreateInfoKHR&);
    

        void serialize_struct(object&, VkVideoSessionParametersUpdateInfoKHR&);
        void deserialize_struct(object&, VkVideoSessionParametersUpdateInfoKHR&);
    

        void serialize_struct(object&, VkVideoBeginCodingInfoKHR&);
        void deserialize_struct(object&, VkVideoBeginCodingInfoKHR&);
    

        void serialize_struct(object&, VkVideoEndCodingInfoKHR&);
        void deserialize_struct(object&, VkVideoEndCodingInfoKHR&);
    

        void serialize_struct(object&, VkVideoCodingControlInfoKHR&);
        void deserialize_struct(object&, VkVideoCodingControlInfoKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceInheritedViewportScissorFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceInheritedViewportScissorFeaturesNV&);
    

        void serialize_struct(object&, VkCommandBufferInheritanceViewportScissorInfoNV&);
        void deserialize_struct(object&, VkCommandBufferInheritanceViewportScissorInfoNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceProvokingVertexFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceProvokingVertexFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceProvokingVertexPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceProvokingVertexPropertiesEXT&);
    

        void serialize_struct(object&, VkPipelineRasterizationProvokingVertexStateCreateInfoEXT&);
        void deserialize_struct(object&, VkPipelineRasterizationProvokingVertexStateCreateInfoEXT&);
    

        void serialize_struct(object&, VkCuModuleCreateInfoNVX&);
        void deserialize_struct(object&, VkCuModuleCreateInfoNVX&);
    

        void serialize_struct(object&, VkCuFunctionCreateInfoNVX&);
        void deserialize_struct(object&, VkCuFunctionCreateInfoNVX&);
    

        void serialize_struct(object&, VkCuLaunchInfoNVX&);
        void deserialize_struct(object&, VkCuLaunchInfoNVX&);
    

        void serialize_struct(object&, VkPhysicalDeviceDescriptorBufferFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceDescriptorBufferFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceDescriptorBufferPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceDescriptorBufferPropertiesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT&);
    

        void serialize_struct(object&, VkDescriptorAddressInfoEXT&);
        void deserialize_struct(object&, VkDescriptorAddressInfoEXT&);
    

        void serialize_struct(object&, VkDescriptorBufferBindingInfoEXT&);
        void deserialize_struct(object&, VkDescriptorBufferBindingInfoEXT&);
    

        void serialize_struct(object&, VkDescriptorBufferBindingPushDescriptorBufferHandleEXT&);
        void deserialize_struct(object&, VkDescriptorBufferBindingPushDescriptorBufferHandleEXT&);
    

        void serialize_struct(object&, VkDescriptorDataEXT&);
        void deserialize_struct(object&, VkDescriptorDataEXT&);
    

        void serialize_struct(object&, VkDescriptorGetInfoEXT&);
        void deserialize_struct(object&, VkDescriptorGetInfoEXT&);
    

        void serialize_struct(object&, VkBufferCaptureDescriptorDataInfoEXT&);
        void deserialize_struct(object&, VkBufferCaptureDescriptorDataInfoEXT&);
    

        void serialize_struct(object&, VkImageCaptureDescriptorDataInfoEXT&);
        void deserialize_struct(object&, VkImageCaptureDescriptorDataInfoEXT&);
    

        void serialize_struct(object&, VkImageViewCaptureDescriptorDataInfoEXT&);
        void deserialize_struct(object&, VkImageViewCaptureDescriptorDataInfoEXT&);
    

        void serialize_struct(object&, VkSamplerCaptureDescriptorDataInfoEXT&);
        void deserialize_struct(object&, VkSamplerCaptureDescriptorDataInfoEXT&);
    

        void serialize_struct(object&, VkAccelerationStructureCaptureDescriptorDataInfoEXT&);
        void deserialize_struct(object&, VkAccelerationStructureCaptureDescriptorDataInfoEXT&);
    

        void serialize_struct(object&, VkOpaqueCaptureDescriptorDataCreateInfoEXT&);
        void deserialize_struct(object&, VkOpaqueCaptureDescriptorDataCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderIntegerDotProductFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderIntegerDotProductFeatures&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderIntegerDotProductProperties&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderIntegerDotProductProperties&);
    

        void serialize_struct(object&, VkPhysicalDeviceDrmPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceDrmPropertiesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceRayTracingMotionBlurFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceRayTracingMotionBlurFeaturesNV&);
    

        void serialize_struct(object&, VkAccelerationStructureGeometryMotionTrianglesDataNV&);
        void deserialize_struct(object&, VkAccelerationStructureGeometryMotionTrianglesDataNV&);
    

        void serialize_struct(object&, VkAccelerationStructureMotionInfoNV&);
        void deserialize_struct(object&, VkAccelerationStructureMotionInfoNV&);
    

        void serialize_struct(object&, VkSRTDataNV&);
        void deserialize_struct(object&, VkSRTDataNV&);
    

        void serialize_struct(object&, VkAccelerationStructureSRTMotionInstanceNV&);
        void deserialize_struct(object&, VkAccelerationStructureSRTMotionInstanceNV&);
    

        void serialize_struct(object&, VkAccelerationStructureMatrixMotionInstanceNV&);
        void deserialize_struct(object&, VkAccelerationStructureMatrixMotionInstanceNV&);
    

        void serialize_struct(object&, VkAccelerationStructureMotionInstanceDataNV&);
        void deserialize_struct(object&, VkAccelerationStructureMotionInstanceDataNV&);
    

        void serialize_struct(object&, VkAccelerationStructureMotionInstanceNV&);
        void deserialize_struct(object&, VkAccelerationStructureMotionInstanceNV&);
    

        void serialize_struct(object&, VkMemoryGetRemoteAddressInfoNV&);
        void deserialize_struct(object&, VkMemoryGetRemoteAddressInfoNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT&);
    

        void serialize_struct(object&, VkFormatProperties3&);
        void deserialize_struct(object&, VkFormatProperties3&);
    

        void serialize_struct(object&, VkDrmFormatModifierPropertiesList2EXT&);
        void deserialize_struct(object&, VkDrmFormatModifierPropertiesList2EXT&);
    

        void serialize_struct(object&, VkDrmFormatModifierProperties2EXT&);
        void deserialize_struct(object&, VkDrmFormatModifierProperties2EXT&);
    

        void serialize_struct(object&, VkPipelineRenderingCreateInfo&);
        void deserialize_struct(object&, VkPipelineRenderingCreateInfo&);
    

        void serialize_struct(object&, VkRenderingInfo&);
        void deserialize_struct(object&, VkRenderingInfo&);
    

        void serialize_struct(object&, VkRenderingAttachmentInfo&);
        void deserialize_struct(object&, VkRenderingAttachmentInfo&);
    

        void serialize_struct(object&, VkRenderingFragmentShadingRateAttachmentInfoKHR&);
        void deserialize_struct(object&, VkRenderingFragmentShadingRateAttachmentInfoKHR&);
    

        void serialize_struct(object&, VkRenderingFragmentDensityMapAttachmentInfoEXT&);
        void deserialize_struct(object&, VkRenderingFragmentDensityMapAttachmentInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceDynamicRenderingFeatures&);
        void deserialize_struct(object&, VkPhysicalDeviceDynamicRenderingFeatures&);
    

        void serialize_struct(object&, VkCommandBufferInheritanceRenderingInfo&);
        void deserialize_struct(object&, VkCommandBufferInheritanceRenderingInfo&);
    

        void serialize_struct(object&, VkAttachmentSampleCountInfoAMD&);
        void deserialize_struct(object&, VkAttachmentSampleCountInfoAMD&);
    

        void serialize_struct(object&, VkMultiviewPerViewAttributesInfoNVX&);
        void deserialize_struct(object&, VkMultiviewPerViewAttributesInfoNVX&);
    

        void serialize_struct(object&, VkPhysicalDeviceImageViewMinLodFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceImageViewMinLodFeaturesEXT&);
    

        void serialize_struct(object&, VkImageViewMinLodCreateInfoEXT&);
        void deserialize_struct(object&, VkImageViewMinLodCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceLinearColorAttachmentFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceLinearColorAttachmentFeaturesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT&);
    

        void serialize_struct(object&, VkGraphicsPipelineLibraryCreateInfoEXT&);
        void deserialize_struct(object&, VkGraphicsPipelineLibraryCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE&);
        void deserialize_struct(object&, VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE&);
    

        void serialize_struct(object&, VkDescriptorSetBindingReferenceVALVE&);
        void deserialize_struct(object&, VkDescriptorSetBindingReferenceVALVE&);
    

        void serialize_struct(object&, VkDescriptorSetLayoutHostMappingInfoVALVE&);
        void deserialize_struct(object&, VkDescriptorSetLayoutHostMappingInfoVALVE&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT&);
    

        void serialize_struct(object&, VkPipelineShaderStageModuleIdentifierCreateInfoEXT&);
        void deserialize_struct(object&, VkPipelineShaderStageModuleIdentifierCreateInfoEXT&);
    

        void serialize_struct(object&, VkShaderModuleIdentifierEXT&);
        void deserialize_struct(object&, VkShaderModuleIdentifierEXT&);
    

        void serialize_struct(object&, VkImageCompressionControlEXT&);
        void deserialize_struct(object&, VkImageCompressionControlEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceImageCompressionControlFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceImageCompressionControlFeaturesEXT&);
    

        void serialize_struct(object&, VkImageCompressionPropertiesEXT&);
        void deserialize_struct(object&, VkImageCompressionPropertiesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT&);
    

        void serialize_struct(object&, VkImageSubresource2KHR&);
        void deserialize_struct(object&, VkImageSubresource2KHR&);
    

        void serialize_struct(object&, VkSubresourceLayout2KHR&);
        void deserialize_struct(object&, VkSubresourceLayout2KHR&);
    

        void serialize_struct(object&, VkRenderPassCreationControlEXT&);
        void deserialize_struct(object&, VkRenderPassCreationControlEXT&);
    

        void serialize_struct(object&, VkRenderPassCreationFeedbackInfoEXT&);
        void deserialize_struct(object&, VkRenderPassCreationFeedbackInfoEXT&);
    

        void serialize_struct(object&, VkRenderPassCreationFeedbackCreateInfoEXT&);
        void deserialize_struct(object&, VkRenderPassCreationFeedbackCreateInfoEXT&);
    

        void serialize_struct(object&, VkRenderPassSubpassFeedbackInfoEXT&);
        void deserialize_struct(object&, VkRenderPassSubpassFeedbackInfoEXT&);
    

        void serialize_struct(object&, VkRenderPassSubpassFeedbackCreateInfoEXT&);
        void deserialize_struct(object&, VkRenderPassSubpassFeedbackCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT&);
    

        void serialize_struct(object&, VkMicromapBuildInfoEXT&);
        void deserialize_struct(object&, VkMicromapBuildInfoEXT&);
    

        void serialize_struct(object&, VkMicromapCreateInfoEXT&);
        void deserialize_struct(object&, VkMicromapCreateInfoEXT&);
    

        void serialize_struct(object&, VkMicromapVersionInfoEXT&);
        void deserialize_struct(object&, VkMicromapVersionInfoEXT&);
    

        void serialize_struct(object&, VkCopyMicromapInfoEXT&);
        void deserialize_struct(object&, VkCopyMicromapInfoEXT&);
    

        void serialize_struct(object&, VkCopyMicromapToMemoryInfoEXT&);
        void deserialize_struct(object&, VkCopyMicromapToMemoryInfoEXT&);
    

        void serialize_struct(object&, VkCopyMemoryToMicromapInfoEXT&);
        void deserialize_struct(object&, VkCopyMemoryToMicromapInfoEXT&);
    

        void serialize_struct(object&, VkMicromapBuildSizesInfoEXT&);
        void deserialize_struct(object&, VkMicromapBuildSizesInfoEXT&);
    

        void serialize_struct(object&, VkMicromapUsageEXT&);
        void deserialize_struct(object&, VkMicromapUsageEXT&);
    

        void serialize_struct(object&, VkMicromapTriangleEXT&);
        void deserialize_struct(object&, VkMicromapTriangleEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceOpacityMicromapFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceOpacityMicromapFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceOpacityMicromapPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceOpacityMicromapPropertiesEXT&);
    

        void serialize_struct(object&, VkAccelerationStructureTrianglesOpacityMicromapEXT&);
        void deserialize_struct(object&, VkAccelerationStructureTrianglesOpacityMicromapEXT&);
    

        void serialize_struct(object&, VkPipelinePropertiesIdentifierEXT&);
        void deserialize_struct(object&, VkPipelinePropertiesIdentifierEXT&);
    

        void serialize_struct(object&, VkPhysicalDevicePipelinePropertiesFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDevicePipelinePropertiesFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD&);
    

        void serialize_struct(object&, VkExternalMemoryAcquireUnmodifiedEXT&);
        void deserialize_struct(object&, VkExternalMemoryAcquireUnmodifiedEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDevicePipelineRobustnessFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDevicePipelineRobustnessFeaturesEXT&);
    

        void serialize_struct(object&, VkPipelineRobustnessCreateInfoEXT&);
        void deserialize_struct(object&, VkPipelineRobustnessCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDevicePipelineRobustnessPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDevicePipelineRobustnessPropertiesEXT&);
    

        void serialize_struct(object&, VkImageViewSampleWeightCreateInfoQCOM&);
        void deserialize_struct(object&, VkImageViewSampleWeightCreateInfoQCOM&);
    

        void serialize_struct(object&, VkPhysicalDeviceImageProcessingFeaturesQCOM&);
        void deserialize_struct(object&, VkPhysicalDeviceImageProcessingFeaturesQCOM&);
    

        void serialize_struct(object&, VkPhysicalDeviceImageProcessingPropertiesQCOM&);
        void deserialize_struct(object&, VkPhysicalDeviceImageProcessingPropertiesQCOM&);
    

        void serialize_struct(object&, VkPhysicalDeviceTilePropertiesFeaturesQCOM&);
        void deserialize_struct(object&, VkPhysicalDeviceTilePropertiesFeaturesQCOM&);
    

        void serialize_struct(object&, VkTilePropertiesQCOM&);
        void deserialize_struct(object&, VkTilePropertiesQCOM&);
    

        void serialize_struct(object&, VkPhysicalDeviceAmigoProfilingFeaturesSEC&);
        void deserialize_struct(object&, VkPhysicalDeviceAmigoProfilingFeaturesSEC&);
    

        void serialize_struct(object&, VkAmigoProfilingSubmitInfoSEC&);
        void deserialize_struct(object&, VkAmigoProfilingSubmitInfoSEC&);
    

        void serialize_struct(object&, VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceDepthClampZeroOneFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceDepthClampZeroOneFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceAddressBindingReportFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceAddressBindingReportFeaturesEXT&);
    

        void serialize_struct(object&, VkDeviceAddressBindingCallbackDataEXT&);
        void deserialize_struct(object&, VkDeviceAddressBindingCallbackDataEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceOpticalFlowFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceOpticalFlowFeaturesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceOpticalFlowPropertiesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceOpticalFlowPropertiesNV&);
    

        void serialize_struct(object&, VkOpticalFlowImageFormatInfoNV&);
        void deserialize_struct(object&, VkOpticalFlowImageFormatInfoNV&);
    

        void serialize_struct(object&, VkOpticalFlowImageFormatPropertiesNV&);
        void deserialize_struct(object&, VkOpticalFlowImageFormatPropertiesNV&);
    

        void serialize_struct(object&, VkOpticalFlowSessionCreateInfoNV&);
        void deserialize_struct(object&, VkOpticalFlowSessionCreateInfoNV&);
    

        void serialize_struct(object&, VkOpticalFlowSessionCreatePrivateDataInfoNV&);
        void deserialize_struct(object&, VkOpticalFlowSessionCreatePrivateDataInfoNV&);
    

        void serialize_struct(object&, VkOpticalFlowExecuteInfoNV&);
        void deserialize_struct(object&, VkOpticalFlowExecuteInfoNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceFaultFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceFaultFeaturesEXT&);
    

        void serialize_struct(object&, VkDeviceFaultAddressInfoEXT&);
        void deserialize_struct(object&, VkDeviceFaultAddressInfoEXT&);
    

        void serialize_struct(object&, VkDeviceFaultVendorInfoEXT&);
        void deserialize_struct(object&, VkDeviceFaultVendorInfoEXT&);
    

        void serialize_struct(object&, VkDeviceFaultCountsEXT&);
        void deserialize_struct(object&, VkDeviceFaultCountsEXT&);
    

        void serialize_struct(object&, VkDeviceFaultInfoEXT&);
        void deserialize_struct(object&, VkDeviceFaultInfoEXT&);
    

        void serialize_struct(object&, VkDeviceFaultVendorBinaryHeaderVersionOneEXT&);
        void deserialize_struct(object&, VkDeviceFaultVendorBinaryHeaderVersionOneEXT&);
    

        void serialize_struct(object&, VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT&);
    

        void serialize_struct(object&, VkDepthBiasInfoEXT&);
        void deserialize_struct(object&, VkDepthBiasInfoEXT&);
    

        void serialize_struct(object&, VkDepthBiasRepresentationInfoEXT&);
        void deserialize_struct(object&, VkDepthBiasRepresentationInfoEXT&);
    

        void serialize_struct(object&, VkDecompressMemoryRegionNV&);
        void deserialize_struct(object&, VkDecompressMemoryRegionNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM&);
    

        void serialize_struct(object&, VkFrameBoundaryEXT&);
        void deserialize_struct(object&, VkFrameBoundaryEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceFrameBoundaryFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceFrameBoundaryFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT&);
    

        void serialize_struct(object&, VkSurfacePresentModeEXT&);
        void deserialize_struct(object&, VkSurfacePresentModeEXT&);
    

        void serialize_struct(object&, VkSurfacePresentScalingCapabilitiesEXT&);
        void deserialize_struct(object&, VkSurfacePresentScalingCapabilitiesEXT&);
    

        void serialize_struct(object&, VkSurfacePresentModeCompatibilityEXT&);
        void deserialize_struct(object&, VkSurfacePresentModeCompatibilityEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT&);
    

        void serialize_struct(object&, VkSwapchainPresentFenceInfoEXT&);
        void deserialize_struct(object&, VkSwapchainPresentFenceInfoEXT&);
    

        void serialize_struct(object&, VkSwapchainPresentModesCreateInfoEXT&);
        void deserialize_struct(object&, VkSwapchainPresentModesCreateInfoEXT&);
    

        void serialize_struct(object&, VkSwapchainPresentModeInfoEXT&);
        void deserialize_struct(object&, VkSwapchainPresentModeInfoEXT&);
    

        void serialize_struct(object&, VkSwapchainPresentScalingCreateInfoEXT&);
        void deserialize_struct(object&, VkSwapchainPresentScalingCreateInfoEXT&);
    

        void serialize_struct(object&, VkReleaseSwapchainImagesInfoEXT&);
        void deserialize_struct(object&, VkReleaseSwapchainImagesInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceDepthBiasControlFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceDepthBiasControlFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV&);
    

        void serialize_struct(object&, VkDirectDriverLoadingInfoLUNARG&);
        void deserialize_struct(object&, VkDirectDriverLoadingInfoLUNARG&);
    

        void serialize_struct(object&, VkDirectDriverLoadingListLUNARG&);
        void deserialize_struct(object&, VkDirectDriverLoadingListLUNARG&);
    

        void serialize_struct(object&, VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM&);
        void deserialize_struct(object&, VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM&);
    

        void serialize_struct(object&, VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR&);
    

        void serialize_struct(object&, VkDeviceImageSubresourceInfoKHR&);
        void deserialize_struct(object&, VkDeviceImageSubresourceInfoKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderCorePropertiesARM&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderCorePropertiesARM&);
    

        void serialize_struct(object&, VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM&);
        void deserialize_struct(object&, VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM&);
    

        void serialize_struct(object&, VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM&);
        void deserialize_struct(object&, VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM&);
    

        void serialize_struct(object&, VkQueryLowLatencySupportNV&);
        void deserialize_struct(object&, VkQueryLowLatencySupportNV&);
    

        void serialize_struct(object&, VkMemoryMapInfoKHR&);
        void deserialize_struct(object&, VkMemoryMapInfoKHR&);
    

        void serialize_struct(object&, VkMemoryUnmapInfoKHR&);
        void deserialize_struct(object&, VkMemoryUnmapInfoKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderObjectFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderObjectFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderObjectPropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderObjectPropertiesEXT&);
    

        void serialize_struct(object&, VkShaderCreateInfoEXT&);
        void deserialize_struct(object&, VkShaderCreateInfoEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderTileImageFeaturesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderTileImageFeaturesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceShaderTileImagePropertiesEXT&);
        void deserialize_struct(object&, VkPhysicalDeviceShaderTileImagePropertiesEXT&);
    

        void serialize_struct(object&, VkPhysicalDeviceCooperativeMatrixFeaturesKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceCooperativeMatrixFeaturesKHR&);
    

        void serialize_struct(object&, VkCooperativeMatrixPropertiesKHR&);
        void deserialize_struct(object&, VkCooperativeMatrixPropertiesKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceCooperativeMatrixPropertiesKHR&);
        void deserialize_struct(object&, VkPhysicalDeviceCooperativeMatrixPropertiesKHR&);
    

        void serialize_struct(object&, VkPhysicalDeviceCubicClampFeaturesQCOM&);
        void deserialize_struct(object&, VkPhysicalDeviceCubicClampFeaturesQCOM&);
    

        void serialize_struct(object&, VkPhysicalDeviceYcbcrDegammaFeaturesQCOM&);
        void deserialize_struct(object&, VkPhysicalDeviceYcbcrDegammaFeaturesQCOM&);
    

        void serialize_struct(object&, VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM&);
        void deserialize_struct(object&, VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM&);
    

        void serialize_struct(object&, VkPhysicalDeviceCubicWeightsFeaturesQCOM&);
        void deserialize_struct(object&, VkPhysicalDeviceCubicWeightsFeaturesQCOM&);
    

        void serialize_struct(object&, VkSamplerCubicWeightsCreateInfoQCOM&);
        void deserialize_struct(object&, VkSamplerCubicWeightsCreateInfoQCOM&);
    

        void serialize_struct(object&, VkBlitImageCubicWeightsInfoQCOM&);
        void deserialize_struct(object&, VkBlitImageCubicWeightsInfoQCOM&);
    

        void serialize_struct(object&, VkPhysicalDeviceImageProcessing2FeaturesQCOM&);
        void deserialize_struct(object&, VkPhysicalDeviceImageProcessing2FeaturesQCOM&);
    

        void serialize_struct(object&, VkPhysicalDeviceImageProcessing2PropertiesQCOM&);
        void deserialize_struct(object&, VkPhysicalDeviceImageProcessing2PropertiesQCOM&);
    

        void serialize_struct(object&, VkSamplerBlockMatchWindowCreateInfoQCOM&);
        void deserialize_struct(object&, VkSamplerBlockMatchWindowCreateInfoQCOM&);
    

        void serialize_struct(object&, VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV&);
        void deserialize_struct(object&, VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV&);
    

        void serialize_struct(object&, VkPhysicalDeviceLayeredDriverPropertiesMSFT&);
        void deserialize_struct(object&, VkPhysicalDeviceLayeredDriverPropertiesMSFT&);
    
void serialize_funcpointer(object&, PFN_vkInternalAllocationNotification&);
void handle_PFN_vkInternalAllocationNotification(object&);
void deserialize_funcpointer(object&, PFN_vkInternalAllocationNotification&);
void serialize_funcpointer(object&, PFN_vkInternalFreeNotification&);
void handle_PFN_vkInternalFreeNotification(object&);
void deserialize_funcpointer(object&, PFN_vkInternalFreeNotification&);
void serialize_funcpointer(object&, PFN_vkReallocationFunction&);
void handle_PFN_vkReallocationFunction(object&);
void deserialize_funcpointer(object&, PFN_vkReallocationFunction&);
void serialize_funcpointer(object&, PFN_vkAllocationFunction&);
void handle_PFN_vkAllocationFunction(object&);
void deserialize_funcpointer(object&, PFN_vkAllocationFunction&);
void serialize_funcpointer(object&, PFN_vkFreeFunction&);
void handle_PFN_vkFreeFunction(object&);
void deserialize_funcpointer(object&, PFN_vkFreeFunction&);
void serialize_funcpointer(object&, PFN_vkDebugReportCallbackEXT&);
void handle_PFN_vkDebugReportCallbackEXT(object&);
void deserialize_funcpointer(object&, PFN_vkDebugReportCallbackEXT&);
void serialize_funcpointer(object&, PFN_vkDebugUtilsMessengerCallbackEXT&);
void handle_PFN_vkDebugUtilsMessengerCallbackEXT(object&);
void deserialize_funcpointer(object&, PFN_vkDebugUtilsMessengerCallbackEXT&);
void serialize_funcpointer(object&, PFN_vkDeviceMemoryReportCallbackEXT&);
void handle_PFN_vkDeviceMemoryReportCallbackEXT(object&);
void deserialize_funcpointer(object&, PFN_vkDeviceMemoryReportCallbackEXT&);
void serialize_funcpointer(object&, PFN_vkGetInstanceProcAddrLUNARG&);
void deserialize_funcpointer(object&, PFN_vkGetInstanceProcAddrLUNARG&);
void serialize_handle(object&, VkInstance&);
void deserialize_handle(object&, VkInstance&);
void serialize_handle(object&, VkPhysicalDevice&);
void deserialize_handle(object&, VkPhysicalDevice&);
void serialize_handle(object&, VkDevice&);
void deserialize_handle(object&, VkDevice&);
void serialize_handle(object&, VkQueue&);
void deserialize_handle(object&, VkQueue&);
void serialize_handle(object&, VkCommandBuffer&);
void deserialize_handle(object&, VkCommandBuffer&);
void serialize_handle(object&, VkDeviceMemory&);
void deserialize_handle(object&, VkDeviceMemory&);
void serialize_handle(object&, VkCommandPool&);
void deserialize_handle(object&, VkCommandPool&);
void serialize_handle(object&, VkBuffer&);
void deserialize_handle(object&, VkBuffer&);
void serialize_handle(object&, VkBufferView&);
void deserialize_handle(object&, VkBufferView&);
void serialize_handle(object&, VkImage&);
void deserialize_handle(object&, VkImage&);
void serialize_handle(object&, VkImageView&);
void deserialize_handle(object&, VkImageView&);
void serialize_handle(object&, VkShaderModule&);
void deserialize_handle(object&, VkShaderModule&);
void serialize_handle(object&, VkPipeline&);
void deserialize_handle(object&, VkPipeline&);
void serialize_handle(object&, VkPipelineLayout&);
void deserialize_handle(object&, VkPipelineLayout&);
void serialize_handle(object&, VkSampler&);
void deserialize_handle(object&, VkSampler&);
void serialize_handle(object&, VkDescriptorSet&);
void deserialize_handle(object&, VkDescriptorSet&);
void serialize_handle(object&, VkDescriptorSetLayout&);
void deserialize_handle(object&, VkDescriptorSetLayout&);
void serialize_handle(object&, VkDescriptorPool&);
void deserialize_handle(object&, VkDescriptorPool&);
void serialize_handle(object&, VkFence&);
void deserialize_handle(object&, VkFence&);
void serialize_handle(object&, VkSemaphore&);
void deserialize_handle(object&, VkSemaphore&);
void serialize_handle(object&, VkEvent&);
void deserialize_handle(object&, VkEvent&);
void serialize_handle(object&, VkQueryPool&);
void deserialize_handle(object&, VkQueryPool&);
void serialize_handle(object&, VkFramebuffer&);
void deserialize_handle(object&, VkFramebuffer&);
void serialize_handle(object&, VkRenderPass&);
void deserialize_handle(object&, VkRenderPass&);
void serialize_handle(object&, VkPipelineCache&);
void deserialize_handle(object&, VkPipelineCache&);
void serialize_handle(object&, VkIndirectCommandsLayoutNV&);
void deserialize_handle(object&, VkIndirectCommandsLayoutNV&);
void serialize_handle(object&, VkDescriptorUpdateTemplate&);
void deserialize_handle(object&, VkDescriptorUpdateTemplate&);
void serialize_handle(object&, VkDescriptorUpdateTemplateKHR&);
void deserialize_handle(object&, VkDescriptorUpdateTemplateKHR&);
void serialize_handle(object&, VkSamplerYcbcrConversion&);
void deserialize_handle(object&, VkSamplerYcbcrConversion&);
void serialize_handle(object&, VkSamplerYcbcrConversionKHR&);
void deserialize_handle(object&, VkSamplerYcbcrConversionKHR&);
void serialize_handle(object&, VkValidationCacheEXT&);
void deserialize_handle(object&, VkValidationCacheEXT&);
void serialize_handle(object&, VkAccelerationStructureKHR&);
void deserialize_handle(object&, VkAccelerationStructureKHR&);
void serialize_handle(object&, VkAccelerationStructureNV&);
void deserialize_handle(object&, VkAccelerationStructureNV&);
void serialize_handle(object&, VkPerformanceConfigurationINTEL&);
void deserialize_handle(object&, VkPerformanceConfigurationINTEL&);
void serialize_handle(object&, VkDeferredOperationKHR&);
void deserialize_handle(object&, VkDeferredOperationKHR&);
void serialize_handle(object&, VkPrivateDataSlot&);
void deserialize_handle(object&, VkPrivateDataSlot&);
void serialize_handle(object&, VkPrivateDataSlotEXT&);
void deserialize_handle(object&, VkPrivateDataSlotEXT&);
void serialize_handle(object&, VkCuModuleNVX&);
void deserialize_handle(object&, VkCuModuleNVX&);
void serialize_handle(object&, VkCuFunctionNVX&);
void deserialize_handle(object&, VkCuFunctionNVX&);
void serialize_handle(object&, VkOpticalFlowSessionNV&);
void deserialize_handle(object&, VkOpticalFlowSessionNV&);
void serialize_handle(object&, VkMicromapEXT&);
void deserialize_handle(object&, VkMicromapEXT&);
void serialize_handle(object&, VkShaderEXT&);
void deserialize_handle(object&, VkShaderEXT&);
void serialize_handle(object&, VkDisplayKHR&);
void deserialize_handle(object&, VkDisplayKHR&);
void serialize_handle(object&, VkDisplayModeKHR&);
void deserialize_handle(object&, VkDisplayModeKHR&);
void serialize_handle(object&, VkSurfaceKHR&);
void deserialize_handle(object&, VkSurfaceKHR&);
void serialize_handle(object&, VkSwapchainKHR&);
void deserialize_handle(object&, VkSwapchainKHR&);
void serialize_handle(object&, VkDebugReportCallbackEXT&);
void deserialize_handle(object&, VkDebugReportCallbackEXT&);
void serialize_handle(object&, VkDebugUtilsMessengerEXT&);
void deserialize_handle(object&, VkDebugUtilsMessengerEXT&);
void serialize_handle(object&, VkVideoSessionKHR&);
void deserialize_handle(object&, VkVideoSessionKHR&);
void serialize_handle(object&, VkVideoSessionParametersKHR&);
void deserialize_handle(object&, VkVideoSessionParametersKHR&);
