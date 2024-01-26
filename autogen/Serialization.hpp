#include <vulkan/vulkan.h>

typedef struct StreamStructure{
    VkStructureType sType;
    const void* pNext;
} StreamStructure;

#include <debug.hpp>
typedef void* pNext;
void* memdup(const void* mem, size_t size);
void* copyVkStruct (const void* data);

        void serialize_struct(boost::json::object&, const VkBaseOutStructure&);
        void deserialize_struct(boost::json::object&, VkBaseOutStructure&);
    

        void serialize_struct(boost::json::object&, const VkBaseInStructure&);
        void deserialize_struct(boost::json::object&, VkBaseInStructure&);
    

        void serialize_struct(boost::json::object&, const VkOffset2D&);
        void deserialize_struct(boost::json::object&, VkOffset2D&);
    

        void serialize_struct(boost::json::object&, const VkOffset3D&);
        void deserialize_struct(boost::json::object&, VkOffset3D&);
    

        void serialize_struct(boost::json::object&, const VkExtent2D&);
        void deserialize_struct(boost::json::object&, VkExtent2D&);
    

        void serialize_struct(boost::json::object&, const VkExtent3D&);
        void deserialize_struct(boost::json::object&, VkExtent3D&);
    

        void serialize_struct(boost::json::object&, const VkViewport&);
        void deserialize_struct(boost::json::object&, VkViewport&);
    

        void serialize_struct(boost::json::object&, const VkRect2D&);
        void deserialize_struct(boost::json::object&, VkRect2D&);
    

        void serialize_struct(boost::json::object&, const VkClearRect&);
        void deserialize_struct(boost::json::object&, VkClearRect&);
    

        void serialize_struct(boost::json::object&, const VkComponentMapping&);
        void deserialize_struct(boost::json::object&, VkComponentMapping&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceProperties&);
    

        void serialize_struct(boost::json::object&, const VkExtensionProperties&);
        void deserialize_struct(boost::json::object&, VkExtensionProperties&);
    

        void serialize_struct(boost::json::object&, const VkLayerProperties&);
        void deserialize_struct(boost::json::object&, VkLayerProperties&);
    

        void serialize_struct(boost::json::object&, const VkApplicationInfo&);
        void deserialize_struct(boost::json::object&, VkApplicationInfo&);
    

        void serialize_struct(boost::json::object&, const VkAllocationCallbacks&);
        void deserialize_struct(boost::json::object&, VkAllocationCallbacks&);
    

        void serialize_struct(boost::json::object&, const VkDeviceQueueCreateInfo&);
        void deserialize_struct(boost::json::object&, VkDeviceQueueCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkDeviceCreateInfo&);
        void deserialize_struct(boost::json::object&, VkDeviceCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkInstanceCreateInfo&);
        void deserialize_struct(boost::json::object&, VkInstanceCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkQueueFamilyProperties&);
        void deserialize_struct(boost::json::object&, VkQueueFamilyProperties&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMemoryProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMemoryProperties&);
    

        void serialize_struct(boost::json::object&, const VkMemoryAllocateInfo&);
        void deserialize_struct(boost::json::object&, VkMemoryAllocateInfo&);
    

        void serialize_struct(boost::json::object&, const VkMemoryRequirements&);
        void deserialize_struct(boost::json::object&, VkMemoryRequirements&);
    

        void serialize_struct(boost::json::object&, const VkSparseImageFormatProperties&);
        void deserialize_struct(boost::json::object&, VkSparseImageFormatProperties&);
    

        void serialize_struct(boost::json::object&, const VkSparseImageMemoryRequirements&);
        void deserialize_struct(boost::json::object&, VkSparseImageMemoryRequirements&);
    

        void serialize_struct(boost::json::object&, const VkMemoryType&);
        void deserialize_struct(boost::json::object&, VkMemoryType&);
    

        void serialize_struct(boost::json::object&, const VkMemoryHeap&);
        void deserialize_struct(boost::json::object&, VkMemoryHeap&);
    

        void serialize_struct(boost::json::object&, const VkMappedMemoryRange&);
        void deserialize_struct(boost::json::object&, VkMappedMemoryRange&);
    

        void serialize_struct(boost::json::object&, const VkFormatProperties&);
        void deserialize_struct(boost::json::object&, VkFormatProperties&);
    

        void serialize_struct(boost::json::object&, const VkImageFormatProperties&);
        void deserialize_struct(boost::json::object&, VkImageFormatProperties&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorBufferInfo&);
        void deserialize_struct(boost::json::object&, VkDescriptorBufferInfo&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorImageInfo&);
        void deserialize_struct(boost::json::object&, VkDescriptorImageInfo&);
    

        void serialize_struct(boost::json::object&, const VkWriteDescriptorSet&);
        void deserialize_struct(boost::json::object&, VkWriteDescriptorSet&);
    

        void serialize_struct(boost::json::object&, const VkCopyDescriptorSet&);
        void deserialize_struct(boost::json::object&, VkCopyDescriptorSet&);
    

        void serialize_struct(boost::json::object&, const VkBufferUsageFlags2CreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkBufferUsageFlags2CreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkBufferCreateInfo&);
        void deserialize_struct(boost::json::object&, VkBufferCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkBufferViewCreateInfo&);
        void deserialize_struct(boost::json::object&, VkBufferViewCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkImageSubresource&);
        void deserialize_struct(boost::json::object&, VkImageSubresource&);
    

        void serialize_struct(boost::json::object&, const VkImageSubresourceLayers&);
        void deserialize_struct(boost::json::object&, VkImageSubresourceLayers&);
    

        void serialize_struct(boost::json::object&, const VkImageSubresourceRange&);
        void deserialize_struct(boost::json::object&, VkImageSubresourceRange&);
    

        void serialize_struct(boost::json::object&, const VkMemoryBarrier&);
        void deserialize_struct(boost::json::object&, VkMemoryBarrier&);
    

        void serialize_struct(boost::json::object&, const VkBufferMemoryBarrier&);
        void deserialize_struct(boost::json::object&, VkBufferMemoryBarrier&);
    

        void serialize_struct(boost::json::object&, const VkImageMemoryBarrier&);
        void deserialize_struct(boost::json::object&, VkImageMemoryBarrier&);
    

        void serialize_struct(boost::json::object&, const VkImageCreateInfo&);
        void deserialize_struct(boost::json::object&, VkImageCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkSubresourceLayout&);
        void deserialize_struct(boost::json::object&, VkSubresourceLayout&);
    

        void serialize_struct(boost::json::object&, const VkImageViewCreateInfo&);
        void deserialize_struct(boost::json::object&, VkImageViewCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkBufferCopy&);
        void deserialize_struct(boost::json::object&, VkBufferCopy&);
    

        void serialize_struct(boost::json::object&, const VkSparseMemoryBind&);
        void deserialize_struct(boost::json::object&, VkSparseMemoryBind&);
    

        void serialize_struct(boost::json::object&, const VkSparseImageMemoryBind&);
        void deserialize_struct(boost::json::object&, VkSparseImageMemoryBind&);
    

        void serialize_struct(boost::json::object&, const VkSparseBufferMemoryBindInfo&);
        void deserialize_struct(boost::json::object&, VkSparseBufferMemoryBindInfo&);
    

        void serialize_struct(boost::json::object&, const VkSparseImageOpaqueMemoryBindInfo&);
        void deserialize_struct(boost::json::object&, VkSparseImageOpaqueMemoryBindInfo&);
    

        void serialize_struct(boost::json::object&, const VkSparseImageMemoryBindInfo&);
        void deserialize_struct(boost::json::object&, VkSparseImageMemoryBindInfo&);
    

        void serialize_struct(boost::json::object&, const VkBindSparseInfo&);
        void deserialize_struct(boost::json::object&, VkBindSparseInfo&);
    

        void serialize_struct(boost::json::object&, const VkImageCopy&);
        void deserialize_struct(boost::json::object&, VkImageCopy&);
    

        void serialize_struct(boost::json::object&, const VkImageBlit&);
        void deserialize_struct(boost::json::object&, VkImageBlit&);
    

        void serialize_struct(boost::json::object&, const VkBufferImageCopy&);
        void deserialize_struct(boost::json::object&, VkBufferImageCopy&);
    

        void serialize_struct(boost::json::object&, const VkCopyMemoryIndirectCommandNV&);
        void deserialize_struct(boost::json::object&, VkCopyMemoryIndirectCommandNV&);
    

        void serialize_struct(boost::json::object&, const VkCopyMemoryToImageIndirectCommandNV&);
        void deserialize_struct(boost::json::object&, VkCopyMemoryToImageIndirectCommandNV&);
    

        void serialize_struct(boost::json::object&, const VkImageResolve&);
        void deserialize_struct(boost::json::object&, VkImageResolve&);
    

        void serialize_struct(boost::json::object&, const VkShaderModuleCreateInfo&);
        void deserialize_struct(boost::json::object&, VkShaderModuleCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorSetLayoutBinding&);
        void deserialize_struct(boost::json::object&, VkDescriptorSetLayoutBinding&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorSetLayoutCreateInfo&);
        void deserialize_struct(boost::json::object&, VkDescriptorSetLayoutCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorPoolSize&);
        void deserialize_struct(boost::json::object&, VkDescriptorPoolSize&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorPoolCreateInfo&);
        void deserialize_struct(boost::json::object&, VkDescriptorPoolCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorSetAllocateInfo&);
        void deserialize_struct(boost::json::object&, VkDescriptorSetAllocateInfo&);
    

        void serialize_struct(boost::json::object&, const VkSpecializationMapEntry&);
        void deserialize_struct(boost::json::object&, VkSpecializationMapEntry&);
    

        void serialize_struct(boost::json::object&, const VkSpecializationInfo&);
        void deserialize_struct(boost::json::object&, VkSpecializationInfo&);
    

        void serialize_struct(boost::json::object&, const VkPipelineShaderStageCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineShaderStageCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkComputePipelineCreateInfo&);
        void deserialize_struct(boost::json::object&, VkComputePipelineCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkComputePipelineIndirectBufferInfoNV&);
        void deserialize_struct(boost::json::object&, VkComputePipelineIndirectBufferInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkPipelineCreateFlags2CreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkPipelineCreateFlags2CreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVertexInputBindingDescription&);
        void deserialize_struct(boost::json::object&, VkVertexInputBindingDescription&);
    

        void serialize_struct(boost::json::object&, const VkVertexInputAttributeDescription&);
        void deserialize_struct(boost::json::object&, VkVertexInputAttributeDescription&);
    

        void serialize_struct(boost::json::object&, const VkPipelineVertexInputStateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineVertexInputStateCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkPipelineInputAssemblyStateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineInputAssemblyStateCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkPipelineTessellationStateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineTessellationStateCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkPipelineViewportStateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineViewportStateCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkPipelineRasterizationStateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineRasterizationStateCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkPipelineMultisampleStateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineMultisampleStateCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkPipelineColorBlendAttachmentState&);
        void deserialize_struct(boost::json::object&, VkPipelineColorBlendAttachmentState&);
    

        void serialize_struct(boost::json::object&, const VkPipelineColorBlendStateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineColorBlendStateCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkPipelineDynamicStateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineDynamicStateCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkStencilOpState&);
        void deserialize_struct(boost::json::object&, VkStencilOpState&);
    

        void serialize_struct(boost::json::object&, const VkPipelineDepthStencilStateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineDepthStencilStateCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkGraphicsPipelineCreateInfo&);
        void deserialize_struct(boost::json::object&, VkGraphicsPipelineCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkPipelineCacheCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineCacheCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkPipelineCacheHeaderVersionOne&);
        void deserialize_struct(boost::json::object&, VkPipelineCacheHeaderVersionOne&);
    

        void serialize_struct(boost::json::object&, const VkPushConstantRange&);
        void deserialize_struct(boost::json::object&, VkPushConstantRange&);
    

        void serialize_struct(boost::json::object&, const VkPipelineLayoutCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineLayoutCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkSamplerCreateInfo&);
        void deserialize_struct(boost::json::object&, VkSamplerCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkCommandPoolCreateInfo&);
        void deserialize_struct(boost::json::object&, VkCommandPoolCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkCommandBufferAllocateInfo&);
        void deserialize_struct(boost::json::object&, VkCommandBufferAllocateInfo&);
    

        void serialize_struct(boost::json::object&, const VkCommandBufferInheritanceInfo&);
        void deserialize_struct(boost::json::object&, VkCommandBufferInheritanceInfo&);
    

        void serialize_struct(boost::json::object&, const VkCommandBufferBeginInfo&);
        void deserialize_struct(boost::json::object&, VkCommandBufferBeginInfo&);
    

        void serialize_struct(boost::json::object&, const VkRenderPassBeginInfo&);
        void deserialize_struct(boost::json::object&, VkRenderPassBeginInfo&);
    

        void serialize_struct(boost::json::object&, const VkClearColorValue&);
        void deserialize_struct(boost::json::object&, VkClearColorValue&);
    

        void serialize_struct(boost::json::object&, const VkClearDepthStencilValue&);
        void deserialize_struct(boost::json::object&, VkClearDepthStencilValue&);
    

        void serialize_struct(boost::json::object&, const VkClearValue&);
        void deserialize_struct(boost::json::object&, VkClearValue&);
    

        void serialize_struct(boost::json::object&, const VkClearAttachment&);
        void deserialize_struct(boost::json::object&, VkClearAttachment&);
    

        void serialize_struct(boost::json::object&, const VkAttachmentDescription&);
        void deserialize_struct(boost::json::object&, VkAttachmentDescription&);
    

        void serialize_struct(boost::json::object&, const VkAttachmentReference&);
        void deserialize_struct(boost::json::object&, VkAttachmentReference&);
    

        void serialize_struct(boost::json::object&, const VkSubpassDescription&);
        void deserialize_struct(boost::json::object&, VkSubpassDescription&);
    

        void serialize_struct(boost::json::object&, const VkSubpassDependency&);
        void deserialize_struct(boost::json::object&, VkSubpassDependency&);
    

        void serialize_struct(boost::json::object&, const VkRenderPassCreateInfo&);
        void deserialize_struct(boost::json::object&, VkRenderPassCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkEventCreateInfo&);
        void deserialize_struct(boost::json::object&, VkEventCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkFenceCreateInfo&);
        void deserialize_struct(boost::json::object&, VkFenceCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceSparseProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSparseProperties&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceLimits&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceLimits&);
    

        void serialize_struct(boost::json::object&, const VkSemaphoreCreateInfo&);
        void deserialize_struct(boost::json::object&, VkSemaphoreCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkQueryPoolCreateInfo&);
        void deserialize_struct(boost::json::object&, VkQueryPoolCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkFramebufferCreateInfo&);
        void deserialize_struct(boost::json::object&, VkFramebufferCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkDrawIndirectCommand&);
        void deserialize_struct(boost::json::object&, VkDrawIndirectCommand&);
    

        void serialize_struct(boost::json::object&, const VkDrawIndexedIndirectCommand&);
        void deserialize_struct(boost::json::object&, VkDrawIndexedIndirectCommand&);
    

        void serialize_struct(boost::json::object&, const VkDispatchIndirectCommand&);
        void deserialize_struct(boost::json::object&, VkDispatchIndirectCommand&);
    

        void serialize_struct(boost::json::object&, const VkMultiDrawInfoEXT&);
        void deserialize_struct(boost::json::object&, VkMultiDrawInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkMultiDrawIndexedInfoEXT&);
        void deserialize_struct(boost::json::object&, VkMultiDrawIndexedInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkSubmitInfo&);
        void deserialize_struct(boost::json::object&, VkSubmitInfo&);
    

        void serialize_struct(boost::json::object&, const VkDisplayPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkDisplayPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkDisplayPlanePropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkDisplayPlanePropertiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkDisplayModeParametersKHR&);
        void deserialize_struct(boost::json::object&, VkDisplayModeParametersKHR&);
    

        void serialize_struct(boost::json::object&, const VkDisplayModePropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkDisplayModePropertiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkDisplayModeCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkDisplayModeCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkDisplayPlaneCapabilitiesKHR&);
        void deserialize_struct(boost::json::object&, VkDisplayPlaneCapabilitiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkDisplaySurfaceCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkDisplaySurfaceCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkDisplayPresentInfoKHR&);
        void deserialize_struct(boost::json::object&, VkDisplayPresentInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkSurfaceCapabilitiesKHR&);
        void deserialize_struct(boost::json::object&, VkSurfaceCapabilitiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkXlibSurfaceCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkXlibSurfaceCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkXcbSurfaceCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkXcbSurfaceCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkSurfaceFormatKHR&);
        void deserialize_struct(boost::json::object&, VkSurfaceFormatKHR&);
    

        void serialize_struct(boost::json::object&, const VkSwapchainCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkSwapchainCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkPresentInfoKHR&);
        void deserialize_struct(boost::json::object&, VkPresentInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkDebugReportCallbackCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDebugReportCallbackCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkValidationFlagsEXT&);
        void deserialize_struct(boost::json::object&, VkValidationFlagsEXT&);
    

        void serialize_struct(boost::json::object&, const VkValidationFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkValidationFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPipelineRasterizationStateRasterizationOrderAMD&);
        void deserialize_struct(boost::json::object&, VkPipelineRasterizationStateRasterizationOrderAMD&);
    

        void serialize_struct(boost::json::object&, const VkDebugMarkerObjectNameInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDebugMarkerObjectNameInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkDebugMarkerObjectTagInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDebugMarkerObjectTagInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkDebugMarkerMarkerInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDebugMarkerMarkerInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkDedicatedAllocationImageCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkDedicatedAllocationImageCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkDedicatedAllocationBufferCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkDedicatedAllocationBufferCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkDedicatedAllocationMemoryAllocateInfoNV&);
        void deserialize_struct(boost::json::object&, VkDedicatedAllocationMemoryAllocateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkExternalImageFormatPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkExternalImageFormatPropertiesNV&);
    

        void serialize_struct(boost::json::object&, const VkExternalMemoryImageCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkExternalMemoryImageCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkExportMemoryAllocateInfoNV&);
        void deserialize_struct(boost::json::object&, VkExportMemoryAllocateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkDevicePrivateDataCreateInfo&);
        void deserialize_struct(boost::json::object&, VkDevicePrivateDataCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkPrivateDataSlotCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPrivateDataSlotCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevicePrivateDataFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePrivateDataFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMultiDrawPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMultiDrawPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkGraphicsShaderGroupCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkGraphicsShaderGroupCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkGraphicsPipelineShaderGroupsCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkGraphicsPipelineShaderGroupsCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkBindShaderGroupIndirectCommandNV&);
        void deserialize_struct(boost::json::object&, VkBindShaderGroupIndirectCommandNV&);
    

        void serialize_struct(boost::json::object&, const VkBindIndexBufferIndirectCommandNV&);
        void deserialize_struct(boost::json::object&, VkBindIndexBufferIndirectCommandNV&);
    

        void serialize_struct(boost::json::object&, const VkBindVertexBufferIndirectCommandNV&);
        void deserialize_struct(boost::json::object&, VkBindVertexBufferIndirectCommandNV&);
    

        void serialize_struct(boost::json::object&, const VkSetStateFlagsIndirectCommandNV&);
        void deserialize_struct(boost::json::object&, VkSetStateFlagsIndirectCommandNV&);
    

        void serialize_struct(boost::json::object&, const VkIndirectCommandsStreamNV&);
        void deserialize_struct(boost::json::object&, VkIndirectCommandsStreamNV&);
    

        void serialize_struct(boost::json::object&, const VkIndirectCommandsLayoutTokenNV&);
        void deserialize_struct(boost::json::object&, VkIndirectCommandsLayoutTokenNV&);
    

        void serialize_struct(boost::json::object&, const VkIndirectCommandsLayoutCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkIndirectCommandsLayoutCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkGeneratedCommandsInfoNV&);
        void deserialize_struct(boost::json::object&, VkGeneratedCommandsInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkGeneratedCommandsMemoryRequirementsInfoNV&);
        void deserialize_struct(boost::json::object&, VkGeneratedCommandsMemoryRequirementsInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkPipelineIndirectDeviceAddressInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineIndirectDeviceAddressInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkBindPipelineIndirectCommandNV&);
        void deserialize_struct(boost::json::object&, VkBindPipelineIndirectCommandNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceFeatures2&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFeatures2&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceProperties2&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceProperties2&);
    

        void serialize_struct(boost::json::object&, const VkFormatProperties2&);
        void deserialize_struct(boost::json::object&, VkFormatProperties2&);
    

        void serialize_struct(boost::json::object&, const VkImageFormatProperties2&);
        void deserialize_struct(boost::json::object&, VkImageFormatProperties2&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceImageFormatInfo2&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageFormatInfo2&);
    

        void serialize_struct(boost::json::object&, const VkQueueFamilyProperties2&);
        void deserialize_struct(boost::json::object&, VkQueueFamilyProperties2&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMemoryProperties2&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMemoryProperties2&);
    

        void serialize_struct(boost::json::object&, const VkSparseImageFormatProperties2&);
        void deserialize_struct(boost::json::object&, VkSparseImageFormatProperties2&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceSparseImageFormatInfo2&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSparseImageFormatInfo2&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevicePushDescriptorPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePushDescriptorPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkConformanceVersion&);
        void deserialize_struct(boost::json::object&, VkConformanceVersion&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDriverProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDriverProperties&);
    

        void serialize_struct(boost::json::object&, const VkPresentRegionsKHR&);
        void deserialize_struct(boost::json::object&, VkPresentRegionsKHR&);
    

        void serialize_struct(boost::json::object&, const VkPresentRegionKHR&);
        void deserialize_struct(boost::json::object&, VkPresentRegionKHR&);
    

        void serialize_struct(boost::json::object&, const VkRectLayerKHR&);
        void deserialize_struct(boost::json::object&, VkRectLayerKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceVariablePointersFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVariablePointersFeatures&);
    

        void serialize_struct(boost::json::object&, const VkExternalMemoryProperties&);
        void deserialize_struct(boost::json::object&, VkExternalMemoryProperties&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceExternalImageFormatInfo&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExternalImageFormatInfo&);
    

        void serialize_struct(boost::json::object&, const VkExternalImageFormatProperties&);
        void deserialize_struct(boost::json::object&, VkExternalImageFormatProperties&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceExternalBufferInfo&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExternalBufferInfo&);
    

        void serialize_struct(boost::json::object&, const VkExternalBufferProperties&);
        void deserialize_struct(boost::json::object&, VkExternalBufferProperties&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceIDProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceIDProperties&);
    

        void serialize_struct(boost::json::object&, const VkExternalMemoryImageCreateInfo&);
        void deserialize_struct(boost::json::object&, VkExternalMemoryImageCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkExternalMemoryBufferCreateInfo&);
        void deserialize_struct(boost::json::object&, VkExternalMemoryBufferCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkExportMemoryAllocateInfo&);
        void deserialize_struct(boost::json::object&, VkExportMemoryAllocateInfo&);
    

        void serialize_struct(boost::json::object&, const VkImportMemoryFdInfoKHR&);
        void deserialize_struct(boost::json::object&, VkImportMemoryFdInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkMemoryFdPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkMemoryFdPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkMemoryGetFdInfoKHR&);
        void deserialize_struct(boost::json::object&, VkMemoryGetFdInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceExternalSemaphoreInfo&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExternalSemaphoreInfo&);
    

        void serialize_struct(boost::json::object&, const VkExternalSemaphoreProperties&);
        void deserialize_struct(boost::json::object&, VkExternalSemaphoreProperties&);
    

        void serialize_struct(boost::json::object&, const VkExportSemaphoreCreateInfo&);
        void deserialize_struct(boost::json::object&, VkExportSemaphoreCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkImportSemaphoreFdInfoKHR&);
        void deserialize_struct(boost::json::object&, VkImportSemaphoreFdInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkSemaphoreGetFdInfoKHR&);
        void deserialize_struct(boost::json::object&, VkSemaphoreGetFdInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceExternalFenceInfo&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExternalFenceInfo&);
    

        void serialize_struct(boost::json::object&, const VkExternalFenceProperties&);
        void deserialize_struct(boost::json::object&, VkExternalFenceProperties&);
    

        void serialize_struct(boost::json::object&, const VkExportFenceCreateInfo&);
        void deserialize_struct(boost::json::object&, VkExportFenceCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkImportFenceFdInfoKHR&);
        void deserialize_struct(boost::json::object&, VkImportFenceFdInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkFenceGetFdInfoKHR&);
        void deserialize_struct(boost::json::object&, VkFenceGetFdInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMultiviewFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMultiviewFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMultiviewProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMultiviewProperties&);
    

        void serialize_struct(boost::json::object&, const VkRenderPassMultiviewCreateInfo&);
        void deserialize_struct(boost::json::object&, VkRenderPassMultiviewCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkSurfaceCapabilities2EXT&);
        void deserialize_struct(boost::json::object&, VkSurfaceCapabilities2EXT&);
    

        void serialize_struct(boost::json::object&, const VkDisplayPowerInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDisplayPowerInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkDeviceEventInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDeviceEventInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkDisplayEventInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDisplayEventInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkSwapchainCounterCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkSwapchainCounterCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceGroupProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceGroupProperties&);
    

        void serialize_struct(boost::json::object&, const VkMemoryAllocateFlagsInfo&);
        void deserialize_struct(boost::json::object&, VkMemoryAllocateFlagsInfo&);
    

        void serialize_struct(boost::json::object&, const VkBindBufferMemoryInfo&);
        void deserialize_struct(boost::json::object&, VkBindBufferMemoryInfo&);
    

        void serialize_struct(boost::json::object&, const VkBindBufferMemoryDeviceGroupInfo&);
        void deserialize_struct(boost::json::object&, VkBindBufferMemoryDeviceGroupInfo&);
    

        void serialize_struct(boost::json::object&, const VkBindImageMemoryInfo&);
        void deserialize_struct(boost::json::object&, VkBindImageMemoryInfo&);
    

        void serialize_struct(boost::json::object&, const VkBindImageMemoryDeviceGroupInfo&);
        void deserialize_struct(boost::json::object&, VkBindImageMemoryDeviceGroupInfo&);
    

        void serialize_struct(boost::json::object&, const VkDeviceGroupRenderPassBeginInfo&);
        void deserialize_struct(boost::json::object&, VkDeviceGroupRenderPassBeginInfo&);
    

        void serialize_struct(boost::json::object&, const VkDeviceGroupCommandBufferBeginInfo&);
        void deserialize_struct(boost::json::object&, VkDeviceGroupCommandBufferBeginInfo&);
    

        void serialize_struct(boost::json::object&, const VkDeviceGroupSubmitInfo&);
        void deserialize_struct(boost::json::object&, VkDeviceGroupSubmitInfo&);
    

        void serialize_struct(boost::json::object&, const VkDeviceGroupBindSparseInfo&);
        void deserialize_struct(boost::json::object&, VkDeviceGroupBindSparseInfo&);
    

        void serialize_struct(boost::json::object&, const VkDeviceGroupPresentCapabilitiesKHR&);
        void deserialize_struct(boost::json::object&, VkDeviceGroupPresentCapabilitiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkImageSwapchainCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkImageSwapchainCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkBindImageMemorySwapchainInfoKHR&);
        void deserialize_struct(boost::json::object&, VkBindImageMemorySwapchainInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkAcquireNextImageInfoKHR&);
        void deserialize_struct(boost::json::object&, VkAcquireNextImageInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkDeviceGroupPresentInfoKHR&);
        void deserialize_struct(boost::json::object&, VkDeviceGroupPresentInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkDeviceGroupDeviceCreateInfo&);
        void deserialize_struct(boost::json::object&, VkDeviceGroupDeviceCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkDeviceGroupSwapchainCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkDeviceGroupSwapchainCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorUpdateTemplateEntry&);
        void deserialize_struct(boost::json::object&, VkDescriptorUpdateTemplateEntry&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorUpdateTemplateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkDescriptorUpdateTemplateCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkXYColorEXT&);
        void deserialize_struct(boost::json::object&, VkXYColorEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevicePresentIdFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePresentIdFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPresentIdKHR&);
        void deserialize_struct(boost::json::object&, VkPresentIdKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevicePresentWaitFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePresentWaitFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, const VkHdrMetadataEXT&);
        void deserialize_struct(boost::json::object&, VkHdrMetadataEXT&);
    

        void serialize_struct(boost::json::object&, const VkDisplayNativeHdrSurfaceCapabilitiesAMD&);
        void deserialize_struct(boost::json::object&, VkDisplayNativeHdrSurfaceCapabilitiesAMD&);
    

        void serialize_struct(boost::json::object&, const VkSwapchainDisplayNativeHdrCreateInfoAMD&);
        void deserialize_struct(boost::json::object&, VkSwapchainDisplayNativeHdrCreateInfoAMD&);
    

        void serialize_struct(boost::json::object&, const VkRefreshCycleDurationGOOGLE&);
        void deserialize_struct(boost::json::object&, VkRefreshCycleDurationGOOGLE&);
    

        void serialize_struct(boost::json::object&, const VkPastPresentationTimingGOOGLE&);
        void deserialize_struct(boost::json::object&, VkPastPresentationTimingGOOGLE&);
    

        void serialize_struct(boost::json::object&, const VkPresentTimesInfoGOOGLE&);
        void deserialize_struct(boost::json::object&, VkPresentTimesInfoGOOGLE&);
    

        void serialize_struct(boost::json::object&, const VkPresentTimeGOOGLE&);
        void deserialize_struct(boost::json::object&, VkPresentTimeGOOGLE&);
    

        void serialize_struct(boost::json::object&, const VkViewportWScalingNV&);
        void deserialize_struct(boost::json::object&, VkViewportWScalingNV&);
    

        void serialize_struct(boost::json::object&, const VkPipelineViewportWScalingStateCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineViewportWScalingStateCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkViewportSwizzleNV&);
        void deserialize_struct(boost::json::object&, VkViewportSwizzleNV&);
    

        void serialize_struct(boost::json::object&, const VkPipelineViewportSwizzleStateCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineViewportSwizzleStateCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDiscardRectanglePropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDiscardRectanglePropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPipelineDiscardRectangleStateCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineDiscardRectangleStateCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX&);
    

        void serialize_struct(boost::json::object&, const VkInputAttachmentAspectReference&);
        void deserialize_struct(boost::json::object&, VkInputAttachmentAspectReference&);
    

        void serialize_struct(boost::json::object&, const VkRenderPassInputAttachmentAspectCreateInfo&);
        void deserialize_struct(boost::json::object&, VkRenderPassInputAttachmentAspectCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceSurfaceInfo2KHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSurfaceInfo2KHR&);
    

        void serialize_struct(boost::json::object&, const VkSurfaceCapabilities2KHR&);
        void deserialize_struct(boost::json::object&, VkSurfaceCapabilities2KHR&);
    

        void serialize_struct(boost::json::object&, const VkSurfaceFormat2KHR&);
        void deserialize_struct(boost::json::object&, VkSurfaceFormat2KHR&);
    

        void serialize_struct(boost::json::object&, const VkDisplayProperties2KHR&);
        void deserialize_struct(boost::json::object&, VkDisplayProperties2KHR&);
    

        void serialize_struct(boost::json::object&, const VkDisplayPlaneProperties2KHR&);
        void deserialize_struct(boost::json::object&, VkDisplayPlaneProperties2KHR&);
    

        void serialize_struct(boost::json::object&, const VkDisplayModeProperties2KHR&);
        void deserialize_struct(boost::json::object&, VkDisplayModeProperties2KHR&);
    

        void serialize_struct(boost::json::object&, const VkDisplayPlaneInfo2KHR&);
        void deserialize_struct(boost::json::object&, VkDisplayPlaneInfo2KHR&);
    

        void serialize_struct(boost::json::object&, const VkDisplayPlaneCapabilities2KHR&);
        void deserialize_struct(boost::json::object&, VkDisplayPlaneCapabilities2KHR&);
    

        void serialize_struct(boost::json::object&, const VkSharedPresentSurfaceCapabilitiesKHR&);
        void deserialize_struct(boost::json::object&, VkSharedPresentSurfaceCapabilitiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevice16BitStorageFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevice16BitStorageFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceSubgroupProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSubgroupProperties&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures&);
    

        void serialize_struct(boost::json::object&, const VkBufferMemoryRequirementsInfo2&);
        void deserialize_struct(boost::json::object&, VkBufferMemoryRequirementsInfo2&);
    

        void serialize_struct(boost::json::object&, const VkDeviceBufferMemoryRequirements&);
        void deserialize_struct(boost::json::object&, VkDeviceBufferMemoryRequirements&);
    

        void serialize_struct(boost::json::object&, const VkImageMemoryRequirementsInfo2&);
        void deserialize_struct(boost::json::object&, VkImageMemoryRequirementsInfo2&);
    

        void serialize_struct(boost::json::object&, const VkImageSparseMemoryRequirementsInfo2&);
        void deserialize_struct(boost::json::object&, VkImageSparseMemoryRequirementsInfo2&);
    

        void serialize_struct(boost::json::object&, const VkDeviceImageMemoryRequirements&);
        void deserialize_struct(boost::json::object&, VkDeviceImageMemoryRequirements&);
    

        void serialize_struct(boost::json::object&, const VkMemoryRequirements2&);
        void deserialize_struct(boost::json::object&, VkMemoryRequirements2&);
    

        void serialize_struct(boost::json::object&, const VkSparseImageMemoryRequirements2&);
        void deserialize_struct(boost::json::object&, VkSparseImageMemoryRequirements2&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevicePointClippingProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePointClippingProperties&);
    

        void serialize_struct(boost::json::object&, const VkMemoryDedicatedRequirements&);
        void deserialize_struct(boost::json::object&, VkMemoryDedicatedRequirements&);
    

        void serialize_struct(boost::json::object&, const VkMemoryDedicatedAllocateInfo&);
        void deserialize_struct(boost::json::object&, VkMemoryDedicatedAllocateInfo&);
    

        void serialize_struct(boost::json::object&, const VkImageViewUsageCreateInfo&);
        void deserialize_struct(boost::json::object&, VkImageViewUsageCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkImageViewSlicedCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkImageViewSlicedCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPipelineTessellationDomainOriginStateCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineTessellationDomainOriginStateCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkSamplerYcbcrConversionInfo&);
        void deserialize_struct(boost::json::object&, VkSamplerYcbcrConversionInfo&);
    

        void serialize_struct(boost::json::object&, const VkSamplerYcbcrConversionCreateInfo&);
        void deserialize_struct(boost::json::object&, VkSamplerYcbcrConversionCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkBindImagePlaneMemoryInfo&);
        void deserialize_struct(boost::json::object&, VkBindImagePlaneMemoryInfo&);
    

        void serialize_struct(boost::json::object&, const VkImagePlaneMemoryRequirementsInfo&);
        void deserialize_struct(boost::json::object&, VkImagePlaneMemoryRequirementsInfo&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceSamplerYcbcrConversionFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSamplerYcbcrConversionFeatures&);
    

        void serialize_struct(boost::json::object&, const VkSamplerYcbcrConversionImageFormatProperties&);
        void deserialize_struct(boost::json::object&, VkSamplerYcbcrConversionImageFormatProperties&);
    

        void serialize_struct(boost::json::object&, const VkTextureLODGatherFormatPropertiesAMD&);
        void deserialize_struct(boost::json::object&, VkTextureLODGatherFormatPropertiesAMD&);
    

        void serialize_struct(boost::json::object&, const VkConditionalRenderingBeginInfoEXT&);
        void deserialize_struct(boost::json::object&, VkConditionalRenderingBeginInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkProtectedSubmitInfo&);
        void deserialize_struct(boost::json::object&, VkProtectedSubmitInfo&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceProtectedMemoryFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceProtectedMemoryFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceProtectedMemoryProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceProtectedMemoryProperties&);
    

        void serialize_struct(boost::json::object&, const VkDeviceQueueInfo2&);
        void deserialize_struct(boost::json::object&, VkDeviceQueueInfo2&);
    

        void serialize_struct(boost::json::object&, const VkPipelineCoverageToColorStateCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineCoverageToColorStateCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceSamplerFilterMinmaxProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSamplerFilterMinmaxProperties&);
    

        void serialize_struct(boost::json::object&, const VkSampleLocationEXT&);
        void deserialize_struct(boost::json::object&, VkSampleLocationEXT&);
    

        void serialize_struct(boost::json::object&, const VkSampleLocationsInfoEXT&);
        void deserialize_struct(boost::json::object&, VkSampleLocationsInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkAttachmentSampleLocationsEXT&);
        void deserialize_struct(boost::json::object&, VkAttachmentSampleLocationsEXT&);
    

        void serialize_struct(boost::json::object&, const VkSubpassSampleLocationsEXT&);
        void deserialize_struct(boost::json::object&, VkSubpassSampleLocationsEXT&);
    

        void serialize_struct(boost::json::object&, const VkRenderPassSampleLocationsBeginInfoEXT&);
        void deserialize_struct(boost::json::object&, VkRenderPassSampleLocationsBeginInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPipelineSampleLocationsStateCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineSampleLocationsStateCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceSampleLocationsPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSampleLocationsPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkMultisamplePropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkMultisamplePropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkSamplerReductionModeCreateInfo&);
        void deserialize_struct(boost::json::object&, VkSamplerReductionModeCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMultiDrawFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMultiDrawFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPipelineColorBlendAdvancedStateCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineColorBlendAdvancedStateCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceInlineUniformBlockFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceInlineUniformBlockFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceInlineUniformBlockProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceInlineUniformBlockProperties&);
    

        void serialize_struct(boost::json::object&, const VkWriteDescriptorSetInlineUniformBlock&);
        void deserialize_struct(boost::json::object&, VkWriteDescriptorSetInlineUniformBlock&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorPoolInlineUniformBlockCreateInfo&);
        void deserialize_struct(boost::json::object&, VkDescriptorPoolInlineUniformBlockCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkPipelineCoverageModulationStateCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineCoverageModulationStateCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkImageFormatListCreateInfo&);
        void deserialize_struct(boost::json::object&, VkImageFormatListCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkValidationCacheCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkValidationCacheCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkShaderModuleValidationCacheCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkShaderModuleValidationCacheCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMaintenance3Properties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMaintenance3Properties&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMaintenance4Features&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMaintenance4Features&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMaintenance4Properties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMaintenance4Properties&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMaintenance5FeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMaintenance5FeaturesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMaintenance5PropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMaintenance5PropertiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkRenderingAreaInfoKHR&);
        void deserialize_struct(boost::json::object&, VkRenderingAreaInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorSetLayoutSupport&);
        void deserialize_struct(boost::json::object&, VkDescriptorSetLayoutSupport&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderDrawParametersFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderDrawParametersFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderFloat16Int8Features&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderFloat16Int8Features&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceFloatControlsProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFloatControlsProperties&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceHostQueryResetFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceHostQueryResetFeatures&);
    

        void serialize_struct(boost::json::object&, const VkShaderResourceUsageAMD&);
        void deserialize_struct(boost::json::object&, VkShaderResourceUsageAMD&);
    

        void serialize_struct(boost::json::object&, const VkShaderStatisticsInfoAMD&);
        void deserialize_struct(boost::json::object&, VkShaderStatisticsInfoAMD&);
    

        void serialize_struct(boost::json::object&, const VkDeviceQueueGlobalPriorityCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkDeviceQueueGlobalPriorityCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, const VkQueueFamilyGlobalPriorityPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkQueueFamilyGlobalPriorityPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkDebugUtilsObjectNameInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDebugUtilsObjectNameInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkDebugUtilsObjectTagInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDebugUtilsObjectTagInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkDebugUtilsLabelEXT&);
        void deserialize_struct(boost::json::object&, VkDebugUtilsLabelEXT&);
    

        void serialize_struct(boost::json::object&, const VkDebugUtilsMessengerCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDebugUtilsMessengerCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkDebugUtilsMessengerCallbackDataEXT&);
        void deserialize_struct(boost::json::object&, VkDebugUtilsMessengerCallbackDataEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDeviceMemoryReportFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkDeviceDeviceMemoryReportCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDeviceDeviceMemoryReportCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkDeviceMemoryReportCallbackDataEXT&);
        void deserialize_struct(boost::json::object&, VkDeviceMemoryReportCallbackDataEXT&);
    

        void serialize_struct(boost::json::object&, const VkImportMemoryHostPointerInfoEXT&);
        void deserialize_struct(boost::json::object&, VkImportMemoryHostPointerInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkMemoryHostPointerPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkMemoryHostPointerPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceExternalMemoryHostPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExternalMemoryHostPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceConservativeRasterizationPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceConservativeRasterizationPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkCalibratedTimestampInfoEXT&);
        void deserialize_struct(boost::json::object&, VkCalibratedTimestampInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderCorePropertiesAMD&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderCorePropertiesAMD&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderCoreProperties2AMD&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderCoreProperties2AMD&);
    

        void serialize_struct(boost::json::object&, const VkPipelineRasterizationConservativeStateCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineRasterizationConservativeStateCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDescriptorIndexingFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorIndexingFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDescriptorIndexingProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorIndexingProperties&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorSetLayoutBindingFlagsCreateInfo&);
        void deserialize_struct(boost::json::object&, VkDescriptorSetLayoutBindingFlagsCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorSetVariableDescriptorCountAllocateInfo&);
        void deserialize_struct(boost::json::object&, VkDescriptorSetVariableDescriptorCountAllocateInfo&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorSetVariableDescriptorCountLayoutSupport&);
        void deserialize_struct(boost::json::object&, VkDescriptorSetVariableDescriptorCountLayoutSupport&);
    

        void serialize_struct(boost::json::object&, const VkAttachmentDescription2&);
        void deserialize_struct(boost::json::object&, VkAttachmentDescription2&);
    

        void serialize_struct(boost::json::object&, const VkAttachmentReference2&);
        void deserialize_struct(boost::json::object&, VkAttachmentReference2&);
    

        void serialize_struct(boost::json::object&, const VkSubpassDescription2&);
        void deserialize_struct(boost::json::object&, VkSubpassDescription2&);
    

        void serialize_struct(boost::json::object&, const VkSubpassDependency2&);
        void deserialize_struct(boost::json::object&, VkSubpassDependency2&);
    

        void serialize_struct(boost::json::object&, const VkRenderPassCreateInfo2&);
        void deserialize_struct(boost::json::object&, VkRenderPassCreateInfo2&);
    

        void serialize_struct(boost::json::object&, const VkSubpassBeginInfo&);
        void deserialize_struct(boost::json::object&, VkSubpassBeginInfo&);
    

        void serialize_struct(boost::json::object&, const VkSubpassEndInfo&);
        void deserialize_struct(boost::json::object&, VkSubpassEndInfo&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceTimelineSemaphoreFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceTimelineSemaphoreFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceTimelineSemaphoreProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceTimelineSemaphoreProperties&);
    

        void serialize_struct(boost::json::object&, const VkSemaphoreTypeCreateInfo&);
        void deserialize_struct(boost::json::object&, VkSemaphoreTypeCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkTimelineSemaphoreSubmitInfo&);
        void deserialize_struct(boost::json::object&, VkTimelineSemaphoreSubmitInfo&);
    

        void serialize_struct(boost::json::object&, const VkSemaphoreWaitInfo&);
        void deserialize_struct(boost::json::object&, VkSemaphoreWaitInfo&);
    

        void serialize_struct(boost::json::object&, const VkSemaphoreSignalInfo&);
        void deserialize_struct(boost::json::object&, VkSemaphoreSignalInfo&);
    

        void serialize_struct(boost::json::object&, const VkVertexInputBindingDivisorDescriptionEXT&);
        void deserialize_struct(boost::json::object&, VkVertexInputBindingDivisorDescriptionEXT&);
    

        void serialize_struct(boost::json::object&, const VkPipelineVertexInputDivisorStateCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineVertexInputDivisorStateCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevicePCIBusInfoPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePCIBusInfoPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkCommandBufferInheritanceConditionalRenderingInfoEXT&);
        void deserialize_struct(boost::json::object&, VkCommandBufferInheritanceConditionalRenderingInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevice8BitStorageFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevice8BitStorageFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceConditionalRenderingFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceConditionalRenderingFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceVulkanMemoryModelFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVulkanMemoryModelFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderAtomicInt64Features&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderAtomicInt64Features&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderAtomicFloatFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkQueueFamilyCheckpointPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkQueueFamilyCheckpointPropertiesNV&);
    

        void serialize_struct(boost::json::object&, const VkCheckpointDataNV&);
        void deserialize_struct(boost::json::object&, VkCheckpointDataNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDepthStencilResolveProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDepthStencilResolveProperties&);
    

        void serialize_struct(boost::json::object&, const VkSubpassDescriptionDepthStencilResolve&);
        void deserialize_struct(boost::json::object&, VkSubpassDescriptionDepthStencilResolve&);
    

        void serialize_struct(boost::json::object&, const VkImageViewASTCDecodeModeEXT&);
        void deserialize_struct(boost::json::object&, VkImageViewASTCDecodeModeEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceASTCDecodeFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceASTCDecodeFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceTransformFeedbackFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceTransformFeedbackFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceTransformFeedbackPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceTransformFeedbackPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPipelineRasterizationStateStreamCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineRasterizationStateStreamCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkPipelineRepresentativeFragmentTestStateCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineRepresentativeFragmentTestStateCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceExclusiveScissorFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExclusiveScissorFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkPipelineViewportExclusiveScissorStateCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineViewportExclusiveScissorStateCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceCornerSampledImageFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCornerSampledImageFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceComputeShaderDerivativesFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderImageFootprintFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderImageFootprintFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCopyMemoryIndirectFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceCopyMemoryIndirectPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCopyMemoryIndirectPropertiesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMemoryDecompressionFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMemoryDecompressionFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMemoryDecompressionPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMemoryDecompressionPropertiesNV&);
    

        void serialize_struct(boost::json::object&, const VkShadingRatePaletteNV&);
        void deserialize_struct(boost::json::object&, VkShadingRatePaletteNV&);
    

        void serialize_struct(boost::json::object&, const VkPipelineViewportShadingRateImageStateCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineViewportShadingRateImageStateCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShadingRateImageFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShadingRateImageFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShadingRateImagePropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShadingRateImagePropertiesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceInvocationMaskFeaturesHUAWEI&);
    

        void serialize_struct(boost::json::object&, const VkCoarseSampleLocationNV&);
        void deserialize_struct(boost::json::object&, VkCoarseSampleLocationNV&);
    

        void serialize_struct(boost::json::object&, const VkCoarseSampleOrderCustomNV&);
        void deserialize_struct(boost::json::object&, VkCoarseSampleOrderCustomNV&);
    

        void serialize_struct(boost::json::object&, const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineViewportCoarseSampleOrderStateCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMeshShaderFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMeshShaderFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMeshShaderPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMeshShaderPropertiesNV&);
    

        void serialize_struct(boost::json::object&, const VkDrawMeshTasksIndirectCommandNV&);
        void deserialize_struct(boost::json::object&, VkDrawMeshTasksIndirectCommandNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMeshShaderFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMeshShaderFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMeshShaderPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMeshShaderPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkDrawMeshTasksIndirectCommandEXT&);
        void deserialize_struct(boost::json::object&, VkDrawMeshTasksIndirectCommandEXT&);
    

        void serialize_struct(boost::json::object&, const VkRayTracingShaderGroupCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkRayTracingShaderGroupCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkRayTracingShaderGroupCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkRayTracingShaderGroupCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkRayTracingPipelineCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkRayTracingPipelineCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkRayTracingPipelineCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkRayTracingPipelineCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkGeometryTrianglesNV&);
        void deserialize_struct(boost::json::object&, VkGeometryTrianglesNV&);
    

        void serialize_struct(boost::json::object&, const VkGeometryAABBNV&);
        void deserialize_struct(boost::json::object&, VkGeometryAABBNV&);
    

        void serialize_struct(boost::json::object&, const VkGeometryDataNV&);
        void deserialize_struct(boost::json::object&, VkGeometryDataNV&);
    

        void serialize_struct(boost::json::object&, const VkGeometryNV&);
        void deserialize_struct(boost::json::object&, VkGeometryNV&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureInfoNV&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkBindAccelerationStructureMemoryInfoNV&);
        void deserialize_struct(boost::json::object&, VkBindAccelerationStructureMemoryInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkWriteDescriptorSetAccelerationStructureKHR&);
        void deserialize_struct(boost::json::object&, VkWriteDescriptorSetAccelerationStructureKHR&);
    

        void serialize_struct(boost::json::object&, const VkWriteDescriptorSetAccelerationStructureNV&);
        void deserialize_struct(boost::json::object&, VkWriteDescriptorSetAccelerationStructureNV&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureMemoryRequirementsInfoNV&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureMemoryRequirementsInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceAccelerationStructureFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceAccelerationStructureFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceRayTracingPipelineFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingPipelineFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceRayQueryFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRayQueryFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceAccelerationStructurePropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceAccelerationStructurePropertiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceRayTracingPipelinePropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingPipelinePropertiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceRayTracingPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingPropertiesNV&);
    

        void serialize_struct(boost::json::object&, const VkStridedDeviceAddressRegionKHR&);
        void deserialize_struct(boost::json::object&, VkStridedDeviceAddressRegionKHR&);
    

        void serialize_struct(boost::json::object&, const VkTraceRaysIndirectCommandKHR&);
        void deserialize_struct(boost::json::object&, VkTraceRaysIndirectCommandKHR&);
    

        void serialize_struct(boost::json::object&, const VkTraceRaysIndirectCommand2KHR&);
        void deserialize_struct(boost::json::object&, VkTraceRaysIndirectCommand2KHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR&);
    

        void serialize_struct(boost::json::object&, const VkDrmFormatModifierPropertiesListEXT&);
        void deserialize_struct(boost::json::object&, VkDrmFormatModifierPropertiesListEXT&);
    

        void serialize_struct(boost::json::object&, const VkDrmFormatModifierPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkDrmFormatModifierPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceImageDrmFormatModifierInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageDrmFormatModifierInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkImageDrmFormatModifierListCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkImageDrmFormatModifierListCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkImageDrmFormatModifierExplicitCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkImageDrmFormatModifierExplicitCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkImageDrmFormatModifierPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkImageDrmFormatModifierPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkImageStencilUsageCreateInfo&);
        void deserialize_struct(boost::json::object&, VkImageStencilUsageCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkDeviceMemoryOverallocationCreateInfoAMD&);
        void deserialize_struct(boost::json::object&, VkDeviceMemoryOverallocationCreateInfoAMD&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceFragmentDensityMapFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentDensityMapFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentDensityMap2FeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceFragmentDensityMapPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentDensityMapPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentDensityMap2PropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM&);
    

        void serialize_struct(boost::json::object&, const VkRenderPassFragmentDensityMapCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkRenderPassFragmentDensityMapCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkSubpassFragmentDensityMapOffsetEndInfoQCOM&);
        void deserialize_struct(boost::json::object&, VkSubpassFragmentDensityMapOffsetEndInfoQCOM&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceScalarBlockLayoutFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceScalarBlockLayoutFeatures&);
    

        void serialize_struct(boost::json::object&, const VkSurfaceProtectedCapabilitiesKHR&);
        void deserialize_struct(boost::json::object&, VkSurfaceProtectedCapabilitiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceUniformBufferStandardLayoutFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceUniformBufferStandardLayoutFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDepthClipEnableFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDepthClipEnableFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPipelineRasterizationDepthClipStateCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineRasterizationDepthClipStateCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMemoryBudgetPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMemoryBudgetPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMemoryPriorityFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMemoryPriorityFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkMemoryPriorityAllocateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkMemoryPriorityAllocateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceBufferDeviceAddressFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceBufferDeviceAddressFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceBufferDeviceAddressFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkBufferDeviceAddressInfo&);
        void deserialize_struct(boost::json::object&, VkBufferDeviceAddressInfo&);
    

        void serialize_struct(boost::json::object&, const VkBufferOpaqueCaptureAddressCreateInfo&);
        void deserialize_struct(boost::json::object&, VkBufferOpaqueCaptureAddressCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkBufferDeviceAddressCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkBufferDeviceAddressCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceImageViewImageFormatInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageViewImageFormatInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkFilterCubicImageViewImageFormatPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkFilterCubicImageViewImageFormatPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceImagelessFramebufferFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImagelessFramebufferFeatures&);
    

        void serialize_struct(boost::json::object&, const VkFramebufferAttachmentsCreateInfo&);
        void deserialize_struct(boost::json::object&, VkFramebufferAttachmentsCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkFramebufferAttachmentImageInfo&);
        void deserialize_struct(boost::json::object&, VkFramebufferAttachmentImageInfo&);
    

        void serialize_struct(boost::json::object&, const VkRenderPassAttachmentBeginInfo&);
        void deserialize_struct(boost::json::object&, VkRenderPassAttachmentBeginInfo&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceTextureCompressionASTCHDRFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceTextureCompressionASTCHDRFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceCooperativeMatrixFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCooperativeMatrixFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceCooperativeMatrixPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCooperativeMatrixPropertiesNV&);
    

        void serialize_struct(boost::json::object&, const VkCooperativeMatrixPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkCooperativeMatrixPropertiesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceYcbcrImageArraysFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkImageViewHandleInfoNVX&);
        void deserialize_struct(boost::json::object&, VkImageViewHandleInfoNVX&);
    

        void serialize_struct(boost::json::object&, const VkImageViewAddressPropertiesNVX&);
        void deserialize_struct(boost::json::object&, VkImageViewAddressPropertiesNVX&);
    

        void serialize_struct(boost::json::object&, const VkPipelineCreationFeedback&);
        void deserialize_struct(boost::json::object&, VkPipelineCreationFeedback&);
    

        void serialize_struct(boost::json::object&, const VkPipelineCreationFeedbackCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineCreationFeedbackCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevicePresentBarrierFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePresentBarrierFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkSurfaceCapabilitiesPresentBarrierNV&);
        void deserialize_struct(boost::json::object&, VkSurfaceCapabilitiesPresentBarrierNV&);
    

        void serialize_struct(boost::json::object&, const VkSwapchainPresentBarrierCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkSwapchainPresentBarrierCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevicePerformanceQueryFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePerformanceQueryFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevicePerformanceQueryPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePerformanceQueryPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPerformanceCounterKHR&);
        void deserialize_struct(boost::json::object&, VkPerformanceCounterKHR&);
    

        void serialize_struct(boost::json::object&, const VkPerformanceCounterDescriptionKHR&);
        void deserialize_struct(boost::json::object&, VkPerformanceCounterDescriptionKHR&);
    

        void serialize_struct(boost::json::object&, const VkQueryPoolPerformanceCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkQueryPoolPerformanceCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkPerformanceCounterResultKHR&);
        void deserialize_struct(boost::json::object&, VkPerformanceCounterResultKHR&);
    

        void serialize_struct(boost::json::object&, const VkAcquireProfilingLockInfoKHR&);
        void deserialize_struct(boost::json::object&, VkAcquireProfilingLockInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkPerformanceQuerySubmitInfoKHR&);
        void deserialize_struct(boost::json::object&, VkPerformanceQuerySubmitInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkHeadlessSurfaceCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkHeadlessSurfaceCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceCoverageReductionModeFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCoverageReductionModeFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkPipelineCoverageReductionStateCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineCoverageReductionStateCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkFramebufferMixedSamplesCombinationNV&);
        void deserialize_struct(boost::json::object&, VkFramebufferMixedSamplesCombinationNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL&);
    

        void serialize_struct(boost::json::object&, const VkPerformanceValueDataINTEL&);
        void deserialize_struct(boost::json::object&, VkPerformanceValueDataINTEL&);
    

        void serialize_struct(boost::json::object&, const VkPerformanceValueINTEL&);
        void deserialize_struct(boost::json::object&, VkPerformanceValueINTEL&);
    

        void serialize_struct(boost::json::object&, const VkInitializePerformanceApiInfoINTEL&);
        void deserialize_struct(boost::json::object&, VkInitializePerformanceApiInfoINTEL&);
    

        void serialize_struct(boost::json::object&, const VkQueryPoolPerformanceQueryCreateInfoINTEL&);
        void deserialize_struct(boost::json::object&, VkQueryPoolPerformanceQueryCreateInfoINTEL&);
    

        void serialize_struct(boost::json::object&, const VkPerformanceMarkerInfoINTEL&);
        void deserialize_struct(boost::json::object&, VkPerformanceMarkerInfoINTEL&);
    

        void serialize_struct(boost::json::object&, const VkPerformanceStreamMarkerInfoINTEL&);
        void deserialize_struct(boost::json::object&, VkPerformanceStreamMarkerInfoINTEL&);
    

        void serialize_struct(boost::json::object&, const VkPerformanceOverrideInfoINTEL&);
        void deserialize_struct(boost::json::object&, VkPerformanceOverrideInfoINTEL&);
    

        void serialize_struct(boost::json::object&, const VkPerformanceConfigurationAcquireInfoINTEL&);
        void deserialize_struct(boost::json::object&, VkPerformanceConfigurationAcquireInfoINTEL&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderClockFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderClockFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceIndexTypeUint8FeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceIndexTypeUint8FeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderSMBuiltinsPropertiesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderSMBuiltinsFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures&);
    

        void serialize_struct(boost::json::object&, const VkAttachmentReferenceStencilLayout&);
        void deserialize_struct(boost::json::object&, VkAttachmentReferenceStencilLayout&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkAttachmentDescriptionStencilLayout&);
        void deserialize_struct(boost::json::object&, VkAttachmentDescriptionStencilLayout&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPipelineInfoKHR&);
        void deserialize_struct(boost::json::object&, VkPipelineInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkPipelineExecutablePropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkPipelineExecutablePropertiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPipelineExecutableInfoKHR&);
        void deserialize_struct(boost::json::object&, VkPipelineExecutableInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkPipelineExecutableStatisticValueKHR&);
        void deserialize_struct(boost::json::object&, VkPipelineExecutableStatisticValueKHR&);
    

        void serialize_struct(boost::json::object&, const VkPipelineExecutableStatisticKHR&);
        void deserialize_struct(boost::json::object&, VkPipelineExecutableStatisticKHR&);
    

        void serialize_struct(boost::json::object&, const VkPipelineExecutableInternalRepresentationKHR&);
        void deserialize_struct(boost::json::object&, VkPipelineExecutableInternalRepresentationKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceTexelBufferAlignmentProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceTexelBufferAlignmentProperties&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceSubgroupSizeControlFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSubgroupSizeControlFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceSubgroupSizeControlProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSubgroupSizeControlProperties&);
    

        void serialize_struct(boost::json::object&, const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineShaderStageRequiredSubgroupSizeCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkSubpassShadingPipelineCreateInfoHUAWEI&);
        void deserialize_struct(boost::json::object&, VkSubpassShadingPipelineCreateInfoHUAWEI&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceSubpassShadingPropertiesHUAWEI&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSubpassShadingPropertiesHUAWEI&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI&);
    

        void serialize_struct(boost::json::object&, const VkMemoryOpaqueCaptureAddressAllocateInfo&);
        void deserialize_struct(boost::json::object&, VkMemoryOpaqueCaptureAddressAllocateInfo&);
    

        void serialize_struct(boost::json::object&, const VkDeviceMemoryOpaqueCaptureAddressInfo&);
        void deserialize_struct(boost::json::object&, VkDeviceMemoryOpaqueCaptureAddressInfo&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceLineRasterizationFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceLineRasterizationFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceLineRasterizationPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceLineRasterizationPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPipelineRasterizationLineStateCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineRasterizationLineStateCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevicePipelineCreationCacheControlFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePipelineCreationCacheControlFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceVulkan11Features&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVulkan11Features&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceVulkan11Properties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVulkan11Properties&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceVulkan12Features&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVulkan12Features&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceVulkan12Properties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVulkan12Properties&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceVulkan13Features&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVulkan13Features&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceVulkan13Properties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVulkan13Properties&);
    

        void serialize_struct(boost::json::object&, const VkPipelineCompilerControlCreateInfoAMD&);
        void deserialize_struct(boost::json::object&, VkPipelineCompilerControlCreateInfoAMD&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceCoherentMemoryFeaturesAMD&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCoherentMemoryFeaturesAMD&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceToolProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceToolProperties&);
    

        void serialize_struct(boost::json::object&, const VkSamplerCustomBorderColorCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkSamplerCustomBorderColorCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceCustomBorderColorPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCustomBorderColorPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceCustomBorderColorFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCustomBorderColorFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkSamplerBorderColorComponentMappingCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkSamplerBorderColorComponentMappingCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceBorderColorSwizzleFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkDeviceOrHostAddressKHR&);
        void deserialize_struct(boost::json::object&, VkDeviceOrHostAddressKHR&);
    

        void serialize_struct(boost::json::object&, const VkDeviceOrHostAddressConstKHR&);
        void deserialize_struct(boost::json::object&, VkDeviceOrHostAddressConstKHR&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureGeometryTrianglesDataKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureGeometryTrianglesDataKHR&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureGeometryAabbsDataKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureGeometryAabbsDataKHR&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureGeometryInstancesDataKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureGeometryInstancesDataKHR&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureGeometryDataKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureGeometryDataKHR&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureGeometryKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureGeometryKHR&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureBuildGeometryInfoKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureBuildGeometryInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureBuildRangeInfoKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureBuildRangeInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkAabbPositionsKHR&);
        void deserialize_struct(boost::json::object&, VkAabbPositionsKHR&);
    

        void serialize_struct(boost::json::object&, const VkTransformMatrixKHR&);
        void deserialize_struct(boost::json::object&, VkTransformMatrixKHR&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureInstanceKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureInstanceKHR&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureDeviceAddressInfoKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureDeviceAddressInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureVersionInfoKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureVersionInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkCopyAccelerationStructureInfoKHR&);
        void deserialize_struct(boost::json::object&, VkCopyAccelerationStructureInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkCopyAccelerationStructureToMemoryInfoKHR&);
        void deserialize_struct(boost::json::object&, VkCopyAccelerationStructureToMemoryInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkCopyMemoryToAccelerationStructureInfoKHR&);
        void deserialize_struct(boost::json::object&, VkCopyMemoryToAccelerationStructureInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkRayTracingPipelineInterfaceCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkRayTracingPipelineInterfaceCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkPipelineLibraryCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkPipelineLibraryCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExtendedDynamicStateFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExtendedDynamicState2FeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExtendedDynamicState3FeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceExtendedDynamicState3PropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExtendedDynamicState3PropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkColorBlendEquationEXT&);
        void deserialize_struct(boost::json::object&, VkColorBlendEquationEXT&);
    

        void serialize_struct(boost::json::object&, const VkColorBlendAdvancedEXT&);
        void deserialize_struct(boost::json::object&, VkColorBlendAdvancedEXT&);
    

        void serialize_struct(boost::json::object&, const VkRenderPassTransformBeginInfoQCOM&);
        void deserialize_struct(boost::json::object&, VkRenderPassTransformBeginInfoQCOM&);
    

        void serialize_struct(boost::json::object&, const VkCopyCommandTransformInfoQCOM&);
        void deserialize_struct(boost::json::object&, VkCopyCommandTransformInfoQCOM&);
    

        void serialize_struct(boost::json::object&, const VkCommandBufferInheritanceRenderPassTransformInfoQCOM&);
        void deserialize_struct(boost::json::object&, VkCommandBufferInheritanceRenderPassTransformInfoQCOM&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDiagnosticsConfigFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDiagnosticsConfigFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkDeviceDiagnosticsConfigCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkDeviceDiagnosticsConfigCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceRobustness2FeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRobustness2FeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceRobustness2PropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRobustness2PropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceImageRobustnessFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageRobustnessFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevice4444FormatsFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevice4444FormatsFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSubpassShadingFeaturesHUAWEI&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI&);
    

        void serialize_struct(boost::json::object&, const VkBufferCopy2&);
        void deserialize_struct(boost::json::object&, VkBufferCopy2&);
    

        void serialize_struct(boost::json::object&, const VkImageCopy2&);
        void deserialize_struct(boost::json::object&, VkImageCopy2&);
    

        void serialize_struct(boost::json::object&, const VkImageBlit2&);
        void deserialize_struct(boost::json::object&, VkImageBlit2&);
    

        void serialize_struct(boost::json::object&, const VkBufferImageCopy2&);
        void deserialize_struct(boost::json::object&, VkBufferImageCopy2&);
    

        void serialize_struct(boost::json::object&, const VkImageResolve2&);
        void deserialize_struct(boost::json::object&, VkImageResolve2&);
    

        void serialize_struct(boost::json::object&, const VkCopyBufferInfo2&);
        void deserialize_struct(boost::json::object&, VkCopyBufferInfo2&);
    

        void serialize_struct(boost::json::object&, const VkCopyImageInfo2&);
        void deserialize_struct(boost::json::object&, VkCopyImageInfo2&);
    

        void serialize_struct(boost::json::object&, const VkBlitImageInfo2&);
        void deserialize_struct(boost::json::object&, VkBlitImageInfo2&);
    

        void serialize_struct(boost::json::object&, const VkCopyBufferToImageInfo2&);
        void deserialize_struct(boost::json::object&, VkCopyBufferToImageInfo2&);
    

        void serialize_struct(boost::json::object&, const VkCopyImageToBufferInfo2&);
        void deserialize_struct(boost::json::object&, VkCopyImageToBufferInfo2&);
    

        void serialize_struct(boost::json::object&, const VkResolveImageInfo2&);
        void deserialize_struct(boost::json::object&, VkResolveImageInfo2&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkFragmentShadingRateAttachmentInfoKHR&);
        void deserialize_struct(boost::json::object&, VkFragmentShadingRateAttachmentInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkPipelineFragmentShadingRateStateCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkPipelineFragmentShadingRateStateCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceFragmentShadingRateFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShadingRateFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceFragmentShadingRatePropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShadingRatePropertiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceFragmentShadingRateKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShadingRateKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderTerminateInvocationFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderTerminateInvocationFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV&);
    

        void serialize_struct(boost::json::object&, const VkPipelineFragmentShadingRateEnumStateCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkPipelineFragmentShadingRateEnumStateCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureBuildSizesInfoKHR&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureBuildSizesInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImage2DViewOf3DFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkMutableDescriptorTypeListEXT&);
        void deserialize_struct(boost::json::object&, VkMutableDescriptorTypeListEXT&);
    

        void serialize_struct(boost::json::object&, const VkMutableDescriptorTypeCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkMutableDescriptorTypeCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDepthClipControlFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDepthClipControlFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPipelineViewportDepthClipControlCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineViewportDepthClipControlCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceExternalMemoryRDMAFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkVertexInputBindingDescription2EXT&);
        void deserialize_struct(boost::json::object&, VkVertexInputBindingDescription2EXT&);
    

        void serialize_struct(boost::json::object&, const VkVertexInputAttributeDescription2EXT&);
        void deserialize_struct(boost::json::object&, VkVertexInputAttributeDescription2EXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceColorWriteEnableFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceColorWriteEnableFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPipelineColorWriteCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineColorWriteCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkMemoryBarrier2&);
        void deserialize_struct(boost::json::object&, VkMemoryBarrier2&);
    

        void serialize_struct(boost::json::object&, const VkImageMemoryBarrier2&);
        void deserialize_struct(boost::json::object&, VkImageMemoryBarrier2&);
    

        void serialize_struct(boost::json::object&, const VkBufferMemoryBarrier2&);
        void deserialize_struct(boost::json::object&, VkBufferMemoryBarrier2&);
    

        void serialize_struct(boost::json::object&, const VkDependencyInfo&);
        void deserialize_struct(boost::json::object&, VkDependencyInfo&);
    

        void serialize_struct(boost::json::object&, const VkSemaphoreSubmitInfo&);
        void deserialize_struct(boost::json::object&, VkSemaphoreSubmitInfo&);
    

        void serialize_struct(boost::json::object&, const VkCommandBufferSubmitInfo&);
        void deserialize_struct(boost::json::object&, VkCommandBufferSubmitInfo&);
    

        void serialize_struct(boost::json::object&, const VkSubmitInfo2&);
        void deserialize_struct(boost::json::object&, VkSubmitInfo2&);
    

        void serialize_struct(boost::json::object&, const VkQueueFamilyCheckpointProperties2NV&);
        void deserialize_struct(boost::json::object&, VkQueueFamilyCheckpointProperties2NV&);
    

        void serialize_struct(boost::json::object&, const VkCheckpointData2NV&);
        void deserialize_struct(boost::json::object&, VkCheckpointData2NV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceSynchronization2Features&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSynchronization2Features&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceHostImageCopyFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceHostImageCopyFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceHostImageCopyPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceHostImageCopyPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkMemoryToImageCopyEXT&);
        void deserialize_struct(boost::json::object&, VkMemoryToImageCopyEXT&);
    

        void serialize_struct(boost::json::object&, const VkImageToMemoryCopyEXT&);
        void deserialize_struct(boost::json::object&, VkImageToMemoryCopyEXT&);
    

        void serialize_struct(boost::json::object&, const VkCopyMemoryToImageInfoEXT&);
        void deserialize_struct(boost::json::object&, VkCopyMemoryToImageInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkCopyImageToMemoryInfoEXT&);
        void deserialize_struct(boost::json::object&, VkCopyImageToMemoryInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkCopyImageToImageInfoEXT&);
        void deserialize_struct(boost::json::object&, VkCopyImageToImageInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkHostImageLayoutTransitionInfoEXT&);
        void deserialize_struct(boost::json::object&, VkHostImageLayoutTransitionInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkSubresourceHostMemcpySizeEXT&);
        void deserialize_struct(boost::json::object&, VkSubresourceHostMemcpySizeEXT&);
    

        void serialize_struct(boost::json::object&, const VkHostImageCopyDevicePerformanceQueryEXT&);
        void deserialize_struct(boost::json::object&, VkHostImageCopyDevicePerformanceQueryEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceLegacyDitheringFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceLegacyDitheringFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkSubpassResolvePerformanceQueryEXT&);
        void deserialize_struct(boost::json::object&, VkSubpassResolvePerformanceQueryEXT&);
    

        void serialize_struct(boost::json::object&, const VkMultisampledRenderToSingleSampledInfoEXT&);
        void deserialize_struct(boost::json::object&, VkMultisampledRenderToSingleSampledInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePipelineProtectedAccessFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkQueueFamilyVideoPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkQueueFamilyVideoPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkQueueFamilyQueryResultStatusPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkQueueFamilyQueryResultStatusPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoProfileListInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoProfileListInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceVideoFormatInfoKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceVideoFormatInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoFormatPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkVideoFormatPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoProfileInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoProfileInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoCapabilitiesKHR&);
        void deserialize_struct(boost::json::object&, VkVideoCapabilitiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoSessionMemoryRequirementsKHR&);
        void deserialize_struct(boost::json::object&, VkVideoSessionMemoryRequirementsKHR&);
    

        void serialize_struct(boost::json::object&, const VkBindVideoSessionMemoryInfoKHR&);
        void deserialize_struct(boost::json::object&, VkBindVideoSessionMemoryInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoPictureResourceInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoPictureResourceInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoReferenceSlotInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoReferenceSlotInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoDecodeCapabilitiesKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeCapabilitiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoDecodeUsageInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeUsageInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoDecodeInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoDecodeH264ProfileInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH264ProfileInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoDecodeH264CapabilitiesKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH264CapabilitiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoDecodeH264SessionParametersAddInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH264SessionParametersAddInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoDecodeH264SessionParametersCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH264SessionParametersCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoDecodeH264PictureInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH264PictureInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoDecodeH264DpbSlotInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH264DpbSlotInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoDecodeH265ProfileInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH265ProfileInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoDecodeH265CapabilitiesKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH265CapabilitiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoDecodeH265SessionParametersAddInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH265SessionParametersAddInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoDecodeH265SessionParametersCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH265SessionParametersCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoDecodeH265PictureInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH265PictureInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoDecodeH265DpbSlotInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoDecodeH265DpbSlotInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoSessionCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoSessionCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoSessionParametersCreateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoSessionParametersCreateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoSessionParametersUpdateInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoSessionParametersUpdateInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoBeginCodingInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoBeginCodingInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoEndCodingInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoEndCodingInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkVideoCodingControlInfoKHR&);
        void deserialize_struct(boost::json::object&, VkVideoCodingControlInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceInheritedViewportScissorFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceInheritedViewportScissorFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkCommandBufferInheritanceViewportScissorInfoNV&);
        void deserialize_struct(boost::json::object&, VkCommandBufferInheritanceViewportScissorInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceProvokingVertexFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceProvokingVertexFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceProvokingVertexPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceProvokingVertexPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineRasterizationProvokingVertexStateCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkCuModuleCreateInfoNVX&);
        void deserialize_struct(boost::json::object&, VkCuModuleCreateInfoNVX&);
    

        void serialize_struct(boost::json::object&, const VkCuFunctionCreateInfoNVX&);
        void deserialize_struct(boost::json::object&, VkCuFunctionCreateInfoNVX&);
    

        void serialize_struct(boost::json::object&, const VkCuLaunchInfoNVX&);
        void deserialize_struct(boost::json::object&, VkCuLaunchInfoNVX&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDescriptorBufferFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorBufferFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDescriptorBufferPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorBufferPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorAddressInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDescriptorAddressInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorBufferBindingInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDescriptorBufferBindingInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorBufferBindingPushDescriptorBufferHandleEXT&);
        void deserialize_struct(boost::json::object&, VkDescriptorBufferBindingPushDescriptorBufferHandleEXT&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorDataEXT&);
        void deserialize_struct(boost::json::object&, VkDescriptorDataEXT&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorGetInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDescriptorGetInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkBufferCaptureDescriptorDataInfoEXT&);
        void deserialize_struct(boost::json::object&, VkBufferCaptureDescriptorDataInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkImageCaptureDescriptorDataInfoEXT&);
        void deserialize_struct(boost::json::object&, VkImageCaptureDescriptorDataInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkImageViewCaptureDescriptorDataInfoEXT&);
        void deserialize_struct(boost::json::object&, VkImageViewCaptureDescriptorDataInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkSamplerCaptureDescriptorDataInfoEXT&);
        void deserialize_struct(boost::json::object&, VkSamplerCaptureDescriptorDataInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureCaptureDescriptorDataInfoEXT&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureCaptureDescriptorDataInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkOpaqueCaptureDescriptorDataCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkOpaqueCaptureDescriptorDataCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderIntegerDotProductFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderIntegerDotProductFeatures&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderIntegerDotProductProperties&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderIntegerDotProductProperties&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDrmPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDrmPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingMotionBlurFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureGeometryMotionTrianglesDataNV&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureGeometryMotionTrianglesDataNV&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureMotionInfoNV&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureMotionInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkSRTDataNV&);
        void deserialize_struct(boost::json::object&, VkSRTDataNV&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureSRTMotionInstanceNV&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureSRTMotionInstanceNV&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureMatrixMotionInstanceNV&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureMatrixMotionInstanceNV&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureMotionInstanceDataNV&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureMotionInstanceDataNV&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureMotionInstanceNV&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureMotionInstanceNV&);
    

        void serialize_struct(boost::json::object&, const VkMemoryGetRemoteAddressInfoNV&);
        void deserialize_struct(boost::json::object&, VkMemoryGetRemoteAddressInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkFormatProperties3&);
        void deserialize_struct(boost::json::object&, VkFormatProperties3&);
    

        void serialize_struct(boost::json::object&, const VkDrmFormatModifierPropertiesList2EXT&);
        void deserialize_struct(boost::json::object&, VkDrmFormatModifierPropertiesList2EXT&);
    

        void serialize_struct(boost::json::object&, const VkDrmFormatModifierProperties2EXT&);
        void deserialize_struct(boost::json::object&, VkDrmFormatModifierProperties2EXT&);
    

        void serialize_struct(boost::json::object&, const VkPipelineRenderingCreateInfo&);
        void deserialize_struct(boost::json::object&, VkPipelineRenderingCreateInfo&);
    

        void serialize_struct(boost::json::object&, const VkRenderingInfo&);
        void deserialize_struct(boost::json::object&, VkRenderingInfo&);
    

        void serialize_struct(boost::json::object&, const VkRenderingAttachmentInfo&);
        void deserialize_struct(boost::json::object&, VkRenderingAttachmentInfo&);
    

        void serialize_struct(boost::json::object&, const VkRenderingFragmentShadingRateAttachmentInfoKHR&);
        void deserialize_struct(boost::json::object&, VkRenderingFragmentShadingRateAttachmentInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkRenderingFragmentDensityMapAttachmentInfoEXT&);
        void deserialize_struct(boost::json::object&, VkRenderingFragmentDensityMapAttachmentInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDynamicRenderingFeatures&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDynamicRenderingFeatures&);
    

        void serialize_struct(boost::json::object&, const VkCommandBufferInheritanceRenderingInfo&);
        void deserialize_struct(boost::json::object&, VkCommandBufferInheritanceRenderingInfo&);
    

        void serialize_struct(boost::json::object&, const VkAttachmentSampleCountInfoAMD&);
        void deserialize_struct(boost::json::object&, VkAttachmentSampleCountInfoAMD&);
    

        void serialize_struct(boost::json::object&, const VkMultiviewPerViewAttributesInfoNVX&);
        void deserialize_struct(boost::json::object&, VkMultiviewPerViewAttributesInfoNVX&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceImageViewMinLodFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageViewMinLodFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkImageViewMinLodCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkImageViewMinLodCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceLinearColorAttachmentFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceLinearColorAttachmentFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkGraphicsPipelineLibraryCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkGraphicsPipelineLibraryCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorSetBindingReferenceVALVE&);
        void deserialize_struct(boost::json::object&, VkDescriptorSetBindingReferenceVALVE&);
    

        void serialize_struct(boost::json::object&, const VkDescriptorSetLayoutHostMappingInfoVALVE&);
        void deserialize_struct(boost::json::object&, VkDescriptorSetLayoutHostMappingInfoVALVE&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPipelineShaderStageModuleIdentifierCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineShaderStageModuleIdentifierCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkShaderModuleIdentifierEXT&);
        void deserialize_struct(boost::json::object&, VkShaderModuleIdentifierEXT&);
    

        void serialize_struct(boost::json::object&, const VkImageCompressionControlEXT&);
        void deserialize_struct(boost::json::object&, VkImageCompressionControlEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceImageCompressionControlFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageCompressionControlFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkImageCompressionPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkImageCompressionPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkImageSubresource2KHR&);
        void deserialize_struct(boost::json::object&, VkImageSubresource2KHR&);
    

        void serialize_struct(boost::json::object&, const VkSubresourceLayout2KHR&);
        void deserialize_struct(boost::json::object&, VkSubresourceLayout2KHR&);
    

        void serialize_struct(boost::json::object&, const VkRenderPassCreationControlEXT&);
        void deserialize_struct(boost::json::object&, VkRenderPassCreationControlEXT&);
    

        void serialize_struct(boost::json::object&, const VkRenderPassCreationFeedbackInfoEXT&);
        void deserialize_struct(boost::json::object&, VkRenderPassCreationFeedbackInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkRenderPassCreationFeedbackCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkRenderPassCreationFeedbackCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkRenderPassSubpassFeedbackInfoEXT&);
        void deserialize_struct(boost::json::object&, VkRenderPassSubpassFeedbackInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkRenderPassSubpassFeedbackCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkRenderPassSubpassFeedbackCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkMicromapBuildInfoEXT&);
        void deserialize_struct(boost::json::object&, VkMicromapBuildInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkMicromapCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkMicromapCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkMicromapVersionInfoEXT&);
        void deserialize_struct(boost::json::object&, VkMicromapVersionInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkCopyMicromapInfoEXT&);
        void deserialize_struct(boost::json::object&, VkCopyMicromapInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkCopyMicromapToMemoryInfoEXT&);
        void deserialize_struct(boost::json::object&, VkCopyMicromapToMemoryInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkCopyMemoryToMicromapInfoEXT&);
        void deserialize_struct(boost::json::object&, VkCopyMemoryToMicromapInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkMicromapBuildSizesInfoEXT&);
        void deserialize_struct(boost::json::object&, VkMicromapBuildSizesInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkMicromapUsageEXT&);
        void deserialize_struct(boost::json::object&, VkMicromapUsageEXT&);
    

        void serialize_struct(boost::json::object&, const VkMicromapTriangleEXT&);
        void deserialize_struct(boost::json::object&, VkMicromapTriangleEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceOpacityMicromapFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceOpacityMicromapFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceOpacityMicromapPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceOpacityMicromapPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkAccelerationStructureTrianglesOpacityMicromapEXT&);
        void deserialize_struct(boost::json::object&, VkAccelerationStructureTrianglesOpacityMicromapEXT&);
    

        void serialize_struct(boost::json::object&, const VkPipelinePropertiesIdentifierEXT&);
        void deserialize_struct(boost::json::object&, VkPipelinePropertiesIdentifierEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevicePipelinePropertiesFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePipelinePropertiesFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD&);
    

        void serialize_struct(boost::json::object&, const VkExternalMemoryAcquireUnmodifiedEXT&);
        void deserialize_struct(boost::json::object&, VkExternalMemoryAcquireUnmodifiedEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevicePipelineRobustnessFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePipelineRobustnessFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPipelineRobustnessCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkPipelineRobustnessCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevicePipelineRobustnessPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePipelineRobustnessPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkImageViewSampleWeightCreateInfoQCOM&);
        void deserialize_struct(boost::json::object&, VkImageViewSampleWeightCreateInfoQCOM&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceImageProcessingFeaturesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageProcessingFeaturesQCOM&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceImageProcessingPropertiesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageProcessingPropertiesQCOM&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceTilePropertiesFeaturesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceTilePropertiesFeaturesQCOM&);
    

        void serialize_struct(boost::json::object&, const VkTilePropertiesQCOM&);
        void deserialize_struct(boost::json::object&, VkTilePropertiesQCOM&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceAmigoProfilingFeaturesSEC&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceAmigoProfilingFeaturesSEC&);
    

        void serialize_struct(boost::json::object&, const VkAmigoProfilingSubmitInfoSEC&);
        void deserialize_struct(boost::json::object&, VkAmigoProfilingSubmitInfoSEC&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDepthClampZeroOneFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceAddressBindingReportFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceAddressBindingReportFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkDeviceAddressBindingCallbackDataEXT&);
        void deserialize_struct(boost::json::object&, VkDeviceAddressBindingCallbackDataEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceOpticalFlowFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceOpticalFlowFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceOpticalFlowPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceOpticalFlowPropertiesNV&);
    

        void serialize_struct(boost::json::object&, const VkOpticalFlowImageFormatInfoNV&);
        void deserialize_struct(boost::json::object&, VkOpticalFlowImageFormatInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkOpticalFlowImageFormatPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkOpticalFlowImageFormatPropertiesNV&);
    

        void serialize_struct(boost::json::object&, const VkOpticalFlowSessionCreateInfoNV&);
        void deserialize_struct(boost::json::object&, VkOpticalFlowSessionCreateInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkOpticalFlowSessionCreatePrivateDataInfoNV&);
        void deserialize_struct(boost::json::object&, VkOpticalFlowSessionCreatePrivateDataInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkOpticalFlowExecuteInfoNV&);
        void deserialize_struct(boost::json::object&, VkOpticalFlowExecuteInfoNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceFaultFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFaultFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkDeviceFaultAddressInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDeviceFaultAddressInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkDeviceFaultVendorInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDeviceFaultVendorInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkDeviceFaultCountsEXT&);
        void deserialize_struct(boost::json::object&, VkDeviceFaultCountsEXT&);
    

        void serialize_struct(boost::json::object&, const VkDeviceFaultInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDeviceFaultInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkDeviceFaultVendorBinaryHeaderVersionOneEXT&);
        void deserialize_struct(boost::json::object&, VkDeviceFaultVendorBinaryHeaderVersionOneEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkDepthBiasInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDepthBiasInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkDepthBiasRepresentationInfoEXT&);
        void deserialize_struct(boost::json::object&, VkDepthBiasRepresentationInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkDecompressMemoryRegionNV&);
        void deserialize_struct(boost::json::object&, VkDecompressMemoryRegionNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM&);
    

        void serialize_struct(boost::json::object&, const VkFrameBoundaryEXT&);
        void deserialize_struct(boost::json::object&, VkFrameBoundaryEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceFrameBoundaryFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceFrameBoundaryFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkSurfacePresentModeEXT&);
        void deserialize_struct(boost::json::object&, VkSurfacePresentModeEXT&);
    

        void serialize_struct(boost::json::object&, const VkSurfacePresentScalingCapabilitiesEXT&);
        void deserialize_struct(boost::json::object&, VkSurfacePresentScalingCapabilitiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkSurfacePresentModeCompatibilityEXT&);
        void deserialize_struct(boost::json::object&, VkSurfacePresentModeCompatibilityEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkSwapchainPresentFenceInfoEXT&);
        void deserialize_struct(boost::json::object&, VkSwapchainPresentFenceInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkSwapchainPresentModesCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkSwapchainPresentModesCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkSwapchainPresentModeInfoEXT&);
        void deserialize_struct(boost::json::object&, VkSwapchainPresentModeInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkSwapchainPresentScalingCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkSwapchainPresentScalingCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkReleaseSwapchainImagesInfoEXT&);
        void deserialize_struct(boost::json::object&, VkReleaseSwapchainImagesInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDepthBiasControlFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDepthBiasControlFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV&);
    

        void serialize_struct(boost::json::object&, const VkDirectDriverLoadingInfoLUNARG&);
        void deserialize_struct(boost::json::object&, VkDirectDriverLoadingInfoLUNARG&);
    

        void serialize_struct(boost::json::object&, const VkDirectDriverLoadingListLUNARG&);
        void deserialize_struct(boost::json::object&, VkDirectDriverLoadingListLUNARG&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, const VkDeviceImageSubresourceInfoKHR&);
        void deserialize_struct(boost::json::object&, VkDeviceImageSubresourceInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderCorePropertiesARM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderCorePropertiesARM&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM&);
    

        void serialize_struct(boost::json::object&, const VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM&);
        void deserialize_struct(boost::json::object&, VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM&);
    

        void serialize_struct(boost::json::object&, const VkQueryLowLatencySupportNV&);
        void deserialize_struct(boost::json::object&, VkQueryLowLatencySupportNV&);
    

        void serialize_struct(boost::json::object&, const VkMemoryMapInfoKHR&);
        void deserialize_struct(boost::json::object&, VkMemoryMapInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkMemoryUnmapInfoKHR&);
        void deserialize_struct(boost::json::object&, VkMemoryUnmapInfoKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderObjectFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderObjectFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderObjectPropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderObjectPropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkShaderCreateInfoEXT&);
        void deserialize_struct(boost::json::object&, VkShaderCreateInfoEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderTileImageFeaturesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderTileImageFeaturesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceShaderTileImagePropertiesEXT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceShaderTileImagePropertiesEXT&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceCooperativeMatrixFeaturesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCooperativeMatrixFeaturesKHR&);
    

        void serialize_struct(boost::json::object&, const VkCooperativeMatrixPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkCooperativeMatrixPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceCooperativeMatrixPropertiesKHR&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCooperativeMatrixPropertiesKHR&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceCubicClampFeaturesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCubicClampFeaturesQCOM&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceYcbcrDegammaFeaturesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceYcbcrDegammaFeaturesQCOM&);
    

        void serialize_struct(boost::json::object&, const VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM&);
        void deserialize_struct(boost::json::object&, VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceCubicWeightsFeaturesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceCubicWeightsFeaturesQCOM&);
    

        void serialize_struct(boost::json::object&, const VkSamplerCubicWeightsCreateInfoQCOM&);
        void deserialize_struct(boost::json::object&, VkSamplerCubicWeightsCreateInfoQCOM&);
    

        void serialize_struct(boost::json::object&, const VkBlitImageCubicWeightsInfoQCOM&);
        void deserialize_struct(boost::json::object&, VkBlitImageCubicWeightsInfoQCOM&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceImageProcessing2FeaturesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageProcessing2FeaturesQCOM&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceImageProcessing2PropertiesQCOM&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceImageProcessing2PropertiesQCOM&);
    

        void serialize_struct(boost::json::object&, const VkSamplerBlockMatchWindowCreateInfoQCOM&);
        void deserialize_struct(boost::json::object&, VkSamplerBlockMatchWindowCreateInfoQCOM&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV&);
    

        void serialize_struct(boost::json::object&, const VkPhysicalDeviceLayeredDriverPropertiesMSFT&);
        void deserialize_struct(boost::json::object&, VkPhysicalDeviceLayeredDriverPropertiesMSFT&);
    
