#include <vulkan/vulkan.h>

typedef struct StreamStructure{
    VkStructureType sType;
    const void* pNext;
} StreamStructure;

#include <debug.hpp>
typedef void* pNext;
void* memdup(const void* mem, size_t size);
void* copyVkStruct (const void* data);

        void serialize_struct(boost::json::object&, VkBaseOutStructure&);
        void deserialize_struct(boost::json::object&, VkBaseOutStructure&);
    

        void serialize_struct(boost::json::object&, VkBaseInStructure&);
        void deserialize_struct(boost::json::object&, VkBaseInStructure&);
    

        void serialize_struct(boost::json::object&, VkOffset2D&);
        void deserialize_struct(boost::json::object&, VkOffset2D&);
    

        void serialize_struct(boost::json::object&, VkOffset3D&);
        void deserialize_struct(boost::json::object&, VkOffset3D&);
    

        void serialize_struct(boost::json::object&, VkExtent2D&);
        void deserialize_struct(boost::json::object&, VkExtent2D&);
    

        void serialize_struct(boost::json::object&, VkExtent3D&);
        void deserialize_struct(boost::json::object&, VkExtent3D&);
    

        void serialize_struct(boost::json::object&, VkViewport&);
        void deserialize_struct(boost::json::object&, VkViewport&);
    

        void serialize_struct(boost::json::object&, VkRect2D&);
        void deserialize_struct(boost::json::object&, VkRect2D&);
    

        void serialize_struct(boost::json::object&, VkClearRect&);
        void deserialize_struct(boost::json::object&, VkClearRect&);
    

        void serialize_struct(boost::json::object&, VkComponentMapping&);
        void deserialize_struct(boost::json::object&, VkComponentMapping&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceProperties&);
    

        void serialize_struct(boost::json::object&, VkExtensionProperties&);
        void deserialize_struct(boost::json::object&, VkExtensionProperties&);
    

        void serialize_struct(boost::json::object&, VkLayerProperties&);
        void deserialize_struct(boost::json::object&, VkLayerProperties&);
    

        void serialize_struct(boost::json::object&, VkApplicationInfo&);
        void deserialize_struct(boost::json::object&, VkApplicationInfo&);
    

        void serialize_struct(boost::json::object&, VkAllocationCallbacks&);
        void deserialize_struct(boost::json::object&, VkAllocationCallbacks&);
    

        void serialize_struct(boost::json::object&, VkDeviceQueueCreateInfo&);
        void deserialize_struct(boost::json::object&, VkDeviceQueueCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkDeviceCreateInfo&);
        void deserialize_struct(boost::json::object&, VkDeviceCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkInstanceCreateInfo&);
        void deserialize_struct(boost::json::object&, VkInstanceCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkQueueFamilyProperties&);
        void deserialize_struct(boost::json::object&, VkQueueFamilyProperties&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMemoryProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMemoryProperties&);
    

        void serialize_struct(boost::json::object&, VkMemoryAllocateInfo&);
        void deserialize_struct(boost::json::object&, VkMemoryAllocateInfo&);
    

        void serialize_struct(boost::json::object&, VkMemoryRequirements&);
        void deserialize_struct(boost::json::object&, VkMemoryRequirements&);
    

        void serialize_struct(boost::json::object&, VkSparseImageFormatProperties&);
        void deserialize_struct(boost::json::object&, VkSparseImageFormatProperties&);
    

        void serialize_struct(boost::json::object&, VkSparseImageMemoryRequirements&);
        void deserialize_struct(boost::json::object&, VkSparseImageMemoryRequirements&);
    

        void serialize_struct(boost::json::object&, VkMemoryType&);
        void deserialize_struct(boost::json::object&, VkMemoryType&);
    

        void serialize_struct(boost::json::object&, VkMemoryHeap&);
        void deserialize_struct(boost::json::object&, VkMemoryHeap&);
    

        void serialize_struct(boost::json::object&, VkMappedMemoryRange&);
        void deserialize_struct(boost::json::object&, VkMappedMemoryRange&);
    

        void serialize_struct(boost::json::object&, VkFormatProperties&);
        void deserialize_struct(boost::json::object&, VkFormatProperties&);
    

        void serialize_struct(boost::json::object&, VkImageFormatProperties&);
        void deserialize_struct(boost::json::object&, VkImageFormatProperties&);
    

        void serialize_struct(boost::json::object&, VkDescriptorBufferInfo&);
        void deserialize_struct(boost::json::object&, VkDescriptorBufferInfo&);
    

        void serialize_struct(boost::json::object&, VkDescriptorImageInfo&);
        void deserialize_struct(boost::json::object&, VkDescriptorImageInfo&);
    

        void serialize_struct(boost::json::object&, VkWriteDescriptorSet&);
        void deserialize_struct(boost::json::object&, VkWriteDescriptorSet&);
    

        void serialize_struct(boost::json::object&, VkCopyDescriptorSet&);
        void deserialize_struct(boost::json::object&, VkCopyDescriptorSet&);
    

        void serialize_struct(boost::json::object&, VkBufferUsageFlags2CreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkBufferUsageFlags2CreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkBufferCreateInfo&);
        void deserialize_struct(boost::json::object&, VkBufferCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkBufferViewCreateInfo&);
        void deserialize_struct(boost::json::object&, VkBufferViewCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkImageSubresource&);
        void deserialize_struct(boost::json::object&, VkImageSubresource&);
    

        void serialize_struct(boost::json::object&, VkImageSubresourceLayers&);
        void deserialize_struct(boost::json::object&, VkImageSubresourceLayers&);
    

        void serialize_struct(boost::json::object&, VkImageSubresourceRange&);
        void deserialize_struct(boost::json::object&, VkImageSubresourceRange&);
    

        void serialize_struct(boost::json::object&, VkMemoryBarrier&);
        void deserialize_struct(boost::json::object&, VkMemoryBarrier&);
    

        void serialize_struct(boost::json::object&, VkBufferMemoryBarrier&);
        void deserialize_struct(boost::json::object&, VkBufferMemoryBarrier&);
    

        void serialize_struct(boost::json::object&, VkImageMemoryBarrier&);
        void deserialize_struct(boost::json::object&, VkImageMemoryBarrier&);
    

        void serialize_struct(boost::json::object&, VkImageCreateInfo&);
        void deserialize_struct(boost::json::object&, VkImageCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkSubresourceLayout&);
        void deserialize_struct(boost::json::object&, VkSubresourceLayout&);
    

        void serialize_struct(boost::json::object&, VkImageViewCreateInfo&);
        void deserialize_struct(boost::json::object&, VkImageViewCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkBufferCopy&);
        void deserialize_struct(boost::json::object&, VkBufferCopy&);
    

        void serialize_struct(boost::json::object&, VkSparseMemoryBind&);
        void deserialize_struct(boost::json::object&, VkSparseMemoryBind&);
    

        void serialize_struct(boost::json::object&, VkSparseImageMemoryBind&);
        void deserialize_struct(boost::json::object&, VkSparseImageMemoryBind&);
    

        void serialize_struct(boost::json::object&, VkSparseBufferMemoryBindInfo&);
        void deserialize_struct(boost::json::object&, VkSparseBufferMemoryBindInfo&);
    

        void serialize_struct(boost::json::object&, VkSparseImageOpaqueMemoryBindInfo&);
        void deserialize_struct(boost::json::object&, VkSparseImageOpaqueMemoryBindInfo&);
    

        void serialize_struct(boost::json::object&, VkSparseImageMemoryBindInfo&);
        void deserialize_struct(boost::json::object&, VkSparseImageMemoryBindInfo&);
    

        void serialize_struct(boost::json::object&, VkBindSparseInfo&);
        void deserialize_struct(boost::json::object&, VkBindSparseInfo&);
    

        void serialize_struct(boost::json::object&, VkImageCopy&);
        void deserialize_struct(boost::json::object&, VkImageCopy&);
    

        void serialize_struct(boost::json::object&, VkImageBlit&);
        void deserialize_struct(boost::json::object&, VkImageBlit&);
    

        void serialize_struct(boost::json::object&, VkBufferImageCopy&);
        void deserialize_struct(boost::json::object&, VkBufferImageCopy&);
    

        void serialize_struct(boost::json::object&, VkCopyMemoryIndirectCommandNV&);
        void deserialize_struct(boost::json::object&, VkCopyMemoryIndirectCommandNV&);
    

        void serialize_struct(boost::json::object&, VkCopyMemoryToImageIndirectCommandNV&);
        void deserialize_struct(boost::json::object&, VkCopyMemoryToImageIndirectCommandNV&);
    

        void serialize_struct(boost::json::object&, VkImageResolve&);
        void deserialize_struct(boost::json::object&, VkImageResolve&);
    

        void serialize_struct(boost::json::object&, VkShaderModuleCreateInfo&);
        void deserialize_struct(boost::json::object&, VkShaderModuleCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkDescriptorSetLayoutBinding&);
        void deserialize_struct(boost::json::object&, VkDescriptorSetLayoutBinding&);
    

        void serialize_struct(boost::json::object&, VkDescriptorSetLayoutCreateInfo&);
        void deserialize_struct(boost::json::object&, VkDescriptorSetLayoutCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkDescriptorPoolSize&);
        void deserialize_struct(boost::json::object&, VkDescriptorPoolSize&);
    

        void serialize_struct(boost::json::object&, VkDescriptorPoolCreateInfo&);
        void deserialize_struct(boost::json::object&, VkDescriptorPoolCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkDescriptorSetAllocateInfo&);
        void deserialize_struct(boost::json::object&, VkDescriptorSetAllocateInfo&);
    

        void serialize_struct(boost::json::object&, VkSpecializationMapEntry&);
        void deserialize_struct(boost::json::object&, VkSpecializationMapEntry&);
    

        void serialize_struct(boost::json::object&, VkSpecializationInfo&);
        void deserialize_struct(boost::json::object&, VkSpecializationInfo&);
    

        void serialize_struct(boost::json::object&, VkPipelineShaderStageCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineShaderStageCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkComputePipelineCreateInfo&);
        void deserialize_struct(boost::json::object&, VkComputePipelineCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkComputePipelineIndirectBufferInfoNV&);
        void deserialize_struct(boost::json::object&, VkComputePipelineIndirectBufferInfoNV&);
    

        void serialize_struct(boost::json::object&, VkPipelineCreateFlags2CreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkPipelineCreateFlags2CreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVertexInputBindingDescription&);
        void deserialize_struct(boost::json::object&, VkVertexInputBindingDescription&);
    

        void serialize_struct(boost::json::object&, VkVertexInputAttributeDescription&);
        void deserialize_struct(boost::json::object&, VkVertexInputAttributeDescription&);
    

        void serialize_struct(boost::json::object&, VkPipelineVertexInputStateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineVertexInputStateCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkPipelineInputAssemblyStateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineInputAssemblyStateCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkPipelineTessellationStateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineTessellationStateCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkPipelineViewportStateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineViewportStateCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkPipelineRasterizationStateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineRasterizationStateCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkPipelineMultisampleStateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineMultisampleStateCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkPipelineColorBlendAttachmentState&);
        void deserialize_struct(boost::json::object&, VkPipelineColorBlendAttachmentState&);
    

        void serialize_struct(boost::json::object&, VkPipelineColorBlendStateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineColorBlendStateCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkPipelineDynamicStateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineDynamicStateCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkStencilOpState&);
        void deserialize_struct(boost::json::object&, VkStencilOpState&);
    

        void serialize_struct(boost::json::object&, VkPipelineDepthStencilStateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineDepthStencilStateCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkGraphicsPipelineCreateInfo&);
        void deserialize_struct(boost::json::object&, VkGraphicsPipelineCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkPipelineCacheCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineCacheCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkPipelineCacheHeaderVersionOne&);
        void deserialize_struct(boost::json::object&, VkPipelineCacheHeaderVersionOne&);
    

        void serialize_struct(boost::json::object&, VkPushConstantRange&);
        void deserialize_struct(boost::json::object&, VkPushConstantRange&);
    

        void serialize_struct(boost::json::object&, VkPipelineLayoutCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineLayoutCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkSamplerCreateInfo&);
        void deserialize_struct(boost::json::object&, VkSamplerCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkCommandPoolCreateInfo&);
        void deserialize_struct(boost::json::object&, VkCommandPoolCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkCommandBufferAllocateInfo&);
        void deserialize_struct(boost::json::object&, VkCommandBufferAllocateInfo&);
    

        void serialize_struct(boost::json::object&, VkCommandBufferInheritanceInfo&);
        void deserialize_struct(boost::json::object&, VkCommandBufferInheritanceInfo&);
    

        void serialize_struct(boost::json::object&, VkCommandBufferBeginInfo&);
        void deserialize_struct(boost::json::object&, VkCommandBufferBeginInfo&);
    

        void serialize_struct(boost::json::object&, VkRenderPassBeginInfo&);
        void deserialize_struct(boost::json::object&, VkRenderPassBeginInfo&);
    

        void serialize_struct(boost::json::object&, VkClearColorValue&);
        void deserialize_struct(boost::json::object&, VkClearColorValue&);
    

        void serialize_struct(boost::json::object&, VkClearDepthStencilValue&);
        void deserialize_struct(boost::json::object&, VkClearDepthStencilValue&);
    

        void serialize_struct(boost::json::object&, VkClearValue&);
        void deserialize_struct(boost::json::object&, VkClearValue&);
    

        void serialize_struct(boost::json::object&, VkClearAttachment&);
        void deserialize_struct(boost::json::object&, VkClearAttachment&);
    

        void serialize_struct(boost::json::object&, VkAttachmentDescription&);
        void deserialize_struct(boost::json::object&, VkAttachmentDescription&);
    

        void serialize_struct(boost::json::object&, VkAttachmentReference&);
        void deserialize_struct(boost::json::object&, VkAttachmentReference&);
    

        void serialize_struct(boost::json::object&, VkSubpassDescription&);
        void deserialize_struct(boost::json::object&, VkSubpassDescription&);
    

        void serialize_struct(boost::json::object&, VkSubpassDependency&);
        void deserialize_struct(boost::json::object&, VkSubpassDependency&);
    

        void serialize_struct(boost::json::object&, VkRenderPassCreateInfo&);
        void deserialize_struct(boost::json::object&, VkRenderPassCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkEventCreateInfo&);
        void deserialize_struct(boost::json::object&, VkEventCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkFenceCreateInfo&);
        void deserialize_struct(boost::json::object&, VkFenceCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceSparseProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSparseProperties&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceLimits&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceLimits&);
    

        void serialize_struct(boost::json::object&, VkSemaphoreCreateInfo&);
        void deserialize_struct(boost::json::object&, VkSemaphoreCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkQueryPoolCreateInfo&);
        void deserialize_struct(boost::json::object&, VkQueryPoolCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkFramebufferCreateInfo&);
        void deserialize_struct(boost::json::object&, VkFramebufferCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkDrawIndirectCommand&);
        void deserialize_struct(boost::json::object&, VkDrawIndirectCommand&);
    

        void serialize_struct(boost::json::object&, VkDrawIndexedIndirectCommand&);
        void deserialize_struct(boost::json::object&, VkDrawIndexedIndirectCommand&);
    

        void serialize_struct(boost::json::object&, VkDispatchIndirectCommand&);
        void deserialize_struct(boost::json::object&, VkDispatchIndirectCommand&);
    

        void serialize_struct(boost::json::object&, VkMultiDrawInfoEXT&);
        void deserialize_struct(boost::json::object&, VkMultiDrawInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkMultiDrawIndexedInfoEXT&);
        void deserialize_struct(boost::json::object&, VkMultiDrawIndexedInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkSubmitInfo&);
        void deserialize_struct(boost::json::object&, VkSubmitInfo&);
    

        void serialize_struct(boost::json::object&, VkDisplayPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkDisplayPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, VkDisplayPlanePropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkDisplayPlanePropertiesKHR&);
    

        void serialize_struct(boost::json::object&, VkDisplayModeParametersKHR&);
        void deserialize_struct(boost::json::object&, VkDisplayModeParametersKHR&);
    

        void serialize_struct(boost::json::object&, VkDisplayModePropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkDisplayModePropertiesKHR&);
    

        void serialize_struct(boost::json::object&, VkDisplayModeCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkDisplayModeCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkDisplayPlaneCapabilitiesKHR&);
        void deserialize_struct(boost::json::object&, VkDisplayPlaneCapabilitiesKHR&);
    

        void serialize_struct(boost::json::object&, VkDisplaySurfaceCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkDisplaySurfaceCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkDisplayPresentInfoKHR&);
        void deserialize_struct(boost::json::object&, VkDisplayPresentInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkSurfaceCapabilitiesKHR&);
        void deserialize_struct(boost::json::object&, VkSurfaceCapabilitiesKHR&);
    

        void serialize_struct(boost::json::object&, VkXlibSurfaceCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkXlibSurfaceCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkXcbSurfaceCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkXcbSurfaceCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkSurfaceFormatKHR&);
        void deserialize_struct(boost::json::object&, VkSurfaceFormatKHR&);
    

        void serialize_struct(boost::json::object&, VkSwapchainCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkSwapchainCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkPresentInfoKHR&);
        void deserialize_struct(boost::json::object&, VkPresentInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkDebugReportCallbackCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDebugReportCallbackCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkValidationFlagsEXT&);
        void deserialize_struct(boost::json::object&, VkValidationFlagsEXT&);
    

        void serialize_struct(boost::json::object&, VkValidationFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkValidationFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPipelineRasterizationStateRasterizationOrderAMD&);
        void deserialize_struct(boost::json::object&, VkPipelineRasterizationStateRasterizationOrderAMD&);
    

        void serialize_struct(boost::json::object&, VkDebugMarkerObjectNameInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDebugMarkerObjectNameInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkDebugMarkerObjectTagInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDebugMarkerObjectTagInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkDebugMarkerMarkerInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDebugMarkerMarkerInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkDedicatedAllocationImageCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkDedicatedAllocationImageCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkDedicatedAllocationBufferCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkDedicatedAllocationBufferCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkDedicatedAllocationMemoryAllocateInfoNV&);
        void deserialize_struct(boost::json::object&, VkDedicatedAllocationMemoryAllocateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkExternalImageFormatPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkExternalImageFormatPropertiesNV&);
    

        void serialize_struct(boost::json::object&, VkExternalMemoryImageCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkExternalMemoryImageCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkExportMemoryAllocateInfoNV&);
        void deserialize_struct(boost::json::object&, VkExportMemoryAllocateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkDevicePrivateDataCreateInfo&);
        void deserialize_struct(boost::json::object&, VkDevicePrivateDataCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkPrivateDataSlotCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPrivateDataSlotCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevicePrivateDataFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePrivateDataFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMultiDrawPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMultiDrawPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkGraphicsShaderGroupCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkGraphicsShaderGroupCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkGraphicsPipelineShaderGroupsCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkGraphicsPipelineShaderGroupsCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkBindShaderGroupIndirectCommandNV&);
        void deserialize_struct(boost::json::object&, VkBindShaderGroupIndirectCommandNV&);
    

        void serialize_struct(boost::json::object&, VkBindIndexBufferIndirectCommandNV&);
        void deserialize_struct(boost::json::object&, VkBindIndexBufferIndirectCommandNV&);
    

        void serialize_struct(boost::json::object&, VkBindVertexBufferIndirectCommandNV&);
        void deserialize_struct(boost::json::object&, VkBindVertexBufferIndirectCommandNV&);
    

        void serialize_struct(boost::json::object&, VkSetStateFlagsIndirectCommandNV&);
        void deserialize_struct(boost::json::object&, VkSetStateFlagsIndirectCommandNV&);
    

        void serialize_struct(boost::json::object&, VkIndirectCommandsStreamNV&);
        void deserialize_struct(boost::json::object&, VkIndirectCommandsStreamNV&);
    

        void serialize_struct(boost::json::object&, VkIndirectCommandsLayoutTokenNV&);
        void deserialize_struct(boost::json::object&, VkIndirectCommandsLayoutTokenNV&);
    

        void serialize_struct(boost::json::object&, VkIndirectCommandsLayoutCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkIndirectCommandsLayoutCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkGeneratedCommandsInfoNV&);
        void deserialize_struct(boost::json::object&, VkGeneratedCommandsInfoNV&);
    

        void serialize_struct(boost::json::object&, VkGeneratedCommandsMemoryRequirementsInfoNV&);
        void deserialize_struct(boost::json::object&, VkGeneratedCommandsMemoryRequirementsInfoNV&);
    

        void serialize_struct(boost::json::object&, VkPipelineIndirectDeviceAddressInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineIndirectDeviceAddressInfoNV&);
    

        void serialize_struct(boost::json::object&, VkBindPipelineIndirectCommandNV&);
        void deserialize_struct(boost::json::object&, VkBindPipelineIndirectCommandNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceFeatures2&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFeatures2&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceProperties2&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceProperties2&);
    

        void serialize_struct(boost::json::object&, VkFormatProperties2&);
        void deserialize_struct(boost::json::object&, VkFormatProperties2&);
    

        void serialize_struct(boost::json::object&, VkImageFormatProperties2&);
        void deserialize_struct(boost::json::object&, VkImageFormatProperties2&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceImageFormatInfo2&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageFormatInfo2&);
    

        void serialize_struct(boost::json::object&, VkQueueFamilyProperties2&);
        void deserialize_struct(boost::json::object&, VkQueueFamilyProperties2&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMemoryProperties2&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMemoryProperties2&);
    

        void serialize_struct(boost::json::object&, VkSparseImageFormatProperties2&);
        void deserialize_struct(boost::json::object&, VkSparseImageFormatProperties2&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceSparseImageFormatInfo2&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSparseImageFormatInfo2&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevicePushDescriptorPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePushDescriptorPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, VkConformanceVersion&);
        void deserialize_struct(boost::json::object&, VkConformanceVersion&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDriverProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDriverProperties&);
    

        void serialize_struct(boost::json::object&, VkPresentRegionsKHR&);
        void deserialize_struct(boost::json::object&, VkPresentRegionsKHR&);
    

        void serialize_struct(boost::json::object&, VkPresentRegionKHR&);
        void deserialize_struct(boost::json::object&, VkPresentRegionKHR&);
    

        void serialize_struct(boost::json::object&, VkRectLayerKHR&);
        void deserialize_struct(boost::json::object&, VkRectLayerKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceVariablePointersFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVariablePointersFeatures&);
    

        void serialize_struct(boost::json::object&, VkExternalMemoryProperties&);
        void deserialize_struct(boost::json::object&, VkExternalMemoryProperties&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceExternalImageFormatInfo&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExternalImageFormatInfo&);
    

        void serialize_struct(boost::json::object&, VkExternalImageFormatProperties&);
        void deserialize_struct(boost::json::object&, VkExternalImageFormatProperties&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceExternalBufferInfo&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExternalBufferInfo&);
    

        void serialize_struct(boost::json::object&, VkExternalBufferProperties&);
        void deserialize_struct(boost::json::object&, VkExternalBufferProperties&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceIDProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceIDProperties&);
    

        void serialize_struct(boost::json::object&, VkExternalMemoryImageCreateInfo&);
        void deserialize_struct(boost::json::object&, VkExternalMemoryImageCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkExternalMemoryBufferCreateInfo&);
        void deserialize_struct(boost::json::object&, VkExternalMemoryBufferCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkExportMemoryAllocateInfo&);
        void deserialize_struct(boost::json::object&, VkExportMemoryAllocateInfo&);
    

        void serialize_struct(boost::json::object&, VkImportMemoryFdInfoKHR&);
        void deserialize_struct(boost::json::object&, VkImportMemoryFdInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkMemoryFdPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkMemoryFdPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, VkMemoryGetFdInfoKHR&);
        void deserialize_struct(boost::json::object&, VkMemoryGetFdInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceExternalSemaphoreInfo&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExternalSemaphoreInfo&);
    

        void serialize_struct(boost::json::object&, VkExternalSemaphoreProperties&);
        void deserialize_struct(boost::json::object&, VkExternalSemaphoreProperties&);
    

        void serialize_struct(boost::json::object&, VkExportSemaphoreCreateInfo&);
        void deserialize_struct(boost::json::object&, VkExportSemaphoreCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkImportSemaphoreFdInfoKHR&);
        void deserialize_struct(boost::json::object&, VkImportSemaphoreFdInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkSemaphoreGetFdInfoKHR&);
        void deserialize_struct(boost::json::object&, VkSemaphoreGetFdInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceExternalFenceInfo&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExternalFenceInfo&);
    

        void serialize_struct(boost::json::object&, VkExternalFenceProperties&);
        void deserialize_struct(boost::json::object&, VkExternalFenceProperties&);
    

        void serialize_struct(boost::json::object&, VkExportFenceCreateInfo&);
        void deserialize_struct(boost::json::object&, VkExportFenceCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkImportFenceFdInfoKHR&);
        void deserialize_struct(boost::json::object&, VkImportFenceFdInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkFenceGetFdInfoKHR&);
        void deserialize_struct(boost::json::object&, VkFenceGetFdInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMultiviewFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMultiviewFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMultiviewProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMultiviewProperties&);
    

        void serialize_struct(boost::json::object&, VkRenderPassMultiviewCreateInfo&);
        void deserialize_struct(boost::json::object&, VkRenderPassMultiviewCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkSurfaceCapabilities2EXT&);
        void deserialize_struct(boost::json::object&, VkSurfaceCapabilities2EXT&);
    

        void serialize_struct(boost::json::object&, VkDisplayPowerInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDisplayPowerInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkDeviceEventInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDeviceEventInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkDisplayEventInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDisplayEventInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkSwapchainCounterCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkSwapchainCounterCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceGroupProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceGroupProperties&);
    

        void serialize_struct(boost::json::object&, VkMemoryAllocateFlagsInfo&);
        void deserialize_struct(boost::json::object&, VkMemoryAllocateFlagsInfo&);
    

        void serialize_struct(boost::json::object&, VkBindBufferMemoryInfo&);
        void deserialize_struct(boost::json::object&, VkBindBufferMemoryInfo&);
    

        void serialize_struct(boost::json::object&, VkBindBufferMemoryDeviceGroupInfo&);
        void deserialize_struct(boost::json::object&, VkBindBufferMemoryDeviceGroupInfo&);
    

        void serialize_struct(boost::json::object&, VkBindImageMemoryInfo&);
        void deserialize_struct(boost::json::object&, VkBindImageMemoryInfo&);
    

        void serialize_struct(boost::json::object&, VkBindImageMemoryDeviceGroupInfo&);
        void deserialize_struct(boost::json::object&, VkBindImageMemoryDeviceGroupInfo&);
    

        void serialize_struct(boost::json::object&, VkDeviceGroupRenderPassBeginInfo&);
        void deserialize_struct(boost::json::object&, VkDeviceGroupRenderPassBeginInfo&);
    

        void serialize_struct(boost::json::object&, VkDeviceGroupCommandBufferBeginInfo&);
        void deserialize_struct(boost::json::object&, VkDeviceGroupCommandBufferBeginInfo&);
    

        void serialize_struct(boost::json::object&, VkDeviceGroupSubmitInfo&);
        void deserialize_struct(boost::json::object&, VkDeviceGroupSubmitInfo&);
    

        void serialize_struct(boost::json::object&, VkDeviceGroupBindSparseInfo&);
        void deserialize_struct(boost::json::object&, VkDeviceGroupBindSparseInfo&);
    

        void serialize_struct(boost::json::object&, VkDeviceGroupPresentCapabilitiesKHR&);
        void deserialize_struct(boost::json::object&, VkDeviceGroupPresentCapabilitiesKHR&);
    

        void serialize_struct(boost::json::object&, VkImageSwapchainCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkImageSwapchainCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkBindImageMemorySwapchainInfoKHR&);
        void deserialize_struct(boost::json::object&, VkBindImageMemorySwapchainInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkAcquireNextImageInfoKHR&);
        void deserialize_struct(boost::json::object&, VkAcquireNextImageInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkDeviceGroupPresentInfoKHR&);
        void deserialize_struct(boost::json::object&, VkDeviceGroupPresentInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkDeviceGroupDeviceCreateInfo&);
        void deserialize_struct(boost::json::object&, VkDeviceGroupDeviceCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkDeviceGroupSwapchainCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkDeviceGroupSwapchainCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkDescriptorUpdateTemplateEntry&);
        void deserialize_struct(boost::json::object&, VkDescriptorUpdateTemplateEntry&);
    

        void serialize_struct(boost::json::object&, VkDescriptorUpdateTemplateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkDescriptorUpdateTemplateCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkXYColorEXT&);
        void deserialize_struct(boost::json::object&, VkXYColorEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevicePresentIdFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePresentIdFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, VkPresentIdKHR&);
        void deserialize_struct(boost::json::object&, VkPresentIdKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevicePresentWaitFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePresentWaitFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, VkHdrMetadataEXT&);
        void deserialize_struct(boost::json::object&, VkHdrMetadataEXT&);
    

        void serialize_struct(boost::json::object&, VkDisplayNativeHdrSurfaceCapabilitiesAMD&);
        void deserialize_struct(boost::json::object&, VkDisplayNativeHdrSurfaceCapabilitiesAMD&);
    

        void serialize_struct(boost::json::object&, VkSwapchainDisplayNativeHdrCreateInfoAMD&);
        void deserialize_struct(boost::json::object&, VkSwapchainDisplayNativeHdrCreateInfoAMD&);
    

        void serialize_struct(boost::json::object&, VkRefreshCycleDurationGOOGLE&);
        void deserialize_struct(boost::json::object&, VkRefreshCycleDurationGOOGLE&);
    

        void serialize_struct(boost::json::object&, VkPastPresentationTimingGOOGLE&);
        void deserialize_struct(boost::json::object&, VkPastPresentationTimingGOOGLE&);
    

        void serialize_struct(boost::json::object&, VkPresentTimesInfoGOOGLE&);
        void deserialize_struct(boost::json::object&, VkPresentTimesInfoGOOGLE&);
    

        void serialize_struct(boost::json::object&, VkPresentTimeGOOGLE&);
        void deserialize_struct(boost::json::object&, VkPresentTimeGOOGLE&);
    

        void serialize_struct(boost::json::object&, VkViewportWScalingNV&);
        void deserialize_struct(boost::json::object&, VkViewportWScalingNV&);
    

        void serialize_struct(boost::json::object&, VkPipelineViewportWScalingStateCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineViewportWScalingStateCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkViewportSwizzleNV&);
        void deserialize_struct(boost::json::object&, VkViewportSwizzleNV&);
    

        void serialize_struct(boost::json::object&, VkPipelineViewportSwizzleStateCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineViewportSwizzleStateCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDiscardRectanglePropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDiscardRectanglePropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkPipelineDiscardRectangleStateCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineDiscardRectangleStateCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX&);
    

        void serialize_struct(boost::json::object&, VkInputAttachmentAspectReference&);
        void deserialize_struct(boost::json::object&, VkInputAttachmentAspectReference&);
    

        void serialize_struct(boost::json::object&, VkRenderPassInputAttachmentAspectCreateInfo&);
        void deserialize_struct(boost::json::object&, VkRenderPassInputAttachmentAspectCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceSurfaceInfo2KHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSurfaceInfo2KHR&);
    

        void serialize_struct(boost::json::object&, VkSurfaceCapabilities2KHR&);
        void deserialize_struct(boost::json::object&, VkSurfaceCapabilities2KHR&);
    

        void serialize_struct(boost::json::object&, VkSurfaceFormat2KHR&);
        void deserialize_struct(boost::json::object&, VkSurfaceFormat2KHR&);
    

        void serialize_struct(boost::json::object&, VkDisplayProperties2KHR&);
        void deserialize_struct(boost::json::object&, VkDisplayProperties2KHR&);
    

        void serialize_struct(boost::json::object&, VkDisplayPlaneProperties2KHR&);
        void deserialize_struct(boost::json::object&, VkDisplayPlaneProperties2KHR&);
    

        void serialize_struct(boost::json::object&, VkDisplayModeProperties2KHR&);
        void deserialize_struct(boost::json::object&, VkDisplayModeProperties2KHR&);
    

        void serialize_struct(boost::json::object&, VkDisplayPlaneInfo2KHR&);
        void deserialize_struct(boost::json::object&, VkDisplayPlaneInfo2KHR&);
    

        void serialize_struct(boost::json::object&, VkDisplayPlaneCapabilities2KHR&);
        void deserialize_struct(boost::json::object&, VkDisplayPlaneCapabilities2KHR&);
    

        void serialize_struct(boost::json::object&, VkSharedPresentSurfaceCapabilitiesKHR&);
        void deserialize_struct(boost::json::object&, VkSharedPresentSurfaceCapabilitiesKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevice16BitStorageFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevice16BitStorageFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceSubgroupProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSubgroupProperties&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures&);
    

        void serialize_struct(boost::json::object&, VkBufferMemoryRequirementsInfo2&);
        void deserialize_struct(boost::json::object&, VkBufferMemoryRequirementsInfo2&);
    

        void serialize_struct(boost::json::object&, VkDeviceBufferMemoryRequirements&);
        void deserialize_struct(boost::json::object&, VkDeviceBufferMemoryRequirements&);
    

        void serialize_struct(boost::json::object&, VkImageMemoryRequirementsInfo2&);
        void deserialize_struct(boost::json::object&, VkImageMemoryRequirementsInfo2&);
    

        void serialize_struct(boost::json::object&, VkImageSparseMemoryRequirementsInfo2&);
        void deserialize_struct(boost::json::object&, VkImageSparseMemoryRequirementsInfo2&);
    

        void serialize_struct(boost::json::object&, VkDeviceImageMemoryRequirements&);
        void deserialize_struct(boost::json::object&, VkDeviceImageMemoryRequirements&);
    

        void serialize_struct(boost::json::object&, VkMemoryRequirements2&);
        void deserialize_struct(boost::json::object&, VkMemoryRequirements2&);
    

        void serialize_struct(boost::json::object&, VkSparseImageMemoryRequirements2&);
        void deserialize_struct(boost::json::object&, VkSparseImageMemoryRequirements2&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevicePointClippingProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePointClippingProperties&);
    

        void serialize_struct(boost::json::object&, VkMemoryDedicatedRequirements&);
        void deserialize_struct(boost::json::object&, VkMemoryDedicatedRequirements&);
    

        void serialize_struct(boost::json::object&, VkMemoryDedicatedAllocateInfo&);
        void deserialize_struct(boost::json::object&, VkMemoryDedicatedAllocateInfo&);
    

        void serialize_struct(boost::json::object&, VkImageViewUsageCreateInfo&);
        void deserialize_struct(boost::json::object&, VkImageViewUsageCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkImageViewSlicedCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkImageViewSlicedCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPipelineTessellationDomainOriginStateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineTessellationDomainOriginStateCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkSamplerYcbcrConversionInfo&);
        void deserialize_struct(boost::json::object&, VkSamplerYcbcrConversionInfo&);
    

        void serialize_struct(boost::json::object&, VkSamplerYcbcrConversionCreateInfo&);
        void deserialize_struct(boost::json::object&, VkSamplerYcbcrConversionCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkBindImagePlaneMemoryInfo&);
        void deserialize_struct(boost::json::object&, VkBindImagePlaneMemoryInfo&);
    

        void serialize_struct(boost::json::object&, VkImagePlaneMemoryRequirementsInfo&);
        void deserialize_struct(boost::json::object&, VkImagePlaneMemoryRequirementsInfo&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceSamplerYcbcrConversionFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSamplerYcbcrConversionFeatures&);
    

        void serialize_struct(boost::json::object&, VkSamplerYcbcrConversionImageFormatProperties&);
        void deserialize_struct(boost::json::object&, VkSamplerYcbcrConversionImageFormatProperties&);
    

        void serialize_struct(boost::json::object&, VkTextureLODGatherFormatPropertiesAMD&);
        void deserialize_struct(boost::json::object&, VkTextureLODGatherFormatPropertiesAMD&);
    

        void serialize_struct(boost::json::object&, VkConditionalRenderingBeginInfoEXT&);
        void deserialize_struct(boost::json::object&, VkConditionalRenderingBeginInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkProtectedSubmitInfo&);
        void deserialize_struct(boost::json::object&, VkProtectedSubmitInfo&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceProtectedMemoryFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceProtectedMemoryFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceProtectedMemoryProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceProtectedMemoryProperties&);
    

        void serialize_struct(boost::json::object&, VkDeviceQueueInfo2&);
        void deserialize_struct(boost::json::object&, VkDeviceQueueInfo2&);
    

        void serialize_struct(boost::json::object&, VkPipelineCoverageToColorStateCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineCoverageToColorStateCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceSamplerFilterMinmaxProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSamplerFilterMinmaxProperties&);
    

        void serialize_struct(boost::json::object&, VkSampleLocationEXT&);
        void deserialize_struct(boost::json::object&, VkSampleLocationEXT&);
    

        void serialize_struct(boost::json::object&, VkSampleLocationsInfoEXT&);
        void deserialize_struct(boost::json::object&, VkSampleLocationsInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkAttachmentSampleLocationsEXT&);
        void deserialize_struct(boost::json::object&, VkAttachmentSampleLocationsEXT&);
    

        void serialize_struct(boost::json::object&, VkSubpassSampleLocationsEXT&);
        void deserialize_struct(boost::json::object&, VkSubpassSampleLocationsEXT&);
    

        void serialize_struct(boost::json::object&, VkRenderPassSampleLocationsBeginInfoEXT&);
        void deserialize_struct(boost::json::object&, VkRenderPassSampleLocationsBeginInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPipelineSampleLocationsStateCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineSampleLocationsStateCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceSampleLocationsPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSampleLocationsPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkMultisamplePropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkMultisamplePropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkSamplerReductionModeCreateInfo&);
        void deserialize_struct(boost::json::object&, VkSamplerReductionModeCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMultiDrawFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMultiDrawFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkPipelineColorBlendAdvancedStateCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineColorBlendAdvancedStateCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceInlineUniformBlockFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceInlineUniformBlockFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceInlineUniformBlockProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceInlineUniformBlockProperties&);
    

        void serialize_struct(boost::json::object&, VkWriteDescriptorSetInlineUniformBlock&);
        void deserialize_struct(boost::json::object&, VkWriteDescriptorSetInlineUniformBlock&);
    

        void serialize_struct(boost::json::object&, VkDescriptorPoolInlineUniformBlockCreateInfo&);
        void deserialize_struct(boost::json::object&, VkDescriptorPoolInlineUniformBlockCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkPipelineCoverageModulationStateCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineCoverageModulationStateCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkImageFormatListCreateInfo&);
        void deserialize_struct(boost::json::object&, VkImageFormatListCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkValidationCacheCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkValidationCacheCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkShaderModuleValidationCacheCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkShaderModuleValidationCacheCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMaintenance3Properties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMaintenance3Properties&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMaintenance4Features&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMaintenance4Features&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMaintenance4Properties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMaintenance4Properties&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMaintenance5FeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMaintenance5FeaturesKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMaintenance5PropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMaintenance5PropertiesKHR&);
    

        void serialize_struct(boost::json::object&, VkRenderingAreaInfoKHR&);
        void deserialize_struct(boost::json::object&, VkRenderingAreaInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkDescriptorSetLayoutSupport&);
        void deserialize_struct(boost::json::object&, VkDescriptorSetLayoutSupport&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderDrawParametersFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderDrawParametersFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderFloat16Int8Features&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderFloat16Int8Features&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceFloatControlsProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFloatControlsProperties&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceHostQueryResetFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceHostQueryResetFeatures&);
    

        void serialize_struct(boost::json::object&, VkShaderResourceUsageAMD&);
        void deserialize_struct(boost::json::object&, VkShaderResourceUsageAMD&);
    

        void serialize_struct(boost::json::object&, VkShaderStatisticsInfoAMD&);
        void deserialize_struct(boost::json::object&, VkShaderStatisticsInfoAMD&);
    

        void serialize_struct(boost::json::object&, VkDeviceQueueGlobalPriorityCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkDeviceQueueGlobalPriorityCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, VkQueueFamilyGlobalPriorityPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkQueueFamilyGlobalPriorityPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, VkDebugUtilsObjectNameInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDebugUtilsObjectNameInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkDebugUtilsObjectTagInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDebugUtilsObjectTagInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkDebugUtilsLabelEXT&);
        void deserialize_struct(boost::json::object&, VkDebugUtilsLabelEXT&);
    

        void serialize_struct(boost::json::object&, VkDebugUtilsMessengerCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDebugUtilsMessengerCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkDebugUtilsMessengerCallbackDataEXT&);
        void deserialize_struct(boost::json::object&, VkDebugUtilsMessengerCallbackDataEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDeviceMemoryReportFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDeviceMemoryReportFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkDeviceDeviceMemoryReportCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDeviceDeviceMemoryReportCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkDeviceMemoryReportCallbackDataEXT&);
        void deserialize_struct(boost::json::object&, VkDeviceMemoryReportCallbackDataEXT&);
    

        void serialize_struct(boost::json::object&, VkImportMemoryHostPointerInfoEXT&);
        void deserialize_struct(boost::json::object&, VkImportMemoryHostPointerInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkMemoryHostPointerPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkMemoryHostPointerPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceExternalMemoryHostPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExternalMemoryHostPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceConservativeRasterizationPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceConservativeRasterizationPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkCalibratedTimestampInfoEXT&);
        void deserialize_struct(boost::json::object&, VkCalibratedTimestampInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderCorePropertiesAMD&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderCorePropertiesAMD&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderCoreProperties2AMD&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderCoreProperties2AMD&);
    

        void serialize_struct(boost::json::object&, VkPipelineRasterizationConservativeStateCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineRasterizationConservativeStateCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorIndexingFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorIndexingFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorIndexingProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorIndexingProperties&);
    

        void serialize_struct(boost::json::object&, VkDescriptorSetLayoutBindingFlagsCreateInfo&);
        void deserialize_struct(boost::json::object&, VkDescriptorSetLayoutBindingFlagsCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkDescriptorSetVariableDescriptorCountAllocateInfo&);
        void deserialize_struct(boost::json::object&, VkDescriptorSetVariableDescriptorCountAllocateInfo&);
    

        void serialize_struct(boost::json::object&, VkDescriptorSetVariableDescriptorCountLayoutSupport&);
        void deserialize_struct(boost::json::object&, VkDescriptorSetVariableDescriptorCountLayoutSupport&);
    

        void serialize_struct(boost::json::object&, VkAttachmentDescription2&);
        void deserialize_struct(boost::json::object&, VkAttachmentDescription2&);
    

        void serialize_struct(boost::json::object&, VkAttachmentReference2&);
        void deserialize_struct(boost::json::object&, VkAttachmentReference2&);
    

        void serialize_struct(boost::json::object&, VkSubpassDescription2&);
        void deserialize_struct(boost::json::object&, VkSubpassDescription2&);
    

        void serialize_struct(boost::json::object&, VkSubpassDependency2&);
        void deserialize_struct(boost::json::object&, VkSubpassDependency2&);
    

        void serialize_struct(boost::json::object&, VkRenderPassCreateInfo2&);
        void deserialize_struct(boost::json::object&, VkRenderPassCreateInfo2&);
    

        void serialize_struct(boost::json::object&, VkSubpassBeginInfo&);
        void deserialize_struct(boost::json::object&, VkSubpassBeginInfo&);
    

        void serialize_struct(boost::json::object&, VkSubpassEndInfo&);
        void deserialize_struct(boost::json::object&, VkSubpassEndInfo&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceTimelineSemaphoreFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceTimelineSemaphoreFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceTimelineSemaphoreProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceTimelineSemaphoreProperties&);
    

        void serialize_struct(boost::json::object&, VkSemaphoreTypeCreateInfo&);
        void deserialize_struct(boost::json::object&, VkSemaphoreTypeCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkTimelineSemaphoreSubmitInfo&);
        void deserialize_struct(boost::json::object&, VkTimelineSemaphoreSubmitInfo&);
    

        void serialize_struct(boost::json::object&, VkSemaphoreWaitInfo&);
        void deserialize_struct(boost::json::object&, VkSemaphoreWaitInfo&);
    

        void serialize_struct(boost::json::object&, VkSemaphoreSignalInfo&);
        void deserialize_struct(boost::json::object&, VkSemaphoreSignalInfo&);
    

        void serialize_struct(boost::json::object&, VkVertexInputBindingDivisorDescriptionEXT&);
        void deserialize_struct(boost::json::object&, VkVertexInputBindingDivisorDescriptionEXT&);
    

        void serialize_struct(boost::json::object&, VkPipelineVertexInputDivisorStateCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineVertexInputDivisorStateCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevicePCIBusInfoPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePCIBusInfoPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkCommandBufferInheritanceConditionalRenderingInfoEXT&);
        void deserialize_struct(boost::json::object&, VkCommandBufferInheritanceConditionalRenderingInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevice8BitStorageFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevice8BitStorageFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceConditionalRenderingFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceConditionalRenderingFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceVulkanMemoryModelFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVulkanMemoryModelFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderAtomicInt64Features&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderAtomicInt64Features&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderAtomicFloatFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderAtomicFloatFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkQueueFamilyCheckpointPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkQueueFamilyCheckpointPropertiesNV&);
    

        void serialize_struct(boost::json::object&, VkCheckpointDataNV&);
        void deserialize_struct(boost::json::object&, VkCheckpointDataNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDepthStencilResolveProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDepthStencilResolveProperties&);
    

        void serialize_struct(boost::json::object&, VkSubpassDescriptionDepthStencilResolve&);
        void deserialize_struct(boost::json::object&, VkSubpassDescriptionDepthStencilResolve&);
    

        void serialize_struct(boost::json::object&, VkImageViewASTCDecodeModeEXT&);
        void deserialize_struct(boost::json::object&, VkImageViewASTCDecodeModeEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceASTCDecodeFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceASTCDecodeFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceTransformFeedbackFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceTransformFeedbackFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceTransformFeedbackPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceTransformFeedbackPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkPipelineRasterizationStateStreamCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineRasterizationStateStreamCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkPipelineRepresentativeFragmentTestStateCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineRepresentativeFragmentTestStateCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceExclusiveScissorFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExclusiveScissorFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkPipelineViewportExclusiveScissorStateCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineViewportExclusiveScissorStateCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceCornerSampledImageFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCornerSampledImageFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceComputeShaderDerivativesFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceComputeShaderDerivativesFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderImageFootprintFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderImageFootprintFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceCopyMemoryIndirectFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCopyMemoryIndirectFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceCopyMemoryIndirectPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCopyMemoryIndirectPropertiesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMemoryDecompressionFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMemoryDecompressionFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMemoryDecompressionPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMemoryDecompressionPropertiesNV&);
    

        void serialize_struct(boost::json::object&, VkShadingRatePaletteNV&);
        void deserialize_struct(boost::json::object&, VkShadingRatePaletteNV&);
    

        void serialize_struct(boost::json::object&, VkPipelineViewportShadingRateImageStateCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineViewportShadingRateImageStateCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShadingRateImageFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShadingRateImageFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShadingRateImagePropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShadingRateImagePropertiesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceInvocationMaskFeaturesHUAWEI&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceInvocationMaskFeaturesHUAWEI&);
    

        void serialize_struct(boost::json::object&, VkCoarseSampleLocationNV&);
        void deserialize_struct(boost::json::object&, VkCoarseSampleLocationNV&);
    

        void serialize_struct(boost::json::object&, VkCoarseSampleOrderCustomNV&);
        void deserialize_struct(boost::json::object&, VkCoarseSampleOrderCustomNV&);
    

        void serialize_struct(boost::json::object&, VkPipelineViewportCoarseSampleOrderStateCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineViewportCoarseSampleOrderStateCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMeshShaderFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMeshShaderFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMeshShaderPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMeshShaderPropertiesNV&);
    

        void serialize_struct(boost::json::object&, VkDrawMeshTasksIndirectCommandNV&);
        void deserialize_struct(boost::json::object&, VkDrawMeshTasksIndirectCommandNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMeshShaderFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMeshShaderFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMeshShaderPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMeshShaderPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkDrawMeshTasksIndirectCommandEXT&);
        void deserialize_struct(boost::json::object&, VkDrawMeshTasksIndirectCommandEXT&);
    

        void serialize_struct(boost::json::object&, VkRayTracingShaderGroupCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkRayTracingShaderGroupCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkRayTracingShaderGroupCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkRayTracingShaderGroupCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkRayTracingPipelineCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkRayTracingPipelineCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkRayTracingPipelineCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkRayTracingPipelineCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkGeometryTrianglesNV&);
        void deserialize_struct(boost::json::object&, VkGeometryTrianglesNV&);
    

        void serialize_struct(boost::json::object&, VkGeometryAABBNV&);
        void deserialize_struct(boost::json::object&, VkGeometryAABBNV&);
    

        void serialize_struct(boost::json::object&, VkGeometryDataNV&);
        void deserialize_struct(boost::json::object&, VkGeometryDataNV&);
    

        void serialize_struct(boost::json::object&, VkGeometryNV&);
        void deserialize_struct(boost::json::object&, VkGeometryNV&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureInfoNV&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureInfoNV&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkBindAccelerationStructureMemoryInfoNV&);
        void deserialize_struct(boost::json::object&, VkBindAccelerationStructureMemoryInfoNV&);
    

        void serialize_struct(boost::json::object&, VkWriteDescriptorSetAccelerationStructureKHR&);
        void deserialize_struct(boost::json::object&, VkWriteDescriptorSetAccelerationStructureKHR&);
    

        void serialize_struct(boost::json::object&, VkWriteDescriptorSetAccelerationStructureNV&);
        void deserialize_struct(boost::json::object&, VkWriteDescriptorSetAccelerationStructureNV&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureMemoryRequirementsInfoNV&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureMemoryRequirementsInfoNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceAccelerationStructureFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceAccelerationStructureFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingPipelineFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingPipelineFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceRayQueryFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRayQueryFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceAccelerationStructurePropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceAccelerationStructurePropertiesKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingPipelinePropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingPipelinePropertiesKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingPropertiesNV&);
    

        void serialize_struct(boost::json::object&, VkStridedDeviceAddressRegionKHR&);
        void deserialize_struct(boost::json::object&, VkStridedDeviceAddressRegionKHR&);
    

        void serialize_struct(boost::json::object&, VkTraceRaysIndirectCommandKHR&);
        void deserialize_struct(boost::json::object&, VkTraceRaysIndirectCommandKHR&);
    

        void serialize_struct(boost::json::object&, VkTraceRaysIndirectCommand2KHR&);
        void deserialize_struct(boost::json::object&, VkTraceRaysIndirectCommand2KHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR&);
    

        void serialize_struct(boost::json::object&, VkDrmFormatModifierPropertiesListEXT&);
        void deserialize_struct(boost::json::object&, VkDrmFormatModifierPropertiesListEXT&);
    

        void serialize_struct(boost::json::object&, VkDrmFormatModifierPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkDrmFormatModifierPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceImageDrmFormatModifierInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageDrmFormatModifierInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkImageDrmFormatModifierListCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkImageDrmFormatModifierListCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkImageDrmFormatModifierExplicitCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkImageDrmFormatModifierExplicitCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkImageDrmFormatModifierPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkImageDrmFormatModifierPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkImageStencilUsageCreateInfo&);
        void deserialize_struct(boost::json::object&, VkImageStencilUsageCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkDeviceMemoryOverallocationCreateInfoAMD&);
        void deserialize_struct(boost::json::object&, VkDeviceMemoryOverallocationCreateInfoAMD&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceFragmentDensityMapFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentDensityMapFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceFragmentDensityMap2FeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentDensityMap2FeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceFragmentDensityMapPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentDensityMapPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceFragmentDensityMap2PropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentDensityMap2PropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM&);
    

        void serialize_struct(boost::json::object&, VkRenderPassFragmentDensityMapCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkRenderPassFragmentDensityMapCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkSubpassFragmentDensityMapOffsetEndInfoQCOM&);
        void deserialize_struct(boost::json::object&, VkSubpassFragmentDensityMapOffsetEndInfoQCOM&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceScalarBlockLayoutFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceScalarBlockLayoutFeatures&);
    

        void serialize_struct(boost::json::object&, VkSurfaceProtectedCapabilitiesKHR&);
        void deserialize_struct(boost::json::object&, VkSurfaceProtectedCapabilitiesKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceUniformBufferStandardLayoutFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceUniformBufferStandardLayoutFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDepthClipEnableFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDepthClipEnableFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPipelineRasterizationDepthClipStateCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineRasterizationDepthClipStateCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMemoryBudgetPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMemoryBudgetPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMemoryPriorityFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMemoryPriorityFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkMemoryPriorityAllocateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkMemoryPriorityAllocateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceBufferDeviceAddressFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceBufferDeviceAddressFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceBufferDeviceAddressFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceBufferDeviceAddressFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkBufferDeviceAddressInfo&);
        void deserialize_struct(boost::json::object&, VkBufferDeviceAddressInfo&);
    

        void serialize_struct(boost::json::object&, VkBufferOpaqueCaptureAddressCreateInfo&);
        void deserialize_struct(boost::json::object&, VkBufferOpaqueCaptureAddressCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkBufferDeviceAddressCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkBufferDeviceAddressCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceImageViewImageFormatInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageViewImageFormatInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkFilterCubicImageViewImageFormatPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkFilterCubicImageViewImageFormatPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceImagelessFramebufferFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImagelessFramebufferFeatures&);
    

        void serialize_struct(boost::json::object&, VkFramebufferAttachmentsCreateInfo&);
        void deserialize_struct(boost::json::object&, VkFramebufferAttachmentsCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkFramebufferAttachmentImageInfo&);
        void deserialize_struct(boost::json::object&, VkFramebufferAttachmentImageInfo&);
    

        void serialize_struct(boost::json::object&, VkRenderPassAttachmentBeginInfo&);
        void deserialize_struct(boost::json::object&, VkRenderPassAttachmentBeginInfo&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceTextureCompressionASTCHDRFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceTextureCompressionASTCHDRFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceCooperativeMatrixFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCooperativeMatrixFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceCooperativeMatrixPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCooperativeMatrixPropertiesNV&);
    

        void serialize_struct(boost::json::object&, VkCooperativeMatrixPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkCooperativeMatrixPropertiesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceYcbcrImageArraysFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceYcbcrImageArraysFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkImageViewHandleInfoNVX&);
        void deserialize_struct(boost::json::object&, VkImageViewHandleInfoNVX&);
    

        void serialize_struct(boost::json::object&, VkImageViewAddressPropertiesNVX&);
        void deserialize_struct(boost::json::object&, VkImageViewAddressPropertiesNVX&);
    

        void serialize_struct(boost::json::object&, VkPipelineCreationFeedback&);
        void deserialize_struct(boost::json::object&, VkPipelineCreationFeedback&);
    

        void serialize_struct(boost::json::object&, VkPipelineCreationFeedbackCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineCreationFeedbackCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevicePresentBarrierFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePresentBarrierFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkSurfaceCapabilitiesPresentBarrierNV&);
        void deserialize_struct(boost::json::object&, VkSurfaceCapabilitiesPresentBarrierNV&);
    

        void serialize_struct(boost::json::object&, VkSwapchainPresentBarrierCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkSwapchainPresentBarrierCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevicePerformanceQueryFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePerformanceQueryFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevicePerformanceQueryPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePerformanceQueryPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, VkPerformanceCounterKHR&);
        void deserialize_struct(boost::json::object&, VkPerformanceCounterKHR&);
    

        void serialize_struct(boost::json::object&, VkPerformanceCounterDescriptionKHR&);
        void deserialize_struct(boost::json::object&, VkPerformanceCounterDescriptionKHR&);
    

        void serialize_struct(boost::json::object&, VkQueryPoolPerformanceCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkQueryPoolPerformanceCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkPerformanceCounterResultKHR&);
        void deserialize_struct(boost::json::object&, VkPerformanceCounterResultKHR&);
    

        void serialize_struct(boost::json::object&, VkAcquireProfilingLockInfoKHR&);
        void deserialize_struct(boost::json::object&, VkAcquireProfilingLockInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkPerformanceQuerySubmitInfoKHR&);
        void deserialize_struct(boost::json::object&, VkPerformanceQuerySubmitInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkHeadlessSurfaceCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkHeadlessSurfaceCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceCoverageReductionModeFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCoverageReductionModeFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkPipelineCoverageReductionStateCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineCoverageReductionStateCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkFramebufferMixedSamplesCombinationNV&);
        void deserialize_struct(boost::json::object&, VkFramebufferMixedSamplesCombinationNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL&);
    

        void serialize_struct(boost::json::object&, VkPerformanceValueDataINTEL&);
        void deserialize_struct(boost::json::object&, VkPerformanceValueDataINTEL&);
    

        void serialize_struct(boost::json::object&, VkPerformanceValueINTEL&);
        void deserialize_struct(boost::json::object&, VkPerformanceValueINTEL&);
    

        void serialize_struct(boost::json::object&, VkInitializePerformanceApiInfoINTEL&);
        void deserialize_struct(boost::json::object&, VkInitializePerformanceApiInfoINTEL&);
    

        void serialize_struct(boost::json::object&, VkQueryPoolPerformanceQueryCreateInfoINTEL&);
        void deserialize_struct(boost::json::object&, VkQueryPoolPerformanceQueryCreateInfoINTEL&);
    

        void serialize_struct(boost::json::object&, VkPerformanceMarkerInfoINTEL&);
        void deserialize_struct(boost::json::object&, VkPerformanceMarkerInfoINTEL&);
    

        void serialize_struct(boost::json::object&, VkPerformanceStreamMarkerInfoINTEL&);
        void deserialize_struct(boost::json::object&, VkPerformanceStreamMarkerInfoINTEL&);
    

        void serialize_struct(boost::json::object&, VkPerformanceOverrideInfoINTEL&);
        void deserialize_struct(boost::json::object&, VkPerformanceOverrideInfoINTEL&);
    

        void serialize_struct(boost::json::object&, VkPerformanceConfigurationAcquireInfoINTEL&);
        void deserialize_struct(boost::json::object&, VkPerformanceConfigurationAcquireInfoINTEL&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderClockFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderClockFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceIndexTypeUint8FeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceIndexTypeUint8FeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderSMBuiltinsPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderSMBuiltinsPropertiesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderSMBuiltinsFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderSMBuiltinsFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures&);
    

        void serialize_struct(boost::json::object&, VkAttachmentReferenceStencilLayout&);
        void deserialize_struct(boost::json::object&, VkAttachmentReferenceStencilLayout&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkAttachmentDescriptionStencilLayout&);
        void deserialize_struct(boost::json::object&, VkAttachmentDescriptionStencilLayout&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, VkPipelineInfoKHR&);
        void deserialize_struct(boost::json::object&, VkPipelineInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkPipelineExecutablePropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkPipelineExecutablePropertiesKHR&);
    

        void serialize_struct(boost::json::object&, VkPipelineExecutableInfoKHR&);
        void deserialize_struct(boost::json::object&, VkPipelineExecutableInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkPipelineExecutableStatisticValueKHR&);
        void deserialize_struct(boost::json::object&, VkPipelineExecutableStatisticValueKHR&);
    

        void serialize_struct(boost::json::object&, VkPipelineExecutableStatisticKHR&);
        void deserialize_struct(boost::json::object&, VkPipelineExecutableStatisticKHR&);
    

        void serialize_struct(boost::json::object&, VkPipelineExecutableInternalRepresentationKHR&);
        void deserialize_struct(boost::json::object&, VkPipelineExecutableInternalRepresentationKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceTexelBufferAlignmentProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceTexelBufferAlignmentProperties&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceSubgroupSizeControlFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSubgroupSizeControlFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceSubgroupSizeControlProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSubgroupSizeControlProperties&);
    

        void serialize_struct(boost::json::object&, VkPipelineShaderStageRequiredSubgroupSizeCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineShaderStageRequiredSubgroupSizeCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkSubpassShadingPipelineCreateInfoHUAWEI&);
        void deserialize_struct(boost::json::object&, VkSubpassShadingPipelineCreateInfoHUAWEI&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceSubpassShadingPropertiesHUAWEI&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSubpassShadingPropertiesHUAWEI&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI&);
    

        void serialize_struct(boost::json::object&, VkMemoryOpaqueCaptureAddressAllocateInfo&);
        void deserialize_struct(boost::json::object&, VkMemoryOpaqueCaptureAddressAllocateInfo&);
    

        void serialize_struct(boost::json::object&, VkDeviceMemoryOpaqueCaptureAddressInfo&);
        void deserialize_struct(boost::json::object&, VkDeviceMemoryOpaqueCaptureAddressInfo&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceLineRasterizationFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceLineRasterizationFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceLineRasterizationPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceLineRasterizationPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkPipelineRasterizationLineStateCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineRasterizationLineStateCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevicePipelineCreationCacheControlFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePipelineCreationCacheControlFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceVulkan11Features&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVulkan11Features&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceVulkan11Properties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVulkan11Properties&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceVulkan12Features&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVulkan12Features&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceVulkan12Properties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVulkan12Properties&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceVulkan13Features&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVulkan13Features&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceVulkan13Properties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVulkan13Properties&);
    

        void serialize_struct(boost::json::object&, VkPipelineCompilerControlCreateInfoAMD&);
        void deserialize_struct(boost::json::object&, VkPipelineCompilerControlCreateInfoAMD&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceCoherentMemoryFeaturesAMD&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCoherentMemoryFeaturesAMD&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceToolProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceToolProperties&);
    

        void serialize_struct(boost::json::object&, VkSamplerCustomBorderColorCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkSamplerCustomBorderColorCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceCustomBorderColorPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCustomBorderColorPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceCustomBorderColorFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCustomBorderColorFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkSamplerBorderColorComponentMappingCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkSamplerBorderColorComponentMappingCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceBorderColorSwizzleFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceBorderColorSwizzleFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkDeviceOrHostAddressKHR&);
        void deserialize_struct(boost::json::object&, VkDeviceOrHostAddressKHR&);
    

        void serialize_struct(boost::json::object&, VkDeviceOrHostAddressConstKHR&);
        void deserialize_struct(boost::json::object&, VkDeviceOrHostAddressConstKHR&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureGeometryTrianglesDataKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureGeometryTrianglesDataKHR&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureGeometryAabbsDataKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureGeometryAabbsDataKHR&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureGeometryInstancesDataKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureGeometryInstancesDataKHR&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureGeometryDataKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureGeometryDataKHR&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureGeometryKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureGeometryKHR&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureBuildGeometryInfoKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureBuildGeometryInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureBuildRangeInfoKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureBuildRangeInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkAabbPositionsKHR&);
        void deserialize_struct(boost::json::object&, VkAabbPositionsKHR&);
    

        void serialize_struct(boost::json::object&, VkTransformMatrixKHR&);
        void deserialize_struct(boost::json::object&, VkTransformMatrixKHR&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureInstanceKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureInstanceKHR&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureDeviceAddressInfoKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureDeviceAddressInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureVersionInfoKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureVersionInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkCopyAccelerationStructureInfoKHR&);
        void deserialize_struct(boost::json::object&, VkCopyAccelerationStructureInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkCopyAccelerationStructureToMemoryInfoKHR&);
        void deserialize_struct(boost::json::object&, VkCopyAccelerationStructureToMemoryInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkCopyMemoryToAccelerationStructureInfoKHR&);
        void deserialize_struct(boost::json::object&, VkCopyMemoryToAccelerationStructureInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkRayTracingPipelineInterfaceCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkRayTracingPipelineInterfaceCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkPipelineLibraryCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkPipelineLibraryCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceExtendedDynamicStateFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExtendedDynamicStateFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceExtendedDynamicState2FeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExtendedDynamicState2FeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceExtendedDynamicState3FeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExtendedDynamicState3FeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceExtendedDynamicState3PropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExtendedDynamicState3PropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkColorBlendEquationEXT&);
        void deserialize_struct(boost::json::object&, VkColorBlendEquationEXT&);
    

        void serialize_struct(boost::json::object&, VkColorBlendAdvancedEXT&);
        void deserialize_struct(boost::json::object&, VkColorBlendAdvancedEXT&);
    

        void serialize_struct(boost::json::object&, VkRenderPassTransformBeginInfoQCOM&);
        void deserialize_struct(boost::json::object&, VkRenderPassTransformBeginInfoQCOM&);
    

        void serialize_struct(boost::json::object&, VkCopyCommandTransformInfoQCOM&);
        void deserialize_struct(boost::json::object&, VkCopyCommandTransformInfoQCOM&);
    

        void serialize_struct(boost::json::object&, VkCommandBufferInheritanceRenderPassTransformInfoQCOM&);
        void deserialize_struct(boost::json::object&, VkCommandBufferInheritanceRenderPassTransformInfoQCOM&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDiagnosticsConfigFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDiagnosticsConfigFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkDeviceDiagnosticsConfigCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkDeviceDiagnosticsConfigCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceRobustness2FeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRobustness2FeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceRobustness2PropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRobustness2PropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceImageRobustnessFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageRobustnessFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevice4444FormatsFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevice4444FormatsFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceSubpassShadingFeaturesHUAWEI&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSubpassShadingFeaturesHUAWEI&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI&);
    

        void serialize_struct(boost::json::object&, VkBufferCopy2&);
        void deserialize_struct(boost::json::object&, VkBufferCopy2&);
    

        void serialize_struct(boost::json::object&, VkImageCopy2&);
        void deserialize_struct(boost::json::object&, VkImageCopy2&);
    

        void serialize_struct(boost::json::object&, VkImageBlit2&);
        void deserialize_struct(boost::json::object&, VkImageBlit2&);
    

        void serialize_struct(boost::json::object&, VkBufferImageCopy2&);
        void deserialize_struct(boost::json::object&, VkBufferImageCopy2&);
    

        void serialize_struct(boost::json::object&, VkImageResolve2&);
        void deserialize_struct(boost::json::object&, VkImageResolve2&);
    

        void serialize_struct(boost::json::object&, VkCopyBufferInfo2&);
        void deserialize_struct(boost::json::object&, VkCopyBufferInfo2&);
    

        void serialize_struct(boost::json::object&, VkCopyImageInfo2&);
        void deserialize_struct(boost::json::object&, VkCopyImageInfo2&);
    

        void serialize_struct(boost::json::object&, VkBlitImageInfo2&);
        void deserialize_struct(boost::json::object&, VkBlitImageInfo2&);
    

        void serialize_struct(boost::json::object&, VkCopyBufferToImageInfo2&);
        void deserialize_struct(boost::json::object&, VkCopyBufferToImageInfo2&);
    

        void serialize_struct(boost::json::object&, VkCopyImageToBufferInfo2&);
        void deserialize_struct(boost::json::object&, VkCopyImageToBufferInfo2&);
    

        void serialize_struct(boost::json::object&, VkResolveImageInfo2&);
        void deserialize_struct(boost::json::object&, VkResolveImageInfo2&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkFragmentShadingRateAttachmentInfoKHR&);
        void deserialize_struct(boost::json::object&, VkFragmentShadingRateAttachmentInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkPipelineFragmentShadingRateStateCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkPipelineFragmentShadingRateStateCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShadingRateFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShadingRateFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShadingRatePropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShadingRatePropertiesKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShadingRateKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShadingRateKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderTerminateInvocationFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderTerminateInvocationFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV&);
    

        void serialize_struct(boost::json::object&, VkPipelineFragmentShadingRateEnumStateCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineFragmentShadingRateEnumStateCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureBuildSizesInfoKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureBuildSizesInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceImage2DViewOf3DFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImage2DViewOf3DFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkMutableDescriptorTypeListEXT&);
        void deserialize_struct(boost::json::object&, VkMutableDescriptorTypeListEXT&);
    

        void serialize_struct(boost::json::object&, VkMutableDescriptorTypeCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkMutableDescriptorTypeCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDepthClipControlFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDepthClipControlFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPipelineViewportDepthClipControlCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineViewportDepthClipControlCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceExternalMemoryRDMAFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExternalMemoryRDMAFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkVertexInputBindingDescription2EXT&);
        void deserialize_struct(boost::json::object&, VkVertexInputBindingDescription2EXT&);
    

        void serialize_struct(boost::json::object&, VkVertexInputAttributeDescription2EXT&);
        void deserialize_struct(boost::json::object&, VkVertexInputAttributeDescription2EXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceColorWriteEnableFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceColorWriteEnableFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPipelineColorWriteCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineColorWriteCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkMemoryBarrier2&);
        void deserialize_struct(boost::json::object&, VkMemoryBarrier2&);
    

        void serialize_struct(boost::json::object&, VkImageMemoryBarrier2&);
        void deserialize_struct(boost::json::object&, VkImageMemoryBarrier2&);
    

        void serialize_struct(boost::json::object&, VkBufferMemoryBarrier2&);
        void deserialize_struct(boost::json::object&, VkBufferMemoryBarrier2&);
    

        void serialize_struct(boost::json::object&, VkDependencyInfo&);
        void deserialize_struct(boost::json::object&, VkDependencyInfo&);
    

        void serialize_struct(boost::json::object&, VkSemaphoreSubmitInfo&);
        void deserialize_struct(boost::json::object&, VkSemaphoreSubmitInfo&);
    

        void serialize_struct(boost::json::object&, VkCommandBufferSubmitInfo&);
        void deserialize_struct(boost::json::object&, VkCommandBufferSubmitInfo&);
    

        void serialize_struct(boost::json::object&, VkSubmitInfo2&);
        void deserialize_struct(boost::json::object&, VkSubmitInfo2&);
    

        void serialize_struct(boost::json::object&, VkQueueFamilyCheckpointProperties2NV&);
        void deserialize_struct(boost::json::object&, VkQueueFamilyCheckpointProperties2NV&);
    

        void serialize_struct(boost::json::object&, VkCheckpointData2NV&);
        void deserialize_struct(boost::json::object&, VkCheckpointData2NV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceSynchronization2Features&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSynchronization2Features&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceHostImageCopyFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceHostImageCopyFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceHostImageCopyPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceHostImageCopyPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkMemoryToImageCopyEXT&);
        void deserialize_struct(boost::json::object&, VkMemoryToImageCopyEXT&);
    

        void serialize_struct(boost::json::object&, VkImageToMemoryCopyEXT&);
        void deserialize_struct(boost::json::object&, VkImageToMemoryCopyEXT&);
    

        void serialize_struct(boost::json::object&, VkCopyMemoryToImageInfoEXT&);
        void deserialize_struct(boost::json::object&, VkCopyMemoryToImageInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkCopyImageToMemoryInfoEXT&);
        void deserialize_struct(boost::json::object&, VkCopyImageToMemoryInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkCopyImageToImageInfoEXT&);
        void deserialize_struct(boost::json::object&, VkCopyImageToImageInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkHostImageLayoutTransitionInfoEXT&);
        void deserialize_struct(boost::json::object&, VkHostImageLayoutTransitionInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkSubresourceHostMemcpySizeEXT&);
        void deserialize_struct(boost::json::object&, VkSubresourceHostMemcpySizeEXT&);
    

        void serialize_struct(boost::json::object&, VkHostImageCopyDevicePerformanceQueryEXT&);
        void deserialize_struct(boost::json::object&, VkHostImageCopyDevicePerformanceQueryEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceLegacyDitheringFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceLegacyDitheringFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkSubpassResolvePerformanceQueryEXT&);
        void deserialize_struct(boost::json::object&, VkSubpassResolvePerformanceQueryEXT&);
    

        void serialize_struct(boost::json::object&, VkMultisampledRenderToSingleSampledInfoEXT&);
        void deserialize_struct(boost::json::object&, VkMultisampledRenderToSingleSampledInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevicePipelineProtectedAccessFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePipelineProtectedAccessFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkQueueFamilyVideoPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkQueueFamilyVideoPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, VkQueueFamilyQueryResultStatusPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkQueueFamilyQueryResultStatusPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoProfileListInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoProfileListInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceVideoFormatInfoKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVideoFormatInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoFormatPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkVideoFormatPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoProfileInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoProfileInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoCapabilitiesKHR&);
        void deserialize_struct(boost::json::object&, VkVideoCapabilitiesKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoSessionMemoryRequirementsKHR&);
        void deserialize_struct(boost::json::object&, VkVideoSessionMemoryRequirementsKHR&);
    

        void serialize_struct(boost::json::object&, VkBindVideoSessionMemoryInfoKHR&);
        void deserialize_struct(boost::json::object&, VkBindVideoSessionMemoryInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoPictureResourceInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoPictureResourceInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoReferenceSlotInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoReferenceSlotInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoDecodeCapabilitiesKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeCapabilitiesKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoDecodeUsageInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeUsageInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoDecodeInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoDecodeH264ProfileInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH264ProfileInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoDecodeH264CapabilitiesKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH264CapabilitiesKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoDecodeH264SessionParametersAddInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH264SessionParametersAddInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoDecodeH264SessionParametersCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH264SessionParametersCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoDecodeH264PictureInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH264PictureInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoDecodeH264DpbSlotInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH264DpbSlotInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoDecodeH265ProfileInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH265ProfileInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoDecodeH265CapabilitiesKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH265CapabilitiesKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoDecodeH265SessionParametersAddInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH265SessionParametersAddInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoDecodeH265SessionParametersCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH265SessionParametersCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoDecodeH265PictureInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH265PictureInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoDecodeH265DpbSlotInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH265DpbSlotInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoSessionCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoSessionCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoSessionParametersCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoSessionParametersCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoSessionParametersUpdateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoSessionParametersUpdateInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoBeginCodingInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoBeginCodingInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoEndCodingInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoEndCodingInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkVideoCodingControlInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoCodingControlInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceInheritedViewportScissorFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceInheritedViewportScissorFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkCommandBufferInheritanceViewportScissorInfoNV&);
        void deserialize_struct(boost::json::object&, VkCommandBufferInheritanceViewportScissorInfoNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceProvokingVertexFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceProvokingVertexFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceProvokingVertexPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceProvokingVertexPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkPipelineRasterizationProvokingVertexStateCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineRasterizationProvokingVertexStateCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkCuModuleCreateInfoNVX&);
        void deserialize_struct(boost::json::object&, VkCuModuleCreateInfoNVX&);
    

        void serialize_struct(boost::json::object&, VkCuFunctionCreateInfoNVX&);
        void deserialize_struct(boost::json::object&, VkCuFunctionCreateInfoNVX&);
    

        void serialize_struct(boost::json::object&, VkCuLaunchInfoNVX&);
        void deserialize_struct(boost::json::object&, VkCuLaunchInfoNVX&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorBufferFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorBufferFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorBufferPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorBufferPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkDescriptorAddressInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDescriptorAddressInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkDescriptorBufferBindingInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDescriptorBufferBindingInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkDescriptorBufferBindingPushDescriptorBufferHandleEXT&);
        void deserialize_struct(boost::json::object&, VkDescriptorBufferBindingPushDescriptorBufferHandleEXT&);
    

        void serialize_struct(boost::json::object&, VkDescriptorDataEXT&);
        void deserialize_struct(boost::json::object&, VkDescriptorDataEXT&);
    

        void serialize_struct(boost::json::object&, VkDescriptorGetInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDescriptorGetInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkBufferCaptureDescriptorDataInfoEXT&);
        void deserialize_struct(boost::json::object&, VkBufferCaptureDescriptorDataInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkImageCaptureDescriptorDataInfoEXT&);
        void deserialize_struct(boost::json::object&, VkImageCaptureDescriptorDataInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkImageViewCaptureDescriptorDataInfoEXT&);
        void deserialize_struct(boost::json::object&, VkImageViewCaptureDescriptorDataInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkSamplerCaptureDescriptorDataInfoEXT&);
        void deserialize_struct(boost::json::object&, VkSamplerCaptureDescriptorDataInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureCaptureDescriptorDataInfoEXT&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureCaptureDescriptorDataInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkOpaqueCaptureDescriptorDataCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkOpaqueCaptureDescriptorDataCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderIntegerDotProductFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderIntegerDotProductFeatures&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderIntegerDotProductProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderIntegerDotProductProperties&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDrmPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDrmPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingMotionBlurFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingMotionBlurFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureGeometryMotionTrianglesDataNV&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureGeometryMotionTrianglesDataNV&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureMotionInfoNV&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureMotionInfoNV&);
    

        void serialize_struct(boost::json::object&, VkSRTDataNV&);
        void deserialize_struct(boost::json::object&, VkSRTDataNV&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureSRTMotionInstanceNV&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureSRTMotionInstanceNV&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureMatrixMotionInstanceNV&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureMatrixMotionInstanceNV&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureMotionInstanceDataNV&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureMotionInstanceDataNV&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureMotionInstanceNV&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureMotionInstanceNV&);
    

        void serialize_struct(boost::json::object&, VkMemoryGetRemoteAddressInfoNV&);
        void deserialize_struct(boost::json::object&, VkMemoryGetRemoteAddressInfoNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkFormatProperties3&);
        void deserialize_struct(boost::json::object&, VkFormatProperties3&);
    

        void serialize_struct(boost::json::object&, VkDrmFormatModifierPropertiesList2EXT&);
        void deserialize_struct(boost::json::object&, VkDrmFormatModifierPropertiesList2EXT&);
    

        void serialize_struct(boost::json::object&, VkDrmFormatModifierProperties2EXT&);
        void deserialize_struct(boost::json::object&, VkDrmFormatModifierProperties2EXT&);
    

        void serialize_struct(boost::json::object&, VkPipelineRenderingCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineRenderingCreateInfo&);
    

        void serialize_struct(boost::json::object&, VkRenderingInfo&);
        void deserialize_struct(boost::json::object&, VkRenderingInfo&);
    

        void serialize_struct(boost::json::object&, VkRenderingAttachmentInfo&);
        void deserialize_struct(boost::json::object&, VkRenderingAttachmentInfo&);
    

        void serialize_struct(boost::json::object&, VkRenderingFragmentShadingRateAttachmentInfoKHR&);
        void deserialize_struct(boost::json::object&, VkRenderingFragmentShadingRateAttachmentInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkRenderingFragmentDensityMapAttachmentInfoEXT&);
        void deserialize_struct(boost::json::object&, VkRenderingFragmentDensityMapAttachmentInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDynamicRenderingFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDynamicRenderingFeatures&);
    

        void serialize_struct(boost::json::object&, VkCommandBufferInheritanceRenderingInfo&);
        void deserialize_struct(boost::json::object&, VkCommandBufferInheritanceRenderingInfo&);
    

        void serialize_struct(boost::json::object&, VkAttachmentSampleCountInfoAMD&);
        void deserialize_struct(boost::json::object&, VkAttachmentSampleCountInfoAMD&);
    

        void serialize_struct(boost::json::object&, VkMultiviewPerViewAttributesInfoNVX&);
        void deserialize_struct(boost::json::object&, VkMultiviewPerViewAttributesInfoNVX&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceImageViewMinLodFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageViewMinLodFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkImageViewMinLodCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkImageViewMinLodCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceLinearColorAttachmentFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceLinearColorAttachmentFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkGraphicsPipelineLibraryCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkGraphicsPipelineLibraryCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE&);
    

        void serialize_struct(boost::json::object&, VkDescriptorSetBindingReferenceVALVE&);
        void deserialize_struct(boost::json::object&, VkDescriptorSetBindingReferenceVALVE&);
    

        void serialize_struct(boost::json::object&, VkDescriptorSetLayoutHostMappingInfoVALVE&);
        void deserialize_struct(boost::json::object&, VkDescriptorSetLayoutHostMappingInfoVALVE&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkPipelineShaderStageModuleIdentifierCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineShaderStageModuleIdentifierCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkShaderModuleIdentifierEXT&);
        void deserialize_struct(boost::json::object&, VkShaderModuleIdentifierEXT&);
    

        void serialize_struct(boost::json::object&, VkImageCompressionControlEXT&);
        void deserialize_struct(boost::json::object&, VkImageCompressionControlEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceImageCompressionControlFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageCompressionControlFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkImageCompressionPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkImageCompressionPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkImageSubresource2KHR&);
        void deserialize_struct(boost::json::object&, VkImageSubresource2KHR&);
    

        void serialize_struct(boost::json::object&, VkSubresourceLayout2KHR&);
        void deserialize_struct(boost::json::object&, VkSubresourceLayout2KHR&);
    

        void serialize_struct(boost::json::object&, VkRenderPassCreationControlEXT&);
        void deserialize_struct(boost::json::object&, VkRenderPassCreationControlEXT&);
    

        void serialize_struct(boost::json::object&, VkRenderPassCreationFeedbackInfoEXT&);
        void deserialize_struct(boost::json::object&, VkRenderPassCreationFeedbackInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkRenderPassCreationFeedbackCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkRenderPassCreationFeedbackCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkRenderPassSubpassFeedbackInfoEXT&);
        void deserialize_struct(boost::json::object&, VkRenderPassSubpassFeedbackInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkRenderPassSubpassFeedbackCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkRenderPassSubpassFeedbackCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkMicromapBuildInfoEXT&);
        void deserialize_struct(boost::json::object&, VkMicromapBuildInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkMicromapCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkMicromapCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkMicromapVersionInfoEXT&);
        void deserialize_struct(boost::json::object&, VkMicromapVersionInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkCopyMicromapInfoEXT&);
        void deserialize_struct(boost::json::object&, VkCopyMicromapInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkCopyMicromapToMemoryInfoEXT&);
        void deserialize_struct(boost::json::object&, VkCopyMicromapToMemoryInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkCopyMemoryToMicromapInfoEXT&);
        void deserialize_struct(boost::json::object&, VkCopyMemoryToMicromapInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkMicromapBuildSizesInfoEXT&);
        void deserialize_struct(boost::json::object&, VkMicromapBuildSizesInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkMicromapUsageEXT&);
        void deserialize_struct(boost::json::object&, VkMicromapUsageEXT&);
    

        void serialize_struct(boost::json::object&, VkMicromapTriangleEXT&);
        void deserialize_struct(boost::json::object&, VkMicromapTriangleEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceOpacityMicromapFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceOpacityMicromapFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceOpacityMicromapPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceOpacityMicromapPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkAccelerationStructureTrianglesOpacityMicromapEXT&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureTrianglesOpacityMicromapEXT&);
    

        void serialize_struct(boost::json::object&, VkPipelinePropertiesIdentifierEXT&);
        void deserialize_struct(boost::json::object&, VkPipelinePropertiesIdentifierEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevicePipelinePropertiesFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePipelinePropertiesFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD&);
    

        void serialize_struct(boost::json::object&, VkExternalMemoryAcquireUnmodifiedEXT&);
        void deserialize_struct(boost::json::object&, VkExternalMemoryAcquireUnmodifiedEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevicePipelineRobustnessFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePipelineRobustnessFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPipelineRobustnessCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineRobustnessCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevicePipelineRobustnessPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePipelineRobustnessPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkImageViewSampleWeightCreateInfoQCOM&);
        void deserialize_struct(boost::json::object&, VkImageViewSampleWeightCreateInfoQCOM&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceImageProcessingFeaturesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageProcessingFeaturesQCOM&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceImageProcessingPropertiesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageProcessingPropertiesQCOM&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceTilePropertiesFeaturesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceTilePropertiesFeaturesQCOM&);
    

        void serialize_struct(boost::json::object&, VkTilePropertiesQCOM&);
        void deserialize_struct(boost::json::object&, VkTilePropertiesQCOM&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceAmigoProfilingFeaturesSEC&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceAmigoProfilingFeaturesSEC&);
    

        void serialize_struct(boost::json::object&, VkAmigoProfilingSubmitInfoSEC&);
        void deserialize_struct(boost::json::object&, VkAmigoProfilingSubmitInfoSEC&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDepthClampZeroOneFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDepthClampZeroOneFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceAddressBindingReportFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceAddressBindingReportFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkDeviceAddressBindingCallbackDataEXT&);
        void deserialize_struct(boost::json::object&, VkDeviceAddressBindingCallbackDataEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceOpticalFlowFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceOpticalFlowFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceOpticalFlowPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceOpticalFlowPropertiesNV&);
    

        void serialize_struct(boost::json::object&, VkOpticalFlowImageFormatInfoNV&);
        void deserialize_struct(boost::json::object&, VkOpticalFlowImageFormatInfoNV&);
    

        void serialize_struct(boost::json::object&, VkOpticalFlowImageFormatPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkOpticalFlowImageFormatPropertiesNV&);
    

        void serialize_struct(boost::json::object&, VkOpticalFlowSessionCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkOpticalFlowSessionCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, VkOpticalFlowSessionCreatePrivateDataInfoNV&);
        void deserialize_struct(boost::json::object&, VkOpticalFlowSessionCreatePrivateDataInfoNV&);
    

        void serialize_struct(boost::json::object&, VkOpticalFlowExecuteInfoNV&);
        void deserialize_struct(boost::json::object&, VkOpticalFlowExecuteInfoNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceFaultFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFaultFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkDeviceFaultAddressInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDeviceFaultAddressInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkDeviceFaultVendorInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDeviceFaultVendorInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkDeviceFaultCountsEXT&);
        void deserialize_struct(boost::json::object&, VkDeviceFaultCountsEXT&);
    

        void serialize_struct(boost::json::object&, VkDeviceFaultInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDeviceFaultInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkDeviceFaultVendorBinaryHeaderVersionOneEXT&);
        void deserialize_struct(boost::json::object&, VkDeviceFaultVendorBinaryHeaderVersionOneEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkDepthBiasInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDepthBiasInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkDepthBiasRepresentationInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDepthBiasRepresentationInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkDecompressMemoryRegionNV&);
        void deserialize_struct(boost::json::object&, VkDecompressMemoryRegionNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM&);
    

        void serialize_struct(boost::json::object&, VkFrameBoundaryEXT&);
        void deserialize_struct(boost::json::object&, VkFrameBoundaryEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceFrameBoundaryFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFrameBoundaryFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkSurfacePresentModeEXT&);
        void deserialize_struct(boost::json::object&, VkSurfacePresentModeEXT&);
    

        void serialize_struct(boost::json::object&, VkSurfacePresentScalingCapabilitiesEXT&);
        void deserialize_struct(boost::json::object&, VkSurfacePresentScalingCapabilitiesEXT&);
    

        void serialize_struct(boost::json::object&, VkSurfacePresentModeCompatibilityEXT&);
        void deserialize_struct(boost::json::object&, VkSurfacePresentModeCompatibilityEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkSwapchainPresentFenceInfoEXT&);
        void deserialize_struct(boost::json::object&, VkSwapchainPresentFenceInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkSwapchainPresentModesCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkSwapchainPresentModesCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkSwapchainPresentModeInfoEXT&);
        void deserialize_struct(boost::json::object&, VkSwapchainPresentModeInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkSwapchainPresentScalingCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkSwapchainPresentScalingCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkReleaseSwapchainImagesInfoEXT&);
        void deserialize_struct(boost::json::object&, VkReleaseSwapchainImagesInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDepthBiasControlFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDepthBiasControlFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV&);
    

        void serialize_struct(boost::json::object&, VkDirectDriverLoadingInfoLUNARG&);
        void deserialize_struct(boost::json::object&, VkDirectDriverLoadingInfoLUNARG&);
    

        void serialize_struct(boost::json::object&, VkDirectDriverLoadingListLUNARG&);
        void deserialize_struct(boost::json::object&, VkDirectDriverLoadingListLUNARG&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, VkDeviceImageSubresourceInfoKHR&);
        void deserialize_struct(boost::json::object&, VkDeviceImageSubresourceInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderCorePropertiesARM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderCorePropertiesARM&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM&);
    

        void serialize_struct(boost::json::object&, VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM&);
        void deserialize_struct(boost::json::object&, VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM&);
    

        void serialize_struct(boost::json::object&, VkQueryLowLatencySupportNV&);
        void deserialize_struct(boost::json::object&, VkQueryLowLatencySupportNV&);
    

        void serialize_struct(boost::json::object&, VkMemoryMapInfoKHR&);
        void deserialize_struct(boost::json::object&, VkMemoryMapInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkMemoryUnmapInfoKHR&);
        void deserialize_struct(boost::json::object&, VkMemoryUnmapInfoKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderObjectFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderObjectFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderObjectPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderObjectPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkShaderCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkShaderCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderTileImageFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderTileImageFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceShaderTileImagePropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderTileImagePropertiesEXT&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceCooperativeMatrixFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCooperativeMatrixFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, VkCooperativeMatrixPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkCooperativeMatrixPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceCooperativeMatrixPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCooperativeMatrixPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceCubicClampFeaturesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCubicClampFeaturesQCOM&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceYcbcrDegammaFeaturesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceYcbcrDegammaFeaturesQCOM&);
    

        void serialize_struct(boost::json::object&, VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM&);
        void deserialize_struct(boost::json::object&, VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceCubicWeightsFeaturesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCubicWeightsFeaturesQCOM&);
    

        void serialize_struct(boost::json::object&, VkSamplerCubicWeightsCreateInfoQCOM&);
        void deserialize_struct(boost::json::object&, VkSamplerCubicWeightsCreateInfoQCOM&);
    

        void serialize_struct(boost::json::object&, VkBlitImageCubicWeightsInfoQCOM&);
        void deserialize_struct(boost::json::object&, VkBlitImageCubicWeightsInfoQCOM&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceImageProcessing2FeaturesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageProcessing2FeaturesQCOM&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceImageProcessing2PropertiesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageProcessing2PropertiesQCOM&);
    

        void serialize_struct(boost::json::object&, VkSamplerBlockMatchWindowCreateInfoQCOM&);
        void deserialize_struct(boost::json::object&, VkSamplerBlockMatchWindowCreateInfoQCOM&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV&);
    

        void serialize_struct(boost::json::object&, VkPhysicalDeviceLayeredDriverPropertiesMSFT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceLayeredDriverPropertiesMSFT&);
    
