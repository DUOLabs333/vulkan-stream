
#include <ThreadStruct.hpp>

#include <schema.capnp.h>
using namespace capnp;

#include <Serialization.hpp>
#include <Server.hpp>
#include <Synchronization.hpp>
#include <map>


typedef struct {
    void* pUserData;

uintptr_t PFN_vkVoidFunction;
uintptr_t PFN_vkInternalAllocationNotification;
uintptr_t PFN_vkReallocationFunction;
uintptr_t PFN_vkFaultCallbackFunction;
uintptr_t PFN_vkAllocationFunction;
uintptr_t PFN_vkDeviceMemoryReportCallbackEXT;
uintptr_t PFN_vkGetInstanceProcAddrLUNARG;
uintptr_t PFN_vkDebugUtilsMessengerCallbackEXT;
uintptr_t PFN_vkFreeFunction;
uintptr_t PFN_vkDebugReportCallbackEXT;
uintptr_t PFN_vkInternalFreeNotification;
} pUserData;

void serialize_pNext(PNext::Builder builder, void* member){
    if (member==NULL){
        builder.initNone();
        return;
    }
    
    auto chain=((VkBaseInStructure*)member);
    switch(chain->sType){


    case :
        return serialize_struct(builder.getVkbaseoutstructure(), ((VkBaseOutStructure*)(member))[0]);
    

    case :
        return serialize_struct(builder.getVkbaseinstructure(), ((VkBaseInStructure*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_APPLICATION_INFO:
        return serialize_struct(builder.getVkapplicationinfo(), ((VkApplicationInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO:
        return serialize_struct(builder.getVkdevicequeuecreateinfo(), ((VkDeviceQueueCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO:
        return serialize_struct(builder.getVkdevicecreateinfo(), ((VkDeviceCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO:
        return serialize_struct(builder.getVkinstancecreateinfo(), ((VkInstanceCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO:
        return serialize_struct(builder.getVkmemoryallocateinfo(), ((VkMemoryAllocateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE:
        return serialize_struct(builder.getVkmappedmemoryrange(), ((VkMappedMemoryRange*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET:
        return serialize_struct(builder.getVkwritedescriptorset(), ((VkWriteDescriptorSet*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET:
        return serialize_struct(builder.getVkcopydescriptorset(), ((VkCopyDescriptorSet*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BUFFER_USAGE_FLAGS_2_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkbufferusageflags2Createinfokhr(), ((VkBufferUsageFlags2CreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO:
        return serialize_struct(builder.getVkbuffercreateinfo(), ((VkBufferCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO:
        return serialize_struct(builder.getVkbufferviewcreateinfo(), ((VkBufferViewCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MEMORY_BARRIER:
        return serialize_struct(builder.getVkmemorybarrier(), ((VkMemoryBarrier*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER:
        return serialize_struct(builder.getVkbuffermemorybarrier(), ((VkBufferMemoryBarrier*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER:
        return serialize_struct(builder.getVkimagememorybarrier(), ((VkImageMemoryBarrier*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO:
        return serialize_struct(builder.getVkimagecreateinfo(), ((VkImageCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO:
        return serialize_struct(builder.getVkimageviewcreateinfo(), ((VkImageViewCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BIND_SPARSE_INFO:
        return serialize_struct(builder.getVkbindsparseinfo(), ((VkBindSparseInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO:
        return serialize_struct(builder.getVkshadermodulecreateinfo(), ((VkShaderModuleCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO:
        return serialize_struct(builder.getVkdescriptorsetlayoutcreateinfo(), ((VkDescriptorSetLayoutCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO:
        return serialize_struct(builder.getVkdescriptorpoolcreateinfo(), ((VkDescriptorPoolCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO:
        return serialize_struct(builder.getVkdescriptorsetallocateinfo(), ((VkDescriptorSetAllocateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO:
        return serialize_struct(builder.getVkpipelineshaderstagecreateinfo(), ((VkPipelineShaderStageCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO:
        return serialize_struct(builder.getVkcomputepipelinecreateinfo(), ((VkComputePipelineCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_INDIRECT_BUFFER_INFO_NV:
        return serialize_struct(builder.getVkcomputepipelineindirectbufferinfonv(), ((VkComputePipelineIndirectBufferInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_CREATE_FLAGS_2_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkpipelinecreateflags2Createinfokhr(), ((VkPipelineCreateFlags2CreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO:
        return serialize_struct(builder.getVkpipelinevertexinputstatecreateinfo(), ((VkPipelineVertexInputStateCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO:
        return serialize_struct(builder.getVkpipelineinputassemblystatecreateinfo(), ((VkPipelineInputAssemblyStateCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO:
        return serialize_struct(builder.getVkpipelinetessellationstatecreateinfo(), ((VkPipelineTessellationStateCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO:
        return serialize_struct(builder.getVkpipelineviewportstatecreateinfo(), ((VkPipelineViewportStateCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO:
        return serialize_struct(builder.getVkpipelinerasterizationstatecreateinfo(), ((VkPipelineRasterizationStateCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO:
        return serialize_struct(builder.getVkpipelinemultisamplestatecreateinfo(), ((VkPipelineMultisampleStateCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO:
        return serialize_struct(builder.getVkpipelinecolorblendstatecreateinfo(), ((VkPipelineColorBlendStateCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO:
        return serialize_struct(builder.getVkpipelinedynamicstatecreateinfo(), ((VkPipelineDynamicStateCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO:
        return serialize_struct(builder.getVkpipelinedepthstencilstatecreateinfo(), ((VkPipelineDepthStencilStateCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO:
        return serialize_struct(builder.getVkgraphicspipelinecreateinfo(), ((VkGraphicsPipelineCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO:
        return serialize_struct(builder.getVkpipelinecachecreateinfo(), ((VkPipelineCacheCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO:
        return serialize_struct(builder.getVkpipelinelayoutcreateinfo(), ((VkPipelineLayoutCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO:
        return serialize_struct(builder.getVksamplercreateinfo(), ((VkSamplerCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO:
        return serialize_struct(builder.getVkcommandpoolcreateinfo(), ((VkCommandPoolCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO:
        return serialize_struct(builder.getVkcommandbufferallocateinfo(), ((VkCommandBufferAllocateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO:
        return serialize_struct(builder.getVkcommandbufferinheritanceinfo(), ((VkCommandBufferInheritanceInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO:
        return serialize_struct(builder.getVkcommandbufferbegininfo(), ((VkCommandBufferBeginInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO:
        return serialize_struct(builder.getVkrenderpassbegininfo(), ((VkRenderPassBeginInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO:
        return serialize_struct(builder.getVkrenderpasscreateinfo(), ((VkRenderPassCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_EVENT_CREATE_INFO:
        return serialize_struct(builder.getVkeventcreateinfo(), ((VkEventCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_FENCE_CREATE_INFO:
        return serialize_struct(builder.getVkfencecreateinfo(), ((VkFenceCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO:
        return serialize_struct(builder.getVksemaphorecreateinfo(), ((VkSemaphoreCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO:
        return serialize_struct(builder.getVkquerypoolcreateinfo(), ((VkQueryPoolCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO:
        return serialize_struct(builder.getVkframebuffercreateinfo(), ((VkFramebufferCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SUBMIT_INFO:
        return serialize_struct(builder.getVksubmitinfo(), ((VkSubmitInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkdisplaymodecreateinfokhr(), ((VkDisplayModeCreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkdisplaysurfacecreateinfokhr(), ((VkDisplaySurfaceCreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR:
        return serialize_struct(builder.getVkdisplaypresentinfokhr(), ((VkDisplayPresentInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkxlibsurfacecreateinfokhr(), ((VkXlibSurfaceCreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkxcbsurfacecreateinfokhr(), ((VkXcbSurfaceCreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkswapchaincreateinfokhr(), ((VkSwapchainCreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PRESENT_INFO_KHR:
        return serialize_struct(builder.getVkpresentinfokhr(), ((VkPresentInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkdebugreportcallbackcreateinfoext(), ((VkDebugReportCallbackCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT:
        return serialize_struct(builder.getVkvalidationflagsext(), ((VkValidationFlagsEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT:
        return serialize_struct(builder.getVkvalidationfeaturesext(), ((VkValidationFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD:
        return serialize_struct(builder.getVkpipelinerasterizationstaterasterizationorderamd(), ((VkPipelineRasterizationStateRasterizationOrderAMD*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT:
        return serialize_struct(builder.getVkdebugmarkerobjectnameinfoext(), ((VkDebugMarkerObjectNameInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT:
        return serialize_struct(builder.getVkdebugmarkerobjecttaginfoext(), ((VkDebugMarkerObjectTagInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT:
        return serialize_struct(builder.getVkdebugmarkermarkerinfoext(), ((VkDebugMarkerMarkerInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV:
        return serialize_struct(builder.getVkdedicatedallocationimagecreateinfonv(), ((VkDedicatedAllocationImageCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV:
        return serialize_struct(builder.getVkdedicatedallocationbuffercreateinfonv(), ((VkDedicatedAllocationBufferCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV:
        return serialize_struct(builder.getVkdedicatedallocationmemoryallocateinfonv(), ((VkDedicatedAllocationMemoryAllocateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV:
        return serialize_struct(builder.getVkexternalmemoryimagecreateinfonv(), ((VkExternalMemoryImageCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV:
        return serialize_struct(builder.getVkexportmemoryallocateinfonv(), ((VkExportMemoryAllocateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldevicedevicegeneratedcommandsfeaturesnv(), ((VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldevicedevicegeneratedcommandscomputefeaturesnv(), ((VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO:
        return serialize_struct(builder.getVkdeviceprivatedatacreateinfo(), ((VkDevicePrivateDataCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO:
        return serialize_struct(builder.getVkprivatedataslotcreateinfo(), ((VkPrivateDataSlotCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES:
        return serialize_struct(builder.getVkphysicaldeviceprivatedatafeatures(), ((VkPhysicalDevicePrivateDataFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV:
        return serialize_struct(builder.getVkphysicaldevicedevicegeneratedcommandspropertiesnv(), ((VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldevicemultidrawpropertiesext(), ((VkPhysicalDeviceMultiDrawPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV:
        return serialize_struct(builder.getVkgraphicsshadergroupcreateinfonv(), ((VkGraphicsShaderGroupCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV:
        return serialize_struct(builder.getVkgraphicspipelineshadergroupscreateinfonv(), ((VkGraphicsPipelineShaderGroupsCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV:
        return serialize_struct(builder.getVkindirectcommandslayouttokennv(), ((VkIndirectCommandsLayoutTokenNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV:
        return serialize_struct(builder.getVkindirectcommandslayoutcreateinfonv(), ((VkIndirectCommandsLayoutCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV:
        return serialize_struct(builder.getVkgeneratedcommandsinfonv(), ((VkGeneratedCommandsInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV:
        return serialize_struct(builder.getVkgeneratedcommandsmemoryrequirementsinfonv(), ((VkGeneratedCommandsMemoryRequirementsInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_INDIRECT_DEVICE_ADDRESS_INFO_NV:
        return serialize_struct(builder.getVkpipelineindirectdeviceaddressinfonv(), ((VkPipelineIndirectDeviceAddressInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2:
        return serialize_struct(builder.getVkphysicaldevicefeatures2(), ((VkPhysicalDeviceFeatures2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2:
        return serialize_struct(builder.getVkphysicaldeviceproperties2(), ((VkPhysicalDeviceProperties2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2:
        return serialize_struct(builder.getVkformatproperties2(), ((VkFormatProperties2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2:
        return serialize_struct(builder.getVkimageformatproperties2(), ((VkImageFormatProperties2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2:
        return serialize_struct(builder.getVkphysicaldeviceimageformatinfo2(), ((VkPhysicalDeviceImageFormatInfo2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2:
        return serialize_struct(builder.getVkqueuefamilyproperties2(), ((VkQueueFamilyProperties2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2:
        return serialize_struct(builder.getVkphysicaldevicememoryproperties2(), ((VkPhysicalDeviceMemoryProperties2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2:
        return serialize_struct(builder.getVksparseimageformatproperties2(), ((VkSparseImageFormatProperties2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2:
        return serialize_struct(builder.getVkphysicaldevicesparseimageformatinfo2(), ((VkPhysicalDeviceSparseImageFormatInfo2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR:
        return serialize_struct(builder.getVkphysicaldevicepushdescriptorpropertieskhr(), ((VkPhysicalDevicePushDescriptorPropertiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldevicedriverproperties(), ((VkPhysicalDeviceDriverProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR:
        return serialize_struct(builder.getVkpresentregionskhr(), ((VkPresentRegionsKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES:
        return serialize_struct(builder.getVkphysicaldevicevariablepointersfeatures(), ((VkPhysicalDeviceVariablePointersFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO:
        return serialize_struct(builder.getVkphysicaldeviceexternalimageformatinfo(), ((VkPhysicalDeviceExternalImageFormatInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES:
        return serialize_struct(builder.getVkexternalimageformatproperties(), ((VkExternalImageFormatProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO:
        return serialize_struct(builder.getVkphysicaldeviceexternalbufferinfo(), ((VkPhysicalDeviceExternalBufferInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES:
        return serialize_struct(builder.getVkexternalbufferproperties(), ((VkExternalBufferProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldeviceidproperties(), ((VkPhysicalDeviceIDProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO:
        return serialize_struct(builder.getVkexternalmemoryimagecreateinfo(), ((VkExternalMemoryImageCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO:
        return serialize_struct(builder.getVkexternalmemorybuffercreateinfo(), ((VkExternalMemoryBufferCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO:
        return serialize_struct(builder.getVkexportmemoryallocateinfo(), ((VkExportMemoryAllocateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR:
        return serialize_struct(builder.getVkimportmemoryfdinfokhr(), ((VkImportMemoryFdInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR:
        return serialize_struct(builder.getVkmemoryfdpropertieskhr(), ((VkMemoryFdPropertiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR:
        return serialize_struct(builder.getVkmemorygetfdinfokhr(), ((VkMemoryGetFdInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO:
        return serialize_struct(builder.getVkphysicaldeviceexternalsemaphoreinfo(), ((VkPhysicalDeviceExternalSemaphoreInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES:
        return serialize_struct(builder.getVkexternalsemaphoreproperties(), ((VkExternalSemaphoreProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO:
        return serialize_struct(builder.getVkexportsemaphorecreateinfo(), ((VkExportSemaphoreCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR:
        return serialize_struct(builder.getVkimportsemaphorefdinfokhr(), ((VkImportSemaphoreFdInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR:
        return serialize_struct(builder.getVksemaphoregetfdinfokhr(), ((VkSemaphoreGetFdInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO:
        return serialize_struct(builder.getVkphysicaldeviceexternalfenceinfo(), ((VkPhysicalDeviceExternalFenceInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES:
        return serialize_struct(builder.getVkexternalfenceproperties(), ((VkExternalFenceProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO:
        return serialize_struct(builder.getVkexportfencecreateinfo(), ((VkExportFenceCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR:
        return serialize_struct(builder.getVkimportfencefdinfokhr(), ((VkImportFenceFdInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR:
        return serialize_struct(builder.getVkfencegetfdinfokhr(), ((VkFenceGetFdInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES:
        return serialize_struct(builder.getVkphysicaldevicemultiviewfeatures(), ((VkPhysicalDeviceMultiviewFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldevicemultiviewproperties(), ((VkPhysicalDeviceMultiviewProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO:
        return serialize_struct(builder.getVkrenderpassmultiviewcreateinfo(), ((VkRenderPassMultiviewCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT:
        return serialize_struct(builder.getVksurfacecapabilities2Ext(), ((VkSurfaceCapabilities2EXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT:
        return serialize_struct(builder.getVkdisplaypowerinfoext(), ((VkDisplayPowerInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT:
        return serialize_struct(builder.getVkdeviceeventinfoext(), ((VkDeviceEventInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT:
        return serialize_struct(builder.getVkdisplayeventinfoext(), ((VkDisplayEventInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkswapchaincountercreateinfoext(), ((VkSwapchainCounterCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldevicegroupproperties(), ((VkPhysicalDeviceGroupProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO:
        return serialize_struct(builder.getVkmemoryallocateflagsinfo(), ((VkMemoryAllocateFlagsInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO:
        return serialize_struct(builder.getVkbindbuffermemoryinfo(), ((VkBindBufferMemoryInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO:
        return serialize_struct(builder.getVkbindbuffermemorydevicegroupinfo(), ((VkBindBufferMemoryDeviceGroupInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO:
        return serialize_struct(builder.getVkbindimagememoryinfo(), ((VkBindImageMemoryInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO:
        return serialize_struct(builder.getVkbindimagememorydevicegroupinfo(), ((VkBindImageMemoryDeviceGroupInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO:
        return serialize_struct(builder.getVkdevicegrouprenderpassbegininfo(), ((VkDeviceGroupRenderPassBeginInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO:
        return serialize_struct(builder.getVkdevicegroupcommandbufferbegininfo(), ((VkDeviceGroupCommandBufferBeginInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO:
        return serialize_struct(builder.getVkdevicegroupsubmitinfo(), ((VkDeviceGroupSubmitInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO:
        return serialize_struct(builder.getVkdevicegroupbindsparseinfo(), ((VkDeviceGroupBindSparseInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR:
        return serialize_struct(builder.getVkdevicegrouppresentcapabilitieskhr(), ((VkDeviceGroupPresentCapabilitiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkimageswapchaincreateinfokhr(), ((VkImageSwapchainCreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR:
        return serialize_struct(builder.getVkbindimagememoryswapchaininfokhr(), ((VkBindImageMemorySwapchainInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR:
        return serialize_struct(builder.getVkacquirenextimageinfokhr(), ((VkAcquireNextImageInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR:
        return serialize_struct(builder.getVkdevicegrouppresentinfokhr(), ((VkDeviceGroupPresentInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO:
        return serialize_struct(builder.getVkdevicegroupdevicecreateinfo(), ((VkDeviceGroupDeviceCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkdevicegroupswapchaincreateinfokhr(), ((VkDeviceGroupSwapchainCreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO:
        return serialize_struct(builder.getVkdescriptorupdatetemplatecreateinfo(), ((VkDescriptorUpdateTemplateCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR:
        return serialize_struct(builder.getVkphysicaldevicepresentidfeatureskhr(), ((VkPhysicalDevicePresentIdFeaturesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PRESENT_ID_KHR:
        return serialize_struct(builder.getVkpresentidkhr(), ((VkPresentIdKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR:
        return serialize_struct(builder.getVkphysicaldevicepresentwaitfeatureskhr(), ((VkPhysicalDevicePresentWaitFeaturesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_HDR_METADATA_EXT:
        return serialize_struct(builder.getVkhdrmetadataext(), ((VkHdrMetadataEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD:
        return serialize_struct(builder.getVkdisplaynativehdrsurfacecapabilitiesamd(), ((VkDisplayNativeHdrSurfaceCapabilitiesAMD*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD:
        return serialize_struct(builder.getVkswapchaindisplaynativehdrcreateinfoamd(), ((VkSwapchainDisplayNativeHdrCreateInfoAMD*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE:
        return serialize_struct(builder.getVkpresenttimesinfogoogle(), ((VkPresentTimesInfoGOOGLE*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV:
        return serialize_struct(builder.getVkpipelineviewportwscalingstatecreateinfonv(), ((VkPipelineViewportWScalingStateCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV:
        return serialize_struct(builder.getVkpipelineviewportswizzlestatecreateinfonv(), ((VkPipelineViewportSwizzleStateCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldevicediscardrectanglepropertiesext(), ((VkPhysicalDeviceDiscardRectanglePropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkpipelinediscardrectanglestatecreateinfoext(), ((VkPipelineDiscardRectangleStateCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX:
        return serialize_struct(builder.getVkphysicaldevicemultiviewperviewattributespropertiesnvx(), ((VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO:
        return serialize_struct(builder.getVkrenderpassinputattachmentaspectcreateinfo(), ((VkRenderPassInputAttachmentAspectCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR:
        return serialize_struct(builder.getVkphysicaldevicesurfaceinfo2Khr(), ((VkPhysicalDeviceSurfaceInfo2KHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR:
        return serialize_struct(builder.getVksurfacecapabilities2Khr(), ((VkSurfaceCapabilities2KHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR:
        return serialize_struct(builder.getVksurfaceformat2Khr(), ((VkSurfaceFormat2KHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR:
        return serialize_struct(builder.getVkdisplayproperties2Khr(), ((VkDisplayProperties2KHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR:
        return serialize_struct(builder.getVkdisplayplaneproperties2Khr(), ((VkDisplayPlaneProperties2KHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR:
        return serialize_struct(builder.getVkdisplaymodeproperties2Khr(), ((VkDisplayModeProperties2KHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR:
        return serialize_struct(builder.getVkdisplayplaneinfo2Khr(), ((VkDisplayPlaneInfo2KHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR:
        return serialize_struct(builder.getVkdisplayplanecapabilities2Khr(), ((VkDisplayPlaneCapabilities2KHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR:
        return serialize_struct(builder.getVksharedpresentsurfacecapabilitieskhr(), ((VkSharedPresentSurfaceCapabilitiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES:
        return serialize_struct(builder.getVkphysicaldevice16Bitstoragefeatures(), ((VkPhysicalDevice16BitStorageFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldevicesubgroupproperties(), ((VkPhysicalDeviceSubgroupProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES:
        return serialize_struct(builder.getVkphysicaldeviceshadersubgroupextendedtypesfeatures(), ((VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2:
        return serialize_struct(builder.getVkbuffermemoryrequirementsinfo2(), ((VkBufferMemoryRequirementsInfo2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_BUFFER_MEMORY_REQUIREMENTS:
        return serialize_struct(builder.getVkdevicebuffermemoryrequirements(), ((VkDeviceBufferMemoryRequirements*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2:
        return serialize_struct(builder.getVkimagememoryrequirementsinfo2(), ((VkImageMemoryRequirementsInfo2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2:
        return serialize_struct(builder.getVkimagesparsememoryrequirementsinfo2(), ((VkImageSparseMemoryRequirementsInfo2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_IMAGE_MEMORY_REQUIREMENTS:
        return serialize_struct(builder.getVkdeviceimagememoryrequirements(), ((VkDeviceImageMemoryRequirements*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2:
        return serialize_struct(builder.getVkmemoryrequirements2(), ((VkMemoryRequirements2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2:
        return serialize_struct(builder.getVksparseimagememoryrequirements2(), ((VkSparseImageMemoryRequirements2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldevicepointclippingproperties(), ((VkPhysicalDevicePointClippingProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS:
        return serialize_struct(builder.getVkmemorydedicatedrequirements(), ((VkMemoryDedicatedRequirements*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO:
        return serialize_struct(builder.getVkmemorydedicatedallocateinfo(), ((VkMemoryDedicatedAllocateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO:
        return serialize_struct(builder.getVkimageviewusagecreateinfo(), ((VkImageViewUsageCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_VIEW_SLICED_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkimageviewslicedcreateinfoext(), ((VkImageViewSlicedCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO:
        return serialize_struct(builder.getVkpipelinetessellationdomainoriginstatecreateinfo(), ((VkPipelineTessellationDomainOriginStateCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO:
        return serialize_struct(builder.getVksamplerycbcrconversioninfo(), ((VkSamplerYcbcrConversionInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO:
        return serialize_struct(builder.getVksamplerycbcrconversioncreateinfo(), ((VkSamplerYcbcrConversionCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO:
        return serialize_struct(builder.getVkbindimageplanememoryinfo(), ((VkBindImagePlaneMemoryInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO:
        return serialize_struct(builder.getVkimageplanememoryrequirementsinfo(), ((VkImagePlaneMemoryRequirementsInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES:
        return serialize_struct(builder.getVkphysicaldevicesamplerycbcrconversionfeatures(), ((VkPhysicalDeviceSamplerYcbcrConversionFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES:
        return serialize_struct(builder.getVksamplerycbcrconversionimageformatproperties(), ((VkSamplerYcbcrConversionImageFormatProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD:
        return serialize_struct(builder.getVktexturelodgatherformatpropertiesamd(), ((VkTextureLODGatherFormatPropertiesAMD*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT:
        return serialize_struct(builder.getVkconditionalrenderingbegininfoext(), ((VkConditionalRenderingBeginInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO:
        return serialize_struct(builder.getVkprotectedsubmitinfo(), ((VkProtectedSubmitInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES:
        return serialize_struct(builder.getVkphysicaldeviceprotectedmemoryfeatures(), ((VkPhysicalDeviceProtectedMemoryFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldeviceprotectedmemoryproperties(), ((VkPhysicalDeviceProtectedMemoryProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2:
        return serialize_struct(builder.getVkdevicequeueinfo2(), ((VkDeviceQueueInfo2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV:
        return serialize_struct(builder.getVkpipelinecoveragetocolorstatecreateinfonv(), ((VkPipelineCoverageToColorStateCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldevicesamplerfilterminmaxproperties(), ((VkPhysicalDeviceSamplerFilterMinmaxProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT:
        return serialize_struct(builder.getVksamplelocationsinfoext(), ((VkSampleLocationsInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT:
        return serialize_struct(builder.getVkrenderpasssamplelocationsbegininfoext(), ((VkRenderPassSampleLocationsBeginInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkpipelinesamplelocationsstatecreateinfoext(), ((VkPipelineSampleLocationsStateCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldevicesamplelocationspropertiesext(), ((VkPhysicalDeviceSampleLocationsPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT:
        return serialize_struct(builder.getVkmultisamplepropertiesext(), ((VkMultisamplePropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO:
        return serialize_struct(builder.getVksamplerreductionmodecreateinfo(), ((VkSamplerReductionModeCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceblendoperationadvancedfeaturesext(), ((VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicemultidrawfeaturesext(), ((VkPhysicalDeviceMultiDrawFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceblendoperationadvancedpropertiesext(), ((VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkpipelinecolorblendadvancedstatecreateinfoext(), ((VkPipelineColorBlendAdvancedStateCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES:
        return serialize_struct(builder.getVkphysicaldeviceinlineuniformblockfeatures(), ((VkPhysicalDeviceInlineUniformBlockFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldeviceinlineuniformblockproperties(), ((VkPhysicalDeviceInlineUniformBlockProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK:
        return serialize_struct(builder.getVkwritedescriptorsetinlineuniformblock(), ((VkWriteDescriptorSetInlineUniformBlock*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO:
        return serialize_struct(builder.getVkdescriptorpoolinlineuniformblockcreateinfo(), ((VkDescriptorPoolInlineUniformBlockCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV:
        return serialize_struct(builder.getVkpipelinecoveragemodulationstatecreateinfonv(), ((VkPipelineCoverageModulationStateCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO:
        return serialize_struct(builder.getVkimageformatlistcreateinfo(), ((VkImageFormatListCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkvalidationcachecreateinfoext(), ((VkValidationCacheCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkshadermodulevalidationcachecreateinfoext(), ((VkShaderModuleValidationCacheCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldevicemaintenance3Properties(), ((VkPhysicalDeviceMaintenance3Properties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES:
        return serialize_struct(builder.getVkphysicaldevicemaintenance4Features(), ((VkPhysicalDeviceMaintenance4Features*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldevicemaintenance4Properties(), ((VkPhysicalDeviceMaintenance4Properties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES_KHR:
        return serialize_struct(builder.getVkphysicaldevicemaintenance5Featureskhr(), ((VkPhysicalDeviceMaintenance5FeaturesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES_KHR:
        return serialize_struct(builder.getVkphysicaldevicemaintenance5Propertieskhr(), ((VkPhysicalDeviceMaintenance5PropertiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RENDERING_AREA_INFO_KHR:
        return serialize_struct(builder.getVkrenderingareainfokhr(), ((VkRenderingAreaInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT:
        return serialize_struct(builder.getVkdescriptorsetlayoutsupport(), ((VkDescriptorSetLayoutSupport*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES:
        return serialize_struct(builder.getVkphysicaldeviceshaderdrawparametersfeatures(), ((VkPhysicalDeviceShaderDrawParametersFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES:
        return serialize_struct(builder.getVkphysicaldeviceshaderfloat16Int8Features(), ((VkPhysicalDeviceShaderFloat16Int8Features*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldevicefloatcontrolsproperties(), ((VkPhysicalDeviceFloatControlsProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES:
        return serialize_struct(builder.getVkphysicaldevicehostqueryresetfeatures(), ((VkPhysicalDeviceHostQueryResetFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkdevicequeueglobalprioritycreateinfokhr(), ((VkDeviceQueueGlobalPriorityCreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR:
        return serialize_struct(builder.getVkphysicaldeviceglobalpriorityqueryfeatureskhr(), ((VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_KHR:
        return serialize_struct(builder.getVkqueuefamilyglobalprioritypropertieskhr(), ((VkQueueFamilyGlobalPriorityPropertiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT:
        return serialize_struct(builder.getVkdebugutilsobjectnameinfoext(), ((VkDebugUtilsObjectNameInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT:
        return serialize_struct(builder.getVkdebugutilsobjecttaginfoext(), ((VkDebugUtilsObjectTagInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT:
        return serialize_struct(builder.getVkdebugutilslabelext(), ((VkDebugUtilsLabelEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkdebugutilsmessengercreateinfoext(), ((VkDebugUtilsMessengerCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT:
        return serialize_struct(builder.getVkdebugutilsmessengercallbackdataext(), ((VkDebugUtilsMessengerCallbackDataEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicedevicememoryreportfeaturesext(), ((VkPhysicalDeviceDeviceMemoryReportFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkdevicedevicememoryreportcreateinfoext(), ((VkDeviceDeviceMemoryReportCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT:
        return serialize_struct(builder.getVkdevicememoryreportcallbackdataext(), ((VkDeviceMemoryReportCallbackDataEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT:
        return serialize_struct(builder.getVkimportmemoryhostpointerinfoext(), ((VkImportMemoryHostPointerInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT:
        return serialize_struct(builder.getVkmemoryhostpointerpropertiesext(), ((VkMemoryHostPointerPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceexternalmemoryhostpropertiesext(), ((VkPhysicalDeviceExternalMemoryHostPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceconservativerasterizationpropertiesext(), ((VkPhysicalDeviceConservativeRasterizationPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT:
        return serialize_struct(builder.getVkcalibratedtimestampinfoext(), ((VkCalibratedTimestampInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD:
        return serialize_struct(builder.getVkphysicaldeviceshadercorepropertiesamd(), ((VkPhysicalDeviceShaderCorePropertiesAMD*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD:
        return serialize_struct(builder.getVkphysicaldeviceshadercoreproperties2Amd(), ((VkPhysicalDeviceShaderCoreProperties2AMD*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkpipelinerasterizationconservativestatecreateinfoext(), ((VkPipelineRasterizationConservativeStateCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES:
        return serialize_struct(builder.getVkphysicaldevicedescriptorindexingfeatures(), ((VkPhysicalDeviceDescriptorIndexingFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldevicedescriptorindexingproperties(), ((VkPhysicalDeviceDescriptorIndexingProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO:
        return serialize_struct(builder.getVkdescriptorsetlayoutbindingflagscreateinfo(), ((VkDescriptorSetLayoutBindingFlagsCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO:
        return serialize_struct(builder.getVkdescriptorsetvariabledescriptorcountallocateinfo(), ((VkDescriptorSetVariableDescriptorCountAllocateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT:
        return serialize_struct(builder.getVkdescriptorsetvariabledescriptorcountlayoutsupport(), ((VkDescriptorSetVariableDescriptorCountLayoutSupport*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2:
        return serialize_struct(builder.getVkattachmentdescription2(), ((VkAttachmentDescription2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2:
        return serialize_struct(builder.getVkattachmentreference2(), ((VkAttachmentReference2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2:
        return serialize_struct(builder.getVksubpassdescription2(), ((VkSubpassDescription2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2:
        return serialize_struct(builder.getVksubpassdependency2(), ((VkSubpassDependency2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2:
        return serialize_struct(builder.getVkrenderpasscreateinfo2(), ((VkRenderPassCreateInfo2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO:
        return serialize_struct(builder.getVksubpassbegininfo(), ((VkSubpassBeginInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SUBPASS_END_INFO:
        return serialize_struct(builder.getVksubpassendinfo(), ((VkSubpassEndInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES:
        return serialize_struct(builder.getVkphysicaldevicetimelinesemaphorefeatures(), ((VkPhysicalDeviceTimelineSemaphoreFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldevicetimelinesemaphoreproperties(), ((VkPhysicalDeviceTimelineSemaphoreProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO:
        return serialize_struct(builder.getVksemaphoretypecreateinfo(), ((VkSemaphoreTypeCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO:
        return serialize_struct(builder.getVktimelinesemaphoresubmitinfo(), ((VkTimelineSemaphoreSubmitInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO:
        return serialize_struct(builder.getVksemaphorewaitinfo(), ((VkSemaphoreWaitInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO:
        return serialize_struct(builder.getVksemaphoresignalinfo(), ((VkSemaphoreSignalInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkpipelinevertexinputdivisorstatecreateinfoext(), ((VkPipelineVertexInputDivisorStateCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldevicevertexattributedivisorpropertiesext(), ((VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldevicepcibusinfopropertiesext(), ((VkPhysicalDevicePCIBusInfoPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT:
        return serialize_struct(builder.getVkcommandbufferinheritanceconditionalrenderinginfoext(), ((VkCommandBufferInheritanceConditionalRenderingInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES:
        return serialize_struct(builder.getVkphysicaldevice8Bitstoragefeatures(), ((VkPhysicalDevice8BitStorageFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceconditionalrenderingfeaturesext(), ((VkPhysicalDeviceConditionalRenderingFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES:
        return serialize_struct(builder.getVkphysicaldevicevulkanmemorymodelfeatures(), ((VkPhysicalDeviceVulkanMemoryModelFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES:
        return serialize_struct(builder.getVkphysicaldeviceshaderatomicint64Features(), ((VkPhysicalDeviceShaderAtomicInt64Features*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceshaderatomicfloatfeaturesext(), ((VkPhysicalDeviceShaderAtomicFloatFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceshaderatomicfloat2Featuresext(), ((VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicevertexattributedivisorfeaturesext(), ((VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV:
        return serialize_struct(builder.getVkqueuefamilycheckpointpropertiesnv(), ((VkQueueFamilyCheckpointPropertiesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV:
        return serialize_struct(builder.getVkcheckpointdatanv(), ((VkCheckpointDataNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldevicedepthstencilresolveproperties(), ((VkPhysicalDeviceDepthStencilResolveProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE:
        return serialize_struct(builder.getVksubpassdescriptiondepthstencilresolve(), ((VkSubpassDescriptionDepthStencilResolve*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT:
        return serialize_struct(builder.getVkimageviewastcdecodemodeext(), ((VkImageViewASTCDecodeModeEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceastcdecodefeaturesext(), ((VkPhysicalDeviceASTCDecodeFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicetransformfeedbackfeaturesext(), ((VkPhysicalDeviceTransformFeedbackFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldevicetransformfeedbackpropertiesext(), ((VkPhysicalDeviceTransformFeedbackPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkpipelinerasterizationstatestreamcreateinfoext(), ((VkPipelineRasterizationStateStreamCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldevicerepresentativefragmenttestfeaturesnv(), ((VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV:
        return serialize_struct(builder.getVkpipelinerepresentativefragmentteststatecreateinfonv(), ((VkPipelineRepresentativeFragmentTestStateCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldeviceexclusivescissorfeaturesnv(), ((VkPhysicalDeviceExclusiveScissorFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV:
        return serialize_struct(builder.getVkpipelineviewportexclusivescissorstatecreateinfonv(), ((VkPipelineViewportExclusiveScissorStateCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldevicecornersampledimagefeaturesnv(), ((VkPhysicalDeviceCornerSampledImageFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldevicecomputeshaderderivativesfeaturesnv(), ((VkPhysicalDeviceComputeShaderDerivativesFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldeviceshaderimagefootprintfeaturesnv(), ((VkPhysicalDeviceShaderImageFootprintFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldevicededicatedallocationimagealiasingfeaturesnv(), ((VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldevicecopymemoryindirectfeaturesnv(), ((VkPhysicalDeviceCopyMemoryIndirectFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV:
        return serialize_struct(builder.getVkphysicaldevicecopymemoryindirectpropertiesnv(), ((VkPhysicalDeviceCopyMemoryIndirectPropertiesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldevicememorydecompressionfeaturesnv(), ((VkPhysicalDeviceMemoryDecompressionFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV:
        return serialize_struct(builder.getVkphysicaldevicememorydecompressionpropertiesnv(), ((VkPhysicalDeviceMemoryDecompressionPropertiesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV:
        return serialize_struct(builder.getVkpipelineviewportshadingrateimagestatecreateinfonv(), ((VkPipelineViewportShadingRateImageStateCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldeviceshadingrateimagefeaturesnv(), ((VkPhysicalDeviceShadingRateImageFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV:
        return serialize_struct(builder.getVkphysicaldeviceshadingrateimagepropertiesnv(), ((VkPhysicalDeviceShadingRateImagePropertiesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI:
        return serialize_struct(builder.getVkphysicaldeviceinvocationmaskfeatureshuawei(), ((VkPhysicalDeviceInvocationMaskFeaturesHUAWEI*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV:
        return serialize_struct(builder.getVkpipelineviewportcoarsesampleorderstatecreateinfonv(), ((VkPipelineViewportCoarseSampleOrderStateCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldevicemeshshaderfeaturesnv(), ((VkPhysicalDeviceMeshShaderFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV:
        return serialize_struct(builder.getVkphysicaldevicemeshshaderpropertiesnv(), ((VkPhysicalDeviceMeshShaderPropertiesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicemeshshaderfeaturesext(), ((VkPhysicalDeviceMeshShaderFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldevicemeshshaderpropertiesext(), ((VkPhysicalDeviceMeshShaderPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV:
        return serialize_struct(builder.getVkraytracingshadergroupcreateinfonv(), ((VkRayTracingShaderGroupCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkraytracingshadergroupcreateinfokhr(), ((VkRayTracingShaderGroupCreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV:
        return serialize_struct(builder.getVkraytracingpipelinecreateinfonv(), ((VkRayTracingPipelineCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkraytracingpipelinecreateinfokhr(), ((VkRayTracingPipelineCreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV:
        return serialize_struct(builder.getVkgeometrytrianglesnv(), ((VkGeometryTrianglesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV:
        return serialize_struct(builder.getVkgeometryaabbnv(), ((VkGeometryAABBNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_GEOMETRY_NV:
        return serialize_struct(builder.getVkgeometrynv(), ((VkGeometryNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV:
        return serialize_struct(builder.getVkaccelerationstructureinfonv(), ((VkAccelerationStructureInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV:
        return serialize_struct(builder.getVkaccelerationstructurecreateinfonv(), ((VkAccelerationStructureCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV:
        return serialize_struct(builder.getVkbindaccelerationstructurememoryinfonv(), ((VkBindAccelerationStructureMemoryInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR:
        return serialize_struct(builder.getVkwritedescriptorsetaccelerationstructurekhr(), ((VkWriteDescriptorSetAccelerationStructureKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV:
        return serialize_struct(builder.getVkwritedescriptorsetaccelerationstructurenv(), ((VkWriteDescriptorSetAccelerationStructureNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV:
        return serialize_struct(builder.getVkaccelerationstructurememoryrequirementsinfonv(), ((VkAccelerationStructureMemoryRequirementsInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR:
        return serialize_struct(builder.getVkphysicaldeviceaccelerationstructurefeatureskhr(), ((VkPhysicalDeviceAccelerationStructureFeaturesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR:
        return serialize_struct(builder.getVkphysicaldeviceraytracingpipelinefeatureskhr(), ((VkPhysicalDeviceRayTracingPipelineFeaturesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR:
        return serialize_struct(builder.getVkphysicaldevicerayqueryfeatureskhr(), ((VkPhysicalDeviceRayQueryFeaturesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR:
        return serialize_struct(builder.getVkphysicaldeviceaccelerationstructurepropertieskhr(), ((VkPhysicalDeviceAccelerationStructurePropertiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR:
        return serialize_struct(builder.getVkphysicaldeviceraytracingpipelinepropertieskhr(), ((VkPhysicalDeviceRayTracingPipelinePropertiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV:
        return serialize_struct(builder.getVkphysicaldeviceraytracingpropertiesnv(), ((VkPhysicalDeviceRayTracingPropertiesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR:
        return serialize_struct(builder.getVkphysicaldeviceraytracingmaintenance1Featureskhr(), ((VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT:
        return serialize_struct(builder.getVkdrmformatmodifierpropertieslistext(), ((VkDrmFormatModifierPropertiesListEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT:
        return serialize_struct(builder.getVkphysicaldeviceimagedrmformatmodifierinfoext(), ((VkPhysicalDeviceImageDrmFormatModifierInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkimagedrmformatmodifierlistcreateinfoext(), ((VkImageDrmFormatModifierListCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkimagedrmformatmodifierexplicitcreateinfoext(), ((VkImageDrmFormatModifierExplicitCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT:
        return serialize_struct(builder.getVkimagedrmformatmodifierpropertiesext(), ((VkImageDrmFormatModifierPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO:
        return serialize_struct(builder.getVkimagestencilusagecreateinfo(), ((VkImageStencilUsageCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD:
        return serialize_struct(builder.getVkdevicememoryoverallocationcreateinfoamd(), ((VkDeviceMemoryOverallocationCreateInfoAMD*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicefragmentdensitymapfeaturesext(), ((VkPhysicalDeviceFragmentDensityMapFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicefragmentdensitymap2Featuresext(), ((VkPhysicalDeviceFragmentDensityMap2FeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM:
        return serialize_struct(builder.getVkphysicaldevicefragmentdensitymapoffsetfeaturesqcom(), ((VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldevicefragmentdensitymappropertiesext(), ((VkPhysicalDeviceFragmentDensityMapPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldevicefragmentdensitymap2Propertiesext(), ((VkPhysicalDeviceFragmentDensityMap2PropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM:
        return serialize_struct(builder.getVkphysicaldevicefragmentdensitymapoffsetpropertiesqcom(), ((VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkrenderpassfragmentdensitymapcreateinfoext(), ((VkRenderPassFragmentDensityMapCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM:
        return serialize_struct(builder.getVksubpassfragmentdensitymapoffsetendinfoqcom(), ((VkSubpassFragmentDensityMapOffsetEndInfoQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES:
        return serialize_struct(builder.getVkphysicaldevicescalarblocklayoutfeatures(), ((VkPhysicalDeviceScalarBlockLayoutFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR:
        return serialize_struct(builder.getVksurfaceprotectedcapabilitieskhr(), ((VkSurfaceProtectedCapabilitiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES:
        return serialize_struct(builder.getVkphysicaldeviceuniformbufferstandardlayoutfeatures(), ((VkPhysicalDeviceUniformBufferStandardLayoutFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicedepthclipenablefeaturesext(), ((VkPhysicalDeviceDepthClipEnableFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkpipelinerasterizationdepthclipstatecreateinfoext(), ((VkPipelineRasterizationDepthClipStateCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldevicememorybudgetpropertiesext(), ((VkPhysicalDeviceMemoryBudgetPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicememorypriorityfeaturesext(), ((VkPhysicalDeviceMemoryPriorityFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT:
        return serialize_struct(builder.getVkmemorypriorityallocateinfoext(), ((VkMemoryPriorityAllocateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicepageabledevicelocalmemoryfeaturesext(), ((VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES:
        return serialize_struct(builder.getVkphysicaldevicebufferdeviceaddressfeatures(), ((VkPhysicalDeviceBufferDeviceAddressFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicebufferdeviceaddressfeaturesext(), ((VkPhysicalDeviceBufferDeviceAddressFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO:
        return serialize_struct(builder.getVkbufferdeviceaddressinfo(), ((VkBufferDeviceAddressInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO:
        return serialize_struct(builder.getVkbufferopaquecaptureaddresscreateinfo(), ((VkBufferOpaqueCaptureAddressCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkbufferdeviceaddresscreateinfoext(), ((VkBufferDeviceAddressCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT:
        return serialize_struct(builder.getVkphysicaldeviceimageviewimageformatinfoext(), ((VkPhysicalDeviceImageViewImageFormatInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT:
        return serialize_struct(builder.getVkfiltercubicimageviewimageformatpropertiesext(), ((VkFilterCubicImageViewImageFormatPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES:
        return serialize_struct(builder.getVkphysicaldeviceimagelessframebufferfeatures(), ((VkPhysicalDeviceImagelessFramebufferFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO:
        return serialize_struct(builder.getVkframebufferattachmentscreateinfo(), ((VkFramebufferAttachmentsCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO:
        return serialize_struct(builder.getVkframebufferattachmentimageinfo(), ((VkFramebufferAttachmentImageInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO:
        return serialize_struct(builder.getVkrenderpassattachmentbegininfo(), ((VkRenderPassAttachmentBeginInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES:
        return serialize_struct(builder.getVkphysicaldevicetexturecompressionastchdrfeatures(), ((VkPhysicalDeviceTextureCompressionASTCHDRFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldevicecooperativematrixfeaturesnv(), ((VkPhysicalDeviceCooperativeMatrixFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV:
        return serialize_struct(builder.getVkphysicaldevicecooperativematrixpropertiesnv(), ((VkPhysicalDeviceCooperativeMatrixPropertiesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV:
        return serialize_struct(builder.getVkcooperativematrixpropertiesnv(), ((VkCooperativeMatrixPropertiesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceycbcrimagearraysfeaturesext(), ((VkPhysicalDeviceYcbcrImageArraysFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX:
        return serialize_struct(builder.getVkimageviewhandleinfonvx(), ((VkImageViewHandleInfoNVX*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX:
        return serialize_struct(builder.getVkimageviewaddresspropertiesnvx(), ((VkImageViewAddressPropertiesNVX*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO:
        return serialize_struct(builder.getVkpipelinecreationfeedbackcreateinfo(), ((VkPipelineCreationFeedbackCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldevicepresentbarrierfeaturesnv(), ((VkPhysicalDevicePresentBarrierFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_PRESENT_BARRIER_NV:
        return serialize_struct(builder.getVksurfacecapabilitiespresentbarriernv(), ((VkSurfaceCapabilitiesPresentBarrierNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV:
        return serialize_struct(builder.getVkswapchainpresentbarriercreateinfonv(), ((VkSwapchainPresentBarrierCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR:
        return serialize_struct(builder.getVkphysicaldeviceperformancequeryfeatureskhr(), ((VkPhysicalDevicePerformanceQueryFeaturesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR:
        return serialize_struct(builder.getVkphysicaldeviceperformancequerypropertieskhr(), ((VkPhysicalDevicePerformanceQueryPropertiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR:
        return serialize_struct(builder.getVkperformancecounterkhr(), ((VkPerformanceCounterKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR:
        return serialize_struct(builder.getVkperformancecounterdescriptionkhr(), ((VkPerformanceCounterDescriptionKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkquerypoolperformancecreateinfokhr(), ((VkQueryPoolPerformanceCreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR:
        return serialize_struct(builder.getVkacquireprofilinglockinfokhr(), ((VkAcquireProfilingLockInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR:
        return serialize_struct(builder.getVkperformancequerysubmitinfokhr(), ((VkPerformanceQuerySubmitInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkheadlesssurfacecreateinfoext(), ((VkHeadlessSurfaceCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldevicecoveragereductionmodefeaturesnv(), ((VkPhysicalDeviceCoverageReductionModeFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV:
        return serialize_struct(builder.getVkpipelinecoveragereductionstatecreateinfonv(), ((VkPipelineCoverageReductionStateCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV:
        return serialize_struct(builder.getVkframebuffermixedsamplescombinationnv(), ((VkFramebufferMixedSamplesCombinationNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL:
        return serialize_struct(builder.getVkphysicaldeviceshaderintegerfunctions2Featuresintel(), ((VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL:
        return serialize_struct(builder.getVkinitializeperformanceapiinfointel(), ((VkInitializePerformanceApiInfoINTEL*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL:
        return serialize_struct(builder.getVkquerypoolperformancequerycreateinfointel(), ((VkQueryPoolPerformanceQueryCreateInfoINTEL*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL:
        return serialize_struct(builder.getVkperformancemarkerinfointel(), ((VkPerformanceMarkerInfoINTEL*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL:
        return serialize_struct(builder.getVkperformancestreammarkerinfointel(), ((VkPerformanceStreamMarkerInfoINTEL*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL:
        return serialize_struct(builder.getVkperformanceoverrideinfointel(), ((VkPerformanceOverrideInfoINTEL*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL:
        return serialize_struct(builder.getVkperformanceconfigurationacquireinfointel(), ((VkPerformanceConfigurationAcquireInfoINTEL*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR:
        return serialize_struct(builder.getVkphysicaldeviceshaderclockfeatureskhr(), ((VkPhysicalDeviceShaderClockFeaturesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceindextypeuint8Featuresext(), ((VkPhysicalDeviceIndexTypeUint8FeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV:
        return serialize_struct(builder.getVkphysicaldeviceshadersmbuiltinspropertiesnv(), ((VkPhysicalDeviceShaderSMBuiltinsPropertiesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldeviceshadersmbuiltinsfeaturesnv(), ((VkPhysicalDeviceShaderSMBuiltinsFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicefragmentshaderinterlockfeaturesext(), ((VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES:
        return serialize_struct(builder.getVkphysicaldeviceseparatedepthstencillayoutsfeatures(), ((VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT:
        return serialize_struct(builder.getVkattachmentreferencestencillayout(), ((VkAttachmentReferenceStencilLayout*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceprimitivetopologylistrestartfeaturesext(), ((VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT:
        return serialize_struct(builder.getVkattachmentdescriptionstencillayout(), ((VkAttachmentDescriptionStencilLayout*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR:
        return serialize_struct(builder.getVkphysicaldevicepipelineexecutablepropertiesfeatureskhr(), ((VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR:
        return serialize_struct(builder.getVkpipelineinfokhr(), ((VkPipelineInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR:
        return serialize_struct(builder.getVkpipelineexecutablepropertieskhr(), ((VkPipelineExecutablePropertiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR:
        return serialize_struct(builder.getVkpipelineexecutableinfokhr(), ((VkPipelineExecutableInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR:
        return serialize_struct(builder.getVkpipelineexecutablestatistickhr(), ((VkPipelineExecutableStatisticKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR:
        return serialize_struct(builder.getVkpipelineexecutableinternalrepresentationkhr(), ((VkPipelineExecutableInternalRepresentationKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES:
        return serialize_struct(builder.getVkphysicaldeviceshaderdemotetohelperinvocationfeatures(), ((VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicetexelbufferalignmentfeaturesext(), ((VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldevicetexelbufferalignmentproperties(), ((VkPhysicalDeviceTexelBufferAlignmentProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES:
        return serialize_struct(builder.getVkphysicaldevicesubgroupsizecontrolfeatures(), ((VkPhysicalDeviceSubgroupSizeControlFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldevicesubgroupsizecontrolproperties(), ((VkPhysicalDeviceSubgroupSizeControlProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO:
        return serialize_struct(builder.getVkpipelineshaderstagerequiredsubgroupsizecreateinfo(), ((VkPipelineShaderStageRequiredSubgroupSizeCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI:
        return serialize_struct(builder.getVksubpassshadingpipelinecreateinfohuawei(), ((VkSubpassShadingPipelineCreateInfoHUAWEI*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI:
        return serialize_struct(builder.getVkphysicaldevicesubpassshadingpropertieshuawei(), ((VkPhysicalDeviceSubpassShadingPropertiesHUAWEI*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI:
        return serialize_struct(builder.getVkphysicaldeviceclustercullingshaderpropertieshuawei(), ((VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO:
        return serialize_struct(builder.getVkmemoryopaquecaptureaddressallocateinfo(), ((VkMemoryOpaqueCaptureAddressAllocateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO:
        return serialize_struct(builder.getVkdevicememoryopaquecaptureaddressinfo(), ((VkDeviceMemoryOpaqueCaptureAddressInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicelinerasterizationfeaturesext(), ((VkPhysicalDeviceLineRasterizationFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldevicelinerasterizationpropertiesext(), ((VkPhysicalDeviceLineRasterizationPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkpipelinerasterizationlinestatecreateinfoext(), ((VkPipelineRasterizationLineStateCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES:
        return serialize_struct(builder.getVkphysicaldevicepipelinecreationcachecontrolfeatures(), ((VkPhysicalDevicePipelineCreationCacheControlFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES:
        return serialize_struct(builder.getVkphysicaldevicevulkan11Features(), ((VkPhysicalDeviceVulkan11Features*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldevicevulkan11Properties(), ((VkPhysicalDeviceVulkan11Properties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES:
        return serialize_struct(builder.getVkphysicaldevicevulkan12Features(), ((VkPhysicalDeviceVulkan12Features*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldevicevulkan12Properties(), ((VkPhysicalDeviceVulkan12Properties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES:
        return serialize_struct(builder.getVkphysicaldevicevulkan13Features(), ((VkPhysicalDeviceVulkan13Features*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldevicevulkan13Properties(), ((VkPhysicalDeviceVulkan13Properties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD:
        return serialize_struct(builder.getVkpipelinecompilercontrolcreateinfoamd(), ((VkPipelineCompilerControlCreateInfoAMD*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD:
        return serialize_struct(builder.getVkphysicaldevicecoherentmemoryfeaturesamd(), ((VkPhysicalDeviceCoherentMemoryFeaturesAMD*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldevicetoolproperties(), ((VkPhysicalDeviceToolProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT:
        return serialize_struct(builder.getVksamplercustombordercolorcreateinfoext(), ((VkSamplerCustomBorderColorCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldevicecustombordercolorpropertiesext(), ((VkPhysicalDeviceCustomBorderColorPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicecustombordercolorfeaturesext(), ((VkPhysicalDeviceCustomBorderColorFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT:
        return serialize_struct(builder.getVksamplerbordercolorcomponentmappingcreateinfoext(), ((VkSamplerBorderColorComponentMappingCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicebordercolorswizzlefeaturesext(), ((VkPhysicalDeviceBorderColorSwizzleFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR:
        return serialize_struct(builder.getVkaccelerationstructuregeometrytrianglesdatakhr(), ((VkAccelerationStructureGeometryTrianglesDataKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR:
        return serialize_struct(builder.getVkaccelerationstructuregeometryaabbsdatakhr(), ((VkAccelerationStructureGeometryAabbsDataKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR:
        return serialize_struct(builder.getVkaccelerationstructuregeometryinstancesdatakhr(), ((VkAccelerationStructureGeometryInstancesDataKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR:
        return serialize_struct(builder.getVkaccelerationstructuregeometrykhr(), ((VkAccelerationStructureGeometryKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR:
        return serialize_struct(builder.getVkaccelerationstructurebuildgeometryinfokhr(), ((VkAccelerationStructureBuildGeometryInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkaccelerationstructurecreateinfokhr(), ((VkAccelerationStructureCreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR:
        return serialize_struct(builder.getVkaccelerationstructuredeviceaddressinfokhr(), ((VkAccelerationStructureDeviceAddressInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_INFO_KHR:
        return serialize_struct(builder.getVkaccelerationstructureversioninfokhr(), ((VkAccelerationStructureVersionInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR:
        return serialize_struct(builder.getVkcopyaccelerationstructureinfokhr(), ((VkCopyAccelerationStructureInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR:
        return serialize_struct(builder.getVkcopyaccelerationstructuretomemoryinfokhr(), ((VkCopyAccelerationStructureToMemoryInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR:
        return serialize_struct(builder.getVkcopymemorytoaccelerationstructureinfokhr(), ((VkCopyMemoryToAccelerationStructureInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkraytracingpipelineinterfacecreateinfokhr(), ((VkRayTracingPipelineInterfaceCreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkpipelinelibrarycreateinfokhr(), ((VkPipelineLibraryCreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceextendeddynamicstatefeaturesext(), ((VkPhysicalDeviceExtendedDynamicStateFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceextendeddynamicstate2Featuresext(), ((VkPhysicalDeviceExtendedDynamicState2FeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceextendeddynamicstate3Featuresext(), ((VkPhysicalDeviceExtendedDynamicState3FeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceextendeddynamicstate3Propertiesext(), ((VkPhysicalDeviceExtendedDynamicState3PropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM:
        return serialize_struct(builder.getVkrenderpasstransformbegininfoqcom(), ((VkRenderPassTransformBeginInfoQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COPY_COMMAND_TRANSFORM_INFO_QCOM:
        return serialize_struct(builder.getVkcopycommandtransforminfoqcom(), ((VkCopyCommandTransformInfoQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM:
        return serialize_struct(builder.getVkcommandbufferinheritancerenderpasstransforminfoqcom(), ((VkCommandBufferInheritanceRenderPassTransformInfoQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldevicediagnosticsconfigfeaturesnv(), ((VkPhysicalDeviceDiagnosticsConfigFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV:
        return serialize_struct(builder.getVkdevicediagnosticsconfigcreateinfonv(), ((VkDeviceDiagnosticsConfigCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES:
        return serialize_struct(builder.getVkphysicaldevicezeroinitializeworkgroupmemoryfeatures(), ((VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR:
        return serialize_struct(builder.getVkphysicaldeviceshadersubgroupuniformcontrolflowfeatureskhr(), ((VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicerobustness2Featuresext(), ((VkPhysicalDeviceRobustness2FeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldevicerobustness2Propertiesext(), ((VkPhysicalDeviceRobustness2PropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES:
        return serialize_struct(builder.getVkphysicaldeviceimagerobustnessfeatures(), ((VkPhysicalDeviceImageRobustnessFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR:
        return serialize_struct(builder.getVkphysicaldeviceworkgroupmemoryexplicitlayoutfeatureskhr(), ((VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevice4444Formatsfeaturesext(), ((VkPhysicalDevice4444FormatsFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI:
        return serialize_struct(builder.getVkphysicaldevicesubpassshadingfeatureshuawei(), ((VkPhysicalDeviceSubpassShadingFeaturesHUAWEI*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI:
        return serialize_struct(builder.getVkphysicaldeviceclustercullingshaderfeatureshuawei(), ((VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BUFFER_COPY_2:
        return serialize_struct(builder.getVkbuffercopy2(), ((VkBufferCopy2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_COPY_2:
        return serialize_struct(builder.getVkimagecopy2(), ((VkImageCopy2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_BLIT_2:
        return serialize_struct(builder.getVkimageblit2(), ((VkImageBlit2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BUFFER_IMAGE_COPY_2:
        return serialize_struct(builder.getVkbufferimagecopy2(), ((VkBufferImageCopy2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_RESOLVE_2:
        return serialize_struct(builder.getVkimageresolve2(), ((VkImageResolve2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COPY_BUFFER_INFO_2:
        return serialize_struct(builder.getVkcopybufferinfo2(), ((VkCopyBufferInfo2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COPY_IMAGE_INFO_2:
        return serialize_struct(builder.getVkcopyimageinfo2(), ((VkCopyImageInfo2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BLIT_IMAGE_INFO_2:
        return serialize_struct(builder.getVkblitimageinfo2(), ((VkBlitImageInfo2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COPY_BUFFER_TO_IMAGE_INFO_2:
        return serialize_struct(builder.getVkcopybuffertoimageinfo2(), ((VkCopyBufferToImageInfo2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COPY_IMAGE_TO_BUFFER_INFO_2:
        return serialize_struct(builder.getVkcopyimagetobufferinfo2(), ((VkCopyImageToBufferInfo2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RESOLVE_IMAGE_INFO_2:
        return serialize_struct(builder.getVkresolveimageinfo2(), ((VkResolveImageInfo2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceshaderimageatomicint64Featuresext(), ((VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR:
        return serialize_struct(builder.getVkfragmentshadingrateattachmentinfokhr(), ((VkFragmentShadingRateAttachmentInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkpipelinefragmentshadingratestatecreateinfokhr(), ((VkPipelineFragmentShadingRateStateCreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR:
        return serialize_struct(builder.getVkphysicaldevicefragmentshadingratefeatureskhr(), ((VkPhysicalDeviceFragmentShadingRateFeaturesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR:
        return serialize_struct(builder.getVkphysicaldevicefragmentshadingratepropertieskhr(), ((VkPhysicalDeviceFragmentShadingRatePropertiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR:
        return serialize_struct(builder.getVkphysicaldevicefragmentshadingratekhr(), ((VkPhysicalDeviceFragmentShadingRateKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES:
        return serialize_struct(builder.getVkphysicaldeviceshaderterminateinvocationfeatures(), ((VkPhysicalDeviceShaderTerminateInvocationFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldevicefragmentshadingrateenumsfeaturesnv(), ((VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV:
        return serialize_struct(builder.getVkphysicaldevicefragmentshadingrateenumspropertiesnv(), ((VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV:
        return serialize_struct(builder.getVkpipelinefragmentshadingrateenumstatecreateinfonv(), ((VkPipelineFragmentShadingRateEnumStateCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR:
        return serialize_struct(builder.getVkaccelerationstructurebuildsizesinfokhr(), ((VkAccelerationStructureBuildSizesInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceimage2Dviewof3Dfeaturesext(), ((VkPhysicalDeviceImage2DViewOf3DFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceimageslicedviewof3Dfeaturesext(), ((VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceattachmentfeedbackloopdynamicstatefeaturesext(), ((VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicemutabledescriptortypefeaturesext(), ((VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkmutabledescriptortypecreateinfoext(), ((VkMutableDescriptorTypeCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicedepthclipcontrolfeaturesext(), ((VkPhysicalDeviceDepthClipControlFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkpipelineviewportdepthclipcontrolcreateinfoext(), ((VkPipelineViewportDepthClipControlCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicevertexinputdynamicstatefeaturesext(), ((VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldeviceexternalmemoryrdmafeaturesnv(), ((VkPhysicalDeviceExternalMemoryRDMAFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VERTEX_INPUT_BINDING_DESCRIPTION_2_EXT:
        return serialize_struct(builder.getVkvertexinputbindingdescription2Ext(), ((VkVertexInputBindingDescription2EXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT:
        return serialize_struct(builder.getVkvertexinputattributedescription2Ext(), ((VkVertexInputAttributeDescription2EXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicecolorwriteenablefeaturesext(), ((VkPhysicalDeviceColorWriteEnableFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkpipelinecolorwritecreateinfoext(), ((VkPipelineColorWriteCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MEMORY_BARRIER_2:
        return serialize_struct(builder.getVkmemorybarrier2(), ((VkMemoryBarrier2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER_2:
        return serialize_struct(builder.getVkimagememorybarrier2(), ((VkImageMemoryBarrier2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER_2:
        return serialize_struct(builder.getVkbuffermemorybarrier2(), ((VkBufferMemoryBarrier2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEPENDENCY_INFO:
        return serialize_struct(builder.getVkdependencyinfo(), ((VkDependencyInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SEMAPHORE_SUBMIT_INFO:
        return serialize_struct(builder.getVksemaphoresubmitinfo(), ((VkSemaphoreSubmitInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_SUBMIT_INFO:
        return serialize_struct(builder.getVkcommandbuffersubmitinfo(), ((VkCommandBufferSubmitInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SUBMIT_INFO_2:
        return serialize_struct(builder.getVksubmitinfo2(), ((VkSubmitInfo2*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV:
        return serialize_struct(builder.getVkqueuefamilycheckpointproperties2Nv(), ((VkQueueFamilyCheckpointProperties2NV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_CHECKPOINT_DATA_2_NV:
        return serialize_struct(builder.getVkcheckpointdata2Nv(), ((VkCheckpointData2NV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES:
        return serialize_struct(builder.getVkphysicaldevicesynchronization2Features(), ((VkPhysicalDeviceSynchronization2Features*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicehostimagecopyfeaturesext(), ((VkPhysicalDeviceHostImageCopyFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldevicehostimagecopypropertiesext(), ((VkPhysicalDeviceHostImageCopyPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MEMORY_TO_IMAGE_COPY_EXT:
        return serialize_struct(builder.getVkmemorytoimagecopyext(), ((VkMemoryToImageCopyEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_TO_MEMORY_COPY_EXT:
        return serialize_struct(builder.getVkimagetomemorycopyext(), ((VkImageToMemoryCopyEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COPY_MEMORY_TO_IMAGE_INFO_EXT:
        return serialize_struct(builder.getVkcopymemorytoimageinfoext(), ((VkCopyMemoryToImageInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COPY_IMAGE_TO_MEMORY_INFO_EXT:
        return serialize_struct(builder.getVkcopyimagetomemoryinfoext(), ((VkCopyImageToMemoryInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COPY_IMAGE_TO_IMAGE_INFO_EXT:
        return serialize_struct(builder.getVkcopyimagetoimageinfoext(), ((VkCopyImageToImageInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_HOST_IMAGE_LAYOUT_TRANSITION_INFO_EXT:
        return serialize_struct(builder.getVkhostimagelayouttransitioninfoext(), ((VkHostImageLayoutTransitionInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SUBRESOURCE_HOST_MEMCPY_SIZE_EXT:
        return serialize_struct(builder.getVksubresourcehostmemcpysizeext(), ((VkSubresourceHostMemcpySizeEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY_EXT:
        return serialize_struct(builder.getVkhostimagecopydeviceperformancequeryext(), ((VkHostImageCopyDevicePerformanceQueryEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceprimitivesgeneratedqueryfeaturesext(), ((VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicelegacyditheringfeaturesext(), ((VkPhysicalDeviceLegacyDitheringFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicemultisampledrendertosinglesampledfeaturesext(), ((VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT:
        return serialize_struct(builder.getVksubpassresolveperformancequeryext(), ((VkSubpassResolvePerformanceQueryEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT:
        return serialize_struct(builder.getVkmultisampledrendertosinglesampledinfoext(), ((VkMultisampledRenderToSingleSampledInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicepipelineprotectedaccessfeaturesext(), ((VkPhysicalDevicePipelineProtectedAccessFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_QUEUE_FAMILY_VIDEO_PROPERTIES_KHR:
        return serialize_struct(builder.getVkqueuefamilyvideopropertieskhr(), ((VkQueueFamilyVideoPropertiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR:
        return serialize_struct(builder.getVkqueuefamilyqueryresultstatuspropertieskhr(), ((VkQueueFamilyQueryResultStatusPropertiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_PROFILE_LIST_INFO_KHR:
        return serialize_struct(builder.getVkvideoprofilelistinfokhr(), ((VkVideoProfileListInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_FORMAT_INFO_KHR:
        return serialize_struct(builder.getVkphysicaldevicevideoformatinfokhr(), ((VkPhysicalDeviceVideoFormatInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_FORMAT_PROPERTIES_KHR:
        return serialize_struct(builder.getVkvideoformatpropertieskhr(), ((VkVideoFormatPropertiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_PROFILE_INFO_KHR:
        return serialize_struct(builder.getVkvideoprofileinfokhr(), ((VkVideoProfileInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_CAPABILITIES_KHR:
        return serialize_struct(builder.getVkvideocapabilitieskhr(), ((VkVideoCapabilitiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_SESSION_MEMORY_REQUIREMENTS_KHR:
        return serialize_struct(builder.getVkvideosessionmemoryrequirementskhr(), ((VkVideoSessionMemoryRequirementsKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BIND_VIDEO_SESSION_MEMORY_INFO_KHR:
        return serialize_struct(builder.getVkbindvideosessionmemoryinfokhr(), ((VkBindVideoSessionMemoryInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_PICTURE_RESOURCE_INFO_KHR:
        return serialize_struct(builder.getVkvideopictureresourceinfokhr(), ((VkVideoPictureResourceInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_REFERENCE_SLOT_INFO_KHR:
        return serialize_struct(builder.getVkvideoreferenceslotinfokhr(), ((VkVideoReferenceSlotInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_DECODE_CAPABILITIES_KHR:
        return serialize_struct(builder.getVkvideodecodecapabilitieskhr(), ((VkVideoDecodeCapabilitiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_DECODE_USAGE_INFO_KHR:
        return serialize_struct(builder.getVkvideodecodeusageinfokhr(), ((VkVideoDecodeUsageInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_DECODE_INFO_KHR:
        return serialize_struct(builder.getVkvideodecodeinfokhr(), ((VkVideoDecodeInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PROFILE_INFO_KHR:
        return serialize_struct(builder.getVkvideodecodeh264Profileinfokhr(), ((VkVideoDecodeH264ProfileInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_CAPABILITIES_KHR:
        return serialize_struct(builder.getVkvideodecodeh264Capabilitieskhr(), ((VkVideoDecodeH264CapabilitiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR:
        return serialize_struct(builder.getVkvideodecodeh264Sessionparametersaddinfokhr(), ((VkVideoDecodeH264SessionParametersAddInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkvideodecodeh264Sessionparameterscreateinfokhr(), ((VkVideoDecodeH264SessionParametersCreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PICTURE_INFO_KHR:
        return serialize_struct(builder.getVkvideodecodeh264Pictureinfokhr(), ((VkVideoDecodeH264PictureInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR:
        return serialize_struct(builder.getVkvideodecodeh264Dpbslotinfokhr(), ((VkVideoDecodeH264DpbSlotInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PROFILE_INFO_KHR:
        return serialize_struct(builder.getVkvideodecodeh265Profileinfokhr(), ((VkVideoDecodeH265ProfileInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_CAPABILITIES_KHR:
        return serialize_struct(builder.getVkvideodecodeh265Capabilitieskhr(), ((VkVideoDecodeH265CapabilitiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR:
        return serialize_struct(builder.getVkvideodecodeh265Sessionparametersaddinfokhr(), ((VkVideoDecodeH265SessionParametersAddInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkvideodecodeh265Sessionparameterscreateinfokhr(), ((VkVideoDecodeH265SessionParametersCreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PICTURE_INFO_KHR:
        return serialize_struct(builder.getVkvideodecodeh265Pictureinfokhr(), ((VkVideoDecodeH265PictureInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR:
        return serialize_struct(builder.getVkvideodecodeh265Dpbslotinfokhr(), ((VkVideoDecodeH265DpbSlotInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_SESSION_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkvideosessioncreateinfokhr(), ((VkVideoSessionCreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_CREATE_INFO_KHR:
        return serialize_struct(builder.getVkvideosessionparameterscreateinfokhr(), ((VkVideoSessionParametersCreateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_UPDATE_INFO_KHR:
        return serialize_struct(builder.getVkvideosessionparametersupdateinfokhr(), ((VkVideoSessionParametersUpdateInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_BEGIN_CODING_INFO_KHR:
        return serialize_struct(builder.getVkvideobegincodinginfokhr(), ((VkVideoBeginCodingInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_END_CODING_INFO_KHR:
        return serialize_struct(builder.getVkvideoendcodinginfokhr(), ((VkVideoEndCodingInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_VIDEO_CODING_CONTROL_INFO_KHR:
        return serialize_struct(builder.getVkvideocodingcontrolinfokhr(), ((VkVideoCodingControlInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldeviceinheritedviewportscissorfeaturesnv(), ((VkPhysicalDeviceInheritedViewportScissorFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV:
        return serialize_struct(builder.getVkcommandbufferinheritanceviewportscissorinfonv(), ((VkCommandBufferInheritanceViewportScissorInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceycbcr2Plane444Formatsfeaturesext(), ((VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceprovokingvertexfeaturesext(), ((VkPhysicalDeviceProvokingVertexFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceprovokingvertexpropertiesext(), ((VkPhysicalDeviceProvokingVertexPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkpipelinerasterizationprovokingvertexstatecreateinfoext(), ((VkPipelineRasterizationProvokingVertexStateCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_CU_MODULE_CREATE_INFO_NVX:
        return serialize_struct(builder.getVkcumodulecreateinfonvx(), ((VkCuModuleCreateInfoNVX*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_CU_FUNCTION_CREATE_INFO_NVX:
        return serialize_struct(builder.getVkcufunctioncreateinfonvx(), ((VkCuFunctionCreateInfoNVX*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_CU_LAUNCH_INFO_NVX:
        return serialize_struct(builder.getVkculaunchinfonvx(), ((VkCuLaunchInfoNVX*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicedescriptorbufferfeaturesext(), ((VkPhysicalDeviceDescriptorBufferFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldevicedescriptorbufferpropertiesext(), ((VkPhysicalDeviceDescriptorBufferPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldevicedescriptorbufferdensitymappropertiesext(), ((VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DESCRIPTOR_ADDRESS_INFO_EXT:
        return serialize_struct(builder.getVkdescriptoraddressinfoext(), ((VkDescriptorAddressInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_INFO_EXT:
        return serialize_struct(builder.getVkdescriptorbufferbindinginfoext(), ((VkDescriptorBufferBindingInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT:
        return serialize_struct(builder.getVkdescriptorbufferbindingpushdescriptorbufferhandleext(), ((VkDescriptorBufferBindingPushDescriptorBufferHandleEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DESCRIPTOR_GET_INFO_EXT:
        return serialize_struct(builder.getVkdescriptorgetinfoext(), ((VkDescriptorGetInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BUFFER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT:
        return serialize_struct(builder.getVkbuffercapturedescriptordatainfoext(), ((VkBufferCaptureDescriptorDataInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT:
        return serialize_struct(builder.getVkimagecapturedescriptordatainfoext(), ((VkImageCaptureDescriptorDataInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_VIEW_CAPTURE_DESCRIPTOR_DATA_INFO_EXT:
        return serialize_struct(builder.getVkimageviewcapturedescriptordatainfoext(), ((VkImageViewCaptureDescriptorDataInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SAMPLER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT:
        return serialize_struct(builder.getVksamplercapturedescriptordatainfoext(), ((VkSamplerCaptureDescriptorDataInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT:
        return serialize_struct(builder.getVkaccelerationstructurecapturedescriptordatainfoext(), ((VkAccelerationStructureCaptureDescriptorDataInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkopaquecapturedescriptordatacreateinfoext(), ((VkOpaqueCaptureDescriptorDataCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES:
        return serialize_struct(builder.getVkphysicaldeviceshaderintegerdotproductfeatures(), ((VkPhysicalDeviceShaderIntegerDotProductFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES:
        return serialize_struct(builder.getVkphysicaldeviceshaderintegerdotproductproperties(), ((VkPhysicalDeviceShaderIntegerDotProductProperties*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldevicedrmpropertiesext(), ((VkPhysicalDeviceDrmPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR:
        return serialize_struct(builder.getVkphysicaldevicefragmentshaderbarycentricfeatureskhr(), ((VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR:
        return serialize_struct(builder.getVkphysicaldevicefragmentshaderbarycentricpropertieskhr(), ((VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldeviceraytracingmotionblurfeaturesnv(), ((VkPhysicalDeviceRayTracingMotionBlurFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV:
        return serialize_struct(builder.getVkaccelerationstructuregeometrymotiontrianglesdatanv(), ((VkAccelerationStructureGeometryMotionTrianglesDataNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MOTION_INFO_NV:
        return serialize_struct(builder.getVkaccelerationstructuremotioninfonv(), ((VkAccelerationStructureMotionInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MEMORY_GET_REMOTE_ADDRESS_INFO_NV:
        return serialize_struct(builder.getVkmemorygetremoteaddressinfonv(), ((VkMemoryGetRemoteAddressInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicergba10X6Formatsfeaturesext(), ((VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3:
        return serialize_struct(builder.getVkformatproperties3(), ((VkFormatProperties3*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT:
        return serialize_struct(builder.getVkdrmformatmodifierpropertieslist2Ext(), ((VkDrmFormatModifierPropertiesList2EXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO:
        return serialize_struct(builder.getVkpipelinerenderingcreateinfo(), ((VkPipelineRenderingCreateInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RENDERING_INFO:
        return serialize_struct(builder.getVkrenderinginfo(), ((VkRenderingInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO:
        return serialize_struct(builder.getVkrenderingattachmentinfo(), ((VkRenderingAttachmentInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR:
        return serialize_struct(builder.getVkrenderingfragmentshadingrateattachmentinfokhr(), ((VkRenderingFragmentShadingRateAttachmentInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT:
        return serialize_struct(builder.getVkrenderingfragmentdensitymapattachmentinfoext(), ((VkRenderingFragmentDensityMapAttachmentInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES:
        return serialize_struct(builder.getVkphysicaldevicedynamicrenderingfeatures(), ((VkPhysicalDeviceDynamicRenderingFeatures*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO:
        return serialize_struct(builder.getVkcommandbufferinheritancerenderinginfo(), ((VkCommandBufferInheritanceRenderingInfo*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ATTACHMENT_SAMPLE_COUNT_INFO_AMD:
        return serialize_struct(builder.getVkattachmentsamplecountinfoamd(), ((VkAttachmentSampleCountInfoAMD*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX:
        return serialize_struct(builder.getVkmultiviewperviewattributesinfonvx(), ((VkMultiviewPerViewAttributesInfoNVX*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceimageviewminlodfeaturesext(), ((VkPhysicalDeviceImageViewMinLodFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkimageviewminlodcreateinfoext(), ((VkImageViewMinLodCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicerasterizationorderattachmentaccessfeaturesext(), ((VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldevicelinearcolorattachmentfeaturesnv(), ((VkPhysicalDeviceLinearColorAttachmentFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicegraphicspipelinelibraryfeaturesext(), ((VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldevicegraphicspipelinelibrarypropertiesext(), ((VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkgraphicspipelinelibrarycreateinfoext(), ((VkGraphicsPipelineLibraryCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE:
        return serialize_struct(builder.getVkphysicaldevicedescriptorsethostmappingfeaturesvalve(), ((VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_BINDING_REFERENCE_VALVE:
        return serialize_struct(builder.getVkdescriptorsetbindingreferencevalve(), ((VkDescriptorSetBindingReferenceVALVE*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_HOST_MAPPING_INFO_VALVE:
        return serialize_struct(builder.getVkdescriptorsetlayouthostmappinginfovalve(), ((VkDescriptorSetLayoutHostMappingInfoVALVE*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceshadermoduleidentifierfeaturesext(), ((VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceshadermoduleidentifierpropertiesext(), ((VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkpipelineshaderstagemoduleidentifiercreateinfoext(), ((VkPipelineShaderStageModuleIdentifierCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SHADER_MODULE_IDENTIFIER_EXT:
        return serialize_struct(builder.getVkshadermoduleidentifierext(), ((VkShaderModuleIdentifierEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_CONTROL_EXT:
        return serialize_struct(builder.getVkimagecompressioncontrolext(), ((VkImageCompressionControlEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceimagecompressioncontrolfeaturesext(), ((VkPhysicalDeviceImageCompressionControlFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_PROPERTIES_EXT:
        return serialize_struct(builder.getVkimagecompressionpropertiesext(), ((VkImageCompressionPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceimagecompressioncontrolswapchainfeaturesext(), ((VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_SUBRESOURCE_2_KHR:
        return serialize_struct(builder.getVkimagesubresource2Khr(), ((VkImageSubresource2KHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SUBRESOURCE_LAYOUT_2_KHR:
        return serialize_struct(builder.getVksubresourcelayout2Khr(), ((VkSubresourceLayout2KHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_CONTROL_EXT:
        return serialize_struct(builder.getVkrenderpasscreationcontrolext(), ((VkRenderPassCreationControlEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkrenderpasscreationfeedbackcreateinfoext(), ((VkRenderPassCreationFeedbackCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkrenderpasssubpassfeedbackcreateinfoext(), ((VkRenderPassSubpassFeedbackCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicesubpassmergefeedbackfeaturesext(), ((VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MICROMAP_BUILD_INFO_EXT:
        return serialize_struct(builder.getVkmicromapbuildinfoext(), ((VkMicromapBuildInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MICROMAP_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkmicromapcreateinfoext(), ((VkMicromapCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MICROMAP_VERSION_INFO_EXT:
        return serialize_struct(builder.getVkmicromapversioninfoext(), ((VkMicromapVersionInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COPY_MICROMAP_INFO_EXT:
        return serialize_struct(builder.getVkcopymicromapinfoext(), ((VkCopyMicromapInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COPY_MICROMAP_TO_MEMORY_INFO_EXT:
        return serialize_struct(builder.getVkcopymicromaptomemoryinfoext(), ((VkCopyMicromapToMemoryInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COPY_MEMORY_TO_MICROMAP_INFO_EXT:
        return serialize_struct(builder.getVkcopymemorytomicromapinfoext(), ((VkCopyMemoryToMicromapInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MICROMAP_BUILD_SIZES_INFO_EXT:
        return serialize_struct(builder.getVkmicromapbuildsizesinfoext(), ((VkMicromapBuildSizesInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceopacitymicromapfeaturesext(), ((VkPhysicalDeviceOpacityMicromapFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceopacitymicromappropertiesext(), ((VkPhysicalDeviceOpacityMicromapPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT:
        return serialize_struct(builder.getVkaccelerationstructuretrianglesopacitymicromapext(), ((VkAccelerationStructureTrianglesOpacityMicromapEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_PROPERTIES_IDENTIFIER_EXT:
        return serialize_struct(builder.getVkpipelinepropertiesidentifierext(), ((VkPipelinePropertiesIdentifierEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicepipelinepropertiesfeaturesext(), ((VkPhysicalDevicePipelinePropertiesFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD:
        return serialize_struct(builder.getVkphysicaldeviceshaderearlyandlatefragmenttestsfeaturesamd(), ((VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT:
        return serialize_struct(builder.getVkexternalmemoryacquireunmodifiedext(), ((VkExternalMemoryAcquireUnmodifiedEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicenonseamlesscubemapfeaturesext(), ((VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicepipelinerobustnessfeaturesext(), ((VkPhysicalDevicePipelineRobustnessFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkpipelinerobustnesscreateinfoext(), ((VkPipelineRobustnessCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldevicepipelinerobustnesspropertiesext(), ((VkPhysicalDevicePipelineRobustnessPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM:
        return serialize_struct(builder.getVkimageviewsampleweightcreateinfoqcom(), ((VkImageViewSampleWeightCreateInfoQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM:
        return serialize_struct(builder.getVkphysicaldeviceimageprocessingfeaturesqcom(), ((VkPhysicalDeviceImageProcessingFeaturesQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM:
        return serialize_struct(builder.getVkphysicaldeviceimageprocessingpropertiesqcom(), ((VkPhysicalDeviceImageProcessingPropertiesQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM:
        return serialize_struct(builder.getVkphysicaldevicetilepropertiesfeaturesqcom(), ((VkPhysicalDeviceTilePropertiesFeaturesQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_TILE_PROPERTIES_QCOM:
        return serialize_struct(builder.getVktilepropertiesqcom(), ((VkTilePropertiesQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC:
        return serialize_struct(builder.getVkphysicaldeviceamigoprofilingfeaturessec(), ((VkPhysicalDeviceAmigoProfilingFeaturesSEC*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_AMIGO_PROFILING_SUBMIT_INFO_SEC:
        return serialize_struct(builder.getVkamigoprofilingsubmitinfosec(), ((VkAmigoProfilingSubmitInfoSEC*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceattachmentfeedbacklooplayoutfeaturesext(), ((VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicedepthclampzeroonefeaturesext(), ((VkPhysicalDeviceDepthClampZeroOneFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceaddressbindingreportfeaturesext(), ((VkPhysicalDeviceAddressBindingReportFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT:
        return serialize_struct(builder.getVkdeviceaddressbindingcallbackdataext(), ((VkDeviceAddressBindingCallbackDataEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldeviceopticalflowfeaturesnv(), ((VkPhysicalDeviceOpticalFlowFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV:
        return serialize_struct(builder.getVkphysicaldeviceopticalflowpropertiesnv(), ((VkPhysicalDeviceOpticalFlowPropertiesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV:
        return serialize_struct(builder.getVkopticalflowimageformatinfonv(), ((VkOpticalFlowImageFormatInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_PROPERTIES_NV:
        return serialize_struct(builder.getVkopticalflowimageformatpropertiesnv(), ((VkOpticalFlowImageFormatPropertiesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_INFO_NV:
        return serialize_struct(builder.getVkopticalflowsessioncreateinfonv(), ((VkOpticalFlowSessionCreateInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV:
        return serialize_struct(builder.getVkopticalflowsessioncreateprivatedatainfonv(), ((VkOpticalFlowSessionCreatePrivateDataInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_OPTICAL_FLOW_EXECUTE_INFO_NV:
        return serialize_struct(builder.getVkopticalflowexecuteinfonv(), ((VkOpticalFlowExecuteInfoNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicefaultfeaturesext(), ((VkPhysicalDeviceFaultFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_FAULT_COUNTS_EXT:
        return serialize_struct(builder.getVkdevicefaultcountsext(), ((VkDeviceFaultCountsEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_FAULT_INFO_EXT:
        return serialize_struct(builder.getVkdevicefaultinfoext(), ((VkDeviceFaultInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicepipelinelibrarygrouphandlesfeaturesext(), ((VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEPTH_BIAS_INFO_EXT:
        return serialize_struct(builder.getVkdepthbiasinfoext(), ((VkDepthBiasInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEPTH_BIAS_REPRESENTATION_INFO_EXT:
        return serialize_struct(builder.getVkdepthbiasrepresentationinfoext(), ((VkDepthBiasRepresentationInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM:
        return serialize_struct(builder.getVkphysicaldeviceshadercorebuiltinspropertiesarm(), ((VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM:
        return serialize_struct(builder.getVkphysicaldeviceshadercorebuiltinsfeaturesarm(), ((VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_FRAME_BOUNDARY_EXT:
        return serialize_struct(builder.getVkframeboundaryext(), ((VkFrameBoundaryEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceframeboundaryfeaturesext(), ((VkPhysicalDeviceFrameBoundaryFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicedynamicrenderingunusedattachmentsfeaturesext(), ((VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_EXT:
        return serialize_struct(builder.getVksurfacepresentmodeext(), ((VkSurfacePresentModeEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SURFACE_PRESENT_SCALING_CAPABILITIES_EXT:
        return serialize_struct(builder.getVksurfacepresentscalingcapabilitiesext(), ((VkSurfacePresentScalingCapabilitiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_COMPATIBILITY_EXT:
        return serialize_struct(builder.getVksurfacepresentmodecompatibilityext(), ((VkSurfacePresentModeCompatibilityEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceswapchainmaintenance1Featuresext(), ((VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_FENCE_INFO_EXT:
        return serialize_struct(builder.getVkswapchainpresentfenceinfoext(), ((VkSwapchainPresentFenceInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkswapchainpresentmodescreateinfoext(), ((VkSwapchainPresentModesCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODE_INFO_EXT:
        return serialize_struct(builder.getVkswapchainpresentmodeinfoext(), ((VkSwapchainPresentModeInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkswapchainpresentscalingcreateinfoext(), ((VkSwapchainPresentScalingCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_RELEASE_SWAPCHAIN_IMAGES_INFO_EXT:
        return serialize_struct(builder.getVkreleaseswapchainimagesinfoext(), ((VkReleaseSwapchainImagesInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldevicedepthbiascontrolfeaturesext(), ((VkPhysicalDeviceDepthBiasControlFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldeviceraytracinginvocationreorderfeaturesnv(), ((VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV:
        return serialize_struct(builder.getVkphysicaldeviceraytracinginvocationreorderpropertiesnv(), ((VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_INFO_LUNARG:
        return serialize_struct(builder.getVkdirectdriverloadinginfolunarg(), ((VkDirectDriverLoadingInfoLUNARG*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_LIST_LUNARG:
        return serialize_struct(builder.getVkdirectdriverloadinglistlunarg(), ((VkDirectDriverLoadingListLUNARG*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM:
        return serialize_struct(builder.getVkphysicaldevicemultiviewperviewviewportsfeaturesqcom(), ((VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR:
        return serialize_struct(builder.getVkphysicaldeviceraytracingpositionfetchfeatureskhr(), ((VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_DEVICE_IMAGE_SUBRESOURCE_INFO_KHR:
        return serialize_struct(builder.getVkdeviceimagesubresourceinfokhr(), ((VkDeviceImageSubresourceInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM:
        return serialize_struct(builder.getVkphysicaldeviceshadercorepropertiesarm(), ((VkPhysicalDeviceShaderCorePropertiesARM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM:
        return serialize_struct(builder.getVkphysicaldevicemultiviewperviewrenderareasfeaturesqcom(), ((VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM:
        return serialize_struct(builder.getVkmultiviewperviewrenderareasrenderpassbegininfoqcom(), ((VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_QUERY_LOW_LATENCY_SUPPORT_NV:
        return serialize_struct(builder.getVkquerylowlatencysupportnv(), ((VkQueryLowLatencySupportNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MEMORY_MAP_INFO_KHR:
        return serialize_struct(builder.getVkmemorymapinfokhr(), ((VkMemoryMapInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_MEMORY_UNMAP_INFO_KHR:
        return serialize_struct(builder.getVkmemoryunmapinfokhr(), ((VkMemoryUnmapInfoKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceshaderobjectfeaturesext(), ((VkPhysicalDeviceShaderObjectFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceshaderobjectpropertiesext(), ((VkPhysicalDeviceShaderObjectPropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SHADER_CREATE_INFO_EXT:
        return serialize_struct(builder.getVkshadercreateinfoext(), ((VkShaderCreateInfoEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceshadertileimagefeaturesext(), ((VkPhysicalDeviceShaderTileImageFeaturesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT:
        return serialize_struct(builder.getVkphysicaldeviceshadertileimagepropertiesext(), ((VkPhysicalDeviceShaderTileImagePropertiesEXT*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR:
        return serialize_struct(builder.getVkphysicaldevicecooperativematrixfeatureskhr(), ((VkPhysicalDeviceCooperativeMatrixFeaturesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_KHR:
        return serialize_struct(builder.getVkcooperativematrixpropertieskhr(), ((VkCooperativeMatrixPropertiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_KHR:
        return serialize_struct(builder.getVkphysicaldevicecooperativematrixpropertieskhr(), ((VkPhysicalDeviceCooperativeMatrixPropertiesKHR*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM:
        return serialize_struct(builder.getVkphysicaldevicecubicclampfeaturesqcom(), ((VkPhysicalDeviceCubicClampFeaturesQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM:
        return serialize_struct(builder.getVkphysicaldeviceycbcrdegammafeaturesqcom(), ((VkPhysicalDeviceYcbcrDegammaFeaturesQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_YCBCR_DEGAMMA_CREATE_INFO_QCOM:
        return serialize_struct(builder.getVksamplerycbcrconversionycbcrdegammacreateinfoqcom(), ((VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM:
        return serialize_struct(builder.getVkphysicaldevicecubicweightsfeaturesqcom(), ((VkPhysicalDeviceCubicWeightsFeaturesQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SAMPLER_CUBIC_WEIGHTS_CREATE_INFO_QCOM:
        return serialize_struct(builder.getVksamplercubicweightscreateinfoqcom(), ((VkSamplerCubicWeightsCreateInfoQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_BLIT_IMAGE_CUBIC_WEIGHTS_INFO_QCOM:
        return serialize_struct(builder.getVkblitimagecubicweightsinfoqcom(), ((VkBlitImageCubicWeightsInfoQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM:
        return serialize_struct(builder.getVkphysicaldeviceimageprocessing2Featuresqcom(), ((VkPhysicalDeviceImageProcessing2FeaturesQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_PROPERTIES_QCOM:
        return serialize_struct(builder.getVkphysicaldeviceimageprocessing2Propertiesqcom(), ((VkPhysicalDeviceImageProcessing2PropertiesQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_SAMPLER_BLOCK_MATCH_WINDOW_CREATE_INFO_QCOM:
        return serialize_struct(builder.getVksamplerblockmatchwindowcreateinfoqcom(), ((VkSamplerBlockMatchWindowCreateInfoQCOM*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV:
        return serialize_struct(builder.getVkphysicaldevicedescriptorpooloverallocationfeaturesnv(), ((VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV*)(member))[0]);
    

    case VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_DRIVER_PROPERTIES_MSFT:
        return serialize_struct(builder.getVkphysicaldevicelayereddriverpropertiesmsft(), ((VkPhysicalDeviceLayeredDriverPropertiesMSFT*)(member))[0]);
    

default:
    return serialize_pNext(builder, (void*)(chain->pNext)); //Ignore invalid sTypes
}
}


void* deserialize_pNext(PNext::Reader& reader){
    if (reader.hasNone()){
        return NULL;
    }
    
    void* result;
    switch (reader.which()){


    case PNext::VKBASEOUTSTRUCTURE:
        result=(VkBaseOutStructure*)malloc(sizeof(VkBaseOutStructure));
        result[0]=deserialize_struct(reader.getVkbaseoutstructure());
        return result;
    

    case PNext::VKBASEINSTRUCTURE:
        result=(VkBaseInStructure*)malloc(sizeof(VkBaseInStructure));
        result[0]=deserialize_struct(reader.getVkbaseinstructure());
        return result;
    

    case PNext::VKOFFSET2D:
        result=(VkOffset2D*)malloc(sizeof(VkOffset2D));
        result[0]=deserialize_struct(reader.getVkoffset2D());
        return result;
    

    case PNext::VKOFFSET3D:
        result=(VkOffset3D*)malloc(sizeof(VkOffset3D));
        result[0]=deserialize_struct(reader.getVkoffset3D());
        return result;
    

    case PNext::VKEXTENT2D:
        result=(VkExtent2D*)malloc(sizeof(VkExtent2D));
        result[0]=deserialize_struct(reader.getVkextent2D());
        return result;
    

    case PNext::VKEXTENT3D:
        result=(VkExtent3D*)malloc(sizeof(VkExtent3D));
        result[0]=deserialize_struct(reader.getVkextent3D());
        return result;
    

    case PNext::VKVIEWPORT:
        result=(VkViewport*)malloc(sizeof(VkViewport));
        result[0]=deserialize_struct(reader.getVkviewport());
        return result;
    

    case PNext::VKRECT2D:
        result=(VkRect2D*)malloc(sizeof(VkRect2D));
        result[0]=deserialize_struct(reader.getVkrect2D());
        return result;
    

    case PNext::VKCLEARRECT:
        result=(VkClearRect*)malloc(sizeof(VkClearRect));
        result[0]=deserialize_struct(reader.getVkclearrect());
        return result;
    

    case PNext::VKCOMPONENTMAPPING:
        result=(VkComponentMapping*)malloc(sizeof(VkComponentMapping));
        result[0]=deserialize_struct(reader.getVkcomponentmapping());
        return result;
    

    case PNext::VKPHYSICALDEVICEPROPERTIES:
        result=(VkPhysicalDeviceProperties*)malloc(sizeof(VkPhysicalDeviceProperties));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceproperties());
        return result;
    

    case PNext::VKEXTENSIONPROPERTIES:
        result=(VkExtensionProperties*)malloc(sizeof(VkExtensionProperties));
        result[0]=deserialize_struct(reader.getVkextensionproperties());
        return result;
    

    case PNext::VKLAYERPROPERTIES:
        result=(VkLayerProperties*)malloc(sizeof(VkLayerProperties));
        result[0]=deserialize_struct(reader.getVklayerproperties());
        return result;
    

    case PNext::VKAPPLICATIONINFO:
        result=(VkApplicationInfo*)malloc(sizeof(VkApplicationInfo));
        result[0]=deserialize_struct(reader.getVkapplicationinfo());
        return result;
    

    case PNext::VKALLOCATIONCALLBACKS:
        result=(VkAllocationCallbacks*)malloc(sizeof(VkAllocationCallbacks));
        result[0]=deserialize_struct(reader.getVkallocationcallbacks());
        return result;
    

    case PNext::VKDEVICEQUEUECREATEINFO:
        result=(VkDeviceQueueCreateInfo*)malloc(sizeof(VkDeviceQueueCreateInfo));
        result[0]=deserialize_struct(reader.getVkdevicequeuecreateinfo());
        return result;
    

    case PNext::VKDEVICECREATEINFO:
        result=(VkDeviceCreateInfo*)malloc(sizeof(VkDeviceCreateInfo));
        result[0]=deserialize_struct(reader.getVkdevicecreateinfo());
        return result;
    

    case PNext::VKINSTANCECREATEINFO:
        result=(VkInstanceCreateInfo*)malloc(sizeof(VkInstanceCreateInfo));
        result[0]=deserialize_struct(reader.getVkinstancecreateinfo());
        return result;
    

    case PNext::VKQUEUEFAMILYPROPERTIES:
        result=(VkQueueFamilyProperties*)malloc(sizeof(VkQueueFamilyProperties));
        result[0]=deserialize_struct(reader.getVkqueuefamilyproperties());
        return result;
    

    case PNext::VKPHYSICALDEVICEMEMORYPROPERTIES:
        result=(VkPhysicalDeviceMemoryProperties*)malloc(sizeof(VkPhysicalDeviceMemoryProperties));
        result[0]=deserialize_struct(reader.getVkphysicaldevicememoryproperties());
        return result;
    

    case PNext::VKMEMORYALLOCATEINFO:
        result=(VkMemoryAllocateInfo*)malloc(sizeof(VkMemoryAllocateInfo));
        result[0]=deserialize_struct(reader.getVkmemoryallocateinfo());
        return result;
    

    case PNext::VKMEMORYREQUIREMENTS:
        result=(VkMemoryRequirements*)malloc(sizeof(VkMemoryRequirements));
        result[0]=deserialize_struct(reader.getVkmemoryrequirements());
        return result;
    

    case PNext::VKSPARSEIMAGEFORMATPROPERTIES:
        result=(VkSparseImageFormatProperties*)malloc(sizeof(VkSparseImageFormatProperties));
        result[0]=deserialize_struct(reader.getVksparseimageformatproperties());
        return result;
    

    case PNext::VKSPARSEIMAGEMEMORYREQUIREMENTS:
        result=(VkSparseImageMemoryRequirements*)malloc(sizeof(VkSparseImageMemoryRequirements));
        result[0]=deserialize_struct(reader.getVksparseimagememoryrequirements());
        return result;
    

    case PNext::VKMEMORYTYPE:
        result=(VkMemoryType*)malloc(sizeof(VkMemoryType));
        result[0]=deserialize_struct(reader.getVkmemorytype());
        return result;
    

    case PNext::VKMEMORYHEAP:
        result=(VkMemoryHeap*)malloc(sizeof(VkMemoryHeap));
        result[0]=deserialize_struct(reader.getVkmemoryheap());
        return result;
    

    case PNext::VKMAPPEDMEMORYRANGE:
        result=(VkMappedMemoryRange*)malloc(sizeof(VkMappedMemoryRange));
        result[0]=deserialize_struct(reader.getVkmappedmemoryrange());
        return result;
    

    case PNext::VKFORMATPROPERTIES:
        result=(VkFormatProperties*)malloc(sizeof(VkFormatProperties));
        result[0]=deserialize_struct(reader.getVkformatproperties());
        return result;
    

    case PNext::VKIMAGEFORMATPROPERTIES:
        result=(VkImageFormatProperties*)malloc(sizeof(VkImageFormatProperties));
        result[0]=deserialize_struct(reader.getVkimageformatproperties());
        return result;
    

    case PNext::VKDESCRIPTORBUFFERINFO:
        result=(VkDescriptorBufferInfo*)malloc(sizeof(VkDescriptorBufferInfo));
        result[0]=deserialize_struct(reader.getVkdescriptorbufferinfo());
        return result;
    

    case PNext::VKDESCRIPTORIMAGEINFO:
        result=(VkDescriptorImageInfo*)malloc(sizeof(VkDescriptorImageInfo));
        result[0]=deserialize_struct(reader.getVkdescriptorimageinfo());
        return result;
    

    case PNext::VKWRITEDESCRIPTORSET:
        result=(VkWriteDescriptorSet*)malloc(sizeof(VkWriteDescriptorSet));
        result[0]=deserialize_struct(reader.getVkwritedescriptorset());
        return result;
    

    case PNext::VKCOPYDESCRIPTORSET:
        result=(VkCopyDescriptorSet*)malloc(sizeof(VkCopyDescriptorSet));
        result[0]=deserialize_struct(reader.getVkcopydescriptorset());
        return result;
    

    case PNext::VKBUFFERUSAGEFLAGS2CREATEINFOKHR:
        result=(VkBufferUsageFlags2CreateInfoKHR*)malloc(sizeof(VkBufferUsageFlags2CreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkbufferusageflags2Createinfokhr());
        return result;
    

    case PNext::VKBUFFERCREATEINFO:
        result=(VkBufferCreateInfo*)malloc(sizeof(VkBufferCreateInfo));
        result[0]=deserialize_struct(reader.getVkbuffercreateinfo());
        return result;
    

    case PNext::VKBUFFERVIEWCREATEINFO:
        result=(VkBufferViewCreateInfo*)malloc(sizeof(VkBufferViewCreateInfo));
        result[0]=deserialize_struct(reader.getVkbufferviewcreateinfo());
        return result;
    

    case PNext::VKIMAGESUBRESOURCE:
        result=(VkImageSubresource*)malloc(sizeof(VkImageSubresource));
        result[0]=deserialize_struct(reader.getVkimagesubresource());
        return result;
    

    case PNext::VKIMAGESUBRESOURCELAYERS:
        result=(VkImageSubresourceLayers*)malloc(sizeof(VkImageSubresourceLayers));
        result[0]=deserialize_struct(reader.getVkimagesubresourcelayers());
        return result;
    

    case PNext::VKIMAGESUBRESOURCERANGE:
        result=(VkImageSubresourceRange*)malloc(sizeof(VkImageSubresourceRange));
        result[0]=deserialize_struct(reader.getVkimagesubresourcerange());
        return result;
    

    case PNext::VKMEMORYBARRIER:
        result=(VkMemoryBarrier*)malloc(sizeof(VkMemoryBarrier));
        result[0]=deserialize_struct(reader.getVkmemorybarrier());
        return result;
    

    case PNext::VKBUFFERMEMORYBARRIER:
        result=(VkBufferMemoryBarrier*)malloc(sizeof(VkBufferMemoryBarrier));
        result[0]=deserialize_struct(reader.getVkbuffermemorybarrier());
        return result;
    

    case PNext::VKIMAGEMEMORYBARRIER:
        result=(VkImageMemoryBarrier*)malloc(sizeof(VkImageMemoryBarrier));
        result[0]=deserialize_struct(reader.getVkimagememorybarrier());
        return result;
    

    case PNext::VKIMAGECREATEINFO:
        result=(VkImageCreateInfo*)malloc(sizeof(VkImageCreateInfo));
        result[0]=deserialize_struct(reader.getVkimagecreateinfo());
        return result;
    

    case PNext::VKSUBRESOURCELAYOUT:
        result=(VkSubresourceLayout*)malloc(sizeof(VkSubresourceLayout));
        result[0]=deserialize_struct(reader.getVksubresourcelayout());
        return result;
    

    case PNext::VKIMAGEVIEWCREATEINFO:
        result=(VkImageViewCreateInfo*)malloc(sizeof(VkImageViewCreateInfo));
        result[0]=deserialize_struct(reader.getVkimageviewcreateinfo());
        return result;
    

    case PNext::VKBUFFERCOPY:
        result=(VkBufferCopy*)malloc(sizeof(VkBufferCopy));
        result[0]=deserialize_struct(reader.getVkbuffercopy());
        return result;
    

    case PNext::VKSPARSEMEMORYBIND:
        result=(VkSparseMemoryBind*)malloc(sizeof(VkSparseMemoryBind));
        result[0]=deserialize_struct(reader.getVksparsememorybind());
        return result;
    

    case PNext::VKSPARSEIMAGEMEMORYBIND:
        result=(VkSparseImageMemoryBind*)malloc(sizeof(VkSparseImageMemoryBind));
        result[0]=deserialize_struct(reader.getVksparseimagememorybind());
        return result;
    

    case PNext::VKSPARSEBUFFERMEMORYBINDINFO:
        result=(VkSparseBufferMemoryBindInfo*)malloc(sizeof(VkSparseBufferMemoryBindInfo));
        result[0]=deserialize_struct(reader.getVksparsebuffermemorybindinfo());
        return result;
    

    case PNext::VKSPARSEIMAGEOPAQUEMEMORYBINDINFO:
        result=(VkSparseImageOpaqueMemoryBindInfo*)malloc(sizeof(VkSparseImageOpaqueMemoryBindInfo));
        result[0]=deserialize_struct(reader.getVksparseimageopaquememorybindinfo());
        return result;
    

    case PNext::VKSPARSEIMAGEMEMORYBINDINFO:
        result=(VkSparseImageMemoryBindInfo*)malloc(sizeof(VkSparseImageMemoryBindInfo));
        result[0]=deserialize_struct(reader.getVksparseimagememorybindinfo());
        return result;
    

    case PNext::VKBINDSPARSEINFO:
        result=(VkBindSparseInfo*)malloc(sizeof(VkBindSparseInfo));
        result[0]=deserialize_struct(reader.getVkbindsparseinfo());
        return result;
    

    case PNext::VKIMAGECOPY:
        result=(VkImageCopy*)malloc(sizeof(VkImageCopy));
        result[0]=deserialize_struct(reader.getVkimagecopy());
        return result;
    

    case PNext::VKIMAGEBLIT:
        result=(VkImageBlit*)malloc(sizeof(VkImageBlit));
        result[0]=deserialize_struct(reader.getVkimageblit());
        return result;
    

    case PNext::VKBUFFERIMAGECOPY:
        result=(VkBufferImageCopy*)malloc(sizeof(VkBufferImageCopy));
        result[0]=deserialize_struct(reader.getVkbufferimagecopy());
        return result;
    

    case PNext::VKCOPYMEMORYINDIRECTCOMMANDNV:
        result=(VkCopyMemoryIndirectCommandNV*)malloc(sizeof(VkCopyMemoryIndirectCommandNV));
        result[0]=deserialize_struct(reader.getVkcopymemoryindirectcommandnv());
        return result;
    

    case PNext::VKCOPYMEMORYTOIMAGEINDIRECTCOMMANDNV:
        result=(VkCopyMemoryToImageIndirectCommandNV*)malloc(sizeof(VkCopyMemoryToImageIndirectCommandNV));
        result[0]=deserialize_struct(reader.getVkcopymemorytoimageindirectcommandnv());
        return result;
    

    case PNext::VKIMAGERESOLVE:
        result=(VkImageResolve*)malloc(sizeof(VkImageResolve));
        result[0]=deserialize_struct(reader.getVkimageresolve());
        return result;
    

    case PNext::VKSHADERMODULECREATEINFO:
        result=(VkShaderModuleCreateInfo*)malloc(sizeof(VkShaderModuleCreateInfo));
        result[0]=deserialize_struct(reader.getVkshadermodulecreateinfo());
        return result;
    

    case PNext::VKDESCRIPTORSETLAYOUTBINDING:
        result=(VkDescriptorSetLayoutBinding*)malloc(sizeof(VkDescriptorSetLayoutBinding));
        result[0]=deserialize_struct(reader.getVkdescriptorsetlayoutbinding());
        return result;
    

    case PNext::VKDESCRIPTORSETLAYOUTCREATEINFO:
        result=(VkDescriptorSetLayoutCreateInfo*)malloc(sizeof(VkDescriptorSetLayoutCreateInfo));
        result[0]=deserialize_struct(reader.getVkdescriptorsetlayoutcreateinfo());
        return result;
    

    case PNext::VKDESCRIPTORPOOLSIZE:
        result=(VkDescriptorPoolSize*)malloc(sizeof(VkDescriptorPoolSize));
        result[0]=deserialize_struct(reader.getVkdescriptorpoolsize());
        return result;
    

    case PNext::VKDESCRIPTORPOOLCREATEINFO:
        result=(VkDescriptorPoolCreateInfo*)malloc(sizeof(VkDescriptorPoolCreateInfo));
        result[0]=deserialize_struct(reader.getVkdescriptorpoolcreateinfo());
        return result;
    

    case PNext::VKDESCRIPTORSETALLOCATEINFO:
        result=(VkDescriptorSetAllocateInfo*)malloc(sizeof(VkDescriptorSetAllocateInfo));
        result[0]=deserialize_struct(reader.getVkdescriptorsetallocateinfo());
        return result;
    

    case PNext::VKSPECIALIZATIONMAPENTRY:
        result=(VkSpecializationMapEntry*)malloc(sizeof(VkSpecializationMapEntry));
        result[0]=deserialize_struct(reader.getVkspecializationmapentry());
        return result;
    

    case PNext::VKSPECIALIZATIONINFO:
        result=(VkSpecializationInfo*)malloc(sizeof(VkSpecializationInfo));
        result[0]=deserialize_struct(reader.getVkspecializationinfo());
        return result;
    

    case PNext::VKPIPELINESHADERSTAGECREATEINFO:
        result=(VkPipelineShaderStageCreateInfo*)malloc(sizeof(VkPipelineShaderStageCreateInfo));
        result[0]=deserialize_struct(reader.getVkpipelineshaderstagecreateinfo());
        return result;
    

    case PNext::VKCOMPUTEPIPELINECREATEINFO:
        result=(VkComputePipelineCreateInfo*)malloc(sizeof(VkComputePipelineCreateInfo));
        result[0]=deserialize_struct(reader.getVkcomputepipelinecreateinfo());
        return result;
    

    case PNext::VKCOMPUTEPIPELINEINDIRECTBUFFERINFONV:
        result=(VkComputePipelineIndirectBufferInfoNV*)malloc(sizeof(VkComputePipelineIndirectBufferInfoNV));
        result[0]=deserialize_struct(reader.getVkcomputepipelineindirectbufferinfonv());
        return result;
    

    case PNext::VKPIPELINECREATEFLAGS2CREATEINFOKHR:
        result=(VkPipelineCreateFlags2CreateInfoKHR*)malloc(sizeof(VkPipelineCreateFlags2CreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkpipelinecreateflags2Createinfokhr());
        return result;
    

    case PNext::VKVERTEXINPUTBINDINGDESCRIPTION:
        result=(VkVertexInputBindingDescription*)malloc(sizeof(VkVertexInputBindingDescription));
        result[0]=deserialize_struct(reader.getVkvertexinputbindingdescription());
        return result;
    

    case PNext::VKVERTEXINPUTATTRIBUTEDESCRIPTION:
        result=(VkVertexInputAttributeDescription*)malloc(sizeof(VkVertexInputAttributeDescription));
        result[0]=deserialize_struct(reader.getVkvertexinputattributedescription());
        return result;
    

    case PNext::VKPIPELINEVERTEXINPUTSTATECREATEINFO:
        result=(VkPipelineVertexInputStateCreateInfo*)malloc(sizeof(VkPipelineVertexInputStateCreateInfo));
        result[0]=deserialize_struct(reader.getVkpipelinevertexinputstatecreateinfo());
        return result;
    

    case PNext::VKPIPELINEINPUTASSEMBLYSTATECREATEINFO:
        result=(VkPipelineInputAssemblyStateCreateInfo*)malloc(sizeof(VkPipelineInputAssemblyStateCreateInfo));
        result[0]=deserialize_struct(reader.getVkpipelineinputassemblystatecreateinfo());
        return result;
    

    case PNext::VKPIPELINETESSELLATIONSTATECREATEINFO:
        result=(VkPipelineTessellationStateCreateInfo*)malloc(sizeof(VkPipelineTessellationStateCreateInfo));
        result[0]=deserialize_struct(reader.getVkpipelinetessellationstatecreateinfo());
        return result;
    

    case PNext::VKPIPELINEVIEWPORTSTATECREATEINFO:
        result=(VkPipelineViewportStateCreateInfo*)malloc(sizeof(VkPipelineViewportStateCreateInfo));
        result[0]=deserialize_struct(reader.getVkpipelineviewportstatecreateinfo());
        return result;
    

    case PNext::VKPIPELINERASTERIZATIONSTATECREATEINFO:
        result=(VkPipelineRasterizationStateCreateInfo*)malloc(sizeof(VkPipelineRasterizationStateCreateInfo));
        result[0]=deserialize_struct(reader.getVkpipelinerasterizationstatecreateinfo());
        return result;
    

    case PNext::VKPIPELINEMULTISAMPLESTATECREATEINFO:
        result=(VkPipelineMultisampleStateCreateInfo*)malloc(sizeof(VkPipelineMultisampleStateCreateInfo));
        result[0]=deserialize_struct(reader.getVkpipelinemultisamplestatecreateinfo());
        return result;
    

    case PNext::VKPIPELINECOLORBLENDATTACHMENTSTATE:
        result=(VkPipelineColorBlendAttachmentState*)malloc(sizeof(VkPipelineColorBlendAttachmentState));
        result[0]=deserialize_struct(reader.getVkpipelinecolorblendattachmentstate());
        return result;
    

    case PNext::VKPIPELINECOLORBLENDSTATECREATEINFO:
        result=(VkPipelineColorBlendStateCreateInfo*)malloc(sizeof(VkPipelineColorBlendStateCreateInfo));
        result[0]=deserialize_struct(reader.getVkpipelinecolorblendstatecreateinfo());
        return result;
    

    case PNext::VKPIPELINEDYNAMICSTATECREATEINFO:
        result=(VkPipelineDynamicStateCreateInfo*)malloc(sizeof(VkPipelineDynamicStateCreateInfo));
        result[0]=deserialize_struct(reader.getVkpipelinedynamicstatecreateinfo());
        return result;
    

    case PNext::VKSTENCILOPSTATE:
        result=(VkStencilOpState*)malloc(sizeof(VkStencilOpState));
        result[0]=deserialize_struct(reader.getVkstencilopstate());
        return result;
    

    case PNext::VKPIPELINEDEPTHSTENCILSTATECREATEINFO:
        result=(VkPipelineDepthStencilStateCreateInfo*)malloc(sizeof(VkPipelineDepthStencilStateCreateInfo));
        result[0]=deserialize_struct(reader.getVkpipelinedepthstencilstatecreateinfo());
        return result;
    

    case PNext::VKGRAPHICSPIPELINECREATEINFO:
        result=(VkGraphicsPipelineCreateInfo*)malloc(sizeof(VkGraphicsPipelineCreateInfo));
        result[0]=deserialize_struct(reader.getVkgraphicspipelinecreateinfo());
        return result;
    

    case PNext::VKPIPELINECACHECREATEINFO:
        result=(VkPipelineCacheCreateInfo*)malloc(sizeof(VkPipelineCacheCreateInfo));
        result[0]=deserialize_struct(reader.getVkpipelinecachecreateinfo());
        return result;
    

    case PNext::VKPIPELINECACHEHEADERVERSIONONE:
        result=(VkPipelineCacheHeaderVersionOne*)malloc(sizeof(VkPipelineCacheHeaderVersionOne));
        result[0]=deserialize_struct(reader.getVkpipelinecacheheaderversionone());
        return result;
    

    case PNext::VKPUSHCONSTANTRANGE:
        result=(VkPushConstantRange*)malloc(sizeof(VkPushConstantRange));
        result[0]=deserialize_struct(reader.getVkpushconstantrange());
        return result;
    

    case PNext::VKPIPELINELAYOUTCREATEINFO:
        result=(VkPipelineLayoutCreateInfo*)malloc(sizeof(VkPipelineLayoutCreateInfo));
        result[0]=deserialize_struct(reader.getVkpipelinelayoutcreateinfo());
        return result;
    

    case PNext::VKSAMPLERCREATEINFO:
        result=(VkSamplerCreateInfo*)malloc(sizeof(VkSamplerCreateInfo));
        result[0]=deserialize_struct(reader.getVksamplercreateinfo());
        return result;
    

    case PNext::VKCOMMANDPOOLCREATEINFO:
        result=(VkCommandPoolCreateInfo*)malloc(sizeof(VkCommandPoolCreateInfo));
        result[0]=deserialize_struct(reader.getVkcommandpoolcreateinfo());
        return result;
    

    case PNext::VKCOMMANDBUFFERALLOCATEINFO:
        result=(VkCommandBufferAllocateInfo*)malloc(sizeof(VkCommandBufferAllocateInfo));
        result[0]=deserialize_struct(reader.getVkcommandbufferallocateinfo());
        return result;
    

    case PNext::VKCOMMANDBUFFERINHERITANCEINFO:
        result=(VkCommandBufferInheritanceInfo*)malloc(sizeof(VkCommandBufferInheritanceInfo));
        result[0]=deserialize_struct(reader.getVkcommandbufferinheritanceinfo());
        return result;
    

    case PNext::VKCOMMANDBUFFERBEGININFO:
        result=(VkCommandBufferBeginInfo*)malloc(sizeof(VkCommandBufferBeginInfo));
        result[0]=deserialize_struct(reader.getVkcommandbufferbegininfo());
        return result;
    

    case PNext::VKRENDERPASSBEGININFO:
        result=(VkRenderPassBeginInfo*)malloc(sizeof(VkRenderPassBeginInfo));
        result[0]=deserialize_struct(reader.getVkrenderpassbegininfo());
        return result;
    

    case PNext::VKCLEARCOLORVALUE:
        result=(VkClearColorValue*)malloc(sizeof(VkClearColorValue));
        result[0]=deserialize_struct(reader.getVkclearcolorvalue());
        return result;
    

    case PNext::VKCLEARDEPTHSTENCILVALUE:
        result=(VkClearDepthStencilValue*)malloc(sizeof(VkClearDepthStencilValue));
        result[0]=deserialize_struct(reader.getVkcleardepthstencilvalue());
        return result;
    

    case PNext::VKCLEARVALUE:
        result=(VkClearValue*)malloc(sizeof(VkClearValue));
        result[0]=deserialize_struct(reader.getVkclearvalue());
        return result;
    

    case PNext::VKCLEARATTACHMENT:
        result=(VkClearAttachment*)malloc(sizeof(VkClearAttachment));
        result[0]=deserialize_struct(reader.getVkclearattachment());
        return result;
    

    case PNext::VKATTACHMENTDESCRIPTION:
        result=(VkAttachmentDescription*)malloc(sizeof(VkAttachmentDescription));
        result[0]=deserialize_struct(reader.getVkattachmentdescription());
        return result;
    

    case PNext::VKATTACHMENTREFERENCE:
        result=(VkAttachmentReference*)malloc(sizeof(VkAttachmentReference));
        result[0]=deserialize_struct(reader.getVkattachmentreference());
        return result;
    

    case PNext::VKSUBPASSDESCRIPTION:
        result=(VkSubpassDescription*)malloc(sizeof(VkSubpassDescription));
        result[0]=deserialize_struct(reader.getVksubpassdescription());
        return result;
    

    case PNext::VKSUBPASSDEPENDENCY:
        result=(VkSubpassDependency*)malloc(sizeof(VkSubpassDependency));
        result[0]=deserialize_struct(reader.getVksubpassdependency());
        return result;
    

    case PNext::VKRENDERPASSCREATEINFO:
        result=(VkRenderPassCreateInfo*)malloc(sizeof(VkRenderPassCreateInfo));
        result[0]=deserialize_struct(reader.getVkrenderpasscreateinfo());
        return result;
    

    case PNext::VKEVENTCREATEINFO:
        result=(VkEventCreateInfo*)malloc(sizeof(VkEventCreateInfo));
        result[0]=deserialize_struct(reader.getVkeventcreateinfo());
        return result;
    

    case PNext::VKFENCECREATEINFO:
        result=(VkFenceCreateInfo*)malloc(sizeof(VkFenceCreateInfo));
        result[0]=deserialize_struct(reader.getVkfencecreateinfo());
        return result;
    

    case PNext::VKPHYSICALDEVICEFEATURES:
        result=(VkPhysicalDeviceFeatures*)malloc(sizeof(VkPhysicalDeviceFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldevicefeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICESPARSEPROPERTIES:
        result=(VkPhysicalDeviceSparseProperties*)malloc(sizeof(VkPhysicalDeviceSparseProperties));
        result[0]=deserialize_struct(reader.getVkphysicaldevicesparseproperties());
        return result;
    

    case PNext::VKPHYSICALDEVICELIMITS:
        result=(VkPhysicalDeviceLimits*)malloc(sizeof(VkPhysicalDeviceLimits));
        result[0]=deserialize_struct(reader.getVkphysicaldevicelimits());
        return result;
    

    case PNext::VKSEMAPHORECREATEINFO:
        result=(VkSemaphoreCreateInfo*)malloc(sizeof(VkSemaphoreCreateInfo));
        result[0]=deserialize_struct(reader.getVksemaphorecreateinfo());
        return result;
    

    case PNext::VKQUERYPOOLCREATEINFO:
        result=(VkQueryPoolCreateInfo*)malloc(sizeof(VkQueryPoolCreateInfo));
        result[0]=deserialize_struct(reader.getVkquerypoolcreateinfo());
        return result;
    

    case PNext::VKFRAMEBUFFERCREATEINFO:
        result=(VkFramebufferCreateInfo*)malloc(sizeof(VkFramebufferCreateInfo));
        result[0]=deserialize_struct(reader.getVkframebuffercreateinfo());
        return result;
    

    case PNext::VKDRAWINDIRECTCOMMAND:
        result=(VkDrawIndirectCommand*)malloc(sizeof(VkDrawIndirectCommand));
        result[0]=deserialize_struct(reader.getVkdrawindirectcommand());
        return result;
    

    case PNext::VKDRAWINDEXEDINDIRECTCOMMAND:
        result=(VkDrawIndexedIndirectCommand*)malloc(sizeof(VkDrawIndexedIndirectCommand));
        result[0]=deserialize_struct(reader.getVkdrawindexedindirectcommand());
        return result;
    

    case PNext::VKDISPATCHINDIRECTCOMMAND:
        result=(VkDispatchIndirectCommand*)malloc(sizeof(VkDispatchIndirectCommand));
        result[0]=deserialize_struct(reader.getVkdispatchindirectcommand());
        return result;
    

    case PNext::VKMULTIDRAWINFOEXT:
        result=(VkMultiDrawInfoEXT*)malloc(sizeof(VkMultiDrawInfoEXT));
        result[0]=deserialize_struct(reader.getVkmultidrawinfoext());
        return result;
    

    case PNext::VKMULTIDRAWINDEXEDINFOEXT:
        result=(VkMultiDrawIndexedInfoEXT*)malloc(sizeof(VkMultiDrawIndexedInfoEXT));
        result[0]=deserialize_struct(reader.getVkmultidrawindexedinfoext());
        return result;
    

    case PNext::VKSUBMITINFO:
        result=(VkSubmitInfo*)malloc(sizeof(VkSubmitInfo));
        result[0]=deserialize_struct(reader.getVksubmitinfo());
        return result;
    

    case PNext::VKDISPLAYPROPERTIESKHR:
        result=(VkDisplayPropertiesKHR*)malloc(sizeof(VkDisplayPropertiesKHR));
        result[0]=deserialize_struct(reader.getVkdisplaypropertieskhr());
        return result;
    

    case PNext::VKDISPLAYPLANEPROPERTIESKHR:
        result=(VkDisplayPlanePropertiesKHR*)malloc(sizeof(VkDisplayPlanePropertiesKHR));
        result[0]=deserialize_struct(reader.getVkdisplayplanepropertieskhr());
        return result;
    

    case PNext::VKDISPLAYMODEPARAMETERSKHR:
        result=(VkDisplayModeParametersKHR*)malloc(sizeof(VkDisplayModeParametersKHR));
        result[0]=deserialize_struct(reader.getVkdisplaymodeparameterskhr());
        return result;
    

    case PNext::VKDISPLAYMODEPROPERTIESKHR:
        result=(VkDisplayModePropertiesKHR*)malloc(sizeof(VkDisplayModePropertiesKHR));
        result[0]=deserialize_struct(reader.getVkdisplaymodepropertieskhr());
        return result;
    

    case PNext::VKDISPLAYMODECREATEINFOKHR:
        result=(VkDisplayModeCreateInfoKHR*)malloc(sizeof(VkDisplayModeCreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkdisplaymodecreateinfokhr());
        return result;
    

    case PNext::VKDISPLAYPLANECAPABILITIESKHR:
        result=(VkDisplayPlaneCapabilitiesKHR*)malloc(sizeof(VkDisplayPlaneCapabilitiesKHR));
        result[0]=deserialize_struct(reader.getVkdisplayplanecapabilitieskhr());
        return result;
    

    case PNext::VKDISPLAYSURFACECREATEINFOKHR:
        result=(VkDisplaySurfaceCreateInfoKHR*)malloc(sizeof(VkDisplaySurfaceCreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkdisplaysurfacecreateinfokhr());
        return result;
    

    case PNext::VKDISPLAYPRESENTINFOKHR:
        result=(VkDisplayPresentInfoKHR*)malloc(sizeof(VkDisplayPresentInfoKHR));
        result[0]=deserialize_struct(reader.getVkdisplaypresentinfokhr());
        return result;
    

    case PNext::VKSURFACECAPABILITIESKHR:
        result=(VkSurfaceCapabilitiesKHR*)malloc(sizeof(VkSurfaceCapabilitiesKHR));
        result[0]=deserialize_struct(reader.getVksurfacecapabilitieskhr());
        return result;
    

    case PNext::VKXLIBSURFACECREATEINFOKHR:
        result=(VkXlibSurfaceCreateInfoKHR*)malloc(sizeof(VkXlibSurfaceCreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkxlibsurfacecreateinfokhr());
        return result;
    

    case PNext::VKXCBSURFACECREATEINFOKHR:
        result=(VkXcbSurfaceCreateInfoKHR*)malloc(sizeof(VkXcbSurfaceCreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkxcbsurfacecreateinfokhr());
        return result;
    

    case PNext::VKSURFACEFORMATKHR:
        result=(VkSurfaceFormatKHR*)malloc(sizeof(VkSurfaceFormatKHR));
        result[0]=deserialize_struct(reader.getVksurfaceformatkhr());
        return result;
    

    case PNext::VKSWAPCHAINCREATEINFOKHR:
        result=(VkSwapchainCreateInfoKHR*)malloc(sizeof(VkSwapchainCreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkswapchaincreateinfokhr());
        return result;
    

    case PNext::VKPRESENTINFOKHR:
        result=(VkPresentInfoKHR*)malloc(sizeof(VkPresentInfoKHR));
        result[0]=deserialize_struct(reader.getVkpresentinfokhr());
        return result;
    

    case PNext::VKDEBUGREPORTCALLBACKCREATEINFOEXT:
        result=(VkDebugReportCallbackCreateInfoEXT*)malloc(sizeof(VkDebugReportCallbackCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkdebugreportcallbackcreateinfoext());
        return result;
    

    case PNext::VKVALIDATIONFLAGSEXT:
        result=(VkValidationFlagsEXT*)malloc(sizeof(VkValidationFlagsEXT));
        result[0]=deserialize_struct(reader.getVkvalidationflagsext());
        return result;
    

    case PNext::VKVALIDATIONFEATURESEXT:
        result=(VkValidationFeaturesEXT*)malloc(sizeof(VkValidationFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkvalidationfeaturesext());
        return result;
    

    case PNext::VKPIPELINERASTERIZATIONSTATERASTERIZATIONORDERAMD:
        result=(VkPipelineRasterizationStateRasterizationOrderAMD*)malloc(sizeof(VkPipelineRasterizationStateRasterizationOrderAMD));
        result[0]=deserialize_struct(reader.getVkpipelinerasterizationstaterasterizationorderamd());
        return result;
    

    case PNext::VKDEBUGMARKEROBJECTNAMEINFOEXT:
        result=(VkDebugMarkerObjectNameInfoEXT*)malloc(sizeof(VkDebugMarkerObjectNameInfoEXT));
        result[0]=deserialize_struct(reader.getVkdebugmarkerobjectnameinfoext());
        return result;
    

    case PNext::VKDEBUGMARKEROBJECTTAGINFOEXT:
        result=(VkDebugMarkerObjectTagInfoEXT*)malloc(sizeof(VkDebugMarkerObjectTagInfoEXT));
        result[0]=deserialize_struct(reader.getVkdebugmarkerobjecttaginfoext());
        return result;
    

    case PNext::VKDEBUGMARKERMARKERINFOEXT:
        result=(VkDebugMarkerMarkerInfoEXT*)malloc(sizeof(VkDebugMarkerMarkerInfoEXT));
        result[0]=deserialize_struct(reader.getVkdebugmarkermarkerinfoext());
        return result;
    

    case PNext::VKDEDICATEDALLOCATIONIMAGECREATEINFONV:
        result=(VkDedicatedAllocationImageCreateInfoNV*)malloc(sizeof(VkDedicatedAllocationImageCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkdedicatedallocationimagecreateinfonv());
        return result;
    

    case PNext::VKDEDICATEDALLOCATIONBUFFERCREATEINFONV:
        result=(VkDedicatedAllocationBufferCreateInfoNV*)malloc(sizeof(VkDedicatedAllocationBufferCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkdedicatedallocationbuffercreateinfonv());
        return result;
    

    case PNext::VKDEDICATEDALLOCATIONMEMORYALLOCATEINFONV:
        result=(VkDedicatedAllocationMemoryAllocateInfoNV*)malloc(sizeof(VkDedicatedAllocationMemoryAllocateInfoNV));
        result[0]=deserialize_struct(reader.getVkdedicatedallocationmemoryallocateinfonv());
        return result;
    

    case PNext::VKEXTERNALIMAGEFORMATPROPERTIESNV:
        result=(VkExternalImageFormatPropertiesNV*)malloc(sizeof(VkExternalImageFormatPropertiesNV));
        result[0]=deserialize_struct(reader.getVkexternalimageformatpropertiesnv());
        return result;
    

    case PNext::VKEXTERNALMEMORYIMAGECREATEINFONV:
        result=(VkExternalMemoryImageCreateInfoNV*)malloc(sizeof(VkExternalMemoryImageCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkexternalmemoryimagecreateinfonv());
        return result;
    

    case PNext::VKEXPORTMEMORYALLOCATEINFONV:
        result=(VkExportMemoryAllocateInfoNV*)malloc(sizeof(VkExportMemoryAllocateInfoNV));
        result[0]=deserialize_struct(reader.getVkexportmemoryallocateinfonv());
        return result;
    

    case PNext::VKPHYSICALDEVICEDEVICEGENERATEDCOMMANDSFEATURESNV:
        result=(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV*)malloc(sizeof(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicedevicegeneratedcommandsfeaturesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICEDEVICEGENERATEDCOMMANDSCOMPUTEFEATURESNV:
        result=(VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV*)malloc(sizeof(VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicedevicegeneratedcommandscomputefeaturesnv());
        return result;
    

    case PNext::VKDEVICEPRIVATEDATACREATEINFO:
        result=(VkDevicePrivateDataCreateInfo*)malloc(sizeof(VkDevicePrivateDataCreateInfo));
        result[0]=deserialize_struct(reader.getVkdeviceprivatedatacreateinfo());
        return result;
    

    case PNext::VKPRIVATEDATASLOTCREATEINFO:
        result=(VkPrivateDataSlotCreateInfo*)malloc(sizeof(VkPrivateDataSlotCreateInfo));
        result[0]=deserialize_struct(reader.getVkprivatedataslotcreateinfo());
        return result;
    

    case PNext::VKPHYSICALDEVICEPRIVATEDATAFEATURES:
        result=(VkPhysicalDevicePrivateDataFeatures*)malloc(sizeof(VkPhysicalDevicePrivateDataFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceprivatedatafeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICEDEVICEGENERATEDCOMMANDSPROPERTIESNV:
        result=(VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV*)malloc(sizeof(VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicedevicegeneratedcommandspropertiesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICEMULTIDRAWPROPERTIESEXT:
        result=(VkPhysicalDeviceMultiDrawPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceMultiDrawPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicemultidrawpropertiesext());
        return result;
    

    case PNext::VKGRAPHICSSHADERGROUPCREATEINFONV:
        result=(VkGraphicsShaderGroupCreateInfoNV*)malloc(sizeof(VkGraphicsShaderGroupCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkgraphicsshadergroupcreateinfonv());
        return result;
    

    case PNext::VKGRAPHICSPIPELINESHADERGROUPSCREATEINFONV:
        result=(VkGraphicsPipelineShaderGroupsCreateInfoNV*)malloc(sizeof(VkGraphicsPipelineShaderGroupsCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkgraphicspipelineshadergroupscreateinfonv());
        return result;
    

    case PNext::VKBINDSHADERGROUPINDIRECTCOMMANDNV:
        result=(VkBindShaderGroupIndirectCommandNV*)malloc(sizeof(VkBindShaderGroupIndirectCommandNV));
        result[0]=deserialize_struct(reader.getVkbindshadergroupindirectcommandnv());
        return result;
    

    case PNext::VKBINDINDEXBUFFERINDIRECTCOMMANDNV:
        result=(VkBindIndexBufferIndirectCommandNV*)malloc(sizeof(VkBindIndexBufferIndirectCommandNV));
        result[0]=deserialize_struct(reader.getVkbindindexbufferindirectcommandnv());
        return result;
    

    case PNext::VKBINDVERTEXBUFFERINDIRECTCOMMANDNV:
        result=(VkBindVertexBufferIndirectCommandNV*)malloc(sizeof(VkBindVertexBufferIndirectCommandNV));
        result[0]=deserialize_struct(reader.getVkbindvertexbufferindirectcommandnv());
        return result;
    

    case PNext::VKSETSTATEFLAGSINDIRECTCOMMANDNV:
        result=(VkSetStateFlagsIndirectCommandNV*)malloc(sizeof(VkSetStateFlagsIndirectCommandNV));
        result[0]=deserialize_struct(reader.getVksetstateflagsindirectcommandnv());
        return result;
    

    case PNext::VKINDIRECTCOMMANDSSTREAMNV:
        result=(VkIndirectCommandsStreamNV*)malloc(sizeof(VkIndirectCommandsStreamNV));
        result[0]=deserialize_struct(reader.getVkindirectcommandsstreamnv());
        return result;
    

    case PNext::VKINDIRECTCOMMANDSLAYOUTTOKENNV:
        result=(VkIndirectCommandsLayoutTokenNV*)malloc(sizeof(VkIndirectCommandsLayoutTokenNV));
        result[0]=deserialize_struct(reader.getVkindirectcommandslayouttokennv());
        return result;
    

    case PNext::VKINDIRECTCOMMANDSLAYOUTCREATEINFONV:
        result=(VkIndirectCommandsLayoutCreateInfoNV*)malloc(sizeof(VkIndirectCommandsLayoutCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkindirectcommandslayoutcreateinfonv());
        return result;
    

    case PNext::VKGENERATEDCOMMANDSINFONV:
        result=(VkGeneratedCommandsInfoNV*)malloc(sizeof(VkGeneratedCommandsInfoNV));
        result[0]=deserialize_struct(reader.getVkgeneratedcommandsinfonv());
        return result;
    

    case PNext::VKGENERATEDCOMMANDSMEMORYREQUIREMENTSINFONV:
        result=(VkGeneratedCommandsMemoryRequirementsInfoNV*)malloc(sizeof(VkGeneratedCommandsMemoryRequirementsInfoNV));
        result[0]=deserialize_struct(reader.getVkgeneratedcommandsmemoryrequirementsinfonv());
        return result;
    

    case PNext::VKPIPELINEINDIRECTDEVICEADDRESSINFONV:
        result=(VkPipelineIndirectDeviceAddressInfoNV*)malloc(sizeof(VkPipelineIndirectDeviceAddressInfoNV));
        result[0]=deserialize_struct(reader.getVkpipelineindirectdeviceaddressinfonv());
        return result;
    

    case PNext::VKBINDPIPELINEINDIRECTCOMMANDNV:
        result=(VkBindPipelineIndirectCommandNV*)malloc(sizeof(VkBindPipelineIndirectCommandNV));
        result[0]=deserialize_struct(reader.getVkbindpipelineindirectcommandnv());
        return result;
    

    case PNext::VKPHYSICALDEVICEFEATURES2:
        result=(VkPhysicalDeviceFeatures2*)malloc(sizeof(VkPhysicalDeviceFeatures2));
        result[0]=deserialize_struct(reader.getVkphysicaldevicefeatures2());
        return result;
    

    case PNext::VKPHYSICALDEVICEPROPERTIES2:
        result=(VkPhysicalDeviceProperties2*)malloc(sizeof(VkPhysicalDeviceProperties2));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceproperties2());
        return result;
    

    case PNext::VKFORMATPROPERTIES2:
        result=(VkFormatProperties2*)malloc(sizeof(VkFormatProperties2));
        result[0]=deserialize_struct(reader.getVkformatproperties2());
        return result;
    

    case PNext::VKIMAGEFORMATPROPERTIES2:
        result=(VkImageFormatProperties2*)malloc(sizeof(VkImageFormatProperties2));
        result[0]=deserialize_struct(reader.getVkimageformatproperties2());
        return result;
    

    case PNext::VKPHYSICALDEVICEIMAGEFORMATINFO2:
        result=(VkPhysicalDeviceImageFormatInfo2*)malloc(sizeof(VkPhysicalDeviceImageFormatInfo2));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceimageformatinfo2());
        return result;
    

    case PNext::VKQUEUEFAMILYPROPERTIES2:
        result=(VkQueueFamilyProperties2*)malloc(sizeof(VkQueueFamilyProperties2));
        result[0]=deserialize_struct(reader.getVkqueuefamilyproperties2());
        return result;
    

    case PNext::VKPHYSICALDEVICEMEMORYPROPERTIES2:
        result=(VkPhysicalDeviceMemoryProperties2*)malloc(sizeof(VkPhysicalDeviceMemoryProperties2));
        result[0]=deserialize_struct(reader.getVkphysicaldevicememoryproperties2());
        return result;
    

    case PNext::VKSPARSEIMAGEFORMATPROPERTIES2:
        result=(VkSparseImageFormatProperties2*)malloc(sizeof(VkSparseImageFormatProperties2));
        result[0]=deserialize_struct(reader.getVksparseimageformatproperties2());
        return result;
    

    case PNext::VKPHYSICALDEVICESPARSEIMAGEFORMATINFO2:
        result=(VkPhysicalDeviceSparseImageFormatInfo2*)malloc(sizeof(VkPhysicalDeviceSparseImageFormatInfo2));
        result[0]=deserialize_struct(reader.getVkphysicaldevicesparseimageformatinfo2());
        return result;
    

    case PNext::VKPHYSICALDEVICEPUSHDESCRIPTORPROPERTIESKHR:
        result=(VkPhysicalDevicePushDescriptorPropertiesKHR*)malloc(sizeof(VkPhysicalDevicePushDescriptorPropertiesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldevicepushdescriptorpropertieskhr());
        return result;
    

    case PNext::VKCONFORMANCEVERSION:
        result=(VkConformanceVersion*)malloc(sizeof(VkConformanceVersion));
        result[0]=deserialize_struct(reader.getVkconformanceversion());
        return result;
    

    case PNext::VKPHYSICALDEVICEDRIVERPROPERTIES:
        result=(VkPhysicalDeviceDriverProperties*)malloc(sizeof(VkPhysicalDeviceDriverProperties));
        result[0]=deserialize_struct(reader.getVkphysicaldevicedriverproperties());
        return result;
    

    case PNext::VKPRESENTREGIONSKHR:
        result=(VkPresentRegionsKHR*)malloc(sizeof(VkPresentRegionsKHR));
        result[0]=deserialize_struct(reader.getVkpresentregionskhr());
        return result;
    

    case PNext::VKPRESENTREGIONKHR:
        result=(VkPresentRegionKHR*)malloc(sizeof(VkPresentRegionKHR));
        result[0]=deserialize_struct(reader.getVkpresentregionkhr());
        return result;
    

    case PNext::VKRECTLAYERKHR:
        result=(VkRectLayerKHR*)malloc(sizeof(VkRectLayerKHR));
        result[0]=deserialize_struct(reader.getVkrectlayerkhr());
        return result;
    

    case PNext::VKPHYSICALDEVICEVARIABLEPOINTERSFEATURES:
        result=(VkPhysicalDeviceVariablePointersFeatures*)malloc(sizeof(VkPhysicalDeviceVariablePointersFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldevicevariablepointersfeatures());
        return result;
    

    case PNext::VKEXTERNALMEMORYPROPERTIES:
        result=(VkExternalMemoryProperties*)malloc(sizeof(VkExternalMemoryProperties));
        result[0]=deserialize_struct(reader.getVkexternalmemoryproperties());
        return result;
    

    case PNext::VKPHYSICALDEVICEEXTERNALIMAGEFORMATINFO:
        result=(VkPhysicalDeviceExternalImageFormatInfo*)malloc(sizeof(VkPhysicalDeviceExternalImageFormatInfo));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceexternalimageformatinfo());
        return result;
    

    case PNext::VKEXTERNALIMAGEFORMATPROPERTIES:
        result=(VkExternalImageFormatProperties*)malloc(sizeof(VkExternalImageFormatProperties));
        result[0]=deserialize_struct(reader.getVkexternalimageformatproperties());
        return result;
    

    case PNext::VKPHYSICALDEVICEEXTERNALBUFFERINFO:
        result=(VkPhysicalDeviceExternalBufferInfo*)malloc(sizeof(VkPhysicalDeviceExternalBufferInfo));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceexternalbufferinfo());
        return result;
    

    case PNext::VKEXTERNALBUFFERPROPERTIES:
        result=(VkExternalBufferProperties*)malloc(sizeof(VkExternalBufferProperties));
        result[0]=deserialize_struct(reader.getVkexternalbufferproperties());
        return result;
    

    case PNext::VKPHYSICALDEVICEIDPROPERTIES:
        result=(VkPhysicalDeviceIDProperties*)malloc(sizeof(VkPhysicalDeviceIDProperties));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceidproperties());
        return result;
    

    case PNext::VKEXTERNALMEMORYIMAGECREATEINFO:
        result=(VkExternalMemoryImageCreateInfo*)malloc(sizeof(VkExternalMemoryImageCreateInfo));
        result[0]=deserialize_struct(reader.getVkexternalmemoryimagecreateinfo());
        return result;
    

    case PNext::VKEXTERNALMEMORYBUFFERCREATEINFO:
        result=(VkExternalMemoryBufferCreateInfo*)malloc(sizeof(VkExternalMemoryBufferCreateInfo));
        result[0]=deserialize_struct(reader.getVkexternalmemorybuffercreateinfo());
        return result;
    

    case PNext::VKEXPORTMEMORYALLOCATEINFO:
        result=(VkExportMemoryAllocateInfo*)malloc(sizeof(VkExportMemoryAllocateInfo));
        result[0]=deserialize_struct(reader.getVkexportmemoryallocateinfo());
        return result;
    

    case PNext::VKIMPORTMEMORYFDINFOKHR:
        result=(VkImportMemoryFdInfoKHR*)malloc(sizeof(VkImportMemoryFdInfoKHR));
        result[0]=deserialize_struct(reader.getVkimportmemoryfdinfokhr());
        return result;
    

    case PNext::VKMEMORYFDPROPERTIESKHR:
        result=(VkMemoryFdPropertiesKHR*)malloc(sizeof(VkMemoryFdPropertiesKHR));
        result[0]=deserialize_struct(reader.getVkmemoryfdpropertieskhr());
        return result;
    

    case PNext::VKMEMORYGETFDINFOKHR:
        result=(VkMemoryGetFdInfoKHR*)malloc(sizeof(VkMemoryGetFdInfoKHR));
        result[0]=deserialize_struct(reader.getVkmemorygetfdinfokhr());
        return result;
    

    case PNext::VKPHYSICALDEVICEEXTERNALSEMAPHOREINFO:
        result=(VkPhysicalDeviceExternalSemaphoreInfo*)malloc(sizeof(VkPhysicalDeviceExternalSemaphoreInfo));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceexternalsemaphoreinfo());
        return result;
    

    case PNext::VKEXTERNALSEMAPHOREPROPERTIES:
        result=(VkExternalSemaphoreProperties*)malloc(sizeof(VkExternalSemaphoreProperties));
        result[0]=deserialize_struct(reader.getVkexternalsemaphoreproperties());
        return result;
    

    case PNext::VKEXPORTSEMAPHORECREATEINFO:
        result=(VkExportSemaphoreCreateInfo*)malloc(sizeof(VkExportSemaphoreCreateInfo));
        result[0]=deserialize_struct(reader.getVkexportsemaphorecreateinfo());
        return result;
    

    case PNext::VKIMPORTSEMAPHOREFDINFOKHR:
        result=(VkImportSemaphoreFdInfoKHR*)malloc(sizeof(VkImportSemaphoreFdInfoKHR));
        result[0]=deserialize_struct(reader.getVkimportsemaphorefdinfokhr());
        return result;
    

    case PNext::VKSEMAPHOREGETFDINFOKHR:
        result=(VkSemaphoreGetFdInfoKHR*)malloc(sizeof(VkSemaphoreGetFdInfoKHR));
        result[0]=deserialize_struct(reader.getVksemaphoregetfdinfokhr());
        return result;
    

    case PNext::VKPHYSICALDEVICEEXTERNALFENCEINFO:
        result=(VkPhysicalDeviceExternalFenceInfo*)malloc(sizeof(VkPhysicalDeviceExternalFenceInfo));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceexternalfenceinfo());
        return result;
    

    case PNext::VKEXTERNALFENCEPROPERTIES:
        result=(VkExternalFenceProperties*)malloc(sizeof(VkExternalFenceProperties));
        result[0]=deserialize_struct(reader.getVkexternalfenceproperties());
        return result;
    

    case PNext::VKEXPORTFENCECREATEINFO:
        result=(VkExportFenceCreateInfo*)malloc(sizeof(VkExportFenceCreateInfo));
        result[0]=deserialize_struct(reader.getVkexportfencecreateinfo());
        return result;
    

    case PNext::VKIMPORTFENCEFDINFOKHR:
        result=(VkImportFenceFdInfoKHR*)malloc(sizeof(VkImportFenceFdInfoKHR));
        result[0]=deserialize_struct(reader.getVkimportfencefdinfokhr());
        return result;
    

    case PNext::VKFENCEGETFDINFOKHR:
        result=(VkFenceGetFdInfoKHR*)malloc(sizeof(VkFenceGetFdInfoKHR));
        result[0]=deserialize_struct(reader.getVkfencegetfdinfokhr());
        return result;
    

    case PNext::VKPHYSICALDEVICEMULTIVIEWFEATURES:
        result=(VkPhysicalDeviceMultiviewFeatures*)malloc(sizeof(VkPhysicalDeviceMultiviewFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldevicemultiviewfeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICEMULTIVIEWPROPERTIES:
        result=(VkPhysicalDeviceMultiviewProperties*)malloc(sizeof(VkPhysicalDeviceMultiviewProperties));
        result[0]=deserialize_struct(reader.getVkphysicaldevicemultiviewproperties());
        return result;
    

    case PNext::VKRENDERPASSMULTIVIEWCREATEINFO:
        result=(VkRenderPassMultiviewCreateInfo*)malloc(sizeof(VkRenderPassMultiviewCreateInfo));
        result[0]=deserialize_struct(reader.getVkrenderpassmultiviewcreateinfo());
        return result;
    

    case PNext::VKSURFACECAPABILITIES2EXT:
        result=(VkSurfaceCapabilities2EXT*)malloc(sizeof(VkSurfaceCapabilities2EXT));
        result[0]=deserialize_struct(reader.getVksurfacecapabilities2Ext());
        return result;
    

    case PNext::VKDISPLAYPOWERINFOEXT:
        result=(VkDisplayPowerInfoEXT*)malloc(sizeof(VkDisplayPowerInfoEXT));
        result[0]=deserialize_struct(reader.getVkdisplaypowerinfoext());
        return result;
    

    case PNext::VKDEVICEEVENTINFOEXT:
        result=(VkDeviceEventInfoEXT*)malloc(sizeof(VkDeviceEventInfoEXT));
        result[0]=deserialize_struct(reader.getVkdeviceeventinfoext());
        return result;
    

    case PNext::VKDISPLAYEVENTINFOEXT:
        result=(VkDisplayEventInfoEXT*)malloc(sizeof(VkDisplayEventInfoEXT));
        result[0]=deserialize_struct(reader.getVkdisplayeventinfoext());
        return result;
    

    case PNext::VKSWAPCHAINCOUNTERCREATEINFOEXT:
        result=(VkSwapchainCounterCreateInfoEXT*)malloc(sizeof(VkSwapchainCounterCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkswapchaincountercreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICEGROUPPROPERTIES:
        result=(VkPhysicalDeviceGroupProperties*)malloc(sizeof(VkPhysicalDeviceGroupProperties));
        result[0]=deserialize_struct(reader.getVkphysicaldevicegroupproperties());
        return result;
    

    case PNext::VKMEMORYALLOCATEFLAGSINFO:
        result=(VkMemoryAllocateFlagsInfo*)malloc(sizeof(VkMemoryAllocateFlagsInfo));
        result[0]=deserialize_struct(reader.getVkmemoryallocateflagsinfo());
        return result;
    

    case PNext::VKBINDBUFFERMEMORYINFO:
        result=(VkBindBufferMemoryInfo*)malloc(sizeof(VkBindBufferMemoryInfo));
        result[0]=deserialize_struct(reader.getVkbindbuffermemoryinfo());
        return result;
    

    case PNext::VKBINDBUFFERMEMORYDEVICEGROUPINFO:
        result=(VkBindBufferMemoryDeviceGroupInfo*)malloc(sizeof(VkBindBufferMemoryDeviceGroupInfo));
        result[0]=deserialize_struct(reader.getVkbindbuffermemorydevicegroupinfo());
        return result;
    

    case PNext::VKBINDIMAGEMEMORYINFO:
        result=(VkBindImageMemoryInfo*)malloc(sizeof(VkBindImageMemoryInfo));
        result[0]=deserialize_struct(reader.getVkbindimagememoryinfo());
        return result;
    

    case PNext::VKBINDIMAGEMEMORYDEVICEGROUPINFO:
        result=(VkBindImageMemoryDeviceGroupInfo*)malloc(sizeof(VkBindImageMemoryDeviceGroupInfo));
        result[0]=deserialize_struct(reader.getVkbindimagememorydevicegroupinfo());
        return result;
    

    case PNext::VKDEVICEGROUPRENDERPASSBEGININFO:
        result=(VkDeviceGroupRenderPassBeginInfo*)malloc(sizeof(VkDeviceGroupRenderPassBeginInfo));
        result[0]=deserialize_struct(reader.getVkdevicegrouprenderpassbegininfo());
        return result;
    

    case PNext::VKDEVICEGROUPCOMMANDBUFFERBEGININFO:
        result=(VkDeviceGroupCommandBufferBeginInfo*)malloc(sizeof(VkDeviceGroupCommandBufferBeginInfo));
        result[0]=deserialize_struct(reader.getVkdevicegroupcommandbufferbegininfo());
        return result;
    

    case PNext::VKDEVICEGROUPSUBMITINFO:
        result=(VkDeviceGroupSubmitInfo*)malloc(sizeof(VkDeviceGroupSubmitInfo));
        result[0]=deserialize_struct(reader.getVkdevicegroupsubmitinfo());
        return result;
    

    case PNext::VKDEVICEGROUPBINDSPARSEINFO:
        result=(VkDeviceGroupBindSparseInfo*)malloc(sizeof(VkDeviceGroupBindSparseInfo));
        result[0]=deserialize_struct(reader.getVkdevicegroupbindsparseinfo());
        return result;
    

    case PNext::VKDEVICEGROUPPRESENTCAPABILITIESKHR:
        result=(VkDeviceGroupPresentCapabilitiesKHR*)malloc(sizeof(VkDeviceGroupPresentCapabilitiesKHR));
        result[0]=deserialize_struct(reader.getVkdevicegrouppresentcapabilitieskhr());
        return result;
    

    case PNext::VKIMAGESWAPCHAINCREATEINFOKHR:
        result=(VkImageSwapchainCreateInfoKHR*)malloc(sizeof(VkImageSwapchainCreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkimageswapchaincreateinfokhr());
        return result;
    

    case PNext::VKBINDIMAGEMEMORYSWAPCHAININFOKHR:
        result=(VkBindImageMemorySwapchainInfoKHR*)malloc(sizeof(VkBindImageMemorySwapchainInfoKHR));
        result[0]=deserialize_struct(reader.getVkbindimagememoryswapchaininfokhr());
        return result;
    

    case PNext::VKACQUIRENEXTIMAGEINFOKHR:
        result=(VkAcquireNextImageInfoKHR*)malloc(sizeof(VkAcquireNextImageInfoKHR));
        result[0]=deserialize_struct(reader.getVkacquirenextimageinfokhr());
        return result;
    

    case PNext::VKDEVICEGROUPPRESENTINFOKHR:
        result=(VkDeviceGroupPresentInfoKHR*)malloc(sizeof(VkDeviceGroupPresentInfoKHR));
        result[0]=deserialize_struct(reader.getVkdevicegrouppresentinfokhr());
        return result;
    

    case PNext::VKDEVICEGROUPDEVICECREATEINFO:
        result=(VkDeviceGroupDeviceCreateInfo*)malloc(sizeof(VkDeviceGroupDeviceCreateInfo));
        result[0]=deserialize_struct(reader.getVkdevicegroupdevicecreateinfo());
        return result;
    

    case PNext::VKDEVICEGROUPSWAPCHAINCREATEINFOKHR:
        result=(VkDeviceGroupSwapchainCreateInfoKHR*)malloc(sizeof(VkDeviceGroupSwapchainCreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkdevicegroupswapchaincreateinfokhr());
        return result;
    

    case PNext::VKDESCRIPTORUPDATETEMPLATEENTRY:
        result=(VkDescriptorUpdateTemplateEntry*)malloc(sizeof(VkDescriptorUpdateTemplateEntry));
        result[0]=deserialize_struct(reader.getVkdescriptorupdatetemplateentry());
        return result;
    

    case PNext::VKDESCRIPTORUPDATETEMPLATECREATEINFO:
        result=(VkDescriptorUpdateTemplateCreateInfo*)malloc(sizeof(VkDescriptorUpdateTemplateCreateInfo));
        result[0]=deserialize_struct(reader.getVkdescriptorupdatetemplatecreateinfo());
        return result;
    

    case PNext::VKXYCOLOREXT:
        result=(VkXYColorEXT*)malloc(sizeof(VkXYColorEXT));
        result[0]=deserialize_struct(reader.getVkxycolorext());
        return result;
    

    case PNext::VKPHYSICALDEVICEPRESENTIDFEATURESKHR:
        result=(VkPhysicalDevicePresentIdFeaturesKHR*)malloc(sizeof(VkPhysicalDevicePresentIdFeaturesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldevicepresentidfeatureskhr());
        return result;
    

    case PNext::VKPRESENTIDKHR:
        result=(VkPresentIdKHR*)malloc(sizeof(VkPresentIdKHR));
        result[0]=deserialize_struct(reader.getVkpresentidkhr());
        return result;
    

    case PNext::VKPHYSICALDEVICEPRESENTWAITFEATURESKHR:
        result=(VkPhysicalDevicePresentWaitFeaturesKHR*)malloc(sizeof(VkPhysicalDevicePresentWaitFeaturesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldevicepresentwaitfeatureskhr());
        return result;
    

    case PNext::VKHDRMETADATAEXT:
        result=(VkHdrMetadataEXT*)malloc(sizeof(VkHdrMetadataEXT));
        result[0]=deserialize_struct(reader.getVkhdrmetadataext());
        return result;
    

    case PNext::VKDISPLAYNATIVEHDRSURFACECAPABILITIESAMD:
        result=(VkDisplayNativeHdrSurfaceCapabilitiesAMD*)malloc(sizeof(VkDisplayNativeHdrSurfaceCapabilitiesAMD));
        result[0]=deserialize_struct(reader.getVkdisplaynativehdrsurfacecapabilitiesamd());
        return result;
    

    case PNext::VKSWAPCHAINDISPLAYNATIVEHDRCREATEINFOAMD:
        result=(VkSwapchainDisplayNativeHdrCreateInfoAMD*)malloc(sizeof(VkSwapchainDisplayNativeHdrCreateInfoAMD));
        result[0]=deserialize_struct(reader.getVkswapchaindisplaynativehdrcreateinfoamd());
        return result;
    

    case PNext::VKREFRESHCYCLEDURATIONGOOGLE:
        result=(VkRefreshCycleDurationGOOGLE*)malloc(sizeof(VkRefreshCycleDurationGOOGLE));
        result[0]=deserialize_struct(reader.getVkrefreshcycledurationgoogle());
        return result;
    

    case PNext::VKPASTPRESENTATIONTIMINGGOOGLE:
        result=(VkPastPresentationTimingGOOGLE*)malloc(sizeof(VkPastPresentationTimingGOOGLE));
        result[0]=deserialize_struct(reader.getVkpastpresentationtiminggoogle());
        return result;
    

    case PNext::VKPRESENTTIMESINFOGOOGLE:
        result=(VkPresentTimesInfoGOOGLE*)malloc(sizeof(VkPresentTimesInfoGOOGLE));
        result[0]=deserialize_struct(reader.getVkpresenttimesinfogoogle());
        return result;
    

    case PNext::VKPRESENTTIMEGOOGLE:
        result=(VkPresentTimeGOOGLE*)malloc(sizeof(VkPresentTimeGOOGLE));
        result[0]=deserialize_struct(reader.getVkpresenttimegoogle());
        return result;
    

    case PNext::VKVIEWPORTWSCALINGNV:
        result=(VkViewportWScalingNV*)malloc(sizeof(VkViewportWScalingNV));
        result[0]=deserialize_struct(reader.getVkviewportwscalingnv());
        return result;
    

    case PNext::VKPIPELINEVIEWPORTWSCALINGSTATECREATEINFONV:
        result=(VkPipelineViewportWScalingStateCreateInfoNV*)malloc(sizeof(VkPipelineViewportWScalingStateCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkpipelineviewportwscalingstatecreateinfonv());
        return result;
    

    case PNext::VKVIEWPORTSWIZZLENV:
        result=(VkViewportSwizzleNV*)malloc(sizeof(VkViewportSwizzleNV));
        result[0]=deserialize_struct(reader.getVkviewportswizzlenv());
        return result;
    

    case PNext::VKPIPELINEVIEWPORTSWIZZLESTATECREATEINFONV:
        result=(VkPipelineViewportSwizzleStateCreateInfoNV*)malloc(sizeof(VkPipelineViewportSwizzleStateCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkpipelineviewportswizzlestatecreateinfonv());
        return result;
    

    case PNext::VKPHYSICALDEVICEDISCARDRECTANGLEPROPERTIESEXT:
        result=(VkPhysicalDeviceDiscardRectanglePropertiesEXT*)malloc(sizeof(VkPhysicalDeviceDiscardRectanglePropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicediscardrectanglepropertiesext());
        return result;
    

    case PNext::VKPIPELINEDISCARDRECTANGLESTATECREATEINFOEXT:
        result=(VkPipelineDiscardRectangleStateCreateInfoEXT*)malloc(sizeof(VkPipelineDiscardRectangleStateCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkpipelinediscardrectanglestatecreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICEMULTIVIEWPERVIEWATTRIBUTESPROPERTIESNVX:
        result=(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX*)malloc(sizeof(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX));
        result[0]=deserialize_struct(reader.getVkphysicaldevicemultiviewperviewattributespropertiesnvx());
        return result;
    

    case PNext::VKINPUTATTACHMENTASPECTREFERENCE:
        result=(VkInputAttachmentAspectReference*)malloc(sizeof(VkInputAttachmentAspectReference));
        result[0]=deserialize_struct(reader.getVkinputattachmentaspectreference());
        return result;
    

    case PNext::VKRENDERPASSINPUTATTACHMENTASPECTCREATEINFO:
        result=(VkRenderPassInputAttachmentAspectCreateInfo*)malloc(sizeof(VkRenderPassInputAttachmentAspectCreateInfo));
        result[0]=deserialize_struct(reader.getVkrenderpassinputattachmentaspectcreateinfo());
        return result;
    

    case PNext::VKPHYSICALDEVICESURFACEINFO2KHR:
        result=(VkPhysicalDeviceSurfaceInfo2KHR*)malloc(sizeof(VkPhysicalDeviceSurfaceInfo2KHR));
        result[0]=deserialize_struct(reader.getVkphysicaldevicesurfaceinfo2Khr());
        return result;
    

    case PNext::VKSURFACECAPABILITIES2KHR:
        result=(VkSurfaceCapabilities2KHR*)malloc(sizeof(VkSurfaceCapabilities2KHR));
        result[0]=deserialize_struct(reader.getVksurfacecapabilities2Khr());
        return result;
    

    case PNext::VKSURFACEFORMAT2KHR:
        result=(VkSurfaceFormat2KHR*)malloc(sizeof(VkSurfaceFormat2KHR));
        result[0]=deserialize_struct(reader.getVksurfaceformat2Khr());
        return result;
    

    case PNext::VKDISPLAYPROPERTIES2KHR:
        result=(VkDisplayProperties2KHR*)malloc(sizeof(VkDisplayProperties2KHR));
        result[0]=deserialize_struct(reader.getVkdisplayproperties2Khr());
        return result;
    

    case PNext::VKDISPLAYPLANEPROPERTIES2KHR:
        result=(VkDisplayPlaneProperties2KHR*)malloc(sizeof(VkDisplayPlaneProperties2KHR));
        result[0]=deserialize_struct(reader.getVkdisplayplaneproperties2Khr());
        return result;
    

    case PNext::VKDISPLAYMODEPROPERTIES2KHR:
        result=(VkDisplayModeProperties2KHR*)malloc(sizeof(VkDisplayModeProperties2KHR));
        result[0]=deserialize_struct(reader.getVkdisplaymodeproperties2Khr());
        return result;
    

    case PNext::VKDISPLAYPLANEINFO2KHR:
        result=(VkDisplayPlaneInfo2KHR*)malloc(sizeof(VkDisplayPlaneInfo2KHR));
        result[0]=deserialize_struct(reader.getVkdisplayplaneinfo2Khr());
        return result;
    

    case PNext::VKDISPLAYPLANECAPABILITIES2KHR:
        result=(VkDisplayPlaneCapabilities2KHR*)malloc(sizeof(VkDisplayPlaneCapabilities2KHR));
        result[0]=deserialize_struct(reader.getVkdisplayplanecapabilities2Khr());
        return result;
    

    case PNext::VKSHAREDPRESENTSURFACECAPABILITIESKHR:
        result=(VkSharedPresentSurfaceCapabilitiesKHR*)malloc(sizeof(VkSharedPresentSurfaceCapabilitiesKHR));
        result[0]=deserialize_struct(reader.getVksharedpresentsurfacecapabilitieskhr());
        return result;
    

    case PNext::VKPHYSICALDEVICE16BITSTORAGEFEATURES:
        result=(VkPhysicalDevice16BitStorageFeatures*)malloc(sizeof(VkPhysicalDevice16BitStorageFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldevice16Bitstoragefeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICESUBGROUPPROPERTIES:
        result=(VkPhysicalDeviceSubgroupProperties*)malloc(sizeof(VkPhysicalDeviceSubgroupProperties));
        result[0]=deserialize_struct(reader.getVkphysicaldevicesubgroupproperties());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERSUBGROUPEXTENDEDTYPESFEATURES:
        result=(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures*)malloc(sizeof(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshadersubgroupextendedtypesfeatures());
        return result;
    

    case PNext::VKBUFFERMEMORYREQUIREMENTSINFO2:
        result=(VkBufferMemoryRequirementsInfo2*)malloc(sizeof(VkBufferMemoryRequirementsInfo2));
        result[0]=deserialize_struct(reader.getVkbuffermemoryrequirementsinfo2());
        return result;
    

    case PNext::VKDEVICEBUFFERMEMORYREQUIREMENTS:
        result=(VkDeviceBufferMemoryRequirements*)malloc(sizeof(VkDeviceBufferMemoryRequirements));
        result[0]=deserialize_struct(reader.getVkdevicebuffermemoryrequirements());
        return result;
    

    case PNext::VKIMAGEMEMORYREQUIREMENTSINFO2:
        result=(VkImageMemoryRequirementsInfo2*)malloc(sizeof(VkImageMemoryRequirementsInfo2));
        result[0]=deserialize_struct(reader.getVkimagememoryrequirementsinfo2());
        return result;
    

    case PNext::VKIMAGESPARSEMEMORYREQUIREMENTSINFO2:
        result=(VkImageSparseMemoryRequirementsInfo2*)malloc(sizeof(VkImageSparseMemoryRequirementsInfo2));
        result[0]=deserialize_struct(reader.getVkimagesparsememoryrequirementsinfo2());
        return result;
    

    case PNext::VKDEVICEIMAGEMEMORYREQUIREMENTS:
        result=(VkDeviceImageMemoryRequirements*)malloc(sizeof(VkDeviceImageMemoryRequirements));
        result[0]=deserialize_struct(reader.getVkdeviceimagememoryrequirements());
        return result;
    

    case PNext::VKMEMORYREQUIREMENTS2:
        result=(VkMemoryRequirements2*)malloc(sizeof(VkMemoryRequirements2));
        result[0]=deserialize_struct(reader.getVkmemoryrequirements2());
        return result;
    

    case PNext::VKSPARSEIMAGEMEMORYREQUIREMENTS2:
        result=(VkSparseImageMemoryRequirements2*)malloc(sizeof(VkSparseImageMemoryRequirements2));
        result[0]=deserialize_struct(reader.getVksparseimagememoryrequirements2());
        return result;
    

    case PNext::VKPHYSICALDEVICEPOINTCLIPPINGPROPERTIES:
        result=(VkPhysicalDevicePointClippingProperties*)malloc(sizeof(VkPhysicalDevicePointClippingProperties));
        result[0]=deserialize_struct(reader.getVkphysicaldevicepointclippingproperties());
        return result;
    

    case PNext::VKMEMORYDEDICATEDREQUIREMENTS:
        result=(VkMemoryDedicatedRequirements*)malloc(sizeof(VkMemoryDedicatedRequirements));
        result[0]=deserialize_struct(reader.getVkmemorydedicatedrequirements());
        return result;
    

    case PNext::VKMEMORYDEDICATEDALLOCATEINFO:
        result=(VkMemoryDedicatedAllocateInfo*)malloc(sizeof(VkMemoryDedicatedAllocateInfo));
        result[0]=deserialize_struct(reader.getVkmemorydedicatedallocateinfo());
        return result;
    

    case PNext::VKIMAGEVIEWUSAGECREATEINFO:
        result=(VkImageViewUsageCreateInfo*)malloc(sizeof(VkImageViewUsageCreateInfo));
        result[0]=deserialize_struct(reader.getVkimageviewusagecreateinfo());
        return result;
    

    case PNext::VKIMAGEVIEWSLICEDCREATEINFOEXT:
        result=(VkImageViewSlicedCreateInfoEXT*)malloc(sizeof(VkImageViewSlicedCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkimageviewslicedcreateinfoext());
        return result;
    

    case PNext::VKPIPELINETESSELLATIONDOMAINORIGINSTATECREATEINFO:
        result=(VkPipelineTessellationDomainOriginStateCreateInfo*)malloc(sizeof(VkPipelineTessellationDomainOriginStateCreateInfo));
        result[0]=deserialize_struct(reader.getVkpipelinetessellationdomainoriginstatecreateinfo());
        return result;
    

    case PNext::VKSAMPLERYCBCRCONVERSIONINFO:
        result=(VkSamplerYcbcrConversionInfo*)malloc(sizeof(VkSamplerYcbcrConversionInfo));
        result[0]=deserialize_struct(reader.getVksamplerycbcrconversioninfo());
        return result;
    

    case PNext::VKSAMPLERYCBCRCONVERSIONCREATEINFO:
        result=(VkSamplerYcbcrConversionCreateInfo*)malloc(sizeof(VkSamplerYcbcrConversionCreateInfo));
        result[0]=deserialize_struct(reader.getVksamplerycbcrconversioncreateinfo());
        return result;
    

    case PNext::VKBINDIMAGEPLANEMEMORYINFO:
        result=(VkBindImagePlaneMemoryInfo*)malloc(sizeof(VkBindImagePlaneMemoryInfo));
        result[0]=deserialize_struct(reader.getVkbindimageplanememoryinfo());
        return result;
    

    case PNext::VKIMAGEPLANEMEMORYREQUIREMENTSINFO:
        result=(VkImagePlaneMemoryRequirementsInfo*)malloc(sizeof(VkImagePlaneMemoryRequirementsInfo));
        result[0]=deserialize_struct(reader.getVkimageplanememoryrequirementsinfo());
        return result;
    

    case PNext::VKPHYSICALDEVICESAMPLERYCBCRCONVERSIONFEATURES:
        result=(VkPhysicalDeviceSamplerYcbcrConversionFeatures*)malloc(sizeof(VkPhysicalDeviceSamplerYcbcrConversionFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldevicesamplerycbcrconversionfeatures());
        return result;
    

    case PNext::VKSAMPLERYCBCRCONVERSIONIMAGEFORMATPROPERTIES:
        result=(VkSamplerYcbcrConversionImageFormatProperties*)malloc(sizeof(VkSamplerYcbcrConversionImageFormatProperties));
        result[0]=deserialize_struct(reader.getVksamplerycbcrconversionimageformatproperties());
        return result;
    

    case PNext::VKTEXTURELODGATHERFORMATPROPERTIESAMD:
        result=(VkTextureLODGatherFormatPropertiesAMD*)malloc(sizeof(VkTextureLODGatherFormatPropertiesAMD));
        result[0]=deserialize_struct(reader.getVktexturelodgatherformatpropertiesamd());
        return result;
    

    case PNext::VKCONDITIONALRENDERINGBEGININFOEXT:
        result=(VkConditionalRenderingBeginInfoEXT*)malloc(sizeof(VkConditionalRenderingBeginInfoEXT));
        result[0]=deserialize_struct(reader.getVkconditionalrenderingbegininfoext());
        return result;
    

    case PNext::VKPROTECTEDSUBMITINFO:
        result=(VkProtectedSubmitInfo*)malloc(sizeof(VkProtectedSubmitInfo));
        result[0]=deserialize_struct(reader.getVkprotectedsubmitinfo());
        return result;
    

    case PNext::VKPHYSICALDEVICEPROTECTEDMEMORYFEATURES:
        result=(VkPhysicalDeviceProtectedMemoryFeatures*)malloc(sizeof(VkPhysicalDeviceProtectedMemoryFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceprotectedmemoryfeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICEPROTECTEDMEMORYPROPERTIES:
        result=(VkPhysicalDeviceProtectedMemoryProperties*)malloc(sizeof(VkPhysicalDeviceProtectedMemoryProperties));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceprotectedmemoryproperties());
        return result;
    

    case PNext::VKDEVICEQUEUEINFO2:
        result=(VkDeviceQueueInfo2*)malloc(sizeof(VkDeviceQueueInfo2));
        result[0]=deserialize_struct(reader.getVkdevicequeueinfo2());
        return result;
    

    case PNext::VKPIPELINECOVERAGETOCOLORSTATECREATEINFONV:
        result=(VkPipelineCoverageToColorStateCreateInfoNV*)malloc(sizeof(VkPipelineCoverageToColorStateCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkpipelinecoveragetocolorstatecreateinfonv());
        return result;
    

    case PNext::VKPHYSICALDEVICESAMPLERFILTERMINMAXPROPERTIES:
        result=(VkPhysicalDeviceSamplerFilterMinmaxProperties*)malloc(sizeof(VkPhysicalDeviceSamplerFilterMinmaxProperties));
        result[0]=deserialize_struct(reader.getVkphysicaldevicesamplerfilterminmaxproperties());
        return result;
    

    case PNext::VKSAMPLELOCATIONEXT:
        result=(VkSampleLocationEXT*)malloc(sizeof(VkSampleLocationEXT));
        result[0]=deserialize_struct(reader.getVksamplelocationext());
        return result;
    

    case PNext::VKSAMPLELOCATIONSINFOEXT:
        result=(VkSampleLocationsInfoEXT*)malloc(sizeof(VkSampleLocationsInfoEXT));
        result[0]=deserialize_struct(reader.getVksamplelocationsinfoext());
        return result;
    

    case PNext::VKATTACHMENTSAMPLELOCATIONSEXT:
        result=(VkAttachmentSampleLocationsEXT*)malloc(sizeof(VkAttachmentSampleLocationsEXT));
        result[0]=deserialize_struct(reader.getVkattachmentsamplelocationsext());
        return result;
    

    case PNext::VKSUBPASSSAMPLELOCATIONSEXT:
        result=(VkSubpassSampleLocationsEXT*)malloc(sizeof(VkSubpassSampleLocationsEXT));
        result[0]=deserialize_struct(reader.getVksubpasssamplelocationsext());
        return result;
    

    case PNext::VKRENDERPASSSAMPLELOCATIONSBEGININFOEXT:
        result=(VkRenderPassSampleLocationsBeginInfoEXT*)malloc(sizeof(VkRenderPassSampleLocationsBeginInfoEXT));
        result[0]=deserialize_struct(reader.getVkrenderpasssamplelocationsbegininfoext());
        return result;
    

    case PNext::VKPIPELINESAMPLELOCATIONSSTATECREATEINFOEXT:
        result=(VkPipelineSampleLocationsStateCreateInfoEXT*)malloc(sizeof(VkPipelineSampleLocationsStateCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkpipelinesamplelocationsstatecreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICESAMPLELOCATIONSPROPERTIESEXT:
        result=(VkPhysicalDeviceSampleLocationsPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceSampleLocationsPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicesamplelocationspropertiesext());
        return result;
    

    case PNext::VKMULTISAMPLEPROPERTIESEXT:
        result=(VkMultisamplePropertiesEXT*)malloc(sizeof(VkMultisamplePropertiesEXT));
        result[0]=deserialize_struct(reader.getVkmultisamplepropertiesext());
        return result;
    

    case PNext::VKSAMPLERREDUCTIONMODECREATEINFO:
        result=(VkSamplerReductionModeCreateInfo*)malloc(sizeof(VkSamplerReductionModeCreateInfo));
        result[0]=deserialize_struct(reader.getVksamplerreductionmodecreateinfo());
        return result;
    

    case PNext::VKPHYSICALDEVICEBLENDOPERATIONADVANCEDFEATURESEXT:
        result=(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceblendoperationadvancedfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEMULTIDRAWFEATURESEXT:
        result=(VkPhysicalDeviceMultiDrawFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceMultiDrawFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicemultidrawfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEBLENDOPERATIONADVANCEDPROPERTIESEXT:
        result=(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceblendoperationadvancedpropertiesext());
        return result;
    

    case PNext::VKPIPELINECOLORBLENDADVANCEDSTATECREATEINFOEXT:
        result=(VkPipelineColorBlendAdvancedStateCreateInfoEXT*)malloc(sizeof(VkPipelineColorBlendAdvancedStateCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkpipelinecolorblendadvancedstatecreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICEINLINEUNIFORMBLOCKFEATURES:
        result=(VkPhysicalDeviceInlineUniformBlockFeatures*)malloc(sizeof(VkPhysicalDeviceInlineUniformBlockFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceinlineuniformblockfeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICEINLINEUNIFORMBLOCKPROPERTIES:
        result=(VkPhysicalDeviceInlineUniformBlockProperties*)malloc(sizeof(VkPhysicalDeviceInlineUniformBlockProperties));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceinlineuniformblockproperties());
        return result;
    

    case PNext::VKWRITEDESCRIPTORSETINLINEUNIFORMBLOCK:
        result=(VkWriteDescriptorSetInlineUniformBlock*)malloc(sizeof(VkWriteDescriptorSetInlineUniformBlock));
        result[0]=deserialize_struct(reader.getVkwritedescriptorsetinlineuniformblock());
        return result;
    

    case PNext::VKDESCRIPTORPOOLINLINEUNIFORMBLOCKCREATEINFO:
        result=(VkDescriptorPoolInlineUniformBlockCreateInfo*)malloc(sizeof(VkDescriptorPoolInlineUniformBlockCreateInfo));
        result[0]=deserialize_struct(reader.getVkdescriptorpoolinlineuniformblockcreateinfo());
        return result;
    

    case PNext::VKPIPELINECOVERAGEMODULATIONSTATECREATEINFONV:
        result=(VkPipelineCoverageModulationStateCreateInfoNV*)malloc(sizeof(VkPipelineCoverageModulationStateCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkpipelinecoveragemodulationstatecreateinfonv());
        return result;
    

    case PNext::VKIMAGEFORMATLISTCREATEINFO:
        result=(VkImageFormatListCreateInfo*)malloc(sizeof(VkImageFormatListCreateInfo));
        result[0]=deserialize_struct(reader.getVkimageformatlistcreateinfo());
        return result;
    

    case PNext::VKVALIDATIONCACHECREATEINFOEXT:
        result=(VkValidationCacheCreateInfoEXT*)malloc(sizeof(VkValidationCacheCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkvalidationcachecreateinfoext());
        return result;
    

    case PNext::VKSHADERMODULEVALIDATIONCACHECREATEINFOEXT:
        result=(VkShaderModuleValidationCacheCreateInfoEXT*)malloc(sizeof(VkShaderModuleValidationCacheCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkshadermodulevalidationcachecreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICEMAINTENANCE3PROPERTIES:
        result=(VkPhysicalDeviceMaintenance3Properties*)malloc(sizeof(VkPhysicalDeviceMaintenance3Properties));
        result[0]=deserialize_struct(reader.getVkphysicaldevicemaintenance3Properties());
        return result;
    

    case PNext::VKPHYSICALDEVICEMAINTENANCE4FEATURES:
        result=(VkPhysicalDeviceMaintenance4Features*)malloc(sizeof(VkPhysicalDeviceMaintenance4Features));
        result[0]=deserialize_struct(reader.getVkphysicaldevicemaintenance4Features());
        return result;
    

    case PNext::VKPHYSICALDEVICEMAINTENANCE4PROPERTIES:
        result=(VkPhysicalDeviceMaintenance4Properties*)malloc(sizeof(VkPhysicalDeviceMaintenance4Properties));
        result[0]=deserialize_struct(reader.getVkphysicaldevicemaintenance4Properties());
        return result;
    

    case PNext::VKPHYSICALDEVICEMAINTENANCE5FEATURESKHR:
        result=(VkPhysicalDeviceMaintenance5FeaturesKHR*)malloc(sizeof(VkPhysicalDeviceMaintenance5FeaturesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldevicemaintenance5Featureskhr());
        return result;
    

    case PNext::VKPHYSICALDEVICEMAINTENANCE5PROPERTIESKHR:
        result=(VkPhysicalDeviceMaintenance5PropertiesKHR*)malloc(sizeof(VkPhysicalDeviceMaintenance5PropertiesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldevicemaintenance5Propertieskhr());
        return result;
    

    case PNext::VKRENDERINGAREAINFOKHR:
        result=(VkRenderingAreaInfoKHR*)malloc(sizeof(VkRenderingAreaInfoKHR));
        result[0]=deserialize_struct(reader.getVkrenderingareainfokhr());
        return result;
    

    case PNext::VKDESCRIPTORSETLAYOUTSUPPORT:
        result=(VkDescriptorSetLayoutSupport*)malloc(sizeof(VkDescriptorSetLayoutSupport));
        result[0]=deserialize_struct(reader.getVkdescriptorsetlayoutsupport());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERDRAWPARAMETERSFEATURES:
        result=(VkPhysicalDeviceShaderDrawParametersFeatures*)malloc(sizeof(VkPhysicalDeviceShaderDrawParametersFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshaderdrawparametersfeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERFLOAT16INT8FEATURES:
        result=(VkPhysicalDeviceShaderFloat16Int8Features*)malloc(sizeof(VkPhysicalDeviceShaderFloat16Int8Features));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshaderfloat16Int8Features());
        return result;
    

    case PNext::VKPHYSICALDEVICEFLOATCONTROLSPROPERTIES:
        result=(VkPhysicalDeviceFloatControlsProperties*)malloc(sizeof(VkPhysicalDeviceFloatControlsProperties));
        result[0]=deserialize_struct(reader.getVkphysicaldevicefloatcontrolsproperties());
        return result;
    

    case PNext::VKPHYSICALDEVICEHOSTQUERYRESETFEATURES:
        result=(VkPhysicalDeviceHostQueryResetFeatures*)malloc(sizeof(VkPhysicalDeviceHostQueryResetFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldevicehostqueryresetfeatures());
        return result;
    

    case PNext::VKSHADERRESOURCEUSAGEAMD:
        result=(VkShaderResourceUsageAMD*)malloc(sizeof(VkShaderResourceUsageAMD));
        result[0]=deserialize_struct(reader.getVkshaderresourceusageamd());
        return result;
    

    case PNext::VKSHADERSTATISTICSINFOAMD:
        result=(VkShaderStatisticsInfoAMD*)malloc(sizeof(VkShaderStatisticsInfoAMD));
        result[0]=deserialize_struct(reader.getVkshaderstatisticsinfoamd());
        return result;
    

    case PNext::VKDEVICEQUEUEGLOBALPRIORITYCREATEINFOKHR:
        result=(VkDeviceQueueGlobalPriorityCreateInfoKHR*)malloc(sizeof(VkDeviceQueueGlobalPriorityCreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkdevicequeueglobalprioritycreateinfokhr());
        return result;
    

    case PNext::VKPHYSICALDEVICEGLOBALPRIORITYQUERYFEATURESKHR:
        result=(VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR*)malloc(sizeof(VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceglobalpriorityqueryfeatureskhr());
        return result;
    

    case PNext::VKQUEUEFAMILYGLOBALPRIORITYPROPERTIESKHR:
        result=(VkQueueFamilyGlobalPriorityPropertiesKHR*)malloc(sizeof(VkQueueFamilyGlobalPriorityPropertiesKHR));
        result[0]=deserialize_struct(reader.getVkqueuefamilyglobalprioritypropertieskhr());
        return result;
    

    case PNext::VKDEBUGUTILSOBJECTNAMEINFOEXT:
        result=(VkDebugUtilsObjectNameInfoEXT*)malloc(sizeof(VkDebugUtilsObjectNameInfoEXT));
        result[0]=deserialize_struct(reader.getVkdebugutilsobjectnameinfoext());
        return result;
    

    case PNext::VKDEBUGUTILSOBJECTTAGINFOEXT:
        result=(VkDebugUtilsObjectTagInfoEXT*)malloc(sizeof(VkDebugUtilsObjectTagInfoEXT));
        result[0]=deserialize_struct(reader.getVkdebugutilsobjecttaginfoext());
        return result;
    

    case PNext::VKDEBUGUTILSLABELEXT:
        result=(VkDebugUtilsLabelEXT*)malloc(sizeof(VkDebugUtilsLabelEXT));
        result[0]=deserialize_struct(reader.getVkdebugutilslabelext());
        return result;
    

    case PNext::VKDEBUGUTILSMESSENGERCREATEINFOEXT:
        result=(VkDebugUtilsMessengerCreateInfoEXT*)malloc(sizeof(VkDebugUtilsMessengerCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkdebugutilsmessengercreateinfoext());
        return result;
    

    case PNext::VKDEBUGUTILSMESSENGERCALLBACKDATAEXT:
        result=(VkDebugUtilsMessengerCallbackDataEXT*)malloc(sizeof(VkDebugUtilsMessengerCallbackDataEXT));
        result[0]=deserialize_struct(reader.getVkdebugutilsmessengercallbackdataext());
        return result;
    

    case PNext::VKPHYSICALDEVICEDEVICEMEMORYREPORTFEATURESEXT:
        result=(VkPhysicalDeviceDeviceMemoryReportFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceDeviceMemoryReportFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicedevicememoryreportfeaturesext());
        return result;
    

    case PNext::VKDEVICEDEVICEMEMORYREPORTCREATEINFOEXT:
        result=(VkDeviceDeviceMemoryReportCreateInfoEXT*)malloc(sizeof(VkDeviceDeviceMemoryReportCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkdevicedevicememoryreportcreateinfoext());
        return result;
    

    case PNext::VKDEVICEMEMORYREPORTCALLBACKDATAEXT:
        result=(VkDeviceMemoryReportCallbackDataEXT*)malloc(sizeof(VkDeviceMemoryReportCallbackDataEXT));
        result[0]=deserialize_struct(reader.getVkdevicememoryreportcallbackdataext());
        return result;
    

    case PNext::VKIMPORTMEMORYHOSTPOINTERINFOEXT:
        result=(VkImportMemoryHostPointerInfoEXT*)malloc(sizeof(VkImportMemoryHostPointerInfoEXT));
        result[0]=deserialize_struct(reader.getVkimportmemoryhostpointerinfoext());
        return result;
    

    case PNext::VKMEMORYHOSTPOINTERPROPERTIESEXT:
        result=(VkMemoryHostPointerPropertiesEXT*)malloc(sizeof(VkMemoryHostPointerPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkmemoryhostpointerpropertiesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEEXTERNALMEMORYHOSTPROPERTIESEXT:
        result=(VkPhysicalDeviceExternalMemoryHostPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceExternalMemoryHostPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceexternalmemoryhostpropertiesext());
        return result;
    

    case PNext::VKPHYSICALDEVICECONSERVATIVERASTERIZATIONPROPERTIESEXT:
        result=(VkPhysicalDeviceConservativeRasterizationPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceConservativeRasterizationPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceconservativerasterizationpropertiesext());
        return result;
    

    case PNext::VKCALIBRATEDTIMESTAMPINFOEXT:
        result=(VkCalibratedTimestampInfoEXT*)malloc(sizeof(VkCalibratedTimestampInfoEXT));
        result[0]=deserialize_struct(reader.getVkcalibratedtimestampinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERCOREPROPERTIESAMD:
        result=(VkPhysicalDeviceShaderCorePropertiesAMD*)malloc(sizeof(VkPhysicalDeviceShaderCorePropertiesAMD));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshadercorepropertiesamd());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERCOREPROPERTIES2AMD:
        result=(VkPhysicalDeviceShaderCoreProperties2AMD*)malloc(sizeof(VkPhysicalDeviceShaderCoreProperties2AMD));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshadercoreproperties2Amd());
        return result;
    

    case PNext::VKPIPELINERASTERIZATIONCONSERVATIVESTATECREATEINFOEXT:
        result=(VkPipelineRasterizationConservativeStateCreateInfoEXT*)malloc(sizeof(VkPipelineRasterizationConservativeStateCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkpipelinerasterizationconservativestatecreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICEDESCRIPTORINDEXINGFEATURES:
        result=(VkPhysicalDeviceDescriptorIndexingFeatures*)malloc(sizeof(VkPhysicalDeviceDescriptorIndexingFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldevicedescriptorindexingfeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICEDESCRIPTORINDEXINGPROPERTIES:
        result=(VkPhysicalDeviceDescriptorIndexingProperties*)malloc(sizeof(VkPhysicalDeviceDescriptorIndexingProperties));
        result[0]=deserialize_struct(reader.getVkphysicaldevicedescriptorindexingproperties());
        return result;
    

    case PNext::VKDESCRIPTORSETLAYOUTBINDINGFLAGSCREATEINFO:
        result=(VkDescriptorSetLayoutBindingFlagsCreateInfo*)malloc(sizeof(VkDescriptorSetLayoutBindingFlagsCreateInfo));
        result[0]=deserialize_struct(reader.getVkdescriptorsetlayoutbindingflagscreateinfo());
        return result;
    

    case PNext::VKDESCRIPTORSETVARIABLEDESCRIPTORCOUNTALLOCATEINFO:
        result=(VkDescriptorSetVariableDescriptorCountAllocateInfo*)malloc(sizeof(VkDescriptorSetVariableDescriptorCountAllocateInfo));
        result[0]=deserialize_struct(reader.getVkdescriptorsetvariabledescriptorcountallocateinfo());
        return result;
    

    case PNext::VKDESCRIPTORSETVARIABLEDESCRIPTORCOUNTLAYOUTSUPPORT:
        result=(VkDescriptorSetVariableDescriptorCountLayoutSupport*)malloc(sizeof(VkDescriptorSetVariableDescriptorCountLayoutSupport));
        result[0]=deserialize_struct(reader.getVkdescriptorsetvariabledescriptorcountlayoutsupport());
        return result;
    

    case PNext::VKATTACHMENTDESCRIPTION2:
        result=(VkAttachmentDescription2*)malloc(sizeof(VkAttachmentDescription2));
        result[0]=deserialize_struct(reader.getVkattachmentdescription2());
        return result;
    

    case PNext::VKATTACHMENTREFERENCE2:
        result=(VkAttachmentReference2*)malloc(sizeof(VkAttachmentReference2));
        result[0]=deserialize_struct(reader.getVkattachmentreference2());
        return result;
    

    case PNext::VKSUBPASSDESCRIPTION2:
        result=(VkSubpassDescription2*)malloc(sizeof(VkSubpassDescription2));
        result[0]=deserialize_struct(reader.getVksubpassdescription2());
        return result;
    

    case PNext::VKSUBPASSDEPENDENCY2:
        result=(VkSubpassDependency2*)malloc(sizeof(VkSubpassDependency2));
        result[0]=deserialize_struct(reader.getVksubpassdependency2());
        return result;
    

    case PNext::VKRENDERPASSCREATEINFO2:
        result=(VkRenderPassCreateInfo2*)malloc(sizeof(VkRenderPassCreateInfo2));
        result[0]=deserialize_struct(reader.getVkrenderpasscreateinfo2());
        return result;
    

    case PNext::VKSUBPASSBEGININFO:
        result=(VkSubpassBeginInfo*)malloc(sizeof(VkSubpassBeginInfo));
        result[0]=deserialize_struct(reader.getVksubpassbegininfo());
        return result;
    

    case PNext::VKSUBPASSENDINFO:
        result=(VkSubpassEndInfo*)malloc(sizeof(VkSubpassEndInfo));
        result[0]=deserialize_struct(reader.getVksubpassendinfo());
        return result;
    

    case PNext::VKPHYSICALDEVICETIMELINESEMAPHOREFEATURES:
        result=(VkPhysicalDeviceTimelineSemaphoreFeatures*)malloc(sizeof(VkPhysicalDeviceTimelineSemaphoreFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldevicetimelinesemaphorefeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICETIMELINESEMAPHOREPROPERTIES:
        result=(VkPhysicalDeviceTimelineSemaphoreProperties*)malloc(sizeof(VkPhysicalDeviceTimelineSemaphoreProperties));
        result[0]=deserialize_struct(reader.getVkphysicaldevicetimelinesemaphoreproperties());
        return result;
    

    case PNext::VKSEMAPHORETYPECREATEINFO:
        result=(VkSemaphoreTypeCreateInfo*)malloc(sizeof(VkSemaphoreTypeCreateInfo));
        result[0]=deserialize_struct(reader.getVksemaphoretypecreateinfo());
        return result;
    

    case PNext::VKTIMELINESEMAPHORESUBMITINFO:
        result=(VkTimelineSemaphoreSubmitInfo*)malloc(sizeof(VkTimelineSemaphoreSubmitInfo));
        result[0]=deserialize_struct(reader.getVktimelinesemaphoresubmitinfo());
        return result;
    

    case PNext::VKSEMAPHOREWAITINFO:
        result=(VkSemaphoreWaitInfo*)malloc(sizeof(VkSemaphoreWaitInfo));
        result[0]=deserialize_struct(reader.getVksemaphorewaitinfo());
        return result;
    

    case PNext::VKSEMAPHORESIGNALINFO:
        result=(VkSemaphoreSignalInfo*)malloc(sizeof(VkSemaphoreSignalInfo));
        result[0]=deserialize_struct(reader.getVksemaphoresignalinfo());
        return result;
    

    case PNext::VKVERTEXINPUTBINDINGDIVISORDESCRIPTIONEXT:
        result=(VkVertexInputBindingDivisorDescriptionEXT*)malloc(sizeof(VkVertexInputBindingDivisorDescriptionEXT));
        result[0]=deserialize_struct(reader.getVkvertexinputbindingdivisordescriptionext());
        return result;
    

    case PNext::VKPIPELINEVERTEXINPUTDIVISORSTATECREATEINFOEXT:
        result=(VkPipelineVertexInputDivisorStateCreateInfoEXT*)malloc(sizeof(VkPipelineVertexInputDivisorStateCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkpipelinevertexinputdivisorstatecreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICEVERTEXATTRIBUTEDIVISORPROPERTIESEXT:
        result=(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicevertexattributedivisorpropertiesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEPCIBUSINFOPROPERTIESEXT:
        result=(VkPhysicalDevicePCIBusInfoPropertiesEXT*)malloc(sizeof(VkPhysicalDevicePCIBusInfoPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicepcibusinfopropertiesext());
        return result;
    

    case PNext::VKCOMMANDBUFFERINHERITANCECONDITIONALRENDERINGINFOEXT:
        result=(VkCommandBufferInheritanceConditionalRenderingInfoEXT*)malloc(sizeof(VkCommandBufferInheritanceConditionalRenderingInfoEXT));
        result[0]=deserialize_struct(reader.getVkcommandbufferinheritanceconditionalrenderinginfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICE8BITSTORAGEFEATURES:
        result=(VkPhysicalDevice8BitStorageFeatures*)malloc(sizeof(VkPhysicalDevice8BitStorageFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldevice8Bitstoragefeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICECONDITIONALRENDERINGFEATURESEXT:
        result=(VkPhysicalDeviceConditionalRenderingFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceConditionalRenderingFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceconditionalrenderingfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEVULKANMEMORYMODELFEATURES:
        result=(VkPhysicalDeviceVulkanMemoryModelFeatures*)malloc(sizeof(VkPhysicalDeviceVulkanMemoryModelFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldevicevulkanmemorymodelfeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERATOMICINT64FEATURES:
        result=(VkPhysicalDeviceShaderAtomicInt64Features*)malloc(sizeof(VkPhysicalDeviceShaderAtomicInt64Features));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshaderatomicint64Features());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERATOMICFLOATFEATURESEXT:
        result=(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshaderatomicfloatfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERATOMICFLOAT2FEATURESEXT:
        result=(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT*)malloc(sizeof(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshaderatomicfloat2Featuresext());
        return result;
    

    case PNext::VKPHYSICALDEVICEVERTEXATTRIBUTEDIVISORFEATURESEXT:
        result=(VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicevertexattributedivisorfeaturesext());
        return result;
    

    case PNext::VKQUEUEFAMILYCHECKPOINTPROPERTIESNV:
        result=(VkQueueFamilyCheckpointPropertiesNV*)malloc(sizeof(VkQueueFamilyCheckpointPropertiesNV));
        result[0]=deserialize_struct(reader.getVkqueuefamilycheckpointpropertiesnv());
        return result;
    

    case PNext::VKCHECKPOINTDATANV:
        result=(VkCheckpointDataNV*)malloc(sizeof(VkCheckpointDataNV));
        result[0]=deserialize_struct(reader.getVkcheckpointdatanv());
        return result;
    

    case PNext::VKPHYSICALDEVICEDEPTHSTENCILRESOLVEPROPERTIES:
        result=(VkPhysicalDeviceDepthStencilResolveProperties*)malloc(sizeof(VkPhysicalDeviceDepthStencilResolveProperties));
        result[0]=deserialize_struct(reader.getVkphysicaldevicedepthstencilresolveproperties());
        return result;
    

    case PNext::VKSUBPASSDESCRIPTIONDEPTHSTENCILRESOLVE:
        result=(VkSubpassDescriptionDepthStencilResolve*)malloc(sizeof(VkSubpassDescriptionDepthStencilResolve));
        result[0]=deserialize_struct(reader.getVksubpassdescriptiondepthstencilresolve());
        return result;
    

    case PNext::VKIMAGEVIEWASTCDECODEMODEEXT:
        result=(VkImageViewASTCDecodeModeEXT*)malloc(sizeof(VkImageViewASTCDecodeModeEXT));
        result[0]=deserialize_struct(reader.getVkimageviewastcdecodemodeext());
        return result;
    

    case PNext::VKPHYSICALDEVICEASTCDECODEFEATURESEXT:
        result=(VkPhysicalDeviceASTCDecodeFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceASTCDecodeFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceastcdecodefeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICETRANSFORMFEEDBACKFEATURESEXT:
        result=(VkPhysicalDeviceTransformFeedbackFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceTransformFeedbackFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicetransformfeedbackfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICETRANSFORMFEEDBACKPROPERTIESEXT:
        result=(VkPhysicalDeviceTransformFeedbackPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceTransformFeedbackPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicetransformfeedbackpropertiesext());
        return result;
    

    case PNext::VKPIPELINERASTERIZATIONSTATESTREAMCREATEINFOEXT:
        result=(VkPipelineRasterizationStateStreamCreateInfoEXT*)malloc(sizeof(VkPipelineRasterizationStateStreamCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkpipelinerasterizationstatestreamcreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICEREPRESENTATIVEFRAGMENTTESTFEATURESNV:
        result=(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV*)malloc(sizeof(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicerepresentativefragmenttestfeaturesnv());
        return result;
    

    case PNext::VKPIPELINEREPRESENTATIVEFRAGMENTTESTSTATECREATEINFONV:
        result=(VkPipelineRepresentativeFragmentTestStateCreateInfoNV*)malloc(sizeof(VkPipelineRepresentativeFragmentTestStateCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkpipelinerepresentativefragmentteststatecreateinfonv());
        return result;
    

    case PNext::VKPHYSICALDEVICEEXCLUSIVESCISSORFEATURESNV:
        result=(VkPhysicalDeviceExclusiveScissorFeaturesNV*)malloc(sizeof(VkPhysicalDeviceExclusiveScissorFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceexclusivescissorfeaturesnv());
        return result;
    

    case PNext::VKPIPELINEVIEWPORTEXCLUSIVESCISSORSTATECREATEINFONV:
        result=(VkPipelineViewportExclusiveScissorStateCreateInfoNV*)malloc(sizeof(VkPipelineViewportExclusiveScissorStateCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkpipelineviewportexclusivescissorstatecreateinfonv());
        return result;
    

    case PNext::VKPHYSICALDEVICECORNERSAMPLEDIMAGEFEATURESNV:
        result=(VkPhysicalDeviceCornerSampledImageFeaturesNV*)malloc(sizeof(VkPhysicalDeviceCornerSampledImageFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicecornersampledimagefeaturesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICECOMPUTESHADERDERIVATIVESFEATURESNV:
        result=(VkPhysicalDeviceComputeShaderDerivativesFeaturesNV*)malloc(sizeof(VkPhysicalDeviceComputeShaderDerivativesFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicecomputeshaderderivativesfeaturesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERIMAGEFOOTPRINTFEATURESNV:
        result=(VkPhysicalDeviceShaderImageFootprintFeaturesNV*)malloc(sizeof(VkPhysicalDeviceShaderImageFootprintFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshaderimagefootprintfeaturesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICEDEDICATEDALLOCATIONIMAGEALIASINGFEATURESNV:
        result=(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV*)malloc(sizeof(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicededicatedallocationimagealiasingfeaturesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICECOPYMEMORYINDIRECTFEATURESNV:
        result=(VkPhysicalDeviceCopyMemoryIndirectFeaturesNV*)malloc(sizeof(VkPhysicalDeviceCopyMemoryIndirectFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicecopymemoryindirectfeaturesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICECOPYMEMORYINDIRECTPROPERTIESNV:
        result=(VkPhysicalDeviceCopyMemoryIndirectPropertiesNV*)malloc(sizeof(VkPhysicalDeviceCopyMemoryIndirectPropertiesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicecopymemoryindirectpropertiesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICEMEMORYDECOMPRESSIONFEATURESNV:
        result=(VkPhysicalDeviceMemoryDecompressionFeaturesNV*)malloc(sizeof(VkPhysicalDeviceMemoryDecompressionFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicememorydecompressionfeaturesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICEMEMORYDECOMPRESSIONPROPERTIESNV:
        result=(VkPhysicalDeviceMemoryDecompressionPropertiesNV*)malloc(sizeof(VkPhysicalDeviceMemoryDecompressionPropertiesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicememorydecompressionpropertiesnv());
        return result;
    

    case PNext::VKSHADINGRATEPALETTENV:
        result=(VkShadingRatePaletteNV*)malloc(sizeof(VkShadingRatePaletteNV));
        result[0]=deserialize_struct(reader.getVkshadingratepalettenv());
        return result;
    

    case PNext::VKPIPELINEVIEWPORTSHADINGRATEIMAGESTATECREATEINFONV:
        result=(VkPipelineViewportShadingRateImageStateCreateInfoNV*)malloc(sizeof(VkPipelineViewportShadingRateImageStateCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkpipelineviewportshadingrateimagestatecreateinfonv());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADINGRATEIMAGEFEATURESNV:
        result=(VkPhysicalDeviceShadingRateImageFeaturesNV*)malloc(sizeof(VkPhysicalDeviceShadingRateImageFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshadingrateimagefeaturesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADINGRATEIMAGEPROPERTIESNV:
        result=(VkPhysicalDeviceShadingRateImagePropertiesNV*)malloc(sizeof(VkPhysicalDeviceShadingRateImagePropertiesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshadingrateimagepropertiesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICEINVOCATIONMASKFEATURESHUAWEI:
        result=(VkPhysicalDeviceInvocationMaskFeaturesHUAWEI*)malloc(sizeof(VkPhysicalDeviceInvocationMaskFeaturesHUAWEI));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceinvocationmaskfeatureshuawei());
        return result;
    

    case PNext::VKCOARSESAMPLELOCATIONNV:
        result=(VkCoarseSampleLocationNV*)malloc(sizeof(VkCoarseSampleLocationNV));
        result[0]=deserialize_struct(reader.getVkcoarsesamplelocationnv());
        return result;
    

    case PNext::VKCOARSESAMPLEORDERCUSTOMNV:
        result=(VkCoarseSampleOrderCustomNV*)malloc(sizeof(VkCoarseSampleOrderCustomNV));
        result[0]=deserialize_struct(reader.getVkcoarsesampleordercustomnv());
        return result;
    

    case PNext::VKPIPELINEVIEWPORTCOARSESAMPLEORDERSTATECREATEINFONV:
        result=(VkPipelineViewportCoarseSampleOrderStateCreateInfoNV*)malloc(sizeof(VkPipelineViewportCoarseSampleOrderStateCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkpipelineviewportcoarsesampleorderstatecreateinfonv());
        return result;
    

    case PNext::VKPHYSICALDEVICEMESHSHADERFEATURESNV:
        result=(VkPhysicalDeviceMeshShaderFeaturesNV*)malloc(sizeof(VkPhysicalDeviceMeshShaderFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicemeshshaderfeaturesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICEMESHSHADERPROPERTIESNV:
        result=(VkPhysicalDeviceMeshShaderPropertiesNV*)malloc(sizeof(VkPhysicalDeviceMeshShaderPropertiesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicemeshshaderpropertiesnv());
        return result;
    

    case PNext::VKDRAWMESHTASKSINDIRECTCOMMANDNV:
        result=(VkDrawMeshTasksIndirectCommandNV*)malloc(sizeof(VkDrawMeshTasksIndirectCommandNV));
        result[0]=deserialize_struct(reader.getVkdrawmeshtasksindirectcommandnv());
        return result;
    

    case PNext::VKPHYSICALDEVICEMESHSHADERFEATURESEXT:
        result=(VkPhysicalDeviceMeshShaderFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceMeshShaderFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicemeshshaderfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEMESHSHADERPROPERTIESEXT:
        result=(VkPhysicalDeviceMeshShaderPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceMeshShaderPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicemeshshaderpropertiesext());
        return result;
    

    case PNext::VKDRAWMESHTASKSINDIRECTCOMMANDEXT:
        result=(VkDrawMeshTasksIndirectCommandEXT*)malloc(sizeof(VkDrawMeshTasksIndirectCommandEXT));
        result[0]=deserialize_struct(reader.getVkdrawmeshtasksindirectcommandext());
        return result;
    

    case PNext::VKRAYTRACINGSHADERGROUPCREATEINFONV:
        result=(VkRayTracingShaderGroupCreateInfoNV*)malloc(sizeof(VkRayTracingShaderGroupCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkraytracingshadergroupcreateinfonv());
        return result;
    

    case PNext::VKRAYTRACINGSHADERGROUPCREATEINFOKHR:
        result=(VkRayTracingShaderGroupCreateInfoKHR*)malloc(sizeof(VkRayTracingShaderGroupCreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkraytracingshadergroupcreateinfokhr());
        return result;
    

    case PNext::VKRAYTRACINGPIPELINECREATEINFONV:
        result=(VkRayTracingPipelineCreateInfoNV*)malloc(sizeof(VkRayTracingPipelineCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkraytracingpipelinecreateinfonv());
        return result;
    

    case PNext::VKRAYTRACINGPIPELINECREATEINFOKHR:
        result=(VkRayTracingPipelineCreateInfoKHR*)malloc(sizeof(VkRayTracingPipelineCreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkraytracingpipelinecreateinfokhr());
        return result;
    

    case PNext::VKGEOMETRYTRIANGLESNV:
        result=(VkGeometryTrianglesNV*)malloc(sizeof(VkGeometryTrianglesNV));
        result[0]=deserialize_struct(reader.getVkgeometrytrianglesnv());
        return result;
    

    case PNext::VKGEOMETRYAABBNV:
        result=(VkGeometryAABBNV*)malloc(sizeof(VkGeometryAABBNV));
        result[0]=deserialize_struct(reader.getVkgeometryaabbnv());
        return result;
    

    case PNext::VKGEOMETRYDATANV:
        result=(VkGeometryDataNV*)malloc(sizeof(VkGeometryDataNV));
        result[0]=deserialize_struct(reader.getVkgeometrydatanv());
        return result;
    

    case PNext::VKGEOMETRYNV:
        result=(VkGeometryNV*)malloc(sizeof(VkGeometryNV));
        result[0]=deserialize_struct(reader.getVkgeometrynv());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTUREINFONV:
        result=(VkAccelerationStructureInfoNV*)malloc(sizeof(VkAccelerationStructureInfoNV));
        result[0]=deserialize_struct(reader.getVkaccelerationstructureinfonv());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTURECREATEINFONV:
        result=(VkAccelerationStructureCreateInfoNV*)malloc(sizeof(VkAccelerationStructureCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkaccelerationstructurecreateinfonv());
        return result;
    

    case PNext::VKBINDACCELERATIONSTRUCTUREMEMORYINFONV:
        result=(VkBindAccelerationStructureMemoryInfoNV*)malloc(sizeof(VkBindAccelerationStructureMemoryInfoNV));
        result[0]=deserialize_struct(reader.getVkbindaccelerationstructurememoryinfonv());
        return result;
    

    case PNext::VKWRITEDESCRIPTORSETACCELERATIONSTRUCTUREKHR:
        result=(VkWriteDescriptorSetAccelerationStructureKHR*)malloc(sizeof(VkWriteDescriptorSetAccelerationStructureKHR));
        result[0]=deserialize_struct(reader.getVkwritedescriptorsetaccelerationstructurekhr());
        return result;
    

    case PNext::VKWRITEDESCRIPTORSETACCELERATIONSTRUCTURENV:
        result=(VkWriteDescriptorSetAccelerationStructureNV*)malloc(sizeof(VkWriteDescriptorSetAccelerationStructureNV));
        result[0]=deserialize_struct(reader.getVkwritedescriptorsetaccelerationstructurenv());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTUREMEMORYREQUIREMENTSINFONV:
        result=(VkAccelerationStructureMemoryRequirementsInfoNV*)malloc(sizeof(VkAccelerationStructureMemoryRequirementsInfoNV));
        result[0]=deserialize_struct(reader.getVkaccelerationstructurememoryrequirementsinfonv());
        return result;
    

    case PNext::VKPHYSICALDEVICEACCELERATIONSTRUCTUREFEATURESKHR:
        result=(VkPhysicalDeviceAccelerationStructureFeaturesKHR*)malloc(sizeof(VkPhysicalDeviceAccelerationStructureFeaturesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceaccelerationstructurefeatureskhr());
        return result;
    

    case PNext::VKPHYSICALDEVICERAYTRACINGPIPELINEFEATURESKHR:
        result=(VkPhysicalDeviceRayTracingPipelineFeaturesKHR*)malloc(sizeof(VkPhysicalDeviceRayTracingPipelineFeaturesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceraytracingpipelinefeatureskhr());
        return result;
    

    case PNext::VKPHYSICALDEVICERAYQUERYFEATURESKHR:
        result=(VkPhysicalDeviceRayQueryFeaturesKHR*)malloc(sizeof(VkPhysicalDeviceRayQueryFeaturesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldevicerayqueryfeatureskhr());
        return result;
    

    case PNext::VKPHYSICALDEVICEACCELERATIONSTRUCTUREPROPERTIESKHR:
        result=(VkPhysicalDeviceAccelerationStructurePropertiesKHR*)malloc(sizeof(VkPhysicalDeviceAccelerationStructurePropertiesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceaccelerationstructurepropertieskhr());
        return result;
    

    case PNext::VKPHYSICALDEVICERAYTRACINGPIPELINEPROPERTIESKHR:
        result=(VkPhysicalDeviceRayTracingPipelinePropertiesKHR*)malloc(sizeof(VkPhysicalDeviceRayTracingPipelinePropertiesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceraytracingpipelinepropertieskhr());
        return result;
    

    case PNext::VKPHYSICALDEVICERAYTRACINGPROPERTIESNV:
        result=(VkPhysicalDeviceRayTracingPropertiesNV*)malloc(sizeof(VkPhysicalDeviceRayTracingPropertiesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceraytracingpropertiesnv());
        return result;
    

    case PNext::VKSTRIDEDDEVICEADDRESSREGIONKHR:
        result=(VkStridedDeviceAddressRegionKHR*)malloc(sizeof(VkStridedDeviceAddressRegionKHR));
        result[0]=deserialize_struct(reader.getVkstrideddeviceaddressregionkhr());
        return result;
    

    case PNext::VKTRACERAYSINDIRECTCOMMANDKHR:
        result=(VkTraceRaysIndirectCommandKHR*)malloc(sizeof(VkTraceRaysIndirectCommandKHR));
        result[0]=deserialize_struct(reader.getVktraceraysindirectcommandkhr());
        return result;
    

    case PNext::VKTRACERAYSINDIRECTCOMMAND2KHR:
        result=(VkTraceRaysIndirectCommand2KHR*)malloc(sizeof(VkTraceRaysIndirectCommand2KHR));
        result[0]=deserialize_struct(reader.getVktraceraysindirectcommand2Khr());
        return result;
    

    case PNext::VKPHYSICALDEVICERAYTRACINGMAINTENANCE1FEATURESKHR:
        result=(VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR*)malloc(sizeof(VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceraytracingmaintenance1Featureskhr());
        return result;
    

    case PNext::VKDRMFORMATMODIFIERPROPERTIESLISTEXT:
        result=(VkDrmFormatModifierPropertiesListEXT*)malloc(sizeof(VkDrmFormatModifierPropertiesListEXT));
        result[0]=deserialize_struct(reader.getVkdrmformatmodifierpropertieslistext());
        return result;
    

    case PNext::VKDRMFORMATMODIFIERPROPERTIESEXT:
        result=(VkDrmFormatModifierPropertiesEXT*)malloc(sizeof(VkDrmFormatModifierPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkdrmformatmodifierpropertiesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEIMAGEDRMFORMATMODIFIERINFOEXT:
        result=(VkPhysicalDeviceImageDrmFormatModifierInfoEXT*)malloc(sizeof(VkPhysicalDeviceImageDrmFormatModifierInfoEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceimagedrmformatmodifierinfoext());
        return result;
    

    case PNext::VKIMAGEDRMFORMATMODIFIERLISTCREATEINFOEXT:
        result=(VkImageDrmFormatModifierListCreateInfoEXT*)malloc(sizeof(VkImageDrmFormatModifierListCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkimagedrmformatmodifierlistcreateinfoext());
        return result;
    

    case PNext::VKIMAGEDRMFORMATMODIFIEREXPLICITCREATEINFOEXT:
        result=(VkImageDrmFormatModifierExplicitCreateInfoEXT*)malloc(sizeof(VkImageDrmFormatModifierExplicitCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkimagedrmformatmodifierexplicitcreateinfoext());
        return result;
    

    case PNext::VKIMAGEDRMFORMATMODIFIERPROPERTIESEXT:
        result=(VkImageDrmFormatModifierPropertiesEXT*)malloc(sizeof(VkImageDrmFormatModifierPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkimagedrmformatmodifierpropertiesext());
        return result;
    

    case PNext::VKIMAGESTENCILUSAGECREATEINFO:
        result=(VkImageStencilUsageCreateInfo*)malloc(sizeof(VkImageStencilUsageCreateInfo));
        result[0]=deserialize_struct(reader.getVkimagestencilusagecreateinfo());
        return result;
    

    case PNext::VKDEVICEMEMORYOVERALLOCATIONCREATEINFOAMD:
        result=(VkDeviceMemoryOverallocationCreateInfoAMD*)malloc(sizeof(VkDeviceMemoryOverallocationCreateInfoAMD));
        result[0]=deserialize_struct(reader.getVkdevicememoryoverallocationcreateinfoamd());
        return result;
    

    case PNext::VKPHYSICALDEVICEFRAGMENTDENSITYMAPFEATURESEXT:
        result=(VkPhysicalDeviceFragmentDensityMapFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceFragmentDensityMapFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicefragmentdensitymapfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEFRAGMENTDENSITYMAP2FEATURESEXT:
        result=(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT*)malloc(sizeof(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicefragmentdensitymap2Featuresext());
        return result;
    

    case PNext::VKPHYSICALDEVICEFRAGMENTDENSITYMAPOFFSETFEATURESQCOM:
        result=(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM*)malloc(sizeof(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM));
        result[0]=deserialize_struct(reader.getVkphysicaldevicefragmentdensitymapoffsetfeaturesqcom());
        return result;
    

    case PNext::VKPHYSICALDEVICEFRAGMENTDENSITYMAPPROPERTIESEXT:
        result=(VkPhysicalDeviceFragmentDensityMapPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceFragmentDensityMapPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicefragmentdensitymappropertiesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEFRAGMENTDENSITYMAP2PROPERTIESEXT:
        result=(VkPhysicalDeviceFragmentDensityMap2PropertiesEXT*)malloc(sizeof(VkPhysicalDeviceFragmentDensityMap2PropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicefragmentdensitymap2Propertiesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEFRAGMENTDENSITYMAPOFFSETPROPERTIESQCOM:
        result=(VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM*)malloc(sizeof(VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM));
        result[0]=deserialize_struct(reader.getVkphysicaldevicefragmentdensitymapoffsetpropertiesqcom());
        return result;
    

    case PNext::VKRENDERPASSFRAGMENTDENSITYMAPCREATEINFOEXT:
        result=(VkRenderPassFragmentDensityMapCreateInfoEXT*)malloc(sizeof(VkRenderPassFragmentDensityMapCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkrenderpassfragmentdensitymapcreateinfoext());
        return result;
    

    case PNext::VKSUBPASSFRAGMENTDENSITYMAPOFFSETENDINFOQCOM:
        result=(VkSubpassFragmentDensityMapOffsetEndInfoQCOM*)malloc(sizeof(VkSubpassFragmentDensityMapOffsetEndInfoQCOM));
        result[0]=deserialize_struct(reader.getVksubpassfragmentdensitymapoffsetendinfoqcom());
        return result;
    

    case PNext::VKPHYSICALDEVICESCALARBLOCKLAYOUTFEATURES:
        result=(VkPhysicalDeviceScalarBlockLayoutFeatures*)malloc(sizeof(VkPhysicalDeviceScalarBlockLayoutFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldevicescalarblocklayoutfeatures());
        return result;
    

    case PNext::VKSURFACEPROTECTEDCAPABILITIESKHR:
        result=(VkSurfaceProtectedCapabilitiesKHR*)malloc(sizeof(VkSurfaceProtectedCapabilitiesKHR));
        result[0]=deserialize_struct(reader.getVksurfaceprotectedcapabilitieskhr());
        return result;
    

    case PNext::VKPHYSICALDEVICEUNIFORMBUFFERSTANDARDLAYOUTFEATURES:
        result=(VkPhysicalDeviceUniformBufferStandardLayoutFeatures*)malloc(sizeof(VkPhysicalDeviceUniformBufferStandardLayoutFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceuniformbufferstandardlayoutfeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICEDEPTHCLIPENABLEFEATURESEXT:
        result=(VkPhysicalDeviceDepthClipEnableFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceDepthClipEnableFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicedepthclipenablefeaturesext());
        return result;
    

    case PNext::VKPIPELINERASTERIZATIONDEPTHCLIPSTATECREATEINFOEXT:
        result=(VkPipelineRasterizationDepthClipStateCreateInfoEXT*)malloc(sizeof(VkPipelineRasterizationDepthClipStateCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkpipelinerasterizationdepthclipstatecreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICEMEMORYBUDGETPROPERTIESEXT:
        result=(VkPhysicalDeviceMemoryBudgetPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceMemoryBudgetPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicememorybudgetpropertiesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEMEMORYPRIORITYFEATURESEXT:
        result=(VkPhysicalDeviceMemoryPriorityFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceMemoryPriorityFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicememorypriorityfeaturesext());
        return result;
    

    case PNext::VKMEMORYPRIORITYALLOCATEINFOEXT:
        result=(VkMemoryPriorityAllocateInfoEXT*)malloc(sizeof(VkMemoryPriorityAllocateInfoEXT));
        result[0]=deserialize_struct(reader.getVkmemorypriorityallocateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICEPAGEABLEDEVICELOCALMEMORYFEATURESEXT:
        result=(VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT*)malloc(sizeof(VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicepageabledevicelocalmemoryfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEBUFFERDEVICEADDRESSFEATURES:
        result=(VkPhysicalDeviceBufferDeviceAddressFeatures*)malloc(sizeof(VkPhysicalDeviceBufferDeviceAddressFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldevicebufferdeviceaddressfeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICEBUFFERDEVICEADDRESSFEATURESEXT:
        result=(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicebufferdeviceaddressfeaturesext());
        return result;
    

    case PNext::VKBUFFERDEVICEADDRESSINFO:
        result=(VkBufferDeviceAddressInfo*)malloc(sizeof(VkBufferDeviceAddressInfo));
        result[0]=deserialize_struct(reader.getVkbufferdeviceaddressinfo());
        return result;
    

    case PNext::VKBUFFEROPAQUECAPTUREADDRESSCREATEINFO:
        result=(VkBufferOpaqueCaptureAddressCreateInfo*)malloc(sizeof(VkBufferOpaqueCaptureAddressCreateInfo));
        result[0]=deserialize_struct(reader.getVkbufferopaquecaptureaddresscreateinfo());
        return result;
    

    case PNext::VKBUFFERDEVICEADDRESSCREATEINFOEXT:
        result=(VkBufferDeviceAddressCreateInfoEXT*)malloc(sizeof(VkBufferDeviceAddressCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkbufferdeviceaddresscreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICEIMAGEVIEWIMAGEFORMATINFOEXT:
        result=(VkPhysicalDeviceImageViewImageFormatInfoEXT*)malloc(sizeof(VkPhysicalDeviceImageViewImageFormatInfoEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceimageviewimageformatinfoext());
        return result;
    

    case PNext::VKFILTERCUBICIMAGEVIEWIMAGEFORMATPROPERTIESEXT:
        result=(VkFilterCubicImageViewImageFormatPropertiesEXT*)malloc(sizeof(VkFilterCubicImageViewImageFormatPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkfiltercubicimageviewimageformatpropertiesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEIMAGELESSFRAMEBUFFERFEATURES:
        result=(VkPhysicalDeviceImagelessFramebufferFeatures*)malloc(sizeof(VkPhysicalDeviceImagelessFramebufferFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceimagelessframebufferfeatures());
        return result;
    

    case PNext::VKFRAMEBUFFERATTACHMENTSCREATEINFO:
        result=(VkFramebufferAttachmentsCreateInfo*)malloc(sizeof(VkFramebufferAttachmentsCreateInfo));
        result[0]=deserialize_struct(reader.getVkframebufferattachmentscreateinfo());
        return result;
    

    case PNext::VKFRAMEBUFFERATTACHMENTIMAGEINFO:
        result=(VkFramebufferAttachmentImageInfo*)malloc(sizeof(VkFramebufferAttachmentImageInfo));
        result[0]=deserialize_struct(reader.getVkframebufferattachmentimageinfo());
        return result;
    

    case PNext::VKRENDERPASSATTACHMENTBEGININFO:
        result=(VkRenderPassAttachmentBeginInfo*)malloc(sizeof(VkRenderPassAttachmentBeginInfo));
        result[0]=deserialize_struct(reader.getVkrenderpassattachmentbegininfo());
        return result;
    

    case PNext::VKPHYSICALDEVICETEXTURECOMPRESSIONASTCHDRFEATURES:
        result=(VkPhysicalDeviceTextureCompressionASTCHDRFeatures*)malloc(sizeof(VkPhysicalDeviceTextureCompressionASTCHDRFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldevicetexturecompressionastchdrfeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICECOOPERATIVEMATRIXFEATURESNV:
        result=(VkPhysicalDeviceCooperativeMatrixFeaturesNV*)malloc(sizeof(VkPhysicalDeviceCooperativeMatrixFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicecooperativematrixfeaturesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICECOOPERATIVEMATRIXPROPERTIESNV:
        result=(VkPhysicalDeviceCooperativeMatrixPropertiesNV*)malloc(sizeof(VkPhysicalDeviceCooperativeMatrixPropertiesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicecooperativematrixpropertiesnv());
        return result;
    

    case PNext::VKCOOPERATIVEMATRIXPROPERTIESNV:
        result=(VkCooperativeMatrixPropertiesNV*)malloc(sizeof(VkCooperativeMatrixPropertiesNV));
        result[0]=deserialize_struct(reader.getVkcooperativematrixpropertiesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICEYCBCRIMAGEARRAYSFEATURESEXT:
        result=(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceycbcrimagearraysfeaturesext());
        return result;
    

    case PNext::VKIMAGEVIEWHANDLEINFONVX:
        result=(VkImageViewHandleInfoNVX*)malloc(sizeof(VkImageViewHandleInfoNVX));
        result[0]=deserialize_struct(reader.getVkimageviewhandleinfonvx());
        return result;
    

    case PNext::VKIMAGEVIEWADDRESSPROPERTIESNVX:
        result=(VkImageViewAddressPropertiesNVX*)malloc(sizeof(VkImageViewAddressPropertiesNVX));
        result[0]=deserialize_struct(reader.getVkimageviewaddresspropertiesnvx());
        return result;
    

    case PNext::VKPIPELINECREATIONFEEDBACK:
        result=(VkPipelineCreationFeedback*)malloc(sizeof(VkPipelineCreationFeedback));
        result[0]=deserialize_struct(reader.getVkpipelinecreationfeedback());
        return result;
    

    case PNext::VKPIPELINECREATIONFEEDBACKCREATEINFO:
        result=(VkPipelineCreationFeedbackCreateInfo*)malloc(sizeof(VkPipelineCreationFeedbackCreateInfo));
        result[0]=deserialize_struct(reader.getVkpipelinecreationfeedbackcreateinfo());
        return result;
    

    case PNext::VKPHYSICALDEVICEPRESENTBARRIERFEATURESNV:
        result=(VkPhysicalDevicePresentBarrierFeaturesNV*)malloc(sizeof(VkPhysicalDevicePresentBarrierFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicepresentbarrierfeaturesnv());
        return result;
    

    case PNext::VKSURFACECAPABILITIESPRESENTBARRIERNV:
        result=(VkSurfaceCapabilitiesPresentBarrierNV*)malloc(sizeof(VkSurfaceCapabilitiesPresentBarrierNV));
        result[0]=deserialize_struct(reader.getVksurfacecapabilitiespresentbarriernv());
        return result;
    

    case PNext::VKSWAPCHAINPRESENTBARRIERCREATEINFONV:
        result=(VkSwapchainPresentBarrierCreateInfoNV*)malloc(sizeof(VkSwapchainPresentBarrierCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkswapchainpresentbarriercreateinfonv());
        return result;
    

    case PNext::VKPHYSICALDEVICEPERFORMANCEQUERYFEATURESKHR:
        result=(VkPhysicalDevicePerformanceQueryFeaturesKHR*)malloc(sizeof(VkPhysicalDevicePerformanceQueryFeaturesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceperformancequeryfeatureskhr());
        return result;
    

    case PNext::VKPHYSICALDEVICEPERFORMANCEQUERYPROPERTIESKHR:
        result=(VkPhysicalDevicePerformanceQueryPropertiesKHR*)malloc(sizeof(VkPhysicalDevicePerformanceQueryPropertiesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceperformancequerypropertieskhr());
        return result;
    

    case PNext::VKPERFORMANCECOUNTERKHR:
        result=(VkPerformanceCounterKHR*)malloc(sizeof(VkPerformanceCounterKHR));
        result[0]=deserialize_struct(reader.getVkperformancecounterkhr());
        return result;
    

    case PNext::VKPERFORMANCECOUNTERDESCRIPTIONKHR:
        result=(VkPerformanceCounterDescriptionKHR*)malloc(sizeof(VkPerformanceCounterDescriptionKHR));
        result[0]=deserialize_struct(reader.getVkperformancecounterdescriptionkhr());
        return result;
    

    case PNext::VKQUERYPOOLPERFORMANCECREATEINFOKHR:
        result=(VkQueryPoolPerformanceCreateInfoKHR*)malloc(sizeof(VkQueryPoolPerformanceCreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkquerypoolperformancecreateinfokhr());
        return result;
    

    case PNext::VKPERFORMANCECOUNTERRESULTKHR:
        result=(VkPerformanceCounterResultKHR*)malloc(sizeof(VkPerformanceCounterResultKHR));
        result[0]=deserialize_struct(reader.getVkperformancecounterresultkhr());
        return result;
    

    case PNext::VKACQUIREPROFILINGLOCKINFOKHR:
        result=(VkAcquireProfilingLockInfoKHR*)malloc(sizeof(VkAcquireProfilingLockInfoKHR));
        result[0]=deserialize_struct(reader.getVkacquireprofilinglockinfokhr());
        return result;
    

    case PNext::VKPERFORMANCEQUERYSUBMITINFOKHR:
        result=(VkPerformanceQuerySubmitInfoKHR*)malloc(sizeof(VkPerformanceQuerySubmitInfoKHR));
        result[0]=deserialize_struct(reader.getVkperformancequerysubmitinfokhr());
        return result;
    

    case PNext::VKHEADLESSSURFACECREATEINFOEXT:
        result=(VkHeadlessSurfaceCreateInfoEXT*)malloc(sizeof(VkHeadlessSurfaceCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkheadlesssurfacecreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICECOVERAGEREDUCTIONMODEFEATURESNV:
        result=(VkPhysicalDeviceCoverageReductionModeFeaturesNV*)malloc(sizeof(VkPhysicalDeviceCoverageReductionModeFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicecoveragereductionmodefeaturesnv());
        return result;
    

    case PNext::VKPIPELINECOVERAGEREDUCTIONSTATECREATEINFONV:
        result=(VkPipelineCoverageReductionStateCreateInfoNV*)malloc(sizeof(VkPipelineCoverageReductionStateCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkpipelinecoveragereductionstatecreateinfonv());
        return result;
    

    case PNext::VKFRAMEBUFFERMIXEDSAMPLESCOMBINATIONNV:
        result=(VkFramebufferMixedSamplesCombinationNV*)malloc(sizeof(VkFramebufferMixedSamplesCombinationNV));
        result[0]=deserialize_struct(reader.getVkframebuffermixedsamplescombinationnv());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERINTEGERFUNCTIONS2FEATURESINTEL:
        result=(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL*)malloc(sizeof(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshaderintegerfunctions2Featuresintel());
        return result;
    

    case PNext::VKPERFORMANCEVALUEDATAINTEL:
        result=(VkPerformanceValueDataINTEL*)malloc(sizeof(VkPerformanceValueDataINTEL));
        result[0]=deserialize_struct(reader.getVkperformancevaluedataintel());
        return result;
    

    case PNext::VKPERFORMANCEVALUEINTEL:
        result=(VkPerformanceValueINTEL*)malloc(sizeof(VkPerformanceValueINTEL));
        result[0]=deserialize_struct(reader.getVkperformancevalueintel());
        return result;
    

    case PNext::VKINITIALIZEPERFORMANCEAPIINFOINTEL:
        result=(VkInitializePerformanceApiInfoINTEL*)malloc(sizeof(VkInitializePerformanceApiInfoINTEL));
        result[0]=deserialize_struct(reader.getVkinitializeperformanceapiinfointel());
        return result;
    

    case PNext::VKQUERYPOOLPERFORMANCEQUERYCREATEINFOINTEL:
        result=(VkQueryPoolPerformanceQueryCreateInfoINTEL*)malloc(sizeof(VkQueryPoolPerformanceQueryCreateInfoINTEL));
        result[0]=deserialize_struct(reader.getVkquerypoolperformancequerycreateinfointel());
        return result;
    

    case PNext::VKPERFORMANCEMARKERINFOINTEL:
        result=(VkPerformanceMarkerInfoINTEL*)malloc(sizeof(VkPerformanceMarkerInfoINTEL));
        result[0]=deserialize_struct(reader.getVkperformancemarkerinfointel());
        return result;
    

    case PNext::VKPERFORMANCESTREAMMARKERINFOINTEL:
        result=(VkPerformanceStreamMarkerInfoINTEL*)malloc(sizeof(VkPerformanceStreamMarkerInfoINTEL));
        result[0]=deserialize_struct(reader.getVkperformancestreammarkerinfointel());
        return result;
    

    case PNext::VKPERFORMANCEOVERRIDEINFOINTEL:
        result=(VkPerformanceOverrideInfoINTEL*)malloc(sizeof(VkPerformanceOverrideInfoINTEL));
        result[0]=deserialize_struct(reader.getVkperformanceoverrideinfointel());
        return result;
    

    case PNext::VKPERFORMANCECONFIGURATIONACQUIREINFOINTEL:
        result=(VkPerformanceConfigurationAcquireInfoINTEL*)malloc(sizeof(VkPerformanceConfigurationAcquireInfoINTEL));
        result[0]=deserialize_struct(reader.getVkperformanceconfigurationacquireinfointel());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERCLOCKFEATURESKHR:
        result=(VkPhysicalDeviceShaderClockFeaturesKHR*)malloc(sizeof(VkPhysicalDeviceShaderClockFeaturesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshaderclockfeatureskhr());
        return result;
    

    case PNext::VKPHYSICALDEVICEINDEXTYPEUINT8FEATURESEXT:
        result=(VkPhysicalDeviceIndexTypeUint8FeaturesEXT*)malloc(sizeof(VkPhysicalDeviceIndexTypeUint8FeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceindextypeuint8Featuresext());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERSMBUILTINSPROPERTIESNV:
        result=(VkPhysicalDeviceShaderSMBuiltinsPropertiesNV*)malloc(sizeof(VkPhysicalDeviceShaderSMBuiltinsPropertiesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshadersmbuiltinspropertiesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERSMBUILTINSFEATURESNV:
        result=(VkPhysicalDeviceShaderSMBuiltinsFeaturesNV*)malloc(sizeof(VkPhysicalDeviceShaderSMBuiltinsFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshadersmbuiltinsfeaturesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICEFRAGMENTSHADERINTERLOCKFEATURESEXT:
        result=(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicefragmentshaderinterlockfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICESEPARATEDEPTHSTENCILLAYOUTSFEATURES:
        result=(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures*)malloc(sizeof(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceseparatedepthstencillayoutsfeatures());
        return result;
    

    case PNext::VKATTACHMENTREFERENCESTENCILLAYOUT:
        result=(VkAttachmentReferenceStencilLayout*)malloc(sizeof(VkAttachmentReferenceStencilLayout));
        result[0]=deserialize_struct(reader.getVkattachmentreferencestencillayout());
        return result;
    

    case PNext::VKPHYSICALDEVICEPRIMITIVETOPOLOGYLISTRESTARTFEATURESEXT:
        result=(VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT*)malloc(sizeof(VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceprimitivetopologylistrestartfeaturesext());
        return result;
    

    case PNext::VKATTACHMENTDESCRIPTIONSTENCILLAYOUT:
        result=(VkAttachmentDescriptionStencilLayout*)malloc(sizeof(VkAttachmentDescriptionStencilLayout));
        result[0]=deserialize_struct(reader.getVkattachmentdescriptionstencillayout());
        return result;
    

    case PNext::VKPHYSICALDEVICEPIPELINEEXECUTABLEPROPERTIESFEATURESKHR:
        result=(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR*)malloc(sizeof(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldevicepipelineexecutablepropertiesfeatureskhr());
        return result;
    

    case PNext::VKPIPELINEINFOKHR:
        result=(VkPipelineInfoKHR*)malloc(sizeof(VkPipelineInfoKHR));
        result[0]=deserialize_struct(reader.getVkpipelineinfokhr());
        return result;
    

    case PNext::VKPIPELINEEXECUTABLEPROPERTIESKHR:
        result=(VkPipelineExecutablePropertiesKHR*)malloc(sizeof(VkPipelineExecutablePropertiesKHR));
        result[0]=deserialize_struct(reader.getVkpipelineexecutablepropertieskhr());
        return result;
    

    case PNext::VKPIPELINEEXECUTABLEINFOKHR:
        result=(VkPipelineExecutableInfoKHR*)malloc(sizeof(VkPipelineExecutableInfoKHR));
        result[0]=deserialize_struct(reader.getVkpipelineexecutableinfokhr());
        return result;
    

    case PNext::VKPIPELINEEXECUTABLESTATISTICVALUEKHR:
        result=(VkPipelineExecutableStatisticValueKHR*)malloc(sizeof(VkPipelineExecutableStatisticValueKHR));
        result[0]=deserialize_struct(reader.getVkpipelineexecutablestatisticvaluekhr());
        return result;
    

    case PNext::VKPIPELINEEXECUTABLESTATISTICKHR:
        result=(VkPipelineExecutableStatisticKHR*)malloc(sizeof(VkPipelineExecutableStatisticKHR));
        result[0]=deserialize_struct(reader.getVkpipelineexecutablestatistickhr());
        return result;
    

    case PNext::VKPIPELINEEXECUTABLEINTERNALREPRESENTATIONKHR:
        result=(VkPipelineExecutableInternalRepresentationKHR*)malloc(sizeof(VkPipelineExecutableInternalRepresentationKHR));
        result[0]=deserialize_struct(reader.getVkpipelineexecutableinternalrepresentationkhr());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERDEMOTETOHELPERINVOCATIONFEATURES:
        result=(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures*)malloc(sizeof(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshaderdemotetohelperinvocationfeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICETEXELBUFFERALIGNMENTFEATURESEXT:
        result=(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicetexelbufferalignmentfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICETEXELBUFFERALIGNMENTPROPERTIES:
        result=(VkPhysicalDeviceTexelBufferAlignmentProperties*)malloc(sizeof(VkPhysicalDeviceTexelBufferAlignmentProperties));
        result[0]=deserialize_struct(reader.getVkphysicaldevicetexelbufferalignmentproperties());
        return result;
    

    case PNext::VKPHYSICALDEVICESUBGROUPSIZECONTROLFEATURES:
        result=(VkPhysicalDeviceSubgroupSizeControlFeatures*)malloc(sizeof(VkPhysicalDeviceSubgroupSizeControlFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldevicesubgroupsizecontrolfeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICESUBGROUPSIZECONTROLPROPERTIES:
        result=(VkPhysicalDeviceSubgroupSizeControlProperties*)malloc(sizeof(VkPhysicalDeviceSubgroupSizeControlProperties));
        result[0]=deserialize_struct(reader.getVkphysicaldevicesubgroupsizecontrolproperties());
        return result;
    

    case PNext::VKPIPELINESHADERSTAGEREQUIREDSUBGROUPSIZECREATEINFO:
        result=(VkPipelineShaderStageRequiredSubgroupSizeCreateInfo*)malloc(sizeof(VkPipelineShaderStageRequiredSubgroupSizeCreateInfo));
        result[0]=deserialize_struct(reader.getVkpipelineshaderstagerequiredsubgroupsizecreateinfo());
        return result;
    

    case PNext::VKSUBPASSSHADINGPIPELINECREATEINFOHUAWEI:
        result=(VkSubpassShadingPipelineCreateInfoHUAWEI*)malloc(sizeof(VkSubpassShadingPipelineCreateInfoHUAWEI));
        result[0]=deserialize_struct(reader.getVksubpassshadingpipelinecreateinfohuawei());
        return result;
    

    case PNext::VKPHYSICALDEVICESUBPASSSHADINGPROPERTIESHUAWEI:
        result=(VkPhysicalDeviceSubpassShadingPropertiesHUAWEI*)malloc(sizeof(VkPhysicalDeviceSubpassShadingPropertiesHUAWEI));
        result[0]=deserialize_struct(reader.getVkphysicaldevicesubpassshadingpropertieshuawei());
        return result;
    

    case PNext::VKPHYSICALDEVICECLUSTERCULLINGSHADERPROPERTIESHUAWEI:
        result=(VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI*)malloc(sizeof(VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceclustercullingshaderpropertieshuawei());
        return result;
    

    case PNext::VKMEMORYOPAQUECAPTUREADDRESSALLOCATEINFO:
        result=(VkMemoryOpaqueCaptureAddressAllocateInfo*)malloc(sizeof(VkMemoryOpaqueCaptureAddressAllocateInfo));
        result[0]=deserialize_struct(reader.getVkmemoryopaquecaptureaddressallocateinfo());
        return result;
    

    case PNext::VKDEVICEMEMORYOPAQUECAPTUREADDRESSINFO:
        result=(VkDeviceMemoryOpaqueCaptureAddressInfo*)malloc(sizeof(VkDeviceMemoryOpaqueCaptureAddressInfo));
        result[0]=deserialize_struct(reader.getVkdevicememoryopaquecaptureaddressinfo());
        return result;
    

    case PNext::VKPHYSICALDEVICELINERASTERIZATIONFEATURESEXT:
        result=(VkPhysicalDeviceLineRasterizationFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceLineRasterizationFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicelinerasterizationfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICELINERASTERIZATIONPROPERTIESEXT:
        result=(VkPhysicalDeviceLineRasterizationPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceLineRasterizationPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicelinerasterizationpropertiesext());
        return result;
    

    case PNext::VKPIPELINERASTERIZATIONLINESTATECREATEINFOEXT:
        result=(VkPipelineRasterizationLineStateCreateInfoEXT*)malloc(sizeof(VkPipelineRasterizationLineStateCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkpipelinerasterizationlinestatecreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICEPIPELINECREATIONCACHECONTROLFEATURES:
        result=(VkPhysicalDevicePipelineCreationCacheControlFeatures*)malloc(sizeof(VkPhysicalDevicePipelineCreationCacheControlFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldevicepipelinecreationcachecontrolfeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICEVULKAN11FEATURES:
        result=(VkPhysicalDeviceVulkan11Features*)malloc(sizeof(VkPhysicalDeviceVulkan11Features));
        result[0]=deserialize_struct(reader.getVkphysicaldevicevulkan11Features());
        return result;
    

    case PNext::VKPHYSICALDEVICEVULKAN11PROPERTIES:
        result=(VkPhysicalDeviceVulkan11Properties*)malloc(sizeof(VkPhysicalDeviceVulkan11Properties));
        result[0]=deserialize_struct(reader.getVkphysicaldevicevulkan11Properties());
        return result;
    

    case PNext::VKPHYSICALDEVICEVULKAN12FEATURES:
        result=(VkPhysicalDeviceVulkan12Features*)malloc(sizeof(VkPhysicalDeviceVulkan12Features));
        result[0]=deserialize_struct(reader.getVkphysicaldevicevulkan12Features());
        return result;
    

    case PNext::VKPHYSICALDEVICEVULKAN12PROPERTIES:
        result=(VkPhysicalDeviceVulkan12Properties*)malloc(sizeof(VkPhysicalDeviceVulkan12Properties));
        result[0]=deserialize_struct(reader.getVkphysicaldevicevulkan12Properties());
        return result;
    

    case PNext::VKPHYSICALDEVICEVULKAN13FEATURES:
        result=(VkPhysicalDeviceVulkan13Features*)malloc(sizeof(VkPhysicalDeviceVulkan13Features));
        result[0]=deserialize_struct(reader.getVkphysicaldevicevulkan13Features());
        return result;
    

    case PNext::VKPHYSICALDEVICEVULKAN13PROPERTIES:
        result=(VkPhysicalDeviceVulkan13Properties*)malloc(sizeof(VkPhysicalDeviceVulkan13Properties));
        result[0]=deserialize_struct(reader.getVkphysicaldevicevulkan13Properties());
        return result;
    

    case PNext::VKPIPELINECOMPILERCONTROLCREATEINFOAMD:
        result=(VkPipelineCompilerControlCreateInfoAMD*)malloc(sizeof(VkPipelineCompilerControlCreateInfoAMD));
        result[0]=deserialize_struct(reader.getVkpipelinecompilercontrolcreateinfoamd());
        return result;
    

    case PNext::VKPHYSICALDEVICECOHERENTMEMORYFEATURESAMD:
        result=(VkPhysicalDeviceCoherentMemoryFeaturesAMD*)malloc(sizeof(VkPhysicalDeviceCoherentMemoryFeaturesAMD));
        result[0]=deserialize_struct(reader.getVkphysicaldevicecoherentmemoryfeaturesamd());
        return result;
    

    case PNext::VKPHYSICALDEVICETOOLPROPERTIES:
        result=(VkPhysicalDeviceToolProperties*)malloc(sizeof(VkPhysicalDeviceToolProperties));
        result[0]=deserialize_struct(reader.getVkphysicaldevicetoolproperties());
        return result;
    

    case PNext::VKSAMPLERCUSTOMBORDERCOLORCREATEINFOEXT:
        result=(VkSamplerCustomBorderColorCreateInfoEXT*)malloc(sizeof(VkSamplerCustomBorderColorCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVksamplercustombordercolorcreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICECUSTOMBORDERCOLORPROPERTIESEXT:
        result=(VkPhysicalDeviceCustomBorderColorPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceCustomBorderColorPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicecustombordercolorpropertiesext());
        return result;
    

    case PNext::VKPHYSICALDEVICECUSTOMBORDERCOLORFEATURESEXT:
        result=(VkPhysicalDeviceCustomBorderColorFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceCustomBorderColorFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicecustombordercolorfeaturesext());
        return result;
    

    case PNext::VKSAMPLERBORDERCOLORCOMPONENTMAPPINGCREATEINFOEXT:
        result=(VkSamplerBorderColorComponentMappingCreateInfoEXT*)malloc(sizeof(VkSamplerBorderColorComponentMappingCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVksamplerbordercolorcomponentmappingcreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICEBORDERCOLORSWIZZLEFEATURESEXT:
        result=(VkPhysicalDeviceBorderColorSwizzleFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceBorderColorSwizzleFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicebordercolorswizzlefeaturesext());
        return result;
    

    case PNext::VKDEVICEORHOSTADDRESSKHR:
        result=(VkDeviceOrHostAddressKHR*)malloc(sizeof(VkDeviceOrHostAddressKHR));
        result[0]=deserialize_struct(reader.getVkdeviceorhostaddresskhr());
        return result;
    

    case PNext::VKDEVICEORHOSTADDRESSCONSTKHR:
        result=(VkDeviceOrHostAddressConstKHR*)malloc(sizeof(VkDeviceOrHostAddressConstKHR));
        result[0]=deserialize_struct(reader.getVkdeviceorhostaddressconstkhr());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTUREGEOMETRYTRIANGLESDATAKHR:
        result=(VkAccelerationStructureGeometryTrianglesDataKHR*)malloc(sizeof(VkAccelerationStructureGeometryTrianglesDataKHR));
        result[0]=deserialize_struct(reader.getVkaccelerationstructuregeometrytrianglesdatakhr());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTUREGEOMETRYAABBSDATAKHR:
        result=(VkAccelerationStructureGeometryAabbsDataKHR*)malloc(sizeof(VkAccelerationStructureGeometryAabbsDataKHR));
        result[0]=deserialize_struct(reader.getVkaccelerationstructuregeometryaabbsdatakhr());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTUREGEOMETRYINSTANCESDATAKHR:
        result=(VkAccelerationStructureGeometryInstancesDataKHR*)malloc(sizeof(VkAccelerationStructureGeometryInstancesDataKHR));
        result[0]=deserialize_struct(reader.getVkaccelerationstructuregeometryinstancesdatakhr());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTUREGEOMETRYDATAKHR:
        result=(VkAccelerationStructureGeometryDataKHR*)malloc(sizeof(VkAccelerationStructureGeometryDataKHR));
        result[0]=deserialize_struct(reader.getVkaccelerationstructuregeometrydatakhr());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTUREGEOMETRYKHR:
        result=(VkAccelerationStructureGeometryKHR*)malloc(sizeof(VkAccelerationStructureGeometryKHR));
        result[0]=deserialize_struct(reader.getVkaccelerationstructuregeometrykhr());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTUREBUILDGEOMETRYINFOKHR:
        result=(VkAccelerationStructureBuildGeometryInfoKHR*)malloc(sizeof(VkAccelerationStructureBuildGeometryInfoKHR));
        result[0]=deserialize_struct(reader.getVkaccelerationstructurebuildgeometryinfokhr());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTUREBUILDRANGEINFOKHR:
        result=(VkAccelerationStructureBuildRangeInfoKHR*)malloc(sizeof(VkAccelerationStructureBuildRangeInfoKHR));
        result[0]=deserialize_struct(reader.getVkaccelerationstructurebuildrangeinfokhr());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTURECREATEINFOKHR:
        result=(VkAccelerationStructureCreateInfoKHR*)malloc(sizeof(VkAccelerationStructureCreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkaccelerationstructurecreateinfokhr());
        return result;
    

    case PNext::VKAABBPOSITIONSKHR:
        result=(VkAabbPositionsKHR*)malloc(sizeof(VkAabbPositionsKHR));
        result[0]=deserialize_struct(reader.getVkaabbpositionskhr());
        return result;
    

    case PNext::VKTRANSFORMMATRIXKHR:
        result=(VkTransformMatrixKHR*)malloc(sizeof(VkTransformMatrixKHR));
        result[0]=deserialize_struct(reader.getVktransformmatrixkhr());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTUREINSTANCEKHR:
        result=(VkAccelerationStructureInstanceKHR*)malloc(sizeof(VkAccelerationStructureInstanceKHR));
        result[0]=deserialize_struct(reader.getVkaccelerationstructureinstancekhr());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTUREDEVICEADDRESSINFOKHR:
        result=(VkAccelerationStructureDeviceAddressInfoKHR*)malloc(sizeof(VkAccelerationStructureDeviceAddressInfoKHR));
        result[0]=deserialize_struct(reader.getVkaccelerationstructuredeviceaddressinfokhr());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTUREVERSIONINFOKHR:
        result=(VkAccelerationStructureVersionInfoKHR*)malloc(sizeof(VkAccelerationStructureVersionInfoKHR));
        result[0]=deserialize_struct(reader.getVkaccelerationstructureversioninfokhr());
        return result;
    

    case PNext::VKCOPYACCELERATIONSTRUCTUREINFOKHR:
        result=(VkCopyAccelerationStructureInfoKHR*)malloc(sizeof(VkCopyAccelerationStructureInfoKHR));
        result[0]=deserialize_struct(reader.getVkcopyaccelerationstructureinfokhr());
        return result;
    

    case PNext::VKCOPYACCELERATIONSTRUCTURETOMEMORYINFOKHR:
        result=(VkCopyAccelerationStructureToMemoryInfoKHR*)malloc(sizeof(VkCopyAccelerationStructureToMemoryInfoKHR));
        result[0]=deserialize_struct(reader.getVkcopyaccelerationstructuretomemoryinfokhr());
        return result;
    

    case PNext::VKCOPYMEMORYTOACCELERATIONSTRUCTUREINFOKHR:
        result=(VkCopyMemoryToAccelerationStructureInfoKHR*)malloc(sizeof(VkCopyMemoryToAccelerationStructureInfoKHR));
        result[0]=deserialize_struct(reader.getVkcopymemorytoaccelerationstructureinfokhr());
        return result;
    

    case PNext::VKRAYTRACINGPIPELINEINTERFACECREATEINFOKHR:
        result=(VkRayTracingPipelineInterfaceCreateInfoKHR*)malloc(sizeof(VkRayTracingPipelineInterfaceCreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkraytracingpipelineinterfacecreateinfokhr());
        return result;
    

    case PNext::VKPIPELINELIBRARYCREATEINFOKHR:
        result=(VkPipelineLibraryCreateInfoKHR*)malloc(sizeof(VkPipelineLibraryCreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkpipelinelibrarycreateinfokhr());
        return result;
    

    case PNext::VKPHYSICALDEVICEEXTENDEDDYNAMICSTATEFEATURESEXT:
        result=(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceextendeddynamicstatefeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEEXTENDEDDYNAMICSTATE2FEATURESEXT:
        result=(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT*)malloc(sizeof(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceextendeddynamicstate2Featuresext());
        return result;
    

    case PNext::VKPHYSICALDEVICEEXTENDEDDYNAMICSTATE3FEATURESEXT:
        result=(VkPhysicalDeviceExtendedDynamicState3FeaturesEXT*)malloc(sizeof(VkPhysicalDeviceExtendedDynamicState3FeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceextendeddynamicstate3Featuresext());
        return result;
    

    case PNext::VKPHYSICALDEVICEEXTENDEDDYNAMICSTATE3PROPERTIESEXT:
        result=(VkPhysicalDeviceExtendedDynamicState3PropertiesEXT*)malloc(sizeof(VkPhysicalDeviceExtendedDynamicState3PropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceextendeddynamicstate3Propertiesext());
        return result;
    

    case PNext::VKCOLORBLENDEQUATIONEXT:
        result=(VkColorBlendEquationEXT*)malloc(sizeof(VkColorBlendEquationEXT));
        result[0]=deserialize_struct(reader.getVkcolorblendequationext());
        return result;
    

    case PNext::VKCOLORBLENDADVANCEDEXT:
        result=(VkColorBlendAdvancedEXT*)malloc(sizeof(VkColorBlendAdvancedEXT));
        result[0]=deserialize_struct(reader.getVkcolorblendadvancedext());
        return result;
    

    case PNext::VKRENDERPASSTRANSFORMBEGININFOQCOM:
        result=(VkRenderPassTransformBeginInfoQCOM*)malloc(sizeof(VkRenderPassTransformBeginInfoQCOM));
        result[0]=deserialize_struct(reader.getVkrenderpasstransformbegininfoqcom());
        return result;
    

    case PNext::VKCOPYCOMMANDTRANSFORMINFOQCOM:
        result=(VkCopyCommandTransformInfoQCOM*)malloc(sizeof(VkCopyCommandTransformInfoQCOM));
        result[0]=deserialize_struct(reader.getVkcopycommandtransforminfoqcom());
        return result;
    

    case PNext::VKCOMMANDBUFFERINHERITANCERENDERPASSTRANSFORMINFOQCOM:
        result=(VkCommandBufferInheritanceRenderPassTransformInfoQCOM*)malloc(sizeof(VkCommandBufferInheritanceRenderPassTransformInfoQCOM));
        result[0]=deserialize_struct(reader.getVkcommandbufferinheritancerenderpasstransforminfoqcom());
        return result;
    

    case PNext::VKPHYSICALDEVICEDIAGNOSTICSCONFIGFEATURESNV:
        result=(VkPhysicalDeviceDiagnosticsConfigFeaturesNV*)malloc(sizeof(VkPhysicalDeviceDiagnosticsConfigFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicediagnosticsconfigfeaturesnv());
        return result;
    

    case PNext::VKDEVICEDIAGNOSTICSCONFIGCREATEINFONV:
        result=(VkDeviceDiagnosticsConfigCreateInfoNV*)malloc(sizeof(VkDeviceDiagnosticsConfigCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkdevicediagnosticsconfigcreateinfonv());
        return result;
    

    case PNext::VKPHYSICALDEVICEZEROINITIALIZEWORKGROUPMEMORYFEATURES:
        result=(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures*)malloc(sizeof(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldevicezeroinitializeworkgroupmemoryfeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERSUBGROUPUNIFORMCONTROLFLOWFEATURESKHR:
        result=(VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR*)malloc(sizeof(VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshadersubgroupuniformcontrolflowfeatureskhr());
        return result;
    

    case PNext::VKPHYSICALDEVICEROBUSTNESS2FEATURESEXT:
        result=(VkPhysicalDeviceRobustness2FeaturesEXT*)malloc(sizeof(VkPhysicalDeviceRobustness2FeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicerobustness2Featuresext());
        return result;
    

    case PNext::VKPHYSICALDEVICEROBUSTNESS2PROPERTIESEXT:
        result=(VkPhysicalDeviceRobustness2PropertiesEXT*)malloc(sizeof(VkPhysicalDeviceRobustness2PropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicerobustness2Propertiesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEIMAGEROBUSTNESSFEATURES:
        result=(VkPhysicalDeviceImageRobustnessFeatures*)malloc(sizeof(VkPhysicalDeviceImageRobustnessFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceimagerobustnessfeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICEWORKGROUPMEMORYEXPLICITLAYOUTFEATURESKHR:
        result=(VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR*)malloc(sizeof(VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceworkgroupmemoryexplicitlayoutfeatureskhr());
        return result;
    

    case PNext::VKPHYSICALDEVICE4444FORMATSFEATURESEXT:
        result=(VkPhysicalDevice4444FormatsFeaturesEXT*)malloc(sizeof(VkPhysicalDevice4444FormatsFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevice4444Formatsfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICESUBPASSSHADINGFEATURESHUAWEI:
        result=(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI*)malloc(sizeof(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI));
        result[0]=deserialize_struct(reader.getVkphysicaldevicesubpassshadingfeatureshuawei());
        return result;
    

    case PNext::VKPHYSICALDEVICECLUSTERCULLINGSHADERFEATURESHUAWEI:
        result=(VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI*)malloc(sizeof(VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceclustercullingshaderfeatureshuawei());
        return result;
    

    case PNext::VKBUFFERCOPY2:
        result=(VkBufferCopy2*)malloc(sizeof(VkBufferCopy2));
        result[0]=deserialize_struct(reader.getVkbuffercopy2());
        return result;
    

    case PNext::VKIMAGECOPY2:
        result=(VkImageCopy2*)malloc(sizeof(VkImageCopy2));
        result[0]=deserialize_struct(reader.getVkimagecopy2());
        return result;
    

    case PNext::VKIMAGEBLIT2:
        result=(VkImageBlit2*)malloc(sizeof(VkImageBlit2));
        result[0]=deserialize_struct(reader.getVkimageblit2());
        return result;
    

    case PNext::VKBUFFERIMAGECOPY2:
        result=(VkBufferImageCopy2*)malloc(sizeof(VkBufferImageCopy2));
        result[0]=deserialize_struct(reader.getVkbufferimagecopy2());
        return result;
    

    case PNext::VKIMAGERESOLVE2:
        result=(VkImageResolve2*)malloc(sizeof(VkImageResolve2));
        result[0]=deserialize_struct(reader.getVkimageresolve2());
        return result;
    

    case PNext::VKCOPYBUFFERINFO2:
        result=(VkCopyBufferInfo2*)malloc(sizeof(VkCopyBufferInfo2));
        result[0]=deserialize_struct(reader.getVkcopybufferinfo2());
        return result;
    

    case PNext::VKCOPYIMAGEINFO2:
        result=(VkCopyImageInfo2*)malloc(sizeof(VkCopyImageInfo2));
        result[0]=deserialize_struct(reader.getVkcopyimageinfo2());
        return result;
    

    case PNext::VKBLITIMAGEINFO2:
        result=(VkBlitImageInfo2*)malloc(sizeof(VkBlitImageInfo2));
        result[0]=deserialize_struct(reader.getVkblitimageinfo2());
        return result;
    

    case PNext::VKCOPYBUFFERTOIMAGEINFO2:
        result=(VkCopyBufferToImageInfo2*)malloc(sizeof(VkCopyBufferToImageInfo2));
        result[0]=deserialize_struct(reader.getVkcopybuffertoimageinfo2());
        return result;
    

    case PNext::VKCOPYIMAGETOBUFFERINFO2:
        result=(VkCopyImageToBufferInfo2*)malloc(sizeof(VkCopyImageToBufferInfo2));
        result[0]=deserialize_struct(reader.getVkcopyimagetobufferinfo2());
        return result;
    

    case PNext::VKRESOLVEIMAGEINFO2:
        result=(VkResolveImageInfo2*)malloc(sizeof(VkResolveImageInfo2));
        result[0]=deserialize_struct(reader.getVkresolveimageinfo2());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERIMAGEATOMICINT64FEATURESEXT:
        result=(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT*)malloc(sizeof(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshaderimageatomicint64Featuresext());
        return result;
    

    case PNext::VKFRAGMENTSHADINGRATEATTACHMENTINFOKHR:
        result=(VkFragmentShadingRateAttachmentInfoKHR*)malloc(sizeof(VkFragmentShadingRateAttachmentInfoKHR));
        result[0]=deserialize_struct(reader.getVkfragmentshadingrateattachmentinfokhr());
        return result;
    

    case PNext::VKPIPELINEFRAGMENTSHADINGRATESTATECREATEINFOKHR:
        result=(VkPipelineFragmentShadingRateStateCreateInfoKHR*)malloc(sizeof(VkPipelineFragmentShadingRateStateCreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkpipelinefragmentshadingratestatecreateinfokhr());
        return result;
    

    case PNext::VKPHYSICALDEVICEFRAGMENTSHADINGRATEFEATURESKHR:
        result=(VkPhysicalDeviceFragmentShadingRateFeaturesKHR*)malloc(sizeof(VkPhysicalDeviceFragmentShadingRateFeaturesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldevicefragmentshadingratefeatureskhr());
        return result;
    

    case PNext::VKPHYSICALDEVICEFRAGMENTSHADINGRATEPROPERTIESKHR:
        result=(VkPhysicalDeviceFragmentShadingRatePropertiesKHR*)malloc(sizeof(VkPhysicalDeviceFragmentShadingRatePropertiesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldevicefragmentshadingratepropertieskhr());
        return result;
    

    case PNext::VKPHYSICALDEVICEFRAGMENTSHADINGRATEKHR:
        result=(VkPhysicalDeviceFragmentShadingRateKHR*)malloc(sizeof(VkPhysicalDeviceFragmentShadingRateKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldevicefragmentshadingratekhr());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERTERMINATEINVOCATIONFEATURES:
        result=(VkPhysicalDeviceShaderTerminateInvocationFeatures*)malloc(sizeof(VkPhysicalDeviceShaderTerminateInvocationFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshaderterminateinvocationfeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICEFRAGMENTSHADINGRATEENUMSFEATURESNV:
        result=(VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV*)malloc(sizeof(VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicefragmentshadingrateenumsfeaturesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICEFRAGMENTSHADINGRATEENUMSPROPERTIESNV:
        result=(VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV*)malloc(sizeof(VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicefragmentshadingrateenumspropertiesnv());
        return result;
    

    case PNext::VKPIPELINEFRAGMENTSHADINGRATEENUMSTATECREATEINFONV:
        result=(VkPipelineFragmentShadingRateEnumStateCreateInfoNV*)malloc(sizeof(VkPipelineFragmentShadingRateEnumStateCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkpipelinefragmentshadingrateenumstatecreateinfonv());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTUREBUILDSIZESINFOKHR:
        result=(VkAccelerationStructureBuildSizesInfoKHR*)malloc(sizeof(VkAccelerationStructureBuildSizesInfoKHR));
        result[0]=deserialize_struct(reader.getVkaccelerationstructurebuildsizesinfokhr());
        return result;
    

    case PNext::VKPHYSICALDEVICEIMAGE2DVIEWOF3DFEATURESEXT:
        result=(VkPhysicalDeviceImage2DViewOf3DFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceImage2DViewOf3DFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceimage2Dviewof3Dfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEIMAGESLICEDVIEWOF3DFEATURESEXT:
        result=(VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceimageslicedviewof3Dfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEATTACHMENTFEEDBACKLOOPDYNAMICSTATEFEATURESEXT:
        result=(VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceattachmentfeedbackloopdynamicstatefeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEMUTABLEDESCRIPTORTYPEFEATURESEXT:
        result=(VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicemutabledescriptortypefeaturesext());
        return result;
    

    case PNext::VKMUTABLEDESCRIPTORTYPELISTEXT:
        result=(VkMutableDescriptorTypeListEXT*)malloc(sizeof(VkMutableDescriptorTypeListEXT));
        result[0]=deserialize_struct(reader.getVkmutabledescriptortypelistext());
        return result;
    

    case PNext::VKMUTABLEDESCRIPTORTYPECREATEINFOEXT:
        result=(VkMutableDescriptorTypeCreateInfoEXT*)malloc(sizeof(VkMutableDescriptorTypeCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkmutabledescriptortypecreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICEDEPTHCLIPCONTROLFEATURESEXT:
        result=(VkPhysicalDeviceDepthClipControlFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceDepthClipControlFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicedepthclipcontrolfeaturesext());
        return result;
    

    case PNext::VKPIPELINEVIEWPORTDEPTHCLIPCONTROLCREATEINFOEXT:
        result=(VkPipelineViewportDepthClipControlCreateInfoEXT*)malloc(sizeof(VkPipelineViewportDepthClipControlCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkpipelineviewportdepthclipcontrolcreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICEVERTEXINPUTDYNAMICSTATEFEATURESEXT:
        result=(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicevertexinputdynamicstatefeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEEXTERNALMEMORYRDMAFEATURESNV:
        result=(VkPhysicalDeviceExternalMemoryRDMAFeaturesNV*)malloc(sizeof(VkPhysicalDeviceExternalMemoryRDMAFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceexternalmemoryrdmafeaturesnv());
        return result;
    

    case PNext::VKVERTEXINPUTBINDINGDESCRIPTION2EXT:
        result=(VkVertexInputBindingDescription2EXT*)malloc(sizeof(VkVertexInputBindingDescription2EXT));
        result[0]=deserialize_struct(reader.getVkvertexinputbindingdescription2Ext());
        return result;
    

    case PNext::VKVERTEXINPUTATTRIBUTEDESCRIPTION2EXT:
        result=(VkVertexInputAttributeDescription2EXT*)malloc(sizeof(VkVertexInputAttributeDescription2EXT));
        result[0]=deserialize_struct(reader.getVkvertexinputattributedescription2Ext());
        return result;
    

    case PNext::VKPHYSICALDEVICECOLORWRITEENABLEFEATURESEXT:
        result=(VkPhysicalDeviceColorWriteEnableFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceColorWriteEnableFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicecolorwriteenablefeaturesext());
        return result;
    

    case PNext::VKPIPELINECOLORWRITECREATEINFOEXT:
        result=(VkPipelineColorWriteCreateInfoEXT*)malloc(sizeof(VkPipelineColorWriteCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkpipelinecolorwritecreateinfoext());
        return result;
    

    case PNext::VKMEMORYBARRIER2:
        result=(VkMemoryBarrier2*)malloc(sizeof(VkMemoryBarrier2));
        result[0]=deserialize_struct(reader.getVkmemorybarrier2());
        return result;
    

    case PNext::VKIMAGEMEMORYBARRIER2:
        result=(VkImageMemoryBarrier2*)malloc(sizeof(VkImageMemoryBarrier2));
        result[0]=deserialize_struct(reader.getVkimagememorybarrier2());
        return result;
    

    case PNext::VKBUFFERMEMORYBARRIER2:
        result=(VkBufferMemoryBarrier2*)malloc(sizeof(VkBufferMemoryBarrier2));
        result[0]=deserialize_struct(reader.getVkbuffermemorybarrier2());
        return result;
    

    case PNext::VKDEPENDENCYINFO:
        result=(VkDependencyInfo*)malloc(sizeof(VkDependencyInfo));
        result[0]=deserialize_struct(reader.getVkdependencyinfo());
        return result;
    

    case PNext::VKSEMAPHORESUBMITINFO:
        result=(VkSemaphoreSubmitInfo*)malloc(sizeof(VkSemaphoreSubmitInfo));
        result[0]=deserialize_struct(reader.getVksemaphoresubmitinfo());
        return result;
    

    case PNext::VKCOMMANDBUFFERSUBMITINFO:
        result=(VkCommandBufferSubmitInfo*)malloc(sizeof(VkCommandBufferSubmitInfo));
        result[0]=deserialize_struct(reader.getVkcommandbuffersubmitinfo());
        return result;
    

    case PNext::VKSUBMITINFO2:
        result=(VkSubmitInfo2*)malloc(sizeof(VkSubmitInfo2));
        result[0]=deserialize_struct(reader.getVksubmitinfo2());
        return result;
    

    case PNext::VKQUEUEFAMILYCHECKPOINTPROPERTIES2NV:
        result=(VkQueueFamilyCheckpointProperties2NV*)malloc(sizeof(VkQueueFamilyCheckpointProperties2NV));
        result[0]=deserialize_struct(reader.getVkqueuefamilycheckpointproperties2Nv());
        return result;
    

    case PNext::VKCHECKPOINTDATA2NV:
        result=(VkCheckpointData2NV*)malloc(sizeof(VkCheckpointData2NV));
        result[0]=deserialize_struct(reader.getVkcheckpointdata2Nv());
        return result;
    

    case PNext::VKPHYSICALDEVICESYNCHRONIZATION2FEATURES:
        result=(VkPhysicalDeviceSynchronization2Features*)malloc(sizeof(VkPhysicalDeviceSynchronization2Features));
        result[0]=deserialize_struct(reader.getVkphysicaldevicesynchronization2Features());
        return result;
    

    case PNext::VKPHYSICALDEVICEHOSTIMAGECOPYFEATURESEXT:
        result=(VkPhysicalDeviceHostImageCopyFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceHostImageCopyFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicehostimagecopyfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEHOSTIMAGECOPYPROPERTIESEXT:
        result=(VkPhysicalDeviceHostImageCopyPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceHostImageCopyPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicehostimagecopypropertiesext());
        return result;
    

    case PNext::VKMEMORYTOIMAGECOPYEXT:
        result=(VkMemoryToImageCopyEXT*)malloc(sizeof(VkMemoryToImageCopyEXT));
        result[0]=deserialize_struct(reader.getVkmemorytoimagecopyext());
        return result;
    

    case PNext::VKIMAGETOMEMORYCOPYEXT:
        result=(VkImageToMemoryCopyEXT*)malloc(sizeof(VkImageToMemoryCopyEXT));
        result[0]=deserialize_struct(reader.getVkimagetomemorycopyext());
        return result;
    

    case PNext::VKCOPYMEMORYTOIMAGEINFOEXT:
        result=(VkCopyMemoryToImageInfoEXT*)malloc(sizeof(VkCopyMemoryToImageInfoEXT));
        result[0]=deserialize_struct(reader.getVkcopymemorytoimageinfoext());
        return result;
    

    case PNext::VKCOPYIMAGETOMEMORYINFOEXT:
        result=(VkCopyImageToMemoryInfoEXT*)malloc(sizeof(VkCopyImageToMemoryInfoEXT));
        result[0]=deserialize_struct(reader.getVkcopyimagetomemoryinfoext());
        return result;
    

    case PNext::VKCOPYIMAGETOIMAGEINFOEXT:
        result=(VkCopyImageToImageInfoEXT*)malloc(sizeof(VkCopyImageToImageInfoEXT));
        result[0]=deserialize_struct(reader.getVkcopyimagetoimageinfoext());
        return result;
    

    case PNext::VKHOSTIMAGELAYOUTTRANSITIONINFOEXT:
        result=(VkHostImageLayoutTransitionInfoEXT*)malloc(sizeof(VkHostImageLayoutTransitionInfoEXT));
        result[0]=deserialize_struct(reader.getVkhostimagelayouttransitioninfoext());
        return result;
    

    case PNext::VKSUBRESOURCEHOSTMEMCPYSIZEEXT:
        result=(VkSubresourceHostMemcpySizeEXT*)malloc(sizeof(VkSubresourceHostMemcpySizeEXT));
        result[0]=deserialize_struct(reader.getVksubresourcehostmemcpysizeext());
        return result;
    

    case PNext::VKHOSTIMAGECOPYDEVICEPERFORMANCEQUERYEXT:
        result=(VkHostImageCopyDevicePerformanceQueryEXT*)malloc(sizeof(VkHostImageCopyDevicePerformanceQueryEXT));
        result[0]=deserialize_struct(reader.getVkhostimagecopydeviceperformancequeryext());
        return result;
    

    case PNext::VKPHYSICALDEVICEPRIMITIVESGENERATEDQUERYFEATURESEXT:
        result=(VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT*)malloc(sizeof(VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceprimitivesgeneratedqueryfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICELEGACYDITHERINGFEATURESEXT:
        result=(VkPhysicalDeviceLegacyDitheringFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceLegacyDitheringFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicelegacyditheringfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEMULTISAMPLEDRENDERTOSINGLESAMPLEDFEATURESEXT:
        result=(VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicemultisampledrendertosinglesampledfeaturesext());
        return result;
    

    case PNext::VKSUBPASSRESOLVEPERFORMANCEQUERYEXT:
        result=(VkSubpassResolvePerformanceQueryEXT*)malloc(sizeof(VkSubpassResolvePerformanceQueryEXT));
        result[0]=deserialize_struct(reader.getVksubpassresolveperformancequeryext());
        return result;
    

    case PNext::VKMULTISAMPLEDRENDERTOSINGLESAMPLEDINFOEXT:
        result=(VkMultisampledRenderToSingleSampledInfoEXT*)malloc(sizeof(VkMultisampledRenderToSingleSampledInfoEXT));
        result[0]=deserialize_struct(reader.getVkmultisampledrendertosinglesampledinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICEPIPELINEPROTECTEDACCESSFEATURESEXT:
        result=(VkPhysicalDevicePipelineProtectedAccessFeaturesEXT*)malloc(sizeof(VkPhysicalDevicePipelineProtectedAccessFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicepipelineprotectedaccessfeaturesext());
        return result;
    

    case PNext::VKQUEUEFAMILYVIDEOPROPERTIESKHR:
        result=(VkQueueFamilyVideoPropertiesKHR*)malloc(sizeof(VkQueueFamilyVideoPropertiesKHR));
        result[0]=deserialize_struct(reader.getVkqueuefamilyvideopropertieskhr());
        return result;
    

    case PNext::VKQUEUEFAMILYQUERYRESULTSTATUSPROPERTIESKHR:
        result=(VkQueueFamilyQueryResultStatusPropertiesKHR*)malloc(sizeof(VkQueueFamilyQueryResultStatusPropertiesKHR));
        result[0]=deserialize_struct(reader.getVkqueuefamilyqueryresultstatuspropertieskhr());
        return result;
    

    case PNext::VKVIDEOPROFILELISTINFOKHR:
        result=(VkVideoProfileListInfoKHR*)malloc(sizeof(VkVideoProfileListInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideoprofilelistinfokhr());
        return result;
    

    case PNext::VKPHYSICALDEVICEVIDEOFORMATINFOKHR:
        result=(VkPhysicalDeviceVideoFormatInfoKHR*)malloc(sizeof(VkPhysicalDeviceVideoFormatInfoKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldevicevideoformatinfokhr());
        return result;
    

    case PNext::VKVIDEOFORMATPROPERTIESKHR:
        result=(VkVideoFormatPropertiesKHR*)malloc(sizeof(VkVideoFormatPropertiesKHR));
        result[0]=deserialize_struct(reader.getVkvideoformatpropertieskhr());
        return result;
    

    case PNext::VKVIDEOPROFILEINFOKHR:
        result=(VkVideoProfileInfoKHR*)malloc(sizeof(VkVideoProfileInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideoprofileinfokhr());
        return result;
    

    case PNext::VKVIDEOCAPABILITIESKHR:
        result=(VkVideoCapabilitiesKHR*)malloc(sizeof(VkVideoCapabilitiesKHR));
        result[0]=deserialize_struct(reader.getVkvideocapabilitieskhr());
        return result;
    

    case PNext::VKVIDEOSESSIONMEMORYREQUIREMENTSKHR:
        result=(VkVideoSessionMemoryRequirementsKHR*)malloc(sizeof(VkVideoSessionMemoryRequirementsKHR));
        result[0]=deserialize_struct(reader.getVkvideosessionmemoryrequirementskhr());
        return result;
    

    case PNext::VKBINDVIDEOSESSIONMEMORYINFOKHR:
        result=(VkBindVideoSessionMemoryInfoKHR*)malloc(sizeof(VkBindVideoSessionMemoryInfoKHR));
        result[0]=deserialize_struct(reader.getVkbindvideosessionmemoryinfokhr());
        return result;
    

    case PNext::VKVIDEOPICTURERESOURCEINFOKHR:
        result=(VkVideoPictureResourceInfoKHR*)malloc(sizeof(VkVideoPictureResourceInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideopictureresourceinfokhr());
        return result;
    

    case PNext::VKVIDEOREFERENCESLOTINFOKHR:
        result=(VkVideoReferenceSlotInfoKHR*)malloc(sizeof(VkVideoReferenceSlotInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideoreferenceslotinfokhr());
        return result;
    

    case PNext::VKVIDEODECODECAPABILITIESKHR:
        result=(VkVideoDecodeCapabilitiesKHR*)malloc(sizeof(VkVideoDecodeCapabilitiesKHR));
        result[0]=deserialize_struct(reader.getVkvideodecodecapabilitieskhr());
        return result;
    

    case PNext::VKVIDEODECODEUSAGEINFOKHR:
        result=(VkVideoDecodeUsageInfoKHR*)malloc(sizeof(VkVideoDecodeUsageInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideodecodeusageinfokhr());
        return result;
    

    case PNext::VKVIDEODECODEINFOKHR:
        result=(VkVideoDecodeInfoKHR*)malloc(sizeof(VkVideoDecodeInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideodecodeinfokhr());
        return result;
    

    case PNext::VKVIDEODECODEH264PROFILEINFOKHR:
        result=(VkVideoDecodeH264ProfileInfoKHR*)malloc(sizeof(VkVideoDecodeH264ProfileInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideodecodeh264Profileinfokhr());
        return result;
    

    case PNext::VKVIDEODECODEH264CAPABILITIESKHR:
        result=(VkVideoDecodeH264CapabilitiesKHR*)malloc(sizeof(VkVideoDecodeH264CapabilitiesKHR));
        result[0]=deserialize_struct(reader.getVkvideodecodeh264Capabilitieskhr());
        return result;
    

    case PNext::VKVIDEODECODEH264SESSIONPARAMETERSADDINFOKHR:
        result=(VkVideoDecodeH264SessionParametersAddInfoKHR*)malloc(sizeof(VkVideoDecodeH264SessionParametersAddInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideodecodeh264Sessionparametersaddinfokhr());
        return result;
    

    case PNext::VKVIDEODECODEH264SESSIONPARAMETERSCREATEINFOKHR:
        result=(VkVideoDecodeH264SessionParametersCreateInfoKHR*)malloc(sizeof(VkVideoDecodeH264SessionParametersCreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideodecodeh264Sessionparameterscreateinfokhr());
        return result;
    

    case PNext::VKVIDEODECODEH264PICTUREINFOKHR:
        result=(VkVideoDecodeH264PictureInfoKHR*)malloc(sizeof(VkVideoDecodeH264PictureInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideodecodeh264Pictureinfokhr());
        return result;
    

    case PNext::VKVIDEODECODEH264DPBSLOTINFOKHR:
        result=(VkVideoDecodeH264DpbSlotInfoKHR*)malloc(sizeof(VkVideoDecodeH264DpbSlotInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideodecodeh264Dpbslotinfokhr());
        return result;
    

    case PNext::VKVIDEODECODEH265PROFILEINFOKHR:
        result=(VkVideoDecodeH265ProfileInfoKHR*)malloc(sizeof(VkVideoDecodeH265ProfileInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideodecodeh265Profileinfokhr());
        return result;
    

    case PNext::VKVIDEODECODEH265CAPABILITIESKHR:
        result=(VkVideoDecodeH265CapabilitiesKHR*)malloc(sizeof(VkVideoDecodeH265CapabilitiesKHR));
        result[0]=deserialize_struct(reader.getVkvideodecodeh265Capabilitieskhr());
        return result;
    

    case PNext::VKVIDEODECODEH265SESSIONPARAMETERSADDINFOKHR:
        result=(VkVideoDecodeH265SessionParametersAddInfoKHR*)malloc(sizeof(VkVideoDecodeH265SessionParametersAddInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideodecodeh265Sessionparametersaddinfokhr());
        return result;
    

    case PNext::VKVIDEODECODEH265SESSIONPARAMETERSCREATEINFOKHR:
        result=(VkVideoDecodeH265SessionParametersCreateInfoKHR*)malloc(sizeof(VkVideoDecodeH265SessionParametersCreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideodecodeh265Sessionparameterscreateinfokhr());
        return result;
    

    case PNext::VKVIDEODECODEH265PICTUREINFOKHR:
        result=(VkVideoDecodeH265PictureInfoKHR*)malloc(sizeof(VkVideoDecodeH265PictureInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideodecodeh265Pictureinfokhr());
        return result;
    

    case PNext::VKVIDEODECODEH265DPBSLOTINFOKHR:
        result=(VkVideoDecodeH265DpbSlotInfoKHR*)malloc(sizeof(VkVideoDecodeH265DpbSlotInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideodecodeh265Dpbslotinfokhr());
        return result;
    

    case PNext::VKVIDEOSESSIONCREATEINFOKHR:
        result=(VkVideoSessionCreateInfoKHR*)malloc(sizeof(VkVideoSessionCreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideosessioncreateinfokhr());
        return result;
    

    case PNext::VKVIDEOSESSIONPARAMETERSCREATEINFOKHR:
        result=(VkVideoSessionParametersCreateInfoKHR*)malloc(sizeof(VkVideoSessionParametersCreateInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideosessionparameterscreateinfokhr());
        return result;
    

    case PNext::VKVIDEOSESSIONPARAMETERSUPDATEINFOKHR:
        result=(VkVideoSessionParametersUpdateInfoKHR*)malloc(sizeof(VkVideoSessionParametersUpdateInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideosessionparametersupdateinfokhr());
        return result;
    

    case PNext::VKVIDEOBEGINCODINGINFOKHR:
        result=(VkVideoBeginCodingInfoKHR*)malloc(sizeof(VkVideoBeginCodingInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideobegincodinginfokhr());
        return result;
    

    case PNext::VKVIDEOENDCODINGINFOKHR:
        result=(VkVideoEndCodingInfoKHR*)malloc(sizeof(VkVideoEndCodingInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideoendcodinginfokhr());
        return result;
    

    case PNext::VKVIDEOCODINGCONTROLINFOKHR:
        result=(VkVideoCodingControlInfoKHR*)malloc(sizeof(VkVideoCodingControlInfoKHR));
        result[0]=deserialize_struct(reader.getVkvideocodingcontrolinfokhr());
        return result;
    

    case PNext::VKPHYSICALDEVICEINHERITEDVIEWPORTSCISSORFEATURESNV:
        result=(VkPhysicalDeviceInheritedViewportScissorFeaturesNV*)malloc(sizeof(VkPhysicalDeviceInheritedViewportScissorFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceinheritedviewportscissorfeaturesnv());
        return result;
    

    case PNext::VKCOMMANDBUFFERINHERITANCEVIEWPORTSCISSORINFONV:
        result=(VkCommandBufferInheritanceViewportScissorInfoNV*)malloc(sizeof(VkCommandBufferInheritanceViewportScissorInfoNV));
        result[0]=deserialize_struct(reader.getVkcommandbufferinheritanceviewportscissorinfonv());
        return result;
    

    case PNext::VKPHYSICALDEVICEYCBCR2PLANE444FORMATSFEATURESEXT:
        result=(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceycbcr2Plane444Formatsfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEPROVOKINGVERTEXFEATURESEXT:
        result=(VkPhysicalDeviceProvokingVertexFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceProvokingVertexFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceprovokingvertexfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEPROVOKINGVERTEXPROPERTIESEXT:
        result=(VkPhysicalDeviceProvokingVertexPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceProvokingVertexPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceprovokingvertexpropertiesext());
        return result;
    

    case PNext::VKPIPELINERASTERIZATIONPROVOKINGVERTEXSTATECREATEINFOEXT:
        result=(VkPipelineRasterizationProvokingVertexStateCreateInfoEXT*)malloc(sizeof(VkPipelineRasterizationProvokingVertexStateCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkpipelinerasterizationprovokingvertexstatecreateinfoext());
        return result;
    

    case PNext::VKCUMODULECREATEINFONVX:
        result=(VkCuModuleCreateInfoNVX*)malloc(sizeof(VkCuModuleCreateInfoNVX));
        result[0]=deserialize_struct(reader.getVkcumodulecreateinfonvx());
        return result;
    

    case PNext::VKCUFUNCTIONCREATEINFONVX:
        result=(VkCuFunctionCreateInfoNVX*)malloc(sizeof(VkCuFunctionCreateInfoNVX));
        result[0]=deserialize_struct(reader.getVkcufunctioncreateinfonvx());
        return result;
    

    case PNext::VKCULAUNCHINFONVX:
        result=(VkCuLaunchInfoNVX*)malloc(sizeof(VkCuLaunchInfoNVX));
        result[0]=deserialize_struct(reader.getVkculaunchinfonvx());
        return result;
    

    case PNext::VKPHYSICALDEVICEDESCRIPTORBUFFERFEATURESEXT:
        result=(VkPhysicalDeviceDescriptorBufferFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceDescriptorBufferFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicedescriptorbufferfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEDESCRIPTORBUFFERPROPERTIESEXT:
        result=(VkPhysicalDeviceDescriptorBufferPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceDescriptorBufferPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicedescriptorbufferpropertiesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEDESCRIPTORBUFFERDENSITYMAPPROPERTIESEXT:
        result=(VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicedescriptorbufferdensitymappropertiesext());
        return result;
    

    case PNext::VKDESCRIPTORADDRESSINFOEXT:
        result=(VkDescriptorAddressInfoEXT*)malloc(sizeof(VkDescriptorAddressInfoEXT));
        result[0]=deserialize_struct(reader.getVkdescriptoraddressinfoext());
        return result;
    

    case PNext::VKDESCRIPTORBUFFERBINDINGINFOEXT:
        result=(VkDescriptorBufferBindingInfoEXT*)malloc(sizeof(VkDescriptorBufferBindingInfoEXT));
        result[0]=deserialize_struct(reader.getVkdescriptorbufferbindinginfoext());
        return result;
    

    case PNext::VKDESCRIPTORBUFFERBINDINGPUSHDESCRIPTORBUFFERHANDLEEXT:
        result=(VkDescriptorBufferBindingPushDescriptorBufferHandleEXT*)malloc(sizeof(VkDescriptorBufferBindingPushDescriptorBufferHandleEXT));
        result[0]=deserialize_struct(reader.getVkdescriptorbufferbindingpushdescriptorbufferhandleext());
        return result;
    

    case PNext::VKDESCRIPTORDATAEXT:
        result=(VkDescriptorDataEXT*)malloc(sizeof(VkDescriptorDataEXT));
        result[0]=deserialize_struct(reader.getVkdescriptordataext());
        return result;
    

    case PNext::VKDESCRIPTORGETINFOEXT:
        result=(VkDescriptorGetInfoEXT*)malloc(sizeof(VkDescriptorGetInfoEXT));
        result[0]=deserialize_struct(reader.getVkdescriptorgetinfoext());
        return result;
    

    case PNext::VKBUFFERCAPTUREDESCRIPTORDATAINFOEXT:
        result=(VkBufferCaptureDescriptorDataInfoEXT*)malloc(sizeof(VkBufferCaptureDescriptorDataInfoEXT));
        result[0]=deserialize_struct(reader.getVkbuffercapturedescriptordatainfoext());
        return result;
    

    case PNext::VKIMAGECAPTUREDESCRIPTORDATAINFOEXT:
        result=(VkImageCaptureDescriptorDataInfoEXT*)malloc(sizeof(VkImageCaptureDescriptorDataInfoEXT));
        result[0]=deserialize_struct(reader.getVkimagecapturedescriptordatainfoext());
        return result;
    

    case PNext::VKIMAGEVIEWCAPTUREDESCRIPTORDATAINFOEXT:
        result=(VkImageViewCaptureDescriptorDataInfoEXT*)malloc(sizeof(VkImageViewCaptureDescriptorDataInfoEXT));
        result[0]=deserialize_struct(reader.getVkimageviewcapturedescriptordatainfoext());
        return result;
    

    case PNext::VKSAMPLERCAPTUREDESCRIPTORDATAINFOEXT:
        result=(VkSamplerCaptureDescriptorDataInfoEXT*)malloc(sizeof(VkSamplerCaptureDescriptorDataInfoEXT));
        result[0]=deserialize_struct(reader.getVksamplercapturedescriptordatainfoext());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTURECAPTUREDESCRIPTORDATAINFOEXT:
        result=(VkAccelerationStructureCaptureDescriptorDataInfoEXT*)malloc(sizeof(VkAccelerationStructureCaptureDescriptorDataInfoEXT));
        result[0]=deserialize_struct(reader.getVkaccelerationstructurecapturedescriptordatainfoext());
        return result;
    

    case PNext::VKOPAQUECAPTUREDESCRIPTORDATACREATEINFOEXT:
        result=(VkOpaqueCaptureDescriptorDataCreateInfoEXT*)malloc(sizeof(VkOpaqueCaptureDescriptorDataCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkopaquecapturedescriptordatacreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERINTEGERDOTPRODUCTFEATURES:
        result=(VkPhysicalDeviceShaderIntegerDotProductFeatures*)malloc(sizeof(VkPhysicalDeviceShaderIntegerDotProductFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshaderintegerdotproductfeatures());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERINTEGERDOTPRODUCTPROPERTIES:
        result=(VkPhysicalDeviceShaderIntegerDotProductProperties*)malloc(sizeof(VkPhysicalDeviceShaderIntegerDotProductProperties));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshaderintegerdotproductproperties());
        return result;
    

    case PNext::VKPHYSICALDEVICEDRMPROPERTIESEXT:
        result=(VkPhysicalDeviceDrmPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceDrmPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicedrmpropertiesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEFRAGMENTSHADERBARYCENTRICFEATURESKHR:
        result=(VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR*)malloc(sizeof(VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldevicefragmentshaderbarycentricfeatureskhr());
        return result;
    

    case PNext::VKPHYSICALDEVICEFRAGMENTSHADERBARYCENTRICPROPERTIESKHR:
        result=(VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR*)malloc(sizeof(VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldevicefragmentshaderbarycentricpropertieskhr());
        return result;
    

    case PNext::VKPHYSICALDEVICERAYTRACINGMOTIONBLURFEATURESNV:
        result=(VkPhysicalDeviceRayTracingMotionBlurFeaturesNV*)malloc(sizeof(VkPhysicalDeviceRayTracingMotionBlurFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceraytracingmotionblurfeaturesnv());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTUREGEOMETRYMOTIONTRIANGLESDATANV:
        result=(VkAccelerationStructureGeometryMotionTrianglesDataNV*)malloc(sizeof(VkAccelerationStructureGeometryMotionTrianglesDataNV));
        result[0]=deserialize_struct(reader.getVkaccelerationstructuregeometrymotiontrianglesdatanv());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTUREMOTIONINFONV:
        result=(VkAccelerationStructureMotionInfoNV*)malloc(sizeof(VkAccelerationStructureMotionInfoNV));
        result[0]=deserialize_struct(reader.getVkaccelerationstructuremotioninfonv());
        return result;
    

    case PNext::VKSRTDATANV:
        result=(VkSRTDataNV*)malloc(sizeof(VkSRTDataNV));
        result[0]=deserialize_struct(reader.getVksrtdatanv());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTURESRTMOTIONINSTANCENV:
        result=(VkAccelerationStructureSRTMotionInstanceNV*)malloc(sizeof(VkAccelerationStructureSRTMotionInstanceNV));
        result[0]=deserialize_struct(reader.getVkaccelerationstructuresrtmotioninstancenv());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTUREMATRIXMOTIONINSTANCENV:
        result=(VkAccelerationStructureMatrixMotionInstanceNV*)malloc(sizeof(VkAccelerationStructureMatrixMotionInstanceNV));
        result[0]=deserialize_struct(reader.getVkaccelerationstructurematrixmotioninstancenv());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTUREMOTIONINSTANCEDATANV:
        result=(VkAccelerationStructureMotionInstanceDataNV*)malloc(sizeof(VkAccelerationStructureMotionInstanceDataNV));
        result[0]=deserialize_struct(reader.getVkaccelerationstructuremotioninstancedatanv());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTUREMOTIONINSTANCENV:
        result=(VkAccelerationStructureMotionInstanceNV*)malloc(sizeof(VkAccelerationStructureMotionInstanceNV));
        result[0]=deserialize_struct(reader.getVkaccelerationstructuremotioninstancenv());
        return result;
    

    case PNext::VKMEMORYGETREMOTEADDRESSINFONV:
        result=(VkMemoryGetRemoteAddressInfoNV*)malloc(sizeof(VkMemoryGetRemoteAddressInfoNV));
        result[0]=deserialize_struct(reader.getVkmemorygetremoteaddressinfonv());
        return result;
    

    case PNext::VKPHYSICALDEVICERGBA10X6FORMATSFEATURESEXT:
        result=(VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicergba10X6Formatsfeaturesext());
        return result;
    

    case PNext::VKFORMATPROPERTIES3:
        result=(VkFormatProperties3*)malloc(sizeof(VkFormatProperties3));
        result[0]=deserialize_struct(reader.getVkformatproperties3());
        return result;
    

    case PNext::VKDRMFORMATMODIFIERPROPERTIESLIST2EXT:
        result=(VkDrmFormatModifierPropertiesList2EXT*)malloc(sizeof(VkDrmFormatModifierPropertiesList2EXT));
        result[0]=deserialize_struct(reader.getVkdrmformatmodifierpropertieslist2Ext());
        return result;
    

    case PNext::VKDRMFORMATMODIFIERPROPERTIES2EXT:
        result=(VkDrmFormatModifierProperties2EXT*)malloc(sizeof(VkDrmFormatModifierProperties2EXT));
        result[0]=deserialize_struct(reader.getVkdrmformatmodifierproperties2Ext());
        return result;
    

    case PNext::VKPIPELINERENDERINGCREATEINFO:
        result=(VkPipelineRenderingCreateInfo*)malloc(sizeof(VkPipelineRenderingCreateInfo));
        result[0]=deserialize_struct(reader.getVkpipelinerenderingcreateinfo());
        return result;
    

    case PNext::VKRENDERINGINFO:
        result=(VkRenderingInfo*)malloc(sizeof(VkRenderingInfo));
        result[0]=deserialize_struct(reader.getVkrenderinginfo());
        return result;
    

    case PNext::VKRENDERINGATTACHMENTINFO:
        result=(VkRenderingAttachmentInfo*)malloc(sizeof(VkRenderingAttachmentInfo));
        result[0]=deserialize_struct(reader.getVkrenderingattachmentinfo());
        return result;
    

    case PNext::VKRENDERINGFRAGMENTSHADINGRATEATTACHMENTINFOKHR:
        result=(VkRenderingFragmentShadingRateAttachmentInfoKHR*)malloc(sizeof(VkRenderingFragmentShadingRateAttachmentInfoKHR));
        result[0]=deserialize_struct(reader.getVkrenderingfragmentshadingrateattachmentinfokhr());
        return result;
    

    case PNext::VKRENDERINGFRAGMENTDENSITYMAPATTACHMENTINFOEXT:
        result=(VkRenderingFragmentDensityMapAttachmentInfoEXT*)malloc(sizeof(VkRenderingFragmentDensityMapAttachmentInfoEXT));
        result[0]=deserialize_struct(reader.getVkrenderingfragmentdensitymapattachmentinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICEDYNAMICRENDERINGFEATURES:
        result=(VkPhysicalDeviceDynamicRenderingFeatures*)malloc(sizeof(VkPhysicalDeviceDynamicRenderingFeatures));
        result[0]=deserialize_struct(reader.getVkphysicaldevicedynamicrenderingfeatures());
        return result;
    

    case PNext::VKCOMMANDBUFFERINHERITANCERENDERINGINFO:
        result=(VkCommandBufferInheritanceRenderingInfo*)malloc(sizeof(VkCommandBufferInheritanceRenderingInfo));
        result[0]=deserialize_struct(reader.getVkcommandbufferinheritancerenderinginfo());
        return result;
    

    case PNext::VKATTACHMENTSAMPLECOUNTINFOAMD:
        result=(VkAttachmentSampleCountInfoAMD*)malloc(sizeof(VkAttachmentSampleCountInfoAMD));
        result[0]=deserialize_struct(reader.getVkattachmentsamplecountinfoamd());
        return result;
    

    case PNext::VKMULTIVIEWPERVIEWATTRIBUTESINFONVX:
        result=(VkMultiviewPerViewAttributesInfoNVX*)malloc(sizeof(VkMultiviewPerViewAttributesInfoNVX));
        result[0]=deserialize_struct(reader.getVkmultiviewperviewattributesinfonvx());
        return result;
    

    case PNext::VKPHYSICALDEVICEIMAGEVIEWMINLODFEATURESEXT:
        result=(VkPhysicalDeviceImageViewMinLodFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceImageViewMinLodFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceimageviewminlodfeaturesext());
        return result;
    

    case PNext::VKIMAGEVIEWMINLODCREATEINFOEXT:
        result=(VkImageViewMinLodCreateInfoEXT*)malloc(sizeof(VkImageViewMinLodCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkimageviewminlodcreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICERASTERIZATIONORDERATTACHMENTACCESSFEATURESEXT:
        result=(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicerasterizationorderattachmentaccessfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICELINEARCOLORATTACHMENTFEATURESNV:
        result=(VkPhysicalDeviceLinearColorAttachmentFeaturesNV*)malloc(sizeof(VkPhysicalDeviceLinearColorAttachmentFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicelinearcolorattachmentfeaturesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICEGRAPHICSPIPELINELIBRARYFEATURESEXT:
        result=(VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicegraphicspipelinelibraryfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEGRAPHICSPIPELINELIBRARYPROPERTIESEXT:
        result=(VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicegraphicspipelinelibrarypropertiesext());
        return result;
    

    case PNext::VKGRAPHICSPIPELINELIBRARYCREATEINFOEXT:
        result=(VkGraphicsPipelineLibraryCreateInfoEXT*)malloc(sizeof(VkGraphicsPipelineLibraryCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkgraphicspipelinelibrarycreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICEDESCRIPTORSETHOSTMAPPINGFEATURESVALVE:
        result=(VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE*)malloc(sizeof(VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE));
        result[0]=deserialize_struct(reader.getVkphysicaldevicedescriptorsethostmappingfeaturesvalve());
        return result;
    

    case PNext::VKDESCRIPTORSETBINDINGREFERENCEVALVE:
        result=(VkDescriptorSetBindingReferenceVALVE*)malloc(sizeof(VkDescriptorSetBindingReferenceVALVE));
        result[0]=deserialize_struct(reader.getVkdescriptorsetbindingreferencevalve());
        return result;
    

    case PNext::VKDESCRIPTORSETLAYOUTHOSTMAPPINGINFOVALVE:
        result=(VkDescriptorSetLayoutHostMappingInfoVALVE*)malloc(sizeof(VkDescriptorSetLayoutHostMappingInfoVALVE));
        result[0]=deserialize_struct(reader.getVkdescriptorsetlayouthostmappinginfovalve());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERMODULEIDENTIFIERFEATURESEXT:
        result=(VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshadermoduleidentifierfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERMODULEIDENTIFIERPROPERTIESEXT:
        result=(VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshadermoduleidentifierpropertiesext());
        return result;
    

    case PNext::VKPIPELINESHADERSTAGEMODULEIDENTIFIERCREATEINFOEXT:
        result=(VkPipelineShaderStageModuleIdentifierCreateInfoEXT*)malloc(sizeof(VkPipelineShaderStageModuleIdentifierCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkpipelineshaderstagemoduleidentifiercreateinfoext());
        return result;
    

    case PNext::VKSHADERMODULEIDENTIFIEREXT:
        result=(VkShaderModuleIdentifierEXT*)malloc(sizeof(VkShaderModuleIdentifierEXT));
        result[0]=deserialize_struct(reader.getVkshadermoduleidentifierext());
        return result;
    

    case PNext::VKIMAGECOMPRESSIONCONTROLEXT:
        result=(VkImageCompressionControlEXT*)malloc(sizeof(VkImageCompressionControlEXT));
        result[0]=deserialize_struct(reader.getVkimagecompressioncontrolext());
        return result;
    

    case PNext::VKPHYSICALDEVICEIMAGECOMPRESSIONCONTROLFEATURESEXT:
        result=(VkPhysicalDeviceImageCompressionControlFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceImageCompressionControlFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceimagecompressioncontrolfeaturesext());
        return result;
    

    case PNext::VKIMAGECOMPRESSIONPROPERTIESEXT:
        result=(VkImageCompressionPropertiesEXT*)malloc(sizeof(VkImageCompressionPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkimagecompressionpropertiesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEIMAGECOMPRESSIONCONTROLSWAPCHAINFEATURESEXT:
        result=(VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceimagecompressioncontrolswapchainfeaturesext());
        return result;
    

    case PNext::VKIMAGESUBRESOURCE2KHR:
        result=(VkImageSubresource2KHR*)malloc(sizeof(VkImageSubresource2KHR));
        result[0]=deserialize_struct(reader.getVkimagesubresource2Khr());
        return result;
    

    case PNext::VKSUBRESOURCELAYOUT2KHR:
        result=(VkSubresourceLayout2KHR*)malloc(sizeof(VkSubresourceLayout2KHR));
        result[0]=deserialize_struct(reader.getVksubresourcelayout2Khr());
        return result;
    

    case PNext::VKRENDERPASSCREATIONCONTROLEXT:
        result=(VkRenderPassCreationControlEXT*)malloc(sizeof(VkRenderPassCreationControlEXT));
        result[0]=deserialize_struct(reader.getVkrenderpasscreationcontrolext());
        return result;
    

    case PNext::VKRENDERPASSCREATIONFEEDBACKINFOEXT:
        result=(VkRenderPassCreationFeedbackInfoEXT*)malloc(sizeof(VkRenderPassCreationFeedbackInfoEXT));
        result[0]=deserialize_struct(reader.getVkrenderpasscreationfeedbackinfoext());
        return result;
    

    case PNext::VKRENDERPASSCREATIONFEEDBACKCREATEINFOEXT:
        result=(VkRenderPassCreationFeedbackCreateInfoEXT*)malloc(sizeof(VkRenderPassCreationFeedbackCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkrenderpasscreationfeedbackcreateinfoext());
        return result;
    

    case PNext::VKRENDERPASSSUBPASSFEEDBACKINFOEXT:
        result=(VkRenderPassSubpassFeedbackInfoEXT*)malloc(sizeof(VkRenderPassSubpassFeedbackInfoEXT));
        result[0]=deserialize_struct(reader.getVkrenderpasssubpassfeedbackinfoext());
        return result;
    

    case PNext::VKRENDERPASSSUBPASSFEEDBACKCREATEINFOEXT:
        result=(VkRenderPassSubpassFeedbackCreateInfoEXT*)malloc(sizeof(VkRenderPassSubpassFeedbackCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkrenderpasssubpassfeedbackcreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICESUBPASSMERGEFEEDBACKFEATURESEXT:
        result=(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicesubpassmergefeedbackfeaturesext());
        return result;
    

    case PNext::VKMICROMAPBUILDINFOEXT:
        result=(VkMicromapBuildInfoEXT*)malloc(sizeof(VkMicromapBuildInfoEXT));
        result[0]=deserialize_struct(reader.getVkmicromapbuildinfoext());
        return result;
    

    case PNext::VKMICROMAPCREATEINFOEXT:
        result=(VkMicromapCreateInfoEXT*)malloc(sizeof(VkMicromapCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkmicromapcreateinfoext());
        return result;
    

    case PNext::VKMICROMAPVERSIONINFOEXT:
        result=(VkMicromapVersionInfoEXT*)malloc(sizeof(VkMicromapVersionInfoEXT));
        result[0]=deserialize_struct(reader.getVkmicromapversioninfoext());
        return result;
    

    case PNext::VKCOPYMICROMAPINFOEXT:
        result=(VkCopyMicromapInfoEXT*)malloc(sizeof(VkCopyMicromapInfoEXT));
        result[0]=deserialize_struct(reader.getVkcopymicromapinfoext());
        return result;
    

    case PNext::VKCOPYMICROMAPTOMEMORYINFOEXT:
        result=(VkCopyMicromapToMemoryInfoEXT*)malloc(sizeof(VkCopyMicromapToMemoryInfoEXT));
        result[0]=deserialize_struct(reader.getVkcopymicromaptomemoryinfoext());
        return result;
    

    case PNext::VKCOPYMEMORYTOMICROMAPINFOEXT:
        result=(VkCopyMemoryToMicromapInfoEXT*)malloc(sizeof(VkCopyMemoryToMicromapInfoEXT));
        result[0]=deserialize_struct(reader.getVkcopymemorytomicromapinfoext());
        return result;
    

    case PNext::VKMICROMAPBUILDSIZESINFOEXT:
        result=(VkMicromapBuildSizesInfoEXT*)malloc(sizeof(VkMicromapBuildSizesInfoEXT));
        result[0]=deserialize_struct(reader.getVkmicromapbuildsizesinfoext());
        return result;
    

    case PNext::VKMICROMAPUSAGEEXT:
        result=(VkMicromapUsageEXT*)malloc(sizeof(VkMicromapUsageEXT));
        result[0]=deserialize_struct(reader.getVkmicromapusageext());
        return result;
    

    case PNext::VKMICROMAPTRIANGLEEXT:
        result=(VkMicromapTriangleEXT*)malloc(sizeof(VkMicromapTriangleEXT));
        result[0]=deserialize_struct(reader.getVkmicromaptriangleext());
        return result;
    

    case PNext::VKPHYSICALDEVICEOPACITYMICROMAPFEATURESEXT:
        result=(VkPhysicalDeviceOpacityMicromapFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceOpacityMicromapFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceopacitymicromapfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEOPACITYMICROMAPPROPERTIESEXT:
        result=(VkPhysicalDeviceOpacityMicromapPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceOpacityMicromapPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceopacitymicromappropertiesext());
        return result;
    

    case PNext::VKACCELERATIONSTRUCTURETRIANGLESOPACITYMICROMAPEXT:
        result=(VkAccelerationStructureTrianglesOpacityMicromapEXT*)malloc(sizeof(VkAccelerationStructureTrianglesOpacityMicromapEXT));
        result[0]=deserialize_struct(reader.getVkaccelerationstructuretrianglesopacitymicromapext());
        return result;
    

    case PNext::VKPIPELINEPROPERTIESIDENTIFIEREXT:
        result=(VkPipelinePropertiesIdentifierEXT*)malloc(sizeof(VkPipelinePropertiesIdentifierEXT));
        result[0]=deserialize_struct(reader.getVkpipelinepropertiesidentifierext());
        return result;
    

    case PNext::VKPHYSICALDEVICEPIPELINEPROPERTIESFEATURESEXT:
        result=(VkPhysicalDevicePipelinePropertiesFeaturesEXT*)malloc(sizeof(VkPhysicalDevicePipelinePropertiesFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicepipelinepropertiesfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADEREARLYANDLATEFRAGMENTTESTSFEATURESAMD:
        result=(VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD*)malloc(sizeof(VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshaderearlyandlatefragmenttestsfeaturesamd());
        return result;
    

    case PNext::VKEXTERNALMEMORYACQUIREUNMODIFIEDEXT:
        result=(VkExternalMemoryAcquireUnmodifiedEXT*)malloc(sizeof(VkExternalMemoryAcquireUnmodifiedEXT));
        result[0]=deserialize_struct(reader.getVkexternalmemoryacquireunmodifiedext());
        return result;
    

    case PNext::VKPHYSICALDEVICENONSEAMLESSCUBEMAPFEATURESEXT:
        result=(VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicenonseamlesscubemapfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEPIPELINEROBUSTNESSFEATURESEXT:
        result=(VkPhysicalDevicePipelineRobustnessFeaturesEXT*)malloc(sizeof(VkPhysicalDevicePipelineRobustnessFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicepipelinerobustnessfeaturesext());
        return result;
    

    case PNext::VKPIPELINEROBUSTNESSCREATEINFOEXT:
        result=(VkPipelineRobustnessCreateInfoEXT*)malloc(sizeof(VkPipelineRobustnessCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkpipelinerobustnesscreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICEPIPELINEROBUSTNESSPROPERTIESEXT:
        result=(VkPhysicalDevicePipelineRobustnessPropertiesEXT*)malloc(sizeof(VkPhysicalDevicePipelineRobustnessPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicepipelinerobustnesspropertiesext());
        return result;
    

    case PNext::VKIMAGEVIEWSAMPLEWEIGHTCREATEINFOQCOM:
        result=(VkImageViewSampleWeightCreateInfoQCOM*)malloc(sizeof(VkImageViewSampleWeightCreateInfoQCOM));
        result[0]=deserialize_struct(reader.getVkimageviewsampleweightcreateinfoqcom());
        return result;
    

    case PNext::VKPHYSICALDEVICEIMAGEPROCESSINGFEATURESQCOM:
        result=(VkPhysicalDeviceImageProcessingFeaturesQCOM*)malloc(sizeof(VkPhysicalDeviceImageProcessingFeaturesQCOM));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceimageprocessingfeaturesqcom());
        return result;
    

    case PNext::VKPHYSICALDEVICEIMAGEPROCESSINGPROPERTIESQCOM:
        result=(VkPhysicalDeviceImageProcessingPropertiesQCOM*)malloc(sizeof(VkPhysicalDeviceImageProcessingPropertiesQCOM));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceimageprocessingpropertiesqcom());
        return result;
    

    case PNext::VKPHYSICALDEVICETILEPROPERTIESFEATURESQCOM:
        result=(VkPhysicalDeviceTilePropertiesFeaturesQCOM*)malloc(sizeof(VkPhysicalDeviceTilePropertiesFeaturesQCOM));
        result[0]=deserialize_struct(reader.getVkphysicaldevicetilepropertiesfeaturesqcom());
        return result;
    

    case PNext::VKTILEPROPERTIESQCOM:
        result=(VkTilePropertiesQCOM*)malloc(sizeof(VkTilePropertiesQCOM));
        result[0]=deserialize_struct(reader.getVktilepropertiesqcom());
        return result;
    

    case PNext::VKPHYSICALDEVICEAMIGOPROFILINGFEATURESSEC:
        result=(VkPhysicalDeviceAmigoProfilingFeaturesSEC*)malloc(sizeof(VkPhysicalDeviceAmigoProfilingFeaturesSEC));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceamigoprofilingfeaturessec());
        return result;
    

    case PNext::VKAMIGOPROFILINGSUBMITINFOSEC:
        result=(VkAmigoProfilingSubmitInfoSEC*)malloc(sizeof(VkAmigoProfilingSubmitInfoSEC));
        result[0]=deserialize_struct(reader.getVkamigoprofilingsubmitinfosec());
        return result;
    

    case PNext::VKPHYSICALDEVICEATTACHMENTFEEDBACKLOOPLAYOUTFEATURESEXT:
        result=(VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceattachmentfeedbacklooplayoutfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEDEPTHCLAMPZEROONEFEATURESEXT:
        result=(VkPhysicalDeviceDepthClampZeroOneFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceDepthClampZeroOneFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicedepthclampzeroonefeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEADDRESSBINDINGREPORTFEATURESEXT:
        result=(VkPhysicalDeviceAddressBindingReportFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceAddressBindingReportFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceaddressbindingreportfeaturesext());
        return result;
    

    case PNext::VKDEVICEADDRESSBINDINGCALLBACKDATAEXT:
        result=(VkDeviceAddressBindingCallbackDataEXT*)malloc(sizeof(VkDeviceAddressBindingCallbackDataEXT));
        result[0]=deserialize_struct(reader.getVkdeviceaddressbindingcallbackdataext());
        return result;
    

    case PNext::VKPHYSICALDEVICEOPTICALFLOWFEATURESNV:
        result=(VkPhysicalDeviceOpticalFlowFeaturesNV*)malloc(sizeof(VkPhysicalDeviceOpticalFlowFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceopticalflowfeaturesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICEOPTICALFLOWPROPERTIESNV:
        result=(VkPhysicalDeviceOpticalFlowPropertiesNV*)malloc(sizeof(VkPhysicalDeviceOpticalFlowPropertiesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceopticalflowpropertiesnv());
        return result;
    

    case PNext::VKOPTICALFLOWIMAGEFORMATINFONV:
        result=(VkOpticalFlowImageFormatInfoNV*)malloc(sizeof(VkOpticalFlowImageFormatInfoNV));
        result[0]=deserialize_struct(reader.getVkopticalflowimageformatinfonv());
        return result;
    

    case PNext::VKOPTICALFLOWIMAGEFORMATPROPERTIESNV:
        result=(VkOpticalFlowImageFormatPropertiesNV*)malloc(sizeof(VkOpticalFlowImageFormatPropertiesNV));
        result[0]=deserialize_struct(reader.getVkopticalflowimageformatpropertiesnv());
        return result;
    

    case PNext::VKOPTICALFLOWSESSIONCREATEINFONV:
        result=(VkOpticalFlowSessionCreateInfoNV*)malloc(sizeof(VkOpticalFlowSessionCreateInfoNV));
        result[0]=deserialize_struct(reader.getVkopticalflowsessioncreateinfonv());
        return result;
    

    case PNext::VKOPTICALFLOWSESSIONCREATEPRIVATEDATAINFONV:
        result=(VkOpticalFlowSessionCreatePrivateDataInfoNV*)malloc(sizeof(VkOpticalFlowSessionCreatePrivateDataInfoNV));
        result[0]=deserialize_struct(reader.getVkopticalflowsessioncreateprivatedatainfonv());
        return result;
    

    case PNext::VKOPTICALFLOWEXECUTEINFONV:
        result=(VkOpticalFlowExecuteInfoNV*)malloc(sizeof(VkOpticalFlowExecuteInfoNV));
        result[0]=deserialize_struct(reader.getVkopticalflowexecuteinfonv());
        return result;
    

    case PNext::VKPHYSICALDEVICEFAULTFEATURESEXT:
        result=(VkPhysicalDeviceFaultFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceFaultFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicefaultfeaturesext());
        return result;
    

    case PNext::VKDEVICEFAULTADDRESSINFOEXT:
        result=(VkDeviceFaultAddressInfoEXT*)malloc(sizeof(VkDeviceFaultAddressInfoEXT));
        result[0]=deserialize_struct(reader.getVkdevicefaultaddressinfoext());
        return result;
    

    case PNext::VKDEVICEFAULTVENDORINFOEXT:
        result=(VkDeviceFaultVendorInfoEXT*)malloc(sizeof(VkDeviceFaultVendorInfoEXT));
        result[0]=deserialize_struct(reader.getVkdevicefaultvendorinfoext());
        return result;
    

    case PNext::VKDEVICEFAULTCOUNTSEXT:
        result=(VkDeviceFaultCountsEXT*)malloc(sizeof(VkDeviceFaultCountsEXT));
        result[0]=deserialize_struct(reader.getVkdevicefaultcountsext());
        return result;
    

    case PNext::VKDEVICEFAULTINFOEXT:
        result=(VkDeviceFaultInfoEXT*)malloc(sizeof(VkDeviceFaultInfoEXT));
        result[0]=deserialize_struct(reader.getVkdevicefaultinfoext());
        return result;
    

    case PNext::VKDEVICEFAULTVENDORBINARYHEADERVERSIONONEEXT:
        result=(VkDeviceFaultVendorBinaryHeaderVersionOneEXT*)malloc(sizeof(VkDeviceFaultVendorBinaryHeaderVersionOneEXT));
        result[0]=deserialize_struct(reader.getVkdevicefaultvendorbinaryheaderversiononeext());
        return result;
    

    case PNext::VKPHYSICALDEVICEPIPELINELIBRARYGROUPHANDLESFEATURESEXT:
        result=(VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT*)malloc(sizeof(VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicepipelinelibrarygrouphandlesfeaturesext());
        return result;
    

    case PNext::VKDEPTHBIASINFOEXT:
        result=(VkDepthBiasInfoEXT*)malloc(sizeof(VkDepthBiasInfoEXT));
        result[0]=deserialize_struct(reader.getVkdepthbiasinfoext());
        return result;
    

    case PNext::VKDEPTHBIASREPRESENTATIONINFOEXT:
        result=(VkDepthBiasRepresentationInfoEXT*)malloc(sizeof(VkDepthBiasRepresentationInfoEXT));
        result[0]=deserialize_struct(reader.getVkdepthbiasrepresentationinfoext());
        return result;
    

    case PNext::VKDECOMPRESSMEMORYREGIONNV:
        result=(VkDecompressMemoryRegionNV*)malloc(sizeof(VkDecompressMemoryRegionNV));
        result[0]=deserialize_struct(reader.getVkdecompressmemoryregionnv());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERCOREBUILTINSPROPERTIESARM:
        result=(VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM*)malloc(sizeof(VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshadercorebuiltinspropertiesarm());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERCOREBUILTINSFEATURESARM:
        result=(VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM*)malloc(sizeof(VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshadercorebuiltinsfeaturesarm());
        return result;
    

    case PNext::VKFRAMEBOUNDARYEXT:
        result=(VkFrameBoundaryEXT*)malloc(sizeof(VkFrameBoundaryEXT));
        result[0]=deserialize_struct(reader.getVkframeboundaryext());
        return result;
    

    case PNext::VKPHYSICALDEVICEFRAMEBOUNDARYFEATURESEXT:
        result=(VkPhysicalDeviceFrameBoundaryFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceFrameBoundaryFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceframeboundaryfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICEDYNAMICRENDERINGUNUSEDATTACHMENTSFEATURESEXT:
        result=(VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicedynamicrenderingunusedattachmentsfeaturesext());
        return result;
    

    case PNext::VKSURFACEPRESENTMODEEXT:
        result=(VkSurfacePresentModeEXT*)malloc(sizeof(VkSurfacePresentModeEXT));
        result[0]=deserialize_struct(reader.getVksurfacepresentmodeext());
        return result;
    

    case PNext::VKSURFACEPRESENTSCALINGCAPABILITIESEXT:
        result=(VkSurfacePresentScalingCapabilitiesEXT*)malloc(sizeof(VkSurfacePresentScalingCapabilitiesEXT));
        result[0]=deserialize_struct(reader.getVksurfacepresentscalingcapabilitiesext());
        return result;
    

    case PNext::VKSURFACEPRESENTMODECOMPATIBILITYEXT:
        result=(VkSurfacePresentModeCompatibilityEXT*)malloc(sizeof(VkSurfacePresentModeCompatibilityEXT));
        result[0]=deserialize_struct(reader.getVksurfacepresentmodecompatibilityext());
        return result;
    

    case PNext::VKPHYSICALDEVICESWAPCHAINMAINTENANCE1FEATURESEXT:
        result=(VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT*)malloc(sizeof(VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceswapchainmaintenance1Featuresext());
        return result;
    

    case PNext::VKSWAPCHAINPRESENTFENCEINFOEXT:
        result=(VkSwapchainPresentFenceInfoEXT*)malloc(sizeof(VkSwapchainPresentFenceInfoEXT));
        result[0]=deserialize_struct(reader.getVkswapchainpresentfenceinfoext());
        return result;
    

    case PNext::VKSWAPCHAINPRESENTMODESCREATEINFOEXT:
        result=(VkSwapchainPresentModesCreateInfoEXT*)malloc(sizeof(VkSwapchainPresentModesCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkswapchainpresentmodescreateinfoext());
        return result;
    

    case PNext::VKSWAPCHAINPRESENTMODEINFOEXT:
        result=(VkSwapchainPresentModeInfoEXT*)malloc(sizeof(VkSwapchainPresentModeInfoEXT));
        result[0]=deserialize_struct(reader.getVkswapchainpresentmodeinfoext());
        return result;
    

    case PNext::VKSWAPCHAINPRESENTSCALINGCREATEINFOEXT:
        result=(VkSwapchainPresentScalingCreateInfoEXT*)malloc(sizeof(VkSwapchainPresentScalingCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkswapchainpresentscalingcreateinfoext());
        return result;
    

    case PNext::VKRELEASESWAPCHAINIMAGESINFOEXT:
        result=(VkReleaseSwapchainImagesInfoEXT*)malloc(sizeof(VkReleaseSwapchainImagesInfoEXT));
        result[0]=deserialize_struct(reader.getVkreleaseswapchainimagesinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICEDEPTHBIASCONTROLFEATURESEXT:
        result=(VkPhysicalDeviceDepthBiasControlFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceDepthBiasControlFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicedepthbiascontrolfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICERAYTRACINGINVOCATIONREORDERFEATURESNV:
        result=(VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV*)malloc(sizeof(VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceraytracinginvocationreorderfeaturesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICERAYTRACINGINVOCATIONREORDERPROPERTIESNV:
        result=(VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV*)malloc(sizeof(VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceraytracinginvocationreorderpropertiesnv());
        return result;
    

    case PNext::VKDIRECTDRIVERLOADINGINFOLUNARG:
        result=(VkDirectDriverLoadingInfoLUNARG*)malloc(sizeof(VkDirectDriverLoadingInfoLUNARG));
        result[0]=deserialize_struct(reader.getVkdirectdriverloadinginfolunarg());
        return result;
    

    case PNext::VKDIRECTDRIVERLOADINGLISTLUNARG:
        result=(VkDirectDriverLoadingListLUNARG*)malloc(sizeof(VkDirectDriverLoadingListLUNARG));
        result[0]=deserialize_struct(reader.getVkdirectdriverloadinglistlunarg());
        return result;
    

    case PNext::VKPHYSICALDEVICEMULTIVIEWPERVIEWVIEWPORTSFEATURESQCOM:
        result=(VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM*)malloc(sizeof(VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM));
        result[0]=deserialize_struct(reader.getVkphysicaldevicemultiviewperviewviewportsfeaturesqcom());
        return result;
    

    case PNext::VKPHYSICALDEVICERAYTRACINGPOSITIONFETCHFEATURESKHR:
        result=(VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR*)malloc(sizeof(VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceraytracingpositionfetchfeatureskhr());
        return result;
    

    case PNext::VKDEVICEIMAGESUBRESOURCEINFOKHR:
        result=(VkDeviceImageSubresourceInfoKHR*)malloc(sizeof(VkDeviceImageSubresourceInfoKHR));
        result[0]=deserialize_struct(reader.getVkdeviceimagesubresourceinfokhr());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERCOREPROPERTIESARM:
        result=(VkPhysicalDeviceShaderCorePropertiesARM*)malloc(sizeof(VkPhysicalDeviceShaderCorePropertiesARM));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshadercorepropertiesarm());
        return result;
    

    case PNext::VKPHYSICALDEVICEMULTIVIEWPERVIEWRENDERAREASFEATURESQCOM:
        result=(VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM*)malloc(sizeof(VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM));
        result[0]=deserialize_struct(reader.getVkphysicaldevicemultiviewperviewrenderareasfeaturesqcom());
        return result;
    

    case PNext::VKMULTIVIEWPERVIEWRENDERAREASRENDERPASSBEGININFOQCOM:
        result=(VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM*)malloc(sizeof(VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM));
        result[0]=deserialize_struct(reader.getVkmultiviewperviewrenderareasrenderpassbegininfoqcom());
        return result;
    

    case PNext::VKQUERYLOWLATENCYSUPPORTNV:
        result=(VkQueryLowLatencySupportNV*)malloc(sizeof(VkQueryLowLatencySupportNV));
        result[0]=deserialize_struct(reader.getVkquerylowlatencysupportnv());
        return result;
    

    case PNext::VKMEMORYMAPINFOKHR:
        result=(VkMemoryMapInfoKHR*)malloc(sizeof(VkMemoryMapInfoKHR));
        result[0]=deserialize_struct(reader.getVkmemorymapinfokhr());
        return result;
    

    case PNext::VKMEMORYUNMAPINFOKHR:
        result=(VkMemoryUnmapInfoKHR*)malloc(sizeof(VkMemoryUnmapInfoKHR));
        result[0]=deserialize_struct(reader.getVkmemoryunmapinfokhr());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADEROBJECTFEATURESEXT:
        result=(VkPhysicalDeviceShaderObjectFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceShaderObjectFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshaderobjectfeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADEROBJECTPROPERTIESEXT:
        result=(VkPhysicalDeviceShaderObjectPropertiesEXT*)malloc(sizeof(VkPhysicalDeviceShaderObjectPropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshaderobjectpropertiesext());
        return result;
    

    case PNext::VKSHADERCREATEINFOEXT:
        result=(VkShaderCreateInfoEXT*)malloc(sizeof(VkShaderCreateInfoEXT));
        result[0]=deserialize_struct(reader.getVkshadercreateinfoext());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERTILEIMAGEFEATURESEXT:
        result=(VkPhysicalDeviceShaderTileImageFeaturesEXT*)malloc(sizeof(VkPhysicalDeviceShaderTileImageFeaturesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshadertileimagefeaturesext());
        return result;
    

    case PNext::VKPHYSICALDEVICESHADERTILEIMAGEPROPERTIESEXT:
        result=(VkPhysicalDeviceShaderTileImagePropertiesEXT*)malloc(sizeof(VkPhysicalDeviceShaderTileImagePropertiesEXT));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceshadertileimagepropertiesext());
        return result;
    

    case PNext::VKPHYSICALDEVICECOOPERATIVEMATRIXFEATURESKHR:
        result=(VkPhysicalDeviceCooperativeMatrixFeaturesKHR*)malloc(sizeof(VkPhysicalDeviceCooperativeMatrixFeaturesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldevicecooperativematrixfeatureskhr());
        return result;
    

    case PNext::VKCOOPERATIVEMATRIXPROPERTIESKHR:
        result=(VkCooperativeMatrixPropertiesKHR*)malloc(sizeof(VkCooperativeMatrixPropertiesKHR));
        result[0]=deserialize_struct(reader.getVkcooperativematrixpropertieskhr());
        return result;
    

    case PNext::VKPHYSICALDEVICECOOPERATIVEMATRIXPROPERTIESKHR:
        result=(VkPhysicalDeviceCooperativeMatrixPropertiesKHR*)malloc(sizeof(VkPhysicalDeviceCooperativeMatrixPropertiesKHR));
        result[0]=deserialize_struct(reader.getVkphysicaldevicecooperativematrixpropertieskhr());
        return result;
    

    case PNext::VKPHYSICALDEVICECUBICCLAMPFEATURESQCOM:
        result=(VkPhysicalDeviceCubicClampFeaturesQCOM*)malloc(sizeof(VkPhysicalDeviceCubicClampFeaturesQCOM));
        result[0]=deserialize_struct(reader.getVkphysicaldevicecubicclampfeaturesqcom());
        return result;
    

    case PNext::VKPHYSICALDEVICEYCBCRDEGAMMAFEATURESQCOM:
        result=(VkPhysicalDeviceYcbcrDegammaFeaturesQCOM*)malloc(sizeof(VkPhysicalDeviceYcbcrDegammaFeaturesQCOM));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceycbcrdegammafeaturesqcom());
        return result;
    

    case PNext::VKSAMPLERYCBCRCONVERSIONYCBCRDEGAMMACREATEINFOQCOM:
        result=(VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM*)malloc(sizeof(VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM));
        result[0]=deserialize_struct(reader.getVksamplerycbcrconversionycbcrdegammacreateinfoqcom());
        return result;
    

    case PNext::VKPHYSICALDEVICECUBICWEIGHTSFEATURESQCOM:
        result=(VkPhysicalDeviceCubicWeightsFeaturesQCOM*)malloc(sizeof(VkPhysicalDeviceCubicWeightsFeaturesQCOM));
        result[0]=deserialize_struct(reader.getVkphysicaldevicecubicweightsfeaturesqcom());
        return result;
    

    case PNext::VKSAMPLERCUBICWEIGHTSCREATEINFOQCOM:
        result=(VkSamplerCubicWeightsCreateInfoQCOM*)malloc(sizeof(VkSamplerCubicWeightsCreateInfoQCOM));
        result[0]=deserialize_struct(reader.getVksamplercubicweightscreateinfoqcom());
        return result;
    

    case PNext::VKBLITIMAGECUBICWEIGHTSINFOQCOM:
        result=(VkBlitImageCubicWeightsInfoQCOM*)malloc(sizeof(VkBlitImageCubicWeightsInfoQCOM));
        result[0]=deserialize_struct(reader.getVkblitimagecubicweightsinfoqcom());
        return result;
    

    case PNext::VKPHYSICALDEVICEIMAGEPROCESSING2FEATURESQCOM:
        result=(VkPhysicalDeviceImageProcessing2FeaturesQCOM*)malloc(sizeof(VkPhysicalDeviceImageProcessing2FeaturesQCOM));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceimageprocessing2Featuresqcom());
        return result;
    

    case PNext::VKPHYSICALDEVICEIMAGEPROCESSING2PROPERTIESQCOM:
        result=(VkPhysicalDeviceImageProcessing2PropertiesQCOM*)malloc(sizeof(VkPhysicalDeviceImageProcessing2PropertiesQCOM));
        result[0]=deserialize_struct(reader.getVkphysicaldeviceimageprocessing2Propertiesqcom());
        return result;
    

    case PNext::VKSAMPLERBLOCKMATCHWINDOWCREATEINFOQCOM:
        result=(VkSamplerBlockMatchWindowCreateInfoQCOM*)malloc(sizeof(VkSamplerBlockMatchWindowCreateInfoQCOM));
        result[0]=deserialize_struct(reader.getVksamplerblockmatchwindowcreateinfoqcom());
        return result;
    

    case PNext::VKPHYSICALDEVICEDESCRIPTORPOOLOVERALLOCATIONFEATURESNV:
        result=(VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV*)malloc(sizeof(VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV));
        result[0]=deserialize_struct(reader.getVkphysicaldevicedescriptorpooloverallocationfeaturesnv());
        return result;
    

    case PNext::VKPHYSICALDEVICELAYEREDDRIVERPROPERTIESMSFT:
        result=(VkPhysicalDeviceLayeredDriverPropertiesMSFT*)malloc(sizeof(VkPhysicalDeviceLayeredDriverPropertiesMSFT));
        result[0]=deserialize_struct(reader.getVkphysicaldevicelayereddriverpropertiesmsft());
        return result;
    
}}
std::map<VkStructureType, size_t> structure_type_to_size={
{VK_STRUCTURE_TYPE_APPLICATION_INFO, sizeof(VkApplicationInfo) },
{VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO, sizeof(VkDeviceQueueCreateInfo) },
{VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO, sizeof(VkDeviceCreateInfo) },
{VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO, sizeof(VkInstanceCreateInfo) },
{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO, sizeof(VkMemoryAllocateInfo) },
{VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE, sizeof(VkMappedMemoryRange) },
{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET, sizeof(VkWriteDescriptorSet) },
{VK_STRUCTURE_TYPE_COPY_DESCRIPTOR_SET, sizeof(VkCopyDescriptorSet) },
{VK_STRUCTURE_TYPE_BUFFER_USAGE_FLAGS_2_CREATE_INFO_KHR, sizeof(VkBufferUsageFlags2CreateInfoKHR) },
{VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO, sizeof(VkBufferCreateInfo) },
{VK_STRUCTURE_TYPE_BUFFER_VIEW_CREATE_INFO, sizeof(VkBufferViewCreateInfo) },
{VK_STRUCTURE_TYPE_MEMORY_BARRIER, sizeof(VkMemoryBarrier) },
{VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER, sizeof(VkBufferMemoryBarrier) },
{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER, sizeof(VkImageMemoryBarrier) },
{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO, sizeof(VkImageCreateInfo) },
{VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO, sizeof(VkImageViewCreateInfo) },
{VK_STRUCTURE_TYPE_BIND_SPARSE_INFO, sizeof(VkBindSparseInfo) },
{VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO, sizeof(VkShaderModuleCreateInfo) },
{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO, sizeof(VkDescriptorSetLayoutCreateInfo) },
{VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO, sizeof(VkDescriptorPoolCreateInfo) },
{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO, sizeof(VkDescriptorSetAllocateInfo) },
{VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO, sizeof(VkPipelineShaderStageCreateInfo) },
{VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO, sizeof(VkComputePipelineCreateInfo) },
{VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_INDIRECT_BUFFER_INFO_NV, sizeof(VkComputePipelineIndirectBufferInfoNV) },
{VK_STRUCTURE_TYPE_PIPELINE_CREATE_FLAGS_2_CREATE_INFO_KHR, sizeof(VkPipelineCreateFlags2CreateInfoKHR) },
{VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO, sizeof(VkPipelineVertexInputStateCreateInfo) },
{VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO, sizeof(VkPipelineInputAssemblyStateCreateInfo) },
{VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_STATE_CREATE_INFO, sizeof(VkPipelineTessellationStateCreateInfo) },
{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO, sizeof(VkPipelineViewportStateCreateInfo) },
{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_CREATE_INFO, sizeof(VkPipelineRasterizationStateCreateInfo) },
{VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO, sizeof(VkPipelineMultisampleStateCreateInfo) },
{VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO, sizeof(VkPipelineColorBlendStateCreateInfo) },
{VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO, sizeof(VkPipelineDynamicStateCreateInfo) },
{VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO, sizeof(VkPipelineDepthStencilStateCreateInfo) },
{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO, sizeof(VkGraphicsPipelineCreateInfo) },
{VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO, sizeof(VkPipelineCacheCreateInfo) },
{VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO, sizeof(VkPipelineLayoutCreateInfo) },
{VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO, sizeof(VkSamplerCreateInfo) },
{VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO, sizeof(VkCommandPoolCreateInfo) },
{VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO, sizeof(VkCommandBufferAllocateInfo) },
{VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_INFO, sizeof(VkCommandBufferInheritanceInfo) },
{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO, sizeof(VkCommandBufferBeginInfo) },
{VK_STRUCTURE_TYPE_RENDER_PASS_BEGIN_INFO, sizeof(VkRenderPassBeginInfo) },
{VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO, sizeof(VkRenderPassCreateInfo) },
{VK_STRUCTURE_TYPE_EVENT_CREATE_INFO, sizeof(VkEventCreateInfo) },
{VK_STRUCTURE_TYPE_FENCE_CREATE_INFO, sizeof(VkFenceCreateInfo) },
{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO, sizeof(VkSemaphoreCreateInfo) },
{VK_STRUCTURE_TYPE_QUERY_POOL_CREATE_INFO, sizeof(VkQueryPoolCreateInfo) },
{VK_STRUCTURE_TYPE_FRAMEBUFFER_CREATE_INFO, sizeof(VkFramebufferCreateInfo) },
{VK_STRUCTURE_TYPE_SUBMIT_INFO, sizeof(VkSubmitInfo) },
{VK_STRUCTURE_TYPE_DISPLAY_MODE_CREATE_INFO_KHR, sizeof(VkDisplayModeCreateInfoKHR) },
{VK_STRUCTURE_TYPE_DISPLAY_SURFACE_CREATE_INFO_KHR, sizeof(VkDisplaySurfaceCreateInfoKHR) },
{VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR, sizeof(VkDisplayPresentInfoKHR) },
{VK_STRUCTURE_TYPE_XLIB_SURFACE_CREATE_INFO_KHR, sizeof(VkXlibSurfaceCreateInfoKHR) },
{VK_STRUCTURE_TYPE_XCB_SURFACE_CREATE_INFO_KHR, sizeof(VkXcbSurfaceCreateInfoKHR) },
{VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR, sizeof(VkSwapchainCreateInfoKHR) },
{VK_STRUCTURE_TYPE_PRESENT_INFO_KHR, sizeof(VkPresentInfoKHR) },
{VK_STRUCTURE_TYPE_DEBUG_REPORT_CALLBACK_CREATE_INFO_EXT, sizeof(VkDebugReportCallbackCreateInfoEXT) },
{VK_STRUCTURE_TYPE_VALIDATION_FLAGS_EXT, sizeof(VkValidationFlagsEXT) },
{VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT, sizeof(VkValidationFeaturesEXT) },
{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_RASTERIZATION_ORDER_AMD, sizeof(VkPipelineRasterizationStateRasterizationOrderAMD) },
{VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_NAME_INFO_EXT, sizeof(VkDebugMarkerObjectNameInfoEXT) },
{VK_STRUCTURE_TYPE_DEBUG_MARKER_OBJECT_TAG_INFO_EXT, sizeof(VkDebugMarkerObjectTagInfoEXT) },
{VK_STRUCTURE_TYPE_DEBUG_MARKER_MARKER_INFO_EXT, sizeof(VkDebugMarkerMarkerInfoEXT) },
{VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_IMAGE_CREATE_INFO_NV, sizeof(VkDedicatedAllocationImageCreateInfoNV) },
{VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_BUFFER_CREATE_INFO_NV, sizeof(VkDedicatedAllocationBufferCreateInfoNV) },
{VK_STRUCTURE_TYPE_DEDICATED_ALLOCATION_MEMORY_ALLOCATE_INFO_NV, sizeof(VkDedicatedAllocationMemoryAllocateInfoNV) },
{VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO_NV, sizeof(VkExternalMemoryImageCreateInfoNV) },
{VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO_NV, sizeof(VkExportMemoryAllocateInfoNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV, sizeof(VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV, sizeof(VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV) },
{VK_STRUCTURE_TYPE_DEVICE_PRIVATE_DATA_CREATE_INFO, sizeof(VkDevicePrivateDataCreateInfo) },
{VK_STRUCTURE_TYPE_PRIVATE_DATA_SLOT_CREATE_INFO, sizeof(VkPrivateDataSlotCreateInfo) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES, sizeof(VkPhysicalDevicePrivateDataFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_PROPERTIES_NV, sizeof(VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_PROPERTIES_EXT, sizeof(VkPhysicalDeviceMultiDrawPropertiesEXT) },
{VK_STRUCTURE_TYPE_GRAPHICS_SHADER_GROUP_CREATE_INFO_NV, sizeof(VkGraphicsShaderGroupCreateInfoNV) },
{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_SHADER_GROUPS_CREATE_INFO_NV, sizeof(VkGraphicsPipelineShaderGroupsCreateInfoNV) },
{VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_TOKEN_NV, sizeof(VkIndirectCommandsLayoutTokenNV) },
{VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NV, sizeof(VkIndirectCommandsLayoutCreateInfoNV) },
{VK_STRUCTURE_TYPE_GENERATED_COMMANDS_INFO_NV, sizeof(VkGeneratedCommandsInfoNV) },
{VK_STRUCTURE_TYPE_GENERATED_COMMANDS_MEMORY_REQUIREMENTS_INFO_NV, sizeof(VkGeneratedCommandsMemoryRequirementsInfoNV) },
{VK_STRUCTURE_TYPE_PIPELINE_INDIRECT_DEVICE_ADDRESS_INFO_NV, sizeof(VkPipelineIndirectDeviceAddressInfoNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2, sizeof(VkPhysicalDeviceFeatures2) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2, sizeof(VkPhysicalDeviceProperties2) },
{VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_2, sizeof(VkFormatProperties2) },
{VK_STRUCTURE_TYPE_IMAGE_FORMAT_PROPERTIES_2, sizeof(VkImageFormatProperties2) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_FORMAT_INFO_2, sizeof(VkPhysicalDeviceImageFormatInfo2) },
{VK_STRUCTURE_TYPE_QUEUE_FAMILY_PROPERTIES_2, sizeof(VkQueueFamilyProperties2) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2, sizeof(VkPhysicalDeviceMemoryProperties2) },
{VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2, sizeof(VkSparseImageFormatProperties2) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2, sizeof(VkPhysicalDeviceSparseImageFormatInfo2) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PUSH_DESCRIPTOR_PROPERTIES_KHR, sizeof(VkPhysicalDevicePushDescriptorPropertiesKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES, sizeof(VkPhysicalDeviceDriverProperties) },
{VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR, sizeof(VkPresentRegionsKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES, sizeof(VkPhysicalDeviceVariablePointersFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_IMAGE_FORMAT_INFO, sizeof(VkPhysicalDeviceExternalImageFormatInfo) },
{VK_STRUCTURE_TYPE_EXTERNAL_IMAGE_FORMAT_PROPERTIES, sizeof(VkExternalImageFormatProperties) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_BUFFER_INFO, sizeof(VkPhysicalDeviceExternalBufferInfo) },
{VK_STRUCTURE_TYPE_EXTERNAL_BUFFER_PROPERTIES, sizeof(VkExternalBufferProperties) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES, sizeof(VkPhysicalDeviceIDProperties) },
{VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO, sizeof(VkExternalMemoryImageCreateInfo) },
{VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_BUFFER_CREATE_INFO, sizeof(VkExternalMemoryBufferCreateInfo) },
{VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO, sizeof(VkExportMemoryAllocateInfo) },
{VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR, sizeof(VkImportMemoryFdInfoKHR) },
{VK_STRUCTURE_TYPE_MEMORY_FD_PROPERTIES_KHR, sizeof(VkMemoryFdPropertiesKHR) },
{VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR, sizeof(VkMemoryGetFdInfoKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_SEMAPHORE_INFO, sizeof(VkPhysicalDeviceExternalSemaphoreInfo) },
{VK_STRUCTURE_TYPE_EXTERNAL_SEMAPHORE_PROPERTIES, sizeof(VkExternalSemaphoreProperties) },
{VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO, sizeof(VkExportSemaphoreCreateInfo) },
{VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR, sizeof(VkImportSemaphoreFdInfoKHR) },
{VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR, sizeof(VkSemaphoreGetFdInfoKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_FENCE_INFO, sizeof(VkPhysicalDeviceExternalFenceInfo) },
{VK_STRUCTURE_TYPE_EXTERNAL_FENCE_PROPERTIES, sizeof(VkExternalFenceProperties) },
{VK_STRUCTURE_TYPE_EXPORT_FENCE_CREATE_INFO, sizeof(VkExportFenceCreateInfo) },
{VK_STRUCTURE_TYPE_IMPORT_FENCE_FD_INFO_KHR, sizeof(VkImportFenceFdInfoKHR) },
{VK_STRUCTURE_TYPE_FENCE_GET_FD_INFO_KHR, sizeof(VkFenceGetFdInfoKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES, sizeof(VkPhysicalDeviceMultiviewFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PROPERTIES, sizeof(VkPhysicalDeviceMultiviewProperties) },
{VK_STRUCTURE_TYPE_RENDER_PASS_MULTIVIEW_CREATE_INFO, sizeof(VkRenderPassMultiviewCreateInfo) },
{VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_EXT, sizeof(VkSurfaceCapabilities2EXT) },
{VK_STRUCTURE_TYPE_DISPLAY_POWER_INFO_EXT, sizeof(VkDisplayPowerInfoEXT) },
{VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT, sizeof(VkDeviceEventInfoEXT) },
{VK_STRUCTURE_TYPE_DISPLAY_EVENT_INFO_EXT, sizeof(VkDisplayEventInfoEXT) },
{VK_STRUCTURE_TYPE_SWAPCHAIN_COUNTER_CREATE_INFO_EXT, sizeof(VkSwapchainCounterCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GROUP_PROPERTIES, sizeof(VkPhysicalDeviceGroupProperties) },
{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO, sizeof(VkMemoryAllocateFlagsInfo) },
{VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_INFO, sizeof(VkBindBufferMemoryInfo) },
{VK_STRUCTURE_TYPE_BIND_BUFFER_MEMORY_DEVICE_GROUP_INFO, sizeof(VkBindBufferMemoryDeviceGroupInfo) },
{VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_INFO, sizeof(VkBindImageMemoryInfo) },
{VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_DEVICE_GROUP_INFO, sizeof(VkBindImageMemoryDeviceGroupInfo) },
{VK_STRUCTURE_TYPE_DEVICE_GROUP_RENDER_PASS_BEGIN_INFO, sizeof(VkDeviceGroupRenderPassBeginInfo) },
{VK_STRUCTURE_TYPE_DEVICE_GROUP_COMMAND_BUFFER_BEGIN_INFO, sizeof(VkDeviceGroupCommandBufferBeginInfo) },
{VK_STRUCTURE_TYPE_DEVICE_GROUP_SUBMIT_INFO, sizeof(VkDeviceGroupSubmitInfo) },
{VK_STRUCTURE_TYPE_DEVICE_GROUP_BIND_SPARSE_INFO, sizeof(VkDeviceGroupBindSparseInfo) },
{VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_CAPABILITIES_KHR, sizeof(VkDeviceGroupPresentCapabilitiesKHR) },
{VK_STRUCTURE_TYPE_IMAGE_SWAPCHAIN_CREATE_INFO_KHR, sizeof(VkImageSwapchainCreateInfoKHR) },
{VK_STRUCTURE_TYPE_BIND_IMAGE_MEMORY_SWAPCHAIN_INFO_KHR, sizeof(VkBindImageMemorySwapchainInfoKHR) },
{VK_STRUCTURE_TYPE_ACQUIRE_NEXT_IMAGE_INFO_KHR, sizeof(VkAcquireNextImageInfoKHR) },
{VK_STRUCTURE_TYPE_DEVICE_GROUP_PRESENT_INFO_KHR, sizeof(VkDeviceGroupPresentInfoKHR) },
{VK_STRUCTURE_TYPE_DEVICE_GROUP_DEVICE_CREATE_INFO, sizeof(VkDeviceGroupDeviceCreateInfo) },
{VK_STRUCTURE_TYPE_DEVICE_GROUP_SWAPCHAIN_CREATE_INFO_KHR, sizeof(VkDeviceGroupSwapchainCreateInfoKHR) },
{VK_STRUCTURE_TYPE_DESCRIPTOR_UPDATE_TEMPLATE_CREATE_INFO, sizeof(VkDescriptorUpdateTemplateCreateInfo) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR, sizeof(VkPhysicalDevicePresentIdFeaturesKHR) },
{VK_STRUCTURE_TYPE_PRESENT_ID_KHR, sizeof(VkPresentIdKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR, sizeof(VkPhysicalDevicePresentWaitFeaturesKHR) },
{VK_STRUCTURE_TYPE_HDR_METADATA_EXT, sizeof(VkHdrMetadataEXT) },
{VK_STRUCTURE_TYPE_DISPLAY_NATIVE_HDR_SURFACE_CAPABILITIES_AMD, sizeof(VkDisplayNativeHdrSurfaceCapabilitiesAMD) },
{VK_STRUCTURE_TYPE_SWAPCHAIN_DISPLAY_NATIVE_HDR_CREATE_INFO_AMD, sizeof(VkSwapchainDisplayNativeHdrCreateInfoAMD) },
{VK_STRUCTURE_TYPE_PRESENT_TIMES_INFO_GOOGLE, sizeof(VkPresentTimesInfoGOOGLE) },
{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_W_SCALING_STATE_CREATE_INFO_NV, sizeof(VkPipelineViewportWScalingStateCreateInfoNV) },
{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SWIZZLE_STATE_CREATE_INFO_NV, sizeof(VkPipelineViewportSwizzleStateCreateInfoNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT, sizeof(VkPhysicalDeviceDiscardRectanglePropertiesEXT) },
{VK_STRUCTURE_TYPE_PIPELINE_DISCARD_RECTANGLE_STATE_CREATE_INFO_EXT, sizeof(VkPipelineDiscardRectangleStateCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX, sizeof(VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX) },
{VK_STRUCTURE_TYPE_RENDER_PASS_INPUT_ATTACHMENT_ASPECT_CREATE_INFO, sizeof(VkRenderPassInputAttachmentAspectCreateInfo) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR, sizeof(VkPhysicalDeviceSurfaceInfo2KHR) },
{VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_2_KHR, sizeof(VkSurfaceCapabilities2KHR) },
{VK_STRUCTURE_TYPE_SURFACE_FORMAT_2_KHR, sizeof(VkSurfaceFormat2KHR) },
{VK_STRUCTURE_TYPE_DISPLAY_PROPERTIES_2_KHR, sizeof(VkDisplayProperties2KHR) },
{VK_STRUCTURE_TYPE_DISPLAY_PLANE_PROPERTIES_2_KHR, sizeof(VkDisplayPlaneProperties2KHR) },
{VK_STRUCTURE_TYPE_DISPLAY_MODE_PROPERTIES_2_KHR, sizeof(VkDisplayModeProperties2KHR) },
{VK_STRUCTURE_TYPE_DISPLAY_PLANE_INFO_2_KHR, sizeof(VkDisplayPlaneInfo2KHR) },
{VK_STRUCTURE_TYPE_DISPLAY_PLANE_CAPABILITIES_2_KHR, sizeof(VkDisplayPlaneCapabilities2KHR) },
{VK_STRUCTURE_TYPE_SHARED_PRESENT_SURFACE_CAPABILITIES_KHR, sizeof(VkSharedPresentSurfaceCapabilitiesKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES, sizeof(VkPhysicalDevice16BitStorageFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_PROPERTIES, sizeof(VkPhysicalDeviceSubgroupProperties) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES, sizeof(VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures) },
{VK_STRUCTURE_TYPE_BUFFER_MEMORY_REQUIREMENTS_INFO_2, sizeof(VkBufferMemoryRequirementsInfo2) },
{VK_STRUCTURE_TYPE_DEVICE_BUFFER_MEMORY_REQUIREMENTS, sizeof(VkDeviceBufferMemoryRequirements) },
{VK_STRUCTURE_TYPE_IMAGE_MEMORY_REQUIREMENTS_INFO_2, sizeof(VkImageMemoryRequirementsInfo2) },
{VK_STRUCTURE_TYPE_IMAGE_SPARSE_MEMORY_REQUIREMENTS_INFO_2, sizeof(VkImageSparseMemoryRequirementsInfo2) },
{VK_STRUCTURE_TYPE_DEVICE_IMAGE_MEMORY_REQUIREMENTS, sizeof(VkDeviceImageMemoryRequirements) },
{VK_STRUCTURE_TYPE_MEMORY_REQUIREMENTS_2, sizeof(VkMemoryRequirements2) },
{VK_STRUCTURE_TYPE_SPARSE_IMAGE_MEMORY_REQUIREMENTS_2, sizeof(VkSparseImageMemoryRequirements2) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_POINT_CLIPPING_PROPERTIES, sizeof(VkPhysicalDevicePointClippingProperties) },
{VK_STRUCTURE_TYPE_MEMORY_DEDICATED_REQUIREMENTS, sizeof(VkMemoryDedicatedRequirements) },
{VK_STRUCTURE_TYPE_MEMORY_DEDICATED_ALLOCATE_INFO, sizeof(VkMemoryDedicatedAllocateInfo) },
{VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO, sizeof(VkImageViewUsageCreateInfo) },
{VK_STRUCTURE_TYPE_IMAGE_VIEW_SLICED_CREATE_INFO_EXT, sizeof(VkImageViewSlicedCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PIPELINE_TESSELLATION_DOMAIN_ORIGIN_STATE_CREATE_INFO, sizeof(VkPipelineTessellationDomainOriginStateCreateInfo) },
{VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO, sizeof(VkSamplerYcbcrConversionInfo) },
{VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_CREATE_INFO, sizeof(VkSamplerYcbcrConversionCreateInfo) },
{VK_STRUCTURE_TYPE_BIND_IMAGE_PLANE_MEMORY_INFO, sizeof(VkBindImagePlaneMemoryInfo) },
{VK_STRUCTURE_TYPE_IMAGE_PLANE_MEMORY_REQUIREMENTS_INFO, sizeof(VkImagePlaneMemoryRequirementsInfo) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES, sizeof(VkPhysicalDeviceSamplerYcbcrConversionFeatures) },
{VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_IMAGE_FORMAT_PROPERTIES, sizeof(VkSamplerYcbcrConversionImageFormatProperties) },
{VK_STRUCTURE_TYPE_TEXTURE_LOD_GATHER_FORMAT_PROPERTIES_AMD, sizeof(VkTextureLODGatherFormatPropertiesAMD) },
{VK_STRUCTURE_TYPE_CONDITIONAL_RENDERING_BEGIN_INFO_EXT, sizeof(VkConditionalRenderingBeginInfoEXT) },
{VK_STRUCTURE_TYPE_PROTECTED_SUBMIT_INFO, sizeof(VkProtectedSubmitInfo) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES, sizeof(VkPhysicalDeviceProtectedMemoryFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_PROPERTIES, sizeof(VkPhysicalDeviceProtectedMemoryProperties) },
{VK_STRUCTURE_TYPE_DEVICE_QUEUE_INFO_2, sizeof(VkDeviceQueueInfo2) },
{VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_TO_COLOR_STATE_CREATE_INFO_NV, sizeof(VkPipelineCoverageToColorStateCreateInfoNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_FILTER_MINMAX_PROPERTIES, sizeof(VkPhysicalDeviceSamplerFilterMinmaxProperties) },
{VK_STRUCTURE_TYPE_SAMPLE_LOCATIONS_INFO_EXT, sizeof(VkSampleLocationsInfoEXT) },
{VK_STRUCTURE_TYPE_RENDER_PASS_SAMPLE_LOCATIONS_BEGIN_INFO_EXT, sizeof(VkRenderPassSampleLocationsBeginInfoEXT) },
{VK_STRUCTURE_TYPE_PIPELINE_SAMPLE_LOCATIONS_STATE_CREATE_INFO_EXT, sizeof(VkPipelineSampleLocationsStateCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLE_LOCATIONS_PROPERTIES_EXT, sizeof(VkPhysicalDeviceSampleLocationsPropertiesEXT) },
{VK_STRUCTURE_TYPE_MULTISAMPLE_PROPERTIES_EXT, sizeof(VkMultisamplePropertiesEXT) },
{VK_STRUCTURE_TYPE_SAMPLER_REDUCTION_MODE_CREATE_INFO, sizeof(VkSamplerReductionModeCreateInfo) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT, sizeof(VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT, sizeof(VkPhysicalDeviceMultiDrawFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_PROPERTIES_EXT, sizeof(VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT) },
{VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_ADVANCED_STATE_CREATE_INFO_EXT, sizeof(VkPipelineColorBlendAdvancedStateCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES, sizeof(VkPhysicalDeviceInlineUniformBlockFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_PROPERTIES, sizeof(VkPhysicalDeviceInlineUniformBlockProperties) },
{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_INLINE_UNIFORM_BLOCK, sizeof(VkWriteDescriptorSetInlineUniformBlock) },
{VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_INLINE_UNIFORM_BLOCK_CREATE_INFO, sizeof(VkDescriptorPoolInlineUniformBlockCreateInfo) },
{VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_MODULATION_STATE_CREATE_INFO_NV, sizeof(VkPipelineCoverageModulationStateCreateInfoNV) },
{VK_STRUCTURE_TYPE_IMAGE_FORMAT_LIST_CREATE_INFO, sizeof(VkImageFormatListCreateInfo) },
{VK_STRUCTURE_TYPE_VALIDATION_CACHE_CREATE_INFO_EXT, sizeof(VkValidationCacheCreateInfoEXT) },
{VK_STRUCTURE_TYPE_SHADER_MODULE_VALIDATION_CACHE_CREATE_INFO_EXT, sizeof(VkShaderModuleValidationCacheCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_3_PROPERTIES, sizeof(VkPhysicalDeviceMaintenance3Properties) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES, sizeof(VkPhysicalDeviceMaintenance4Features) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_PROPERTIES, sizeof(VkPhysicalDeviceMaintenance4Properties) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES_KHR, sizeof(VkPhysicalDeviceMaintenance5FeaturesKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_PROPERTIES_KHR, sizeof(VkPhysicalDeviceMaintenance5PropertiesKHR) },
{VK_STRUCTURE_TYPE_RENDERING_AREA_INFO_KHR, sizeof(VkRenderingAreaInfoKHR) },
{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_SUPPORT, sizeof(VkDescriptorSetLayoutSupport) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES, sizeof(VkPhysicalDeviceShaderDrawParametersFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES, sizeof(VkPhysicalDeviceShaderFloat16Int8Features) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT_CONTROLS_PROPERTIES, sizeof(VkPhysicalDeviceFloatControlsProperties) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES, sizeof(VkPhysicalDeviceHostQueryResetFeatures) },
{VK_STRUCTURE_TYPE_DEVICE_QUEUE_GLOBAL_PRIORITY_CREATE_INFO_KHR, sizeof(VkDeviceQueueGlobalPriorityCreateInfoKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR, sizeof(VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR) },
{VK_STRUCTURE_TYPE_QUEUE_FAMILY_GLOBAL_PRIORITY_PROPERTIES_KHR, sizeof(VkQueueFamilyGlobalPriorityPropertiesKHR) },
{VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT, sizeof(VkDebugUtilsObjectNameInfoEXT) },
{VK_STRUCTURE_TYPE_DEBUG_UTILS_OBJECT_TAG_INFO_EXT, sizeof(VkDebugUtilsObjectTagInfoEXT) },
{VK_STRUCTURE_TYPE_DEBUG_UTILS_LABEL_EXT, sizeof(VkDebugUtilsLabelEXT) },
{VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT, sizeof(VkDebugUtilsMessengerCreateInfoEXT) },
{VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT, sizeof(VkDebugUtilsMessengerCallbackDataEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT, sizeof(VkPhysicalDeviceDeviceMemoryReportFeaturesEXT) },
{VK_STRUCTURE_TYPE_DEVICE_DEVICE_MEMORY_REPORT_CREATE_INFO_EXT, sizeof(VkDeviceDeviceMemoryReportCreateInfoEXT) },
{VK_STRUCTURE_TYPE_DEVICE_MEMORY_REPORT_CALLBACK_DATA_EXT, sizeof(VkDeviceMemoryReportCallbackDataEXT) },
{VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT, sizeof(VkImportMemoryHostPointerInfoEXT) },
{VK_STRUCTURE_TYPE_MEMORY_HOST_POINTER_PROPERTIES_EXT, sizeof(VkMemoryHostPointerPropertiesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_HOST_PROPERTIES_EXT, sizeof(VkPhysicalDeviceExternalMemoryHostPropertiesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONSERVATIVE_RASTERIZATION_PROPERTIES_EXT, sizeof(VkPhysicalDeviceConservativeRasterizationPropertiesEXT) },
{VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT, sizeof(VkCalibratedTimestampInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_AMD, sizeof(VkPhysicalDeviceShaderCorePropertiesAMD) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_2_AMD, sizeof(VkPhysicalDeviceShaderCoreProperties2AMD) },
{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_CONSERVATIVE_STATE_CREATE_INFO_EXT, sizeof(VkPipelineRasterizationConservativeStateCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES, sizeof(VkPhysicalDeviceDescriptorIndexingFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_PROPERTIES, sizeof(VkPhysicalDeviceDescriptorIndexingProperties) },
{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_BINDING_FLAGS_CREATE_INFO, sizeof(VkDescriptorSetLayoutBindingFlagsCreateInfo) },
{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_ALLOCATE_INFO, sizeof(VkDescriptorSetVariableDescriptorCountAllocateInfo) },
{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_VARIABLE_DESCRIPTOR_COUNT_LAYOUT_SUPPORT, sizeof(VkDescriptorSetVariableDescriptorCountLayoutSupport) },
{VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_2, sizeof(VkAttachmentDescription2) },
{VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_2, sizeof(VkAttachmentReference2) },
{VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2, sizeof(VkSubpassDescription2) },
{VK_STRUCTURE_TYPE_SUBPASS_DEPENDENCY_2, sizeof(VkSubpassDependency2) },
{VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO_2, sizeof(VkRenderPassCreateInfo2) },
{VK_STRUCTURE_TYPE_SUBPASS_BEGIN_INFO, sizeof(VkSubpassBeginInfo) },
{VK_STRUCTURE_TYPE_SUBPASS_END_INFO, sizeof(VkSubpassEndInfo) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES, sizeof(VkPhysicalDeviceTimelineSemaphoreFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_PROPERTIES, sizeof(VkPhysicalDeviceTimelineSemaphoreProperties) },
{VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO, sizeof(VkSemaphoreTypeCreateInfo) },
{VK_STRUCTURE_TYPE_TIMELINE_SEMAPHORE_SUBMIT_INFO, sizeof(VkTimelineSemaphoreSubmitInfo) },
{VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO, sizeof(VkSemaphoreWaitInfo) },
{VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO, sizeof(VkSemaphoreSignalInfo) },
{VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT, sizeof(VkPipelineVertexInputDivisorStateCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT, sizeof(VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PCI_BUS_INFO_PROPERTIES_EXT, sizeof(VkPhysicalDevicePCIBusInfoPropertiesEXT) },
{VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_CONDITIONAL_RENDERING_INFO_EXT, sizeof(VkCommandBufferInheritanceConditionalRenderingInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES, sizeof(VkPhysicalDevice8BitStorageFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT, sizeof(VkPhysicalDeviceConditionalRenderingFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES, sizeof(VkPhysicalDeviceVulkanMemoryModelFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES, sizeof(VkPhysicalDeviceShaderAtomicInt64Features) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT, sizeof(VkPhysicalDeviceShaderAtomicFloatFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT, sizeof(VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT, sizeof(VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT) },
{VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_NV, sizeof(VkQueueFamilyCheckpointPropertiesNV) },
{VK_STRUCTURE_TYPE_CHECKPOINT_DATA_NV, sizeof(VkCheckpointDataNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_STENCIL_RESOLVE_PROPERTIES, sizeof(VkPhysicalDeviceDepthStencilResolveProperties) },
{VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_DEPTH_STENCIL_RESOLVE, sizeof(VkSubpassDescriptionDepthStencilResolve) },
{VK_STRUCTURE_TYPE_IMAGE_VIEW_ASTC_DECODE_MODE_EXT, sizeof(VkImageViewASTCDecodeModeEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT, sizeof(VkPhysicalDeviceASTCDecodeFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT, sizeof(VkPhysicalDeviceTransformFeedbackFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_PROPERTIES_EXT, sizeof(VkPhysicalDeviceTransformFeedbackPropertiesEXT) },
{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_STATE_STREAM_CREATE_INFO_EXT, sizeof(VkPipelineRasterizationStateStreamCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV, sizeof(VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV) },
{VK_STRUCTURE_TYPE_PIPELINE_REPRESENTATIVE_FRAGMENT_TEST_STATE_CREATE_INFO_NV, sizeof(VkPipelineRepresentativeFragmentTestStateCreateInfoNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV, sizeof(VkPhysicalDeviceExclusiveScissorFeaturesNV) },
{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV, sizeof(VkPipelineViewportExclusiveScissorStateCreateInfoNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV, sizeof(VkPhysicalDeviceCornerSampledImageFeaturesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV, sizeof(VkPhysicalDeviceComputeShaderDerivativesFeaturesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV, sizeof(VkPhysicalDeviceShaderImageFootprintFeaturesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV, sizeof(VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV, sizeof(VkPhysicalDeviceCopyMemoryIndirectFeaturesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_PROPERTIES_NV, sizeof(VkPhysicalDeviceCopyMemoryIndirectPropertiesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV, sizeof(VkPhysicalDeviceMemoryDecompressionFeaturesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_PROPERTIES_NV, sizeof(VkPhysicalDeviceMemoryDecompressionPropertiesNV) },
{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV, sizeof(VkPipelineViewportShadingRateImageStateCreateInfoNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV, sizeof(VkPhysicalDeviceShadingRateImageFeaturesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV, sizeof(VkPhysicalDeviceShadingRateImagePropertiesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI, sizeof(VkPhysicalDeviceInvocationMaskFeaturesHUAWEI) },
{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_COARSE_SAMPLE_ORDER_STATE_CREATE_INFO_NV, sizeof(VkPipelineViewportCoarseSampleOrderStateCreateInfoNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV, sizeof(VkPhysicalDeviceMeshShaderFeaturesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_NV, sizeof(VkPhysicalDeviceMeshShaderPropertiesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT, sizeof(VkPhysicalDeviceMeshShaderFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_PROPERTIES_EXT, sizeof(VkPhysicalDeviceMeshShaderPropertiesEXT) },
{VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_NV, sizeof(VkRayTracingShaderGroupCreateInfoNV) },
{VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR, sizeof(VkRayTracingShaderGroupCreateInfoKHR) },
{VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_NV, sizeof(VkRayTracingPipelineCreateInfoNV) },
{VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR, sizeof(VkRayTracingPipelineCreateInfoKHR) },
{VK_STRUCTURE_TYPE_GEOMETRY_TRIANGLES_NV, sizeof(VkGeometryTrianglesNV) },
{VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV, sizeof(VkGeometryAABBNV) },
{VK_STRUCTURE_TYPE_GEOMETRY_NV, sizeof(VkGeometryNV) },
{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_INFO_NV, sizeof(VkAccelerationStructureInfoNV) },
{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV, sizeof(VkAccelerationStructureCreateInfoNV) },
{VK_STRUCTURE_TYPE_BIND_ACCELERATION_STRUCTURE_MEMORY_INFO_NV, sizeof(VkBindAccelerationStructureMemoryInfoNV) },
{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_KHR, sizeof(VkWriteDescriptorSetAccelerationStructureKHR) },
{VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET_ACCELERATION_STRUCTURE_NV, sizeof(VkWriteDescriptorSetAccelerationStructureNV) },
{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MEMORY_REQUIREMENTS_INFO_NV, sizeof(VkAccelerationStructureMemoryRequirementsInfoNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR, sizeof(VkPhysicalDeviceAccelerationStructureFeaturesKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR, sizeof(VkPhysicalDeviceRayTracingPipelineFeaturesKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR, sizeof(VkPhysicalDeviceRayQueryFeaturesKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_PROPERTIES_KHR, sizeof(VkPhysicalDeviceAccelerationStructurePropertiesKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_PROPERTIES_KHR, sizeof(VkPhysicalDeviceRayTracingPipelinePropertiesKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV, sizeof(VkPhysicalDeviceRayTracingPropertiesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR, sizeof(VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR) },
{VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_EXT, sizeof(VkDrmFormatModifierPropertiesListEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT, sizeof(VkPhysicalDeviceImageDrmFormatModifierInfoEXT) },
{VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_LIST_CREATE_INFO_EXT, sizeof(VkImageDrmFormatModifierListCreateInfoEXT) },
{VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_EXPLICIT_CREATE_INFO_EXT, sizeof(VkImageDrmFormatModifierExplicitCreateInfoEXT) },
{VK_STRUCTURE_TYPE_IMAGE_DRM_FORMAT_MODIFIER_PROPERTIES_EXT, sizeof(VkImageDrmFormatModifierPropertiesEXT) },
{VK_STRUCTURE_TYPE_IMAGE_STENCIL_USAGE_CREATE_INFO, sizeof(VkImageStencilUsageCreateInfo) },
{VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD, sizeof(VkDeviceMemoryOverallocationCreateInfoAMD) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT, sizeof(VkPhysicalDeviceFragmentDensityMapFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT, sizeof(VkPhysicalDeviceFragmentDensityMap2FeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM, sizeof(VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_PROPERTIES_EXT, sizeof(VkPhysicalDeviceFragmentDensityMapPropertiesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_PROPERTIES_EXT, sizeof(VkPhysicalDeviceFragmentDensityMap2PropertiesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_PROPERTIES_QCOM, sizeof(VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM) },
{VK_STRUCTURE_TYPE_RENDER_PASS_FRAGMENT_DENSITY_MAP_CREATE_INFO_EXT, sizeof(VkRenderPassFragmentDensityMapCreateInfoEXT) },
{VK_STRUCTURE_TYPE_SUBPASS_FRAGMENT_DENSITY_MAP_OFFSET_END_INFO_QCOM, sizeof(VkSubpassFragmentDensityMapOffsetEndInfoQCOM) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES, sizeof(VkPhysicalDeviceScalarBlockLayoutFeatures) },
{VK_STRUCTURE_TYPE_SURFACE_PROTECTED_CAPABILITIES_KHR, sizeof(VkSurfaceProtectedCapabilitiesKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES, sizeof(VkPhysicalDeviceUniformBufferStandardLayoutFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT, sizeof(VkPhysicalDeviceDepthClipEnableFeaturesEXT) },
{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_DEPTH_CLIP_STATE_CREATE_INFO_EXT, sizeof(VkPipelineRasterizationDepthClipStateCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_BUDGET_PROPERTIES_EXT, sizeof(VkPhysicalDeviceMemoryBudgetPropertiesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT, sizeof(VkPhysicalDeviceMemoryPriorityFeaturesEXT) },
{VK_STRUCTURE_TYPE_MEMORY_PRIORITY_ALLOCATE_INFO_EXT, sizeof(VkMemoryPriorityAllocateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT, sizeof(VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES, sizeof(VkPhysicalDeviceBufferDeviceAddressFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT, sizeof(VkPhysicalDeviceBufferDeviceAddressFeaturesEXT) },
{VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO, sizeof(VkBufferDeviceAddressInfo) },
{VK_STRUCTURE_TYPE_BUFFER_OPAQUE_CAPTURE_ADDRESS_CREATE_INFO, sizeof(VkBufferOpaqueCaptureAddressCreateInfo) },
{VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_CREATE_INFO_EXT, sizeof(VkBufferDeviceAddressCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_IMAGE_FORMAT_INFO_EXT, sizeof(VkPhysicalDeviceImageViewImageFormatInfoEXT) },
{VK_STRUCTURE_TYPE_FILTER_CUBIC_IMAGE_VIEW_IMAGE_FORMAT_PROPERTIES_EXT, sizeof(VkFilterCubicImageViewImageFormatPropertiesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES, sizeof(VkPhysicalDeviceImagelessFramebufferFeatures) },
{VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENTS_CREATE_INFO, sizeof(VkFramebufferAttachmentsCreateInfo) },
{VK_STRUCTURE_TYPE_FRAMEBUFFER_ATTACHMENT_IMAGE_INFO, sizeof(VkFramebufferAttachmentImageInfo) },
{VK_STRUCTURE_TYPE_RENDER_PASS_ATTACHMENT_BEGIN_INFO, sizeof(VkRenderPassAttachmentBeginInfo) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES, sizeof(VkPhysicalDeviceTextureCompressionASTCHDRFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV, sizeof(VkPhysicalDeviceCooperativeMatrixFeaturesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_NV, sizeof(VkPhysicalDeviceCooperativeMatrixPropertiesNV) },
{VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_NV, sizeof(VkCooperativeMatrixPropertiesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT, sizeof(VkPhysicalDeviceYcbcrImageArraysFeaturesEXT) },
{VK_STRUCTURE_TYPE_IMAGE_VIEW_HANDLE_INFO_NVX, sizeof(VkImageViewHandleInfoNVX) },
{VK_STRUCTURE_TYPE_IMAGE_VIEW_ADDRESS_PROPERTIES_NVX, sizeof(VkImageViewAddressPropertiesNVX) },
{VK_STRUCTURE_TYPE_PIPELINE_CREATION_FEEDBACK_CREATE_INFO, sizeof(VkPipelineCreationFeedbackCreateInfo) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV, sizeof(VkPhysicalDevicePresentBarrierFeaturesNV) },
{VK_STRUCTURE_TYPE_SURFACE_CAPABILITIES_PRESENT_BARRIER_NV, sizeof(VkSurfaceCapabilitiesPresentBarrierNV) },
{VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_BARRIER_CREATE_INFO_NV, sizeof(VkSwapchainPresentBarrierCreateInfoNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR, sizeof(VkPhysicalDevicePerformanceQueryFeaturesKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_PROPERTIES_KHR, sizeof(VkPhysicalDevicePerformanceQueryPropertiesKHR) },
{VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_KHR, sizeof(VkPerformanceCounterKHR) },
{VK_STRUCTURE_TYPE_PERFORMANCE_COUNTER_DESCRIPTION_KHR, sizeof(VkPerformanceCounterDescriptionKHR) },
{VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_CREATE_INFO_KHR, sizeof(VkQueryPoolPerformanceCreateInfoKHR) },
{VK_STRUCTURE_TYPE_ACQUIRE_PROFILING_LOCK_INFO_KHR, sizeof(VkAcquireProfilingLockInfoKHR) },
{VK_STRUCTURE_TYPE_PERFORMANCE_QUERY_SUBMIT_INFO_KHR, sizeof(VkPerformanceQuerySubmitInfoKHR) },
{VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT, sizeof(VkHeadlessSurfaceCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV, sizeof(VkPhysicalDeviceCoverageReductionModeFeaturesNV) },
{VK_STRUCTURE_TYPE_PIPELINE_COVERAGE_REDUCTION_STATE_CREATE_INFO_NV, sizeof(VkPipelineCoverageReductionStateCreateInfoNV) },
{VK_STRUCTURE_TYPE_FRAMEBUFFER_MIXED_SAMPLES_COMBINATION_NV, sizeof(VkFramebufferMixedSamplesCombinationNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL, sizeof(VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL) },
{VK_STRUCTURE_TYPE_INITIALIZE_PERFORMANCE_API_INFO_INTEL, sizeof(VkInitializePerformanceApiInfoINTEL) },
{VK_STRUCTURE_TYPE_QUERY_POOL_PERFORMANCE_QUERY_CREATE_INFO_INTEL, sizeof(VkQueryPoolPerformanceQueryCreateInfoINTEL) },
{VK_STRUCTURE_TYPE_PERFORMANCE_MARKER_INFO_INTEL, sizeof(VkPerformanceMarkerInfoINTEL) },
{VK_STRUCTURE_TYPE_PERFORMANCE_STREAM_MARKER_INFO_INTEL, sizeof(VkPerformanceStreamMarkerInfoINTEL) },
{VK_STRUCTURE_TYPE_PERFORMANCE_OVERRIDE_INFO_INTEL, sizeof(VkPerformanceOverrideInfoINTEL) },
{VK_STRUCTURE_TYPE_PERFORMANCE_CONFIGURATION_ACQUIRE_INFO_INTEL, sizeof(VkPerformanceConfigurationAcquireInfoINTEL) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR, sizeof(VkPhysicalDeviceShaderClockFeaturesKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_EXT, sizeof(VkPhysicalDeviceIndexTypeUint8FeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_PROPERTIES_NV, sizeof(VkPhysicalDeviceShaderSMBuiltinsPropertiesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV, sizeof(VkPhysicalDeviceShaderSMBuiltinsFeaturesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT, sizeof(VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES, sizeof(VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures) },
{VK_STRUCTURE_TYPE_ATTACHMENT_REFERENCE_STENCIL_LAYOUT, sizeof(VkAttachmentReferenceStencilLayout) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT, sizeof(VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT) },
{VK_STRUCTURE_TYPE_ATTACHMENT_DESCRIPTION_STENCIL_LAYOUT, sizeof(VkAttachmentDescriptionStencilLayout) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR, sizeof(VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR) },
{VK_STRUCTURE_TYPE_PIPELINE_INFO_KHR, sizeof(VkPipelineInfoKHR) },
{VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_PROPERTIES_KHR, sizeof(VkPipelineExecutablePropertiesKHR) },
{VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INFO_KHR, sizeof(VkPipelineExecutableInfoKHR) },
{VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_STATISTIC_KHR, sizeof(VkPipelineExecutableStatisticKHR) },
{VK_STRUCTURE_TYPE_PIPELINE_EXECUTABLE_INTERNAL_REPRESENTATION_KHR, sizeof(VkPipelineExecutableInternalRepresentationKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES, sizeof(VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT, sizeof(VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_PROPERTIES, sizeof(VkPhysicalDeviceTexelBufferAlignmentProperties) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES, sizeof(VkPhysicalDeviceSubgroupSizeControlFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_PROPERTIES, sizeof(VkPhysicalDeviceSubgroupSizeControlProperties) },
{VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_REQUIRED_SUBGROUP_SIZE_CREATE_INFO, sizeof(VkPipelineShaderStageRequiredSubgroupSizeCreateInfo) },
{VK_STRUCTURE_TYPE_SUBPASS_SHADING_PIPELINE_CREATE_INFO_HUAWEI, sizeof(VkSubpassShadingPipelineCreateInfoHUAWEI) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_PROPERTIES_HUAWEI, sizeof(VkPhysicalDeviceSubpassShadingPropertiesHUAWEI) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_PROPERTIES_HUAWEI, sizeof(VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI) },
{VK_STRUCTURE_TYPE_MEMORY_OPAQUE_CAPTURE_ADDRESS_ALLOCATE_INFO, sizeof(VkMemoryOpaqueCaptureAddressAllocateInfo) },
{VK_STRUCTURE_TYPE_DEVICE_MEMORY_OPAQUE_CAPTURE_ADDRESS_INFO, sizeof(VkDeviceMemoryOpaqueCaptureAddressInfo) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_EXT, sizeof(VkPhysicalDeviceLineRasterizationFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_PROPERTIES_EXT, sizeof(VkPhysicalDeviceLineRasterizationPropertiesEXT) },
{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_LINE_STATE_CREATE_INFO_EXT, sizeof(VkPipelineRasterizationLineStateCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES, sizeof(VkPhysicalDevicePipelineCreationCacheControlFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES, sizeof(VkPhysicalDeviceVulkan11Features) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_PROPERTIES, sizeof(VkPhysicalDeviceVulkan11Properties) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES, sizeof(VkPhysicalDeviceVulkan12Features) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_PROPERTIES, sizeof(VkPhysicalDeviceVulkan12Properties) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES, sizeof(VkPhysicalDeviceVulkan13Features) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_PROPERTIES, sizeof(VkPhysicalDeviceVulkan13Properties) },
{VK_STRUCTURE_TYPE_PIPELINE_COMPILER_CONTROL_CREATE_INFO_AMD, sizeof(VkPipelineCompilerControlCreateInfoAMD) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD, sizeof(VkPhysicalDeviceCoherentMemoryFeaturesAMD) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TOOL_PROPERTIES, sizeof(VkPhysicalDeviceToolProperties) },
{VK_STRUCTURE_TYPE_SAMPLER_CUSTOM_BORDER_COLOR_CREATE_INFO_EXT, sizeof(VkSamplerCustomBorderColorCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_PROPERTIES_EXT, sizeof(VkPhysicalDeviceCustomBorderColorPropertiesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT, sizeof(VkPhysicalDeviceCustomBorderColorFeaturesEXT) },
{VK_STRUCTURE_TYPE_SAMPLER_BORDER_COLOR_COMPONENT_MAPPING_CREATE_INFO_EXT, sizeof(VkSamplerBorderColorComponentMappingCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT, sizeof(VkPhysicalDeviceBorderColorSwizzleFeaturesEXT) },
{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_TRIANGLES_DATA_KHR, sizeof(VkAccelerationStructureGeometryTrianglesDataKHR) },
{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_AABBS_DATA_KHR, sizeof(VkAccelerationStructureGeometryAabbsDataKHR) },
{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_INSTANCES_DATA_KHR, sizeof(VkAccelerationStructureGeometryInstancesDataKHR) },
{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_KHR, sizeof(VkAccelerationStructureGeometryKHR) },
{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_GEOMETRY_INFO_KHR, sizeof(VkAccelerationStructureBuildGeometryInfoKHR) },
{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR, sizeof(VkAccelerationStructureCreateInfoKHR) },
{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR, sizeof(VkAccelerationStructureDeviceAddressInfoKHR) },
{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_VERSION_INFO_KHR, sizeof(VkAccelerationStructureVersionInfoKHR) },
{VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR, sizeof(VkCopyAccelerationStructureInfoKHR) },
{VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_TO_MEMORY_INFO_KHR, sizeof(VkCopyAccelerationStructureToMemoryInfoKHR) },
{VK_STRUCTURE_TYPE_COPY_MEMORY_TO_ACCELERATION_STRUCTURE_INFO_KHR, sizeof(VkCopyMemoryToAccelerationStructureInfoKHR) },
{VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR, sizeof(VkRayTracingPipelineInterfaceCreateInfoKHR) },
{VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR, sizeof(VkPipelineLibraryCreateInfoKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT, sizeof(VkPhysicalDeviceExtendedDynamicStateFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT, sizeof(VkPhysicalDeviceExtendedDynamicState2FeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT, sizeof(VkPhysicalDeviceExtendedDynamicState3FeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_PROPERTIES_EXT, sizeof(VkPhysicalDeviceExtendedDynamicState3PropertiesEXT) },
{VK_STRUCTURE_TYPE_RENDER_PASS_TRANSFORM_BEGIN_INFO_QCOM, sizeof(VkRenderPassTransformBeginInfoQCOM) },
{VK_STRUCTURE_TYPE_COPY_COMMAND_TRANSFORM_INFO_QCOM, sizeof(VkCopyCommandTransformInfoQCOM) },
{VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDER_PASS_TRANSFORM_INFO_QCOM, sizeof(VkCommandBufferInheritanceRenderPassTransformInfoQCOM) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV, sizeof(VkPhysicalDeviceDiagnosticsConfigFeaturesNV) },
{VK_STRUCTURE_TYPE_DEVICE_DIAGNOSTICS_CONFIG_CREATE_INFO_NV, sizeof(VkDeviceDiagnosticsConfigCreateInfoNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES, sizeof(VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR, sizeof(VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT, sizeof(VkPhysicalDeviceRobustness2FeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_PROPERTIES_EXT, sizeof(VkPhysicalDeviceRobustness2PropertiesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES, sizeof(VkPhysicalDeviceImageRobustnessFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR, sizeof(VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT, sizeof(VkPhysicalDevice4444FormatsFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI, sizeof(VkPhysicalDeviceSubpassShadingFeaturesHUAWEI) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI, sizeof(VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI) },
{VK_STRUCTURE_TYPE_BUFFER_COPY_2, sizeof(VkBufferCopy2) },
{VK_STRUCTURE_TYPE_IMAGE_COPY_2, sizeof(VkImageCopy2) },
{VK_STRUCTURE_TYPE_IMAGE_BLIT_2, sizeof(VkImageBlit2) },
{VK_STRUCTURE_TYPE_BUFFER_IMAGE_COPY_2, sizeof(VkBufferImageCopy2) },
{VK_STRUCTURE_TYPE_IMAGE_RESOLVE_2, sizeof(VkImageResolve2) },
{VK_STRUCTURE_TYPE_COPY_BUFFER_INFO_2, sizeof(VkCopyBufferInfo2) },
{VK_STRUCTURE_TYPE_COPY_IMAGE_INFO_2, sizeof(VkCopyImageInfo2) },
{VK_STRUCTURE_TYPE_BLIT_IMAGE_INFO_2, sizeof(VkBlitImageInfo2) },
{VK_STRUCTURE_TYPE_COPY_BUFFER_TO_IMAGE_INFO_2, sizeof(VkCopyBufferToImageInfo2) },
{VK_STRUCTURE_TYPE_COPY_IMAGE_TO_BUFFER_INFO_2, sizeof(VkCopyImageToBufferInfo2) },
{VK_STRUCTURE_TYPE_RESOLVE_IMAGE_INFO_2, sizeof(VkResolveImageInfo2) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT, sizeof(VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT) },
{VK_STRUCTURE_TYPE_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR, sizeof(VkFragmentShadingRateAttachmentInfoKHR) },
{VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR, sizeof(VkPipelineFragmentShadingRateStateCreateInfoKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR, sizeof(VkPhysicalDeviceFragmentShadingRateFeaturesKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_PROPERTIES_KHR, sizeof(VkPhysicalDeviceFragmentShadingRatePropertiesKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_KHR, sizeof(VkPhysicalDeviceFragmentShadingRateKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES, sizeof(VkPhysicalDeviceShaderTerminateInvocationFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV, sizeof(VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_PROPERTIES_NV, sizeof(VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV) },
{VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_ENUM_STATE_CREATE_INFO_NV, sizeof(VkPipelineFragmentShadingRateEnumStateCreateInfoNV) },
{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_BUILD_SIZES_INFO_KHR, sizeof(VkAccelerationStructureBuildSizesInfoKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT, sizeof(VkPhysicalDeviceImage2DViewOf3DFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT, sizeof(VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT, sizeof(VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT, sizeof(VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT) },
{VK_STRUCTURE_TYPE_MUTABLE_DESCRIPTOR_TYPE_CREATE_INFO_EXT, sizeof(VkMutableDescriptorTypeCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT, sizeof(VkPhysicalDeviceDepthClipControlFeaturesEXT) },
{VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_DEPTH_CLIP_CONTROL_CREATE_INFO_EXT, sizeof(VkPipelineViewportDepthClipControlCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT, sizeof(VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV, sizeof(VkPhysicalDeviceExternalMemoryRDMAFeaturesNV) },
{VK_STRUCTURE_TYPE_VERTEX_INPUT_BINDING_DESCRIPTION_2_EXT, sizeof(VkVertexInputBindingDescription2EXT) },
{VK_STRUCTURE_TYPE_VERTEX_INPUT_ATTRIBUTE_DESCRIPTION_2_EXT, sizeof(VkVertexInputAttributeDescription2EXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT, sizeof(VkPhysicalDeviceColorWriteEnableFeaturesEXT) },
{VK_STRUCTURE_TYPE_PIPELINE_COLOR_WRITE_CREATE_INFO_EXT, sizeof(VkPipelineColorWriteCreateInfoEXT) },
{VK_STRUCTURE_TYPE_MEMORY_BARRIER_2, sizeof(VkMemoryBarrier2) },
{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER_2, sizeof(VkImageMemoryBarrier2) },
{VK_STRUCTURE_TYPE_BUFFER_MEMORY_BARRIER_2, sizeof(VkBufferMemoryBarrier2) },
{VK_STRUCTURE_TYPE_DEPENDENCY_INFO, sizeof(VkDependencyInfo) },
{VK_STRUCTURE_TYPE_SEMAPHORE_SUBMIT_INFO, sizeof(VkSemaphoreSubmitInfo) },
{VK_STRUCTURE_TYPE_COMMAND_BUFFER_SUBMIT_INFO, sizeof(VkCommandBufferSubmitInfo) },
{VK_STRUCTURE_TYPE_SUBMIT_INFO_2, sizeof(VkSubmitInfo2) },
{VK_STRUCTURE_TYPE_QUEUE_FAMILY_CHECKPOINT_PROPERTIES_2_NV, sizeof(VkQueueFamilyCheckpointProperties2NV) },
{VK_STRUCTURE_TYPE_CHECKPOINT_DATA_2_NV, sizeof(VkCheckpointData2NV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES, sizeof(VkPhysicalDeviceSynchronization2Features) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES_EXT, sizeof(VkPhysicalDeviceHostImageCopyFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_PROPERTIES_EXT, sizeof(VkPhysicalDeviceHostImageCopyPropertiesEXT) },
{VK_STRUCTURE_TYPE_MEMORY_TO_IMAGE_COPY_EXT, sizeof(VkMemoryToImageCopyEXT) },
{VK_STRUCTURE_TYPE_IMAGE_TO_MEMORY_COPY_EXT, sizeof(VkImageToMemoryCopyEXT) },
{VK_STRUCTURE_TYPE_COPY_MEMORY_TO_IMAGE_INFO_EXT, sizeof(VkCopyMemoryToImageInfoEXT) },
{VK_STRUCTURE_TYPE_COPY_IMAGE_TO_MEMORY_INFO_EXT, sizeof(VkCopyImageToMemoryInfoEXT) },
{VK_STRUCTURE_TYPE_COPY_IMAGE_TO_IMAGE_INFO_EXT, sizeof(VkCopyImageToImageInfoEXT) },
{VK_STRUCTURE_TYPE_HOST_IMAGE_LAYOUT_TRANSITION_INFO_EXT, sizeof(VkHostImageLayoutTransitionInfoEXT) },
{VK_STRUCTURE_TYPE_SUBRESOURCE_HOST_MEMCPY_SIZE_EXT, sizeof(VkSubresourceHostMemcpySizeEXT) },
{VK_STRUCTURE_TYPE_HOST_IMAGE_COPY_DEVICE_PERFORMANCE_QUERY_EXT, sizeof(VkHostImageCopyDevicePerformanceQueryEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT, sizeof(VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT, sizeof(VkPhysicalDeviceLegacyDitheringFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT, sizeof(VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT) },
{VK_STRUCTURE_TYPE_SUBPASS_RESOLVE_PERFORMANCE_QUERY_EXT, sizeof(VkSubpassResolvePerformanceQueryEXT) },
{VK_STRUCTURE_TYPE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_INFO_EXT, sizeof(VkMultisampledRenderToSingleSampledInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT, sizeof(VkPhysicalDevicePipelineProtectedAccessFeaturesEXT) },
{VK_STRUCTURE_TYPE_QUEUE_FAMILY_VIDEO_PROPERTIES_KHR, sizeof(VkQueueFamilyVideoPropertiesKHR) },
{VK_STRUCTURE_TYPE_QUEUE_FAMILY_QUERY_RESULT_STATUS_PROPERTIES_KHR, sizeof(VkQueueFamilyQueryResultStatusPropertiesKHR) },
{VK_STRUCTURE_TYPE_VIDEO_PROFILE_LIST_INFO_KHR, sizeof(VkVideoProfileListInfoKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_FORMAT_INFO_KHR, sizeof(VkPhysicalDeviceVideoFormatInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_FORMAT_PROPERTIES_KHR, sizeof(VkVideoFormatPropertiesKHR) },
{VK_STRUCTURE_TYPE_VIDEO_PROFILE_INFO_KHR, sizeof(VkVideoProfileInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_CAPABILITIES_KHR, sizeof(VkVideoCapabilitiesKHR) },
{VK_STRUCTURE_TYPE_VIDEO_SESSION_MEMORY_REQUIREMENTS_KHR, sizeof(VkVideoSessionMemoryRequirementsKHR) },
{VK_STRUCTURE_TYPE_BIND_VIDEO_SESSION_MEMORY_INFO_KHR, sizeof(VkBindVideoSessionMemoryInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_PICTURE_RESOURCE_INFO_KHR, sizeof(VkVideoPictureResourceInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_REFERENCE_SLOT_INFO_KHR, sizeof(VkVideoReferenceSlotInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_DECODE_CAPABILITIES_KHR, sizeof(VkVideoDecodeCapabilitiesKHR) },
{VK_STRUCTURE_TYPE_VIDEO_DECODE_USAGE_INFO_KHR, sizeof(VkVideoDecodeUsageInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_DECODE_INFO_KHR, sizeof(VkVideoDecodeInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PROFILE_INFO_KHR, sizeof(VkVideoDecodeH264ProfileInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_CAPABILITIES_KHR, sizeof(VkVideoDecodeH264CapabilitiesKHR) },
{VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_ADD_INFO_KHR, sizeof(VkVideoDecodeH264SessionParametersAddInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_SESSION_PARAMETERS_CREATE_INFO_KHR, sizeof(VkVideoDecodeH264SessionParametersCreateInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_PICTURE_INFO_KHR, sizeof(VkVideoDecodeH264PictureInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_DECODE_H264_DPB_SLOT_INFO_KHR, sizeof(VkVideoDecodeH264DpbSlotInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PROFILE_INFO_KHR, sizeof(VkVideoDecodeH265ProfileInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_CAPABILITIES_KHR, sizeof(VkVideoDecodeH265CapabilitiesKHR) },
{VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_ADD_INFO_KHR, sizeof(VkVideoDecodeH265SessionParametersAddInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_SESSION_PARAMETERS_CREATE_INFO_KHR, sizeof(VkVideoDecodeH265SessionParametersCreateInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_PICTURE_INFO_KHR, sizeof(VkVideoDecodeH265PictureInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_DECODE_H265_DPB_SLOT_INFO_KHR, sizeof(VkVideoDecodeH265DpbSlotInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_SESSION_CREATE_INFO_KHR, sizeof(VkVideoSessionCreateInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_CREATE_INFO_KHR, sizeof(VkVideoSessionParametersCreateInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_SESSION_PARAMETERS_UPDATE_INFO_KHR, sizeof(VkVideoSessionParametersUpdateInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_BEGIN_CODING_INFO_KHR, sizeof(VkVideoBeginCodingInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_END_CODING_INFO_KHR, sizeof(VkVideoEndCodingInfoKHR) },
{VK_STRUCTURE_TYPE_VIDEO_CODING_CONTROL_INFO_KHR, sizeof(VkVideoCodingControlInfoKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV, sizeof(VkPhysicalDeviceInheritedViewportScissorFeaturesNV) },
{VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_VIEWPORT_SCISSOR_INFO_NV, sizeof(VkCommandBufferInheritanceViewportScissorInfoNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT, sizeof(VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT, sizeof(VkPhysicalDeviceProvokingVertexFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_PROPERTIES_EXT, sizeof(VkPhysicalDeviceProvokingVertexPropertiesEXT) },
{VK_STRUCTURE_TYPE_PIPELINE_RASTERIZATION_PROVOKING_VERTEX_STATE_CREATE_INFO_EXT, sizeof(VkPipelineRasterizationProvokingVertexStateCreateInfoEXT) },
{VK_STRUCTURE_TYPE_CU_MODULE_CREATE_INFO_NVX, sizeof(VkCuModuleCreateInfoNVX) },
{VK_STRUCTURE_TYPE_CU_FUNCTION_CREATE_INFO_NVX, sizeof(VkCuFunctionCreateInfoNVX) },
{VK_STRUCTURE_TYPE_CU_LAUNCH_INFO_NVX, sizeof(VkCuLaunchInfoNVX) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT, sizeof(VkPhysicalDeviceDescriptorBufferFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_PROPERTIES_EXT, sizeof(VkPhysicalDeviceDescriptorBufferPropertiesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_DENSITY_MAP_PROPERTIES_EXT, sizeof(VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT) },
{VK_STRUCTURE_TYPE_DESCRIPTOR_ADDRESS_INFO_EXT, sizeof(VkDescriptorAddressInfoEXT) },
{VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_INFO_EXT, sizeof(VkDescriptorBufferBindingInfoEXT) },
{VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_PUSH_DESCRIPTOR_BUFFER_HANDLE_EXT, sizeof(VkDescriptorBufferBindingPushDescriptorBufferHandleEXT) },
{VK_STRUCTURE_TYPE_DESCRIPTOR_GET_INFO_EXT, sizeof(VkDescriptorGetInfoEXT) },
{VK_STRUCTURE_TYPE_BUFFER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT, sizeof(VkBufferCaptureDescriptorDataInfoEXT) },
{VK_STRUCTURE_TYPE_IMAGE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT, sizeof(VkImageCaptureDescriptorDataInfoEXT) },
{VK_STRUCTURE_TYPE_IMAGE_VIEW_CAPTURE_DESCRIPTOR_DATA_INFO_EXT, sizeof(VkImageViewCaptureDescriptorDataInfoEXT) },
{VK_STRUCTURE_TYPE_SAMPLER_CAPTURE_DESCRIPTOR_DATA_INFO_EXT, sizeof(VkSamplerCaptureDescriptorDataInfoEXT) },
{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CAPTURE_DESCRIPTOR_DATA_INFO_EXT, sizeof(VkAccelerationStructureCaptureDescriptorDataInfoEXT) },
{VK_STRUCTURE_TYPE_OPAQUE_CAPTURE_DESCRIPTOR_DATA_CREATE_INFO_EXT, sizeof(VkOpaqueCaptureDescriptorDataCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES, sizeof(VkPhysicalDeviceShaderIntegerDotProductFeatures) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_PROPERTIES, sizeof(VkPhysicalDeviceShaderIntegerDotProductProperties) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRM_PROPERTIES_EXT, sizeof(VkPhysicalDeviceDrmPropertiesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR, sizeof(VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_PROPERTIES_KHR, sizeof(VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV, sizeof(VkPhysicalDeviceRayTracingMotionBlurFeaturesNV) },
{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_GEOMETRY_MOTION_TRIANGLES_DATA_NV, sizeof(VkAccelerationStructureGeometryMotionTrianglesDataNV) },
{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_MOTION_INFO_NV, sizeof(VkAccelerationStructureMotionInfoNV) },
{VK_STRUCTURE_TYPE_MEMORY_GET_REMOTE_ADDRESS_INFO_NV, sizeof(VkMemoryGetRemoteAddressInfoNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT, sizeof(VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT) },
{VK_STRUCTURE_TYPE_FORMAT_PROPERTIES_3, sizeof(VkFormatProperties3) },
{VK_STRUCTURE_TYPE_DRM_FORMAT_MODIFIER_PROPERTIES_LIST_2_EXT, sizeof(VkDrmFormatModifierPropertiesList2EXT) },
{VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO, sizeof(VkPipelineRenderingCreateInfo) },
{VK_STRUCTURE_TYPE_RENDERING_INFO, sizeof(VkRenderingInfo) },
{VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO, sizeof(VkRenderingAttachmentInfo) },
{VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_SHADING_RATE_ATTACHMENT_INFO_KHR, sizeof(VkRenderingFragmentShadingRateAttachmentInfoKHR) },
{VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT, sizeof(VkRenderingFragmentDensityMapAttachmentInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES, sizeof(VkPhysicalDeviceDynamicRenderingFeatures) },
{VK_STRUCTURE_TYPE_COMMAND_BUFFER_INHERITANCE_RENDERING_INFO, sizeof(VkCommandBufferInheritanceRenderingInfo) },
{VK_STRUCTURE_TYPE_ATTACHMENT_SAMPLE_COUNT_INFO_AMD, sizeof(VkAttachmentSampleCountInfoAMD) },
{VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_ATTRIBUTES_INFO_NVX, sizeof(VkMultiviewPerViewAttributesInfoNVX) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT, sizeof(VkPhysicalDeviceImageViewMinLodFeaturesEXT) },
{VK_STRUCTURE_TYPE_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT, sizeof(VkImageViewMinLodCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT, sizeof(VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV, sizeof(VkPhysicalDeviceLinearColorAttachmentFeaturesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT, sizeof(VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_PROPERTIES_EXT, sizeof(VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT) },
{VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_LIBRARY_CREATE_INFO_EXT, sizeof(VkGraphicsPipelineLibraryCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE, sizeof(VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE) },
{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_BINDING_REFERENCE_VALVE, sizeof(VkDescriptorSetBindingReferenceVALVE) },
{VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_HOST_MAPPING_INFO_VALVE, sizeof(VkDescriptorSetLayoutHostMappingInfoVALVE) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT, sizeof(VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_PROPERTIES_EXT, sizeof(VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT) },
{VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_MODULE_IDENTIFIER_CREATE_INFO_EXT, sizeof(VkPipelineShaderStageModuleIdentifierCreateInfoEXT) },
{VK_STRUCTURE_TYPE_SHADER_MODULE_IDENTIFIER_EXT, sizeof(VkShaderModuleIdentifierEXT) },
{VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_CONTROL_EXT, sizeof(VkImageCompressionControlEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT, sizeof(VkPhysicalDeviceImageCompressionControlFeaturesEXT) },
{VK_STRUCTURE_TYPE_IMAGE_COMPRESSION_PROPERTIES_EXT, sizeof(VkImageCompressionPropertiesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT, sizeof(VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT) },
{VK_STRUCTURE_TYPE_IMAGE_SUBRESOURCE_2_KHR, sizeof(VkImageSubresource2KHR) },
{VK_STRUCTURE_TYPE_SUBRESOURCE_LAYOUT_2_KHR, sizeof(VkSubresourceLayout2KHR) },
{VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_CONTROL_EXT, sizeof(VkRenderPassCreationControlEXT) },
{VK_STRUCTURE_TYPE_RENDER_PASS_CREATION_FEEDBACK_CREATE_INFO_EXT, sizeof(VkRenderPassCreationFeedbackCreateInfoEXT) },
{VK_STRUCTURE_TYPE_RENDER_PASS_SUBPASS_FEEDBACK_CREATE_INFO_EXT, sizeof(VkRenderPassSubpassFeedbackCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT, sizeof(VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT) },
{VK_STRUCTURE_TYPE_MICROMAP_BUILD_INFO_EXT, sizeof(VkMicromapBuildInfoEXT) },
{VK_STRUCTURE_TYPE_MICROMAP_CREATE_INFO_EXT, sizeof(VkMicromapCreateInfoEXT) },
{VK_STRUCTURE_TYPE_MICROMAP_VERSION_INFO_EXT, sizeof(VkMicromapVersionInfoEXT) },
{VK_STRUCTURE_TYPE_COPY_MICROMAP_INFO_EXT, sizeof(VkCopyMicromapInfoEXT) },
{VK_STRUCTURE_TYPE_COPY_MICROMAP_TO_MEMORY_INFO_EXT, sizeof(VkCopyMicromapToMemoryInfoEXT) },
{VK_STRUCTURE_TYPE_COPY_MEMORY_TO_MICROMAP_INFO_EXT, sizeof(VkCopyMemoryToMicromapInfoEXT) },
{VK_STRUCTURE_TYPE_MICROMAP_BUILD_SIZES_INFO_EXT, sizeof(VkMicromapBuildSizesInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT, sizeof(VkPhysicalDeviceOpacityMicromapFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_PROPERTIES_EXT, sizeof(VkPhysicalDeviceOpacityMicromapPropertiesEXT) },
{VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_TRIANGLES_OPACITY_MICROMAP_EXT, sizeof(VkAccelerationStructureTrianglesOpacityMicromapEXT) },
{VK_STRUCTURE_TYPE_PIPELINE_PROPERTIES_IDENTIFIER_EXT, sizeof(VkPipelinePropertiesIdentifierEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT, sizeof(VkPhysicalDevicePipelinePropertiesFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD, sizeof(VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD) },
{VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_ACQUIRE_UNMODIFIED_EXT, sizeof(VkExternalMemoryAcquireUnmodifiedEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT, sizeof(VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT, sizeof(VkPhysicalDevicePipelineRobustnessFeaturesEXT) },
{VK_STRUCTURE_TYPE_PIPELINE_ROBUSTNESS_CREATE_INFO_EXT, sizeof(VkPipelineRobustnessCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_PROPERTIES_EXT, sizeof(VkPhysicalDevicePipelineRobustnessPropertiesEXT) },
{VK_STRUCTURE_TYPE_IMAGE_VIEW_SAMPLE_WEIGHT_CREATE_INFO_QCOM, sizeof(VkImageViewSampleWeightCreateInfoQCOM) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM, sizeof(VkPhysicalDeviceImageProcessingFeaturesQCOM) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_PROPERTIES_QCOM, sizeof(VkPhysicalDeviceImageProcessingPropertiesQCOM) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM, sizeof(VkPhysicalDeviceTilePropertiesFeaturesQCOM) },
{VK_STRUCTURE_TYPE_TILE_PROPERTIES_QCOM, sizeof(VkTilePropertiesQCOM) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC, sizeof(VkPhysicalDeviceAmigoProfilingFeaturesSEC) },
{VK_STRUCTURE_TYPE_AMIGO_PROFILING_SUBMIT_INFO_SEC, sizeof(VkAmigoProfilingSubmitInfoSEC) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT, sizeof(VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT, sizeof(VkPhysicalDeviceDepthClampZeroOneFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT, sizeof(VkPhysicalDeviceAddressBindingReportFeaturesEXT) },
{VK_STRUCTURE_TYPE_DEVICE_ADDRESS_BINDING_CALLBACK_DATA_EXT, sizeof(VkDeviceAddressBindingCallbackDataEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV, sizeof(VkPhysicalDeviceOpticalFlowFeaturesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_PROPERTIES_NV, sizeof(VkPhysicalDeviceOpticalFlowPropertiesNV) },
{VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_INFO_NV, sizeof(VkOpticalFlowImageFormatInfoNV) },
{VK_STRUCTURE_TYPE_OPTICAL_FLOW_IMAGE_FORMAT_PROPERTIES_NV, sizeof(VkOpticalFlowImageFormatPropertiesNV) },
{VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_INFO_NV, sizeof(VkOpticalFlowSessionCreateInfoNV) },
{VK_STRUCTURE_TYPE_OPTICAL_FLOW_SESSION_CREATE_PRIVATE_DATA_INFO_NV, sizeof(VkOpticalFlowSessionCreatePrivateDataInfoNV) },
{VK_STRUCTURE_TYPE_OPTICAL_FLOW_EXECUTE_INFO_NV, sizeof(VkOpticalFlowExecuteInfoNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT, sizeof(VkPhysicalDeviceFaultFeaturesEXT) },
{VK_STRUCTURE_TYPE_DEVICE_FAULT_COUNTS_EXT, sizeof(VkDeviceFaultCountsEXT) },
{VK_STRUCTURE_TYPE_DEVICE_FAULT_INFO_EXT, sizeof(VkDeviceFaultInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT, sizeof(VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT) },
{VK_STRUCTURE_TYPE_DEPTH_BIAS_INFO_EXT, sizeof(VkDepthBiasInfoEXT) },
{VK_STRUCTURE_TYPE_DEPTH_BIAS_REPRESENTATION_INFO_EXT, sizeof(VkDepthBiasRepresentationInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_PROPERTIES_ARM, sizeof(VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM, sizeof(VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM) },
{VK_STRUCTURE_TYPE_FRAME_BOUNDARY_EXT, sizeof(VkFrameBoundaryEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT, sizeof(VkPhysicalDeviceFrameBoundaryFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT, sizeof(VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT) },
{VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_EXT, sizeof(VkSurfacePresentModeEXT) },
{VK_STRUCTURE_TYPE_SURFACE_PRESENT_SCALING_CAPABILITIES_EXT, sizeof(VkSurfacePresentScalingCapabilitiesEXT) },
{VK_STRUCTURE_TYPE_SURFACE_PRESENT_MODE_COMPATIBILITY_EXT, sizeof(VkSurfacePresentModeCompatibilityEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT, sizeof(VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT) },
{VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_FENCE_INFO_EXT, sizeof(VkSwapchainPresentFenceInfoEXT) },
{VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODES_CREATE_INFO_EXT, sizeof(VkSwapchainPresentModesCreateInfoEXT) },
{VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_MODE_INFO_EXT, sizeof(VkSwapchainPresentModeInfoEXT) },
{VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_SCALING_CREATE_INFO_EXT, sizeof(VkSwapchainPresentScalingCreateInfoEXT) },
{VK_STRUCTURE_TYPE_RELEASE_SWAPCHAIN_IMAGES_INFO_EXT, sizeof(VkReleaseSwapchainImagesInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT, sizeof(VkPhysicalDeviceDepthBiasControlFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV, sizeof(VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_PROPERTIES_NV, sizeof(VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV) },
{VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_INFO_LUNARG, sizeof(VkDirectDriverLoadingInfoLUNARG) },
{VK_STRUCTURE_TYPE_DIRECT_DRIVER_LOADING_LIST_LUNARG, sizeof(VkDirectDriverLoadingListLUNARG) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM, sizeof(VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR, sizeof(VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR) },
{VK_STRUCTURE_TYPE_DEVICE_IMAGE_SUBRESOURCE_INFO_KHR, sizeof(VkDeviceImageSubresourceInfoKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_PROPERTIES_ARM, sizeof(VkPhysicalDeviceShaderCorePropertiesARM) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM, sizeof(VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM) },
{VK_STRUCTURE_TYPE_MULTIVIEW_PER_VIEW_RENDER_AREAS_RENDER_PASS_BEGIN_INFO_QCOM, sizeof(VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM) },
{VK_STRUCTURE_TYPE_QUERY_LOW_LATENCY_SUPPORT_NV, sizeof(VkQueryLowLatencySupportNV) },
{VK_STRUCTURE_TYPE_MEMORY_MAP_INFO_KHR, sizeof(VkMemoryMapInfoKHR) },
{VK_STRUCTURE_TYPE_MEMORY_UNMAP_INFO_KHR, sizeof(VkMemoryUnmapInfoKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT, sizeof(VkPhysicalDeviceShaderObjectFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_PROPERTIES_EXT, sizeof(VkPhysicalDeviceShaderObjectPropertiesEXT) },
{VK_STRUCTURE_TYPE_SHADER_CREATE_INFO_EXT, sizeof(VkShaderCreateInfoEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT, sizeof(VkPhysicalDeviceShaderTileImageFeaturesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_PROPERTIES_EXT, sizeof(VkPhysicalDeviceShaderTileImagePropertiesEXT) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR, sizeof(VkPhysicalDeviceCooperativeMatrixFeaturesKHR) },
{VK_STRUCTURE_TYPE_COOPERATIVE_MATRIX_PROPERTIES_KHR, sizeof(VkCooperativeMatrixPropertiesKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_PROPERTIES_KHR, sizeof(VkPhysicalDeviceCooperativeMatrixPropertiesKHR) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM, sizeof(VkPhysicalDeviceCubicClampFeaturesQCOM) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM, sizeof(VkPhysicalDeviceYcbcrDegammaFeaturesQCOM) },
{VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_YCBCR_DEGAMMA_CREATE_INFO_QCOM, sizeof(VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM, sizeof(VkPhysicalDeviceCubicWeightsFeaturesQCOM) },
{VK_STRUCTURE_TYPE_SAMPLER_CUBIC_WEIGHTS_CREATE_INFO_QCOM, sizeof(VkSamplerCubicWeightsCreateInfoQCOM) },
{VK_STRUCTURE_TYPE_BLIT_IMAGE_CUBIC_WEIGHTS_INFO_QCOM, sizeof(VkBlitImageCubicWeightsInfoQCOM) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM, sizeof(VkPhysicalDeviceImageProcessing2FeaturesQCOM) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_PROPERTIES_QCOM, sizeof(VkPhysicalDeviceImageProcessing2PropertiesQCOM) },
{VK_STRUCTURE_TYPE_SAMPLER_BLOCK_MATCH_WINDOW_CREATE_INFO_QCOM, sizeof(VkSamplerBlockMatchWindowCreateInfoQCOM) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV, sizeof(VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV) },
{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LAYERED_DRIVER_PROPERTIES_MSFT, sizeof(VkPhysicalDeviceLayeredDriverPropertiesMSFT) },
};

void* memdup(const void* mem, size_t size) { 
   void* out = malloc(size);

   if(out != NULL)
       memcpy(out, mem, size);

   return out;
}


void* copyVkStruct (const void* data){
    auto curr=data;
    while (true){
        if (curr==NULL){
        return NULL;
        }
        auto structure_type=((StreamStructure*)curr)->sType;
        if (!structure_type_to_size.contains(structure_type)){
            curr=((StreamStructure*)curr)->pNext;
            continue;
        }
        
        auto struct_size=structure_type_to_size[structure_type];
        auto result=memdup(curr, struct_size);
        
        return result;
    }
    
}


    void serialize_struct(VkBaseOutStructure::Builder& builder, VkBaseOutStructure member){
        
    