void serialize_funcpointer(boost::json::object&, const PFN_vkInternalAllocationNotification&);
void handle_PFN_vkInternalAllocationNotification(boost::json::object&);
void deserialize_funcpointer(boost::json::object&, PFN_vkInternalAllocationNotification&);
void serialize_funcpointer(boost::json::object&, const PFN_vkInternalFreeNotification&);
void handle_PFN_vkInternalFreeNotification(boost::json::object&);
void deserialize_funcpointer(boost::json::object&, PFN_vkInternalFreeNotification&);
void serialize_funcpointer(boost::json::object&, const PFN_vkReallocationFunction&);
void handle_PFN_vkReallocationFunction(boost::json::object&);
void deserialize_funcpointer(boost::json::object&, PFN_vkReallocationFunction&);
void serialize_funcpointer(boost::json::object&, const PFN_vkAllocationFunction&);
void handle_PFN_vkAllocationFunction(boost::json::object&);
void deserialize_funcpointer(boost::json::object&, PFN_vkAllocationFunction&);
void serialize_funcpointer(boost::json::object&, const PFN_vkFreeFunction&);
void handle_PFN_vkFreeFunction(boost::json::object&);
void deserialize_funcpointer(boost::json::object&, PFN_vkFreeFunction&);
void serialize_funcpointer(boost::json::object&, const PFN_vkDebugReportCallbackEXT&);
void handle_PFN_vkDebugReportCallbackEXT(boost::json::object&);
void deserialize_funcpointer(boost::json::object&, PFN_vkDebugReportCallbackEXT&);
void serialize_funcpointer(boost::json::object&, const PFN_vkDebugUtilsMessengerCallbackEXT&);
void handle_PFN_vkDebugUtilsMessengerCallbackEXT(boost::json::object&);
void deserialize_funcpointer(boost::json::object&, PFN_vkDebugUtilsMessengerCallbackEXT&);
void serialize_funcpointer(boost::json::object&, const PFN_vkDeviceMemoryReportCallbackEXT&);
void handle_PFN_vkDeviceMemoryReportCallbackEXT(boost::json::object&);
void deserialize_funcpointer(boost::json::object&, PFN_vkDeviceMemoryReportCallbackEXT&);
void serialize_funcpointer(boost::json::object&, const PFN_vkGetInstanceProcAddrLUNARG&);
void deserialize_funcpointer(boost::json::object&, PFN_vkGetInstanceProcAddrLUNARG&);
void serialize_handle(boost::json::value&, const VkInstance&);
void deserialize_handle(boost::json::value&, VkInstance&);
void serialize_handle(boost::json::value&, const VkPhysicalDevice&);
void deserialize_handle(boost::json::value&, VkPhysicalDevice&);
void serialize_handle(boost::json::value&, const VkDevice&);
void deserialize_handle(boost::json::value&, VkDevice&);
void serialize_handle(boost::json::value&, const VkQueue&);
void deserialize_handle(boost::json::value&, VkQueue&);
void serialize_handle(boost::json::value&, const VkCommandBuffer&);
void deserialize_handle(boost::json::value&, VkCommandBuffer&);
void serialize_handle(boost::json::value&, const VkDeviceMemory&);
void deserialize_handle(boost::json::value&, VkDeviceMemory&);
void serialize_handle(boost::json::value&, const VkCommandPool&);
void deserialize_handle(boost::json::value&, VkCommandPool&);
void serialize_handle(boost::json::value&, const VkBuffer&);
void deserialize_handle(boost::json::value&, VkBuffer&);
void serialize_handle(boost::json::value&, const VkBufferView&);
void deserialize_handle(boost::json::value&, VkBufferView&);
void serialize_handle(boost::json::value&, const VkImage&);
void deserialize_handle(boost::json::value&, VkImage&);
void serialize_handle(boost::json::value&, const VkImageView&);
void deserialize_handle(boost::json::value&, VkImageView&);
void serialize_handle(boost::json::value&, const VkShaderModule&);
void deserialize_handle(boost::json::value&, VkShaderModule&);
void serialize_handle(boost::json::value&, const VkPipeline&);
void deserialize_handle(boost::json::value&, VkPipeline&);
void serialize_handle(boost::json::value&, const VkPipelineLayout&);
void deserialize_handle(boost::json::value&, VkPipelineLayout&);
void serialize_handle(boost::json::value&, const VkSampler&);
void deserialize_handle(boost::json::value&, VkSampler&);
void serialize_handle(boost::json::value&, const VkDescriptorSet&);
void deserialize_handle(boost::json::value&, VkDescriptorSet&);
void serialize_handle(boost::json::value&, const VkDescriptorSetLayout&);
void deserialize_handle(boost::json::value&, VkDescriptorSetLayout&);
void serialize_handle(boost::json::value&, const VkDescriptorPool&);
void deserialize_handle(boost::json::value&, VkDescriptorPool&);
void serialize_handle(boost::json::value&, const VkFence&);
void deserialize_handle(boost::json::value&, VkFence&);
void serialize_handle(boost::json::value&, const VkSemaphore&);
void deserialize_handle(boost::json::value&, VkSemaphore&);
void serialize_handle(boost::json::value&, const VkEvent&);
void deserialize_handle(boost::json::value&, VkEvent&);
void serialize_handle(boost::json::value&, const VkQueryPool&);
void deserialize_handle(boost::json::value&, VkQueryPool&);
void serialize_handle(boost::json::value&, const VkFramebuffer&);
void deserialize_handle(boost::json::value&, VkFramebuffer&);
void serialize_handle(boost::json::value&, const VkRenderPass&);
void deserialize_handle(boost::json::value&, VkRenderPass&);
void serialize_handle(boost::json::value&, const VkPipelineCache&);
void deserialize_handle(boost::json::value&, VkPipelineCache&);
void serialize_handle(boost::json::value&, const VkIndirectCommandsLayoutNV&);
void deserialize_handle(boost::json::value&, VkIndirectCommandsLayoutNV&);
void serialize_handle(boost::json::value&, const VkDescriptorUpdateTemplate&);
void deserialize_handle(boost::json::value&, VkDescriptorUpdateTemplate&);
void serialize_handle(boost::json::value&, const VkDescriptorUpdateTemplateKHR&);
void deserialize_handle(boost::json::value&, VkDescriptorUpdateTemplateKHR&);
void serialize_handle(boost::json::value&, const VkSamplerYcbcrConversion&);
void deserialize_handle(boost::json::value&, VkSamplerYcbcrConversion&);
void serialize_handle(boost::json::value&, const VkSamplerYcbcrConversionKHR&);
void deserialize_handle(boost::json::value&, VkSamplerYcbcrConversionKHR&);
void serialize_handle(boost::json::value&, const VkValidationCacheEXT&);
void deserialize_handle(boost::json::value&, VkValidationCacheEXT&);
void serialize_handle(boost::json::value&, const VkAccelerationStructureKHR&);
void deserialize_handle(boost::json::value&, VkAccelerationStructureKHR&);
void serialize_handle(boost::json::value&, const VkAccelerationStructureNV&);
void deserialize_handle(boost::json::value&, VkAccelerationStructureNV&);
void serialize_handle(boost::json::value&, const VkPerformanceConfigurationINTEL&);
void deserialize_handle(boost::json::value&, VkPerformanceConfigurationINTEL&);
void serialize_handle(boost::json::value&, const VkDeferredOperationKHR&);
void deserialize_handle(boost::json::value&, VkDeferredOperationKHR&);
void serialize_handle(boost::json::value&, const VkPrivateDataSlot&);
void deserialize_handle(boost::json::value&, VkPrivateDataSlot&);
void serialize_handle(boost::json::value&, const VkPrivateDataSlotEXT&);
void deserialize_handle(boost::json::value&, VkPrivateDataSlotEXT&);
void serialize_handle(boost::json::value&, const VkCuModuleNVX&);
void deserialize_handle(boost::json::value&, VkCuModuleNVX&);
void serialize_handle(boost::json::value&, const VkCuFunctionNVX&);
void deserialize_handle(boost::json::value&, VkCuFunctionNVX&);
void serialize_handle(boost::json::value&, const VkOpticalFlowSessionNV&);
void deserialize_handle(boost::json::value&, VkOpticalFlowSessionNV&);
void serialize_handle(boost::json::value&, const VkMicromapEXT&);
void deserialize_handle(boost::json::value&, VkMicromapEXT&);
void serialize_handle(boost::json::value&, const VkShaderEXT&);
void deserialize_handle(boost::json::value&, VkShaderEXT&);
void serialize_handle(boost::json::value&, const VkDisplayKHR&);
void deserialize_handle(boost::json::value&, VkDisplayKHR&);
void serialize_handle(boost::json::value&, const VkDisplayModeKHR&);
void deserialize_handle(boost::json::value&, VkDisplayModeKHR&);
void serialize_handle(boost::json::value&, const VkSurfaceKHR&);
void deserialize_handle(boost::json::value&, VkSurfaceKHR&);
void serialize_handle(boost::json::value&, const VkSwapchainKHR&);
void deserialize_handle(boost::json::value&, VkSwapchainKHR&);
void serialize_handle(boost::json::value&, const VkDebugReportCallbackEXT&);
void deserialize_handle(boost::json::value&, VkDebugReportCallbackEXT&);
void serialize_handle(boost::json::value&, const VkDebugUtilsMessengerEXT&);
void deserialize_handle(boost::json::value&, VkDebugUtilsMessengerEXT&);
void serialize_handle(boost::json::value&, const VkVideoSessionKHR&);
void deserialize_handle(boost::json::value&, VkVideoSessionKHR&);
void serialize_handle(boost::json::value&, const VkVideoSessionParametersKHR&);
void deserialize_handle(boost::json::value&, VkVideoSessionParametersKHR&);