void serialize_funcpointer(boost::json::object&, PFN_vkInternalAllocationNotification&);
void handle_PFN_vkInternalAllocationNotification(boost::json::object&);
void deserialize_funcpointer(boost::json::object&, PFN_vkInternalAllocationNotification&);
void serialize_funcpointer(boost::json::object&, PFN_vkInternalFreeNotification&);
void handle_PFN_vkInternalFreeNotification(boost::json::object&);
void deserialize_funcpointer(boost::json::object&, PFN_vkInternalFreeNotification&);
void serialize_funcpointer(boost::json::object&, PFN_vkReallocationFunction&);
void handle_PFN_vkReallocationFunction(boost::json::object&);
void deserialize_funcpointer(boost::json::object&, PFN_vkReallocationFunction&);
void serialize_funcpointer(boost::json::object&, PFN_vkAllocationFunction&);
void handle_PFN_vkAllocationFunction(boost::json::object&);
void deserialize_funcpointer(boost::json::object&, PFN_vkAllocationFunction&);
void serialize_funcpointer(boost::json::object&, PFN_vkFreeFunction&);
void handle_PFN_vkFreeFunction(boost::json::object&);
void deserialize_funcpointer(boost::json::object&, PFN_vkFreeFunction&);
void serialize_funcpointer(boost::json::object&, PFN_vkDebugReportCallbackEXT&);
void handle_PFN_vkDebugReportCallbackEXT(boost::json::object&);
void deserialize_funcpointer(boost::json::object&, PFN_vkDebugReportCallbackEXT&);
void serialize_funcpointer(boost::json::object&, PFN_vkDebugUtilsMessengerCallbackEXT&);
void handle_PFN_vkDebugUtilsMessengerCallbackEXT(boost::json::object&);
void deserialize_funcpointer(boost::json::object&, PFN_vkDebugUtilsMessengerCallbackEXT&);
void serialize_funcpointer(boost::json::object&, PFN_vkDeviceMemoryReportCallbackEXT&);
void handle_PFN_vkDeviceMemoryReportCallbackEXT(boost::json::object&);
void deserialize_funcpointer(boost::json::object&, PFN_vkDeviceMemoryReportCallbackEXT&);
void serialize_funcpointer(boost::json::object&, PFN_vkGetInstanceProcAddrLUNARG&);
void deserialize_funcpointer(boost::json::object&, PFN_vkGetInstanceProcAddrLUNARG&);
void serialize_handle(boost::json::object&, VkInstance&);
void deserialize_handle(boost::json::object&, VkInstance&);
void serialize_handle(boost::json::object&, VkPhysicalDevice&);
void deserialize_handle(boost::json::object&, VkPhysicalDevice&);
void serialize_handle(boost::json::object&, VkDevice&);
void deserialize_handle(boost::json::object&, VkDevice&);
void serialize_handle(boost::json::object&, VkQueue&);
void deserialize_handle(boost::json::object&, VkQueue&);
void serialize_handle(boost::json::object&, VkCommandBuffer&);
void deserialize_handle(boost::json::object&, VkCommandBuffer&);
void serialize_handle(boost::json::object&, VkDeviceMemory&);
void deserialize_handle(boost::json::object&, VkDeviceMemory&);
void serialize_handle(boost::json::object&, VkCommandPool&);
void deserialize_handle(boost::json::object&, VkCommandPool&);
void serialize_handle(boost::json::object&, VkBuffer&);
void deserialize_handle(boost::json::object&, VkBuffer&);
void serialize_handle(boost::json::object&, VkBufferView&);
void deserialize_handle(boost::json::object&, VkBufferView&);
void serialize_handle(boost::json::object&, VkImage&);
void deserialize_handle(boost::json::object&, VkImage&);
void serialize_handle(boost::json::object&, VkImageView&);
void deserialize_handle(boost::json::object&, VkImageView&);
void serialize_handle(boost::json::object&, VkShaderModule&);
void deserialize_handle(boost::json::object&, VkShaderModule&);
void serialize_handle(boost::json::object&, VkPipeline&);
void deserialize_handle(boost::json::object&, VkPipeline&);
void serialize_handle(boost::json::object&, VkPipelineLayout&);
void deserialize_handle(boost::json::object&, VkPipelineLayout&);
void serialize_handle(boost::json::object&, VkSampler&);
void deserialize_handle(boost::json::object&, VkSampler&);
void serialize_handle(boost::json::object&, VkDescriptorSet&);
void deserialize_handle(boost::json::object&, VkDescriptorSet&);
void serialize_handle(boost::json::object&, VkDescriptorSetLayout&);
void deserialize_handle(boost::json::object&, VkDescriptorSetLayout&);
void serialize_handle(boost::json::object&, VkDescriptorPool&);
void deserialize_handle(boost::json::object&, VkDescriptorPool&);
void serialize_handle(boost::json::object&, VkFence&);
void deserialize_handle(boost::json::object&, VkFence&);
void serialize_handle(boost::json::object&, VkSemaphore&);
void deserialize_handle(boost::json::object&, VkSemaphore&);
void serialize_handle(boost::json::object&, VkEvent&);
void deserialize_handle(boost::json::object&, VkEvent&);
void serialize_handle(boost::json::object&, VkQueryPool&);
void deserialize_handle(boost::json::object&, VkQueryPool&);
void serialize_handle(boost::json::object&, VkFramebuffer&);
void deserialize_handle(boost::json::object&, VkFramebuffer&);
void serialize_handle(boost::json::object&, VkRenderPass&);
void deserialize_handle(boost::json::object&, VkRenderPass&);
void serialize_handle(boost::json::object&, VkPipelineCache&);
void deserialize_handle(boost::json::object&, VkPipelineCache&);
void serialize_handle(boost::json::object&, VkIndirectCommandsLayoutNV&);
void deserialize_handle(boost::json::object&, VkIndirectCommandsLayoutNV&);
void serialize_handle(boost::json::object&, VkDescriptorUpdateTemplate&);
void deserialize_handle(boost::json::object&, VkDescriptorUpdateTemplate&);
void serialize_handle(boost::json::object&, VkDescriptorUpdateTemplateKHR&);
void deserialize_handle(boost::json::object&, VkDescriptorUpdateTemplateKHR&);
void serialize_handle(boost::json::object&, VkSamplerYcbcrConversion&);
void deserialize_handle(boost::json::object&, VkSamplerYcbcrConversion&);
void serialize_handle(boost::json::object&, VkSamplerYcbcrConversionKHR&);
void deserialize_handle(boost::json::object&, VkSamplerYcbcrConversionKHR&);
void serialize_handle(boost::json::object&, VkValidationCacheEXT&);
void deserialize_handle(boost::json::object&, VkValidationCacheEXT&);
void serialize_handle(boost::json::object&, VkAccelerationStructureKHR&);
void deserialize_handle(boost::json::object&, VkAccelerationStructureKHR&);
void serialize_handle(boost::json::object&, VkAccelerationStructureNV&);
void deserialize_handle(boost::json::object&, VkAccelerationStructureNV&);
void serialize_handle(boost::json::object&, VkPerformanceConfigurationINTEL&);
void deserialize_handle(boost::json::object&, VkPerformanceConfigurationINTEL&);
void serialize_handle(boost::json::object&, VkDeferredOperationKHR&);
void deserialize_handle(boost::json::object&, VkDeferredOperationKHR&);
void serialize_handle(boost::json::object&, VkPrivateDataSlot&);
void deserialize_handle(boost::json::object&, VkPrivateDataSlot&);
void serialize_handle(boost::json::object&, VkPrivateDataSlotEXT&);
void deserialize_handle(boost::json::object&, VkPrivateDataSlotEXT&);
void serialize_handle(boost::json::object&, VkCuModuleNVX&);
void deserialize_handle(boost::json::object&, VkCuModuleNVX&);
void serialize_handle(boost::json::object&, VkCuFunctionNVX&);
void deserialize_handle(boost::json::object&, VkCuFunctionNVX&);
void serialize_handle(boost::json::object&, VkOpticalFlowSessionNV&);
void deserialize_handle(boost::json::object&, VkOpticalFlowSessionNV&);
void serialize_handle(boost::json::object&, VkMicromapEXT&);
void deserialize_handle(boost::json::object&, VkMicromapEXT&);
void serialize_handle(boost::json::object&, VkShaderEXT&);
void deserialize_handle(boost::json::object&, VkShaderEXT&);
void serialize_handle(boost::json::object&, VkDisplayKHR&);
void deserialize_handle(boost::json::object&, VkDisplayKHR&);
void serialize_handle(boost::json::object&, VkDisplayModeKHR&);
void deserialize_handle(boost::json::object&, VkDisplayModeKHR&);
void serialize_handle(boost::json::object&, VkSurfaceKHR&);
void deserialize_handle(boost::json::object&, VkSurfaceKHR&);
void serialize_handle(boost::json::object&, VkSwapchainKHR&);
void deserialize_handle(boost::json::object&, VkSwapchainKHR&);
void serialize_handle(boost::json::object&, VkDebugReportCallbackEXT&);
void deserialize_handle(boost::json::object&, VkDebugReportCallbackEXT&);
void serialize_handle(boost::json::object&, VkDebugUtilsMessengerEXT&);
void deserialize_handle(boost::json::object&, VkDebugUtilsMessengerEXT&);
void serialize_handle(boost::json::object&, VkVideoSessionKHR&);
void deserialize_handle(boost::json::object&, VkVideoSessionKHR&);
void serialize_handle(boost::json::object&, VkVideoSessionParametersKHR&);
void deserialize_handle(boost::json::object&, VkVideoSessionParametersKHR&);
