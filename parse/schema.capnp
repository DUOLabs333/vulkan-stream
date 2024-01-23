@0xfccbbb584171b69d;

struct PFNvkInternalAllocationNotification {
id @0 :UInt64;
mem @1 :UInt64;
result @2 :UInt64;
pUserData @3 :List(UInt64);
size @4 :UInt64;
allocationType @5 :Int64;
allocationScope @6 :Int64;
}

struct PFNvkInternalFreeNotification {
id @0 :UInt64;
mem @1 :UInt64;
result @2 :UInt64;
pUserData @3 :List(UInt64);
size @4 :UInt64;
allocationType @5 :Int64;
allocationScope @6 :Int64;
}

struct PFNvkReallocationFunction {
id @0 :UInt64;
mem @1 :UInt64;
result @2 :UInt64;
pUserData @3 :List(UInt64);
pOriginal @4 :List(UInt64);
size @5 :UInt64;
alignment @6 :UInt64;
allocationScope @7 :Int64;
}

struct PFNvkAllocationFunction {
id @0 :UInt64;
mem @1 :UInt64;
result @2 :List(UInt64);
pUserData @3 :List(UInt64);
size @4 :UInt64;
alignment @5 :UInt64;
allocationScope @6 :Int64;
}

struct PFNvkFreeFunction {
id @0 :UInt64;
mem @1 :UInt64;
result @2 :UInt64;
pUserData @3 :List(UInt64);
pMemory @4 :List(UInt64);
}

struct PFNvkVoidFunction {
id @0 :UInt64;
mem @1 :UInt64;
result @2 :UInt64;
}

struct PFNvkDebugReportCallbackEXT {
id @0 :UInt64;
mem @1 :UInt64;
result @2 :UInt64;
flags @3 :Int64;
objectType @4 :Int64;
object @5 :UInt64;
location @6 :UInt64;
messageCode @7 :Int64;
pLayerPrefix @8 :List(UInt64);
pMessage @9 :List(UInt64);
pUserData @10 :List(UInt64);
}

struct PFNvkDebugUtilsMessengerCallbackEXT {
id @0 :UInt64;
mem @1 :UInt64;
result @2 :UInt64;
messageSeverity @3 :Int64;
messageTypes @4 :Int64;
pCallbackData @5 :List(VkDebugUtilsMessengerCallbackDataEXT);
pUserData @6 :List(UInt64);
}

struct PFNvkFaultCallbackFunction {
id @0 :UInt64;
mem @1 :UInt64;
result @2 :UInt64;
unrecordedFaults @3 :UInt64;
faultCount @4 :UInt64;
pFaults @5 :List(VkFaultData);
}

struct PFNvkDeviceMemoryReportCallbackEXT {
id @0 :UInt64;
mem @1 :UInt64;
result @2 :UInt64;
pCallbackData @3 :List(VkDeviceMemoryReportCallbackDataEXT);
pUserData @4 :List(UInt64);
}

struct PFNvkGetInstanceProcAddrLUNARG {
id @0 :UInt64;
mem @1 :UInt64;
result @2 :PFNvkVoidFunction;
instance @3 :UInt64;
pName @4 :List(UInt64);
}

struct VkBaseOutStructure {
sType @0 :Int64;
pNext @1 :List(VkBaseOutStructure);
}

struct VkBaseInStructure {
sType @0 :Int64;
pNext @1 :List(VkBaseInStructure);
}

struct VkOffset2D {
x @0 :Int64;
y @1 :Int64;
}

struct VkOffset3D {
x @0 :Int64;
y @1 :Int64;
z @2 :Int64;
}

struct VkExtent2D {
width @0 :UInt64;
height @1 :UInt64;
}

struct VkExtent3D {
width @0 :UInt64;
height @1 :UInt64;
depth @2 :UInt64;
}

struct VkViewport {
x @0 :Float32;
y @1 :Float32;
width @2 :Float32;
height @3 :Float32;
minDepth @4 :Float32;
maxDepth @5 :Float32;
}

struct VkRect2D {
offset @0 :VkOffset2D;
extent @1 :VkExtent2D;
}

struct VkClearRect {
rect @0 :VkRect2D;
baseArrayLayer @1 :UInt64;
layerCount @2 :UInt64;
}

struct VkComponentMapping {
r @0 :Int64;
g @1 :Int64;
b @2 :Int64;
a @3 :Int64;
}

struct VkPhysicalDeviceProperties {
apiVersion @0 :UInt64;
driverVersion @1 :UInt64;
vendorID @2 :UInt64;
deviceID @3 :UInt64;
deviceType @4 :Int64;
deviceName @5 :List(UInt64);
pipelineCacheUUID @6 :List(UInt64);
limits @7 :VkPhysicalDeviceLimits;
sparseProperties @8 :VkPhysicalDeviceSparseProperties;
}

struct VkExtensionProperties {
extensionName @0 :List(UInt64);
specVersion @1 :UInt64;
}

struct VkLayerProperties {
layerName @0 :List(UInt64);
specVersion @1 :UInt64;
implementationVersion @2 :UInt64;
description @3 :List(UInt64);
}

struct VkApplicationInfo {
sType @0 :Int64;
pNext @1 :PNext;
pApplicationName @2 :List(UInt64);
applicationVersion @3 :UInt64;
pEngineName @4 :List(UInt64);
engineVersion @5 :UInt64;
apiVersion @6 :UInt64;
}

struct VkAllocationCallbacks {
pUserData @0 :PUserData;
pfnAllocation @1 :PFNvkAllocationFunction;
pfnReallocation @2 :PFNvkReallocationFunction;
pfnFree @3 :PFNvkFreeFunction;
pfnInternalAllocation @4 :PFNvkInternalAllocationNotification;
pfnInternalFree @5 :PFNvkInternalFreeNotification;
}

struct VkDeviceQueueCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
queueFamilyIndex @3 :UInt64;
queueCount @4 :UInt64;
pQueuePriorities @5 :List(Float32);
}

struct VkDeviceCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
queueCreateInfoCount @3 :UInt64;
pQueueCreateInfos @4 :List(VkDeviceQueueCreateInfo);
enabledLayerCount @5 :UInt64;
ppEnabledLayerNames @6 :List(List(UInt64));
enabledExtensionCount @7 :UInt64;
ppEnabledExtensionNames @8 :List(List(UInt64));
pEnabledFeatures @9 :List(VkPhysicalDeviceFeatures);
}

struct VkInstanceCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
pApplicationInfo @3 :List(VkApplicationInfo);
enabledLayerCount @4 :UInt64;
ppEnabledLayerNames @5 :List(List(UInt64));
enabledExtensionCount @6 :UInt64;
ppEnabledExtensionNames @7 :List(List(UInt64));
}

struct VkQueueFamilyProperties {
queueFlags @0 :Int64;
queueCount @1 :UInt64;
timestampValidBits @2 :UInt64;
minImageTransferGranularity @3 :VkExtent3D;
}

struct VkPhysicalDeviceMemoryProperties {
memoryTypeCount @0 :UInt64;
memoryTypes @1 :List(VkMemoryType);
memoryHeapCount @2 :UInt64;
memoryHeaps @3 :List(VkMemoryHeap);
}

struct VkMemoryAllocateInfo {
sType @0 :Int64;
pNext @1 :PNext;
allocationSize @2 :UInt64;
memoryTypeIndex @3 :UInt64;
}

struct VkMemoryRequirements {
size @0 :UInt64;
alignment @1 :UInt64;
memoryTypeBits @2 :UInt64;
}

struct VkSparseImageFormatProperties {
aspectMask @0 :Int64;
imageGranularity @1 :VkExtent3D;
flags @2 :Int64;
}

struct VkSparseImageMemoryRequirements {
formatProperties @0 :VkSparseImageFormatProperties;
imageMipTailFirstLod @1 :UInt64;
imageMipTailSize @2 :UInt64;
imageMipTailOffset @3 :UInt64;
imageMipTailStride @4 :UInt64;
}

struct VkMemoryType {
propertyFlags @0 :Int64;
heapIndex @1 :UInt64;
}

struct VkMemoryHeap {
size @0 :UInt64;
flags @1 :Int64;
}

struct VkMappedMemoryRange {
sType @0 :Int64;
pNext @1 :PNext;
memory @2 :UInt64;
offset @3 :UInt64;
size @4 :UInt64;
}

struct VkFormatProperties {
linearTilingFeatures @0 :Int64;
optimalTilingFeatures @1 :Int64;
bufferFeatures @2 :Int64;
}

struct VkImageFormatProperties {
maxExtent @0 :VkExtent3D;
maxMipLevels @1 :UInt64;
maxArrayLayers @2 :UInt64;
sampleCounts @3 :Int64;
maxResourceSize @4 :UInt64;
}

struct VkDescriptorBufferInfo {
buffer @0 :UInt64;
offset @1 :UInt64;
range @2 :UInt64;
}

struct VkDescriptorImageInfo {
sampler @0 :UInt64;
imageView @1 :UInt64;
imageLayout @2 :Int64;
}

struct VkWriteDescriptorSet {
sType @0 :Int64;
pNext @1 :PNext;
dstSet @2 :UInt64;
dstBinding @3 :UInt64;
dstArrayElement @4 :UInt64;
descriptorCount @5 :UInt64;
descriptorType @6 :Int64;
pImageInfo @7 :List(VkDescriptorImageInfo);
pBufferInfo @8 :List(VkDescriptorBufferInfo);
pTexelBufferView @9 :List(UInt64);
}

struct VkCopyDescriptorSet {
sType @0 :Int64;
pNext @1 :PNext;
srcSet @2 :UInt64;
srcBinding @3 :UInt64;
srcArrayElement @4 :UInt64;
dstSet @5 :UInt64;
dstBinding @6 :UInt64;
dstArrayElement @7 :UInt64;
descriptorCount @8 :UInt64;
}

struct VkBufferUsageFlags2CreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
usage @2 :Int64;
}

struct VkBufferCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
size @3 :UInt64;
usage @4 :Int64;
sharingMode @5 :Int64;
queueFamilyIndexCount @6 :UInt64;
pQueueFamilyIndices @7 :List(UInt64);
}

struct VkBufferViewCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
buffer @3 :UInt64;
format @4 :Int64;
offset @5 :UInt64;
range @6 :UInt64;
}

struct VkImageSubresource {
aspectMask @0 :Int64;
mipLevel @1 :UInt64;
arrayLayer @2 :UInt64;
}

struct VkImageSubresourceLayers {
aspectMask @0 :Int64;
mipLevel @1 :UInt64;
baseArrayLayer @2 :UInt64;
layerCount @3 :UInt64;
}

struct VkImageSubresourceRange {
aspectMask @0 :Int64;
baseMipLevel @1 :UInt64;
levelCount @2 :UInt64;
baseArrayLayer @3 :UInt64;
layerCount @4 :UInt64;
}

struct VkMemoryBarrier {
sType @0 :Int64;
pNext @1 :PNext;
srcAccessMask @2 :Int64;
dstAccessMask @3 :Int64;
}

struct VkBufferMemoryBarrier {
sType @0 :Int64;
pNext @1 :PNext;
srcAccessMask @2 :Int64;
dstAccessMask @3 :Int64;
srcQueueFamilyIndex @4 :UInt64;
dstQueueFamilyIndex @5 :UInt64;
buffer @6 :UInt64;
offset @7 :UInt64;
size @8 :UInt64;
}

struct VkImageMemoryBarrier {
sType @0 :Int64;
pNext @1 :PNext;
srcAccessMask @2 :Int64;
dstAccessMask @3 :Int64;
oldLayout @4 :Int64;
newLayout @5 :Int64;
srcQueueFamilyIndex @6 :UInt64;
dstQueueFamilyIndex @7 :UInt64;
image @8 :UInt64;
subresourceRange @9 :VkImageSubresourceRange;
}

struct VkImageCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
imageType @3 :Int64;
format @4 :Int64;
extent @5 :VkExtent3D;
mipLevels @6 :UInt64;
arrayLayers @7 :UInt64;
samples @8 :Int64;
tiling @9 :Int64;
usage @10 :Int64;
sharingMode @11 :Int64;
queueFamilyIndexCount @12 :UInt64;
pQueueFamilyIndices @13 :List(UInt64);
initialLayout @14 :Int64;
}

struct VkSubresourceLayout {
offset @0 :UInt64;
size @1 :UInt64;
rowPitch @2 :UInt64;
arrayPitch @3 :UInt64;
depthPitch @4 :UInt64;
}

struct VkImageViewCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
image @3 :UInt64;
viewType @4 :Int64;
format @5 :Int64;
components @6 :VkComponentMapping;
subresourceRange @7 :VkImageSubresourceRange;
}

struct VkBufferCopy {
srcOffset @0 :UInt64;
dstOffset @1 :UInt64;
size @2 :UInt64;
}

struct VkSparseMemoryBind {
resourceOffset @0 :UInt64;
size @1 :UInt64;
memory @2 :UInt64;
memoryOffset @3 :UInt64;
flags @4 :Int64;
}

struct VkSparseImageMemoryBind {
subresource @0 :VkImageSubresource;
offset @1 :VkOffset3D;
extent @2 :VkExtent3D;
memory @3 :UInt64;
memoryOffset @4 :UInt64;
flags @5 :Int64;
}

struct VkSparseBufferMemoryBindInfo {
buffer @0 :UInt64;
bindCount @1 :UInt64;
pBinds @2 :List(VkSparseMemoryBind);
}

struct VkSparseImageOpaqueMemoryBindInfo {
image @0 :UInt64;
bindCount @1 :UInt64;
pBinds @2 :List(VkSparseMemoryBind);
}

struct VkSparseImageMemoryBindInfo {
image @0 :UInt64;
bindCount @1 :UInt64;
pBinds @2 :List(VkSparseImageMemoryBind);
}

struct VkBindSparseInfo {
sType @0 :Int64;
pNext @1 :PNext;
waitSemaphoreCount @2 :UInt64;
pWaitSemaphores @3 :List(UInt64);
bufferBindCount @4 :UInt64;
pBufferBinds @5 :List(VkSparseBufferMemoryBindInfo);
imageOpaqueBindCount @6 :UInt64;
pImageOpaqueBinds @7 :List(VkSparseImageOpaqueMemoryBindInfo);
imageBindCount @8 :UInt64;
pImageBinds @9 :List(VkSparseImageMemoryBindInfo);
signalSemaphoreCount @10 :UInt64;
pSignalSemaphores @11 :List(UInt64);
}

struct VkImageCopy {
srcSubresource @0 :VkImageSubresourceLayers;
srcOffset @1 :VkOffset3D;
dstSubresource @2 :VkImageSubresourceLayers;
dstOffset @3 :VkOffset3D;
extent @4 :VkExtent3D;
}

struct VkImageBlit {
srcSubresource @0 :VkImageSubresourceLayers;
srcOffsets @1 :List(VkOffset3D);
dstSubresource @2 :VkImageSubresourceLayers;
dstOffsets @3 :List(VkOffset3D);
}

struct VkBufferImageCopy {
bufferOffset @0 :UInt64;
bufferRowLength @1 :UInt64;
bufferImageHeight @2 :UInt64;
imageSubresource @3 :VkImageSubresourceLayers;
imageOffset @4 :VkOffset3D;
imageExtent @5 :VkExtent3D;
}

struct VkCopyMemoryIndirectCommandNV {
srcAddress @0 :UInt64;
dstAddress @1 :UInt64;
size @2 :UInt64;
}

struct VkCopyMemoryToImageIndirectCommandNV {
srcAddress @0 :UInt64;
bufferRowLength @1 :UInt64;
bufferImageHeight @2 :UInt64;
imageSubresource @3 :VkImageSubresourceLayers;
imageOffset @4 :VkOffset3D;
imageExtent @5 :VkExtent3D;
}

struct VkImageResolve {
srcSubresource @0 :VkImageSubresourceLayers;
srcOffset @1 :VkOffset3D;
dstSubresource @2 :VkImageSubresourceLayers;
dstOffset @3 :VkOffset3D;
extent @4 :VkExtent3D;
}

struct VkShaderModuleCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
codeSize @3 :UInt64;
pCode @4 :List(UInt64);
}

struct VkDescriptorSetLayoutBinding {
binding @0 :UInt64;
descriptorType @1 :Int64;
descriptorCount @2 :UInt64;
stageFlags @3 :Int64;
pImmutableSamplers @4 :List(UInt64);
}

struct VkDescriptorSetLayoutCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
bindingCount @3 :UInt64;
pBindings @4 :List(VkDescriptorSetLayoutBinding);
}

struct VkDescriptorPoolSize {
type @0 :Int64;
descriptorCount @1 :UInt64;
}

struct VkDescriptorPoolCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
maxSets @3 :UInt64;
poolSizeCount @4 :UInt64;
pPoolSizes @5 :List(VkDescriptorPoolSize);
}

struct VkDescriptorSetAllocateInfo {
sType @0 :Int64;
pNext @1 :PNext;
descriptorPool @2 :UInt64;
descriptorSetCount @3 :UInt64;
pSetLayouts @4 :List(UInt64);
}

struct VkSpecializationMapEntry {
constantID @0 :UInt64;
offset @1 :UInt64;
size @2 :UInt64;
}

struct VkSpecializationInfo {
mapEntryCount @0 :UInt64;
pMapEntries @1 :List(VkSpecializationMapEntry);
dataSize @2 :UInt64;
pData @3 :List(UInt64);
}

struct VkPipelineShaderStageCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
stage @3 :Int64;
module @4 :UInt64;
pName @5 :List(UInt64);
pSpecializationInfo @6 :List(VkSpecializationInfo);
}

struct VkComputePipelineCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
stage @3 :VkPipelineShaderStageCreateInfo;
layout @4 :UInt64;
basePipelineHandle @5 :UInt64;
basePipelineIndex @6 :Int64;
}

struct VkComputePipelineIndirectBufferInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
deviceAddress @2 :UInt64;
size @3 :UInt64;
pipelineDeviceAddressCaptureReplay @4 :UInt64;
}

struct VkPipelineCreateFlags2CreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
}

struct VkVertexInputBindingDescription {
binding @0 :UInt64;
stride @1 :UInt64;
inputRate @2 :Int64;
}

struct VkVertexInputAttributeDescription {
location @0 :UInt64;
binding @1 :UInt64;
format @2 :Int64;
offset @3 :UInt64;
}

struct VkPipelineVertexInputStateCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
vertexBindingDescriptionCount @3 :UInt64;
pVertexBindingDescriptions @4 :List(VkVertexInputBindingDescription);
vertexAttributeDescriptionCount @5 :UInt64;
pVertexAttributeDescriptions @6 :List(VkVertexInputAttributeDescription);
}

struct VkPipelineInputAssemblyStateCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
topology @3 :Int64;
primitiveRestartEnable @4 :UInt64;
}

struct VkPipelineTessellationStateCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
patchControlPoints @3 :UInt64;
}

struct VkPipelineViewportStateCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
viewportCount @3 :UInt64;
pViewports @4 :List(VkViewport);
scissorCount @5 :UInt64;
pScissors @6 :List(VkRect2D);
}

struct VkPipelineRasterizationStateCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
depthClampEnable @3 :UInt64;
rasterizerDiscardEnable @4 :UInt64;
polygonMode @5 :Int64;
cullMode @6 :Int64;
frontFace @7 :Int64;
depthBiasEnable @8 :UInt64;
depthBiasConstantFactor @9 :Float32;
depthBiasClamp @10 :Float32;
depthBiasSlopeFactor @11 :Float32;
lineWidth @12 :Float32;
}

struct VkPipelineMultisampleStateCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
rasterizationSamples @3 :Int64;
sampleShadingEnable @4 :UInt64;
minSampleShading @5 :Float32;
pSampleMask @6 :List(UInt64);
alphaToCoverageEnable @7 :UInt64;
alphaToOneEnable @8 :UInt64;
}

struct VkPipelineColorBlendAttachmentState {
blendEnable @0 :UInt64;
srcColorBlendFactor @1 :Int64;
dstColorBlendFactor @2 :Int64;
colorBlendOp @3 :Int64;
srcAlphaBlendFactor @4 :Int64;
dstAlphaBlendFactor @5 :Int64;
alphaBlendOp @6 :Int64;
colorWriteMask @7 :Int64;
}

struct VkPipelineColorBlendStateCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
logicOpEnable @3 :UInt64;
logicOp @4 :Int64;
attachmentCount @5 :UInt64;
pAttachments @6 :List(VkPipelineColorBlendAttachmentState);
blendConstants @7 :List(Float32);
}

struct VkPipelineDynamicStateCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
dynamicStateCount @3 :UInt64;
pDynamicStates @4 :List(Int64);
}

struct VkStencilOpState {
failOp @0 :Int64;
passOp @1 :Int64;
depthFailOp @2 :Int64;
compareOp @3 :Int64;
compareMask @4 :UInt64;
writeMask @5 :UInt64;
reference @6 :UInt64;
}

struct VkPipelineDepthStencilStateCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
depthTestEnable @3 :UInt64;
depthWriteEnable @4 :UInt64;
depthCompareOp @5 :Int64;
depthBoundsTestEnable @6 :UInt64;
stencilTestEnable @7 :UInt64;
front @8 :VkStencilOpState;
back @9 :VkStencilOpState;
minDepthBounds @10 :Float32;
maxDepthBounds @11 :Float32;
}

struct VkGraphicsPipelineCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
stageCount @3 :UInt64;
pStages @4 :List(VkPipelineShaderStageCreateInfo);
pVertexInputState @5 :List(VkPipelineVertexInputStateCreateInfo);
pInputAssemblyState @6 :List(VkPipelineInputAssemblyStateCreateInfo);
pTessellationState @7 :List(VkPipelineTessellationStateCreateInfo);
pViewportState @8 :List(VkPipelineViewportStateCreateInfo);
pRasterizationState @9 :List(VkPipelineRasterizationStateCreateInfo);
pMultisampleState @10 :List(VkPipelineMultisampleStateCreateInfo);
pDepthStencilState @11 :List(VkPipelineDepthStencilStateCreateInfo);
pColorBlendState @12 :List(VkPipelineColorBlendStateCreateInfo);
pDynamicState @13 :List(VkPipelineDynamicStateCreateInfo);
layout @14 :UInt64;
renderPass @15 :UInt64;
subpass @16 :UInt64;
basePipelineHandle @17 :UInt64;
basePipelineIndex @18 :Int64;
}

struct VkPipelineCacheCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
initialDataSize @3 :UInt64;
pInitialData @4 :List(UInt64);
}

struct VkPipelineCacheHeaderVersionOne {
headerSize @0 :UInt64;
headerVersion @1 :Int64;
vendorID @2 :UInt64;
deviceID @3 :UInt64;
pipelineCacheUUID @4 :List(UInt64);
}

struct VkPipelineCacheStageValidationIndexEntry {
codeSize @0 :UInt64;
codeOffset @1 :UInt64;
}

struct VkPipelineCacheSafetyCriticalIndexEntry {
pipelineIdentifier @0 :List(UInt64);
pipelineMemorySize @1 :UInt64;
jsonSize @2 :UInt64;
jsonOffset @3 :UInt64;
stageIndexCount @4 :UInt64;
stageIndexStride @5 :UInt64;
stageIndexOffset @6 :UInt64;
}

struct VkPipelineCacheHeaderVersionSafetyCriticalOne {
headerVersionOne @0 :VkPipelineCacheHeaderVersionOne;
validationVersion @1 :Int64;
implementationData @2 :UInt64;
pipelineIndexCount @3 :UInt64;
pipelineIndexStride @4 :UInt64;
pipelineIndexOffset @5 :UInt64;
}

struct VkPushConstantRange {
stageFlags @0 :Int64;
offset @1 :UInt64;
size @2 :UInt64;
}

struct VkPipelineLayoutCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
setLayoutCount @3 :UInt64;
pSetLayouts @4 :List(UInt64);
pushConstantRangeCount @5 :UInt64;
pPushConstantRanges @6 :List(VkPushConstantRange);
}

struct VkSamplerCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
magFilter @3 :Int64;
minFilter @4 :Int64;
mipmapMode @5 :Int64;
addressModeU @6 :Int64;
addressModeV @7 :Int64;
addressModeW @8 :Int64;
mipLodBias @9 :Float32;
anisotropyEnable @10 :UInt64;
maxAnisotropy @11 :Float32;
compareEnable @12 :UInt64;
compareOp @13 :Int64;
minLod @14 :Float32;
maxLod @15 :Float32;
borderColor @16 :Int64;
unnormalizedCoordinates @17 :UInt64;
}

struct VkCommandPoolCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
queueFamilyIndex @3 :UInt64;
}

struct VkCommandBufferAllocateInfo {
sType @0 :Int64;
pNext @1 :PNext;
commandPool @2 :UInt64;
level @3 :Int64;
commandBufferCount @4 :UInt64;
}

struct VkCommandBufferInheritanceInfo {
sType @0 :Int64;
pNext @1 :PNext;
renderPass @2 :UInt64;
subpass @3 :UInt64;
framebuffer @4 :UInt64;
occlusionQueryEnable @5 :UInt64;
queryFlags @6 :Int64;
pipelineStatistics @7 :Int64;
}

struct VkCommandBufferBeginInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
pInheritanceInfo @3 :List(VkCommandBufferInheritanceInfo);
}

struct VkRenderPassBeginInfo {
sType @0 :Int64;
pNext @1 :PNext;
renderPass @2 :UInt64;
framebuffer @3 :UInt64;
renderArea @4 :VkRect2D;
clearValueCount @5 :UInt64;
pClearValues @6 :List(VkClearValue);
}

struct VkClearColorValue {
float32 @0 :List(Float32);
int32 @1 :List(Int64);
uint32 @2 :List(UInt64);
}

struct VkClearDepthStencilValue {
depth @0 :Float32;
stencil @1 :UInt64;
}

struct VkClearValue {
color @0 :VkClearColorValue;
depthStencil @1 :VkClearDepthStencilValue;
}

struct VkClearAttachment {
aspectMask @0 :Int64;
colorAttachment @1 :UInt64;
clearValue @2 :VkClearValue;
}

struct VkAttachmentDescription {
flags @0 :Int64;
format @1 :Int64;
samples @2 :Int64;
loadOp @3 :Int64;
storeOp @4 :Int64;
stencilLoadOp @5 :Int64;
stencilStoreOp @6 :Int64;
initialLayout @7 :Int64;
finalLayout @8 :Int64;
}

struct VkAttachmentReference {
attachment @0 :UInt64;
layout @1 :Int64;
}

struct VkSubpassDescription {
flags @0 :Int64;
pipelineBindPoint @1 :Int64;
inputAttachmentCount @2 :UInt64;
pInputAttachments @3 :List(VkAttachmentReference);
colorAttachmentCount @4 :UInt64;
pColorAttachments @5 :List(VkAttachmentReference);
pResolveAttachments @6 :List(VkAttachmentReference);
pDepthStencilAttachment @7 :List(VkAttachmentReference);
preserveAttachmentCount @8 :UInt64;
pPreserveAttachments @9 :List(UInt64);
}

struct VkSubpassDependency {
srcSubpass @0 :UInt64;
dstSubpass @1 :UInt64;
srcStageMask @2 :Int64;
dstStageMask @3 :Int64;
srcAccessMask @4 :Int64;
dstAccessMask @5 :Int64;
dependencyFlags @6 :Int64;
}

struct VkRenderPassCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
attachmentCount @3 :UInt64;
pAttachments @4 :List(VkAttachmentDescription);
subpassCount @5 :UInt64;
pSubpasses @6 :List(VkSubpassDescription);
dependencyCount @7 :UInt64;
pDependencies @8 :List(VkSubpassDependency);
}

struct VkEventCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
}

struct VkFenceCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
}

struct VkPhysicalDeviceFeatures {
robustBufferAccess @0 :UInt64;
fullDrawIndexUint32 @1 :UInt64;
imageCubeArray @2 :UInt64;
independentBlend @3 :UInt64;
geometryShader @4 :UInt64;
tessellationShader @5 :UInt64;
sampleRateShading @6 :UInt64;
dualSrcBlend @7 :UInt64;
logicOp @8 :UInt64;
multiDrawIndirect @9 :UInt64;
drawIndirectFirstInstance @10 :UInt64;
depthClamp @11 :UInt64;
depthBiasClamp @12 :UInt64;
fillModeNonSolid @13 :UInt64;
depthBounds @14 :UInt64;
wideLines @15 :UInt64;
largePoints @16 :UInt64;
alphaToOne @17 :UInt64;
multiViewport @18 :UInt64;
samplerAnisotropy @19 :UInt64;
textureCompressionETC2 @20 :UInt64;
textureCompressionASTCLDR @21 :UInt64;
textureCompressionBC @22 :UInt64;
occlusionQueryPrecise @23 :UInt64;
pipelineStatisticsQuery @24 :UInt64;
vertexPipelineStoresAndAtomics @25 :UInt64;
fragmentStoresAndAtomics @26 :UInt64;
shaderTessellationAndGeometryPointSize @27 :UInt64;
shaderImageGatherExtended @28 :UInt64;
shaderStorageImageExtendedFormats @29 :UInt64;
shaderStorageImageMultisample @30 :UInt64;
shaderStorageImageReadWithoutFormat @31 :UInt64;
shaderStorageImageWriteWithoutFormat @32 :UInt64;
shaderUniformBufferArrayDynamicIndexing @33 :UInt64;
shaderSampledImageArrayDynamicIndexing @34 :UInt64;
shaderStorageBufferArrayDynamicIndexing @35 :UInt64;
shaderStorageImageArrayDynamicIndexing @36 :UInt64;
shaderClipDistance @37 :UInt64;
shaderCullDistance @38 :UInt64;
shaderFloat64 @39 :UInt64;
shaderInt64 @40 :UInt64;
shaderInt16 @41 :UInt64;
shaderResourceResidency @42 :UInt64;
shaderResourceMinLod @43 :UInt64;
sparseBinding @44 :UInt64;
sparseResidencyBuffer @45 :UInt64;
sparseResidencyImage2D @46 :UInt64;
sparseResidencyImage3D @47 :UInt64;
sparseResidency2Samples @48 :UInt64;
sparseResidency4Samples @49 :UInt64;
sparseResidency8Samples @50 :UInt64;
sparseResidency16Samples @51 :UInt64;
sparseResidencyAliased @52 :UInt64;
variableMultisampleRate @53 :UInt64;
inheritedQueries @54 :UInt64;
}

struct VkPhysicalDeviceSparseProperties {
residencyStandard2DBlockShape @0 :UInt64;
residencyStandard2DMultisampleBlockShape @1 :UInt64;
residencyStandard3DBlockShape @2 :UInt64;
residencyAlignedMipSize @3 :UInt64;
residencyNonResidentStrict @4 :UInt64;
}

struct VkPhysicalDeviceLimits {
maxImageDimension1D @0 :UInt64;
maxImageDimension2D @1 :UInt64;
maxImageDimension3D @2 :UInt64;
maxImageDimensionCube @3 :UInt64;
maxImageArrayLayers @4 :UInt64;
maxTexelBufferElements @5 :UInt64;
maxUniformBufferRange @6 :UInt64;
maxStorageBufferRange @7 :UInt64;
maxPushConstantsSize @8 :UInt64;
maxMemoryAllocationCount @9 :UInt64;
maxSamplerAllocationCount @10 :UInt64;
bufferImageGranularity @11 :UInt64;
sparseAddressSpaceSize @12 :UInt64;
maxBoundDescriptorSets @13 :UInt64;
maxPerStageDescriptorSamplers @14 :UInt64;
maxPerStageDescriptorUniformBuffers @15 :UInt64;
maxPerStageDescriptorStorageBuffers @16 :UInt64;
maxPerStageDescriptorSampledImages @17 :UInt64;
maxPerStageDescriptorStorageImages @18 :UInt64;
maxPerStageDescriptorInputAttachments @19 :UInt64;
maxPerStageResources @20 :UInt64;
maxDescriptorSetSamplers @21 :UInt64;
maxDescriptorSetUniformBuffers @22 :UInt64;
maxDescriptorSetUniformBuffersDynamic @23 :UInt64;
maxDescriptorSetStorageBuffers @24 :UInt64;
maxDescriptorSetStorageBuffersDynamic @25 :UInt64;
maxDescriptorSetSampledImages @26 :UInt64;
maxDescriptorSetStorageImages @27 :UInt64;
maxDescriptorSetInputAttachments @28 :UInt64;
maxVertexInputAttributes @29 :UInt64;
maxVertexInputBindings @30 :UInt64;
maxVertexInputAttributeOffset @31 :UInt64;
maxVertexInputBindingStride @32 :UInt64;
maxVertexOutputComponents @33 :UInt64;
maxTessellationGenerationLevel @34 :UInt64;
maxTessellationPatchSize @35 :UInt64;
maxTessellationControlPerVertexInputComponents @36 :UInt64;
maxTessellationControlPerVertexOutputComponents @37 :UInt64;
maxTessellationControlPerPatchOutputComponents @38 :UInt64;
maxTessellationControlTotalOutputComponents @39 :UInt64;
maxTessellationEvaluationInputComponents @40 :UInt64;
maxTessellationEvaluationOutputComponents @41 :UInt64;
maxGeometryShaderInvocations @42 :UInt64;
maxGeometryInputComponents @43 :UInt64;
maxGeometryOutputComponents @44 :UInt64;
maxGeometryOutputVertices @45 :UInt64;
maxGeometryTotalOutputComponents @46 :UInt64;
maxFragmentInputComponents @47 :UInt64;
maxFragmentOutputAttachments @48 :UInt64;
maxFragmentDualSrcAttachments @49 :UInt64;
maxFragmentCombinedOutputResources @50 :UInt64;
maxComputeSharedMemorySize @51 :UInt64;
maxComputeWorkGroupCount @52 :List(UInt64);
maxComputeWorkGroupInvocations @53 :UInt64;
maxComputeWorkGroupSize @54 :List(UInt64);
subPixelPrecisionBits @55 :UInt64;
subTexelPrecisionBits @56 :UInt64;
mipmapPrecisionBits @57 :UInt64;
maxDrawIndexedIndexValue @58 :UInt64;
maxDrawIndirectCount @59 :UInt64;
maxSamplerLodBias @60 :Float32;
maxSamplerAnisotropy @61 :Float32;
maxViewports @62 :UInt64;
maxViewportDimensions @63 :List(UInt64);
viewportBoundsRange @64 :List(Float32);
viewportSubPixelBits @65 :UInt64;
minMemoryMapAlignment @66 :UInt64;
minTexelBufferOffsetAlignment @67 :UInt64;
minUniformBufferOffsetAlignment @68 :UInt64;
minStorageBufferOffsetAlignment @69 :UInt64;
minTexelOffset @70 :Int64;
maxTexelOffset @71 :UInt64;
minTexelGatherOffset @72 :Int64;
maxTexelGatherOffset @73 :UInt64;
minInterpolationOffset @74 :Float32;
maxInterpolationOffset @75 :Float32;
subPixelInterpolationOffsetBits @76 :UInt64;
maxFramebufferWidth @77 :UInt64;
maxFramebufferHeight @78 :UInt64;
maxFramebufferLayers @79 :UInt64;
framebufferColorSampleCounts @80 :Int64;
framebufferDepthSampleCounts @81 :Int64;
framebufferStencilSampleCounts @82 :Int64;
framebufferNoAttachmentsSampleCounts @83 :Int64;
maxColorAttachments @84 :UInt64;
sampledImageColorSampleCounts @85 :Int64;
sampledImageIntegerSampleCounts @86 :Int64;
sampledImageDepthSampleCounts @87 :Int64;
sampledImageStencilSampleCounts @88 :Int64;
storageImageSampleCounts @89 :Int64;
maxSampleMaskWords @90 :UInt64;
timestampComputeAndGraphics @91 :UInt64;
timestampPeriod @92 :Float32;
maxClipDistances @93 :UInt64;
maxCullDistances @94 :UInt64;
maxCombinedClipAndCullDistances @95 :UInt64;
discreteQueuePriorities @96 :UInt64;
pointSizeRange @97 :List(Float32);
lineWidthRange @98 :List(Float32);
pointSizeGranularity @99 :Float32;
lineWidthGranularity @100 :Float32;
strictLines @101 :UInt64;
standardSampleLocations @102 :UInt64;
optimalBufferCopyOffsetAlignment @103 :UInt64;
optimalBufferCopyRowPitchAlignment @104 :UInt64;
nonCoherentAtomSize @105 :UInt64;
}

struct VkSemaphoreCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
}

struct VkQueryPoolCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
queryType @3 :Int64;
queryCount @4 :UInt64;
pipelineStatistics @5 :Int64;
}

struct VkFramebufferCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
renderPass @3 :UInt64;
attachmentCount @4 :UInt64;
pAttachments @5 :List(UInt64);
width @6 :UInt64;
height @7 :UInt64;
layers @8 :UInt64;
}

struct VkDrawIndirectCommand {
vertexCount @0 :UInt64;
instanceCount @1 :UInt64;
firstVertex @2 :UInt64;
firstInstance @3 :UInt64;
}

struct VkDrawIndexedIndirectCommand {
indexCount @0 :UInt64;
instanceCount @1 :UInt64;
firstIndex @2 :UInt64;
vertexOffset @3 :Int64;
firstInstance @4 :UInt64;
}

struct VkDispatchIndirectCommand {
x @0 :UInt64;
y @1 :UInt64;
z @2 :UInt64;
}

struct VkMultiDrawInfoEXT {
firstVertex @0 :UInt64;
vertexCount @1 :UInt64;
}

struct VkMultiDrawIndexedInfoEXT {
firstIndex @0 :UInt64;
indexCount @1 :UInt64;
vertexOffset @2 :Int64;
}

struct VkSubmitInfo {
sType @0 :Int64;
pNext @1 :PNext;
waitSemaphoreCount @2 :UInt64;
pWaitSemaphores @3 :List(UInt64);
pWaitDstStageMask @4 :List(Int64);
commandBufferCount @5 :UInt64;
pCommandBuffers @6 :List(UInt64);
signalSemaphoreCount @7 :UInt64;
pSignalSemaphores @8 :List(UInt64);
}

struct VkDisplayPropertiesKHR {
display @0 :UInt64;
displayName @1 :List(UInt64);
physicalDimensions @2 :VkExtent2D;
physicalResolution @3 :VkExtent2D;
supportedTransforms @4 :Int64;
planeReorderPossible @5 :UInt64;
persistentContent @6 :UInt64;
}

struct VkDisplayPlanePropertiesKHR {
currentDisplay @0 :UInt64;
currentStackIndex @1 :UInt64;
}

struct VkDisplayModeParametersKHR {
visibleRegion @0 :VkExtent2D;
refreshRate @1 :UInt64;
}

struct VkDisplayModePropertiesKHR {
displayMode @0 :UInt64;
parameters @1 :VkDisplayModeParametersKHR;
}

struct VkDisplayModeCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
parameters @3 :VkDisplayModeParametersKHR;
}

struct VkDisplayPlaneCapabilitiesKHR {
supportedAlpha @0 :Int64;
minSrcPosition @1 :VkOffset2D;
maxSrcPosition @2 :VkOffset2D;
minSrcExtent @3 :VkExtent2D;
maxSrcExtent @4 :VkExtent2D;
minDstPosition @5 :VkOffset2D;
maxDstPosition @6 :VkOffset2D;
minDstExtent @7 :VkExtent2D;
maxDstExtent @8 :VkExtent2D;
}

struct VkDisplaySurfaceCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
displayMode @3 :UInt64;
planeIndex @4 :UInt64;
planeStackIndex @5 :UInt64;
transform @6 :Int64;
globalAlpha @7 :Float32;
alphaMode @8 :Int64;
imageExtent @9 :VkExtent2D;
}

struct VkDisplayPresentInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
srcRect @2 :VkRect2D;
dstRect @3 :VkRect2D;
persistent @4 :UInt64;
}

struct VkSurfaceCapabilitiesKHR {
minImageCount @0 :UInt64;
maxImageCount @1 :UInt64;
currentExtent @2 :VkExtent2D;
minImageExtent @3 :VkExtent2D;
maxImageExtent @4 :VkExtent2D;
maxImageArrayLayers @5 :UInt64;
supportedTransforms @6 :Int64;
currentTransform @7 :Int64;
supportedCompositeAlpha @8 :Int64;
supportedUsageFlags @9 :Int64;
}

struct VkAndroidSurfaceCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
window @3 :List(UInt64);
}

struct VkViSurfaceCreateInfoNN {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
window @3 :List(UInt64);
}

struct VkWaylandSurfaceCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
display @3 :List(UInt64);
surface @4 :List(UInt64);
}

struct VkWin32SurfaceCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
hinstance @3 :UInt64;
hwnd @4 :UInt64;
}

struct VkXlibSurfaceCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
dpy @3 :List(UInt64);
window @4 :UInt64;
}

struct VkXcbSurfaceCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
connection @3 :List(UInt64);
window @4 :UInt64;
}

struct VkDirectFBSurfaceCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
dfb @3 :List(UInt64);
surface @4 :List(UInt64);
}

struct VkImagePipeSurfaceCreateInfoFUCHSIA {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
imagePipeHandle @3 :UInt64;
}

struct VkStreamDescriptorSurfaceCreateInfoGGP {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
streamDescriptor @3 :UInt64;
}

struct VkScreenSurfaceCreateInfoQNX {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
context @3 :List(UInt64);
window @4 :List(UInt64);
}

struct VkSurfaceFormatKHR {
format @0 :Int64;
colorSpace @1 :Int64;
}

struct VkSwapchainCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
surface @3 :UInt64;
minImageCount @4 :UInt64;
imageFormat @5 :Int64;
imageColorSpace @6 :Int64;
imageExtent @7 :VkExtent2D;
imageArrayLayers @8 :UInt64;
imageUsage @9 :Int64;
imageSharingMode @10 :Int64;
queueFamilyIndexCount @11 :UInt64;
pQueueFamilyIndices @12 :List(UInt64);
preTransform @13 :Int64;
compositeAlpha @14 :Int64;
presentMode @15 :Int64;
clipped @16 :UInt64;
oldSwapchain @17 :UInt64;
}

struct VkPresentInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
waitSemaphoreCount @2 :UInt64;
pWaitSemaphores @3 :List(UInt64);
swapchainCount @4 :UInt64;
pSwapchains @5 :List(UInt64);
pImageIndices @6 :List(UInt64);
pResults @7 :List(Int64);
}

struct VkDebugReportCallbackCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
pfnCallback @3 :PFNvkDebugReportCallbackEXT;
pUserData @4 :PUserData;
}

struct VkValidationFlagsEXT {
sType @0 :Int64;
pNext @1 :PNext;
disabledValidationCheckCount @2 :UInt64;
pDisabledValidationChecks @3 :List(Int64);
}

struct VkValidationFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
enabledValidationFeatureCount @2 :UInt64;
pEnabledValidationFeatures @3 :List(Int64);
disabledValidationFeatureCount @4 :UInt64;
pDisabledValidationFeatures @5 :List(Int64);
}

struct VkApplicationParametersEXT {
sType @0 :Int64;
pNext @1 :PNext;
vendorID @2 :UInt64;
deviceID @3 :UInt64;
key @4 :UInt64;
value @5 :UInt64;
}

struct VkPipelineRasterizationStateRasterizationOrderAMD {
sType @0 :Int64;
pNext @1 :PNext;
rasterizationOrder @2 :Int64;
}

struct VkDebugMarkerObjectNameInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
objectType @2 :Int64;
object @3 :UInt64;
pObjectName @4 :List(UInt64);
}

struct VkDebugMarkerObjectTagInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
objectType @2 :Int64;
object @3 :UInt64;
tagName @4 :UInt64;
tagSize @5 :UInt64;
pTag @6 :List(UInt64);
}

struct VkDebugMarkerMarkerInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
pMarkerName @2 :List(UInt64);
color @3 :List(Float32);
}

struct VkDedicatedAllocationImageCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
dedicatedAllocation @2 :UInt64;
}

struct VkDedicatedAllocationBufferCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
dedicatedAllocation @2 :UInt64;
}

struct VkDedicatedAllocationMemoryAllocateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
image @2 :UInt64;
buffer @3 :UInt64;
}

struct VkExternalImageFormatPropertiesNV {
imageFormatProperties @0 :VkImageFormatProperties;
externalMemoryFeatures @1 :Int64;
exportFromImportedHandleTypes @2 :Int64;
compatibleHandleTypes @3 :Int64;
}

struct VkExternalMemoryImageCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
handleTypes @2 :Int64;
}

struct VkExportMemoryAllocateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
handleTypes @2 :Int64;
}

struct VkImportMemoryWin32HandleInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
handleType @2 :Int64;
handle @3 :UInt64;
}

struct VkExportMemoryWin32HandleInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
pAttributes @2 :List(UInt64);
dwAccess @3 :UInt64;
}

struct VkExportMemorySciBufInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
pAttributes @2 :UInt64;
}

struct VkImportMemorySciBufInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
handleType @2 :Int64;
handle @3 :UInt64;
}

struct VkMemoryGetSciBufInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
memory @2 :UInt64;
handleType @3 :Int64;
}

struct VkMemorySciBufPropertiesNV {
sType @0 :Int64;
pNext @1 :PNext;
memoryTypeBits @2 :UInt64;
}

struct VkPhysicalDeviceExternalMemorySciBufFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
sciBufImport @2 :UInt64;
sciBufExport @3 :UInt64;
}

struct VkWin32KeyedMutexAcquireReleaseInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
acquireCount @2 :UInt64;
pAcquireSyncs @3 :List(UInt64);
pAcquireKeys @4 :List(UInt64);
pAcquireTimeoutMilliseconds @5 :List(UInt64);
releaseCount @6 :UInt64;
pReleaseSyncs @7 :List(UInt64);
pReleaseKeys @8 :List(UInt64);
}

struct VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
deviceGeneratedCommands @2 :UInt64;
}

struct VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
deviceGeneratedCompute @2 :UInt64;
deviceGeneratedComputePipelines @3 :UInt64;
deviceGeneratedComputeCaptureReplay @4 :UInt64;
}

struct VkDevicePrivateDataCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
privateDataSlotRequestCount @2 :UInt64;
}

struct VkPrivateDataSlotCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
}

struct VkPhysicalDevicePrivateDataFeatures {
sType @0 :Int64;
pNext @1 :PNext;
privateData @2 :UInt64;
}

struct VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV {
sType @0 :Int64;
pNext @1 :PNext;
maxGraphicsShaderGroupCount @2 :UInt64;
maxIndirectSequenceCount @3 :UInt64;
maxIndirectCommandsTokenCount @4 :UInt64;
maxIndirectCommandsStreamCount @5 :UInt64;
maxIndirectCommandsTokenOffset @6 :UInt64;
maxIndirectCommandsStreamStride @7 :UInt64;
minSequencesCountBufferOffsetAlignment @8 :UInt64;
minSequencesIndexBufferOffsetAlignment @9 :UInt64;
minIndirectCommandsBufferOffsetAlignment @10 :UInt64;
}

struct VkPhysicalDeviceMultiDrawPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
maxMultiDrawCount @2 :UInt64;
}

struct VkGraphicsShaderGroupCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
stageCount @2 :UInt64;
pStages @3 :List(VkPipelineShaderStageCreateInfo);
pVertexInputState @4 :List(VkPipelineVertexInputStateCreateInfo);
pTessellationState @5 :List(VkPipelineTessellationStateCreateInfo);
}

struct VkGraphicsPipelineShaderGroupsCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
groupCount @2 :UInt64;
pGroups @3 :List(VkGraphicsShaderGroupCreateInfoNV);
pipelineCount @4 :UInt64;
pPipelines @5 :List(UInt64);
}

struct VkBindShaderGroupIndirectCommandNV {
groupIndex @0 :UInt64;
}

struct VkBindIndexBufferIndirectCommandNV {
bufferAddress @0 :UInt64;
size @1 :UInt64;
indexType @2 :Int64;
}

struct VkBindVertexBufferIndirectCommandNV {
bufferAddress @0 :UInt64;
size @1 :UInt64;
stride @2 :UInt64;
}

struct VkSetStateFlagsIndirectCommandNV {
data @0 :UInt64;
}

struct VkIndirectCommandsStreamNV {
buffer @0 :UInt64;
offset @1 :UInt64;
}

struct VkIndirectCommandsLayoutTokenNV {
sType @0 :Int64;
pNext @1 :PNext;
tokenType @2 :Int64;
stream @3 :UInt64;
offset @4 :UInt64;
vertexBindingUnit @5 :UInt64;
vertexDynamicStride @6 :UInt64;
pushconstantPipelineLayout @7 :UInt64;
pushconstantShaderStageFlags @8 :Int64;
pushconstantOffset @9 :UInt64;
pushconstantSize @10 :UInt64;
indirectStateFlags @11 :Int64;
indexTypeCount @12 :UInt64;
pIndexTypes @13 :List(Int64);
pIndexTypeValues @14 :List(UInt64);
}

struct VkIndirectCommandsLayoutCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
pipelineBindPoint @3 :Int64;
tokenCount @4 :UInt64;
pTokens @5 :List(VkIndirectCommandsLayoutTokenNV);
streamCount @6 :UInt64;
pStreamStrides @7 :List(UInt64);
}

struct VkGeneratedCommandsInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
pipelineBindPoint @2 :Int64;
pipeline @3 :UInt64;
indirectCommandsLayout @4 :UInt64;
streamCount @5 :UInt64;
pStreams @6 :List(VkIndirectCommandsStreamNV);
sequencesCount @7 :UInt64;
preprocessBuffer @8 :UInt64;
preprocessOffset @9 :UInt64;
preprocessSize @10 :UInt64;
sequencesCountBuffer @11 :UInt64;
sequencesCountOffset @12 :UInt64;
sequencesIndexBuffer @13 :UInt64;
sequencesIndexOffset @14 :UInt64;
}

struct VkGeneratedCommandsMemoryRequirementsInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
pipelineBindPoint @2 :Int64;
pipeline @3 :UInt64;
indirectCommandsLayout @4 :UInt64;
maxSequencesCount @5 :UInt64;
}

struct VkPipelineIndirectDeviceAddressInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
pipelineBindPoint @2 :Int64;
pipeline @3 :UInt64;
}

struct VkBindPipelineIndirectCommandNV {
pipelineAddress @0 :UInt64;
}

struct VkPhysicalDeviceFeatures2 {
sType @0 :Int64;
pNext @1 :PNext;
features @2 :VkPhysicalDeviceFeatures;
}

struct VkPhysicalDeviceProperties2 {
sType @0 :Int64;
pNext @1 :PNext;
properties @2 :VkPhysicalDeviceProperties;
}

struct VkFormatProperties2 {
sType @0 :Int64;
pNext @1 :PNext;
formatProperties @2 :VkFormatProperties;
}

struct VkImageFormatProperties2 {
sType @0 :Int64;
pNext @1 :PNext;
imageFormatProperties @2 :VkImageFormatProperties;
}

struct VkPhysicalDeviceImageFormatInfo2 {
sType @0 :Int64;
pNext @1 :PNext;
format @2 :Int64;
type @3 :Int64;
tiling @4 :Int64;
usage @5 :Int64;
flags @6 :Int64;
}

struct VkQueueFamilyProperties2 {
sType @0 :Int64;
pNext @1 :PNext;
queueFamilyProperties @2 :VkQueueFamilyProperties;
}

struct VkPhysicalDeviceMemoryProperties2 {
sType @0 :Int64;
pNext @1 :PNext;
memoryProperties @2 :VkPhysicalDeviceMemoryProperties;
}

struct VkSparseImageFormatProperties2 {
sType @0 :Int64;
pNext @1 :PNext;
properties @2 :VkSparseImageFormatProperties;
}

struct VkPhysicalDeviceSparseImageFormatInfo2 {
sType @0 :Int64;
pNext @1 :PNext;
format @2 :Int64;
type @3 :Int64;
samples @4 :Int64;
usage @5 :Int64;
tiling @6 :Int64;
}

struct VkPhysicalDevicePushDescriptorPropertiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
maxPushDescriptors @2 :UInt64;
}

struct VkConformanceVersion {
major @0 :UInt64;
minor @1 :UInt64;
subminor @2 :UInt64;
patch @3 :UInt64;
}

struct VkPhysicalDeviceDriverProperties {
sType @0 :Int64;
pNext @1 :PNext;
driverID @2 :Int64;
driverName @3 :List(UInt64);
driverInfo @4 :List(UInt64);
conformanceVersion @5 :VkConformanceVersion;
}

struct VkPresentRegionsKHR {
sType @0 :Int64;
pNext @1 :PNext;
swapchainCount @2 :UInt64;
pRegions @3 :List(VkPresentRegionKHR);
}

struct VkPresentRegionKHR {
rectangleCount @0 :UInt64;
pRectangles @1 :List(VkRectLayerKHR);
}

struct VkRectLayerKHR {
offset @0 :VkOffset2D;
extent @1 :VkExtent2D;
layer @2 :UInt64;
}

struct VkPhysicalDeviceVariablePointersFeatures {
sType @0 :Int64;
pNext @1 :PNext;
variablePointersStorageBuffer @2 :UInt64;
variablePointers @3 :UInt64;
}

struct VkExternalMemoryProperties {
externalMemoryFeatures @0 :Int64;
exportFromImportedHandleTypes @1 :Int64;
compatibleHandleTypes @2 :Int64;
}

struct VkPhysicalDeviceExternalImageFormatInfo {
sType @0 :Int64;
pNext @1 :PNext;
handleType @2 :Int64;
}

struct VkExternalImageFormatProperties {
sType @0 :Int64;
pNext @1 :PNext;
externalMemoryProperties @2 :VkExternalMemoryProperties;
}

struct VkPhysicalDeviceExternalBufferInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
usage @3 :Int64;
handleType @4 :Int64;
}

struct VkExternalBufferProperties {
sType @0 :Int64;
pNext @1 :PNext;
externalMemoryProperties @2 :VkExternalMemoryProperties;
}

struct VkPhysicalDeviceIDProperties {
sType @0 :Int64;
pNext @1 :PNext;
deviceUUID @2 :List(UInt64);
driverUUID @3 :List(UInt64);
deviceLUID @4 :List(UInt64);
deviceNodeMask @5 :UInt64;
deviceLUIDValid @6 :UInt64;
}

struct VkExternalMemoryImageCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
handleTypes @2 :Int64;
}

struct VkExternalMemoryBufferCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
handleTypes @2 :Int64;
}

struct VkExportMemoryAllocateInfo {
sType @0 :Int64;
pNext @1 :PNext;
handleTypes @2 :Int64;
}

struct VkImportMemoryWin32HandleInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
handleType @2 :Int64;
handle @3 :UInt64;
name @4 :UInt64;
}

struct VkExportMemoryWin32HandleInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
pAttributes @2 :List(UInt64);
dwAccess @3 :UInt64;
name @4 :UInt64;
}

struct VkImportMemoryZirconHandleInfoFUCHSIA {
sType @0 :Int64;
pNext @1 :PNext;
handleType @2 :Int64;
handle @3 :UInt64;
}

struct VkMemoryZirconHandlePropertiesFUCHSIA {
sType @0 :Int64;
pNext @1 :PNext;
memoryTypeBits @2 :UInt64;
}

struct VkMemoryGetZirconHandleInfoFUCHSIA {
sType @0 :Int64;
pNext @1 :PNext;
memory @2 :UInt64;
handleType @3 :Int64;
}

struct VkMemoryWin32HandlePropertiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
memoryTypeBits @2 :UInt64;
}

struct VkMemoryGetWin32HandleInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
memory @2 :UInt64;
handleType @3 :Int64;
}

struct VkImportMemoryFdInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
handleType @2 :Int64;
fd @3 :Int64;
}

struct VkMemoryFdPropertiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
memoryTypeBits @2 :UInt64;
}

struct VkMemoryGetFdInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
memory @2 :UInt64;
handleType @3 :Int64;
}

struct VkWin32KeyedMutexAcquireReleaseInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
acquireCount @2 :UInt64;
pAcquireSyncs @3 :List(UInt64);
pAcquireKeys @4 :List(UInt64);
pAcquireTimeouts @5 :List(UInt64);
releaseCount @6 :UInt64;
pReleaseSyncs @7 :List(UInt64);
pReleaseKeys @8 :List(UInt64);
}

struct VkPhysicalDeviceExternalSemaphoreInfo {
sType @0 :Int64;
pNext @1 :PNext;
handleType @2 :Int64;
}

struct VkExternalSemaphoreProperties {
sType @0 :Int64;
pNext @1 :PNext;
exportFromImportedHandleTypes @2 :Int64;
compatibleHandleTypes @3 :Int64;
externalSemaphoreFeatures @4 :Int64;
}

struct VkExportSemaphoreCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
handleTypes @2 :Int64;
}

struct VkImportSemaphoreWin32HandleInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
semaphore @2 :UInt64;
flags @3 :Int64;
handleType @4 :Int64;
handle @5 :UInt64;
name @6 :UInt64;
}

struct VkExportSemaphoreWin32HandleInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
pAttributes @2 :List(UInt64);
dwAccess @3 :UInt64;
name @4 :UInt64;
}

struct VkD3D12FenceSubmitInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
waitSemaphoreValuesCount @2 :UInt64;
pWaitSemaphoreValues @3 :List(UInt64);
signalSemaphoreValuesCount @4 :UInt64;
pSignalSemaphoreValues @5 :List(UInt64);
}

struct VkSemaphoreGetWin32HandleInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
semaphore @2 :UInt64;
handleType @3 :Int64;
}

struct VkImportSemaphoreFdInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
semaphore @2 :UInt64;
flags @3 :Int64;
handleType @4 :Int64;
fd @5 :Int64;
}

struct VkSemaphoreGetFdInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
semaphore @2 :UInt64;
handleType @3 :Int64;
}

struct VkImportSemaphoreZirconHandleInfoFUCHSIA {
sType @0 :Int64;
pNext @1 :PNext;
semaphore @2 :UInt64;
flags @3 :Int64;
handleType @4 :Int64;
zirconHandle @5 :UInt64;
}

struct VkSemaphoreGetZirconHandleInfoFUCHSIA {
sType @0 :Int64;
pNext @1 :PNext;
semaphore @2 :UInt64;
handleType @3 :Int64;
}

struct VkPhysicalDeviceExternalFenceInfo {
sType @0 :Int64;
pNext @1 :PNext;
handleType @2 :Int64;
}

struct VkExternalFenceProperties {
sType @0 :Int64;
pNext @1 :PNext;
exportFromImportedHandleTypes @2 :Int64;
compatibleHandleTypes @3 :Int64;
externalFenceFeatures @4 :Int64;
}

struct VkExportFenceCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
handleTypes @2 :Int64;
}

struct VkImportFenceWin32HandleInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
fence @2 :UInt64;
flags @3 :Int64;
handleType @4 :Int64;
handle @5 :UInt64;
name @6 :UInt64;
}

struct VkExportFenceWin32HandleInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
pAttributes @2 :List(UInt64);
dwAccess @3 :UInt64;
name @4 :UInt64;
}

struct VkFenceGetWin32HandleInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
fence @2 :UInt64;
handleType @3 :Int64;
}

struct VkImportFenceFdInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
fence @2 :UInt64;
flags @3 :Int64;
handleType @4 :Int64;
fd @5 :Int64;
}

struct VkFenceGetFdInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
fence @2 :UInt64;
handleType @3 :Int64;
}

struct VkExportFenceSciSyncInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
pAttributes @2 :UInt64;
}

struct VkImportFenceSciSyncInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
fence @2 :UInt64;
handleType @3 :Int64;
handle @4 :List(UInt64);
}

struct VkFenceGetSciSyncInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
fence @2 :UInt64;
handleType @3 :Int64;
}

struct VkExportSemaphoreSciSyncInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
pAttributes @2 :UInt64;
}

struct VkImportSemaphoreSciSyncInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
semaphore @2 :UInt64;
handleType @3 :Int64;
handle @4 :List(UInt64);
}

struct VkSemaphoreGetSciSyncInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
semaphore @2 :UInt64;
handleType @3 :Int64;
}

struct VkSciSyncAttributesInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
clientType @2 :Int64;
primitiveType @3 :Int64;
}

struct VkPhysicalDeviceExternalSciSyncFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
sciSyncFence @2 :UInt64;
sciSyncSemaphore @3 :UInt64;
sciSyncImport @4 :UInt64;
sciSyncExport @5 :UInt64;
}

struct VkPhysicalDeviceExternalSciSync2FeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
sciSyncFence @2 :UInt64;
sciSyncSemaphore2 @3 :UInt64;
sciSyncImport @4 :UInt64;
sciSyncExport @5 :UInt64;
}

struct VkSemaphoreSciSyncPoolCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
handle @2 :UInt64;
}

struct VkSemaphoreSciSyncCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
semaphorePool @2 :UInt64;
pFence @3 :List(UInt64);
}

struct VkDeviceSemaphoreSciSyncPoolReservationCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
semaphoreSciSyncPoolRequestCount @2 :UInt64;
}

struct VkPhysicalDeviceMultiviewFeatures {
sType @0 :Int64;
pNext @1 :PNext;
multiview @2 :UInt64;
multiviewGeometryShader @3 :UInt64;
multiviewTessellationShader @4 :UInt64;
}

struct VkPhysicalDeviceMultiviewProperties {
sType @0 :Int64;
pNext @1 :PNext;
maxMultiviewViewCount @2 :UInt64;
maxMultiviewInstanceIndex @3 :UInt64;
}

struct VkRenderPassMultiviewCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
subpassCount @2 :UInt64;
pViewMasks @3 :List(UInt64);
dependencyCount @4 :UInt64;
pViewOffsets @5 :List(Int64);
correlationMaskCount @6 :UInt64;
pCorrelationMasks @7 :List(UInt64);
}

struct VkSurfaceCapabilities2EXT {
sType @0 :Int64;
pNext @1 :PNext;
minImageCount @2 :UInt64;
maxImageCount @3 :UInt64;
currentExtent @4 :VkExtent2D;
minImageExtent @5 :VkExtent2D;
maxImageExtent @6 :VkExtent2D;
maxImageArrayLayers @7 :UInt64;
supportedTransforms @8 :Int64;
currentTransform @9 :Int64;
supportedCompositeAlpha @10 :Int64;
supportedUsageFlags @11 :Int64;
supportedSurfaceCounters @12 :Int64;
}

struct VkDisplayPowerInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
powerState @2 :Int64;
}

struct VkDeviceEventInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
deviceEvent @2 :Int64;
}

struct VkDisplayEventInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
displayEvent @2 :Int64;
}

struct VkSwapchainCounterCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
surfaceCounters @2 :Int64;
}

struct VkPhysicalDeviceGroupProperties {
sType @0 :Int64;
pNext @1 :PNext;
physicalDeviceCount @2 :UInt64;
physicalDevices @3 :List(UInt64);
subsetAllocation @4 :UInt64;
}

struct VkMemoryAllocateFlagsInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
deviceMask @3 :UInt64;
}

struct VkBindBufferMemoryInfo {
sType @0 :Int64;
pNext @1 :PNext;
buffer @2 :UInt64;
memory @3 :UInt64;
memoryOffset @4 :UInt64;
}

struct VkBindBufferMemoryDeviceGroupInfo {
sType @0 :Int64;
pNext @1 :PNext;
deviceIndexCount @2 :UInt64;
pDeviceIndices @3 :List(UInt64);
}

struct VkBindImageMemoryInfo {
sType @0 :Int64;
pNext @1 :PNext;
image @2 :UInt64;
memory @3 :UInt64;
memoryOffset @4 :UInt64;
}

struct VkBindImageMemoryDeviceGroupInfo {
sType @0 :Int64;
pNext @1 :PNext;
deviceIndexCount @2 :UInt64;
pDeviceIndices @3 :List(UInt64);
splitInstanceBindRegionCount @4 :UInt64;
pSplitInstanceBindRegions @5 :List(VkRect2D);
}

struct VkDeviceGroupRenderPassBeginInfo {
sType @0 :Int64;
pNext @1 :PNext;
deviceMask @2 :UInt64;
deviceRenderAreaCount @3 :UInt64;
pDeviceRenderAreas @4 :List(VkRect2D);
}

struct VkDeviceGroupCommandBufferBeginInfo {
sType @0 :Int64;
pNext @1 :PNext;
deviceMask @2 :UInt64;
}

struct VkDeviceGroupSubmitInfo {
sType @0 :Int64;
pNext @1 :PNext;
waitSemaphoreCount @2 :UInt64;
pWaitSemaphoreDeviceIndices @3 :List(UInt64);
commandBufferCount @4 :UInt64;
pCommandBufferDeviceMasks @5 :List(UInt64);
signalSemaphoreCount @6 :UInt64;
pSignalSemaphoreDeviceIndices @7 :List(UInt64);
}

struct VkDeviceGroupBindSparseInfo {
sType @0 :Int64;
pNext @1 :PNext;
resourceDeviceIndex @2 :UInt64;
memoryDeviceIndex @3 :UInt64;
}

struct VkDeviceGroupPresentCapabilitiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
presentMask @2 :List(UInt64);
modes @3 :Int64;
}

struct VkImageSwapchainCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
swapchain @2 :UInt64;
}

struct VkBindImageMemorySwapchainInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
swapchain @2 :UInt64;
imageIndex @3 :UInt64;
}

struct VkAcquireNextImageInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
swapchain @2 :UInt64;
timeout @3 :UInt64;
semaphore @4 :UInt64;
fence @5 :UInt64;
deviceMask @6 :UInt64;
}

struct VkDeviceGroupPresentInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
swapchainCount @2 :UInt64;
pDeviceMasks @3 :List(UInt64);
mode @4 :Int64;
}

struct VkDeviceGroupDeviceCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
physicalDeviceCount @2 :UInt64;
pPhysicalDevices @3 :List(UInt64);
}

struct VkDeviceGroupSwapchainCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
modes @2 :Int64;
}

struct VkDescriptorUpdateTemplateEntry {
dstBinding @0 :UInt64;
dstArrayElement @1 :UInt64;
descriptorCount @2 :UInt64;
descriptorType @3 :Int64;
offset @4 :UInt64;
stride @5 :UInt64;
}

struct VkDescriptorUpdateTemplateCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
descriptorUpdateEntryCount @3 :UInt64;
pDescriptorUpdateEntries @4 :List(VkDescriptorUpdateTemplateEntry);
templateType @5 :Int64;
descriptorSetLayout @6 :UInt64;
pipelineBindPoint @7 :Int64;
pipelineLayout @8 :UInt64;
set @9 :UInt64;
}

struct VkXYColorEXT {
x @0 :Float32;
y @1 :Float32;
}

struct VkPhysicalDevicePresentIdFeaturesKHR {
sType @0 :Int64;
pNext @1 :PNext;
presentId @2 :UInt64;
}

struct VkPresentIdKHR {
sType @0 :Int64;
pNext @1 :PNext;
swapchainCount @2 :UInt64;
pPresentIds @3 :List(UInt64);
}

struct VkPhysicalDevicePresentWaitFeaturesKHR {
sType @0 :Int64;
pNext @1 :PNext;
presentWait @2 :UInt64;
}

struct VkHdrMetadataEXT {
sType @0 :Int64;
pNext @1 :PNext;
displayPrimaryRed @2 :VkXYColorEXT;
displayPrimaryGreen @3 :VkXYColorEXT;
displayPrimaryBlue @4 :VkXYColorEXT;
whitePoint @5 :VkXYColorEXT;
maxLuminance @6 :Float32;
minLuminance @7 :Float32;
maxContentLightLevel @8 :Float32;
maxFrameAverageLightLevel @9 :Float32;
}

struct VkDisplayNativeHdrSurfaceCapabilitiesAMD {
sType @0 :Int64;
pNext @1 :PNext;
localDimmingSupport @2 :UInt64;
}

struct VkSwapchainDisplayNativeHdrCreateInfoAMD {
sType @0 :Int64;
pNext @1 :PNext;
localDimmingEnable @2 :UInt64;
}

struct VkRefreshCycleDurationGOOGLE {
refreshDuration @0 :UInt64;
}

struct VkPastPresentationTimingGOOGLE {
presentID @0 :UInt64;
desiredPresentTime @1 :UInt64;
actualPresentTime @2 :UInt64;
earliestPresentTime @3 :UInt64;
presentMargin @4 :UInt64;
}

struct VkPresentTimesInfoGOOGLE {
sType @0 :Int64;
pNext @1 :PNext;
swapchainCount @2 :UInt64;
pTimes @3 :List(VkPresentTimeGOOGLE);
}

struct VkPresentTimeGOOGLE {
presentID @0 :UInt64;
desiredPresentTime @1 :UInt64;
}

struct VkIOSSurfaceCreateInfoMVK {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
pView @3 :List(UInt64);
}

struct VkMacOSSurfaceCreateInfoMVK {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
pView @3 :List(UInt64);
}

struct VkMetalSurfaceCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
pLayer @3 :List(UInt64);
}

struct VkViewportWScalingNV {
xcoeff @0 :Float32;
ycoeff @1 :Float32;
}

struct VkPipelineViewportWScalingStateCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
viewportWScalingEnable @2 :UInt64;
viewportCount @3 :UInt64;
pViewportWScalings @4 :List(VkViewportWScalingNV);
}

struct VkViewportSwizzleNV {
x @0 :Int64;
y @1 :Int64;
z @2 :Int64;
w @3 :Int64;
}

struct VkPipelineViewportSwizzleStateCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
viewportCount @3 :UInt64;
pViewportSwizzles @4 :List(VkViewportSwizzleNV);
}

struct VkPhysicalDeviceDiscardRectanglePropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
maxDiscardRectangles @2 :UInt64;
}

struct VkPipelineDiscardRectangleStateCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
discardRectangleMode @3 :Int64;
discardRectangleCount @4 :UInt64;
pDiscardRectangles @5 :List(VkRect2D);
}

struct VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX {
sType @0 :Int64;
pNext @1 :PNext;
perViewPositionAllComponents @2 :UInt64;
}

struct VkInputAttachmentAspectReference {
subpass @0 :UInt64;
inputAttachmentIndex @1 :UInt64;
aspectMask @2 :Int64;
}

struct VkRenderPassInputAttachmentAspectCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
aspectReferenceCount @2 :UInt64;
pAspectReferences @3 :List(VkInputAttachmentAspectReference);
}

struct VkPhysicalDeviceSurfaceInfo2KHR {
sType @0 :Int64;
pNext @1 :PNext;
surface @2 :UInt64;
}

struct VkSurfaceCapabilities2KHR {
sType @0 :Int64;
pNext @1 :PNext;
surfaceCapabilities @2 :VkSurfaceCapabilitiesKHR;
}

struct VkSurfaceFormat2KHR {
sType @0 :Int64;
pNext @1 :PNext;
surfaceFormat @2 :VkSurfaceFormatKHR;
}

struct VkDisplayProperties2KHR {
sType @0 :Int64;
pNext @1 :PNext;
displayProperties @2 :VkDisplayPropertiesKHR;
}

struct VkDisplayPlaneProperties2KHR {
sType @0 :Int64;
pNext @1 :PNext;
displayPlaneProperties @2 :VkDisplayPlanePropertiesKHR;
}

struct VkDisplayModeProperties2KHR {
sType @0 :Int64;
pNext @1 :PNext;
displayModeProperties @2 :VkDisplayModePropertiesKHR;
}

struct VkDisplayPlaneInfo2KHR {
sType @0 :Int64;
pNext @1 :PNext;
mode @2 :UInt64;
planeIndex @3 :UInt64;
}

struct VkDisplayPlaneCapabilities2KHR {
sType @0 :Int64;
pNext @1 :PNext;
capabilities @2 :VkDisplayPlaneCapabilitiesKHR;
}

struct VkSharedPresentSurfaceCapabilitiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
sharedPresentSupportedUsageFlags @2 :Int64;
}

struct VkPhysicalDevice16BitStorageFeatures {
sType @0 :Int64;
pNext @1 :PNext;
storageBuffer16BitAccess @2 :UInt64;
uniformAndStorageBuffer16BitAccess @3 :UInt64;
storagePushConstant16 @4 :UInt64;
storageInputOutput16 @5 :UInt64;
}

struct VkPhysicalDeviceSubgroupProperties {
sType @0 :Int64;
pNext @1 :PNext;
subgroupSize @2 :UInt64;
supportedStages @3 :Int64;
supportedOperations @4 :Int64;
quadOperationsInAllStages @5 :UInt64;
}

struct VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures {
sType @0 :Int64;
pNext @1 :PNext;
shaderSubgroupExtendedTypes @2 :UInt64;
}

struct VkBufferMemoryRequirementsInfo2 {
sType @0 :Int64;
pNext @1 :PNext;
buffer @2 :UInt64;
}

struct VkDeviceBufferMemoryRequirements {
sType @0 :Int64;
pNext @1 :PNext;
pCreateInfo @2 :List(VkBufferCreateInfo);
}

struct VkImageMemoryRequirementsInfo2 {
sType @0 :Int64;
pNext @1 :PNext;
image @2 :UInt64;
}

struct VkImageSparseMemoryRequirementsInfo2 {
sType @0 :Int64;
pNext @1 :PNext;
image @2 :UInt64;
}

struct VkDeviceImageMemoryRequirements {
sType @0 :Int64;
pNext @1 :PNext;
pCreateInfo @2 :List(VkImageCreateInfo);
planeAspect @3 :Int64;
}

struct VkMemoryRequirements2 {
sType @0 :Int64;
pNext @1 :PNext;
memoryRequirements @2 :VkMemoryRequirements;
}

struct VkSparseImageMemoryRequirements2 {
sType @0 :Int64;
pNext @1 :PNext;
memoryRequirements @2 :VkSparseImageMemoryRequirements;
}

struct VkPhysicalDevicePointClippingProperties {
sType @0 :Int64;
pNext @1 :PNext;
pointClippingBehavior @2 :Int64;
}

struct VkMemoryDedicatedRequirements {
sType @0 :Int64;
pNext @1 :PNext;
prefersDedicatedAllocation @2 :UInt64;
requiresDedicatedAllocation @3 :UInt64;
}

struct VkMemoryDedicatedAllocateInfo {
sType @0 :Int64;
pNext @1 :PNext;
image @2 :UInt64;
buffer @3 :UInt64;
}

struct VkImageViewUsageCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
usage @2 :Int64;
}

struct VkImageViewSlicedCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
sliceOffset @2 :UInt64;
sliceCount @3 :UInt64;
}

struct VkPipelineTessellationDomainOriginStateCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
domainOrigin @2 :Int64;
}

struct VkSamplerYcbcrConversionInfo {
sType @0 :Int64;
pNext @1 :PNext;
conversion @2 :UInt64;
}

struct VkSamplerYcbcrConversionCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
format @2 :Int64;
ycbcrModel @3 :Int64;
ycbcrRange @4 :Int64;
components @5 :VkComponentMapping;
xChromaOffset @6 :Int64;
yChromaOffset @7 :Int64;
chromaFilter @8 :Int64;
forceExplicitReconstruction @9 :UInt64;
}

struct VkBindImagePlaneMemoryInfo {
sType @0 :Int64;
pNext @1 :PNext;
planeAspect @2 :Int64;
}

struct VkImagePlaneMemoryRequirementsInfo {
sType @0 :Int64;
pNext @1 :PNext;
planeAspect @2 :Int64;
}

struct VkPhysicalDeviceSamplerYcbcrConversionFeatures {
sType @0 :Int64;
pNext @1 :PNext;
samplerYcbcrConversion @2 :UInt64;
}

struct VkSamplerYcbcrConversionImageFormatProperties {
sType @0 :Int64;
pNext @1 :PNext;
combinedImageSamplerDescriptorCount @2 :UInt64;
}

struct VkTextureLODGatherFormatPropertiesAMD {
sType @0 :Int64;
pNext @1 :PNext;
supportsTextureGatherLODBiasAMD @2 :UInt64;
}

struct VkConditionalRenderingBeginInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
buffer @2 :UInt64;
offset @3 :UInt64;
flags @4 :Int64;
}

struct VkProtectedSubmitInfo {
sType @0 :Int64;
pNext @1 :PNext;
protectedSubmit @2 :UInt64;
}

struct VkPhysicalDeviceProtectedMemoryFeatures {
sType @0 :Int64;
pNext @1 :PNext;
protectedMemory @2 :UInt64;
}

struct VkPhysicalDeviceProtectedMemoryProperties {
sType @0 :Int64;
pNext @1 :PNext;
protectedNoFault @2 :UInt64;
}

struct VkDeviceQueueInfo2 {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
queueFamilyIndex @3 :UInt64;
queueIndex @4 :UInt64;
}

struct VkPipelineCoverageToColorStateCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
coverageToColorEnable @3 :UInt64;
coverageToColorLocation @4 :UInt64;
}

struct VkPhysicalDeviceSamplerFilterMinmaxProperties {
sType @0 :Int64;
pNext @1 :PNext;
filterMinmaxSingleComponentFormats @2 :UInt64;
filterMinmaxImageComponentMapping @3 :UInt64;
}

struct VkSampleLocationEXT {
x @0 :Float32;
y @1 :Float32;
}

struct VkSampleLocationsInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
sampleLocationsPerPixel @2 :Int64;
sampleLocationGridSize @3 :VkExtent2D;
sampleLocationsCount @4 :UInt64;
pSampleLocations @5 :List(VkSampleLocationEXT);
}

struct VkAttachmentSampleLocationsEXT {
attachmentIndex @0 :UInt64;
sampleLocationsInfo @1 :VkSampleLocationsInfoEXT;
}

struct VkSubpassSampleLocationsEXT {
subpassIndex @0 :UInt64;
sampleLocationsInfo @1 :VkSampleLocationsInfoEXT;
}

struct VkRenderPassSampleLocationsBeginInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
attachmentInitialSampleLocationsCount @2 :UInt64;
pAttachmentInitialSampleLocations @3 :List(VkAttachmentSampleLocationsEXT);
postSubpassSampleLocationsCount @4 :UInt64;
pPostSubpassSampleLocations @5 :List(VkSubpassSampleLocationsEXT);
}

struct VkPipelineSampleLocationsStateCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
sampleLocationsEnable @2 :UInt64;
sampleLocationsInfo @3 :VkSampleLocationsInfoEXT;
}

struct VkPhysicalDeviceSampleLocationsPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
sampleLocationSampleCounts @2 :Int64;
maxSampleLocationGridSize @3 :VkExtent2D;
sampleLocationCoordinateRange @4 :List(Float32);
sampleLocationSubPixelBits @5 :UInt64;
variableSampleLocations @6 :UInt64;
}

struct VkMultisamplePropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
maxSampleLocationGridSize @2 :VkExtent2D;
}

struct VkSamplerReductionModeCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
reductionMode @2 :Int64;
}

struct VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
advancedBlendCoherentOperations @2 :UInt64;
}

struct VkPhysicalDeviceMultiDrawFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
multiDraw @2 :UInt64;
}

struct VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
advancedBlendMaxColorAttachments @2 :UInt64;
advancedBlendIndependentBlend @3 :UInt64;
advancedBlendNonPremultipliedSrcColor @4 :UInt64;
advancedBlendNonPremultipliedDstColor @5 :UInt64;
advancedBlendCorrelatedOverlap @6 :UInt64;
advancedBlendAllOperations @7 :UInt64;
}

struct VkPipelineColorBlendAdvancedStateCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
srcPremultiplied @2 :UInt64;
dstPremultiplied @3 :UInt64;
blendOverlap @4 :Int64;
}

struct VkPhysicalDeviceInlineUniformBlockFeatures {
sType @0 :Int64;
pNext @1 :PNext;
inlineUniformBlock @2 :UInt64;
descriptorBindingInlineUniformBlockUpdateAfterBind @3 :UInt64;
}

struct VkPhysicalDeviceInlineUniformBlockProperties {
sType @0 :Int64;
pNext @1 :PNext;
maxInlineUniformBlockSize @2 :UInt64;
maxPerStageDescriptorInlineUniformBlocks @3 :UInt64;
maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks @4 :UInt64;
maxDescriptorSetInlineUniformBlocks @5 :UInt64;
maxDescriptorSetUpdateAfterBindInlineUniformBlocks @6 :UInt64;
}

struct VkWriteDescriptorSetInlineUniformBlock {
sType @0 :Int64;
pNext @1 :PNext;
dataSize @2 :UInt64;
pData @3 :List(UInt64);
}

struct VkDescriptorPoolInlineUniformBlockCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
maxInlineUniformBlockBindings @2 :UInt64;
}

struct VkPipelineCoverageModulationStateCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
coverageModulationMode @3 :Int64;
coverageModulationTableEnable @4 :UInt64;
coverageModulationTableCount @5 :UInt64;
pCoverageModulationTable @6 :List(Float32);
}

struct VkImageFormatListCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
viewFormatCount @2 :UInt64;
pViewFormats @3 :List(Int64);
}

struct VkValidationCacheCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
initialDataSize @3 :UInt64;
pInitialData @4 :List(UInt64);
}

struct VkShaderModuleValidationCacheCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
validationCache @2 :UInt64;
}

struct VkPhysicalDeviceMaintenance3Properties {
sType @0 :Int64;
pNext @1 :PNext;
maxPerSetDescriptors @2 :UInt64;
maxMemoryAllocationSize @3 :UInt64;
}

struct VkPhysicalDeviceMaintenance4Features {
sType @0 :Int64;
pNext @1 :PNext;
maintenance4 @2 :UInt64;
}

struct VkPhysicalDeviceMaintenance4Properties {
sType @0 :Int64;
pNext @1 :PNext;
maxBufferSize @2 :UInt64;
}

struct VkPhysicalDeviceMaintenance5FeaturesKHR {
sType @0 :Int64;
pNext @1 :PNext;
maintenance5 @2 :UInt64;
}

struct VkPhysicalDeviceMaintenance5PropertiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
earlyFragmentMultisampleCoverageAfterSampleCounting @2 :UInt64;
earlyFragmentSampleMaskTestBeforeSampleCounting @3 :UInt64;
depthStencilSwizzleOneSupport @4 :UInt64;
polygonModePointSize @5 :UInt64;
nonStrictSinglePixelWideLinesUseParallelogram @6 :UInt64;
nonStrictWideLinesUseParallelogram @7 :UInt64;
}

struct VkRenderingAreaInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
viewMask @2 :UInt64;
colorAttachmentCount @3 :UInt64;
pColorAttachmentFormats @4 :List(Int64);
depthAttachmentFormat @5 :Int64;
stencilAttachmentFormat @6 :Int64;
}

struct VkDescriptorSetLayoutSupport {
sType @0 :Int64;
pNext @1 :PNext;
supported @2 :UInt64;
}

struct VkPhysicalDeviceShaderDrawParametersFeatures {
sType @0 :Int64;
pNext @1 :PNext;
shaderDrawParameters @2 :UInt64;
}

struct VkPhysicalDeviceShaderFloat16Int8Features {
sType @0 :Int64;
pNext @1 :PNext;
shaderFloat16 @2 :UInt64;
shaderInt8 @3 :UInt64;
}

struct VkPhysicalDeviceFloatControlsProperties {
sType @0 :Int64;
pNext @1 :PNext;
denormBehaviorIndependence @2 :Int64;
roundingModeIndependence @3 :Int64;
shaderSignedZeroInfNanPreserveFloat16 @4 :UInt64;
shaderSignedZeroInfNanPreserveFloat32 @5 :UInt64;
shaderSignedZeroInfNanPreserveFloat64 @6 :UInt64;
shaderDenormPreserveFloat16 @7 :UInt64;
shaderDenormPreserveFloat32 @8 :UInt64;
shaderDenormPreserveFloat64 @9 :UInt64;
shaderDenormFlushToZeroFloat16 @10 :UInt64;
shaderDenormFlushToZeroFloat32 @11 :UInt64;
shaderDenormFlushToZeroFloat64 @12 :UInt64;
shaderRoundingModeRTEFloat16 @13 :UInt64;
shaderRoundingModeRTEFloat32 @14 :UInt64;
shaderRoundingModeRTEFloat64 @15 :UInt64;
shaderRoundingModeRTZFloat16 @16 :UInt64;
shaderRoundingModeRTZFloat32 @17 :UInt64;
shaderRoundingModeRTZFloat64 @18 :UInt64;
}

struct VkPhysicalDeviceHostQueryResetFeatures {
sType @0 :Int64;
pNext @1 :PNext;
hostQueryReset @2 :UInt64;
}

struct VkNativeBufferUsage2ANDROID {
consumer @0 :UInt64;
producer @1 :UInt64;
}

struct VkNativeBufferANDROID {
sType @0 :Int64;
pNext @1 :PNext;
handle @2 :List(UInt64);
stride @3 :Int64;
format @4 :Int64;
usage @5 :Int64;
usage2 @6 :VkNativeBufferUsage2ANDROID;
}

struct VkSwapchainImageCreateInfoANDROID {
sType @0 :Int64;
pNext @1 :PNext;
usage @2 :Int64;
}

struct VkPhysicalDevicePresentationPropertiesANDROID {
sType @0 :Int64;
pNext @1 :PNext;
sharedImage @2 :UInt64;
}

struct VkShaderResourceUsageAMD {
numUsedVgprs @0 :UInt64;
numUsedSgprs @1 :UInt64;
ldsSizePerLocalWorkGroup @2 :UInt64;
ldsUsageSizeInBytes @3 :UInt64;
scratchMemUsageInBytes @4 :UInt64;
}

struct VkShaderStatisticsInfoAMD {
shaderStageMask @0 :Int64;
resourceUsage @1 :VkShaderResourceUsageAMD;
numPhysicalVgprs @2 :UInt64;
numPhysicalSgprs @3 :UInt64;
numAvailableVgprs @4 :UInt64;
numAvailableSgprs @5 :UInt64;
computeWorkGroupSize @6 :List(UInt64);
}

struct VkDeviceQueueGlobalPriorityCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
globalPriority @2 :Int64;
}

struct VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR {
sType @0 :Int64;
pNext @1 :PNext;
globalPriorityQuery @2 :UInt64;
}

struct VkQueueFamilyGlobalPriorityPropertiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
priorityCount @2 :UInt64;
priorities @3 :List(Int64);
}

struct VkDebugUtilsObjectNameInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
objectType @2 :Int64;
objectHandle @3 :UInt64;
pObjectName @4 :List(UInt64);
}

struct VkDebugUtilsObjectTagInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
objectType @2 :Int64;
objectHandle @3 :UInt64;
tagName @4 :UInt64;
tagSize @5 :UInt64;
pTag @6 :List(UInt64);
}

struct VkDebugUtilsLabelEXT {
sType @0 :Int64;
pNext @1 :PNext;
pLabelName @2 :List(UInt64);
color @3 :List(Float32);
}

struct VkDebugUtilsMessengerCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
messageSeverity @3 :Int64;
messageType @4 :Int64;
pfnUserCallback @5 :PFNvkDebugUtilsMessengerCallbackEXT;
pUserData @6 :PUserData;
}

struct VkDebugUtilsMessengerCallbackDataEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
pMessageIdName @3 :List(UInt64);
messageIdNumber @4 :Int64;
pMessage @5 :List(UInt64);
queueLabelCount @6 :UInt64;
pQueueLabels @7 :List(VkDebugUtilsLabelEXT);
cmdBufLabelCount @8 :UInt64;
pCmdBufLabels @9 :List(VkDebugUtilsLabelEXT);
objectCount @10 :UInt64;
pObjects @11 :List(VkDebugUtilsObjectNameInfoEXT);
}

struct VkPhysicalDeviceDeviceMemoryReportFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
deviceMemoryReport @2 :UInt64;
}

struct VkDeviceDeviceMemoryReportCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
pfnUserCallback @3 :PFNvkDeviceMemoryReportCallbackEXT;
pUserData @4 :PUserData;
}

struct VkDeviceMemoryReportCallbackDataEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
type @3 :Int64;
memoryObjectId @4 :UInt64;
size @5 :UInt64;
objectType @6 :Int64;
objectHandle @7 :UInt64;
heapIndex @8 :UInt64;
}

struct VkImportMemoryHostPointerInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
handleType @2 :Int64;
pHostPointer @3 :List(UInt64);
}

struct VkMemoryHostPointerPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
memoryTypeBits @2 :UInt64;
}

struct VkPhysicalDeviceExternalMemoryHostPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
minImportedHostPointerAlignment @2 :UInt64;
}

struct VkPhysicalDeviceConservativeRasterizationPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
primitiveOverestimationSize @2 :Float32;
maxExtraPrimitiveOverestimationSize @3 :Float32;
extraPrimitiveOverestimationSizeGranularity @4 :Float32;
primitiveUnderestimation @5 :UInt64;
conservativePointAndLineRasterization @6 :UInt64;
degenerateTrianglesRasterized @7 :UInt64;
degenerateLinesRasterized @8 :UInt64;
fullyCoveredFragmentShaderInputVariable @9 :UInt64;
conservativeRasterizationPostDepthCoverage @10 :UInt64;
}

struct VkCalibratedTimestampInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
timeDomain @2 :Int64;
}

struct VkPhysicalDeviceShaderCorePropertiesAMD {
sType @0 :Int64;
pNext @1 :PNext;
shaderEngineCount @2 :UInt64;
shaderArraysPerEngineCount @3 :UInt64;
computeUnitsPerShaderArray @4 :UInt64;
simdPerComputeUnit @5 :UInt64;
wavefrontsPerSimd @6 :UInt64;
wavefrontSize @7 :UInt64;
sgprsPerSimd @8 :UInt64;
minSgprAllocation @9 :UInt64;
maxSgprAllocation @10 :UInt64;
sgprAllocationGranularity @11 :UInt64;
vgprsPerSimd @12 :UInt64;
minVgprAllocation @13 :UInt64;
maxVgprAllocation @14 :UInt64;
vgprAllocationGranularity @15 :UInt64;
}

struct VkPhysicalDeviceShaderCoreProperties2AMD {
sType @0 :Int64;
pNext @1 :PNext;
shaderCoreFeatures @2 :Int64;
activeComputeUnitCount @3 :UInt64;
}

struct VkPipelineRasterizationConservativeStateCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
conservativeRasterizationMode @3 :Int64;
extraPrimitiveOverestimationSize @4 :Float32;
}

struct VkPhysicalDeviceDescriptorIndexingFeatures {
sType @0 :Int64;
pNext @1 :PNext;
shaderInputAttachmentArrayDynamicIndexing @2 :UInt64;
shaderUniformTexelBufferArrayDynamicIndexing @3 :UInt64;
shaderStorageTexelBufferArrayDynamicIndexing @4 :UInt64;
shaderUniformBufferArrayNonUniformIndexing @5 :UInt64;
shaderSampledImageArrayNonUniformIndexing @6 :UInt64;
shaderStorageBufferArrayNonUniformIndexing @7 :UInt64;
shaderStorageImageArrayNonUniformIndexing @8 :UInt64;
shaderInputAttachmentArrayNonUniformIndexing @9 :UInt64;
shaderUniformTexelBufferArrayNonUniformIndexing @10 :UInt64;
shaderStorageTexelBufferArrayNonUniformIndexing @11 :UInt64;
descriptorBindingUniformBufferUpdateAfterBind @12 :UInt64;
descriptorBindingSampledImageUpdateAfterBind @13 :UInt64;
descriptorBindingStorageImageUpdateAfterBind @14 :UInt64;
descriptorBindingStorageBufferUpdateAfterBind @15 :UInt64;
descriptorBindingUniformTexelBufferUpdateAfterBind @16 :UInt64;
descriptorBindingStorageTexelBufferUpdateAfterBind @17 :UInt64;
descriptorBindingUpdateUnusedWhilePending @18 :UInt64;
descriptorBindingPartiallyBound @19 :UInt64;
descriptorBindingVariableDescriptorCount @20 :UInt64;
runtimeDescriptorArray @21 :UInt64;
}

struct VkPhysicalDeviceDescriptorIndexingProperties {
sType @0 :Int64;
pNext @1 :PNext;
maxUpdateAfterBindDescriptorsInAllPools @2 :UInt64;
shaderUniformBufferArrayNonUniformIndexingNative @3 :UInt64;
shaderSampledImageArrayNonUniformIndexingNative @4 :UInt64;
shaderStorageBufferArrayNonUniformIndexingNative @5 :UInt64;
shaderStorageImageArrayNonUniformIndexingNative @6 :UInt64;
shaderInputAttachmentArrayNonUniformIndexingNative @7 :UInt64;
robustBufferAccessUpdateAfterBind @8 :UInt64;
quadDivergentImplicitLod @9 :UInt64;
maxPerStageDescriptorUpdateAfterBindSamplers @10 :UInt64;
maxPerStageDescriptorUpdateAfterBindUniformBuffers @11 :UInt64;
maxPerStageDescriptorUpdateAfterBindStorageBuffers @12 :UInt64;
maxPerStageDescriptorUpdateAfterBindSampledImages @13 :UInt64;
maxPerStageDescriptorUpdateAfterBindStorageImages @14 :UInt64;
maxPerStageDescriptorUpdateAfterBindInputAttachments @15 :UInt64;
maxPerStageUpdateAfterBindResources @16 :UInt64;
maxDescriptorSetUpdateAfterBindSamplers @17 :UInt64;
maxDescriptorSetUpdateAfterBindUniformBuffers @18 :UInt64;
maxDescriptorSetUpdateAfterBindUniformBuffersDynamic @19 :UInt64;
maxDescriptorSetUpdateAfterBindStorageBuffers @20 :UInt64;
maxDescriptorSetUpdateAfterBindStorageBuffersDynamic @21 :UInt64;
maxDescriptorSetUpdateAfterBindSampledImages @22 :UInt64;
maxDescriptorSetUpdateAfterBindStorageImages @23 :UInt64;
maxDescriptorSetUpdateAfterBindInputAttachments @24 :UInt64;
}

struct VkDescriptorSetLayoutBindingFlagsCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
bindingCount @2 :UInt64;
pBindingFlags @3 :List(Int64);
}

struct VkDescriptorSetVariableDescriptorCountAllocateInfo {
sType @0 :Int64;
pNext @1 :PNext;
descriptorSetCount @2 :UInt64;
pDescriptorCounts @3 :List(UInt64);
}

struct VkDescriptorSetVariableDescriptorCountLayoutSupport {
sType @0 :Int64;
pNext @1 :PNext;
maxVariableDescriptorCount @2 :UInt64;
}

struct VkAttachmentDescription2 {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
format @3 :Int64;
samples @4 :Int64;
loadOp @5 :Int64;
storeOp @6 :Int64;
stencilLoadOp @7 :Int64;
stencilStoreOp @8 :Int64;
initialLayout @9 :Int64;
finalLayout @10 :Int64;
}

struct VkAttachmentReference2 {
sType @0 :Int64;
pNext @1 :PNext;
attachment @2 :UInt64;
layout @3 :Int64;
aspectMask @4 :Int64;
}

struct VkSubpassDescription2 {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
pipelineBindPoint @3 :Int64;
viewMask @4 :UInt64;
inputAttachmentCount @5 :UInt64;
pInputAttachments @6 :List(VkAttachmentReference2);
colorAttachmentCount @7 :UInt64;
pColorAttachments @8 :List(VkAttachmentReference2);
pResolveAttachments @9 :List(VkAttachmentReference2);
pDepthStencilAttachment @10 :List(VkAttachmentReference2);
preserveAttachmentCount @11 :UInt64;
pPreserveAttachments @12 :List(UInt64);
}

struct VkSubpassDependency2 {
sType @0 :Int64;
pNext @1 :PNext;
srcSubpass @2 :UInt64;
dstSubpass @3 :UInt64;
srcStageMask @4 :Int64;
dstStageMask @5 :Int64;
srcAccessMask @6 :Int64;
dstAccessMask @7 :Int64;
dependencyFlags @8 :Int64;
viewOffset @9 :Int64;
}

struct VkRenderPassCreateInfo2 {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
attachmentCount @3 :UInt64;
pAttachments @4 :List(VkAttachmentDescription2);
subpassCount @5 :UInt64;
pSubpasses @6 :List(VkSubpassDescription2);
dependencyCount @7 :UInt64;
pDependencies @8 :List(VkSubpassDependency2);
correlatedViewMaskCount @9 :UInt64;
pCorrelatedViewMasks @10 :List(UInt64);
}

struct VkSubpassBeginInfo {
sType @0 :Int64;
pNext @1 :PNext;
contents @2 :Int64;
}

struct VkSubpassEndInfo {
sType @0 :Int64;
pNext @1 :PNext;
}

struct VkPhysicalDeviceTimelineSemaphoreFeatures {
sType @0 :Int64;
pNext @1 :PNext;
timelineSemaphore @2 :UInt64;
}

struct VkPhysicalDeviceTimelineSemaphoreProperties {
sType @0 :Int64;
pNext @1 :PNext;
maxTimelineSemaphoreValueDifference @2 :UInt64;
}

struct VkSemaphoreTypeCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
semaphoreType @2 :Int64;
initialValue @3 :UInt64;
}

struct VkTimelineSemaphoreSubmitInfo {
sType @0 :Int64;
pNext @1 :PNext;
waitSemaphoreValueCount @2 :UInt64;
pWaitSemaphoreValues @3 :List(UInt64);
signalSemaphoreValueCount @4 :UInt64;
pSignalSemaphoreValues @5 :List(UInt64);
}

struct VkSemaphoreWaitInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
semaphoreCount @3 :UInt64;
pSemaphores @4 :List(UInt64);
pValues @5 :List(UInt64);
}

struct VkSemaphoreSignalInfo {
sType @0 :Int64;
pNext @1 :PNext;
semaphore @2 :UInt64;
value @3 :UInt64;
}

struct VkVertexInputBindingDivisorDescriptionEXT {
binding @0 :UInt64;
divisor @1 :UInt64;
}

struct VkPipelineVertexInputDivisorStateCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
vertexBindingDivisorCount @2 :UInt64;
pVertexBindingDivisors @3 :List(VkVertexInputBindingDivisorDescriptionEXT);
}

struct VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
maxVertexAttribDivisor @2 :UInt64;
}

struct VkPhysicalDevicePCIBusInfoPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
pciDomain @2 :UInt64;
pciBus @3 :UInt64;
pciDevice @4 :UInt64;
pciFunction @5 :UInt64;
}

struct VkImportAndroidHardwareBufferInfoANDROID {
sType @0 :Int64;
pNext @1 :PNext;
buffer @2 :List(UInt64);
}

struct VkAndroidHardwareBufferUsageANDROID {
sType @0 :Int64;
pNext @1 :PNext;
androidHardwareBufferUsage @2 :UInt64;
}

struct VkAndroidHardwareBufferPropertiesANDROID {
sType @0 :Int64;
pNext @1 :PNext;
allocationSize @2 :UInt64;
memoryTypeBits @3 :UInt64;
}

struct VkMemoryGetAndroidHardwareBufferInfoANDROID {
sType @0 :Int64;
pNext @1 :PNext;
memory @2 :UInt64;
}

struct VkAndroidHardwareBufferFormatPropertiesANDROID {
sType @0 :Int64;
pNext @1 :PNext;
format @2 :Int64;
externalFormat @3 :UInt64;
formatFeatures @4 :Int64;
samplerYcbcrConversionComponents @5 :VkComponentMapping;
suggestedYcbcrModel @6 :Int64;
suggestedYcbcrRange @7 :Int64;
suggestedXChromaOffset @8 :Int64;
suggestedYChromaOffset @9 :Int64;
}

struct VkCommandBufferInheritanceConditionalRenderingInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
conditionalRenderingEnable @2 :UInt64;
}

struct VkExternalFormatANDROID {
sType @0 :Int64;
pNext @1 :PNext;
externalFormat @2 :UInt64;
}

struct VkPhysicalDevice8BitStorageFeatures {
sType @0 :Int64;
pNext @1 :PNext;
storageBuffer8BitAccess @2 :UInt64;
uniformAndStorageBuffer8BitAccess @3 :UInt64;
storagePushConstant8 @4 :UInt64;
}

struct VkPhysicalDeviceConditionalRenderingFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
conditionalRendering @2 :UInt64;
inheritedConditionalRendering @3 :UInt64;
}

struct VkPhysicalDeviceVulkanMemoryModelFeatures {
sType @0 :Int64;
pNext @1 :PNext;
vulkanMemoryModel @2 :UInt64;
vulkanMemoryModelDeviceScope @3 :UInt64;
vulkanMemoryModelAvailabilityVisibilityChains @4 :UInt64;
}

struct VkPhysicalDeviceShaderAtomicInt64Features {
sType @0 :Int64;
pNext @1 :PNext;
shaderBufferInt64Atomics @2 :UInt64;
shaderSharedInt64Atomics @3 :UInt64;
}

struct VkPhysicalDeviceShaderAtomicFloatFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
shaderBufferFloat32Atomics @2 :UInt64;
shaderBufferFloat32AtomicAdd @3 :UInt64;
shaderBufferFloat64Atomics @4 :UInt64;
shaderBufferFloat64AtomicAdd @5 :UInt64;
shaderSharedFloat32Atomics @6 :UInt64;
shaderSharedFloat32AtomicAdd @7 :UInt64;
shaderSharedFloat64Atomics @8 :UInt64;
shaderSharedFloat64AtomicAdd @9 :UInt64;
shaderImageFloat32Atomics @10 :UInt64;
shaderImageFloat32AtomicAdd @11 :UInt64;
sparseImageFloat32Atomics @12 :UInt64;
sparseImageFloat32AtomicAdd @13 :UInt64;
}

struct VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
shaderBufferFloat16Atomics @2 :UInt64;
shaderBufferFloat16AtomicAdd @3 :UInt64;
shaderBufferFloat16AtomicMinMax @4 :UInt64;
shaderBufferFloat32AtomicMinMax @5 :UInt64;
shaderBufferFloat64AtomicMinMax @6 :UInt64;
shaderSharedFloat16Atomics @7 :UInt64;
shaderSharedFloat16AtomicAdd @8 :UInt64;
shaderSharedFloat16AtomicMinMax @9 :UInt64;
shaderSharedFloat32AtomicMinMax @10 :UInt64;
shaderSharedFloat64AtomicMinMax @11 :UInt64;
shaderImageFloat32AtomicMinMax @12 :UInt64;
sparseImageFloat32AtomicMinMax @13 :UInt64;
}

struct VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
vertexAttributeInstanceRateDivisor @2 :UInt64;
vertexAttributeInstanceRateZeroDivisor @3 :UInt64;
}

struct VkQueueFamilyCheckpointPropertiesNV {
sType @0 :Int64;
pNext @1 :PNext;
checkpointExecutionStageMask @2 :Int64;
}

struct VkCheckpointDataNV {
sType @0 :Int64;
pNext @1 :PNext;
stage @2 :Int64;
pCheckpointMarker @3 :List(UInt64);
}

struct VkPhysicalDeviceDepthStencilResolveProperties {
sType @0 :Int64;
pNext @1 :PNext;
supportedDepthResolveModes @2 :Int64;
supportedStencilResolveModes @3 :Int64;
independentResolveNone @4 :UInt64;
independentResolve @5 :UInt64;
}

struct VkSubpassDescriptionDepthStencilResolve {
sType @0 :Int64;
pNext @1 :PNext;
depthResolveMode @2 :Int64;
stencilResolveMode @3 :Int64;
pDepthStencilResolveAttachment @4 :List(VkAttachmentReference2);
}

struct VkImageViewASTCDecodeModeEXT {
sType @0 :Int64;
pNext @1 :PNext;
decodeMode @2 :Int64;
}

struct VkPhysicalDeviceASTCDecodeFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
decodeModeSharedExponent @2 :UInt64;
}

struct VkPhysicalDeviceTransformFeedbackFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
transformFeedback @2 :UInt64;
geometryStreams @3 :UInt64;
}

struct VkPhysicalDeviceTransformFeedbackPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
maxTransformFeedbackStreams @2 :UInt64;
maxTransformFeedbackBuffers @3 :UInt64;
maxTransformFeedbackBufferSize @4 :UInt64;
maxTransformFeedbackStreamDataSize @5 :UInt64;
maxTransformFeedbackBufferDataSize @6 :UInt64;
maxTransformFeedbackBufferDataStride @7 :UInt64;
transformFeedbackQueries @8 :UInt64;
transformFeedbackStreamsLinesTriangles @9 :UInt64;
transformFeedbackRasterizationStreamSelect @10 :UInt64;
transformFeedbackDraw @11 :UInt64;
}

struct VkPipelineRasterizationStateStreamCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
rasterizationStream @3 :UInt64;
}

struct VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
representativeFragmentTest @2 :UInt64;
}

struct VkPipelineRepresentativeFragmentTestStateCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
representativeFragmentTestEnable @2 :UInt64;
}

struct VkPhysicalDeviceExclusiveScissorFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
exclusiveScissor @2 :UInt64;
}

struct VkPipelineViewportExclusiveScissorStateCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
exclusiveScissorCount @2 :UInt64;
pExclusiveScissors @3 :List(VkRect2D);
}

struct VkPhysicalDeviceCornerSampledImageFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
cornerSampledImage @2 :UInt64;
}

struct VkPhysicalDeviceComputeShaderDerivativesFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
computeDerivativeGroupQuads @2 :UInt64;
computeDerivativeGroupLinear @3 :UInt64;
}

struct VkPhysicalDeviceShaderImageFootprintFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
imageFootprint @2 :UInt64;
}

struct VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
dedicatedAllocationImageAliasing @2 :UInt64;
}

struct VkPhysicalDeviceCopyMemoryIndirectFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
indirectCopy @2 :UInt64;
}

struct VkPhysicalDeviceCopyMemoryIndirectPropertiesNV {
sType @0 :Int64;
pNext @1 :PNext;
supportedQueues @2 :Int64;
}

struct VkPhysicalDeviceMemoryDecompressionFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
memoryDecompression @2 :UInt64;
}

struct VkPhysicalDeviceMemoryDecompressionPropertiesNV {
sType @0 :Int64;
pNext @1 :PNext;
decompressionMethods @2 :Int64;
maxDecompressionIndirectCount @3 :UInt64;
}

struct VkShadingRatePaletteNV {
shadingRatePaletteEntryCount @0 :UInt64;
pShadingRatePaletteEntries @1 :List(Int64);
}

struct VkPipelineViewportShadingRateImageStateCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
shadingRateImageEnable @2 :UInt64;
viewportCount @3 :UInt64;
pShadingRatePalettes @4 :List(VkShadingRatePaletteNV);
}

struct VkPhysicalDeviceShadingRateImageFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
shadingRateImage @2 :UInt64;
shadingRateCoarseSampleOrder @3 :UInt64;
}

struct VkPhysicalDeviceShadingRateImagePropertiesNV {
sType @0 :Int64;
pNext @1 :PNext;
shadingRateTexelSize @2 :VkExtent2D;
shadingRatePaletteSize @3 :UInt64;
shadingRateMaxCoarseSamples @4 :UInt64;
}

struct VkPhysicalDeviceInvocationMaskFeaturesHUAWEI {
sType @0 :Int64;
pNext @1 :PNext;
invocationMask @2 :UInt64;
}

struct VkCoarseSampleLocationNV {
pixelX @0 :UInt64;
pixelY @1 :UInt64;
sample @2 :UInt64;
}

struct VkCoarseSampleOrderCustomNV {
shadingRate @0 :Int64;
sampleCount @1 :UInt64;
sampleLocationCount @2 :UInt64;
pSampleLocations @3 :List(VkCoarseSampleLocationNV);
}

struct VkPipelineViewportCoarseSampleOrderStateCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
sampleOrderType @2 :Int64;
customSampleOrderCount @3 :UInt64;
pCustomSampleOrders @4 :List(VkCoarseSampleOrderCustomNV);
}

struct VkPhysicalDeviceMeshShaderFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
taskShader @2 :UInt64;
meshShader @3 :UInt64;
}

struct VkPhysicalDeviceMeshShaderPropertiesNV {
sType @0 :Int64;
pNext @1 :PNext;
maxDrawMeshTasksCount @2 :UInt64;
maxTaskWorkGroupInvocations @3 :UInt64;
maxTaskWorkGroupSize @4 :List(UInt64);
maxTaskTotalMemorySize @5 :UInt64;
maxTaskOutputCount @6 :UInt64;
maxMeshWorkGroupInvocations @7 :UInt64;
maxMeshWorkGroupSize @8 :List(UInt64);
maxMeshTotalMemorySize @9 :UInt64;
maxMeshOutputVertices @10 :UInt64;
maxMeshOutputPrimitives @11 :UInt64;
maxMeshMultiviewViewCount @12 :UInt64;
meshOutputPerVertexGranularity @13 :UInt64;
meshOutputPerPrimitiveGranularity @14 :UInt64;
}

struct VkDrawMeshTasksIndirectCommandNV {
taskCount @0 :UInt64;
firstTask @1 :UInt64;
}

struct VkPhysicalDeviceMeshShaderFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
taskShader @2 :UInt64;
meshShader @3 :UInt64;
multiviewMeshShader @4 :UInt64;
primitiveFragmentShadingRateMeshShader @5 :UInt64;
meshShaderQueries @6 :UInt64;
}

struct VkPhysicalDeviceMeshShaderPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
maxTaskWorkGroupTotalCount @2 :UInt64;
maxTaskWorkGroupCount @3 :List(UInt64);
maxTaskWorkGroupInvocations @4 :UInt64;
maxTaskWorkGroupSize @5 :List(UInt64);
maxTaskPayloadSize @6 :UInt64;
maxTaskSharedMemorySize @7 :UInt64;
maxTaskPayloadAndSharedMemorySize @8 :UInt64;
maxMeshWorkGroupTotalCount @9 :UInt64;
maxMeshWorkGroupCount @10 :List(UInt64);
maxMeshWorkGroupInvocations @11 :UInt64;
maxMeshWorkGroupSize @12 :List(UInt64);
maxMeshSharedMemorySize @13 :UInt64;
maxMeshPayloadAndSharedMemorySize @14 :UInt64;
maxMeshOutputMemorySize @15 :UInt64;
maxMeshPayloadAndOutputMemorySize @16 :UInt64;
maxMeshOutputComponents @17 :UInt64;
maxMeshOutputVertices @18 :UInt64;
maxMeshOutputPrimitives @19 :UInt64;
maxMeshOutputLayers @20 :UInt64;
maxMeshMultiviewViewCount @21 :UInt64;
meshOutputPerVertexGranularity @22 :UInt64;
meshOutputPerPrimitiveGranularity @23 :UInt64;
maxPreferredTaskWorkGroupInvocations @24 :UInt64;
maxPreferredMeshWorkGroupInvocations @25 :UInt64;
prefersLocalInvocationVertexOutput @26 :UInt64;
prefersLocalInvocationPrimitiveOutput @27 :UInt64;
prefersCompactVertexOutput @28 :UInt64;
prefersCompactPrimitiveOutput @29 :UInt64;
}

struct VkDrawMeshTasksIndirectCommandEXT {
groupCountX @0 :UInt64;
groupCountY @1 :UInt64;
groupCountZ @2 :UInt64;
}

struct VkRayTracingShaderGroupCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
type @2 :Int64;
generalShader @3 :UInt64;
closestHitShader @4 :UInt64;
anyHitShader @5 :UInt64;
intersectionShader @6 :UInt64;
}

struct VkRayTracingShaderGroupCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
type @2 :Int64;
generalShader @3 :UInt64;
closestHitShader @4 :UInt64;
anyHitShader @5 :UInt64;
intersectionShader @6 :UInt64;
pShaderGroupCaptureReplayHandle @7 :List(UInt64);
}

struct VkRayTracingPipelineCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
stageCount @3 :UInt64;
pStages @4 :List(VkPipelineShaderStageCreateInfo);
groupCount @5 :UInt64;
pGroups @6 :List(VkRayTracingShaderGroupCreateInfoNV);
maxRecursionDepth @7 :UInt64;
layout @8 :UInt64;
basePipelineHandle @9 :UInt64;
basePipelineIndex @10 :Int64;
}

struct VkRayTracingPipelineCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
stageCount @3 :UInt64;
pStages @4 :List(VkPipelineShaderStageCreateInfo);
groupCount @5 :UInt64;
pGroups @6 :List(VkRayTracingShaderGroupCreateInfoKHR);
maxPipelineRayRecursionDepth @7 :UInt64;
pLibraryInfo @8 :List(VkPipelineLibraryCreateInfoKHR);
pLibraryInterface @9 :List(VkRayTracingPipelineInterfaceCreateInfoKHR);
pDynamicState @10 :List(VkPipelineDynamicStateCreateInfo);
layout @11 :UInt64;
basePipelineHandle @12 :UInt64;
basePipelineIndex @13 :Int64;
}

struct VkGeometryTrianglesNV {
sType @0 :Int64;
pNext @1 :PNext;
vertexData @2 :UInt64;
vertexOffset @3 :UInt64;
vertexCount @4 :UInt64;
vertexStride @5 :UInt64;
vertexFormat @6 :Int64;
indexData @7 :UInt64;
indexOffset @8 :UInt64;
indexCount @9 :UInt64;
indexType @10 :Int64;
transformData @11 :UInt64;
transformOffset @12 :UInt64;
}

struct VkGeometryAABBNV {
sType @0 :Int64;
pNext @1 :PNext;
aabbData @2 :UInt64;
numAABBs @3 :UInt64;
stride @4 :UInt64;
offset @5 :UInt64;
}

struct VkGeometryDataNV {
triangles @0 :VkGeometryTrianglesNV;
aabbs @1 :VkGeometryAABBNV;
}

struct VkGeometryNV {
sType @0 :Int64;
pNext @1 :PNext;
geometryType @2 :Int64;
geometry @3 :VkGeometryDataNV;
flags @4 :Int64;
}

struct VkAccelerationStructureInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
type @2 :Int64;
flags @3 :Int64;
instanceCount @4 :UInt64;
geometryCount @5 :UInt64;
pGeometries @6 :List(VkGeometryNV);
}

struct VkAccelerationStructureCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
compactedSize @2 :UInt64;
info @3 :VkAccelerationStructureInfoNV;
}

struct VkBindAccelerationStructureMemoryInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
accelerationStructure @2 :UInt64;
memory @3 :UInt64;
memoryOffset @4 :UInt64;
deviceIndexCount @5 :UInt64;
pDeviceIndices @6 :List(UInt64);
}

struct VkWriteDescriptorSetAccelerationStructureKHR {
sType @0 :Int64;
pNext @1 :PNext;
accelerationStructureCount @2 :UInt64;
pAccelerationStructures @3 :List(UInt64);
}

struct VkWriteDescriptorSetAccelerationStructureNV {
sType @0 :Int64;
pNext @1 :PNext;
accelerationStructureCount @2 :UInt64;
pAccelerationStructures @3 :List(UInt64);
}

struct VkAccelerationStructureMemoryRequirementsInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
type @2 :Int64;
accelerationStructure @3 :UInt64;
}

struct VkPhysicalDeviceAccelerationStructureFeaturesKHR {
sType @0 :Int64;
pNext @1 :PNext;
accelerationStructure @2 :UInt64;
accelerationStructureCaptureReplay @3 :UInt64;
accelerationStructureIndirectBuild @4 :UInt64;
accelerationStructureHostCommands @5 :UInt64;
descriptorBindingAccelerationStructureUpdateAfterBind @6 :UInt64;
}

struct VkPhysicalDeviceRayTracingPipelineFeaturesKHR {
sType @0 :Int64;
pNext @1 :PNext;
rayTracingPipeline @2 :UInt64;
rayTracingPipelineShaderGroupHandleCaptureReplay @3 :UInt64;
rayTracingPipelineShaderGroupHandleCaptureReplayMixed @4 :UInt64;
rayTracingPipelineTraceRaysIndirect @5 :UInt64;
rayTraversalPrimitiveCulling @6 :UInt64;
}

struct VkPhysicalDeviceRayQueryFeaturesKHR {
sType @0 :Int64;
pNext @1 :PNext;
rayQuery @2 :UInt64;
}

struct VkPhysicalDeviceAccelerationStructurePropertiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
maxGeometryCount @2 :UInt64;
maxInstanceCount @3 :UInt64;
maxPrimitiveCount @4 :UInt64;
maxPerStageDescriptorAccelerationStructures @5 :UInt64;
maxPerStageDescriptorUpdateAfterBindAccelerationStructures @6 :UInt64;
maxDescriptorSetAccelerationStructures @7 :UInt64;
maxDescriptorSetUpdateAfterBindAccelerationStructures @8 :UInt64;
minAccelerationStructureScratchOffsetAlignment @9 :UInt64;
}

struct VkPhysicalDeviceRayTracingPipelinePropertiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
shaderGroupHandleSize @2 :UInt64;
maxRayRecursionDepth @3 :UInt64;
maxShaderGroupStride @4 :UInt64;
shaderGroupBaseAlignment @5 :UInt64;
shaderGroupHandleCaptureReplaySize @6 :UInt64;
maxRayDispatchInvocationCount @7 :UInt64;
shaderGroupHandleAlignment @8 :UInt64;
maxRayHitAttributeSize @9 :UInt64;
}

struct VkPhysicalDeviceRayTracingPropertiesNV {
sType @0 :Int64;
pNext @1 :PNext;
shaderGroupHandleSize @2 :UInt64;
maxRecursionDepth @3 :UInt64;
maxShaderGroupStride @4 :UInt64;
shaderGroupBaseAlignment @5 :UInt64;
maxGeometryCount @6 :UInt64;
maxInstanceCount @7 :UInt64;
maxTriangleCount @8 :UInt64;
maxDescriptorSetAccelerationStructures @9 :UInt64;
}

struct VkStridedDeviceAddressRegionKHR {
deviceAddress @0 :UInt64;
stride @1 :UInt64;
size @2 :UInt64;
}

struct VkTraceRaysIndirectCommandKHR {
width @0 :UInt64;
height @1 :UInt64;
depth @2 :UInt64;
}

struct VkTraceRaysIndirectCommand2KHR {
raygenShaderRecordAddress @0 :UInt64;
raygenShaderRecordSize @1 :UInt64;
missShaderBindingTableAddress @2 :UInt64;
missShaderBindingTableSize @3 :UInt64;
missShaderBindingTableStride @4 :UInt64;
hitShaderBindingTableAddress @5 :UInt64;
hitShaderBindingTableSize @6 :UInt64;
hitShaderBindingTableStride @7 :UInt64;
callableShaderBindingTableAddress @8 :UInt64;
callableShaderBindingTableSize @9 :UInt64;
callableShaderBindingTableStride @10 :UInt64;
width @11 :UInt64;
height @12 :UInt64;
depth @13 :UInt64;
}

struct VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR {
sType @0 :Int64;
pNext @1 :PNext;
rayTracingMaintenance1 @2 :UInt64;
rayTracingPipelineTraceRaysIndirect2 @3 :UInt64;
}

struct VkDrmFormatModifierPropertiesListEXT {
sType @0 :Int64;
pNext @1 :PNext;
drmFormatModifierCount @2 :UInt64;
pDrmFormatModifierProperties @3 :List(VkDrmFormatModifierPropertiesEXT);
}

struct VkDrmFormatModifierPropertiesEXT {
drmFormatModifier @0 :UInt64;
drmFormatModifierPlaneCount @1 :UInt64;
drmFormatModifierTilingFeatures @2 :Int64;
}

struct VkPhysicalDeviceImageDrmFormatModifierInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
drmFormatModifier @2 :UInt64;
sharingMode @3 :Int64;
queueFamilyIndexCount @4 :UInt64;
pQueueFamilyIndices @5 :List(UInt64);
}

struct VkImageDrmFormatModifierListCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
drmFormatModifierCount @2 :UInt64;
pDrmFormatModifiers @3 :List(UInt64);
}

struct VkImageDrmFormatModifierExplicitCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
drmFormatModifier @2 :UInt64;
drmFormatModifierPlaneCount @3 :UInt64;
pPlaneLayouts @4 :List(VkSubresourceLayout);
}

struct VkImageDrmFormatModifierPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
drmFormatModifier @2 :UInt64;
}

struct VkImageStencilUsageCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
stencilUsage @2 :Int64;
}

struct VkDeviceMemoryOverallocationCreateInfoAMD {
sType @0 :Int64;
pNext @1 :PNext;
overallocationBehavior @2 :Int64;
}

struct VkPhysicalDeviceFragmentDensityMapFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
fragmentDensityMap @2 :UInt64;
fragmentDensityMapDynamic @3 :UInt64;
fragmentDensityMapNonSubsampledImages @4 :UInt64;
}

struct VkPhysicalDeviceFragmentDensityMap2FeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
fragmentDensityMapDeferred @2 :UInt64;
}

struct VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM {
sType @0 :Int64;
pNext @1 :PNext;
fragmentDensityMapOffset @2 :UInt64;
}

struct VkPhysicalDeviceFragmentDensityMapPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
minFragmentDensityTexelSize @2 :VkExtent2D;
maxFragmentDensityTexelSize @3 :VkExtent2D;
fragmentDensityInvocations @4 :UInt64;
}

struct VkPhysicalDeviceFragmentDensityMap2PropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
subsampledLoads @2 :UInt64;
subsampledCoarseReconstructionEarlyAccess @3 :UInt64;
maxSubsampledArrayLayers @4 :UInt64;
maxDescriptorSetSubsampledSamplers @5 :UInt64;
}

struct VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM {
sType @0 :Int64;
pNext @1 :PNext;
fragmentDensityOffsetGranularity @2 :VkExtent2D;
}

struct VkRenderPassFragmentDensityMapCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
fragmentDensityMapAttachment @2 :VkAttachmentReference;
}

struct VkSubpassFragmentDensityMapOffsetEndInfoQCOM {
sType @0 :Int64;
pNext @1 :PNext;
fragmentDensityOffsetCount @2 :UInt64;
pFragmentDensityOffsets @3 :List(VkOffset2D);
}

struct VkPhysicalDeviceScalarBlockLayoutFeatures {
sType @0 :Int64;
pNext @1 :PNext;
scalarBlockLayout @2 :UInt64;
}

struct VkSurfaceProtectedCapabilitiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
supportsProtected @2 :UInt64;
}

struct VkPhysicalDeviceUniformBufferStandardLayoutFeatures {
sType @0 :Int64;
pNext @1 :PNext;
uniformBufferStandardLayout @2 :UInt64;
}

struct VkPhysicalDeviceDepthClipEnableFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
depthClipEnable @2 :UInt64;
}

struct VkPipelineRasterizationDepthClipStateCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
depthClipEnable @3 :UInt64;
}

struct VkPhysicalDeviceMemoryBudgetPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
heapBudget @2 :List(UInt64);
heapUsage @3 :List(UInt64);
}

struct VkPhysicalDeviceMemoryPriorityFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
memoryPriority @2 :UInt64;
}

struct VkMemoryPriorityAllocateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
priority @2 :Float32;
}

struct VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
pageableDeviceLocalMemory @2 :UInt64;
}

struct VkPhysicalDeviceBufferDeviceAddressFeatures {
sType @0 :Int64;
pNext @1 :PNext;
bufferDeviceAddress @2 :UInt64;
bufferDeviceAddressCaptureReplay @3 :UInt64;
bufferDeviceAddressMultiDevice @4 :UInt64;
}

struct VkPhysicalDeviceBufferDeviceAddressFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
bufferDeviceAddress @2 :UInt64;
bufferDeviceAddressCaptureReplay @3 :UInt64;
bufferDeviceAddressMultiDevice @4 :UInt64;
}

struct VkBufferDeviceAddressInfo {
sType @0 :Int64;
pNext @1 :PNext;
buffer @2 :UInt64;
}

struct VkBufferOpaqueCaptureAddressCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
opaqueCaptureAddress @2 :UInt64;
}

struct VkBufferDeviceAddressCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
deviceAddress @2 :UInt64;
}

struct VkPhysicalDeviceImageViewImageFormatInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
imageViewType @2 :Int64;
}

struct VkFilterCubicImageViewImageFormatPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
filterCubic @2 :UInt64;
filterCubicMinmax @3 :UInt64;
}

struct VkPhysicalDeviceImagelessFramebufferFeatures {
sType @0 :Int64;
pNext @1 :PNext;
imagelessFramebuffer @2 :UInt64;
}

struct VkFramebufferAttachmentsCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
attachmentImageInfoCount @2 :UInt64;
pAttachmentImageInfos @3 :List(VkFramebufferAttachmentImageInfo);
}

struct VkFramebufferAttachmentImageInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
usage @3 :Int64;
width @4 :UInt64;
height @5 :UInt64;
layerCount @6 :UInt64;
viewFormatCount @7 :UInt64;
pViewFormats @8 :List(Int64);
}

struct VkRenderPassAttachmentBeginInfo {
sType @0 :Int64;
pNext @1 :PNext;
attachmentCount @2 :UInt64;
pAttachments @3 :List(UInt64);
}

struct VkPhysicalDeviceTextureCompressionASTCHDRFeatures {
sType @0 :Int64;
pNext @1 :PNext;
textureCompressionASTCHDR @2 :UInt64;
}

struct VkPhysicalDeviceCooperativeMatrixFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
cooperativeMatrix @2 :UInt64;
cooperativeMatrixRobustBufferAccess @3 :UInt64;
}

struct VkPhysicalDeviceCooperativeMatrixPropertiesNV {
sType @0 :Int64;
pNext @1 :PNext;
cooperativeMatrixSupportedStages @2 :Int64;
}

struct VkCooperativeMatrixPropertiesNV {
sType @0 :Int64;
pNext @1 :PNext;
mSize @2 :UInt64;
nSize @3 :UInt64;
kSize @4 :UInt64;
aType @5 :Int64;
bType @6 :Int64;
cType @7 :Int64;
dType @8 :Int64;
scope @9 :Int64;
}

struct VkPhysicalDeviceYcbcrImageArraysFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
ycbcrImageArrays @2 :UInt64;
}

struct VkImageViewHandleInfoNVX {
sType @0 :Int64;
pNext @1 :PNext;
imageView @2 :UInt64;
descriptorType @3 :Int64;
sampler @4 :UInt64;
}

struct VkImageViewAddressPropertiesNVX {
sType @0 :Int64;
pNext @1 :PNext;
deviceAddress @2 :UInt64;
size @3 :UInt64;
}

struct VkPresentFrameTokenGGP {
sType @0 :Int64;
pNext @1 :PNext;
frameToken @2 :UInt64;
}

struct VkPipelineCreationFeedback {
flags @0 :Int64;
duration @1 :UInt64;
}

struct VkPipelineCreationFeedbackCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
pPipelineCreationFeedback @2 :List(VkPipelineCreationFeedback);
pipelineStageCreationFeedbackCount @3 :UInt64;
pPipelineStageCreationFeedbacks @4 :List(VkPipelineCreationFeedback);
}

struct VkSurfaceFullScreenExclusiveInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
fullScreenExclusive @2 :Int64;
}

struct VkSurfaceFullScreenExclusiveWin32InfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
hmonitor @2 :UInt64;
}

struct VkSurfaceCapabilitiesFullScreenExclusiveEXT {
sType @0 :Int64;
pNext @1 :PNext;
fullScreenExclusiveSupported @2 :UInt64;
}

struct VkPhysicalDevicePresentBarrierFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
presentBarrier @2 :UInt64;
}

struct VkSurfaceCapabilitiesPresentBarrierNV {
sType @0 :Int64;
pNext @1 :PNext;
presentBarrierSupported @2 :UInt64;
}

struct VkSwapchainPresentBarrierCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
presentBarrierEnable @2 :UInt64;
}

struct VkPhysicalDevicePerformanceQueryFeaturesKHR {
sType @0 :Int64;
pNext @1 :PNext;
performanceCounterQueryPools @2 :UInt64;
performanceCounterMultipleQueryPools @3 :UInt64;
}

struct VkPhysicalDevicePerformanceQueryPropertiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
allowCommandBufferQueryCopies @2 :UInt64;
}

struct VkPerformanceCounterKHR {
sType @0 :Int64;
pNext @1 :PNext;
unit @2 :Int64;
scope @3 :Int64;
storage @4 :Int64;
uuid @5 :List(UInt64);
}

struct VkPerformanceCounterDescriptionKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
name @3 :List(UInt64);
category @4 :List(UInt64);
description @5 :List(UInt64);
}

struct VkQueryPoolPerformanceCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
queueFamilyIndex @2 :UInt64;
counterIndexCount @3 :UInt64;
pCounterIndices @4 :List(UInt64);
}

struct VkPerformanceCounterResultKHR {
int32 @0 :Int64;
int64 @1 :Int64;
uint32 @2 :UInt64;
uint64 @3 :UInt64;
float32 @4 :Float32;
float64 @5 :Float64;
}

struct VkAcquireProfilingLockInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
timeout @3 :UInt64;
}

struct VkPerformanceQuerySubmitInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
counterPassIndex @2 :UInt64;
}

struct VkPerformanceQueryReservationInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
maxPerformanceQueriesPerPool @2 :UInt64;
}

struct VkHeadlessSurfaceCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
}

struct VkPhysicalDeviceCoverageReductionModeFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
coverageReductionMode @2 :UInt64;
}

struct VkPipelineCoverageReductionStateCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
coverageReductionMode @3 :Int64;
}

struct VkFramebufferMixedSamplesCombinationNV {
sType @0 :Int64;
pNext @1 :PNext;
coverageReductionMode @2 :Int64;
rasterizationSamples @3 :Int64;
depthStencilSamples @4 :Int64;
colorSamples @5 :Int64;
}

struct VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL {
sType @0 :Int64;
pNext @1 :PNext;
shaderIntegerFunctions2 @2 :UInt64;
}

struct VkPerformanceValueDataINTEL {
value32 @0 :UInt64;
value64 @1 :UInt64;
valueFloat @2 :Float32;
valueBool @3 :UInt64;
valueString @4 :List(UInt64);
}

struct VkPerformanceValueINTEL {
type @0 :Int64;
data @1 :VkPerformanceValueDataINTEL;
}

struct VkInitializePerformanceApiInfoINTEL {
sType @0 :Int64;
pNext @1 :PNext;
pUserData @2 :PUserData;
}

struct VkQueryPoolPerformanceQueryCreateInfoINTEL {
sType @0 :Int64;
pNext @1 :PNext;
performanceCountersSampling @2 :Int64;
}

struct VkPerformanceMarkerInfoINTEL {
sType @0 :Int64;
pNext @1 :PNext;
marker @2 :UInt64;
}

struct VkPerformanceStreamMarkerInfoINTEL {
sType @0 :Int64;
pNext @1 :PNext;
marker @2 :UInt64;
}

struct VkPerformanceOverrideInfoINTEL {
sType @0 :Int64;
pNext @1 :PNext;
type @2 :Int64;
enable @3 :UInt64;
parameter @4 :UInt64;
}

struct VkPerformanceConfigurationAcquireInfoINTEL {
sType @0 :Int64;
pNext @1 :PNext;
type @2 :Int64;
}

struct VkPhysicalDeviceShaderClockFeaturesKHR {
sType @0 :Int64;
pNext @1 :PNext;
shaderSubgroupClock @2 :UInt64;
shaderDeviceClock @3 :UInt64;
}

struct VkPhysicalDeviceIndexTypeUint8FeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
indexTypeUint8 @2 :UInt64;
}

struct VkPhysicalDeviceShaderSMBuiltinsPropertiesNV {
sType @0 :Int64;
pNext @1 :PNext;
shaderSMCount @2 :UInt64;
shaderWarpsPerSM @3 :UInt64;
}

struct VkPhysicalDeviceShaderSMBuiltinsFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
shaderSMBuiltins @2 :UInt64;
}

struct VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
fragmentShaderSampleInterlock @2 :UInt64;
fragmentShaderPixelInterlock @3 :UInt64;
fragmentShaderShadingRateInterlock @4 :UInt64;
}

struct VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures {
sType @0 :Int64;
pNext @1 :PNext;
separateDepthStencilLayouts @2 :UInt64;
}

struct VkAttachmentReferenceStencilLayout {
sType @0 :Int64;
pNext @1 :PNext;
stencilLayout @2 :Int64;
}

struct VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
primitiveTopologyListRestart @2 :UInt64;
primitiveTopologyPatchListRestart @3 :UInt64;
}

struct VkAttachmentDescriptionStencilLayout {
sType @0 :Int64;
pNext @1 :PNext;
stencilInitialLayout @2 :Int64;
stencilFinalLayout @3 :Int64;
}

struct VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR {
sType @0 :Int64;
pNext @1 :PNext;
pipelineExecutableInfo @2 :UInt64;
}

struct VkPipelineInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
pipeline @2 :UInt64;
}

struct VkPipelineExecutablePropertiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
stages @2 :Int64;
name @3 :List(UInt64);
description @4 :List(UInt64);
subgroupSize @5 :UInt64;
}

struct VkPipelineExecutableInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
pipeline @2 :UInt64;
executableIndex @3 :UInt64;
}

struct VkPipelineExecutableStatisticValueKHR {
b32 @0 :UInt64;
i64 @1 :Int64;
u64 @2 :UInt64;
f64 @3 :Float64;
}

struct VkPipelineExecutableStatisticKHR {
sType @0 :Int64;
pNext @1 :PNext;
name @2 :List(UInt64);
description @3 :List(UInt64);
format @4 :Int64;
value @5 :VkPipelineExecutableStatisticValueKHR;
}

struct VkPipelineExecutableInternalRepresentationKHR {
sType @0 :Int64;
pNext @1 :PNext;
name @2 :List(UInt64);
description @3 :List(UInt64);
isText @4 :UInt64;
dataSize @5 :UInt64;
pData @6 :List(UInt64);
}

struct VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures {
sType @0 :Int64;
pNext @1 :PNext;
shaderDemoteToHelperInvocation @2 :UInt64;
}

struct VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
texelBufferAlignment @2 :UInt64;
}

struct VkPhysicalDeviceTexelBufferAlignmentProperties {
sType @0 :Int64;
pNext @1 :PNext;
storageTexelBufferOffsetAlignmentBytes @2 :UInt64;
storageTexelBufferOffsetSingleTexelAlignment @3 :UInt64;
uniformTexelBufferOffsetAlignmentBytes @4 :UInt64;
uniformTexelBufferOffsetSingleTexelAlignment @5 :UInt64;
}

struct VkPhysicalDeviceSubgroupSizeControlFeatures {
sType @0 :Int64;
pNext @1 :PNext;
subgroupSizeControl @2 :UInt64;
computeFullSubgroups @3 :UInt64;
}

struct VkPhysicalDeviceSubgroupSizeControlProperties {
sType @0 :Int64;
pNext @1 :PNext;
minSubgroupSize @2 :UInt64;
maxSubgroupSize @3 :UInt64;
maxComputeWorkgroupSubgroups @4 :UInt64;
requiredSubgroupSizeStages @5 :Int64;
}

struct VkPipelineShaderStageRequiredSubgroupSizeCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
requiredSubgroupSize @2 :UInt64;
}

struct VkSubpassShadingPipelineCreateInfoHUAWEI {
sType @0 :Int64;
pNext @1 :PNext;
renderPass @2 :UInt64;
subpass @3 :UInt64;
}

struct VkPhysicalDeviceSubpassShadingPropertiesHUAWEI {
sType @0 :Int64;
pNext @1 :PNext;
maxSubpassShadingWorkgroupSizeAspectRatio @2 :UInt64;
}

struct VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI {
sType @0 :Int64;
pNext @1 :PNext;
maxWorkGroupCount @2 :List(UInt64);
maxWorkGroupSize @3 :List(UInt64);
maxOutputClusterCount @4 :UInt64;
indirectBufferOffsetAlignment @5 :UInt64;
}

struct VkMemoryOpaqueCaptureAddressAllocateInfo {
sType @0 :Int64;
pNext @1 :PNext;
opaqueCaptureAddress @2 :UInt64;
}

struct VkDeviceMemoryOpaqueCaptureAddressInfo {
sType @0 :Int64;
pNext @1 :PNext;
memory @2 :UInt64;
}

struct VkPhysicalDeviceLineRasterizationFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
rectangularLines @2 :UInt64;
bresenhamLines @3 :UInt64;
smoothLines @4 :UInt64;
stippledRectangularLines @5 :UInt64;
stippledBresenhamLines @6 :UInt64;
stippledSmoothLines @7 :UInt64;
}

struct VkPhysicalDeviceLineRasterizationPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
lineSubPixelPrecisionBits @2 :UInt64;
}

struct VkPipelineRasterizationLineStateCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
lineRasterizationMode @2 :Int64;
stippledLineEnable @3 :UInt64;
lineStippleFactor @4 :UInt64;
lineStipplePattern @5 :UInt64;
}

struct VkPhysicalDevicePipelineCreationCacheControlFeatures {
sType @0 :Int64;
pNext @1 :PNext;
pipelineCreationCacheControl @2 :UInt64;
}

struct VkPhysicalDeviceVulkan11Features {
sType @0 :Int64;
pNext @1 :PNext;
storageBuffer16BitAccess @2 :UInt64;
uniformAndStorageBuffer16BitAccess @3 :UInt64;
storagePushConstant16 @4 :UInt64;
storageInputOutput16 @5 :UInt64;
multiview @6 :UInt64;
multiviewGeometryShader @7 :UInt64;
multiviewTessellationShader @8 :UInt64;
variablePointersStorageBuffer @9 :UInt64;
variablePointers @10 :UInt64;
protectedMemory @11 :UInt64;
samplerYcbcrConversion @12 :UInt64;
shaderDrawParameters @13 :UInt64;
}

struct VkPhysicalDeviceVulkan11Properties {
sType @0 :Int64;
pNext @1 :PNext;
deviceUUID @2 :List(UInt64);
driverUUID @3 :List(UInt64);
deviceLUID @4 :List(UInt64);
deviceNodeMask @5 :UInt64;
deviceLUIDValid @6 :UInt64;
subgroupSize @7 :UInt64;
subgroupSupportedStages @8 :Int64;
subgroupSupportedOperations @9 :Int64;
subgroupQuadOperationsInAllStages @10 :UInt64;
pointClippingBehavior @11 :Int64;
maxMultiviewViewCount @12 :UInt64;
maxMultiviewInstanceIndex @13 :UInt64;
protectedNoFault @14 :UInt64;
maxPerSetDescriptors @15 :UInt64;
maxMemoryAllocationSize @16 :UInt64;
}

struct VkPhysicalDeviceVulkan12Features {
sType @0 :Int64;
pNext @1 :PNext;
samplerMirrorClampToEdge @2 :UInt64;
drawIndirectCount @3 :UInt64;
storageBuffer8BitAccess @4 :UInt64;
uniformAndStorageBuffer8BitAccess @5 :UInt64;
storagePushConstant8 @6 :UInt64;
shaderBufferInt64Atomics @7 :UInt64;
shaderSharedInt64Atomics @8 :UInt64;
shaderFloat16 @9 :UInt64;
shaderInt8 @10 :UInt64;
descriptorIndexing @11 :UInt64;
shaderInputAttachmentArrayDynamicIndexing @12 :UInt64;
shaderUniformTexelBufferArrayDynamicIndexing @13 :UInt64;
shaderStorageTexelBufferArrayDynamicIndexing @14 :UInt64;
shaderUniformBufferArrayNonUniformIndexing @15 :UInt64;
shaderSampledImageArrayNonUniformIndexing @16 :UInt64;
shaderStorageBufferArrayNonUniformIndexing @17 :UInt64;
shaderStorageImageArrayNonUniformIndexing @18 :UInt64;
shaderInputAttachmentArrayNonUniformIndexing @19 :UInt64;
shaderUniformTexelBufferArrayNonUniformIndexing @20 :UInt64;
shaderStorageTexelBufferArrayNonUniformIndexing @21 :UInt64;
descriptorBindingUniformBufferUpdateAfterBind @22 :UInt64;
descriptorBindingSampledImageUpdateAfterBind @23 :UInt64;
descriptorBindingStorageImageUpdateAfterBind @24 :UInt64;
descriptorBindingStorageBufferUpdateAfterBind @25 :UInt64;
descriptorBindingUniformTexelBufferUpdateAfterBind @26 :UInt64;
descriptorBindingStorageTexelBufferUpdateAfterBind @27 :UInt64;
descriptorBindingUpdateUnusedWhilePending @28 :UInt64;
descriptorBindingPartiallyBound @29 :UInt64;
descriptorBindingVariableDescriptorCount @30 :UInt64;
runtimeDescriptorArray @31 :UInt64;
samplerFilterMinmax @32 :UInt64;
scalarBlockLayout @33 :UInt64;
imagelessFramebuffer @34 :UInt64;
uniformBufferStandardLayout @35 :UInt64;
shaderSubgroupExtendedTypes @36 :UInt64;
separateDepthStencilLayouts @37 :UInt64;
hostQueryReset @38 :UInt64;
timelineSemaphore @39 :UInt64;
bufferDeviceAddress @40 :UInt64;
bufferDeviceAddressCaptureReplay @41 :UInt64;
bufferDeviceAddressMultiDevice @42 :UInt64;
vulkanMemoryModel @43 :UInt64;
vulkanMemoryModelDeviceScope @44 :UInt64;
vulkanMemoryModelAvailabilityVisibilityChains @45 :UInt64;
shaderOutputViewportIndex @46 :UInt64;
shaderOutputLayer @47 :UInt64;
subgroupBroadcastDynamicId @48 :UInt64;
}

struct VkPhysicalDeviceVulkan12Properties {
sType @0 :Int64;
pNext @1 :PNext;
driverID @2 :Int64;
driverName @3 :List(UInt64);
driverInfo @4 :List(UInt64);
conformanceVersion @5 :VkConformanceVersion;
denormBehaviorIndependence @6 :Int64;
roundingModeIndependence @7 :Int64;
shaderSignedZeroInfNanPreserveFloat16 @8 :UInt64;
shaderSignedZeroInfNanPreserveFloat32 @9 :UInt64;
shaderSignedZeroInfNanPreserveFloat64 @10 :UInt64;
shaderDenormPreserveFloat16 @11 :UInt64;
shaderDenormPreserveFloat32 @12 :UInt64;
shaderDenormPreserveFloat64 @13 :UInt64;
shaderDenormFlushToZeroFloat16 @14 :UInt64;
shaderDenormFlushToZeroFloat32 @15 :UInt64;
shaderDenormFlushToZeroFloat64 @16 :UInt64;
shaderRoundingModeRTEFloat16 @17 :UInt64;
shaderRoundingModeRTEFloat32 @18 :UInt64;
shaderRoundingModeRTEFloat64 @19 :UInt64;
shaderRoundingModeRTZFloat16 @20 :UInt64;
shaderRoundingModeRTZFloat32 @21 :UInt64;
shaderRoundingModeRTZFloat64 @22 :UInt64;
maxUpdateAfterBindDescriptorsInAllPools @23 :UInt64;
shaderUniformBufferArrayNonUniformIndexingNative @24 :UInt64;
shaderSampledImageArrayNonUniformIndexingNative @25 :UInt64;
shaderStorageBufferArrayNonUniformIndexingNative @26 :UInt64;
shaderStorageImageArrayNonUniformIndexingNative @27 :UInt64;
shaderInputAttachmentArrayNonUniformIndexingNative @28 :UInt64;
robustBufferAccessUpdateAfterBind @29 :UInt64;
quadDivergentImplicitLod @30 :UInt64;
maxPerStageDescriptorUpdateAfterBindSamplers @31 :UInt64;
maxPerStageDescriptorUpdateAfterBindUniformBuffers @32 :UInt64;
maxPerStageDescriptorUpdateAfterBindStorageBuffers @33 :UInt64;
maxPerStageDescriptorUpdateAfterBindSampledImages @34 :UInt64;
maxPerStageDescriptorUpdateAfterBindStorageImages @35 :UInt64;
maxPerStageDescriptorUpdateAfterBindInputAttachments @36 :UInt64;
maxPerStageUpdateAfterBindResources @37 :UInt64;
maxDescriptorSetUpdateAfterBindSamplers @38 :UInt64;
maxDescriptorSetUpdateAfterBindUniformBuffers @39 :UInt64;
maxDescriptorSetUpdateAfterBindUniformBuffersDynamic @40 :UInt64;
maxDescriptorSetUpdateAfterBindStorageBuffers @41 :UInt64;
maxDescriptorSetUpdateAfterBindStorageBuffersDynamic @42 :UInt64;
maxDescriptorSetUpdateAfterBindSampledImages @43 :UInt64;
maxDescriptorSetUpdateAfterBindStorageImages @44 :UInt64;
maxDescriptorSetUpdateAfterBindInputAttachments @45 :UInt64;
supportedDepthResolveModes @46 :Int64;
supportedStencilResolveModes @47 :Int64;
independentResolveNone @48 :UInt64;
independentResolve @49 :UInt64;
filterMinmaxSingleComponentFormats @50 :UInt64;
filterMinmaxImageComponentMapping @51 :UInt64;
maxTimelineSemaphoreValueDifference @52 :UInt64;
framebufferIntegerColorSampleCounts @53 :Int64;
}

struct VkPhysicalDeviceVulkan13Features {
sType @0 :Int64;
pNext @1 :PNext;
robustImageAccess @2 :UInt64;
inlineUniformBlock @3 :UInt64;
descriptorBindingInlineUniformBlockUpdateAfterBind @4 :UInt64;
pipelineCreationCacheControl @5 :UInt64;
privateData @6 :UInt64;
shaderDemoteToHelperInvocation @7 :UInt64;
shaderTerminateInvocation @8 :UInt64;
subgroupSizeControl @9 :UInt64;
computeFullSubgroups @10 :UInt64;
synchronization2 @11 :UInt64;
textureCompressionASTCHDR @12 :UInt64;
shaderZeroInitializeWorkgroupMemory @13 :UInt64;
dynamicRendering @14 :UInt64;
shaderIntegerDotProduct @15 :UInt64;
maintenance4 @16 :UInt64;
}

struct VkPhysicalDeviceVulkan13Properties {
sType @0 :Int64;
pNext @1 :PNext;
minSubgroupSize @2 :UInt64;
maxSubgroupSize @3 :UInt64;
maxComputeWorkgroupSubgroups @4 :UInt64;
requiredSubgroupSizeStages @5 :Int64;
maxInlineUniformBlockSize @6 :UInt64;
maxPerStageDescriptorInlineUniformBlocks @7 :UInt64;
maxPerStageDescriptorUpdateAfterBindInlineUniformBlocks @8 :UInt64;
maxDescriptorSetInlineUniformBlocks @9 :UInt64;
maxDescriptorSetUpdateAfterBindInlineUniformBlocks @10 :UInt64;
maxInlineUniformTotalSize @11 :UInt64;
integerDotProduct8BitUnsignedAccelerated @12 :UInt64;
integerDotProduct8BitSignedAccelerated @13 :UInt64;
integerDotProduct8BitMixedSignednessAccelerated @14 :UInt64;
integerDotProduct4x8BitPackedUnsignedAccelerated @15 :UInt64;
integerDotProduct4x8BitPackedSignedAccelerated @16 :UInt64;
integerDotProduct4x8BitPackedMixedSignednessAccelerated @17 :UInt64;
integerDotProduct16BitUnsignedAccelerated @18 :UInt64;
integerDotProduct16BitSignedAccelerated @19 :UInt64;
integerDotProduct16BitMixedSignednessAccelerated @20 :UInt64;
integerDotProduct32BitUnsignedAccelerated @21 :UInt64;
integerDotProduct32BitSignedAccelerated @22 :UInt64;
integerDotProduct32BitMixedSignednessAccelerated @23 :UInt64;
integerDotProduct64BitUnsignedAccelerated @24 :UInt64;
integerDotProduct64BitSignedAccelerated @25 :UInt64;
integerDotProduct64BitMixedSignednessAccelerated @26 :UInt64;
integerDotProductAccumulatingSaturating8BitUnsignedAccelerated @27 :UInt64;
integerDotProductAccumulatingSaturating8BitSignedAccelerated @28 :UInt64;
integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated @29 :UInt64;
integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated @30 :UInt64;
integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated @31 :UInt64;
integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated @32 :UInt64;
integerDotProductAccumulatingSaturating16BitUnsignedAccelerated @33 :UInt64;
integerDotProductAccumulatingSaturating16BitSignedAccelerated @34 :UInt64;
integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated @35 :UInt64;
integerDotProductAccumulatingSaturating32BitUnsignedAccelerated @36 :UInt64;
integerDotProductAccumulatingSaturating32BitSignedAccelerated @37 :UInt64;
integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated @38 :UInt64;
integerDotProductAccumulatingSaturating64BitUnsignedAccelerated @39 :UInt64;
integerDotProductAccumulatingSaturating64BitSignedAccelerated @40 :UInt64;
integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated @41 :UInt64;
storageTexelBufferOffsetAlignmentBytes @42 :UInt64;
storageTexelBufferOffsetSingleTexelAlignment @43 :UInt64;
uniformTexelBufferOffsetAlignmentBytes @44 :UInt64;
uniformTexelBufferOffsetSingleTexelAlignment @45 :UInt64;
maxBufferSize @46 :UInt64;
}

struct VkPipelineCompilerControlCreateInfoAMD {
sType @0 :Int64;
pNext @1 :PNext;
compilerControlFlags @2 :Int64;
}

struct VkPhysicalDeviceCoherentMemoryFeaturesAMD {
sType @0 :Int64;
pNext @1 :PNext;
deviceCoherentMemory @2 :UInt64;
}

struct VkFaultData {
sType @0 :Int64;
pNext @1 :PNext;
faultLevel @2 :Int64;
faultType @3 :Int64;
}

struct VkFaultCallbackInfo {
sType @0 :Int64;
pNext @1 :PNext;
faultCount @2 :UInt64;
pFaults @3 :List(VkFaultData);
pfnFaultCallback @4 :PFNvkFaultCallbackFunction;
}

struct VkPhysicalDeviceToolProperties {
sType @0 :Int64;
pNext @1 :PNext;
name @2 :List(UInt64);
version @3 :List(UInt64);
purposes @4 :Int64;
description @5 :List(UInt64);
layer @6 :List(UInt64);
}

struct VkSamplerCustomBorderColorCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
customBorderColor @2 :VkClearColorValue;
format @3 :Int64;
}

struct VkPhysicalDeviceCustomBorderColorPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
maxCustomBorderColorSamplers @2 :UInt64;
}

struct VkPhysicalDeviceCustomBorderColorFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
customBorderColors @2 :UInt64;
customBorderColorWithoutFormat @3 :UInt64;
}

struct VkSamplerBorderColorComponentMappingCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
components @2 :VkComponentMapping;
srgb @3 :UInt64;
}

struct VkPhysicalDeviceBorderColorSwizzleFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
borderColorSwizzle @2 :UInt64;
borderColorSwizzleFromImage @3 :UInt64;
}

struct VkDeviceOrHostAddressKHR {
deviceAddress @0 :UInt64;
hostAddress @1 :List(UInt64);
}

struct VkDeviceOrHostAddressConstKHR {
deviceAddress @0 :UInt64;
hostAddress @1 :List(UInt64);
}

struct VkDeviceOrHostAddressConstAMDX {
deviceAddress @0 :UInt64;
hostAddress @1 :List(UInt64);
}

struct VkAccelerationStructureGeometryTrianglesDataKHR {
sType @0 :Int64;
pNext @1 :PNext;
vertexFormat @2 :Int64;
vertexData @3 :VkDeviceOrHostAddressConstKHR;
vertexStride @4 :UInt64;
maxVertex @5 :UInt64;
indexType @6 :Int64;
indexData @7 :VkDeviceOrHostAddressConstKHR;
transformData @8 :VkDeviceOrHostAddressConstKHR;
}

struct VkAccelerationStructureGeometryAabbsDataKHR {
sType @0 :Int64;
pNext @1 :PNext;
data @2 :VkDeviceOrHostAddressConstKHR;
stride @3 :UInt64;
}

struct VkAccelerationStructureGeometryInstancesDataKHR {
sType @0 :Int64;
pNext @1 :PNext;
arrayOfPointers @2 :UInt64;
data @3 :VkDeviceOrHostAddressConstKHR;
}

struct VkAccelerationStructureGeometryDataKHR {
triangles @0 :VkAccelerationStructureGeometryTrianglesDataKHR;
aabbs @1 :VkAccelerationStructureGeometryAabbsDataKHR;
instances @2 :VkAccelerationStructureGeometryInstancesDataKHR;
}

struct VkAccelerationStructureGeometryKHR {
sType @0 :Int64;
pNext @1 :PNext;
geometryType @2 :Int64;
geometry @3 :VkAccelerationStructureGeometryDataKHR;
flags @4 :Int64;
}

struct VkAccelerationStructureBuildGeometryInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
type @2 :Int64;
flags @3 :Int64;
mode @4 :Int64;
srcAccelerationStructure @5 :UInt64;
dstAccelerationStructure @6 :UInt64;
geometryCount @7 :UInt64;
pGeometries @8 :List(VkAccelerationStructureGeometryKHR);
ppGeometries @9 :List(List(VkAccelerationStructureGeometryKHR));
scratchData @10 :VkDeviceOrHostAddressKHR;
}

struct VkAccelerationStructureBuildRangeInfoKHR {
primitiveCount @0 :UInt64;
primitiveOffset @1 :UInt64;
firstVertex @2 :UInt64;
transformOffset @3 :UInt64;
}

struct VkAccelerationStructureCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
createFlags @2 :Int64;
buffer @3 :UInt64;
offset @4 :UInt64;
size @5 :UInt64;
type @6 :Int64;
deviceAddress @7 :UInt64;
}

struct VkAabbPositionsKHR {
minX @0 :Float32;
minY @1 :Float32;
minZ @2 :Float32;
maxX @3 :Float32;
maxY @4 :Float32;
maxZ @5 :Float32;
}

struct VkTransformMatrixKHR {
matrix @0 :List(List(Float32));
}

struct VkAccelerationStructureInstanceKHR {
transform @0 :VkTransformMatrixKHR;
instanceCustomIndex @1 :UInt64;
mask @2 :UInt64;
instanceShaderBindingTableRecordOffset @3 :UInt64;
flags @4 :Int64;
accelerationStructureReference @5 :UInt64;
}

struct VkAccelerationStructureDeviceAddressInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
accelerationStructure @2 :UInt64;
}

struct VkAccelerationStructureVersionInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
pVersionData @2 :List(UInt64);
}

struct VkCopyAccelerationStructureInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
src @2 :UInt64;
dst @3 :UInt64;
mode @4 :Int64;
}

struct VkCopyAccelerationStructureToMemoryInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
src @2 :UInt64;
dst @3 :VkDeviceOrHostAddressKHR;
mode @4 :Int64;
}

struct VkCopyMemoryToAccelerationStructureInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
src @2 :VkDeviceOrHostAddressConstKHR;
dst @3 :UInt64;
mode @4 :Int64;
}

struct VkRayTracingPipelineInterfaceCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
maxPipelineRayPayloadSize @2 :UInt64;
maxPipelineRayHitAttributeSize @3 :UInt64;
}

struct VkPipelineLibraryCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
libraryCount @2 :UInt64;
pLibraries @3 :List(UInt64);
}

struct VkRefreshObjectKHR {
objectType @0 :Int64;
objectHandle @1 :UInt64;
flags @2 :Int64;
}

struct VkRefreshObjectListKHR {
sType @0 :Int64;
pNext @1 :PNext;
objectCount @2 :UInt64;
pObjects @3 :List(VkRefreshObjectKHR);
}

struct VkPhysicalDeviceExtendedDynamicStateFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
extendedDynamicState @2 :UInt64;
}

struct VkPhysicalDeviceExtendedDynamicState2FeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
extendedDynamicState2 @2 :UInt64;
extendedDynamicState2LogicOp @3 :UInt64;
extendedDynamicState2PatchControlPoints @4 :UInt64;
}

struct VkPhysicalDeviceExtendedDynamicState3FeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
extendedDynamicState3TessellationDomainOrigin @2 :UInt64;
extendedDynamicState3DepthClampEnable @3 :UInt64;
extendedDynamicState3PolygonMode @4 :UInt64;
extendedDynamicState3RasterizationSamples @5 :UInt64;
extendedDynamicState3SampleMask @6 :UInt64;
extendedDynamicState3AlphaToCoverageEnable @7 :UInt64;
extendedDynamicState3AlphaToOneEnable @8 :UInt64;
extendedDynamicState3LogicOpEnable @9 :UInt64;
extendedDynamicState3ColorBlendEnable @10 :UInt64;
extendedDynamicState3ColorBlendEquation @11 :UInt64;
extendedDynamicState3ColorWriteMask @12 :UInt64;
extendedDynamicState3RasterizationStream @13 :UInt64;
extendedDynamicState3ConservativeRasterizationMode @14 :UInt64;
extendedDynamicState3ExtraPrimitiveOverestimationSize @15 :UInt64;
extendedDynamicState3DepthClipEnable @16 :UInt64;
extendedDynamicState3SampleLocationsEnable @17 :UInt64;
extendedDynamicState3ColorBlendAdvanced @18 :UInt64;
extendedDynamicState3ProvokingVertexMode @19 :UInt64;
extendedDynamicState3LineRasterizationMode @20 :UInt64;
extendedDynamicState3LineStippleEnable @21 :UInt64;
extendedDynamicState3DepthClipNegativeOneToOne @22 :UInt64;
extendedDynamicState3ViewportWScalingEnable @23 :UInt64;
extendedDynamicState3ViewportSwizzle @24 :UInt64;
extendedDynamicState3CoverageToColorEnable @25 :UInt64;
extendedDynamicState3CoverageToColorLocation @26 :UInt64;
extendedDynamicState3CoverageModulationMode @27 :UInt64;
extendedDynamicState3CoverageModulationTableEnable @28 :UInt64;
extendedDynamicState3CoverageModulationTable @29 :UInt64;
extendedDynamicState3CoverageReductionMode @30 :UInt64;
extendedDynamicState3RepresentativeFragmentTestEnable @31 :UInt64;
extendedDynamicState3ShadingRateImageEnable @32 :UInt64;
}

struct VkPhysicalDeviceExtendedDynamicState3PropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
dynamicPrimitiveTopologyUnrestricted @2 :UInt64;
}

struct VkColorBlendEquationEXT {
srcColorBlendFactor @0 :Int64;
dstColorBlendFactor @1 :Int64;
colorBlendOp @2 :Int64;
srcAlphaBlendFactor @3 :Int64;
dstAlphaBlendFactor @4 :Int64;
alphaBlendOp @5 :Int64;
}

struct VkColorBlendAdvancedEXT {
advancedBlendOp @0 :Int64;
srcPremultiplied @1 :UInt64;
dstPremultiplied @2 :UInt64;
blendOverlap @3 :Int64;
clampResults @4 :UInt64;
}

struct VkRenderPassTransformBeginInfoQCOM {
sType @0 :Int64;
pNext @1 :PNext;
transform @2 :Int64;
}

struct VkCopyCommandTransformInfoQCOM {
sType @0 :Int64;
pNext @1 :PNext;
transform @2 :Int64;
}

struct VkCommandBufferInheritanceRenderPassTransformInfoQCOM {
sType @0 :Int64;
pNext @1 :PNext;
transform @2 :Int64;
renderArea @3 :VkRect2D;
}

struct VkPhysicalDeviceDiagnosticsConfigFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
diagnosticsConfig @2 :UInt64;
}

struct VkDeviceDiagnosticsConfigCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
}

struct VkPipelineOfflineCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
pipelineIdentifier @2 :List(UInt64);
matchControl @3 :Int64;
poolEntrySize @4 :UInt64;
}

struct VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures {
sType @0 :Int64;
pNext @1 :PNext;
shaderZeroInitializeWorkgroupMemory @2 :UInt64;
}

struct VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR {
sType @0 :Int64;
pNext @1 :PNext;
shaderSubgroupUniformControlFlow @2 :UInt64;
}

struct VkPhysicalDeviceRobustness2FeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
robustBufferAccess2 @2 :UInt64;
robustImageAccess2 @3 :UInt64;
nullDescriptor @4 :UInt64;
}

struct VkPhysicalDeviceRobustness2PropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
robustStorageBufferAccessSizeAlignment @2 :UInt64;
robustUniformBufferAccessSizeAlignment @3 :UInt64;
}

struct VkPhysicalDeviceImageRobustnessFeatures {
sType @0 :Int64;
pNext @1 :PNext;
robustImageAccess @2 :UInt64;
}

struct VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR {
sType @0 :Int64;
pNext @1 :PNext;
workgroupMemoryExplicitLayout @2 :UInt64;
workgroupMemoryExplicitLayoutScalarBlockLayout @3 :UInt64;
workgroupMemoryExplicitLayout8BitAccess @4 :UInt64;
workgroupMemoryExplicitLayout16BitAccess @5 :UInt64;
}

struct VkPhysicalDevicePortabilitySubsetFeaturesKHR {
sType @0 :Int64;
pNext @1 :PNext;
constantAlphaColorBlendFactors @2 :UInt64;
events @3 :UInt64;
imageViewFormatReinterpretation @4 :UInt64;
imageViewFormatSwizzle @5 :UInt64;
imageView2DOn3DImage @6 :UInt64;
multisampleArrayImage @7 :UInt64;
mutableComparisonSamplers @8 :UInt64;
pointPolygons @9 :UInt64;
samplerMipLodBias @10 :UInt64;
separateStencilMaskRef @11 :UInt64;
shaderSampleRateInterpolationFunctions @12 :UInt64;
tessellationIsolines @13 :UInt64;
tessellationPointMode @14 :UInt64;
triangleFans @15 :UInt64;
vertexAttributeAccessBeyondStride @16 :UInt64;
}

struct VkPhysicalDevicePortabilitySubsetPropertiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
minVertexInputBindingStrideAlignment @2 :UInt64;
}

struct VkPhysicalDevice4444FormatsFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
formatA4R4G4B4 @2 :UInt64;
formatA4B4G4R4 @3 :UInt64;
}

struct VkPhysicalDeviceSubpassShadingFeaturesHUAWEI {
sType @0 :Int64;
pNext @1 :PNext;
subpassShading @2 :UInt64;
}

struct VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI {
sType @0 :Int64;
pNext @1 :PNext;
clustercullingShader @2 :UInt64;
multiviewClusterCullingShader @3 :UInt64;
}

struct VkBufferCopy2 {
sType @0 :Int64;
pNext @1 :PNext;
srcOffset @2 :UInt64;
dstOffset @3 :UInt64;
size @4 :UInt64;
}

struct VkImageCopy2 {
sType @0 :Int64;
pNext @1 :PNext;
srcSubresource @2 :VkImageSubresourceLayers;
srcOffset @3 :VkOffset3D;
dstSubresource @4 :VkImageSubresourceLayers;
dstOffset @5 :VkOffset3D;
extent @6 :VkExtent3D;
}

struct VkImageBlit2 {
sType @0 :Int64;
pNext @1 :PNext;
srcSubresource @2 :VkImageSubresourceLayers;
srcOffsets @3 :List(VkOffset3D);
dstSubresource @4 :VkImageSubresourceLayers;
dstOffsets @5 :List(VkOffset3D);
}

struct VkBufferImageCopy2 {
sType @0 :Int64;
pNext @1 :PNext;
bufferOffset @2 :UInt64;
bufferRowLength @3 :UInt64;
bufferImageHeight @4 :UInt64;
imageSubresource @5 :VkImageSubresourceLayers;
imageOffset @6 :VkOffset3D;
imageExtent @7 :VkExtent3D;
}

struct VkImageResolve2 {
sType @0 :Int64;
pNext @1 :PNext;
srcSubresource @2 :VkImageSubresourceLayers;
srcOffset @3 :VkOffset3D;
dstSubresource @4 :VkImageSubresourceLayers;
dstOffset @5 :VkOffset3D;
extent @6 :VkExtent3D;
}

struct VkCopyBufferInfo2 {
sType @0 :Int64;
pNext @1 :PNext;
srcBuffer @2 :UInt64;
dstBuffer @3 :UInt64;
regionCount @4 :UInt64;
pRegions @5 :List(VkBufferCopy2);
}

struct VkCopyImageInfo2 {
sType @0 :Int64;
pNext @1 :PNext;
srcImage @2 :UInt64;
srcImageLayout @3 :Int64;
dstImage @4 :UInt64;
dstImageLayout @5 :Int64;
regionCount @6 :UInt64;
pRegions @7 :List(VkImageCopy2);
}

struct VkBlitImageInfo2 {
sType @0 :Int64;
pNext @1 :PNext;
srcImage @2 :UInt64;
srcImageLayout @3 :Int64;
dstImage @4 :UInt64;
dstImageLayout @5 :Int64;
regionCount @6 :UInt64;
pRegions @7 :List(VkImageBlit2);
filter @8 :Int64;
}

struct VkCopyBufferToImageInfo2 {
sType @0 :Int64;
pNext @1 :PNext;
srcBuffer @2 :UInt64;
dstImage @3 :UInt64;
dstImageLayout @4 :Int64;
regionCount @5 :UInt64;
pRegions @6 :List(VkBufferImageCopy2);
}

struct VkCopyImageToBufferInfo2 {
sType @0 :Int64;
pNext @1 :PNext;
srcImage @2 :UInt64;
srcImageLayout @3 :Int64;
dstBuffer @4 :UInt64;
regionCount @5 :UInt64;
pRegions @6 :List(VkBufferImageCopy2);
}

struct VkResolveImageInfo2 {
sType @0 :Int64;
pNext @1 :PNext;
srcImage @2 :UInt64;
srcImageLayout @3 :Int64;
dstImage @4 :UInt64;
dstImageLayout @5 :Int64;
regionCount @6 :UInt64;
pRegions @7 :List(VkImageResolve2);
}

struct VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
shaderImageInt64Atomics @2 :UInt64;
sparseImageInt64Atomics @3 :UInt64;
}

struct VkFragmentShadingRateAttachmentInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
pFragmentShadingRateAttachment @2 :List(VkAttachmentReference2);
shadingRateAttachmentTexelSize @3 :VkExtent2D;
}

struct VkPipelineFragmentShadingRateStateCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
fragmentSize @2 :VkExtent2D;
combinerOps @3 :List(Int64);
}

struct VkPhysicalDeviceFragmentShadingRateFeaturesKHR {
sType @0 :Int64;
pNext @1 :PNext;
pipelineFragmentShadingRate @2 :UInt64;
primitiveFragmentShadingRate @3 :UInt64;
attachmentFragmentShadingRate @4 :UInt64;
}

struct VkPhysicalDeviceFragmentShadingRatePropertiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
minFragmentShadingRateAttachmentTexelSize @2 :VkExtent2D;
maxFragmentShadingRateAttachmentTexelSize @3 :VkExtent2D;
maxFragmentShadingRateAttachmentTexelSizeAspectRatio @4 :UInt64;
primitiveFragmentShadingRateWithMultipleViewports @5 :UInt64;
layeredShadingRateAttachments @6 :UInt64;
fragmentShadingRateNonTrivialCombinerOps @7 :UInt64;
maxFragmentSize @8 :VkExtent2D;
maxFragmentSizeAspectRatio @9 :UInt64;
maxFragmentShadingRateCoverageSamples @10 :UInt64;
maxFragmentShadingRateRasterizationSamples @11 :Int64;
fragmentShadingRateWithShaderDepthStencilWrites @12 :UInt64;
fragmentShadingRateWithSampleMask @13 :UInt64;
fragmentShadingRateWithShaderSampleMask @14 :UInt64;
fragmentShadingRateWithConservativeRasterization @15 :UInt64;
fragmentShadingRateWithFragmentShaderInterlock @16 :UInt64;
fragmentShadingRateWithCustomSampleLocations @17 :UInt64;
fragmentShadingRateStrictMultiplyCombiner @18 :UInt64;
}

struct VkPhysicalDeviceFragmentShadingRateKHR {
sType @0 :Int64;
pNext @1 :PNext;
sampleCounts @2 :Int64;
fragmentSize @3 :VkExtent2D;
}

struct VkPhysicalDeviceShaderTerminateInvocationFeatures {
sType @0 :Int64;
pNext @1 :PNext;
shaderTerminateInvocation @2 :UInt64;
}

struct VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
fragmentShadingRateEnums @2 :UInt64;
supersampleFragmentShadingRates @3 :UInt64;
noInvocationFragmentShadingRates @4 :UInt64;
}

struct VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV {
sType @0 :Int64;
pNext @1 :PNext;
maxFragmentShadingRateInvocationCount @2 :Int64;
}

struct VkPipelineFragmentShadingRateEnumStateCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
shadingRateType @2 :Int64;
shadingRate @3 :Int64;
combinerOps @4 :List(Int64);
}

struct VkAccelerationStructureBuildSizesInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
accelerationStructureSize @2 :UInt64;
updateScratchSize @3 :UInt64;
buildScratchSize @4 :UInt64;
}

struct VkPhysicalDeviceImage2DViewOf3DFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
image2DViewOf3D @2 :UInt64;
sampler2DViewOf3D @3 :UInt64;
}

struct VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
imageSlicedViewOf3D @2 :UInt64;
}

struct VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
attachmentFeedbackLoopDynamicState @2 :UInt64;
}

struct VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
mutableDescriptorType @2 :UInt64;
}

struct VkMutableDescriptorTypeListEXT {
descriptorTypeCount @0 :UInt64;
pDescriptorTypes @1 :List(Int64);
}

struct VkMutableDescriptorTypeCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
mutableDescriptorTypeListCount @2 :UInt64;
pMutableDescriptorTypeLists @3 :List(VkMutableDescriptorTypeListEXT);
}

struct VkPhysicalDeviceDepthClipControlFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
depthClipControl @2 :UInt64;
}

struct VkPipelineViewportDepthClipControlCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
negativeOneToOne @2 :UInt64;
}

struct VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
vertexInputDynamicState @2 :UInt64;
}

struct VkPhysicalDeviceExternalMemoryRDMAFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
externalMemoryRDMA @2 :UInt64;
}

struct VkVertexInputBindingDescription2EXT {
sType @0 :Int64;
pNext @1 :PNext;
binding @2 :UInt64;
stride @3 :UInt64;
inputRate @4 :Int64;
divisor @5 :UInt64;
}

struct VkVertexInputAttributeDescription2EXT {
sType @0 :Int64;
pNext @1 :PNext;
location @2 :UInt64;
binding @3 :UInt64;
format @4 :Int64;
offset @5 :UInt64;
}

struct VkPhysicalDeviceColorWriteEnableFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
colorWriteEnable @2 :UInt64;
}

struct VkPipelineColorWriteCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
attachmentCount @2 :UInt64;
pColorWriteEnables @3 :List(UInt64);
}

struct VkMemoryBarrier2 {
sType @0 :Int64;
pNext @1 :PNext;
srcStageMask @2 :Int64;
srcAccessMask @3 :Int64;
dstStageMask @4 :Int64;
dstAccessMask @5 :Int64;
}

struct VkImageMemoryBarrier2 {
sType @0 :Int64;
pNext @1 :PNext;
srcStageMask @2 :Int64;
srcAccessMask @3 :Int64;
dstStageMask @4 :Int64;
dstAccessMask @5 :Int64;
oldLayout @6 :Int64;
newLayout @7 :Int64;
srcQueueFamilyIndex @8 :UInt64;
dstQueueFamilyIndex @9 :UInt64;
image @10 :UInt64;
subresourceRange @11 :VkImageSubresourceRange;
}

struct VkBufferMemoryBarrier2 {
sType @0 :Int64;
pNext @1 :PNext;
srcStageMask @2 :Int64;
srcAccessMask @3 :Int64;
dstStageMask @4 :Int64;
dstAccessMask @5 :Int64;
srcQueueFamilyIndex @6 :UInt64;
dstQueueFamilyIndex @7 :UInt64;
buffer @8 :UInt64;
offset @9 :UInt64;
size @10 :UInt64;
}

struct VkDependencyInfo {
sType @0 :Int64;
pNext @1 :PNext;
dependencyFlags @2 :Int64;
memoryBarrierCount @3 :UInt64;
pMemoryBarriers @4 :List(VkMemoryBarrier2);
bufferMemoryBarrierCount @5 :UInt64;
pBufferMemoryBarriers @6 :List(VkBufferMemoryBarrier2);
imageMemoryBarrierCount @7 :UInt64;
pImageMemoryBarriers @8 :List(VkImageMemoryBarrier2);
}

struct VkSemaphoreSubmitInfo {
sType @0 :Int64;
pNext @1 :PNext;
semaphore @2 :UInt64;
value @3 :UInt64;
stageMask @4 :Int64;
deviceIndex @5 :UInt64;
}

struct VkCommandBufferSubmitInfo {
sType @0 :Int64;
pNext @1 :PNext;
commandBuffer @2 :UInt64;
deviceMask @3 :UInt64;
}

struct VkSubmitInfo2 {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
waitSemaphoreInfoCount @3 :UInt64;
pWaitSemaphoreInfos @4 :List(VkSemaphoreSubmitInfo);
commandBufferInfoCount @5 :UInt64;
pCommandBufferInfos @6 :List(VkCommandBufferSubmitInfo);
signalSemaphoreInfoCount @7 :UInt64;
pSignalSemaphoreInfos @8 :List(VkSemaphoreSubmitInfo);
}

struct VkQueueFamilyCheckpointProperties2NV {
sType @0 :Int64;
pNext @1 :PNext;
checkpointExecutionStageMask @2 :Int64;
}

struct VkCheckpointData2NV {
sType @0 :Int64;
pNext @1 :PNext;
stage @2 :Int64;
pCheckpointMarker @3 :List(UInt64);
}

struct VkPhysicalDeviceSynchronization2Features {
sType @0 :Int64;
pNext @1 :PNext;
synchronization2 @2 :UInt64;
}

struct VkPhysicalDeviceHostImageCopyFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
hostImageCopy @2 :UInt64;
}

struct VkPhysicalDeviceHostImageCopyPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
copySrcLayoutCount @2 :UInt64;
pCopySrcLayouts @3 :List(Int64);
copyDstLayoutCount @4 :UInt64;
pCopyDstLayouts @5 :List(Int64);
optimalTilingLayoutUUID @6 :List(UInt64);
identicalMemoryTypeRequirements @7 :UInt64;
}

struct VkMemoryToImageCopyEXT {
sType @0 :Int64;
pNext @1 :PNext;
pHostPointer @2 :List(UInt64);
memoryRowLength @3 :UInt64;
memoryImageHeight @4 :UInt64;
imageSubresource @5 :VkImageSubresourceLayers;
imageOffset @6 :VkOffset3D;
imageExtent @7 :VkExtent3D;
}

struct VkImageToMemoryCopyEXT {
sType @0 :Int64;
pNext @1 :PNext;
pHostPointer @2 :List(UInt64);
memoryRowLength @3 :UInt64;
memoryImageHeight @4 :UInt64;
imageSubresource @5 :VkImageSubresourceLayers;
imageOffset @6 :VkOffset3D;
imageExtent @7 :VkExtent3D;
}

struct VkCopyMemoryToImageInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
dstImage @3 :UInt64;
dstImageLayout @4 :Int64;
regionCount @5 :UInt64;
pRegions @6 :List(VkMemoryToImageCopyEXT);
}

struct VkCopyImageToMemoryInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
srcImage @3 :UInt64;
srcImageLayout @4 :Int64;
regionCount @5 :UInt64;
pRegions @6 :List(VkImageToMemoryCopyEXT);
}

struct VkCopyImageToImageInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
srcImage @3 :UInt64;
srcImageLayout @4 :Int64;
dstImage @5 :UInt64;
dstImageLayout @6 :Int64;
regionCount @7 :UInt64;
pRegions @8 :List(VkImageCopy2);
}

struct VkHostImageLayoutTransitionInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
image @2 :UInt64;
oldLayout @3 :Int64;
newLayout @4 :Int64;
subresourceRange @5 :VkImageSubresourceRange;
}

struct VkSubresourceHostMemcpySizeEXT {
sType @0 :Int64;
pNext @1 :PNext;
size @2 :UInt64;
}

struct VkHostImageCopyDevicePerformanceQueryEXT {
sType @0 :Int64;
pNext @1 :PNext;
optimalDeviceAccess @2 :UInt64;
identicalMemoryLayout @3 :UInt64;
}

struct VkPhysicalDeviceVulkanSC10Properties {
sType @0 :Int64;
pNext @1 :PNext;
deviceNoDynamicHostAllocations @2 :UInt64;
deviceDestroyFreesMemory @3 :UInt64;
commandPoolMultipleCommandBuffersRecording @4 :UInt64;
commandPoolResetCommandBuffer @5 :UInt64;
commandBufferSimultaneousUse @6 :UInt64;
secondaryCommandBufferNullOrImagelessFramebuffer @7 :UInt64;
recycleDescriptorSetMemory @8 :UInt64;
recyclePipelineMemory @9 :UInt64;
maxRenderPassSubpasses @10 :UInt64;
maxRenderPassDependencies @11 :UInt64;
maxSubpassInputAttachments @12 :UInt64;
maxSubpassPreserveAttachments @13 :UInt64;
maxFramebufferAttachments @14 :UInt64;
maxDescriptorSetLayoutBindings @15 :UInt64;
maxQueryFaultCount @16 :UInt64;
maxCallbackFaultCount @17 :UInt64;
maxCommandPoolCommandBuffers @18 :UInt64;
maxCommandBufferSize @19 :UInt64;
}

struct VkPipelinePoolSize {
sType @0 :Int64;
pNext @1 :PNext;
poolEntrySize @2 :UInt64;
poolEntryCount @3 :UInt64;
}

struct VkDeviceObjectReservationCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
pipelineCacheCreateInfoCount @2 :UInt64;
pPipelineCacheCreateInfos @3 :List(VkPipelineCacheCreateInfo);
pipelinePoolSizeCount @4 :UInt64;
pPipelinePoolSizes @5 :List(VkPipelinePoolSize);
semaphoreRequestCount @6 :UInt64;
commandBufferRequestCount @7 :UInt64;
fenceRequestCount @8 :UInt64;
deviceMemoryRequestCount @9 :UInt64;
bufferRequestCount @10 :UInt64;
imageRequestCount @11 :UInt64;
eventRequestCount @12 :UInt64;
queryPoolRequestCount @13 :UInt64;
bufferViewRequestCount @14 :UInt64;
imageViewRequestCount @15 :UInt64;
layeredImageViewRequestCount @16 :UInt64;
pipelineCacheRequestCount @17 :UInt64;
pipelineLayoutRequestCount @18 :UInt64;
renderPassRequestCount @19 :UInt64;
graphicsPipelineRequestCount @20 :UInt64;
computePipelineRequestCount @21 :UInt64;
descriptorSetLayoutRequestCount @22 :UInt64;
samplerRequestCount @23 :UInt64;
descriptorPoolRequestCount @24 :UInt64;
descriptorSetRequestCount @25 :UInt64;
framebufferRequestCount @26 :UInt64;
commandPoolRequestCount @27 :UInt64;
samplerYcbcrConversionRequestCount @28 :UInt64;
surfaceRequestCount @29 :UInt64;
swapchainRequestCount @30 :UInt64;
displayModeRequestCount @31 :UInt64;
subpassDescriptionRequestCount @32 :UInt64;
attachmentDescriptionRequestCount @33 :UInt64;
descriptorSetLayoutBindingRequestCount @34 :UInt64;
descriptorSetLayoutBindingLimit @35 :UInt64;
maxImageViewMipLevels @36 :UInt64;
maxImageViewArrayLayers @37 :UInt64;
maxLayeredImageViewMipLevels @38 :UInt64;
maxOcclusionQueriesPerPool @39 :UInt64;
maxPipelineStatisticsQueriesPerPool @40 :UInt64;
maxTimestampQueriesPerPool @41 :UInt64;
maxImmutableSamplersPerDescriptorSetLayout @42 :UInt64;
}

struct VkCommandPoolMemoryReservationCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
commandPoolReservedSize @2 :UInt64;
commandPoolMaxCommandBuffers @3 :UInt64;
}

struct VkCommandPoolMemoryConsumption {
sType @0 :Int64;
pNext @1 :PNext;
commandPoolAllocated @2 :UInt64;
commandPoolReservedSize @3 :UInt64;
commandBufferAllocated @4 :UInt64;
}

struct VkPhysicalDeviceVulkanSC10Features {
sType @0 :Int64;
pNext @1 :PNext;
shaderAtomicInstructions @2 :UInt64;
}

struct VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
primitivesGeneratedQuery @2 :UInt64;
primitivesGeneratedQueryWithRasterizerDiscard @3 :UInt64;
primitivesGeneratedQueryWithNonZeroStreams @4 :UInt64;
}

struct VkPhysicalDeviceLegacyDitheringFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
legacyDithering @2 :UInt64;
}

struct VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
multisampledRenderToSingleSampled @2 :UInt64;
}

struct VkSubpassResolvePerformanceQueryEXT {
sType @0 :Int64;
pNext @1 :PNext;
optimal @2 :UInt64;
}

struct VkMultisampledRenderToSingleSampledInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
multisampledRenderToSingleSampledEnable @2 :UInt64;
rasterizationSamples @3 :Int64;
}

struct VkPhysicalDevicePipelineProtectedAccessFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
pipelineProtectedAccess @2 :UInt64;
}

struct VkQueueFamilyVideoPropertiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
videoCodecOperations @2 :Int64;
}

struct VkQueueFamilyQueryResultStatusPropertiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
queryResultStatusSupport @2 :UInt64;
}

struct VkVideoProfileListInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
profileCount @2 :UInt64;
pProfiles @3 :List(VkVideoProfileInfoKHR);
}

struct VkPhysicalDeviceVideoFormatInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
imageUsage @2 :Int64;
}

struct VkVideoFormatPropertiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
format @2 :Int64;
componentMapping @3 :VkComponentMapping;
imageCreateFlags @4 :Int64;
imageType @5 :Int64;
imageTiling @6 :Int64;
imageUsageFlags @7 :Int64;
}

struct VkVideoProfileInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
videoCodecOperation @2 :Int64;
chromaSubsampling @3 :Int64;
lumaBitDepth @4 :Int64;
chromaBitDepth @5 :Int64;
}

struct VkVideoCapabilitiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
minBitstreamBufferOffsetAlignment @3 :UInt64;
minBitstreamBufferSizeAlignment @4 :UInt64;
pictureAccessGranularity @5 :VkExtent2D;
minCodedExtent @6 :VkExtent2D;
maxCodedExtent @7 :VkExtent2D;
maxDpbSlots @8 :UInt64;
maxActiveReferencePictures @9 :UInt64;
stdHeaderVersion @10 :VkExtensionProperties;
}

struct VkVideoSessionMemoryRequirementsKHR {
sType @0 :Int64;
pNext @1 :PNext;
memoryBindIndex @2 :UInt64;
memoryRequirements @3 :VkMemoryRequirements;
}

struct VkBindVideoSessionMemoryInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
memoryBindIndex @2 :UInt64;
memory @3 :UInt64;
memoryOffset @4 :UInt64;
memorySize @5 :UInt64;
}

struct VkVideoPictureResourceInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
codedOffset @2 :VkOffset2D;
codedExtent @3 :VkExtent2D;
baseArrayLayer @4 :UInt64;
imageViewBinding @5 :UInt64;
}

struct VkVideoReferenceSlotInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
slotIndex @2 :Int64;
pPictureResource @3 :List(VkVideoPictureResourceInfoKHR);
}

struct VkVideoDecodeCapabilitiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
}

struct VkVideoDecodeUsageInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
videoUsageHints @2 :Int64;
}

struct VkVideoDecodeInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
srcBuffer @3 :UInt64;
srcBufferOffset @4 :UInt64;
srcBufferRange @5 :UInt64;
dstPictureResource @6 :VkVideoPictureResourceInfoKHR;
pSetupReferenceSlot @7 :List(VkVideoReferenceSlotInfoKHR);
referenceSlotCount @8 :UInt64;
pReferenceSlots @9 :List(VkVideoReferenceSlotInfoKHR);
}

struct VkVideoDecodeH264ProfileInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
stdProfileIdc @2 :UInt64;
pictureLayout @3 :Int64;
}

struct VkVideoDecodeH264CapabilitiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
maxLevelIdc @2 :UInt64;
fieldOffsetGranularity @3 :VkOffset2D;
}

struct VkVideoDecodeH264SessionParametersAddInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
stdSPSCount @2 :UInt64;
pStdSPSs @3 :List(UInt64);
stdPPSCount @4 :UInt64;
pStdPPSs @5 :List(UInt64);
}

struct VkVideoDecodeH264SessionParametersCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
maxStdSPSCount @2 :UInt64;
maxStdPPSCount @3 :UInt64;
pParametersAddInfo @4 :List(VkVideoDecodeH264SessionParametersAddInfoKHR);
}

struct VkVideoDecodeH264PictureInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
pStdPictureInfo @2 :List(UInt64);
sliceCount @3 :UInt64;
pSliceOffsets @4 :List(UInt64);
}

struct VkVideoDecodeH264DpbSlotInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
pStdReferenceInfo @2 :List(UInt64);
}

struct VkVideoDecodeH265ProfileInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
stdProfileIdc @2 :UInt64;
}

struct VkVideoDecodeH265CapabilitiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
maxLevelIdc @2 :UInt64;
}

struct VkVideoDecodeH265SessionParametersAddInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
stdVPSCount @2 :UInt64;
pStdVPSs @3 :List(UInt64);
stdSPSCount @4 :UInt64;
pStdSPSs @5 :List(UInt64);
stdPPSCount @6 :UInt64;
pStdPPSs @7 :List(UInt64);
}

struct VkVideoDecodeH265SessionParametersCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
maxStdVPSCount @2 :UInt64;
maxStdSPSCount @3 :UInt64;
maxStdPPSCount @4 :UInt64;
pParametersAddInfo @5 :List(VkVideoDecodeH265SessionParametersAddInfoKHR);
}

struct VkVideoDecodeH265PictureInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
pStdPictureInfo @2 :List(UInt64);
sliceSegmentCount @3 :UInt64;
pSliceSegmentOffsets @4 :List(UInt64);
}

struct VkVideoDecodeH265DpbSlotInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
pStdReferenceInfo @2 :List(UInt64);
}

struct VkVideoSessionCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
queueFamilyIndex @2 :UInt64;
flags @3 :Int64;
pVideoProfile @4 :List(VkVideoProfileInfoKHR);
pictureFormat @5 :Int64;
maxCodedExtent @6 :VkExtent2D;
referencePictureFormat @7 :Int64;
maxDpbSlots @8 :UInt64;
maxActiveReferencePictures @9 :UInt64;
pStdHeaderVersion @10 :List(VkExtensionProperties);
}

struct VkVideoSessionParametersCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
videoSessionParametersTemplate @3 :UInt64;
videoSession @4 :UInt64;
}

struct VkVideoSessionParametersUpdateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
updateSequenceCount @2 :UInt64;
}

struct VkVideoEncodeSessionParametersGetInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
videoSessionParameters @2 :UInt64;
}

struct VkVideoEncodeSessionParametersFeedbackInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
hasOverrides @2 :UInt64;
}

struct VkVideoBeginCodingInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
videoSession @3 :UInt64;
videoSessionParameters @4 :UInt64;
referenceSlotCount @5 :UInt64;
pReferenceSlots @6 :List(VkVideoReferenceSlotInfoKHR);
}

struct VkVideoEndCodingInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
}

struct VkVideoCodingControlInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
}

struct VkVideoEncodeUsageInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
videoUsageHints @2 :Int64;
videoContentHints @3 :Int64;
tuningMode @4 :Int64;
}

struct VkVideoEncodeInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
dstBuffer @3 :UInt64;
dstBufferOffset @4 :UInt64;
dstBufferRange @5 :UInt64;
srcPictureResource @6 :VkVideoPictureResourceInfoKHR;
pSetupReferenceSlot @7 :List(VkVideoReferenceSlotInfoKHR);
referenceSlotCount @8 :UInt64;
pReferenceSlots @9 :List(VkVideoReferenceSlotInfoKHR);
precedingExternallyEncodedBytes @10 :UInt64;
}

struct VkQueryPoolVideoEncodeFeedbackCreateInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
encodeFeedbackFlags @2 :Int64;
}

struct VkVideoEncodeQualityLevelInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
qualityLevel @2 :UInt64;
}

struct VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
pVideoProfile @2 :List(VkVideoProfileInfoKHR);
qualityLevel @3 :UInt64;
}

struct VkVideoEncodeQualityLevelPropertiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
preferredRateControlMode @2 :Int64;
preferredRateControlLayerCount @3 :UInt64;
}

struct VkVideoEncodeRateControlInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
rateControlMode @3 :Int64;
layerCount @4 :UInt64;
pLayers @5 :List(VkVideoEncodeRateControlLayerInfoKHR);
virtualBufferSizeInMs @6 :UInt64;
initialVirtualBufferSizeInMs @7 :UInt64;
}

struct VkVideoEncodeRateControlLayerInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
averageBitrate @2 :UInt64;
maxBitrate @3 :UInt64;
frameRateNumerator @4 :UInt64;
frameRateDenominator @5 :UInt64;
}

struct VkVideoEncodeCapabilitiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
rateControlModes @3 :Int64;
maxRateControlLayers @4 :UInt64;
maxBitrate @5 :UInt64;
maxQualityLevels @6 :UInt64;
encodeInputPictureGranularity @7 :VkExtent2D;
supportedEncodeFeedbackFlags @8 :Int64;
}

struct VkVideoEncodeH264CapabilitiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
maxLevelIdc @3 :UInt64;
maxSliceCount @4 :UInt64;
maxPPictureL0ReferenceCount @5 :UInt64;
maxBPictureL0ReferenceCount @6 :UInt64;
maxL1ReferenceCount @7 :UInt64;
maxTemporalLayerCount @8 :UInt64;
expectDyadicTemporalLayerPattern @9 :UInt64;
minQp @10 :Int64;
maxQp @11 :Int64;
prefersGopRemainingFrames @12 :UInt64;
requiresGopRemainingFrames @13 :UInt64;
stdSyntaxFlags @14 :Int64;
}

struct VkVideoEncodeH264QualityLevelPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
preferredRateControlFlags @2 :Int64;
preferredGopFrameCount @3 :UInt64;
preferredIdrPeriod @4 :UInt64;
preferredConsecutiveBFrameCount @5 :UInt64;
preferredTemporalLayerCount @6 :UInt64;
preferredConstantQp @7 :VkVideoEncodeH264QpEXT;
preferredMaxL0ReferenceCount @8 :UInt64;
preferredMaxL1ReferenceCount @9 :UInt64;
preferredStdEntropyCodingModeFlag @10 :UInt64;
}

struct VkVideoEncodeH264SessionCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
useMaxLevelIdc @2 :UInt64;
maxLevelIdc @3 :UInt64;
}

struct VkVideoEncodeH264SessionParametersAddInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
stdSPSCount @2 :UInt64;
pStdSPSs @3 :List(UInt64);
stdPPSCount @4 :UInt64;
pStdPPSs @5 :List(UInt64);
}

struct VkVideoEncodeH264SessionParametersCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
maxStdSPSCount @2 :UInt64;
maxStdPPSCount @3 :UInt64;
pParametersAddInfo @4 :List(VkVideoEncodeH264SessionParametersAddInfoEXT);
}

struct VkVideoEncodeH264SessionParametersGetInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
writeStdSPS @2 :UInt64;
writeStdPPS @3 :UInt64;
stdSPSId @4 :UInt64;
stdPPSId @5 :UInt64;
}

struct VkVideoEncodeH264SessionParametersFeedbackInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
hasStdSPSOverrides @2 :UInt64;
hasStdPPSOverrides @3 :UInt64;
}

struct VkVideoEncodeH264DpbSlotInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
pStdReferenceInfo @2 :List(UInt64);
}

struct VkVideoEncodeH264PictureInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
naluSliceEntryCount @2 :UInt64;
pNaluSliceEntries @3 :List(VkVideoEncodeH264NaluSliceInfoEXT);
pStdPictureInfo @4 :List(UInt64);
generatePrefixNalu @5 :UInt64;
}

struct VkVideoEncodeH264ProfileInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
stdProfileIdc @2 :UInt64;
}

struct VkVideoEncodeH264NaluSliceInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
constantQp @2 :Int64;
pStdSliceHeader @3 :List(UInt64);
}

struct VkVideoEncodeH264RateControlInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
gopFrameCount @3 :UInt64;
idrPeriod @4 :UInt64;
consecutiveBFrameCount @5 :UInt64;
temporalLayerCount @6 :UInt64;
}

struct VkVideoEncodeH264QpEXT {
qpI @0 :Int64;
qpP @1 :Int64;
qpB @2 :Int64;
}

struct VkVideoEncodeH264FrameSizeEXT {
frameISize @0 :UInt64;
framePSize @1 :UInt64;
frameBSize @2 :UInt64;
}

struct VkVideoEncodeH264GopRemainingFrameInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
useGopRemainingFrames @2 :UInt64;
gopRemainingI @3 :UInt64;
gopRemainingP @4 :UInt64;
gopRemainingB @5 :UInt64;
}

struct VkVideoEncodeH264RateControlLayerInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
useMinQp @2 :UInt64;
minQp @3 :VkVideoEncodeH264QpEXT;
useMaxQp @4 :UInt64;
maxQp @5 :VkVideoEncodeH264QpEXT;
useMaxFrameSize @6 :UInt64;
maxFrameSize @7 :VkVideoEncodeH264FrameSizeEXT;
}

struct VkVideoEncodeH265CapabilitiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
maxLevelIdc @3 :UInt64;
maxSliceSegmentCount @4 :UInt64;
maxTiles @5 :VkExtent2D;
ctbSizes @6 :Int64;
transformBlockSizes @7 :Int64;
maxPPictureL0ReferenceCount @8 :UInt64;
maxBPictureL0ReferenceCount @9 :UInt64;
maxL1ReferenceCount @10 :UInt64;
maxSubLayerCount @11 :UInt64;
expectDyadicTemporalSubLayerPattern @12 :UInt64;
minQp @13 :Int64;
maxQp @14 :Int64;
prefersGopRemainingFrames @15 :UInt64;
requiresGopRemainingFrames @16 :UInt64;
stdSyntaxFlags @17 :Int64;
}

struct VkVideoEncodeH265QualityLevelPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
preferredRateControlFlags @2 :Int64;
preferredGopFrameCount @3 :UInt64;
preferredIdrPeriod @4 :UInt64;
preferredConsecutiveBFrameCount @5 :UInt64;
preferredSubLayerCount @6 :UInt64;
preferredConstantQp @7 :VkVideoEncodeH265QpEXT;
preferredMaxL0ReferenceCount @8 :UInt64;
preferredMaxL1ReferenceCount @9 :UInt64;
}

struct VkVideoEncodeH265SessionCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
useMaxLevelIdc @2 :UInt64;
maxLevelIdc @3 :UInt64;
}

struct VkVideoEncodeH265SessionParametersAddInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
stdVPSCount @2 :UInt64;
pStdVPSs @3 :List(UInt64);
stdSPSCount @4 :UInt64;
pStdSPSs @5 :List(UInt64);
stdPPSCount @6 :UInt64;
pStdPPSs @7 :List(UInt64);
}

struct VkVideoEncodeH265SessionParametersCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
maxStdVPSCount @2 :UInt64;
maxStdSPSCount @3 :UInt64;
maxStdPPSCount @4 :UInt64;
pParametersAddInfo @5 :List(VkVideoEncodeH265SessionParametersAddInfoEXT);
}

struct VkVideoEncodeH265SessionParametersGetInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
writeStdVPS @2 :UInt64;
writeStdSPS @3 :UInt64;
writeStdPPS @4 :UInt64;
stdVPSId @5 :UInt64;
stdSPSId @6 :UInt64;
stdPPSId @7 :UInt64;
}

struct VkVideoEncodeH265SessionParametersFeedbackInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
hasStdVPSOverrides @2 :UInt64;
hasStdSPSOverrides @3 :UInt64;
hasStdPPSOverrides @4 :UInt64;
}

struct VkVideoEncodeH265PictureInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
naluSliceSegmentEntryCount @2 :UInt64;
pNaluSliceSegmentEntries @3 :List(VkVideoEncodeH265NaluSliceSegmentInfoEXT);
pStdPictureInfo @4 :List(UInt64);
}

struct VkVideoEncodeH265NaluSliceSegmentInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
constantQp @2 :Int64;
pStdSliceSegmentHeader @3 :List(UInt64);
}

struct VkVideoEncodeH265RateControlInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
gopFrameCount @3 :UInt64;
idrPeriod @4 :UInt64;
consecutiveBFrameCount @5 :UInt64;
subLayerCount @6 :UInt64;
}

struct VkVideoEncodeH265QpEXT {
qpI @0 :Int64;
qpP @1 :Int64;
qpB @2 :Int64;
}

struct VkVideoEncodeH265FrameSizeEXT {
frameISize @0 :UInt64;
framePSize @1 :UInt64;
frameBSize @2 :UInt64;
}

struct VkVideoEncodeH265GopRemainingFrameInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
useGopRemainingFrames @2 :UInt64;
gopRemainingI @3 :UInt64;
gopRemainingP @4 :UInt64;
gopRemainingB @5 :UInt64;
}

struct VkVideoEncodeH265RateControlLayerInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
useMinQp @2 :UInt64;
minQp @3 :VkVideoEncodeH265QpEXT;
useMaxQp @4 :UInt64;
maxQp @5 :VkVideoEncodeH265QpEXT;
useMaxFrameSize @6 :UInt64;
maxFrameSize @7 :VkVideoEncodeH265FrameSizeEXT;
}

struct VkVideoEncodeH265ProfileInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
stdProfileIdc @2 :UInt64;
}

struct VkVideoEncodeH265DpbSlotInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
pStdReferenceInfo @2 :List(UInt64);
}

struct VkPhysicalDeviceInheritedViewportScissorFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
inheritedViewportScissor2D @2 :UInt64;
}

struct VkCommandBufferInheritanceViewportScissorInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
viewportScissor2D @2 :UInt64;
viewportDepthCount @3 :UInt64;
pViewportDepths @4 :List(VkViewport);
}

struct VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
ycbcr2plane444Formats @2 :UInt64;
}

struct VkPhysicalDeviceProvokingVertexFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
provokingVertexLast @2 :UInt64;
transformFeedbackPreservesProvokingVertex @3 :UInt64;
}

struct VkPhysicalDeviceProvokingVertexPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
provokingVertexModePerPipeline @2 :UInt64;
transformFeedbackPreservesTriangleFanProvokingVertex @3 :UInt64;
}

struct VkPipelineRasterizationProvokingVertexStateCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
provokingVertexMode @2 :Int64;
}

struct VkCuModuleCreateInfoNVX {
sType @0 :Int64;
pNext @1 :PNext;
dataSize @2 :UInt64;
pData @3 :List(UInt64);
}

struct VkCuFunctionCreateInfoNVX {
sType @0 :Int64;
pNext @1 :PNext;
module @2 :UInt64;
pName @3 :List(UInt64);
}

struct VkCuLaunchInfoNVX {
sType @0 :Int64;
pNext @1 :PNext;
function @2 :UInt64;
gridDimX @3 :UInt64;
gridDimY @4 :UInt64;
gridDimZ @5 :UInt64;
blockDimX @6 :UInt64;
blockDimY @7 :UInt64;
blockDimZ @8 :UInt64;
sharedMemBytes @9 :UInt64;
paramCount @10 :UInt64;
pParams @11 :List(UInt64);
extraCount @12 :UInt64;
pExtras @13 :List(UInt64);
}

struct VkPhysicalDeviceDescriptorBufferFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
descriptorBuffer @2 :UInt64;
descriptorBufferCaptureReplay @3 :UInt64;
descriptorBufferImageLayoutIgnored @4 :UInt64;
descriptorBufferPushDescriptors @5 :UInt64;
}

struct VkPhysicalDeviceDescriptorBufferPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
combinedImageSamplerDescriptorSingleArray @2 :UInt64;
bufferlessPushDescriptors @3 :UInt64;
allowSamplerImageViewPostSubmitCreation @4 :UInt64;
descriptorBufferOffsetAlignment @5 :UInt64;
maxDescriptorBufferBindings @6 :UInt64;
maxResourceDescriptorBufferBindings @7 :UInt64;
maxSamplerDescriptorBufferBindings @8 :UInt64;
maxEmbeddedImmutableSamplerBindings @9 :UInt64;
maxEmbeddedImmutableSamplers @10 :UInt64;
bufferCaptureReplayDescriptorDataSize @11 :UInt64;
imageCaptureReplayDescriptorDataSize @12 :UInt64;
imageViewCaptureReplayDescriptorDataSize @13 :UInt64;
samplerCaptureReplayDescriptorDataSize @14 :UInt64;
accelerationStructureCaptureReplayDescriptorDataSize @15 :UInt64;
samplerDescriptorSize @16 :UInt64;
combinedImageSamplerDescriptorSize @17 :UInt64;
sampledImageDescriptorSize @18 :UInt64;
storageImageDescriptorSize @19 :UInt64;
uniformTexelBufferDescriptorSize @20 :UInt64;
robustUniformTexelBufferDescriptorSize @21 :UInt64;
storageTexelBufferDescriptorSize @22 :UInt64;
robustStorageTexelBufferDescriptorSize @23 :UInt64;
uniformBufferDescriptorSize @24 :UInt64;
robustUniformBufferDescriptorSize @25 :UInt64;
storageBufferDescriptorSize @26 :UInt64;
robustStorageBufferDescriptorSize @27 :UInt64;
inputAttachmentDescriptorSize @28 :UInt64;
accelerationStructureDescriptorSize @29 :UInt64;
maxSamplerDescriptorBufferRange @30 :UInt64;
maxResourceDescriptorBufferRange @31 :UInt64;
samplerDescriptorBufferAddressSpaceSize @32 :UInt64;
resourceDescriptorBufferAddressSpaceSize @33 :UInt64;
descriptorBufferAddressSpaceSize @34 :UInt64;
}

struct VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
combinedImageSamplerDensityMapDescriptorSize @2 :UInt64;
}

struct VkDescriptorAddressInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
address @2 :UInt64;
range @3 :UInt64;
format @4 :Int64;
}

struct VkDescriptorBufferBindingInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
address @2 :UInt64;
usage @3 :Int64;
}

struct VkDescriptorBufferBindingPushDescriptorBufferHandleEXT {
sType @0 :Int64;
pNext @1 :PNext;
buffer @2 :UInt64;
}

struct VkDescriptorDataEXT {
pSampler @0 :List(UInt64);
pCombinedImageSampler @1 :List(VkDescriptorImageInfo);
pInputAttachmentImage @2 :List(VkDescriptorImageInfo);
pSampledImage @3 :List(VkDescriptorImageInfo);
pStorageImage @4 :List(VkDescriptorImageInfo);
pUniformTexelBuffer @5 :List(VkDescriptorAddressInfoEXT);
pStorageTexelBuffer @6 :List(VkDescriptorAddressInfoEXT);
pUniformBuffer @7 :List(VkDescriptorAddressInfoEXT);
pStorageBuffer @8 :List(VkDescriptorAddressInfoEXT);
accelerationStructure @9 :UInt64;
}

struct VkDescriptorGetInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
type @2 :Int64;
data @3 :VkDescriptorDataEXT;
}

struct VkBufferCaptureDescriptorDataInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
buffer @2 :UInt64;
}

struct VkImageCaptureDescriptorDataInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
image @2 :UInt64;
}

struct VkImageViewCaptureDescriptorDataInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
imageView @2 :UInt64;
}

struct VkSamplerCaptureDescriptorDataInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
sampler @2 :UInt64;
}

struct VkAccelerationStructureCaptureDescriptorDataInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
accelerationStructure @2 :UInt64;
accelerationStructureNV @3 :UInt64;
}

struct VkOpaqueCaptureDescriptorDataCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
opaqueCaptureDescriptorData @2 :List(UInt64);
}

struct VkPhysicalDeviceShaderIntegerDotProductFeatures {
sType @0 :Int64;
pNext @1 :PNext;
shaderIntegerDotProduct @2 :UInt64;
}

struct VkPhysicalDeviceShaderIntegerDotProductProperties {
sType @0 :Int64;
pNext @1 :PNext;
integerDotProduct8BitUnsignedAccelerated @2 :UInt64;
integerDotProduct8BitSignedAccelerated @3 :UInt64;
integerDotProduct8BitMixedSignednessAccelerated @4 :UInt64;
integerDotProduct4x8BitPackedUnsignedAccelerated @5 :UInt64;
integerDotProduct4x8BitPackedSignedAccelerated @6 :UInt64;
integerDotProduct4x8BitPackedMixedSignednessAccelerated @7 :UInt64;
integerDotProduct16BitUnsignedAccelerated @8 :UInt64;
integerDotProduct16BitSignedAccelerated @9 :UInt64;
integerDotProduct16BitMixedSignednessAccelerated @10 :UInt64;
integerDotProduct32BitUnsignedAccelerated @11 :UInt64;
integerDotProduct32BitSignedAccelerated @12 :UInt64;
integerDotProduct32BitMixedSignednessAccelerated @13 :UInt64;
integerDotProduct64BitUnsignedAccelerated @14 :UInt64;
integerDotProduct64BitSignedAccelerated @15 :UInt64;
integerDotProduct64BitMixedSignednessAccelerated @16 :UInt64;
integerDotProductAccumulatingSaturating8BitUnsignedAccelerated @17 :UInt64;
integerDotProductAccumulatingSaturating8BitSignedAccelerated @18 :UInt64;
integerDotProductAccumulatingSaturating8BitMixedSignednessAccelerated @19 :UInt64;
integerDotProductAccumulatingSaturating4x8BitPackedUnsignedAccelerated @20 :UInt64;
integerDotProductAccumulatingSaturating4x8BitPackedSignedAccelerated @21 :UInt64;
integerDotProductAccumulatingSaturating4x8BitPackedMixedSignednessAccelerated @22 :UInt64;
integerDotProductAccumulatingSaturating16BitUnsignedAccelerated @23 :UInt64;
integerDotProductAccumulatingSaturating16BitSignedAccelerated @24 :UInt64;
integerDotProductAccumulatingSaturating16BitMixedSignednessAccelerated @25 :UInt64;
integerDotProductAccumulatingSaturating32BitUnsignedAccelerated @26 :UInt64;
integerDotProductAccumulatingSaturating32BitSignedAccelerated @27 :UInt64;
integerDotProductAccumulatingSaturating32BitMixedSignednessAccelerated @28 :UInt64;
integerDotProductAccumulatingSaturating64BitUnsignedAccelerated @29 :UInt64;
integerDotProductAccumulatingSaturating64BitSignedAccelerated @30 :UInt64;
integerDotProductAccumulatingSaturating64BitMixedSignednessAccelerated @31 :UInt64;
}

struct VkPhysicalDeviceDrmPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
hasPrimary @2 :UInt64;
hasRender @3 :UInt64;
primaryMajor @4 :Int64;
primaryMinor @5 :Int64;
renderMajor @6 :Int64;
renderMinor @7 :Int64;
}

struct VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR {
sType @0 :Int64;
pNext @1 :PNext;
fragmentShaderBarycentric @2 :UInt64;
}

struct VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
triStripVertexOrderIndependentOfProvokingVertex @2 :UInt64;
}

struct VkPhysicalDeviceRayTracingMotionBlurFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
rayTracingMotionBlur @2 :UInt64;
rayTracingMotionBlurPipelineTraceRaysIndirect @3 :UInt64;
}

struct VkAccelerationStructureGeometryMotionTrianglesDataNV {
sType @0 :Int64;
pNext @1 :PNext;
vertexData @2 :VkDeviceOrHostAddressConstKHR;
}

struct VkAccelerationStructureMotionInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
maxInstances @2 :UInt64;
flags @3 :Int64;
}

struct VkSRTDataNV {
sx @0 :Float32;
a @1 :Float32;
b @2 :Float32;
pvx @3 :Float32;
sy @4 :Float32;
c @5 :Float32;
pvy @6 :Float32;
sz @7 :Float32;
pvz @8 :Float32;
qx @9 :Float32;
qy @10 :Float32;
qz @11 :Float32;
qw @12 :Float32;
tx @13 :Float32;
ty @14 :Float32;
tz @15 :Float32;
}

struct VkAccelerationStructureSRTMotionInstanceNV {
transformT0 @0 :VkSRTDataNV;
transformT1 @1 :VkSRTDataNV;
instanceCustomIndex @2 :UInt64;
mask @3 :UInt64;
instanceShaderBindingTableRecordOffset @4 :UInt64;
flags @5 :Int64;
accelerationStructureReference @6 :UInt64;
}

struct VkAccelerationStructureMatrixMotionInstanceNV {
transformT0 @0 :VkTransformMatrixKHR;
transformT1 @1 :VkTransformMatrixKHR;
instanceCustomIndex @2 :UInt64;
mask @3 :UInt64;
instanceShaderBindingTableRecordOffset @4 :UInt64;
flags @5 :Int64;
accelerationStructureReference @6 :UInt64;
}

struct VkAccelerationStructureMotionInstanceDataNV {
staticInstance @0 :VkAccelerationStructureInstanceKHR;
matrixMotionInstance @1 :VkAccelerationStructureMatrixMotionInstanceNV;
srtMotionInstance @2 :VkAccelerationStructureSRTMotionInstanceNV;
}

struct VkAccelerationStructureMotionInstanceNV {
type @0 :Int64;
flags @1 :Int64;
data @2 :VkAccelerationStructureMotionInstanceDataNV;
}

struct VkMemoryGetRemoteAddressInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
memory @2 :UInt64;
handleType @3 :Int64;
}

struct VkImportMemoryBufferCollectionFUCHSIA {
sType @0 :Int64;
pNext @1 :PNext;
collection @2 :UInt64;
index @3 :UInt64;
}

struct VkBufferCollectionImageCreateInfoFUCHSIA {
sType @0 :Int64;
pNext @1 :PNext;
collection @2 :UInt64;
index @3 :UInt64;
}

struct VkBufferCollectionBufferCreateInfoFUCHSIA {
sType @0 :Int64;
pNext @1 :PNext;
collection @2 :UInt64;
index @3 :UInt64;
}

struct VkBufferCollectionCreateInfoFUCHSIA {
sType @0 :Int64;
pNext @1 :PNext;
collectionToken @2 :UInt64;
}

struct VkBufferCollectionPropertiesFUCHSIA {
sType @0 :Int64;
pNext @1 :PNext;
memoryTypeBits @2 :UInt64;
bufferCount @3 :UInt64;
createInfoIndex @4 :UInt64;
sysmemPixelFormat @5 :UInt64;
formatFeatures @6 :Int64;
sysmemColorSpaceIndex @7 :VkSysmemColorSpaceFUCHSIA;
samplerYcbcrConversionComponents @8 :VkComponentMapping;
suggestedYcbcrModel @9 :Int64;
suggestedYcbcrRange @10 :Int64;
suggestedXChromaOffset @11 :Int64;
suggestedYChromaOffset @12 :Int64;
}

struct VkBufferConstraintsInfoFUCHSIA {
sType @0 :Int64;
pNext @1 :PNext;
createInfo @2 :VkBufferCreateInfo;
requiredFormatFeatures @3 :Int64;
bufferCollectionConstraints @4 :VkBufferCollectionConstraintsInfoFUCHSIA;
}

struct VkSysmemColorSpaceFUCHSIA {
sType @0 :Int64;
pNext @1 :PNext;
colorSpace @2 :UInt64;
}

struct VkImageFormatConstraintsInfoFUCHSIA {
sType @0 :Int64;
pNext @1 :PNext;
imageCreateInfo @2 :VkImageCreateInfo;
requiredFormatFeatures @3 :Int64;
flags @4 :Int64;
sysmemPixelFormat @5 :UInt64;
colorSpaceCount @6 :UInt64;
pColorSpaces @7 :List(VkSysmemColorSpaceFUCHSIA);
}

struct VkImageConstraintsInfoFUCHSIA {
sType @0 :Int64;
pNext @1 :PNext;
formatConstraintsCount @2 :UInt64;
pFormatConstraints @3 :List(VkImageFormatConstraintsInfoFUCHSIA);
bufferCollectionConstraints @4 :VkBufferCollectionConstraintsInfoFUCHSIA;
flags @5 :Int64;
}

struct VkBufferCollectionConstraintsInfoFUCHSIA {
sType @0 :Int64;
pNext @1 :PNext;
minBufferCount @2 :UInt64;
maxBufferCount @3 :UInt64;
minBufferCountForCamping @4 :UInt64;
minBufferCountForDedicatedSlack @5 :UInt64;
minBufferCountForSharedSlack @6 :UInt64;
}

struct VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
formatRgba10x6WithoutYCbCrSampler @2 :UInt64;
}

struct VkFormatProperties3 {
sType @0 :Int64;
pNext @1 :PNext;
linearTilingFeatures @2 :Int64;
optimalTilingFeatures @3 :Int64;
bufferFeatures @4 :Int64;
}

struct VkDrmFormatModifierPropertiesList2EXT {
sType @0 :Int64;
pNext @1 :PNext;
drmFormatModifierCount @2 :UInt64;
pDrmFormatModifierProperties @3 :List(VkDrmFormatModifierProperties2EXT);
}

struct VkDrmFormatModifierProperties2EXT {
drmFormatModifier @0 :UInt64;
drmFormatModifierPlaneCount @1 :UInt64;
drmFormatModifierTilingFeatures @2 :Int64;
}

struct VkAndroidHardwareBufferFormatProperties2ANDROID {
sType @0 :Int64;
pNext @1 :PNext;
format @2 :Int64;
externalFormat @3 :UInt64;
formatFeatures @4 :Int64;
samplerYcbcrConversionComponents @5 :VkComponentMapping;
suggestedYcbcrModel @6 :Int64;
suggestedYcbcrRange @7 :Int64;
suggestedXChromaOffset @8 :Int64;
suggestedYChromaOffset @9 :Int64;
}

struct VkPipelineRenderingCreateInfo {
sType @0 :Int64;
pNext @1 :PNext;
viewMask @2 :UInt64;
colorAttachmentCount @3 :UInt64;
pColorAttachmentFormats @4 :List(Int64);
depthAttachmentFormat @5 :Int64;
stencilAttachmentFormat @6 :Int64;
}

struct VkRenderingInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
renderArea @3 :VkRect2D;
layerCount @4 :UInt64;
viewMask @5 :UInt64;
colorAttachmentCount @6 :UInt64;
pColorAttachments @7 :List(VkRenderingAttachmentInfo);
pDepthAttachment @8 :List(VkRenderingAttachmentInfo);
pStencilAttachment @9 :List(VkRenderingAttachmentInfo);
}

struct VkRenderingAttachmentInfo {
sType @0 :Int64;
pNext @1 :PNext;
imageView @2 :UInt64;
imageLayout @3 :Int64;
resolveMode @4 :Int64;
resolveImageView @5 :UInt64;
resolveImageLayout @6 :Int64;
loadOp @7 :Int64;
storeOp @8 :Int64;
clearValue @9 :VkClearValue;
}

struct VkRenderingFragmentShadingRateAttachmentInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
imageView @2 :UInt64;
imageLayout @3 :Int64;
shadingRateAttachmentTexelSize @4 :VkExtent2D;
}

struct VkRenderingFragmentDensityMapAttachmentInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
imageView @2 :UInt64;
imageLayout @3 :Int64;
}

struct VkPhysicalDeviceDynamicRenderingFeatures {
sType @0 :Int64;
pNext @1 :PNext;
dynamicRendering @2 :UInt64;
}

struct VkCommandBufferInheritanceRenderingInfo {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
viewMask @3 :UInt64;
colorAttachmentCount @4 :UInt64;
pColorAttachmentFormats @5 :List(Int64);
depthAttachmentFormat @6 :Int64;
stencilAttachmentFormat @7 :Int64;
rasterizationSamples @8 :Int64;
}

struct VkAttachmentSampleCountInfoAMD {
sType @0 :Int64;
pNext @1 :PNext;
colorAttachmentCount @2 :UInt64;
pColorAttachmentSamples @3 :List(Int64);
depthStencilAttachmentSamples @4 :Int64;
}

struct VkMultiviewPerViewAttributesInfoNVX {
sType @0 :Int64;
pNext @1 :PNext;
perViewAttributes @2 :UInt64;
perViewAttributesPositionXOnly @3 :UInt64;
}

struct VkPhysicalDeviceImageViewMinLodFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
minLod @2 :UInt64;
}

struct VkImageViewMinLodCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
minLod @2 :Float32;
}

struct VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
rasterizationOrderColorAttachmentAccess @2 :UInt64;
rasterizationOrderDepthAttachmentAccess @3 :UInt64;
rasterizationOrderStencilAttachmentAccess @4 :UInt64;
}

struct VkPhysicalDeviceLinearColorAttachmentFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
linearColorAttachment @2 :UInt64;
}

struct VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
graphicsPipelineLibrary @2 :UInt64;
}

struct VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
graphicsPipelineLibraryFastLinking @2 :UInt64;
graphicsPipelineLibraryIndependentInterpolationDecoration @3 :UInt64;
}

struct VkGraphicsPipelineLibraryCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
}

struct VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE {
sType @0 :Int64;
pNext @1 :PNext;
descriptorSetHostMapping @2 :UInt64;
}

struct VkDescriptorSetBindingReferenceVALVE {
sType @0 :Int64;
pNext @1 :PNext;
descriptorSetLayout @2 :UInt64;
binding @3 :UInt64;
}

struct VkDescriptorSetLayoutHostMappingInfoVALVE {
sType @0 :Int64;
pNext @1 :PNext;
descriptorOffset @2 :UInt64;
descriptorSize @3 :UInt64;
}

struct VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
shaderModuleIdentifier @2 :UInt64;
}

struct VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
shaderModuleIdentifierAlgorithmUUID @2 :List(UInt64);
}

struct VkPipelineShaderStageModuleIdentifierCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
identifierSize @2 :UInt64;
pIdentifier @3 :List(UInt64);
}

struct VkShaderModuleIdentifierEXT {
sType @0 :Int64;
pNext @1 :PNext;
identifierSize @2 :UInt64;
identifier @3 :List(UInt64);
}

struct VkImageCompressionControlEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
compressionControlPlaneCount @3 :UInt64;
pFixedRateFlags @4 :List(Int64);
}

struct VkPhysicalDeviceImageCompressionControlFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
imageCompressionControl @2 :UInt64;
}

struct VkImageCompressionPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
imageCompressionFlags @2 :Int64;
imageCompressionFixedRateFlags @3 :Int64;
}

struct VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
imageCompressionControlSwapchain @2 :UInt64;
}

struct VkImageSubresource2KHR {
sType @0 :Int64;
pNext @1 :PNext;
imageSubresource @2 :VkImageSubresource;
}

struct VkSubresourceLayout2KHR {
sType @0 :Int64;
pNext @1 :PNext;
subresourceLayout @2 :VkSubresourceLayout;
}

struct VkRenderPassCreationControlEXT {
sType @0 :Int64;
pNext @1 :PNext;
disallowMerging @2 :UInt64;
}

struct VkRenderPassCreationFeedbackInfoEXT {
postMergeSubpassCount @0 :UInt64;
}

struct VkRenderPassCreationFeedbackCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
pRenderPassFeedback @2 :List(VkRenderPassCreationFeedbackInfoEXT);
}

struct VkRenderPassSubpassFeedbackInfoEXT {
subpassMergeStatus @0 :Int64;
description @1 :List(UInt64);
postMergeIndex @2 :UInt64;
}

struct VkRenderPassSubpassFeedbackCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
pSubpassFeedback @2 :List(VkRenderPassSubpassFeedbackInfoEXT);
}

struct VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
subpassMergeFeedback @2 :UInt64;
}

struct VkMicromapBuildInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
type @2 :Int64;
flags @3 :Int64;
mode @4 :Int64;
dstMicromap @5 :UInt64;
usageCountsCount @6 :UInt64;
pUsageCounts @7 :List(VkMicromapUsageEXT);
ppUsageCounts @8 :List(List(VkMicromapUsageEXT));
data @9 :VkDeviceOrHostAddressConstKHR;
scratchData @10 :VkDeviceOrHostAddressKHR;
triangleArray @11 :VkDeviceOrHostAddressConstKHR;
triangleArrayStride @12 :UInt64;
}

struct VkMicromapCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
createFlags @2 :Int64;
buffer @3 :UInt64;
offset @4 :UInt64;
size @5 :UInt64;
type @6 :Int64;
deviceAddress @7 :UInt64;
}

struct VkMicromapVersionInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
pVersionData @2 :List(UInt64);
}

struct VkCopyMicromapInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
src @2 :UInt64;
dst @3 :UInt64;
mode @4 :Int64;
}

struct VkCopyMicromapToMemoryInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
src @2 :UInt64;
dst @3 :VkDeviceOrHostAddressKHR;
mode @4 :Int64;
}

struct VkCopyMemoryToMicromapInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
src @2 :VkDeviceOrHostAddressConstKHR;
dst @3 :UInt64;
mode @4 :Int64;
}

struct VkMicromapBuildSizesInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
micromapSize @2 :UInt64;
buildScratchSize @3 :UInt64;
discardable @4 :UInt64;
}

struct VkMicromapUsageEXT {
count @0 :UInt64;
subdivisionLevel @1 :UInt64;
format @2 :UInt64;
}

struct VkMicromapTriangleEXT {
dataOffset @0 :UInt64;
subdivisionLevel @1 :UInt64;
format @2 :UInt64;
}

struct VkPhysicalDeviceOpacityMicromapFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
micromap @2 :UInt64;
micromapCaptureReplay @3 :UInt64;
micromapHostCommands @4 :UInt64;
}

struct VkPhysicalDeviceOpacityMicromapPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
maxOpacity2StateSubdivisionLevel @2 :UInt64;
maxOpacity4StateSubdivisionLevel @3 :UInt64;
}

struct VkAccelerationStructureTrianglesOpacityMicromapEXT {
sType @0 :Int64;
pNext @1 :PNext;
indexType @2 :Int64;
indexBuffer @3 :VkDeviceOrHostAddressConstKHR;
indexStride @4 :UInt64;
baseTriangle @5 :UInt64;
usageCountsCount @6 :UInt64;
pUsageCounts @7 :List(VkMicromapUsageEXT);
ppUsageCounts @8 :List(List(VkMicromapUsageEXT));
micromap @9 :UInt64;
}

struct VkPhysicalDeviceDisplacementMicromapFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
displacementMicromap @2 :UInt64;
}

struct VkPhysicalDeviceDisplacementMicromapPropertiesNV {
sType @0 :Int64;
pNext @1 :PNext;
maxDisplacementMicromapSubdivisionLevel @2 :UInt64;
}

struct VkAccelerationStructureTrianglesDisplacementMicromapNV {
sType @0 :Int64;
pNext @1 :PNext;
displacementBiasAndScaleFormat @2 :Int64;
displacementVectorFormat @3 :Int64;
displacementBiasAndScaleBuffer @4 :VkDeviceOrHostAddressConstKHR;
displacementBiasAndScaleStride @5 :UInt64;
displacementVectorBuffer @6 :VkDeviceOrHostAddressConstKHR;
displacementVectorStride @7 :UInt64;
displacedMicromapPrimitiveFlags @8 :VkDeviceOrHostAddressConstKHR;
displacedMicromapPrimitiveFlagsStride @9 :UInt64;
indexType @10 :Int64;
indexBuffer @11 :VkDeviceOrHostAddressConstKHR;
indexStride @12 :UInt64;
baseTriangle @13 :UInt64;
usageCountsCount @14 :UInt64;
pUsageCounts @15 :List(VkMicromapUsageEXT);
ppUsageCounts @16 :List(List(VkMicromapUsageEXT));
micromap @17 :UInt64;
}

struct VkPipelinePropertiesIdentifierEXT {
sType @0 :Int64;
pNext @1 :PNext;
pipelineIdentifier @2 :List(UInt64);
}

struct VkPhysicalDevicePipelinePropertiesFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
pipelinePropertiesIdentifier @2 :UInt64;
}

struct VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD {
sType @0 :Int64;
pNext @1 :PNext;
shaderEarlyAndLateFragmentTests @2 :UInt64;
}

struct VkExternalMemoryAcquireUnmodifiedEXT {
sType @0 :Int64;
pNext @1 :PNext;
acquireUnmodifiedMemory @2 :UInt64;
}

struct VkExportMetalObjectCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
exportObjectType @2 :Int64;
}

struct VkExportMetalObjectsInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
}

struct VkExportMetalDeviceInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
mtlDevice @2 :UInt64;
}

struct VkExportMetalCommandQueueInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
queue @2 :UInt64;
mtlCommandQueue @3 :UInt64;
}

struct VkExportMetalBufferInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
memory @2 :UInt64;
mtlBuffer @3 :UInt64;
}

struct VkImportMetalBufferInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
mtlBuffer @2 :UInt64;
}

struct VkExportMetalTextureInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
image @2 :UInt64;
imageView @3 :UInt64;
bufferView @4 :UInt64;
plane @5 :Int64;
mtlTexture @6 :UInt64;
}

struct VkImportMetalTextureInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
plane @2 :Int64;
mtlTexture @3 :UInt64;
}

struct VkExportMetalIOSurfaceInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
image @2 :UInt64;
ioSurface @3 :UInt64;
}

struct VkImportMetalIOSurfaceInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
ioSurface @2 :UInt64;
}

struct VkExportMetalSharedEventInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
semaphore @2 :UInt64;
event @3 :UInt64;
mtlSharedEvent @4 :UInt64;
}

struct VkImportMetalSharedEventInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
mtlSharedEvent @2 :UInt64;
}

struct VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
nonSeamlessCubeMap @2 :UInt64;
}

struct VkPhysicalDevicePipelineRobustnessFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
pipelineRobustness @2 :UInt64;
}

struct VkPipelineRobustnessCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
storageBuffers @2 :Int64;
uniformBuffers @3 :Int64;
vertexInputs @4 :Int64;
images @5 :Int64;
}

struct VkPhysicalDevicePipelineRobustnessPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
defaultRobustnessStorageBuffers @2 :Int64;
defaultRobustnessUniformBuffers @3 :Int64;
defaultRobustnessVertexInputs @4 :Int64;
defaultRobustnessImages @5 :Int64;
}

struct VkImageViewSampleWeightCreateInfoQCOM {
sType @0 :Int64;
pNext @1 :PNext;
filterCenter @2 :VkOffset2D;
filterSize @3 :VkExtent2D;
numPhases @4 :UInt64;
}

struct VkPhysicalDeviceImageProcessingFeaturesQCOM {
sType @0 :Int64;
pNext @1 :PNext;
textureSampleWeighted @2 :UInt64;
textureBoxFilter @3 :UInt64;
textureBlockMatch @4 :UInt64;
}

struct VkPhysicalDeviceImageProcessingPropertiesQCOM {
sType @0 :Int64;
pNext @1 :PNext;
maxWeightFilterPhases @2 :UInt64;
maxWeightFilterDimension @3 :VkExtent2D;
maxBlockMatchRegion @4 :VkExtent2D;
maxBoxFilterBlockSize @5 :VkExtent2D;
}

struct VkPhysicalDeviceTilePropertiesFeaturesQCOM {
sType @0 :Int64;
pNext @1 :PNext;
tileProperties @2 :UInt64;
}

struct VkTilePropertiesQCOM {
sType @0 :Int64;
pNext @1 :PNext;
tileSize @2 :VkExtent3D;
apronSize @3 :VkExtent2D;
origin @4 :VkOffset2D;
}

struct VkPhysicalDeviceAmigoProfilingFeaturesSEC {
sType @0 :Int64;
pNext @1 :PNext;
amigoProfiling @2 :UInt64;
}

struct VkAmigoProfilingSubmitInfoSEC {
sType @0 :Int64;
pNext @1 :PNext;
firstDrawTimestamp @2 :UInt64;
swapBufferTimestamp @3 :UInt64;
}

struct VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
attachmentFeedbackLoopLayout @2 :UInt64;
}

struct VkPhysicalDeviceDepthClampZeroOneFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
depthClampZeroOne @2 :UInt64;
}

struct VkPhysicalDeviceAddressBindingReportFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
reportAddressBinding @2 :UInt64;
}

struct VkDeviceAddressBindingCallbackDataEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
baseAddress @3 :UInt64;
size @4 :UInt64;
bindingType @5 :Int64;
}

struct VkPhysicalDeviceOpticalFlowFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
opticalFlow @2 :UInt64;
}

struct VkPhysicalDeviceOpticalFlowPropertiesNV {
sType @0 :Int64;
pNext @1 :PNext;
supportedOutputGridSizes @2 :Int64;
supportedHintGridSizes @3 :Int64;
hintSupported @4 :UInt64;
costSupported @5 :UInt64;
bidirectionalFlowSupported @6 :UInt64;
globalFlowSupported @7 :UInt64;
minWidth @8 :UInt64;
minHeight @9 :UInt64;
maxWidth @10 :UInt64;
maxHeight @11 :UInt64;
maxNumRegionsOfInterest @12 :UInt64;
}

struct VkOpticalFlowImageFormatInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
usage @2 :Int64;
}

struct VkOpticalFlowImageFormatPropertiesNV {
sType @0 :Int64;
pNext @1 :PNext;
format @2 :Int64;
}

struct VkOpticalFlowSessionCreateInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
width @2 :UInt64;
height @3 :UInt64;
imageFormat @4 :Int64;
flowVectorFormat @5 :Int64;
costFormat @6 :Int64;
outputGridSize @7 :Int64;
hintGridSize @8 :Int64;
performanceLevel @9 :Int64;
flags @10 :Int64;
}

struct VkOpticalFlowSessionCreatePrivateDataInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
id @2 :UInt64;
size @3 :UInt64;
pPrivateData @4 :List(UInt64);
}

struct VkOpticalFlowExecuteInfoNV {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
regionCount @3 :UInt64;
pRegions @4 :List(VkRect2D);
}

struct VkPhysicalDeviceFaultFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
deviceFault @2 :UInt64;
deviceFaultVendorBinary @3 :UInt64;
}

struct VkDeviceFaultAddressInfoEXT {
addressType @0 :Int64;
reportedAddress @1 :UInt64;
addressPrecision @2 :UInt64;
}

struct VkDeviceFaultVendorInfoEXT {
description @0 :List(UInt64);
vendorFaultCode @1 :UInt64;
vendorFaultData @2 :UInt64;
}

struct VkDeviceFaultCountsEXT {
sType @0 :Int64;
pNext @1 :PNext;
addressInfoCount @2 :UInt64;
vendorInfoCount @3 :UInt64;
vendorBinarySize @4 :UInt64;
}

struct VkDeviceFaultInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
description @2 :List(UInt64);
pAddressInfos @3 :List(VkDeviceFaultAddressInfoEXT);
pVendorInfos @4 :List(VkDeviceFaultVendorInfoEXT);
pVendorBinaryData @5 :List(UInt64);
}

struct VkDeviceFaultVendorBinaryHeaderVersionOneEXT {
headerSize @0 :UInt64;
headerVersion @1 :Int64;
vendorID @2 :UInt64;
deviceID @3 :UInt64;
driverVersion @4 :UInt64;
pipelineCacheUUID @5 :List(UInt64);
applicationNameOffset @6 :UInt64;
applicationVersion @7 :UInt64;
engineNameOffset @8 :UInt64;
engineVersion @9 :UInt64;
apiVersion @10 :UInt64;
}

struct VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
pipelineLibraryGroupHandles @2 :UInt64;
}

struct VkDepthBiasInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
depthBiasConstantFactor @2 :Float32;
depthBiasClamp @3 :Float32;
depthBiasSlopeFactor @4 :Float32;
}

struct VkDepthBiasRepresentationInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
depthBiasRepresentation @2 :Int64;
depthBiasExact @3 :UInt64;
}

struct VkDecompressMemoryRegionNV {
srcAddress @0 :UInt64;
dstAddress @1 :UInt64;
compressedSize @2 :UInt64;
decompressedSize @3 :UInt64;
decompressionMethod @4 :Int64;
}

struct VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM {
sType @0 :Int64;
pNext @1 :PNext;
shaderCoreMask @2 :UInt64;
shaderCoreCount @3 :UInt64;
shaderWarpsPerCore @4 :UInt64;
}

struct VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM {
sType @0 :Int64;
pNext @1 :PNext;
shaderCoreBuiltins @2 :UInt64;
}

struct VkFrameBoundaryEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
frameID @3 :UInt64;
imageCount @4 :UInt64;
pImages @5 :List(UInt64);
bufferCount @6 :UInt64;
pBuffers @7 :List(UInt64);
tagName @8 :UInt64;
tagSize @9 :UInt64;
pTag @10 :List(UInt64);
}

struct VkPhysicalDeviceFrameBoundaryFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
frameBoundary @2 :UInt64;
}

struct VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
dynamicRenderingUnusedAttachments @2 :UInt64;
}

struct VkSurfacePresentModeEXT {
sType @0 :Int64;
pNext @1 :PNext;
presentMode @2 :Int64;
}

struct VkSurfacePresentScalingCapabilitiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
supportedPresentScaling @2 :Int64;
supportedPresentGravityX @3 :Int64;
supportedPresentGravityY @4 :Int64;
minScaledImageExtent @5 :VkExtent2D;
maxScaledImageExtent @6 :VkExtent2D;
}

struct VkSurfacePresentModeCompatibilityEXT {
sType @0 :Int64;
pNext @1 :PNext;
presentModeCount @2 :UInt64;
pPresentModes @3 :List(Int64);
}

struct VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
swapchainMaintenance1 @2 :UInt64;
}

struct VkSwapchainPresentFenceInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
swapchainCount @2 :UInt64;
pFences @3 :List(UInt64);
}

struct VkSwapchainPresentModesCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
presentModeCount @2 :UInt64;
pPresentModes @3 :List(Int64);
}

struct VkSwapchainPresentModeInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
swapchainCount @2 :UInt64;
pPresentModes @3 :List(Int64);
}

struct VkSwapchainPresentScalingCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
scalingBehavior @2 :Int64;
presentGravityX @3 :Int64;
presentGravityY @4 :Int64;
}

struct VkReleaseSwapchainImagesInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
swapchain @2 :UInt64;
imageIndexCount @3 :UInt64;
pImageIndices @4 :List(UInt64);
}

struct VkPhysicalDeviceDepthBiasControlFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
depthBiasControl @2 :UInt64;
leastRepresentableValueForceUnormRepresentation @3 :UInt64;
floatRepresentation @4 :UInt64;
depthBiasExact @5 :UInt64;
}

struct VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
rayTracingInvocationReorder @2 :UInt64;
}

struct VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV {
sType @0 :Int64;
pNext @1 :PNext;
rayTracingInvocationReorderReorderingHint @2 :Int64;
}

struct VkDirectDriverLoadingInfoLUNARG {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
pfnGetInstanceProcAddr @3 :PFNvkGetInstanceProcAddrLUNARG;
}

struct VkDirectDriverLoadingListLUNARG {
sType @0 :Int64;
pNext @1 :PNext;
mode @2 :Int64;
driverCount @3 :UInt64;
pDrivers @4 :List(VkDirectDriverLoadingInfoLUNARG);
}

struct VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM {
sType @0 :Int64;
pNext @1 :PNext;
multiviewPerViewViewports @2 :UInt64;
}

struct VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR {
sType @0 :Int64;
pNext @1 :PNext;
rayTracingPositionFetch @2 :UInt64;
}

struct VkDeviceImageSubresourceInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
pCreateInfo @2 :List(VkImageCreateInfo);
pSubresource @3 :List(VkImageSubresource2KHR);
}

struct VkPhysicalDeviceShaderCorePropertiesARM {
sType @0 :Int64;
pNext @1 :PNext;
pixelRate @2 :UInt64;
texelRate @3 :UInt64;
fmaRate @4 :UInt64;
}

struct VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM {
sType @0 :Int64;
pNext @1 :PNext;
multiviewPerViewRenderAreas @2 :UInt64;
}

struct VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM {
sType @0 :Int64;
pNext @1 :PNext;
perViewRenderAreaCount @2 :UInt64;
pPerViewRenderAreas @3 :List(VkRect2D);
}

struct VkQueryLowLatencySupportNV {
sType @0 :Int64;
pNext @1 :PNext;
pQueriedLowLatencyData @2 :List(UInt64);
}

struct VkMemoryMapInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
memory @3 :UInt64;
offset @4 :UInt64;
size @5 :UInt64;
}

struct VkMemoryUnmapInfoKHR {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
memory @3 :UInt64;
}

struct VkPhysicalDeviceShaderObjectFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
shaderObject @2 :UInt64;
}

struct VkPhysicalDeviceShaderObjectPropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
shaderBinaryUUID @2 :List(UInt64);
shaderBinaryVersion @3 :UInt64;
}

struct VkShaderCreateInfoEXT {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
stage @3 :Int64;
nextStage @4 :Int64;
codeType @5 :Int64;
codeSize @6 :UInt64;
pCode @7 :List(UInt64);
pName @8 :List(UInt64);
setLayoutCount @9 :UInt64;
pSetLayouts @10 :List(UInt64);
pushConstantRangeCount @11 :UInt64;
pPushConstantRanges @12 :List(VkPushConstantRange);
pSpecializationInfo @13 :List(VkSpecializationInfo);
}

struct VkPhysicalDeviceShaderTileImageFeaturesEXT {
sType @0 :Int64;
pNext @1 :PNext;
shaderTileImageColorReadAccess @2 :UInt64;
shaderTileImageDepthReadAccess @3 :UInt64;
shaderTileImageStencilReadAccess @4 :UInt64;
}

struct VkPhysicalDeviceShaderTileImagePropertiesEXT {
sType @0 :Int64;
pNext @1 :PNext;
shaderTileImageCoherentReadAccelerated @2 :UInt64;
shaderTileImageReadSampleFromPixelRateInvocation @3 :UInt64;
shaderTileImageReadFromHelperInvocation @4 :UInt64;
}

struct VkImportScreenBufferInfoQNX {
sType @0 :Int64;
pNext @1 :PNext;
buffer @2 :List(UInt64);
}

struct VkScreenBufferPropertiesQNX {
sType @0 :Int64;
pNext @1 :PNext;
allocationSize @2 :UInt64;
memoryTypeBits @3 :UInt64;
}

struct VkScreenBufferFormatPropertiesQNX {
sType @0 :Int64;
pNext @1 :PNext;
format @2 :Int64;
externalFormat @3 :UInt64;
screenUsage @4 :UInt64;
formatFeatures @5 :Int64;
samplerYcbcrConversionComponents @6 :VkComponentMapping;
suggestedYcbcrModel @7 :Int64;
suggestedYcbcrRange @8 :Int64;
suggestedXChromaOffset @9 :Int64;
suggestedYChromaOffset @10 :Int64;
}

struct VkExternalFormatQNX {
sType @0 :Int64;
pNext @1 :PNext;
externalFormat @2 :UInt64;
}

struct VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX {
sType @0 :Int64;
pNext @1 :PNext;
screenBufferImport @2 :UInt64;
}

struct VkPhysicalDeviceCooperativeMatrixFeaturesKHR {
sType @0 :Int64;
pNext @1 :PNext;
cooperativeMatrix @2 :UInt64;
cooperativeMatrixRobustBufferAccess @3 :UInt64;
}

struct VkCooperativeMatrixPropertiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
mSize @2 :UInt64;
nSize @3 :UInt64;
kSize @4 :UInt64;
aType @5 :Int64;
bType @6 :Int64;
cType @7 :Int64;
resultType @8 :Int64;
saturatingAccumulation @9 :UInt64;
scope @10 :Int64;
}

struct VkPhysicalDeviceCooperativeMatrixPropertiesKHR {
sType @0 :Int64;
pNext @1 :PNext;
cooperativeMatrixSupportedStages @2 :Int64;
}

struct VkPhysicalDeviceShaderEnqueuePropertiesAMDX {
sType @0 :Int64;
pNext @1 :PNext;
maxExecutionGraphDepth @2 :UInt64;
maxExecutionGraphShaderOutputNodes @3 :UInt64;
maxExecutionGraphShaderPayloadSize @4 :UInt64;
maxExecutionGraphShaderPayloadCount @5 :UInt64;
executionGraphDispatchAddressAlignment @6 :UInt64;
}

struct VkPhysicalDeviceShaderEnqueueFeaturesAMDX {
sType @0 :Int64;
pNext @1 :PNext;
shaderEnqueue @2 :UInt64;
}

struct VkExecutionGraphPipelineCreateInfoAMDX {
sType @0 :Int64;
pNext @1 :PNext;
flags @2 :Int64;
stageCount @3 :UInt64;
pStages @4 :List(VkPipelineShaderStageCreateInfo);
pLibraryInfo @5 :List(VkPipelineLibraryCreateInfoKHR);
layout @6 :UInt64;
basePipelineHandle @7 :UInt64;
basePipelineIndex @8 :Int64;
}

struct VkPipelineShaderStageNodeCreateInfoAMDX {
sType @0 :Int64;
pNext @1 :PNext;
pName @2 :List(UInt64);
index @3 :UInt64;
}

struct VkExecutionGraphPipelineScratchSizeAMDX {
sType @0 :Int64;
pNext @1 :PNext;
size @2 :UInt64;
}

struct VkDispatchGraphInfoAMDX {
nodeIndex @0 :UInt64;
payloadCount @1 :UInt64;
payloads @2 :VkDeviceOrHostAddressConstAMDX;
payloadStride @3 :UInt64;
}

struct VkDispatchGraphCountInfoAMDX {
count @0 :UInt64;
infos @1 :VkDeviceOrHostAddressConstAMDX;
stride @2 :UInt64;
}

struct VkPhysicalDeviceCubicClampFeaturesQCOM {
sType @0 :Int64;
pNext @1 :PNext;
cubicRangeClamp @2 :UInt64;
}

struct VkPhysicalDeviceYcbcrDegammaFeaturesQCOM {
sType @0 :Int64;
pNext @1 :PNext;
ycbcrDegamma @2 :UInt64;
}

struct VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM {
sType @0 :Int64;
pNext @1 :PNext;
enableYDegamma @2 :UInt64;
enableCbCrDegamma @3 :UInt64;
}

struct VkPhysicalDeviceCubicWeightsFeaturesQCOM {
sType @0 :Int64;
pNext @1 :PNext;
selectableCubicWeights @2 :UInt64;
}

struct VkSamplerCubicWeightsCreateInfoQCOM {
sType @0 :Int64;
pNext @1 :PNext;
cubicWeights @2 :Int64;
}

struct VkBlitImageCubicWeightsInfoQCOM {
sType @0 :Int64;
pNext @1 :PNext;
cubicWeights @2 :Int64;
}

struct VkPhysicalDeviceImageProcessing2FeaturesQCOM {
sType @0 :Int64;
pNext @1 :PNext;
textureBlockMatch2 @2 :UInt64;
}

struct VkPhysicalDeviceImageProcessing2PropertiesQCOM {
sType @0 :Int64;
pNext @1 :PNext;
maxBlockMatchWindow @2 :VkExtent2D;
}

struct VkSamplerBlockMatchWindowCreateInfoQCOM {
sType @0 :Int64;
pNext @1 :PNext;
windowExtent @2 :VkExtent2D;
windowCompareMode @3 :Int64;
}

struct VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV {
sType @0 :Int64;
pNext @1 :PNext;
descriptorPoolOverallocation @2 :UInt64;
}

struct VkPhysicalDeviceLayeredDriverPropertiesMSFT {
sType @0 :Int64;
pNext @1 :PNext;
underlyingAPI @2 :Int64;
}

struct VkCreateInstance {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
pCreateInfo @4 :List(VkInstanceCreateInfo);
pAllocator @5 :List(VkAllocationCallbacks);
pInstance @6 :List(UInt64);
}

struct VkDestroyInstance {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
instance @4 :UInt64;
pAllocator @5 :List(VkAllocationCallbacks);
}

struct VkEnumeratePhysicalDevices {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
instance @4 :UInt64;
pPhysicalDeviceCount @5 :List(UInt64);
pPhysicalDevices @6 :List(UInt64);
}

struct VkGetDeviceProcAddr {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :PFNvkVoidFunction;
device @4 :UInt64;
pName @5 :List(UInt64);
}

struct VkGetInstanceProcAddr {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :PFNvkVoidFunction;
instance @4 :UInt64;
pName @5 :List(UInt64);
}

struct VkGetPhysicalDeviceProperties {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
pProperties @5 :List(VkPhysicalDeviceProperties);
}

struct VkGetPhysicalDeviceQueueFamilyProperties {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
pQueueFamilyPropertyCount @5 :List(UInt64);
pQueueFamilyProperties @6 :List(VkQueueFamilyProperties);
}

struct VkGetPhysicalDeviceMemoryProperties {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
pMemoryProperties @5 :List(VkPhysicalDeviceMemoryProperties);
}

struct VkGetPhysicalDeviceFeatures {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
pFeatures @5 :List(VkPhysicalDeviceFeatures);
}

struct VkGetPhysicalDeviceFormatProperties {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
format @5 :Int64;
pFormatProperties @6 :List(VkFormatProperties);
}

struct VkGetPhysicalDeviceImageFormatProperties {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
format @5 :Int64;
type @6 :Int64;
tiling @7 :Int64;
usage @8 :Int64;
flags @9 :Int64;
pImageFormatProperties @10 :List(VkImageFormatProperties);
}

struct VkCreateDevice {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pCreateInfo @5 :List(VkDeviceCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pDevice @7 :List(UInt64);
}

struct VkDestroyDevice {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pAllocator @5 :List(VkAllocationCallbacks);
}

struct VkEnumerateInstanceVersion {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
pApiVersion @4 :List(UInt64);
}

struct VkEnumerateInstanceLayerProperties {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
pPropertyCount @4 :List(UInt64);
pProperties @5 :List(VkLayerProperties);
}

struct VkEnumerateInstanceExtensionProperties {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
pLayerName @4 :List(UInt64);
pPropertyCount @5 :List(UInt64);
pProperties @6 :List(VkExtensionProperties);
}

struct VkEnumerateDeviceLayerProperties {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pPropertyCount @5 :List(UInt64);
pProperties @6 :List(VkLayerProperties);
}

struct VkEnumerateDeviceExtensionProperties {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pLayerName @5 :List(UInt64);
pPropertyCount @6 :List(UInt64);
pProperties @7 :List(VkExtensionProperties);
}

struct VkGetDeviceQueue {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
queueFamilyIndex @5 :UInt64;
queueIndex @6 :UInt64;
pQueue @7 :List(UInt64);
}

struct VkQueueSubmit {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
queue @4 :UInt64;
submitCount @5 :UInt64;
pSubmits @6 :List(VkSubmitInfo);
fence @7 :UInt64;
}

struct VkQueueWaitIdle {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
queue @4 :UInt64;
}

struct VkDeviceWaitIdle {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
}

struct VkAllocateMemory {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pAllocateInfo @5 :List(VkMemoryAllocateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pMemory @7 :List(UInt64);
}

struct VkFreeMemory {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
memory @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkMapMemory {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
memory @5 :UInt64;
offset @6 :UInt64;
size @7 :UInt64;
flags @8 :Int64;
ppData @9 :List(List(UInt64));
}

struct VkUnmapMemory {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
memory @5 :UInt64;
}

struct VkFlushMappedMemoryRanges {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
memoryRangeCount @5 :UInt64;
pMemoryRanges @6 :List(VkMappedMemoryRange);
}

struct VkInvalidateMappedMemoryRanges {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
memoryRangeCount @5 :UInt64;
pMemoryRanges @6 :List(VkMappedMemoryRange);
}

struct VkGetDeviceMemoryCommitment {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
memory @5 :UInt64;
pCommittedMemoryInBytes @6 :List(UInt64);
}

struct VkGetBufferMemoryRequirements {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
buffer @5 :UInt64;
pMemoryRequirements @6 :List(VkMemoryRequirements);
}

struct VkBindBufferMemory {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
buffer @5 :UInt64;
memory @6 :UInt64;
memoryOffset @7 :UInt64;
}

struct VkGetImageMemoryRequirements {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
image @5 :UInt64;
pMemoryRequirements @6 :List(VkMemoryRequirements);
}

struct VkBindImageMemory {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
image @5 :UInt64;
memory @6 :UInt64;
memoryOffset @7 :UInt64;
}

struct VkGetImageSparseMemoryRequirements {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
image @5 :UInt64;
pSparseMemoryRequirementCount @6 :List(UInt64);
pSparseMemoryRequirements @7 :List(VkSparseImageMemoryRequirements);
}

struct VkGetPhysicalDeviceSparseImageFormatProperties {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
format @5 :Int64;
type @6 :Int64;
samples @7 :Int64;
usage @8 :Int64;
tiling @9 :Int64;
pPropertyCount @10 :List(UInt64);
pProperties @11 :List(VkSparseImageFormatProperties);
}

struct VkQueueBindSparse {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
queue @4 :UInt64;
bindInfoCount @5 :UInt64;
pBindInfo @6 :List(VkBindSparseInfo);
fence @7 :UInt64;
}

struct VkCreateFence {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkFenceCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pFence @7 :List(UInt64);
}

struct VkDestroyFence {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
fence @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkResetFences {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
fenceCount @5 :UInt64;
pFences @6 :List(UInt64);
}

struct VkGetFenceStatus {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
fence @5 :UInt64;
}

struct VkWaitForFences {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
fenceCount @5 :UInt64;
pFences @6 :List(UInt64);
waitAll @7 :UInt64;
timeout @8 :UInt64;
}

struct VkCreateSemaphore {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkSemaphoreCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pSemaphore @7 :List(UInt64);
}

struct VkDestroySemaphore {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
semaphore @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkCreateEvent {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkEventCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pEvent @7 :List(UInt64);
}

struct VkDestroyEvent {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
event @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkGetEventStatus {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
event @5 :UInt64;
}

struct VkSetEvent {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
event @5 :UInt64;
}

struct VkResetEvent {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
event @5 :UInt64;
}

struct VkCreateQueryPool {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkQueryPoolCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pQueryPool @7 :List(UInt64);
}

struct VkDestroyQueryPool {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
queryPool @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkGetQueryPoolResults {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
queryPool @5 :UInt64;
firstQuery @6 :UInt64;
queryCount @7 :UInt64;
dataSize @8 :UInt64;
pData @9 :List(UInt64);
stride @10 :UInt64;
flags @11 :Int64;
}

struct VkResetQueryPool {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
queryPool @5 :UInt64;
firstQuery @6 :UInt64;
queryCount @7 :UInt64;
}

struct VkCreateBuffer {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkBufferCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pBuffer @7 :List(UInt64);
}

struct VkDestroyBuffer {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
buffer @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkCreateBufferView {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkBufferViewCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pView @7 :List(UInt64);
}

struct VkDestroyBufferView {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
bufferView @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkCreateImage {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkImageCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pImage @7 :List(UInt64);
}

struct VkDestroyImage {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
image @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkGetImageSubresourceLayout {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
image @5 :UInt64;
pSubresource @6 :List(VkImageSubresource);
pLayout @7 :List(VkSubresourceLayout);
}

struct VkCreateImageView {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkImageViewCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pView @7 :List(UInt64);
}

struct VkDestroyImageView {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
imageView @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkCreateShaderModule {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkShaderModuleCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pShaderModule @7 :List(UInt64);
}

struct VkDestroyShaderModule {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
shaderModule @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkCreatePipelineCache {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkPipelineCacheCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pPipelineCache @7 :List(UInt64);
}

struct VkDestroyPipelineCache {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pipelineCache @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkGetPipelineCacheData {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pipelineCache @5 :UInt64;
pDataSize @6 :List(UInt64);
pData @7 :List(UInt64);
}

struct VkMergePipelineCaches {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
dstCache @5 :UInt64;
srcCacheCount @6 :UInt64;
pSrcCaches @7 :List(UInt64);
}

struct VkCreateGraphicsPipelines {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pipelineCache @5 :UInt64;
createInfoCount @6 :UInt64;
pCreateInfos @7 :List(VkGraphicsPipelineCreateInfo);
pAllocator @8 :List(VkAllocationCallbacks);
pPipelines @9 :List(UInt64);
}

struct VkCreateComputePipelines {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pipelineCache @5 :UInt64;
createInfoCount @6 :UInt64;
pCreateInfos @7 :List(VkComputePipelineCreateInfo);
pAllocator @8 :List(VkAllocationCallbacks);
pPipelines @9 :List(UInt64);
}

struct VkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
renderpass @5 :UInt64;
pMaxWorkgroupSize @6 :List(VkExtent2D);
}

struct VkDestroyPipeline {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pipeline @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkCreatePipelineLayout {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkPipelineLayoutCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pPipelineLayout @7 :List(UInt64);
}

struct VkDestroyPipelineLayout {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pipelineLayout @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkCreateSampler {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkSamplerCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pSampler @7 :List(UInt64);
}

struct VkDestroySampler {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
sampler @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkCreateDescriptorSetLayout {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkDescriptorSetLayoutCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pSetLayout @7 :List(UInt64);
}

struct VkDestroyDescriptorSetLayout {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
descriptorSetLayout @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkCreateDescriptorPool {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkDescriptorPoolCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pDescriptorPool @7 :List(UInt64);
}

struct VkDestroyDescriptorPool {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
descriptorPool @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkResetDescriptorPool {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
descriptorPool @5 :UInt64;
flags @6 :Int64;
}

struct VkAllocateDescriptorSets {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pAllocateInfo @5 :List(VkDescriptorSetAllocateInfo);
pDescriptorSets @6 :List(UInt64);
}

struct VkFreeDescriptorSets {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
descriptorPool @5 :UInt64;
descriptorSetCount @6 :UInt64;
pDescriptorSets @7 :List(UInt64);
}

struct VkUpdateDescriptorSets {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
descriptorWriteCount @5 :UInt64;
pDescriptorWrites @6 :List(VkWriteDescriptorSet);
descriptorCopyCount @7 :UInt64;
pDescriptorCopies @8 :List(VkCopyDescriptorSet);
}

struct VkCreateFramebuffer {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkFramebufferCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pFramebuffer @7 :List(UInt64);
}

struct VkDestroyFramebuffer {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
framebuffer @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkCreateRenderPass {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkRenderPassCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pRenderPass @7 :List(UInt64);
}

struct VkDestroyRenderPass {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
renderPass @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkGetRenderAreaGranularity {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
renderPass @5 :UInt64;
pGranularity @6 :List(VkExtent2D);
}

struct VkGetRenderingAreaGranularityKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pRenderingAreaInfo @5 :List(VkRenderingAreaInfoKHR);
pGranularity @6 :List(VkExtent2D);
}

struct VkCreateCommandPool {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkCommandPoolCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pCommandPool @7 :List(UInt64);
}

struct VkDestroyCommandPool {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
commandPool @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkResetCommandPool {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
commandPool @5 :UInt64;
flags @6 :Int64;
}

struct VkAllocateCommandBuffers {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pAllocateInfo @5 :List(VkCommandBufferAllocateInfo);
pCommandBuffers @6 :List(UInt64);
}

struct VkFreeCommandBuffers {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
commandPool @5 :UInt64;
commandBufferCount @6 :UInt64;
pCommandBuffers @7 :List(UInt64);
}

struct VkBeginCommandBuffer {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
commandBuffer @4 :UInt64;
pBeginInfo @5 :List(VkCommandBufferBeginInfo);
}

struct VkEndCommandBuffer {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
commandBuffer @4 :UInt64;
}

struct VkResetCommandBuffer {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
commandBuffer @4 :UInt64;
flags @5 :Int64;
}

struct VkCmdBindPipeline {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pipelineBindPoint @5 :Int64;
pipeline @6 :UInt64;
}

struct VkCmdSetAttachmentFeedbackLoopEnableEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
aspectMask @5 :Int64;
}

struct VkCmdSetViewport {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
firstViewport @5 :UInt64;
viewportCount @6 :UInt64;
pViewports @7 :List(VkViewport);
}

struct VkCmdSetScissor {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
firstScissor @5 :UInt64;
scissorCount @6 :UInt64;
pScissors @7 :List(VkRect2D);
}

struct VkCmdSetLineWidth {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
lineWidth @5 :Float32;
}

struct VkCmdSetDepthBias {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
depthBiasConstantFactor @5 :Float32;
depthBiasClamp @6 :Float32;
depthBiasSlopeFactor @7 :Float32;
}

struct VkCmdSetBlendConstants {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
blendConstants @5 :List(Float32);
}

struct VkCmdSetDepthBounds {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
minDepthBounds @5 :Float32;
maxDepthBounds @6 :Float32;
}

struct VkCmdSetStencilCompareMask {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
faceMask @5 :Int64;
compareMask @6 :UInt64;
}

struct VkCmdSetStencilWriteMask {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
faceMask @5 :Int64;
writeMask @6 :UInt64;
}

struct VkCmdSetStencilReference {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
faceMask @5 :Int64;
reference @6 :UInt64;
}

struct VkCmdBindDescriptorSets {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pipelineBindPoint @5 :Int64;
layout @6 :UInt64;
firstSet @7 :UInt64;
descriptorSetCount @8 :UInt64;
pDescriptorSets @9 :List(UInt64);
dynamicOffsetCount @10 :UInt64;
pDynamicOffsets @11 :List(UInt64);
}

struct VkCmdBindIndexBuffer {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
buffer @5 :UInt64;
offset @6 :UInt64;
indexType @7 :Int64;
}

struct VkCmdBindVertexBuffers {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
firstBinding @5 :UInt64;
bindingCount @6 :UInt64;
pBuffers @7 :List(UInt64);
pOffsets @8 :List(UInt64);
}

struct VkCmdDraw {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
vertexCount @5 :UInt64;
instanceCount @6 :UInt64;
firstVertex @7 :UInt64;
firstInstance @8 :UInt64;
}

struct VkCmdDrawIndexed {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
indexCount @5 :UInt64;
instanceCount @6 :UInt64;
firstIndex @7 :UInt64;
vertexOffset @8 :Int64;
firstInstance @9 :UInt64;
}

struct VkCmdDrawMultiEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
drawCount @5 :UInt64;
pVertexInfo @6 :List(VkMultiDrawInfoEXT);
instanceCount @7 :UInt64;
firstInstance @8 :UInt64;
stride @9 :UInt64;
}

struct VkCmdDrawMultiIndexedEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
drawCount @5 :UInt64;
pIndexInfo @6 :List(VkMultiDrawIndexedInfoEXT);
instanceCount @7 :UInt64;
firstInstance @8 :UInt64;
stride @9 :UInt64;
pVertexOffset @10 :List(Int64);
}

struct VkCmdDrawIndirect {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
buffer @5 :UInt64;
offset @6 :UInt64;
drawCount @7 :UInt64;
stride @8 :UInt64;
}

struct VkCmdDrawIndexedIndirect {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
buffer @5 :UInt64;
offset @6 :UInt64;
drawCount @7 :UInt64;
stride @8 :UInt64;
}

struct VkCmdDispatch {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
groupCountX @5 :UInt64;
groupCountY @6 :UInt64;
groupCountZ @7 :UInt64;
}

struct VkCmdDispatchIndirect {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
buffer @5 :UInt64;
offset @6 :UInt64;
}

struct VkCmdSubpassShadingHUAWEI {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
}

struct VkCmdDrawClusterHUAWEI {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
groupCountX @5 :UInt64;
groupCountY @6 :UInt64;
groupCountZ @7 :UInt64;
}

struct VkCmdDrawClusterIndirectHUAWEI {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
buffer @5 :UInt64;
offset @6 :UInt64;
}

struct VkCmdUpdatePipelineIndirectBufferNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pipelineBindPoint @5 :Int64;
pipeline @6 :UInt64;
}

struct VkCmdCopyBuffer {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
srcBuffer @5 :UInt64;
dstBuffer @6 :UInt64;
regionCount @7 :UInt64;
pRegions @8 :List(VkBufferCopy);
}

struct VkCmdCopyImage {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
srcImage @5 :UInt64;
srcImageLayout @6 :Int64;
dstImage @7 :UInt64;
dstImageLayout @8 :Int64;
regionCount @9 :UInt64;
pRegions @10 :List(VkImageCopy);
}

struct VkCmdBlitImage {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
srcImage @5 :UInt64;
srcImageLayout @6 :Int64;
dstImage @7 :UInt64;
dstImageLayout @8 :Int64;
regionCount @9 :UInt64;
pRegions @10 :List(VkImageBlit);
filter @11 :Int64;
}

struct VkCmdCopyBufferToImage {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
srcBuffer @5 :UInt64;
dstImage @6 :UInt64;
dstImageLayout @7 :Int64;
regionCount @8 :UInt64;
pRegions @9 :List(VkBufferImageCopy);
}

struct VkCmdCopyImageToBuffer {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
srcImage @5 :UInt64;
srcImageLayout @6 :Int64;
dstBuffer @7 :UInt64;
regionCount @8 :UInt64;
pRegions @9 :List(VkBufferImageCopy);
}

struct VkCmdCopyMemoryIndirectNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
copyBufferAddress @5 :UInt64;
copyCount @6 :UInt64;
stride @7 :UInt64;
}

struct VkCmdCopyMemoryToImageIndirectNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
copyBufferAddress @5 :UInt64;
copyCount @6 :UInt64;
stride @7 :UInt64;
dstImage @8 :UInt64;
dstImageLayout @9 :Int64;
pImageSubresources @10 :List(VkImageSubresourceLayers);
}

struct VkCmdUpdateBuffer {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
dstBuffer @5 :UInt64;
dstOffset @6 :UInt64;
dataSize @7 :UInt64;
pData @8 :List(UInt64);
}

struct VkCmdFillBuffer {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
dstBuffer @5 :UInt64;
dstOffset @6 :UInt64;
size @7 :UInt64;
data @8 :UInt64;
}

struct VkCmdClearColorImage {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
image @5 :UInt64;
imageLayout @6 :Int64;
pColor @7 :List(VkClearColorValue);
rangeCount @8 :UInt64;
pRanges @9 :List(VkImageSubresourceRange);
}

struct VkCmdClearDepthStencilImage {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
image @5 :UInt64;
imageLayout @6 :Int64;
pDepthStencil @7 :List(VkClearDepthStencilValue);
rangeCount @8 :UInt64;
pRanges @9 :List(VkImageSubresourceRange);
}

struct VkCmdClearAttachments {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
attachmentCount @5 :UInt64;
pAttachments @6 :List(VkClearAttachment);
rectCount @7 :UInt64;
pRects @8 :List(VkClearRect);
}

struct VkCmdResolveImage {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
srcImage @5 :UInt64;
srcImageLayout @6 :Int64;
dstImage @7 :UInt64;
dstImageLayout @8 :Int64;
regionCount @9 :UInt64;
pRegions @10 :List(VkImageResolve);
}

struct VkCmdSetEvent {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
event @5 :UInt64;
stageMask @6 :Int64;
}

struct VkCmdResetEvent {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
event @5 :UInt64;
stageMask @6 :Int64;
}

struct VkCmdWaitEvents {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
eventCount @5 :UInt64;
pEvents @6 :List(UInt64);
srcStageMask @7 :Int64;
dstStageMask @8 :Int64;
memoryBarrierCount @9 :UInt64;
pMemoryBarriers @10 :List(VkMemoryBarrier);
bufferMemoryBarrierCount @11 :UInt64;
pBufferMemoryBarriers @12 :List(VkBufferMemoryBarrier);
imageMemoryBarrierCount @13 :UInt64;
pImageMemoryBarriers @14 :List(VkImageMemoryBarrier);
}

struct VkCmdPipelineBarrier {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
srcStageMask @5 :Int64;
dstStageMask @6 :Int64;
dependencyFlags @7 :Int64;
memoryBarrierCount @8 :UInt64;
pMemoryBarriers @9 :List(VkMemoryBarrier);
bufferMemoryBarrierCount @10 :UInt64;
pBufferMemoryBarriers @11 :List(VkBufferMemoryBarrier);
imageMemoryBarrierCount @12 :UInt64;
pImageMemoryBarriers @13 :List(VkImageMemoryBarrier);
}

struct VkCmdBeginQuery {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
queryPool @5 :UInt64;
query @6 :UInt64;
flags @7 :Int64;
}

struct VkCmdEndQuery {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
queryPool @5 :UInt64;
query @6 :UInt64;
}

struct VkCmdBeginConditionalRenderingEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pConditionalRenderingBegin @5 :List(VkConditionalRenderingBeginInfoEXT);
}

struct VkCmdEndConditionalRenderingEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
}

struct VkCmdResetQueryPool {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
queryPool @5 :UInt64;
firstQuery @6 :UInt64;
queryCount @7 :UInt64;
}

struct VkCmdWriteTimestamp {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pipelineStage @5 :Int64;
queryPool @6 :UInt64;
query @7 :UInt64;
}

struct VkCmdCopyQueryPoolResults {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
queryPool @5 :UInt64;
firstQuery @6 :UInt64;
queryCount @7 :UInt64;
dstBuffer @8 :UInt64;
dstOffset @9 :UInt64;
stride @10 :UInt64;
flags @11 :Int64;
}

struct VkCmdPushConstants {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
layout @5 :UInt64;
stageFlags @6 :Int64;
offset @7 :UInt64;
size @8 :UInt64;
pValues @9 :List(UInt64);
}

struct VkCmdBeginRenderPass {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pRenderPassBegin @5 :List(VkRenderPassBeginInfo);
contents @6 :Int64;
}

struct VkCmdNextSubpass {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
contents @5 :Int64;
}

struct VkCmdEndRenderPass {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
}

struct VkCmdExecuteCommands {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
commandBufferCount @5 :UInt64;
pCommandBuffers @6 :List(UInt64);
}

struct VkCreateAndroidSurfaceKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
instance @4 :UInt64;
pCreateInfo @5 :List(VkAndroidSurfaceCreateInfoKHR);
pAllocator @6 :List(VkAllocationCallbacks);
pSurface @7 :List(UInt64);
}

struct VkGetPhysicalDeviceDisplayPropertiesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pPropertyCount @5 :List(UInt64);
pProperties @6 :List(VkDisplayPropertiesKHR);
}

struct VkGetPhysicalDeviceDisplayPlanePropertiesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pPropertyCount @5 :List(UInt64);
pProperties @6 :List(VkDisplayPlanePropertiesKHR);
}

struct VkGetDisplayPlaneSupportedDisplaysKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
planeIndex @5 :UInt64;
pDisplayCount @6 :List(UInt64);
pDisplays @7 :List(UInt64);
}

struct VkGetDisplayModePropertiesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
display @5 :UInt64;
pPropertyCount @6 :List(UInt64);
pProperties @7 :List(VkDisplayModePropertiesKHR);
}

struct VkCreateDisplayModeKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
display @5 :UInt64;
pCreateInfo @6 :List(VkDisplayModeCreateInfoKHR);
pAllocator @7 :List(VkAllocationCallbacks);
pMode @8 :List(UInt64);
}

struct VkGetDisplayPlaneCapabilitiesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
mode @5 :UInt64;
planeIndex @6 :UInt64;
pCapabilities @7 :List(VkDisplayPlaneCapabilitiesKHR);
}

struct VkCreateDisplayPlaneSurfaceKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
instance @4 :UInt64;
pCreateInfo @5 :List(VkDisplaySurfaceCreateInfoKHR);
pAllocator @6 :List(VkAllocationCallbacks);
pSurface @7 :List(UInt64);
}

struct VkCreateSharedSwapchainsKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
swapchainCount @5 :UInt64;
pCreateInfos @6 :List(VkSwapchainCreateInfoKHR);
pAllocator @7 :List(VkAllocationCallbacks);
pSwapchains @8 :List(UInt64);
}

struct VkDestroySurfaceKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
instance @4 :UInt64;
surface @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkGetPhysicalDeviceSurfaceSupportKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
queueFamilyIndex @5 :UInt64;
surface @6 :UInt64;
pSupported @7 :List(UInt64);
}

struct VkGetPhysicalDeviceSurfaceCapabilitiesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
surface @5 :UInt64;
pSurfaceCapabilities @6 :List(VkSurfaceCapabilitiesKHR);
}

struct VkGetPhysicalDeviceSurfaceFormatsKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
surface @5 :UInt64;
pSurfaceFormatCount @6 :List(UInt64);
pSurfaceFormats @7 :List(VkSurfaceFormatKHR);
}

struct VkGetPhysicalDeviceSurfacePresentModesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
surface @5 :UInt64;
pPresentModeCount @6 :List(UInt64);
pPresentModes @7 :List(Int64);
}

struct VkCreateSwapchainKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkSwapchainCreateInfoKHR);
pAllocator @6 :List(VkAllocationCallbacks);
pSwapchain @7 :List(UInt64);
}

struct VkDestroySwapchainKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
swapchain @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkGetSwapchainImagesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
swapchain @5 :UInt64;
pSwapchainImageCount @6 :List(UInt64);
pSwapchainImages @7 :List(UInt64);
}

struct VkAcquireNextImageKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
swapchain @5 :UInt64;
timeout @6 :UInt64;
semaphore @7 :UInt64;
fence @8 :UInt64;
pImageIndex @9 :List(UInt64);
}

struct VkQueuePresentKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
queue @4 :UInt64;
pPresentInfo @5 :List(VkPresentInfoKHR);
}

struct VkCreateViSurfaceNN {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
instance @4 :UInt64;
pCreateInfo @5 :List(VkViSurfaceCreateInfoNN);
pAllocator @6 :List(VkAllocationCallbacks);
pSurface @7 :List(UInt64);
}

struct VkCreateWaylandSurfaceKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
instance @4 :UInt64;
pCreateInfo @5 :List(VkWaylandSurfaceCreateInfoKHR);
pAllocator @6 :List(VkAllocationCallbacks);
pSurface @7 :List(UInt64);
}

struct VkGetPhysicalDeviceWaylandPresentationSupportKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
queueFamilyIndex @5 :UInt64;
display @6 :List(UInt64);
}

struct VkCreateWin32SurfaceKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
instance @4 :UInt64;
pCreateInfo @5 :List(VkWin32SurfaceCreateInfoKHR);
pAllocator @6 :List(VkAllocationCallbacks);
pSurface @7 :List(UInt64);
}

struct VkGetPhysicalDeviceWin32PresentationSupportKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
queueFamilyIndex @5 :UInt64;
}

struct VkCreateXlibSurfaceKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
instance @4 :UInt64;
pCreateInfo @5 :List(VkXlibSurfaceCreateInfoKHR);
pAllocator @6 :List(VkAllocationCallbacks);
pSurface @7 :List(UInt64);
}

struct VkGetPhysicalDeviceXlibPresentationSupportKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
queueFamilyIndex @5 :UInt64;
dpy @6 :List(UInt64);
visualID @7 :UInt64;
}

struct VkCreateXcbSurfaceKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
instance @4 :UInt64;
pCreateInfo @5 :List(VkXcbSurfaceCreateInfoKHR);
pAllocator @6 :List(VkAllocationCallbacks);
pSurface @7 :List(UInt64);
}

struct VkGetPhysicalDeviceXcbPresentationSupportKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
queueFamilyIndex @5 :UInt64;
connection @6 :List(UInt64);
visualid @7 :UInt64;
}

struct VkCreateDirectFBSurfaceEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
instance @4 :UInt64;
pCreateInfo @5 :List(VkDirectFBSurfaceCreateInfoEXT);
pAllocator @6 :List(VkAllocationCallbacks);
pSurface @7 :List(UInt64);
}

struct VkGetPhysicalDeviceDirectFBPresentationSupportEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
queueFamilyIndex @5 :UInt64;
dfb @6 :List(UInt64);
}

struct VkCreateImagePipeSurfaceFUCHSIA {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
instance @4 :UInt64;
pCreateInfo @5 :List(VkImagePipeSurfaceCreateInfoFUCHSIA);
pAllocator @6 :List(VkAllocationCallbacks);
pSurface @7 :List(UInt64);
}

struct VkCreateStreamDescriptorSurfaceGGP {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
instance @4 :UInt64;
pCreateInfo @5 :List(VkStreamDescriptorSurfaceCreateInfoGGP);
pAllocator @6 :List(VkAllocationCallbacks);
pSurface @7 :List(UInt64);
}

struct VkCreateScreenSurfaceQNX {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
instance @4 :UInt64;
pCreateInfo @5 :List(VkScreenSurfaceCreateInfoQNX);
pAllocator @6 :List(VkAllocationCallbacks);
pSurface @7 :List(UInt64);
}

struct VkGetPhysicalDeviceScreenPresentationSupportQNX {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
queueFamilyIndex @5 :UInt64;
window @6 :List(UInt64);
}

struct VkCreateDebugReportCallbackEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
instance @4 :UInt64;
pCreateInfo @5 :List(VkDebugReportCallbackCreateInfoEXT);
pAllocator @6 :List(VkAllocationCallbacks);
pCallback @7 :List(UInt64);
}

struct VkDestroyDebugReportCallbackEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
instance @4 :UInt64;
callback @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkDebugReportMessageEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
instance @4 :UInt64;
flags @5 :Int64;
objectType @6 :Int64;
object @7 :UInt64;
location @8 :UInt64;
messageCode @9 :Int64;
pLayerPrefix @10 :List(UInt64);
pMessage @11 :List(UInt64);
}

struct VkDebugMarkerSetObjectNameEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pNameInfo @5 :List(VkDebugMarkerObjectNameInfoEXT);
}

struct VkDebugMarkerSetObjectTagEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pTagInfo @5 :List(VkDebugMarkerObjectTagInfoEXT);
}

struct VkCmdDebugMarkerBeginEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pMarkerInfo @5 :List(VkDebugMarkerMarkerInfoEXT);
}

struct VkCmdDebugMarkerEndEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
}

struct VkCmdDebugMarkerInsertEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pMarkerInfo @5 :List(VkDebugMarkerMarkerInfoEXT);
}

struct VkGetPhysicalDeviceExternalImageFormatPropertiesNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
format @5 :Int64;
type @6 :Int64;
tiling @7 :Int64;
usage @8 :Int64;
flags @9 :Int64;
externalHandleType @10 :Int64;
pExternalImageFormatProperties @11 :List(VkExternalImageFormatPropertiesNV);
}

struct VkGetMemoryWin32HandleNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
memory @5 :UInt64;
handleType @6 :Int64;
pHandle @7 :List(UInt64);
}

struct VkCmdExecuteGeneratedCommandsNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
isPreprocessed @5 :UInt64;
pGeneratedCommandsInfo @6 :List(VkGeneratedCommandsInfoNV);
}

struct VkCmdPreprocessGeneratedCommandsNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pGeneratedCommandsInfo @5 :List(VkGeneratedCommandsInfoNV);
}

struct VkCmdBindPipelineShaderGroupNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pipelineBindPoint @5 :Int64;
pipeline @6 :UInt64;
groupIndex @7 :UInt64;
}

struct VkGetGeneratedCommandsMemoryRequirementsNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pInfo @5 :List(VkGeneratedCommandsMemoryRequirementsInfoNV);
pMemoryRequirements @6 :List(VkMemoryRequirements2);
}

struct VkCreateIndirectCommandsLayoutNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkIndirectCommandsLayoutCreateInfoNV);
pAllocator @6 :List(VkAllocationCallbacks);
pIndirectCommandsLayout @7 :List(UInt64);
}

struct VkDestroyIndirectCommandsLayoutNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
indirectCommandsLayout @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkGetPhysicalDeviceFeatures2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
pFeatures @5 :List(VkPhysicalDeviceFeatures2);
}

struct VkGetPhysicalDeviceProperties2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
pProperties @5 :List(VkPhysicalDeviceProperties2);
}

struct VkGetPhysicalDeviceFormatProperties2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
format @5 :Int64;
pFormatProperties @6 :List(VkFormatProperties2);
}

struct VkGetPhysicalDeviceImageFormatProperties2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pImageFormatInfo @5 :List(VkPhysicalDeviceImageFormatInfo2);
pImageFormatProperties @6 :List(VkImageFormatProperties2);
}

struct VkGetPhysicalDeviceQueueFamilyProperties2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
pQueueFamilyPropertyCount @5 :List(UInt64);
pQueueFamilyProperties @6 :List(VkQueueFamilyProperties2);
}

struct VkGetPhysicalDeviceMemoryProperties2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
pMemoryProperties @5 :List(VkPhysicalDeviceMemoryProperties2);
}

struct VkGetPhysicalDeviceSparseImageFormatProperties2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
pFormatInfo @5 :List(VkPhysicalDeviceSparseImageFormatInfo2);
pPropertyCount @6 :List(UInt64);
pProperties @7 :List(VkSparseImageFormatProperties2);
}

struct VkCmdPushDescriptorSetKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pipelineBindPoint @5 :Int64;
layout @6 :UInt64;
set @7 :UInt64;
descriptorWriteCount @8 :UInt64;
pDescriptorWrites @9 :List(VkWriteDescriptorSet);
}

struct VkTrimCommandPool {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
commandPool @5 :UInt64;
flags @6 :Int64;
}

struct VkGetPhysicalDeviceExternalBufferProperties {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
pExternalBufferInfo @5 :List(VkPhysicalDeviceExternalBufferInfo);
pExternalBufferProperties @6 :List(VkExternalBufferProperties);
}

struct VkGetMemoryWin32HandleKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pGetWin32HandleInfo @5 :List(VkMemoryGetWin32HandleInfoKHR);
pHandle @6 :List(UInt64);
}

struct VkGetMemoryWin32HandlePropertiesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
handleType @5 :Int64;
handle @6 :UInt64;
pMemoryWin32HandleProperties @7 :List(VkMemoryWin32HandlePropertiesKHR);
}

struct VkGetMemoryFdKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pGetFdInfo @5 :List(VkMemoryGetFdInfoKHR);
pFd @6 :List(Int64);
}

struct VkGetMemoryFdPropertiesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
handleType @5 :Int64;
fd @6 :Int64;
pMemoryFdProperties @7 :List(VkMemoryFdPropertiesKHR);
}

struct VkGetMemoryZirconHandleFUCHSIA {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pGetZirconHandleInfo @5 :List(VkMemoryGetZirconHandleInfoFUCHSIA);
pZirconHandle @6 :List(UInt64);
}

struct VkGetMemoryZirconHandlePropertiesFUCHSIA {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
handleType @5 :Int64;
zirconHandle @6 :UInt64;
pMemoryZirconHandleProperties @7 :List(VkMemoryZirconHandlePropertiesFUCHSIA);
}

struct VkGetMemoryRemoteAddressNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pMemoryGetRemoteAddressInfo @5 :List(VkMemoryGetRemoteAddressInfoNV);
pAddress @6 :List(List(UInt64));
}

struct VkGetMemorySciBufNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pGetSciBufInfo @5 :List(VkMemoryGetSciBufInfoNV);
pHandle @6 :List(UInt64);
}

struct VkGetPhysicalDeviceExternalMemorySciBufPropertiesNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
handleType @5 :Int64;
handle @6 :UInt64;
pMemorySciBufProperties @7 :List(VkMemorySciBufPropertiesNV);
}

struct VkGetPhysicalDeviceSciBufAttributesNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pAttributes @5 :UInt64;
}

struct VkGetPhysicalDeviceExternalSemaphoreProperties {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
pExternalSemaphoreInfo @5 :List(VkPhysicalDeviceExternalSemaphoreInfo);
pExternalSemaphoreProperties @6 :List(VkExternalSemaphoreProperties);
}

struct VkGetSemaphoreWin32HandleKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pGetWin32HandleInfo @5 :List(VkSemaphoreGetWin32HandleInfoKHR);
pHandle @6 :List(UInt64);
}

struct VkImportSemaphoreWin32HandleKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pImportSemaphoreWin32HandleInfo @5 :List(VkImportSemaphoreWin32HandleInfoKHR);
}

struct VkGetSemaphoreFdKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pGetFdInfo @5 :List(VkSemaphoreGetFdInfoKHR);
pFd @6 :List(Int64);
}

struct VkImportSemaphoreFdKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pImportSemaphoreFdInfo @5 :List(VkImportSemaphoreFdInfoKHR);
}

struct VkGetSemaphoreZirconHandleFUCHSIA {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pGetZirconHandleInfo @5 :List(VkSemaphoreGetZirconHandleInfoFUCHSIA);
pZirconHandle @6 :List(UInt64);
}

struct VkImportSemaphoreZirconHandleFUCHSIA {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pImportSemaphoreZirconHandleInfo @5 :List(VkImportSemaphoreZirconHandleInfoFUCHSIA);
}

struct VkGetPhysicalDeviceExternalFenceProperties {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
pExternalFenceInfo @5 :List(VkPhysicalDeviceExternalFenceInfo);
pExternalFenceProperties @6 :List(VkExternalFenceProperties);
}

struct VkGetFenceWin32HandleKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pGetWin32HandleInfo @5 :List(VkFenceGetWin32HandleInfoKHR);
pHandle @6 :List(UInt64);
}

struct VkImportFenceWin32HandleKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pImportFenceWin32HandleInfo @5 :List(VkImportFenceWin32HandleInfoKHR);
}

struct VkGetFenceFdKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pGetFdInfo @5 :List(VkFenceGetFdInfoKHR);
pFd @6 :List(Int64);
}

struct VkImportFenceFdKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pImportFenceFdInfo @5 :List(VkImportFenceFdInfoKHR);
}

struct VkGetFenceSciSyncFenceNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pGetSciSyncHandleInfo @5 :List(VkFenceGetSciSyncInfoNV);
pHandle @6 :List(UInt64);
}

struct VkGetFenceSciSyncObjNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pGetSciSyncHandleInfo @5 :List(VkFenceGetSciSyncInfoNV);
pHandle @6 :List(UInt64);
}

struct VkImportFenceSciSyncFenceNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pImportFenceSciSyncInfo @5 :List(VkImportFenceSciSyncInfoNV);
}

struct VkImportFenceSciSyncObjNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pImportFenceSciSyncInfo @5 :List(VkImportFenceSciSyncInfoNV);
}

struct VkGetSemaphoreSciSyncObjNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pGetSciSyncInfo @5 :List(VkSemaphoreGetSciSyncInfoNV);
pHandle @6 :List(UInt64);
}

struct VkImportSemaphoreSciSyncObjNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pImportSemaphoreSciSyncInfo @5 :List(VkImportSemaphoreSciSyncInfoNV);
}

struct VkGetPhysicalDeviceSciSyncAttributesNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pSciSyncAttributesInfo @5 :List(VkSciSyncAttributesInfoNV);
pAttributes @6 :UInt64;
}

struct VkCreateSemaphoreSciSyncPoolNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkSemaphoreSciSyncPoolCreateInfoNV);
pAllocator @6 :List(VkAllocationCallbacks);
pSemaphorePool @7 :List(UInt64);
}

struct VkDestroySemaphoreSciSyncPoolNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
semaphorePool @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkReleaseDisplayEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
display @5 :UInt64;
}

struct VkAcquireXlibDisplayEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
dpy @5 :List(UInt64);
display @6 :UInt64;
}

struct VkGetRandROutputDisplayEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
dpy @5 :List(UInt64);
rrOutput @6 :UInt64;
pDisplay @7 :List(UInt64);
}

struct VkAcquireWinrtDisplayNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
display @5 :UInt64;
}

struct VkGetWinrtDisplayNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
deviceRelativeId @5 :UInt64;
pDisplay @6 :List(UInt64);
}

struct VkDisplayPowerControlEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
display @5 :UInt64;
pDisplayPowerInfo @6 :List(VkDisplayPowerInfoEXT);
}

struct VkRegisterDeviceEventEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pDeviceEventInfo @5 :List(VkDeviceEventInfoEXT);
pAllocator @6 :List(VkAllocationCallbacks);
pFence @7 :List(UInt64);
}

struct VkRegisterDisplayEventEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
display @5 :UInt64;
pDisplayEventInfo @6 :List(VkDisplayEventInfoEXT);
pAllocator @7 :List(VkAllocationCallbacks);
pFence @8 :List(UInt64);
}

struct VkGetSwapchainCounterEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
swapchain @5 :UInt64;
counter @6 :Int64;
pCounterValue @7 :List(UInt64);
}

struct VkGetPhysicalDeviceSurfaceCapabilities2EXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
surface @5 :UInt64;
pSurfaceCapabilities @6 :List(VkSurfaceCapabilities2EXT);
}

struct VkEnumeratePhysicalDeviceGroups {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
instance @4 :UInt64;
pPhysicalDeviceGroupCount @5 :List(UInt64);
pPhysicalDeviceGroupProperties @6 :List(VkPhysicalDeviceGroupProperties);
}

struct VkGetDeviceGroupPeerMemoryFeatures {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
heapIndex @5 :UInt64;
localDeviceIndex @6 :UInt64;
remoteDeviceIndex @7 :UInt64;
pPeerMemoryFeatures @8 :List(Int64);
}

struct VkBindBufferMemory2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
bindInfoCount @5 :UInt64;
pBindInfos @6 :List(VkBindBufferMemoryInfo);
}

struct VkBindImageMemory2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
bindInfoCount @5 :UInt64;
pBindInfos @6 :List(VkBindImageMemoryInfo);
}

struct VkCmdSetDeviceMask {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
deviceMask @5 :UInt64;
}

struct VkGetDeviceGroupPresentCapabilitiesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pDeviceGroupPresentCapabilities @5 :List(VkDeviceGroupPresentCapabilitiesKHR);
}

struct VkGetDeviceGroupSurfacePresentModesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
surface @5 :UInt64;
pModes @6 :List(Int64);
}

struct VkAcquireNextImage2KHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pAcquireInfo @5 :List(VkAcquireNextImageInfoKHR);
pImageIndex @6 :List(UInt64);
}

struct VkCmdDispatchBase {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
baseGroupX @5 :UInt64;
baseGroupY @6 :UInt64;
baseGroupZ @7 :UInt64;
groupCountX @8 :UInt64;
groupCountY @9 :UInt64;
groupCountZ @10 :UInt64;
}

struct VkGetPhysicalDevicePresentRectanglesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
surface @5 :UInt64;
pRectCount @6 :List(UInt64);
pRects @7 :List(VkRect2D);
}

struct VkCreateDescriptorUpdateTemplate {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkDescriptorUpdateTemplateCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pDescriptorUpdateTemplate @7 :List(UInt64);
}

struct VkDestroyDescriptorUpdateTemplate {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
descriptorUpdateTemplate @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkUpdateDescriptorSetWithTemplate {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
descriptorSet @5 :UInt64;
descriptorUpdateTemplate @6 :UInt64;
pData @7 :List(UInt64);
}

struct VkCmdPushDescriptorSetWithTemplateKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
descriptorUpdateTemplate @5 :UInt64;
layout @6 :UInt64;
set @7 :UInt64;
pData @8 :List(UInt64);
}

struct VkSetHdrMetadataEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
swapchainCount @5 :UInt64;
pSwapchains @6 :List(UInt64);
pMetadata @7 :List(VkHdrMetadataEXT);
}

struct VkGetSwapchainStatusKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
swapchain @5 :UInt64;
}

struct VkGetRefreshCycleDurationGOOGLE {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
swapchain @5 :UInt64;
pDisplayTimingProperties @6 :List(VkRefreshCycleDurationGOOGLE);
}

struct VkGetPastPresentationTimingGOOGLE {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
swapchain @5 :UInt64;
pPresentationTimingCount @6 :List(UInt64);
pPresentationTimings @7 :List(VkPastPresentationTimingGOOGLE);
}

struct VkCreateIOSSurfaceMVK {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
instance @4 :UInt64;
pCreateInfo @5 :List(VkIOSSurfaceCreateInfoMVK);
pAllocator @6 :List(VkAllocationCallbacks);
pSurface @7 :List(UInt64);
}

struct VkCreateMacOSSurfaceMVK {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
instance @4 :UInt64;
pCreateInfo @5 :List(VkMacOSSurfaceCreateInfoMVK);
pAllocator @6 :List(VkAllocationCallbacks);
pSurface @7 :List(UInt64);
}

struct VkCreateMetalSurfaceEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
instance @4 :UInt64;
pCreateInfo @5 :List(VkMetalSurfaceCreateInfoEXT);
pAllocator @6 :List(VkAllocationCallbacks);
pSurface @7 :List(UInt64);
}

struct VkCmdSetViewportWScalingNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
firstViewport @5 :UInt64;
viewportCount @6 :UInt64;
pViewportWScalings @7 :List(VkViewportWScalingNV);
}

struct VkCmdSetDiscardRectangleEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
firstDiscardRectangle @5 :UInt64;
discardRectangleCount @6 :UInt64;
pDiscardRectangles @7 :List(VkRect2D);
}

struct VkCmdSetDiscardRectangleEnableEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
discardRectangleEnable @5 :UInt64;
}

struct VkCmdSetDiscardRectangleModeEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
discardRectangleMode @5 :Int64;
}

struct VkCmdSetSampleLocationsEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pSampleLocationsInfo @5 :List(VkSampleLocationsInfoEXT);
}

struct VkGetPhysicalDeviceMultisamplePropertiesEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
samples @5 :Int64;
pMultisampleProperties @6 :List(VkMultisamplePropertiesEXT);
}

struct VkGetPhysicalDeviceSurfaceCapabilities2KHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pSurfaceInfo @5 :List(VkPhysicalDeviceSurfaceInfo2KHR);
pSurfaceCapabilities @6 :List(VkSurfaceCapabilities2KHR);
}

struct VkGetPhysicalDeviceSurfaceFormats2KHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pSurfaceInfo @5 :List(VkPhysicalDeviceSurfaceInfo2KHR);
pSurfaceFormatCount @6 :List(UInt64);
pSurfaceFormats @7 :List(VkSurfaceFormat2KHR);
}

struct VkGetPhysicalDeviceDisplayProperties2KHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pPropertyCount @5 :List(UInt64);
pProperties @6 :List(VkDisplayProperties2KHR);
}

struct VkGetPhysicalDeviceDisplayPlaneProperties2KHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pPropertyCount @5 :List(UInt64);
pProperties @6 :List(VkDisplayPlaneProperties2KHR);
}

struct VkGetDisplayModeProperties2KHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
display @5 :UInt64;
pPropertyCount @6 :List(UInt64);
pProperties @7 :List(VkDisplayModeProperties2KHR);
}

struct VkGetDisplayPlaneCapabilities2KHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pDisplayPlaneInfo @5 :List(VkDisplayPlaneInfo2KHR);
pCapabilities @6 :List(VkDisplayPlaneCapabilities2KHR);
}

struct VkGetBufferMemoryRequirements2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pInfo @5 :List(VkBufferMemoryRequirementsInfo2);
pMemoryRequirements @6 :List(VkMemoryRequirements2);
}

struct VkGetImageMemoryRequirements2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pInfo @5 :List(VkImageMemoryRequirementsInfo2);
pMemoryRequirements @6 :List(VkMemoryRequirements2);
}

struct VkGetImageSparseMemoryRequirements2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pInfo @5 :List(VkImageSparseMemoryRequirementsInfo2);
pSparseMemoryRequirementCount @6 :List(UInt64);
pSparseMemoryRequirements @7 :List(VkSparseImageMemoryRequirements2);
}

struct VkGetDeviceBufferMemoryRequirements {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pInfo @5 :List(VkDeviceBufferMemoryRequirements);
pMemoryRequirements @6 :List(VkMemoryRequirements2);
}

struct VkGetDeviceImageMemoryRequirements {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pInfo @5 :List(VkDeviceImageMemoryRequirements);
pMemoryRequirements @6 :List(VkMemoryRequirements2);
}

struct VkGetDeviceImageSparseMemoryRequirements {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pInfo @5 :List(VkDeviceImageMemoryRequirements);
pSparseMemoryRequirementCount @6 :List(UInt64);
pSparseMemoryRequirements @7 :List(VkSparseImageMemoryRequirements2);
}

struct VkCreateSamplerYcbcrConversion {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkSamplerYcbcrConversionCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pYcbcrConversion @7 :List(UInt64);
}

struct VkDestroySamplerYcbcrConversion {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
ycbcrConversion @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkGetDeviceQueue2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pQueueInfo @5 :List(VkDeviceQueueInfo2);
pQueue @6 :List(UInt64);
}

struct VkCreateValidationCacheEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkValidationCacheCreateInfoEXT);
pAllocator @6 :List(VkAllocationCallbacks);
pValidationCache @7 :List(UInt64);
}

struct VkDestroyValidationCacheEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
validationCache @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkGetValidationCacheDataEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
validationCache @5 :UInt64;
pDataSize @6 :List(UInt64);
pData @7 :List(UInt64);
}

struct VkMergeValidationCachesEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
dstCache @5 :UInt64;
srcCacheCount @6 :UInt64;
pSrcCaches @7 :List(UInt64);
}

struct VkGetDescriptorSetLayoutSupport {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pCreateInfo @5 :List(VkDescriptorSetLayoutCreateInfo);
pSupport @6 :List(VkDescriptorSetLayoutSupport);
}

struct VkGetSwapchainGrallocUsageANDROID {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
format @5 :Int64;
imageUsage @6 :Int64;
grallocUsage @7 :List(Int64);
}

struct VkGetSwapchainGrallocUsage2ANDROID {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
format @5 :Int64;
imageUsage @6 :Int64;
swapchainImageUsage @7 :Int64;
grallocConsumerUsage @8 :List(UInt64);
grallocProducerUsage @9 :List(UInt64);
}

struct VkAcquireImageANDROID {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
image @5 :UInt64;
nativeFenceFd @6 :Int64;
semaphore @7 :UInt64;
fence @8 :UInt64;
}

struct VkQueueSignalReleaseImageANDROID {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
queue @4 :UInt64;
waitSemaphoreCount @5 :UInt64;
pWaitSemaphores @6 :List(UInt64);
image @7 :UInt64;
pNativeFenceFd @8 :List(Int64);
}

struct VkGetShaderInfoAMD {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pipeline @5 :UInt64;
shaderStage @6 :Int64;
infoType @7 :Int64;
pInfoSize @8 :List(UInt64);
pInfo @9 :List(UInt64);
}

struct VkSetLocalDimmingAMD {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
swapChain @5 :UInt64;
localDimmingEnable @6 :UInt64;
}

struct VkGetPhysicalDeviceCalibrateableTimeDomainsEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pTimeDomainCount @5 :List(UInt64);
pTimeDomains @6 :List(Int64);
}

struct VkGetCalibratedTimestampsEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
timestampCount @5 :UInt64;
pTimestampInfos @6 :List(VkCalibratedTimestampInfoEXT);
pTimestamps @7 :List(UInt64);
pMaxDeviation @8 :List(UInt64);
}

struct VkSetDebugUtilsObjectNameEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pNameInfo @5 :List(VkDebugUtilsObjectNameInfoEXT);
}

struct VkSetDebugUtilsObjectTagEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pTagInfo @5 :List(VkDebugUtilsObjectTagInfoEXT);
}

struct VkQueueBeginDebugUtilsLabelEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
queue @4 :UInt64;
pLabelInfo @5 :List(VkDebugUtilsLabelEXT);
}

struct VkQueueEndDebugUtilsLabelEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
queue @4 :UInt64;
}

struct VkQueueInsertDebugUtilsLabelEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
queue @4 :UInt64;
pLabelInfo @5 :List(VkDebugUtilsLabelEXT);
}

struct VkCmdBeginDebugUtilsLabelEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pLabelInfo @5 :List(VkDebugUtilsLabelEXT);
}

struct VkCmdEndDebugUtilsLabelEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
}

struct VkCmdInsertDebugUtilsLabelEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pLabelInfo @5 :List(VkDebugUtilsLabelEXT);
}

struct VkCreateDebugUtilsMessengerEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
instance @4 :UInt64;
pCreateInfo @5 :List(VkDebugUtilsMessengerCreateInfoEXT);
pAllocator @6 :List(VkAllocationCallbacks);
pMessenger @7 :List(UInt64);
}

struct VkDestroyDebugUtilsMessengerEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
instance @4 :UInt64;
messenger @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkSubmitDebugUtilsMessageEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
instance @4 :UInt64;
messageSeverity @5 :Int64;
messageTypes @6 :Int64;
pCallbackData @7 :List(VkDebugUtilsMessengerCallbackDataEXT);
}

struct VkGetMemoryHostPointerPropertiesEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
handleType @5 :Int64;
pHostPointer @6 :List(UInt64);
pMemoryHostPointerProperties @7 :List(VkMemoryHostPointerPropertiesEXT);
}

struct VkCmdWriteBufferMarkerAMD {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pipelineStage @5 :Int64;
dstBuffer @6 :UInt64;
dstOffset @7 :UInt64;
marker @8 :UInt64;
}

struct VkCreateRenderPass2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkRenderPassCreateInfo2);
pAllocator @6 :List(VkAllocationCallbacks);
pRenderPass @7 :List(UInt64);
}

struct VkCmdBeginRenderPass2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pRenderPassBegin @5 :List(VkRenderPassBeginInfo);
pSubpassBeginInfo @6 :List(VkSubpassBeginInfo);
}

struct VkCmdNextSubpass2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pSubpassBeginInfo @5 :List(VkSubpassBeginInfo);
pSubpassEndInfo @6 :List(VkSubpassEndInfo);
}

struct VkCmdEndRenderPass2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pSubpassEndInfo @5 :List(VkSubpassEndInfo);
}

struct VkGetSemaphoreCounterValue {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
semaphore @5 :UInt64;
pValue @6 :List(UInt64);
}

struct VkWaitSemaphores {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pWaitInfo @5 :List(VkSemaphoreWaitInfo);
timeout @6 :UInt64;
}

struct VkSignalSemaphore {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pSignalInfo @5 :List(VkSemaphoreSignalInfo);
}

struct VkGetAndroidHardwareBufferPropertiesANDROID {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
buffer @5 :List(UInt64);
pProperties @6 :List(VkAndroidHardwareBufferPropertiesANDROID);
}

struct VkGetMemoryAndroidHardwareBufferANDROID {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pInfo @5 :List(VkMemoryGetAndroidHardwareBufferInfoANDROID);
pBuffer @6 :List(List(UInt64));
}

struct VkCmdDrawIndirectCount {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
buffer @5 :UInt64;
offset @6 :UInt64;
countBuffer @7 :UInt64;
countBufferOffset @8 :UInt64;
maxDrawCount @9 :UInt64;
stride @10 :UInt64;
}

struct VkCmdDrawIndexedIndirectCount {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
buffer @5 :UInt64;
offset @6 :UInt64;
countBuffer @7 :UInt64;
countBufferOffset @8 :UInt64;
maxDrawCount @9 :UInt64;
stride @10 :UInt64;
}

struct VkCmdSetCheckpointNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pCheckpointMarker @5 :List(UInt64);
}

struct VkGetQueueCheckpointDataNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
queue @4 :UInt64;
pCheckpointDataCount @5 :List(UInt64);
pCheckpointData @6 :List(VkCheckpointDataNV);
}

struct VkCmdBindTransformFeedbackBuffersEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
firstBinding @5 :UInt64;
bindingCount @6 :UInt64;
pBuffers @7 :List(UInt64);
pOffsets @8 :List(UInt64);
pSizes @9 :List(UInt64);
}

struct VkCmdBeginTransformFeedbackEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
firstCounterBuffer @5 :UInt64;
counterBufferCount @6 :UInt64;
pCounterBuffers @7 :List(UInt64);
pCounterBufferOffsets @8 :List(UInt64);
}

struct VkCmdEndTransformFeedbackEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
firstCounterBuffer @5 :UInt64;
counterBufferCount @6 :UInt64;
pCounterBuffers @7 :List(UInt64);
pCounterBufferOffsets @8 :List(UInt64);
}

struct VkCmdBeginQueryIndexedEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
queryPool @5 :UInt64;
query @6 :UInt64;
flags @7 :Int64;
index @8 :UInt64;
}

struct VkCmdEndQueryIndexedEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
queryPool @5 :UInt64;
query @6 :UInt64;
index @7 :UInt64;
}

struct VkCmdDrawIndirectByteCountEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
instanceCount @5 :UInt64;
firstInstance @6 :UInt64;
counterBuffer @7 :UInt64;
counterBufferOffset @8 :UInt64;
counterOffset @9 :UInt64;
vertexStride @10 :UInt64;
}

struct VkCmdSetExclusiveScissorNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
firstExclusiveScissor @5 :UInt64;
exclusiveScissorCount @6 :UInt64;
pExclusiveScissors @7 :List(VkRect2D);
}

struct VkCmdSetExclusiveScissorEnableNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
firstExclusiveScissor @5 :UInt64;
exclusiveScissorCount @6 :UInt64;
pExclusiveScissorEnables @7 :List(UInt64);
}

struct VkCmdBindShadingRateImageNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
imageView @5 :UInt64;
imageLayout @6 :Int64;
}

struct VkCmdSetViewportShadingRatePaletteNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
firstViewport @5 :UInt64;
viewportCount @6 :UInt64;
pShadingRatePalettes @7 :List(VkShadingRatePaletteNV);
}

struct VkCmdSetCoarseSampleOrderNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
sampleOrderType @5 :Int64;
customSampleOrderCount @6 :UInt64;
pCustomSampleOrders @7 :List(VkCoarseSampleOrderCustomNV);
}

struct VkCmdDrawMeshTasksNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
taskCount @5 :UInt64;
firstTask @6 :UInt64;
}

struct VkCmdDrawMeshTasksIndirectNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
buffer @5 :UInt64;
offset @6 :UInt64;
drawCount @7 :UInt64;
stride @8 :UInt64;
}

struct VkCmdDrawMeshTasksIndirectCountNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
buffer @5 :UInt64;
offset @6 :UInt64;
countBuffer @7 :UInt64;
countBufferOffset @8 :UInt64;
maxDrawCount @9 :UInt64;
stride @10 :UInt64;
}

struct VkCmdDrawMeshTasksEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
groupCountX @5 :UInt64;
groupCountY @6 :UInt64;
groupCountZ @7 :UInt64;
}

struct VkCmdDrawMeshTasksIndirectEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
buffer @5 :UInt64;
offset @6 :UInt64;
drawCount @7 :UInt64;
stride @8 :UInt64;
}

struct VkCmdDrawMeshTasksIndirectCountEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
buffer @5 :UInt64;
offset @6 :UInt64;
countBuffer @7 :UInt64;
countBufferOffset @8 :UInt64;
maxDrawCount @9 :UInt64;
stride @10 :UInt64;
}

struct VkCompileDeferredNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pipeline @5 :UInt64;
shader @6 :UInt64;
}

struct VkCreateAccelerationStructureNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkAccelerationStructureCreateInfoNV);
pAllocator @6 :List(VkAllocationCallbacks);
pAccelerationStructure @7 :List(UInt64);
}

struct VkCmdBindInvocationMaskHUAWEI {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
imageView @5 :UInt64;
imageLayout @6 :Int64;
}

struct VkDestroyAccelerationStructureKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
accelerationStructure @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkDestroyAccelerationStructureNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
accelerationStructure @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkGetAccelerationStructureMemoryRequirementsNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pInfo @5 :List(VkAccelerationStructureMemoryRequirementsInfoNV);
pMemoryRequirements @6 :List(VkMemoryRequirements2);
}

struct VkBindAccelerationStructureMemoryNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
bindInfoCount @5 :UInt64;
pBindInfos @6 :List(VkBindAccelerationStructureMemoryInfoNV);
}

struct VkCmdCopyAccelerationStructureNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
dst @5 :UInt64;
src @6 :UInt64;
mode @7 :Int64;
}

struct VkCmdCopyAccelerationStructureKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pInfo @5 :List(VkCopyAccelerationStructureInfoKHR);
}

struct VkCopyAccelerationStructureKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
deferredOperation @5 :UInt64;
pInfo @6 :List(VkCopyAccelerationStructureInfoKHR);
}

struct VkCmdCopyAccelerationStructureToMemoryKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pInfo @5 :List(VkCopyAccelerationStructureToMemoryInfoKHR);
}

struct VkCopyAccelerationStructureToMemoryKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
deferredOperation @5 :UInt64;
pInfo @6 :List(VkCopyAccelerationStructureToMemoryInfoKHR);
}

struct VkCmdCopyMemoryToAccelerationStructureKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pInfo @5 :List(VkCopyMemoryToAccelerationStructureInfoKHR);
}

struct VkCopyMemoryToAccelerationStructureKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
deferredOperation @5 :UInt64;
pInfo @6 :List(VkCopyMemoryToAccelerationStructureInfoKHR);
}

struct VkCmdWriteAccelerationStructuresPropertiesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
accelerationStructureCount @5 :UInt64;
pAccelerationStructures @6 :List(UInt64);
queryType @7 :Int64;
queryPool @8 :UInt64;
firstQuery @9 :UInt64;
}

struct VkCmdWriteAccelerationStructuresPropertiesNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
accelerationStructureCount @5 :UInt64;
pAccelerationStructures @6 :List(UInt64);
queryType @7 :Int64;
queryPool @8 :UInt64;
firstQuery @9 :UInt64;
}

struct VkCmdBuildAccelerationStructureNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pInfo @5 :List(VkAccelerationStructureInfoNV);
instanceData @6 :UInt64;
instanceOffset @7 :UInt64;
update @8 :UInt64;
dst @9 :UInt64;
src @10 :UInt64;
scratch @11 :UInt64;
scratchOffset @12 :UInt64;
}

struct VkWriteAccelerationStructuresPropertiesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
accelerationStructureCount @5 :UInt64;
pAccelerationStructures @6 :List(UInt64);
queryType @7 :Int64;
dataSize @8 :UInt64;
pData @9 :List(UInt64);
stride @10 :UInt64;
}

struct VkCmdTraceRaysKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pRaygenShaderBindingTable @5 :List(VkStridedDeviceAddressRegionKHR);
pMissShaderBindingTable @6 :List(VkStridedDeviceAddressRegionKHR);
pHitShaderBindingTable @7 :List(VkStridedDeviceAddressRegionKHR);
pCallableShaderBindingTable @8 :List(VkStridedDeviceAddressRegionKHR);
width @9 :UInt64;
height @10 :UInt64;
depth @11 :UInt64;
}

struct VkCmdTraceRaysNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
raygenShaderBindingTableBuffer @5 :UInt64;
raygenShaderBindingOffset @6 :UInt64;
missShaderBindingTableBuffer @7 :UInt64;
missShaderBindingOffset @8 :UInt64;
missShaderBindingStride @9 :UInt64;
hitShaderBindingTableBuffer @10 :UInt64;
hitShaderBindingOffset @11 :UInt64;
hitShaderBindingStride @12 :UInt64;
callableShaderBindingTableBuffer @13 :UInt64;
callableShaderBindingOffset @14 :UInt64;
callableShaderBindingStride @15 :UInt64;
width @16 :UInt64;
height @17 :UInt64;
depth @18 :UInt64;
}

struct VkGetRayTracingShaderGroupHandlesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pipeline @5 :UInt64;
firstGroup @6 :UInt64;
groupCount @7 :UInt64;
dataSize @8 :UInt64;
pData @9 :List(UInt64);
}

struct VkGetRayTracingCaptureReplayShaderGroupHandlesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pipeline @5 :UInt64;
firstGroup @6 :UInt64;
groupCount @7 :UInt64;
dataSize @8 :UInt64;
pData @9 :List(UInt64);
}

struct VkGetAccelerationStructureHandleNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
accelerationStructure @5 :UInt64;
dataSize @6 :UInt64;
pData @7 :List(UInt64);
}

struct VkCreateRayTracingPipelinesNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pipelineCache @5 :UInt64;
createInfoCount @6 :UInt64;
pCreateInfos @7 :List(VkRayTracingPipelineCreateInfoNV);
pAllocator @8 :List(VkAllocationCallbacks);
pPipelines @9 :List(UInt64);
}

struct VkCreateRayTracingPipelinesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
deferredOperation @5 :UInt64;
pipelineCache @6 :UInt64;
createInfoCount @7 :UInt64;
pCreateInfos @8 :List(VkRayTracingPipelineCreateInfoKHR);
pAllocator @9 :List(VkAllocationCallbacks);
pPipelines @10 :List(UInt64);
}

struct VkGetPhysicalDeviceCooperativeMatrixPropertiesNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pPropertyCount @5 :List(UInt64);
pProperties @6 :List(VkCooperativeMatrixPropertiesNV);
}

struct VkCmdTraceRaysIndirectKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pRaygenShaderBindingTable @5 :List(VkStridedDeviceAddressRegionKHR);
pMissShaderBindingTable @6 :List(VkStridedDeviceAddressRegionKHR);
pHitShaderBindingTable @7 :List(VkStridedDeviceAddressRegionKHR);
pCallableShaderBindingTable @8 :List(VkStridedDeviceAddressRegionKHR);
indirectDeviceAddress @9 :UInt64;
}

struct VkCmdTraceRaysIndirect2KHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
indirectDeviceAddress @5 :UInt64;
}

struct VkGetDeviceAccelerationStructureCompatibilityKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pVersionInfo @5 :List(VkAccelerationStructureVersionInfoKHR);
pCompatibility @6 :List(Int64);
}

struct VkGetRayTracingShaderGroupStackSizeKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pipeline @5 :UInt64;
group @6 :UInt64;
groupShader @7 :Int64;
}

struct VkCmdSetRayTracingPipelineStackSizeKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pipelineStackSize @5 :UInt64;
}

struct VkGetImageViewHandleNVX {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pInfo @5 :List(VkImageViewHandleInfoNVX);
}

struct VkGetImageViewAddressNVX {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
imageView @5 :UInt64;
pProperties @6 :List(VkImageViewAddressPropertiesNVX);
}

struct VkGetPhysicalDeviceSurfacePresentModes2EXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pSurfaceInfo @5 :List(VkPhysicalDeviceSurfaceInfo2KHR);
pPresentModeCount @6 :List(UInt64);
pPresentModes @7 :List(Int64);
}

struct VkGetDeviceGroupSurfacePresentModes2EXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pSurfaceInfo @5 :List(VkPhysicalDeviceSurfaceInfo2KHR);
pModes @6 :List(Int64);
}

struct VkAcquireFullScreenExclusiveModeEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
swapchain @5 :UInt64;
}

struct VkReleaseFullScreenExclusiveModeEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
swapchain @5 :UInt64;
}

struct VkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
queueFamilyIndex @5 :UInt64;
pCounterCount @6 :List(UInt64);
pCounters @7 :List(VkPerformanceCounterKHR);
pCounterDescriptions @8 :List(VkPerformanceCounterDescriptionKHR);
}

struct VkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
physicalDevice @4 :UInt64;
pPerformanceQueryCreateInfo @5 :List(VkQueryPoolPerformanceCreateInfoKHR);
pNumPasses @6 :List(UInt64);
}

struct VkAcquireProfilingLockKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pInfo @5 :List(VkAcquireProfilingLockInfoKHR);
}

struct VkReleaseProfilingLockKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
}

struct VkGetImageDrmFormatModifierPropertiesEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
image @5 :UInt64;
pProperties @6 :List(VkImageDrmFormatModifierPropertiesEXT);
}

struct VkGetBufferOpaqueCaptureAddress {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pInfo @5 :List(VkBufferDeviceAddressInfo);
}

struct VkGetBufferDeviceAddress {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pInfo @5 :List(VkBufferDeviceAddressInfo);
}

struct VkCreateHeadlessSurfaceEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
instance @4 :UInt64;
pCreateInfo @5 :List(VkHeadlessSurfaceCreateInfoEXT);
pAllocator @6 :List(VkAllocationCallbacks);
pSurface @7 :List(UInt64);
}

struct VkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pCombinationCount @5 :List(UInt64);
pCombinations @6 :List(VkFramebufferMixedSamplesCombinationNV);
}

struct VkInitializePerformanceApiINTEL {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pInitializeInfo @5 :List(VkInitializePerformanceApiInfoINTEL);
}

struct VkUninitializePerformanceApiINTEL {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
}

struct VkCmdSetPerformanceMarkerINTEL {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
commandBuffer @4 :UInt64;
pMarkerInfo @5 :List(VkPerformanceMarkerInfoINTEL);
}

struct VkCmdSetPerformanceStreamMarkerINTEL {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
commandBuffer @4 :UInt64;
pMarkerInfo @5 :List(VkPerformanceStreamMarkerInfoINTEL);
}

struct VkCmdSetPerformanceOverrideINTEL {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
commandBuffer @4 :UInt64;
pOverrideInfo @5 :List(VkPerformanceOverrideInfoINTEL);
}

struct VkAcquirePerformanceConfigurationINTEL {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pAcquireInfo @5 :List(VkPerformanceConfigurationAcquireInfoINTEL);
pConfiguration @6 :List(UInt64);
}

struct VkReleasePerformanceConfigurationINTEL {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
configuration @5 :UInt64;
}

struct VkQueueSetPerformanceConfigurationINTEL {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
queue @4 :UInt64;
configuration @5 :UInt64;
}

struct VkGetPerformanceParameterINTEL {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
parameter @5 :Int64;
pValue @6 :List(VkPerformanceValueINTEL);
}

struct VkGetDeviceMemoryOpaqueCaptureAddress {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pInfo @5 :List(VkDeviceMemoryOpaqueCaptureAddressInfo);
}

struct VkGetPipelineExecutablePropertiesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pPipelineInfo @5 :List(VkPipelineInfoKHR);
pExecutableCount @6 :List(UInt64);
pProperties @7 :List(VkPipelineExecutablePropertiesKHR);
}

struct VkGetPipelineExecutableStatisticsKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pExecutableInfo @5 :List(VkPipelineExecutableInfoKHR);
pStatisticCount @6 :List(UInt64);
pStatistics @7 :List(VkPipelineExecutableStatisticKHR);
}

struct VkGetPipelineExecutableInternalRepresentationsKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pExecutableInfo @5 :List(VkPipelineExecutableInfoKHR);
pInternalRepresentationCount @6 :List(UInt64);
pInternalRepresentations @7 :List(VkPipelineExecutableInternalRepresentationKHR);
}

struct VkCmdSetLineStippleEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
lineStippleFactor @5 :UInt64;
lineStipplePattern @6 :UInt64;
}

struct VkGetFaultData {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
faultQueryBehavior @5 :Int64;
pUnrecordedFaults @6 :List(UInt64);
pFaultCount @7 :List(UInt64);
pFaults @8 :List(VkFaultData);
}

struct VkGetPhysicalDeviceToolProperties {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pToolCount @5 :List(UInt64);
pToolProperties @6 :List(VkPhysicalDeviceToolProperties);
}

struct VkCreateAccelerationStructureKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkAccelerationStructureCreateInfoKHR);
pAllocator @6 :List(VkAllocationCallbacks);
pAccelerationStructure @7 :List(UInt64);
}

struct VkCmdBuildAccelerationStructuresKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
infoCount @5 :UInt64;
pInfos @6 :List(VkAccelerationStructureBuildGeometryInfoKHR);
ppBuildRangeInfos @7 :List(VkAccelerationStructureBuildRangeInfoKHR);
}

struct VkCmdBuildAccelerationStructuresIndirectKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
infoCount @5 :UInt64;
pInfos @6 :List(VkAccelerationStructureBuildGeometryInfoKHR);
pIndirectDeviceAddresses @7 :List(UInt64);
pIndirectStrides @8 :List(UInt64);
ppMaxPrimitiveCounts @9 :List(UInt64);
}

struct VkBuildAccelerationStructuresKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
deferredOperation @5 :UInt64;
infoCount @6 :UInt64;
pInfos @7 :List(VkAccelerationStructureBuildGeometryInfoKHR);
ppBuildRangeInfos @8 :List(VkAccelerationStructureBuildRangeInfoKHR);
}

struct VkGetAccelerationStructureDeviceAddressKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pInfo @5 :List(VkAccelerationStructureDeviceAddressInfoKHR);
}

struct VkCreateDeferredOperationKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pAllocator @5 :List(VkAllocationCallbacks);
pDeferredOperation @6 :List(UInt64);
}

struct VkDestroyDeferredOperationKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
operation @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkGetDeferredOperationMaxConcurrencyKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
operation @5 :UInt64;
}

struct VkGetDeferredOperationResultKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
operation @5 :UInt64;
}

struct VkDeferredOperationJoinKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
operation @5 :UInt64;
}

struct VkGetPipelineIndirectMemoryRequirementsNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pCreateInfo @5 :List(VkComputePipelineCreateInfo);
pMemoryRequirements @6 :List(VkMemoryRequirements2);
}

struct VkGetPipelineIndirectDeviceAddressNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pInfo @5 :List(VkPipelineIndirectDeviceAddressInfoNV);
}

struct VkCmdSetCullMode {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
cullMode @5 :Int64;
}

struct VkCmdSetFrontFace {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
frontFace @5 :Int64;
}

struct VkCmdSetPrimitiveTopology {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
primitiveTopology @5 :Int64;
}

struct VkCmdSetViewportWithCount {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
viewportCount @5 :UInt64;
pViewports @6 :List(VkViewport);
}

struct VkCmdSetScissorWithCount {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
scissorCount @5 :UInt64;
pScissors @6 :List(VkRect2D);
}

struct VkCmdBindIndexBuffer2KHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
buffer @5 :UInt64;
offset @6 :UInt64;
size @7 :UInt64;
indexType @8 :Int64;
}

struct VkCmdBindVertexBuffers2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
firstBinding @5 :UInt64;
bindingCount @6 :UInt64;
pBuffers @7 :List(UInt64);
pOffsets @8 :List(UInt64);
pSizes @9 :List(UInt64);
pStrides @10 :List(UInt64);
}

struct VkCmdSetDepthTestEnable {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
depthTestEnable @5 :UInt64;
}

struct VkCmdSetDepthWriteEnable {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
depthWriteEnable @5 :UInt64;
}

struct VkCmdSetDepthCompareOp {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
depthCompareOp @5 :Int64;
}

struct VkCmdSetDepthBoundsTestEnable {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
depthBoundsTestEnable @5 :UInt64;
}

struct VkCmdSetStencilTestEnable {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
stencilTestEnable @5 :UInt64;
}

struct VkCmdSetStencilOp {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
faceMask @5 :Int64;
failOp @6 :Int64;
passOp @7 :Int64;
depthFailOp @8 :Int64;
compareOp @9 :Int64;
}

struct VkCmdSetPatchControlPointsEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
patchControlPoints @5 :UInt64;
}

struct VkCmdSetRasterizerDiscardEnable {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
rasterizerDiscardEnable @5 :UInt64;
}

struct VkCmdSetDepthBiasEnable {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
depthBiasEnable @5 :UInt64;
}

struct VkCmdSetLogicOpEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
logicOp @5 :Int64;
}

struct VkCmdSetPrimitiveRestartEnable {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
primitiveRestartEnable @5 :UInt64;
}

struct VkCmdSetTessellationDomainOriginEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
domainOrigin @5 :Int64;
}

struct VkCmdSetDepthClampEnableEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
depthClampEnable @5 :UInt64;
}

struct VkCmdSetPolygonModeEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
polygonMode @5 :Int64;
}

struct VkCmdSetRasterizationSamplesEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
rasterizationSamples @5 :Int64;
}

struct VkCmdSetSampleMaskEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
samples @5 :Int64;
pSampleMask @6 :List(UInt64);
}

struct VkCmdSetAlphaToCoverageEnableEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
alphaToCoverageEnable @5 :UInt64;
}

struct VkCmdSetAlphaToOneEnableEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
alphaToOneEnable @5 :UInt64;
}

struct VkCmdSetLogicOpEnableEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
logicOpEnable @5 :UInt64;
}

struct VkCmdSetColorBlendEnableEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
firstAttachment @5 :UInt64;
attachmentCount @6 :UInt64;
pColorBlendEnables @7 :List(UInt64);
}

struct VkCmdSetColorBlendEquationEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
firstAttachment @5 :UInt64;
attachmentCount @6 :UInt64;
pColorBlendEquations @7 :List(VkColorBlendEquationEXT);
}

struct VkCmdSetColorWriteMaskEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
firstAttachment @5 :UInt64;
attachmentCount @6 :UInt64;
pColorWriteMasks @7 :List(Int64);
}

struct VkCmdSetRasterizationStreamEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
rasterizationStream @5 :UInt64;
}

struct VkCmdSetConservativeRasterizationModeEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
conservativeRasterizationMode @5 :Int64;
}

struct VkCmdSetExtraPrimitiveOverestimationSizeEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
extraPrimitiveOverestimationSize @5 :Float32;
}

struct VkCmdSetDepthClipEnableEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
depthClipEnable @5 :UInt64;
}

struct VkCmdSetSampleLocationsEnableEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
sampleLocationsEnable @5 :UInt64;
}

struct VkCmdSetColorBlendAdvancedEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
firstAttachment @5 :UInt64;
attachmentCount @6 :UInt64;
pColorBlendAdvanced @7 :List(VkColorBlendAdvancedEXT);
}

struct VkCmdSetProvokingVertexModeEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
provokingVertexMode @5 :Int64;
}

struct VkCmdSetLineRasterizationModeEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
lineRasterizationMode @5 :Int64;
}

struct VkCmdSetLineStippleEnableEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
stippledLineEnable @5 :UInt64;
}

struct VkCmdSetDepthClipNegativeOneToOneEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
negativeOneToOne @5 :UInt64;
}

struct VkCmdSetViewportWScalingEnableNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
viewportWScalingEnable @5 :UInt64;
}

struct VkCmdSetViewportSwizzleNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
firstViewport @5 :UInt64;
viewportCount @6 :UInt64;
pViewportSwizzles @7 :List(VkViewportSwizzleNV);
}

struct VkCmdSetCoverageToColorEnableNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
coverageToColorEnable @5 :UInt64;
}

struct VkCmdSetCoverageToColorLocationNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
coverageToColorLocation @5 :UInt64;
}

struct VkCmdSetCoverageModulationModeNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
coverageModulationMode @5 :Int64;
}

struct VkCmdSetCoverageModulationTableEnableNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
coverageModulationTableEnable @5 :UInt64;
}

struct VkCmdSetCoverageModulationTableNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
coverageModulationTableCount @5 :UInt64;
pCoverageModulationTable @6 :List(Float32);
}

struct VkCmdSetShadingRateImageEnableNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
shadingRateImageEnable @5 :UInt64;
}

struct VkCmdSetCoverageReductionModeNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
coverageReductionMode @5 :Int64;
}

struct VkCmdSetRepresentativeFragmentTestEnableNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
representativeFragmentTestEnable @5 :UInt64;
}

struct VkCreatePrivateDataSlot {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkPrivateDataSlotCreateInfo);
pAllocator @6 :List(VkAllocationCallbacks);
pPrivateDataSlot @7 :List(UInt64);
}

struct VkDestroyPrivateDataSlot {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
privateDataSlot @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkSetPrivateData {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
objectType @5 :Int64;
objectHandle @6 :UInt64;
privateDataSlot @7 :UInt64;
data @8 :UInt64;
}

struct VkGetPrivateData {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
objectType @5 :Int64;
objectHandle @6 :UInt64;
privateDataSlot @7 :UInt64;
pData @8 :List(UInt64);
}

struct VkCmdCopyBuffer2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pCopyBufferInfo @5 :List(VkCopyBufferInfo2);
}

struct VkCmdCopyImage2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pCopyImageInfo @5 :List(VkCopyImageInfo2);
}

struct VkCmdBlitImage2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pBlitImageInfo @5 :List(VkBlitImageInfo2);
}

struct VkCmdCopyBufferToImage2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pCopyBufferToImageInfo @5 :List(VkCopyBufferToImageInfo2);
}

struct VkCmdCopyImageToBuffer2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pCopyImageToBufferInfo @5 :List(VkCopyImageToBufferInfo2);
}

struct VkCmdResolveImage2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pResolveImageInfo @5 :List(VkResolveImageInfo2);
}

struct VkCmdRefreshObjectsKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pRefreshObjects @5 :List(VkRefreshObjectListKHR);
}

struct VkGetPhysicalDeviceRefreshableObjectTypesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pRefreshableObjectTypeCount @5 :List(UInt64);
pRefreshableObjectTypes @6 :List(Int64);
}

struct VkCmdSetFragmentShadingRateKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pFragmentSize @5 :List(VkExtent2D);
combinerOps @6 :List(Int64);
}

struct VkGetPhysicalDeviceFragmentShadingRatesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pFragmentShadingRateCount @5 :List(UInt64);
pFragmentShadingRates @6 :List(VkPhysicalDeviceFragmentShadingRateKHR);
}

struct VkCmdSetFragmentShadingRateEnumNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
shadingRate @5 :Int64;
combinerOps @6 :List(Int64);
}

struct VkGetAccelerationStructureBuildSizesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
buildType @5 :Int64;
pBuildInfo @6 :List(VkAccelerationStructureBuildGeometryInfoKHR);
pMaxPrimitiveCounts @7 :List(UInt64);
pSizeInfo @8 :List(VkAccelerationStructureBuildSizesInfoKHR);
}

struct VkCmdSetVertexInputEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
vertexBindingDescriptionCount @5 :UInt64;
pVertexBindingDescriptions @6 :List(VkVertexInputBindingDescription2EXT);
vertexAttributeDescriptionCount @7 :UInt64;
pVertexAttributeDescriptions @8 :List(VkVertexInputAttributeDescription2EXT);
}

struct VkCmdSetColorWriteEnableEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
attachmentCount @5 :UInt64;
pColorWriteEnables @6 :List(UInt64);
}

struct VkCmdSetEvent2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
event @5 :UInt64;
pDependencyInfo @6 :List(VkDependencyInfo);
}

struct VkCmdResetEvent2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
event @5 :UInt64;
stageMask @6 :Int64;
}

struct VkCmdWaitEvents2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
eventCount @5 :UInt64;
pEvents @6 :List(UInt64);
pDependencyInfos @7 :List(VkDependencyInfo);
}

struct VkCmdPipelineBarrier2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pDependencyInfo @5 :List(VkDependencyInfo);
}

struct VkQueueSubmit2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
queue @4 :UInt64;
submitCount @5 :UInt64;
pSubmits @6 :List(VkSubmitInfo2);
fence @7 :UInt64;
}

struct VkCmdWriteTimestamp2 {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
stage @5 :Int64;
queryPool @6 :UInt64;
query @7 :UInt64;
}

struct VkCmdWriteBufferMarker2AMD {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
stage @5 :Int64;
dstBuffer @6 :UInt64;
dstOffset @7 :UInt64;
marker @8 :UInt64;
}

struct VkGetQueueCheckpointData2NV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
queue @4 :UInt64;
pCheckpointDataCount @5 :List(UInt64);
pCheckpointData @6 :List(VkCheckpointData2NV);
}

struct VkCopyMemoryToImageEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCopyMemoryToImageInfo @5 :List(VkCopyMemoryToImageInfoEXT);
}

struct VkCopyImageToMemoryEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCopyImageToMemoryInfo @5 :List(VkCopyImageToMemoryInfoEXT);
}

struct VkCopyImageToImageEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCopyImageToImageInfo @5 :List(VkCopyImageToImageInfoEXT);
}

struct VkTransitionImageLayoutEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
transitionCount @5 :UInt64;
pTransitions @6 :List(VkHostImageLayoutTransitionInfoEXT);
}

struct VkGetCommandPoolMemoryConsumption {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
commandPool @5 :UInt64;
commandBuffer @6 :UInt64;
pConsumption @7 :List(VkCommandPoolMemoryConsumption);
}

struct VkGetPhysicalDeviceVideoCapabilitiesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pVideoProfile @5 :List(VkVideoProfileInfoKHR);
pCapabilities @6 :List(VkVideoCapabilitiesKHR);
}

struct VkGetPhysicalDeviceVideoFormatPropertiesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pVideoFormatInfo @5 :List(VkPhysicalDeviceVideoFormatInfoKHR);
pVideoFormatPropertyCount @6 :List(UInt64);
pVideoFormatProperties @7 :List(VkVideoFormatPropertiesKHR);
}

struct VkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pQualityLevelInfo @5 :List(VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR);
pQualityLevelProperties @6 :List(VkVideoEncodeQualityLevelPropertiesKHR);
}

struct VkCreateVideoSessionKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkVideoSessionCreateInfoKHR);
pAllocator @6 :List(VkAllocationCallbacks);
pVideoSession @7 :List(UInt64);
}

struct VkDestroyVideoSessionKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
videoSession @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkCreateVideoSessionParametersKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkVideoSessionParametersCreateInfoKHR);
pAllocator @6 :List(VkAllocationCallbacks);
pVideoSessionParameters @7 :List(UInt64);
}

struct VkUpdateVideoSessionParametersKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
videoSessionParameters @5 :UInt64;
pUpdateInfo @6 :List(VkVideoSessionParametersUpdateInfoKHR);
}

struct VkGetEncodedVideoSessionParametersKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pVideoSessionParametersInfo @5 :List(VkVideoEncodeSessionParametersGetInfoKHR);
pFeedbackInfo @6 :List(VkVideoEncodeSessionParametersFeedbackInfoKHR);
pDataSize @7 :List(UInt64);
pData @8 :List(UInt64);
}

struct VkDestroyVideoSessionParametersKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
videoSessionParameters @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkGetVideoSessionMemoryRequirementsKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
videoSession @5 :UInt64;
pMemoryRequirementsCount @6 :List(UInt64);
pMemoryRequirements @7 :List(VkVideoSessionMemoryRequirementsKHR);
}

struct VkBindVideoSessionMemoryKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
videoSession @5 :UInt64;
bindSessionMemoryInfoCount @6 :UInt64;
pBindSessionMemoryInfos @7 :List(VkBindVideoSessionMemoryInfoKHR);
}

struct VkCmdDecodeVideoKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pDecodeInfo @5 :List(VkVideoDecodeInfoKHR);
}

struct VkCmdBeginVideoCodingKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pBeginInfo @5 :List(VkVideoBeginCodingInfoKHR);
}

struct VkCmdControlVideoCodingKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pCodingControlInfo @5 :List(VkVideoCodingControlInfoKHR);
}

struct VkCmdEndVideoCodingKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pEndCodingInfo @5 :List(VkVideoEndCodingInfoKHR);
}

struct VkCmdEncodeVideoKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pEncodeInfo @5 :List(VkVideoEncodeInfoKHR);
}

struct VkCmdDecompressMemoryNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
decompressRegionCount @5 :UInt64;
pDecompressMemoryRegions @6 :List(VkDecompressMemoryRegionNV);
}

struct VkCmdDecompressMemoryIndirectCountNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
indirectCommandsAddress @5 :UInt64;
indirectCommandsCountAddress @6 :UInt64;
stride @7 :UInt64;
}

struct VkCreateCuModuleNVX {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkCuModuleCreateInfoNVX);
pAllocator @6 :List(VkAllocationCallbacks);
pModule @7 :List(UInt64);
}

struct VkCreateCuFunctionNVX {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkCuFunctionCreateInfoNVX);
pAllocator @6 :List(VkAllocationCallbacks);
pFunction @7 :List(UInt64);
}

struct VkDestroyCuModuleNVX {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
module @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkDestroyCuFunctionNVX {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
function @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkCmdCuLaunchKernelNVX {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pLaunchInfo @5 :List(VkCuLaunchInfoNVX);
}

struct VkGetDescriptorSetLayoutSizeEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
layout @5 :UInt64;
pLayoutSizeInBytes @6 :List(UInt64);
}

struct VkGetDescriptorSetLayoutBindingOffsetEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
layout @5 :UInt64;
binding @6 :UInt64;
pOffset @7 :List(UInt64);
}

struct VkGetDescriptorEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pDescriptorInfo @5 :List(VkDescriptorGetInfoEXT);
dataSize @6 :UInt64;
pDescriptor @7 :List(UInt64);
}

struct VkCmdBindDescriptorBuffersEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
bufferCount @5 :UInt64;
pBindingInfos @6 :List(VkDescriptorBufferBindingInfoEXT);
}

struct VkCmdSetDescriptorBufferOffsetsEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pipelineBindPoint @5 :Int64;
layout @6 :UInt64;
firstSet @7 :UInt64;
setCount @8 :UInt64;
pBufferIndices @9 :List(UInt64);
pOffsets @10 :List(UInt64);
}

struct VkCmdBindDescriptorBufferEmbeddedSamplersEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pipelineBindPoint @5 :Int64;
layout @6 :UInt64;
set @7 :UInt64;
}

struct VkGetBufferOpaqueCaptureDescriptorDataEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pInfo @5 :List(VkBufferCaptureDescriptorDataInfoEXT);
pData @6 :List(UInt64);
}

struct VkGetImageOpaqueCaptureDescriptorDataEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pInfo @5 :List(VkImageCaptureDescriptorDataInfoEXT);
pData @6 :List(UInt64);
}

struct VkGetImageViewOpaqueCaptureDescriptorDataEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pInfo @5 :List(VkImageViewCaptureDescriptorDataInfoEXT);
pData @6 :List(UInt64);
}

struct VkGetSamplerOpaqueCaptureDescriptorDataEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pInfo @5 :List(VkSamplerCaptureDescriptorDataInfoEXT);
pData @6 :List(UInt64);
}

struct VkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pInfo @5 :List(VkAccelerationStructureCaptureDescriptorDataInfoEXT);
pData @6 :List(UInt64);
}

struct VkSetDeviceMemoryPriorityEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
memory @5 :UInt64;
priority @6 :Float32;
}

struct VkAcquireDrmDisplayEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
drmFd @5 :Int64;
display @6 :UInt64;
}

struct VkGetDrmDisplayEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
drmFd @5 :Int64;
connectorId @6 :UInt64;
display @7 :List(UInt64);
}

struct VkWaitForPresentKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
swapchain @5 :UInt64;
presentId @6 :UInt64;
timeout @7 :UInt64;
}

struct VkCreateBufferCollectionFUCHSIA {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkBufferCollectionCreateInfoFUCHSIA);
pAllocator @6 :List(VkAllocationCallbacks);
pCollection @7 :List(UInt64);
}

struct VkSetBufferCollectionBufferConstraintsFUCHSIA {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
collection @5 :UInt64;
pBufferConstraintsInfo @6 :List(VkBufferConstraintsInfoFUCHSIA);
}

struct VkSetBufferCollectionImageConstraintsFUCHSIA {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
collection @5 :UInt64;
pImageConstraintsInfo @6 :List(VkImageConstraintsInfoFUCHSIA);
}

struct VkDestroyBufferCollectionFUCHSIA {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
collection @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkGetBufferCollectionPropertiesFUCHSIA {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
collection @5 :UInt64;
pProperties @6 :List(VkBufferCollectionPropertiesFUCHSIA);
}

struct VkCmdBeginRendering {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pRenderingInfo @5 :List(VkRenderingInfo);
}

struct VkCmdEndRendering {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
}

struct VkGetDescriptorSetLayoutHostMappingInfoVALVE {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pBindingReference @5 :List(VkDescriptorSetBindingReferenceVALVE);
pHostMapping @6 :List(VkDescriptorSetLayoutHostMappingInfoVALVE);
}

struct VkGetDescriptorSetHostMappingVALVE {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
descriptorSet @5 :UInt64;
ppData @6 :List(List(UInt64));
}

struct VkCreateMicromapEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkMicromapCreateInfoEXT);
pAllocator @6 :List(VkAllocationCallbacks);
pMicromap @7 :List(UInt64);
}

struct VkCmdBuildMicromapsEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
infoCount @5 :UInt64;
pInfos @6 :List(VkMicromapBuildInfoEXT);
}

struct VkBuildMicromapsEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
deferredOperation @5 :UInt64;
infoCount @6 :UInt64;
pInfos @7 :List(VkMicromapBuildInfoEXT);
}

struct VkDestroyMicromapEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
micromap @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkCmdCopyMicromapEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pInfo @5 :List(VkCopyMicromapInfoEXT);
}

struct VkCopyMicromapEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
deferredOperation @5 :UInt64;
pInfo @6 :List(VkCopyMicromapInfoEXT);
}

struct VkCmdCopyMicromapToMemoryEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pInfo @5 :List(VkCopyMicromapToMemoryInfoEXT);
}

struct VkCopyMicromapToMemoryEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
deferredOperation @5 :UInt64;
pInfo @6 :List(VkCopyMicromapToMemoryInfoEXT);
}

struct VkCmdCopyMemoryToMicromapEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pInfo @5 :List(VkCopyMemoryToMicromapInfoEXT);
}

struct VkCopyMemoryToMicromapEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
deferredOperation @5 :UInt64;
pInfo @6 :List(VkCopyMemoryToMicromapInfoEXT);
}

struct VkCmdWriteMicromapsPropertiesEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
micromapCount @5 :UInt64;
pMicromaps @6 :List(UInt64);
queryType @7 :Int64;
queryPool @8 :UInt64;
firstQuery @9 :UInt64;
}

struct VkWriteMicromapsPropertiesEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
micromapCount @5 :UInt64;
pMicromaps @6 :List(UInt64);
queryType @7 :Int64;
dataSize @8 :UInt64;
pData @9 :List(UInt64);
stride @10 :UInt64;
}

struct VkGetDeviceMicromapCompatibilityEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pVersionInfo @5 :List(VkMicromapVersionInfoEXT);
pCompatibility @6 :List(Int64);
}

struct VkGetMicromapBuildSizesEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
buildType @5 :Int64;
pBuildInfo @6 :List(VkMicromapBuildInfoEXT);
pSizeInfo @7 :List(VkMicromapBuildSizesInfoEXT);
}

struct VkGetShaderModuleIdentifierEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
shaderModule @5 :UInt64;
pIdentifier @6 :List(VkShaderModuleIdentifierEXT);
}

struct VkGetShaderModuleCreateInfoIdentifierEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pCreateInfo @5 :List(VkShaderModuleCreateInfo);
pIdentifier @6 :List(VkShaderModuleIdentifierEXT);
}

struct VkGetImageSubresourceLayout2KHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
image @5 :UInt64;
pSubresource @6 :List(VkImageSubresource2KHR);
pLayout @7 :List(VkSubresourceLayout2KHR);
}

struct VkGetPipelinePropertiesEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pPipelineInfo @5 :List(VkPipelineInfoKHR);
pPipelineProperties @6 :List(VkBaseOutStructure);
}

struct VkExportMetalObjectsEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pMetalObjectsInfo @5 :List(VkExportMetalObjectsInfoEXT);
}

struct VkGetFramebufferTilePropertiesQCOM {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
framebuffer @5 :UInt64;
pPropertiesCount @6 :List(UInt64);
pProperties @7 :List(VkTilePropertiesQCOM);
}

struct VkGetDynamicRenderingTilePropertiesQCOM {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pRenderingInfo @5 :List(VkRenderingInfo);
pProperties @6 :List(VkTilePropertiesQCOM);
}

struct VkGetPhysicalDeviceOpticalFlowImageFormatsNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pOpticalFlowImageFormatInfo @5 :List(VkOpticalFlowImageFormatInfoNV);
pFormatCount @6 :List(UInt64);
pImageFormatProperties @7 :List(VkOpticalFlowImageFormatPropertiesNV);
}

struct VkCreateOpticalFlowSessionNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pCreateInfo @5 :List(VkOpticalFlowSessionCreateInfoNV);
pAllocator @6 :List(VkAllocationCallbacks);
pSession @7 :List(UInt64);
}

struct VkDestroyOpticalFlowSessionNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
session @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkBindOpticalFlowSessionImageNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
session @5 :UInt64;
bindingPoint @6 :Int64;
view @7 :UInt64;
layout @8 :Int64;
}

struct VkCmdOpticalFlowExecuteNV {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
session @5 :UInt64;
pExecuteInfo @6 :List(VkOpticalFlowExecuteInfoNV);
}

struct VkGetDeviceFaultInfoEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pFaultCounts @5 :List(VkDeviceFaultCountsEXT);
pFaultInfo @6 :List(VkDeviceFaultInfoEXT);
}

struct VkCmdSetDepthBias2EXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
pDepthBiasInfo @5 :List(VkDepthBiasInfoEXT);
}

struct VkReleaseSwapchainImagesEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pReleaseInfo @5 :List(VkReleaseSwapchainImagesInfoEXT);
}

struct VkGetDeviceImageSubresourceLayoutKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
pInfo @5 :List(VkDeviceImageSubresourceInfoKHR);
pLayout @6 :List(VkSubresourceLayout2KHR);
}

struct VkMapMemory2KHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pMemoryMapInfo @5 :List(VkMemoryMapInfoKHR);
ppData @6 :List(List(UInt64));
}

struct VkUnmapMemory2KHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pMemoryUnmapInfo @5 :List(VkMemoryUnmapInfoKHR);
}

struct VkCreateShadersEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
createInfoCount @5 :UInt64;
pCreateInfos @6 :List(VkShaderCreateInfoEXT);
pAllocator @7 :List(VkAllocationCallbacks);
pShaders @8 :List(UInt64);
}

struct VkDestroyShaderEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
device @4 :UInt64;
shader @5 :UInt64;
pAllocator @6 :List(VkAllocationCallbacks);
}

struct VkGetShaderBinaryDataEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
shader @5 :UInt64;
pDataSize @6 :List(UInt64);
pData @7 :List(UInt64);
}

struct VkCmdBindShadersEXT {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
stageCount @5 :UInt64;
pStages @6 :List(Int64);
pShaders @7 :List(UInt64);
}

struct VkGetScreenBufferPropertiesQNX {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
buffer @5 :List(UInt64);
pProperties @6 :List(VkScreenBufferPropertiesQNX);
}

struct VkGetPhysicalDeviceCooperativeMatrixPropertiesKHR {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
physicalDevice @4 :UInt64;
pPropertyCount @5 :List(UInt64);
pProperties @6 :List(VkCooperativeMatrixPropertiesKHR);
}

struct VkGetExecutionGraphPipelineScratchSizeAMDX {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
executionGraph @5 :UInt64;
pSizeInfo @6 :List(VkExecutionGraphPipelineScratchSizeAMDX);
}

struct VkGetExecutionGraphPipelineNodeIndexAMDX {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
executionGraph @5 :UInt64;
pNodeInfo @6 :List(VkPipelineShaderStageNodeCreateInfoAMDX);
pNodeIndex @7 :List(UInt64);
}

struct VkCreateExecutionGraphPipelinesAMDX {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :Int64;
device @4 :UInt64;
pipelineCache @5 :UInt64;
createInfoCount @6 :UInt64;
pCreateInfos @7 :List(VkExecutionGraphPipelineCreateInfoAMDX);
pAllocator @8 :List(VkAllocationCallbacks);
pPipelines @9 :List(UInt64);
}

struct VkCmdInitializeGraphScratchMemoryAMDX {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
scratch @5 :UInt64;
}

struct VkCmdDispatchGraphAMDX {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
scratch @5 :UInt64;
pCountInfo @6 :List(VkDispatchGraphCountInfoAMDX);
}

struct VkCmdDispatchGraphIndirectAMDX {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
scratch @5 :UInt64;
pCountInfo @6 :List(VkDispatchGraphCountInfoAMDX);
}

struct VkCmdDispatchGraphIndirectCountAMDX {
parent :union {
device @0 :UInt64;
instance @1 :UInt64;
}
mem @2 :UInt64;
result @3 :UInt64;
commandBuffer @4 :UInt64;
scratch @5 :UInt64;
countInfo @6 :UInt64;
}

struct PNext {
union {
none @0 :Void;
vkBaseOutStructure @1 :VkBaseOutStructure;
vkBaseInStructure @2 :VkBaseInStructure;
vkOffset2D @3 :VkOffset2D;
vkOffset3D @4 :VkOffset3D;
vkExtent2D @5 :VkExtent2D;
vkExtent3D @6 :VkExtent3D;
vkViewport @7 :VkViewport;
vkRect2D @8 :VkRect2D;
vkClearRect @9 :VkClearRect;
vkComponentMapping @10 :VkComponentMapping;
vkPhysicalDeviceProperties @11 :VkPhysicalDeviceProperties;
vkExtensionProperties @12 :VkExtensionProperties;
vkLayerProperties @13 :VkLayerProperties;
vkApplicationInfo @14 :VkApplicationInfo;
vkAllocationCallbacks @15 :VkAllocationCallbacks;
vkDeviceQueueCreateInfo @16 :VkDeviceQueueCreateInfo;
vkDeviceCreateInfo @17 :VkDeviceCreateInfo;
vkInstanceCreateInfo @18 :VkInstanceCreateInfo;
vkQueueFamilyProperties @19 :VkQueueFamilyProperties;
vkPhysicalDeviceMemoryProperties @20 :VkPhysicalDeviceMemoryProperties;
vkMemoryAllocateInfo @21 :VkMemoryAllocateInfo;
vkMemoryRequirements @22 :VkMemoryRequirements;
vkSparseImageFormatProperties @23 :VkSparseImageFormatProperties;
vkSparseImageMemoryRequirements @24 :VkSparseImageMemoryRequirements;
vkMemoryType @25 :VkMemoryType;
vkMemoryHeap @26 :VkMemoryHeap;
vkMappedMemoryRange @27 :VkMappedMemoryRange;
vkFormatProperties @28 :VkFormatProperties;
vkImageFormatProperties @29 :VkImageFormatProperties;
vkDescriptorBufferInfo @30 :VkDescriptorBufferInfo;
vkDescriptorImageInfo @31 :VkDescriptorImageInfo;
vkWriteDescriptorSet @32 :VkWriteDescriptorSet;
vkCopyDescriptorSet @33 :VkCopyDescriptorSet;
vkBufferUsageFlags2CreateInfoKHR @34 :VkBufferUsageFlags2CreateInfoKHR;
vkBufferCreateInfo @35 :VkBufferCreateInfo;
vkBufferViewCreateInfo @36 :VkBufferViewCreateInfo;
vkImageSubresource @37 :VkImageSubresource;
vkImageSubresourceLayers @38 :VkImageSubresourceLayers;
vkImageSubresourceRange @39 :VkImageSubresourceRange;
vkMemoryBarrier @40 :VkMemoryBarrier;
vkBufferMemoryBarrier @41 :VkBufferMemoryBarrier;
vkImageMemoryBarrier @42 :VkImageMemoryBarrier;
vkImageCreateInfo @43 :VkImageCreateInfo;
vkSubresourceLayout @44 :VkSubresourceLayout;
vkImageViewCreateInfo @45 :VkImageViewCreateInfo;
vkBufferCopy @46 :VkBufferCopy;
vkSparseMemoryBind @47 :VkSparseMemoryBind;
vkSparseImageMemoryBind @48 :VkSparseImageMemoryBind;
vkSparseBufferMemoryBindInfo @49 :VkSparseBufferMemoryBindInfo;
vkSparseImageOpaqueMemoryBindInfo @50 :VkSparseImageOpaqueMemoryBindInfo;
vkSparseImageMemoryBindInfo @51 :VkSparseImageMemoryBindInfo;
vkBindSparseInfo @52 :VkBindSparseInfo;
vkImageCopy @53 :VkImageCopy;
vkImageBlit @54 :VkImageBlit;
vkBufferImageCopy @55 :VkBufferImageCopy;
vkCopyMemoryIndirectCommandNV @56 :VkCopyMemoryIndirectCommandNV;
vkCopyMemoryToImageIndirectCommandNV @57 :VkCopyMemoryToImageIndirectCommandNV;
vkImageResolve @58 :VkImageResolve;
vkShaderModuleCreateInfo @59 :VkShaderModuleCreateInfo;
vkDescriptorSetLayoutBinding @60 :VkDescriptorSetLayoutBinding;
vkDescriptorSetLayoutCreateInfo @61 :VkDescriptorSetLayoutCreateInfo;
vkDescriptorPoolSize @62 :VkDescriptorPoolSize;
vkDescriptorPoolCreateInfo @63 :VkDescriptorPoolCreateInfo;
vkDescriptorSetAllocateInfo @64 :VkDescriptorSetAllocateInfo;
vkSpecializationMapEntry @65 :VkSpecializationMapEntry;
vkSpecializationInfo @66 :VkSpecializationInfo;
vkPipelineShaderStageCreateInfo @67 :VkPipelineShaderStageCreateInfo;
vkComputePipelineCreateInfo @68 :VkComputePipelineCreateInfo;
vkComputePipelineIndirectBufferInfoNV @69 :VkComputePipelineIndirectBufferInfoNV;
vkPipelineCreateFlags2CreateInfoKHR @70 :VkPipelineCreateFlags2CreateInfoKHR;
vkVertexInputBindingDescription @71 :VkVertexInputBindingDescription;
vkVertexInputAttributeDescription @72 :VkVertexInputAttributeDescription;
vkPipelineVertexInputStateCreateInfo @73 :VkPipelineVertexInputStateCreateInfo;
vkPipelineInputAssemblyStateCreateInfo @74 :VkPipelineInputAssemblyStateCreateInfo;
vkPipelineTessellationStateCreateInfo @75 :VkPipelineTessellationStateCreateInfo;
vkPipelineViewportStateCreateInfo @76 :VkPipelineViewportStateCreateInfo;
vkPipelineRasterizationStateCreateInfo @77 :VkPipelineRasterizationStateCreateInfo;
vkPipelineMultisampleStateCreateInfo @78 :VkPipelineMultisampleStateCreateInfo;
vkPipelineColorBlendAttachmentState @79 :VkPipelineColorBlendAttachmentState;
vkPipelineColorBlendStateCreateInfo @80 :VkPipelineColorBlendStateCreateInfo;
vkPipelineDynamicStateCreateInfo @81 :VkPipelineDynamicStateCreateInfo;
vkStencilOpState @82 :VkStencilOpState;
vkPipelineDepthStencilStateCreateInfo @83 :VkPipelineDepthStencilStateCreateInfo;
vkGraphicsPipelineCreateInfo @84 :VkGraphicsPipelineCreateInfo;
vkPipelineCacheCreateInfo @85 :VkPipelineCacheCreateInfo;
vkPipelineCacheHeaderVersionOne @86 :VkPipelineCacheHeaderVersionOne;
vkPipelineCacheStageValidationIndexEntry @87 :VkPipelineCacheStageValidationIndexEntry;
vkPipelineCacheSafetyCriticalIndexEntry @88 :VkPipelineCacheSafetyCriticalIndexEntry;
vkPipelineCacheHeaderVersionSafetyCriticalOne @89 :VkPipelineCacheHeaderVersionSafetyCriticalOne;
vkPushConstantRange @90 :VkPushConstantRange;
vkPipelineLayoutCreateInfo @91 :VkPipelineLayoutCreateInfo;
vkSamplerCreateInfo @92 :VkSamplerCreateInfo;
vkCommandPoolCreateInfo @93 :VkCommandPoolCreateInfo;
vkCommandBufferAllocateInfo @94 :VkCommandBufferAllocateInfo;
vkCommandBufferInheritanceInfo @95 :VkCommandBufferInheritanceInfo;
vkCommandBufferBeginInfo @96 :VkCommandBufferBeginInfo;
vkRenderPassBeginInfo @97 :VkRenderPassBeginInfo;
vkClearColorValue @98 :VkClearColorValue;
vkClearDepthStencilValue @99 :VkClearDepthStencilValue;
vkClearValue @100 :VkClearValue;
vkClearAttachment @101 :VkClearAttachment;
vkAttachmentDescription @102 :VkAttachmentDescription;
vkAttachmentReference @103 :VkAttachmentReference;
vkSubpassDescription @104 :VkSubpassDescription;
vkSubpassDependency @105 :VkSubpassDependency;
vkRenderPassCreateInfo @106 :VkRenderPassCreateInfo;
vkEventCreateInfo @107 :VkEventCreateInfo;
vkFenceCreateInfo @108 :VkFenceCreateInfo;
vkPhysicalDeviceFeatures @109 :VkPhysicalDeviceFeatures;
vkPhysicalDeviceSparseProperties @110 :VkPhysicalDeviceSparseProperties;
vkPhysicalDeviceLimits @111 :VkPhysicalDeviceLimits;
vkSemaphoreCreateInfo @112 :VkSemaphoreCreateInfo;
vkQueryPoolCreateInfo @113 :VkQueryPoolCreateInfo;
vkFramebufferCreateInfo @114 :VkFramebufferCreateInfo;
vkDrawIndirectCommand @115 :VkDrawIndirectCommand;
vkDrawIndexedIndirectCommand @116 :VkDrawIndexedIndirectCommand;
vkDispatchIndirectCommand @117 :VkDispatchIndirectCommand;
vkMultiDrawInfoEXT @118 :VkMultiDrawInfoEXT;
vkMultiDrawIndexedInfoEXT @119 :VkMultiDrawIndexedInfoEXT;
vkSubmitInfo @120 :VkSubmitInfo;
vkDisplayPropertiesKHR @121 :VkDisplayPropertiesKHR;
vkDisplayPlanePropertiesKHR @122 :VkDisplayPlanePropertiesKHR;
vkDisplayModeParametersKHR @123 :VkDisplayModeParametersKHR;
vkDisplayModePropertiesKHR @124 :VkDisplayModePropertiesKHR;
vkDisplayModeCreateInfoKHR @125 :VkDisplayModeCreateInfoKHR;
vkDisplayPlaneCapabilitiesKHR @126 :VkDisplayPlaneCapabilitiesKHR;
vkDisplaySurfaceCreateInfoKHR @127 :VkDisplaySurfaceCreateInfoKHR;
vkDisplayPresentInfoKHR @128 :VkDisplayPresentInfoKHR;
vkSurfaceCapabilitiesKHR @129 :VkSurfaceCapabilitiesKHR;
vkAndroidSurfaceCreateInfoKHR @130 :VkAndroidSurfaceCreateInfoKHR;
vkViSurfaceCreateInfoNN @131 :VkViSurfaceCreateInfoNN;
vkWaylandSurfaceCreateInfoKHR @132 :VkWaylandSurfaceCreateInfoKHR;
vkWin32SurfaceCreateInfoKHR @133 :VkWin32SurfaceCreateInfoKHR;
vkXlibSurfaceCreateInfoKHR @134 :VkXlibSurfaceCreateInfoKHR;
vkXcbSurfaceCreateInfoKHR @135 :VkXcbSurfaceCreateInfoKHR;
vkDirectFBSurfaceCreateInfoEXT @136 :VkDirectFBSurfaceCreateInfoEXT;
vkImagePipeSurfaceCreateInfoFUCHSIA @137 :VkImagePipeSurfaceCreateInfoFUCHSIA;
vkStreamDescriptorSurfaceCreateInfoGGP @138 :VkStreamDescriptorSurfaceCreateInfoGGP;
vkScreenSurfaceCreateInfoQNX @139 :VkScreenSurfaceCreateInfoQNX;
vkSurfaceFormatKHR @140 :VkSurfaceFormatKHR;
vkSwapchainCreateInfoKHR @141 :VkSwapchainCreateInfoKHR;
vkPresentInfoKHR @142 :VkPresentInfoKHR;
vkDebugReportCallbackCreateInfoEXT @143 :VkDebugReportCallbackCreateInfoEXT;
vkValidationFlagsEXT @144 :VkValidationFlagsEXT;
vkValidationFeaturesEXT @145 :VkValidationFeaturesEXT;
vkApplicationParametersEXT @146 :VkApplicationParametersEXT;
vkPipelineRasterizationStateRasterizationOrderAMD @147 :VkPipelineRasterizationStateRasterizationOrderAMD;
vkDebugMarkerObjectNameInfoEXT @148 :VkDebugMarkerObjectNameInfoEXT;
vkDebugMarkerObjectTagInfoEXT @149 :VkDebugMarkerObjectTagInfoEXT;
vkDebugMarkerMarkerInfoEXT @150 :VkDebugMarkerMarkerInfoEXT;
vkDedicatedAllocationImageCreateInfoNV @151 :VkDedicatedAllocationImageCreateInfoNV;
vkDedicatedAllocationBufferCreateInfoNV @152 :VkDedicatedAllocationBufferCreateInfoNV;
vkDedicatedAllocationMemoryAllocateInfoNV @153 :VkDedicatedAllocationMemoryAllocateInfoNV;
vkExternalImageFormatPropertiesNV @154 :VkExternalImageFormatPropertiesNV;
vkExternalMemoryImageCreateInfoNV @155 :VkExternalMemoryImageCreateInfoNV;
vkExportMemoryAllocateInfoNV @156 :VkExportMemoryAllocateInfoNV;
vkImportMemoryWin32HandleInfoNV @157 :VkImportMemoryWin32HandleInfoNV;
vkExportMemoryWin32HandleInfoNV @158 :VkExportMemoryWin32HandleInfoNV;
vkExportMemorySciBufInfoNV @159 :VkExportMemorySciBufInfoNV;
vkImportMemorySciBufInfoNV @160 :VkImportMemorySciBufInfoNV;
vkMemoryGetSciBufInfoNV @161 :VkMemoryGetSciBufInfoNV;
vkMemorySciBufPropertiesNV @162 :VkMemorySciBufPropertiesNV;
vkPhysicalDeviceExternalMemorySciBufFeaturesNV @163 :VkPhysicalDeviceExternalMemorySciBufFeaturesNV;
vkWin32KeyedMutexAcquireReleaseInfoNV @164 :VkWin32KeyedMutexAcquireReleaseInfoNV;
vkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV @165 :VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV;
vkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV @166 :VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV;
vkDevicePrivateDataCreateInfo @167 :VkDevicePrivateDataCreateInfo;
vkPrivateDataSlotCreateInfo @168 :VkPrivateDataSlotCreateInfo;
vkPhysicalDevicePrivateDataFeatures @169 :VkPhysicalDevicePrivateDataFeatures;
vkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV @170 :VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV;
vkPhysicalDeviceMultiDrawPropertiesEXT @171 :VkPhysicalDeviceMultiDrawPropertiesEXT;
vkGraphicsShaderGroupCreateInfoNV @172 :VkGraphicsShaderGroupCreateInfoNV;
vkGraphicsPipelineShaderGroupsCreateInfoNV @173 :VkGraphicsPipelineShaderGroupsCreateInfoNV;
vkBindShaderGroupIndirectCommandNV @174 :VkBindShaderGroupIndirectCommandNV;
vkBindIndexBufferIndirectCommandNV @175 :VkBindIndexBufferIndirectCommandNV;
vkBindVertexBufferIndirectCommandNV @176 :VkBindVertexBufferIndirectCommandNV;
vkSetStateFlagsIndirectCommandNV @177 :VkSetStateFlagsIndirectCommandNV;
vkIndirectCommandsStreamNV @178 :VkIndirectCommandsStreamNV;
vkIndirectCommandsLayoutTokenNV @179 :VkIndirectCommandsLayoutTokenNV;
vkIndirectCommandsLayoutCreateInfoNV @180 :VkIndirectCommandsLayoutCreateInfoNV;
vkGeneratedCommandsInfoNV @181 :VkGeneratedCommandsInfoNV;
vkGeneratedCommandsMemoryRequirementsInfoNV @182 :VkGeneratedCommandsMemoryRequirementsInfoNV;
vkPipelineIndirectDeviceAddressInfoNV @183 :VkPipelineIndirectDeviceAddressInfoNV;
vkBindPipelineIndirectCommandNV @184 :VkBindPipelineIndirectCommandNV;
vkPhysicalDeviceFeatures2 @185 :VkPhysicalDeviceFeatures2;
vkPhysicalDeviceProperties2 @186 :VkPhysicalDeviceProperties2;
vkFormatProperties2 @187 :VkFormatProperties2;
vkImageFormatProperties2 @188 :VkImageFormatProperties2;
vkPhysicalDeviceImageFormatInfo2 @189 :VkPhysicalDeviceImageFormatInfo2;
vkQueueFamilyProperties2 @190 :VkQueueFamilyProperties2;
vkPhysicalDeviceMemoryProperties2 @191 :VkPhysicalDeviceMemoryProperties2;
vkSparseImageFormatProperties2 @192 :VkSparseImageFormatProperties2;
vkPhysicalDeviceSparseImageFormatInfo2 @193 :VkPhysicalDeviceSparseImageFormatInfo2;
vkPhysicalDevicePushDescriptorPropertiesKHR @194 :VkPhysicalDevicePushDescriptorPropertiesKHR;
vkConformanceVersion @195 :VkConformanceVersion;
vkPhysicalDeviceDriverProperties @196 :VkPhysicalDeviceDriverProperties;
vkPresentRegionsKHR @197 :VkPresentRegionsKHR;
vkPresentRegionKHR @198 :VkPresentRegionKHR;
vkRectLayerKHR @199 :VkRectLayerKHR;
vkPhysicalDeviceVariablePointersFeatures @200 :VkPhysicalDeviceVariablePointersFeatures;
vkExternalMemoryProperties @201 :VkExternalMemoryProperties;
vkPhysicalDeviceExternalImageFormatInfo @202 :VkPhysicalDeviceExternalImageFormatInfo;
vkExternalImageFormatProperties @203 :VkExternalImageFormatProperties;
vkPhysicalDeviceExternalBufferInfo @204 :VkPhysicalDeviceExternalBufferInfo;
vkExternalBufferProperties @205 :VkExternalBufferProperties;
vkPhysicalDeviceIDProperties @206 :VkPhysicalDeviceIDProperties;
vkExternalMemoryImageCreateInfo @207 :VkExternalMemoryImageCreateInfo;
vkExternalMemoryBufferCreateInfo @208 :VkExternalMemoryBufferCreateInfo;
vkExportMemoryAllocateInfo @209 :VkExportMemoryAllocateInfo;
vkImportMemoryWin32HandleInfoKHR @210 :VkImportMemoryWin32HandleInfoKHR;
vkExportMemoryWin32HandleInfoKHR @211 :VkExportMemoryWin32HandleInfoKHR;
vkImportMemoryZirconHandleInfoFUCHSIA @212 :VkImportMemoryZirconHandleInfoFUCHSIA;
vkMemoryZirconHandlePropertiesFUCHSIA @213 :VkMemoryZirconHandlePropertiesFUCHSIA;
vkMemoryGetZirconHandleInfoFUCHSIA @214 :VkMemoryGetZirconHandleInfoFUCHSIA;
vkMemoryWin32HandlePropertiesKHR @215 :VkMemoryWin32HandlePropertiesKHR;
vkMemoryGetWin32HandleInfoKHR @216 :VkMemoryGetWin32HandleInfoKHR;
vkImportMemoryFdInfoKHR @217 :VkImportMemoryFdInfoKHR;
vkMemoryFdPropertiesKHR @218 :VkMemoryFdPropertiesKHR;
vkMemoryGetFdInfoKHR @219 :VkMemoryGetFdInfoKHR;
vkWin32KeyedMutexAcquireReleaseInfoKHR @220 :VkWin32KeyedMutexAcquireReleaseInfoKHR;
vkPhysicalDeviceExternalSemaphoreInfo @221 :VkPhysicalDeviceExternalSemaphoreInfo;
vkExternalSemaphoreProperties @222 :VkExternalSemaphoreProperties;
vkExportSemaphoreCreateInfo @223 :VkExportSemaphoreCreateInfo;
vkImportSemaphoreWin32HandleInfoKHR @224 :VkImportSemaphoreWin32HandleInfoKHR;
vkExportSemaphoreWin32HandleInfoKHR @225 :VkExportSemaphoreWin32HandleInfoKHR;
vkD3D12FenceSubmitInfoKHR @226 :VkD3D12FenceSubmitInfoKHR;
vkSemaphoreGetWin32HandleInfoKHR @227 :VkSemaphoreGetWin32HandleInfoKHR;
vkImportSemaphoreFdInfoKHR @228 :VkImportSemaphoreFdInfoKHR;
vkSemaphoreGetFdInfoKHR @229 :VkSemaphoreGetFdInfoKHR;
vkImportSemaphoreZirconHandleInfoFUCHSIA @230 :VkImportSemaphoreZirconHandleInfoFUCHSIA;
vkSemaphoreGetZirconHandleInfoFUCHSIA @231 :VkSemaphoreGetZirconHandleInfoFUCHSIA;
vkPhysicalDeviceExternalFenceInfo @232 :VkPhysicalDeviceExternalFenceInfo;
vkExternalFenceProperties @233 :VkExternalFenceProperties;
vkExportFenceCreateInfo @234 :VkExportFenceCreateInfo;
vkImportFenceWin32HandleInfoKHR @235 :VkImportFenceWin32HandleInfoKHR;
vkExportFenceWin32HandleInfoKHR @236 :VkExportFenceWin32HandleInfoKHR;
vkFenceGetWin32HandleInfoKHR @237 :VkFenceGetWin32HandleInfoKHR;
vkImportFenceFdInfoKHR @238 :VkImportFenceFdInfoKHR;
vkFenceGetFdInfoKHR @239 :VkFenceGetFdInfoKHR;
vkExportFenceSciSyncInfoNV @240 :VkExportFenceSciSyncInfoNV;
vkImportFenceSciSyncInfoNV @241 :VkImportFenceSciSyncInfoNV;
vkFenceGetSciSyncInfoNV @242 :VkFenceGetSciSyncInfoNV;
vkExportSemaphoreSciSyncInfoNV @243 :VkExportSemaphoreSciSyncInfoNV;
vkImportSemaphoreSciSyncInfoNV @244 :VkImportSemaphoreSciSyncInfoNV;
vkSemaphoreGetSciSyncInfoNV @245 :VkSemaphoreGetSciSyncInfoNV;
vkSciSyncAttributesInfoNV @246 :VkSciSyncAttributesInfoNV;
vkPhysicalDeviceExternalSciSyncFeaturesNV @247 :VkPhysicalDeviceExternalSciSyncFeaturesNV;
vkPhysicalDeviceExternalSciSync2FeaturesNV @248 :VkPhysicalDeviceExternalSciSync2FeaturesNV;
vkSemaphoreSciSyncPoolCreateInfoNV @249 :VkSemaphoreSciSyncPoolCreateInfoNV;
vkSemaphoreSciSyncCreateInfoNV @250 :VkSemaphoreSciSyncCreateInfoNV;
vkDeviceSemaphoreSciSyncPoolReservationCreateInfoNV @251 :VkDeviceSemaphoreSciSyncPoolReservationCreateInfoNV;
vkPhysicalDeviceMultiviewFeatures @252 :VkPhysicalDeviceMultiviewFeatures;
vkPhysicalDeviceMultiviewProperties @253 :VkPhysicalDeviceMultiviewProperties;
vkRenderPassMultiviewCreateInfo @254 :VkRenderPassMultiviewCreateInfo;
vkSurfaceCapabilities2EXT @255 :VkSurfaceCapabilities2EXT;
vkDisplayPowerInfoEXT @256 :VkDisplayPowerInfoEXT;
vkDeviceEventInfoEXT @257 :VkDeviceEventInfoEXT;
vkDisplayEventInfoEXT @258 :VkDisplayEventInfoEXT;
vkSwapchainCounterCreateInfoEXT @259 :VkSwapchainCounterCreateInfoEXT;
vkPhysicalDeviceGroupProperties @260 :VkPhysicalDeviceGroupProperties;
vkMemoryAllocateFlagsInfo @261 :VkMemoryAllocateFlagsInfo;
vkBindBufferMemoryInfo @262 :VkBindBufferMemoryInfo;
vkBindBufferMemoryDeviceGroupInfo @263 :VkBindBufferMemoryDeviceGroupInfo;
vkBindImageMemoryInfo @264 :VkBindImageMemoryInfo;
vkBindImageMemoryDeviceGroupInfo @265 :VkBindImageMemoryDeviceGroupInfo;
vkDeviceGroupRenderPassBeginInfo @266 :VkDeviceGroupRenderPassBeginInfo;
vkDeviceGroupCommandBufferBeginInfo @267 :VkDeviceGroupCommandBufferBeginInfo;
vkDeviceGroupSubmitInfo @268 :VkDeviceGroupSubmitInfo;
vkDeviceGroupBindSparseInfo @269 :VkDeviceGroupBindSparseInfo;
vkDeviceGroupPresentCapabilitiesKHR @270 :VkDeviceGroupPresentCapabilitiesKHR;
vkImageSwapchainCreateInfoKHR @271 :VkImageSwapchainCreateInfoKHR;
vkBindImageMemorySwapchainInfoKHR @272 :VkBindImageMemorySwapchainInfoKHR;
vkAcquireNextImageInfoKHR @273 :VkAcquireNextImageInfoKHR;
vkDeviceGroupPresentInfoKHR @274 :VkDeviceGroupPresentInfoKHR;
vkDeviceGroupDeviceCreateInfo @275 :VkDeviceGroupDeviceCreateInfo;
vkDeviceGroupSwapchainCreateInfoKHR @276 :VkDeviceGroupSwapchainCreateInfoKHR;
vkDescriptorUpdateTemplateEntry @277 :VkDescriptorUpdateTemplateEntry;
vkDescriptorUpdateTemplateCreateInfo @278 :VkDescriptorUpdateTemplateCreateInfo;
vkXYColorEXT @279 :VkXYColorEXT;
vkPhysicalDevicePresentIdFeaturesKHR @280 :VkPhysicalDevicePresentIdFeaturesKHR;
vkPresentIdKHR @281 :VkPresentIdKHR;
vkPhysicalDevicePresentWaitFeaturesKHR @282 :VkPhysicalDevicePresentWaitFeaturesKHR;
vkHdrMetadataEXT @283 :VkHdrMetadataEXT;
vkDisplayNativeHdrSurfaceCapabilitiesAMD @284 :VkDisplayNativeHdrSurfaceCapabilitiesAMD;
vkSwapchainDisplayNativeHdrCreateInfoAMD @285 :VkSwapchainDisplayNativeHdrCreateInfoAMD;
vkRefreshCycleDurationGOOGLE @286 :VkRefreshCycleDurationGOOGLE;
vkPastPresentationTimingGOOGLE @287 :VkPastPresentationTimingGOOGLE;
vkPresentTimesInfoGOOGLE @288 :VkPresentTimesInfoGOOGLE;
vkPresentTimeGOOGLE @289 :VkPresentTimeGOOGLE;
vkIOSSurfaceCreateInfoMVK @290 :VkIOSSurfaceCreateInfoMVK;
vkMacOSSurfaceCreateInfoMVK @291 :VkMacOSSurfaceCreateInfoMVK;
vkMetalSurfaceCreateInfoEXT @292 :VkMetalSurfaceCreateInfoEXT;
vkViewportWScalingNV @293 :VkViewportWScalingNV;
vkPipelineViewportWScalingStateCreateInfoNV @294 :VkPipelineViewportWScalingStateCreateInfoNV;
vkViewportSwizzleNV @295 :VkViewportSwizzleNV;
vkPipelineViewportSwizzleStateCreateInfoNV @296 :VkPipelineViewportSwizzleStateCreateInfoNV;
vkPhysicalDeviceDiscardRectanglePropertiesEXT @297 :VkPhysicalDeviceDiscardRectanglePropertiesEXT;
vkPipelineDiscardRectangleStateCreateInfoEXT @298 :VkPipelineDiscardRectangleStateCreateInfoEXT;
vkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX @299 :VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX;
vkInputAttachmentAspectReference @300 :VkInputAttachmentAspectReference;
vkRenderPassInputAttachmentAspectCreateInfo @301 :VkRenderPassInputAttachmentAspectCreateInfo;
vkPhysicalDeviceSurfaceInfo2KHR @302 :VkPhysicalDeviceSurfaceInfo2KHR;
vkSurfaceCapabilities2KHR @303 :VkSurfaceCapabilities2KHR;
vkSurfaceFormat2KHR @304 :VkSurfaceFormat2KHR;
vkDisplayProperties2KHR @305 :VkDisplayProperties2KHR;
vkDisplayPlaneProperties2KHR @306 :VkDisplayPlaneProperties2KHR;
vkDisplayModeProperties2KHR @307 :VkDisplayModeProperties2KHR;
vkDisplayPlaneInfo2KHR @308 :VkDisplayPlaneInfo2KHR;
vkDisplayPlaneCapabilities2KHR @309 :VkDisplayPlaneCapabilities2KHR;
vkSharedPresentSurfaceCapabilitiesKHR @310 :VkSharedPresentSurfaceCapabilitiesKHR;
vkPhysicalDevice16BitStorageFeatures @311 :VkPhysicalDevice16BitStorageFeatures;
vkPhysicalDeviceSubgroupProperties @312 :VkPhysicalDeviceSubgroupProperties;
vkPhysicalDeviceShaderSubgroupExtendedTypesFeatures @313 :VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures;
vkBufferMemoryRequirementsInfo2 @314 :VkBufferMemoryRequirementsInfo2;
vkDeviceBufferMemoryRequirements @315 :VkDeviceBufferMemoryRequirements;
vkImageMemoryRequirementsInfo2 @316 :VkImageMemoryRequirementsInfo2;
vkImageSparseMemoryRequirementsInfo2 @317 :VkImageSparseMemoryRequirementsInfo2;
vkDeviceImageMemoryRequirements @318 :VkDeviceImageMemoryRequirements;
vkMemoryRequirements2 @319 :VkMemoryRequirements2;
vkSparseImageMemoryRequirements2 @320 :VkSparseImageMemoryRequirements2;
vkPhysicalDevicePointClippingProperties @321 :VkPhysicalDevicePointClippingProperties;
vkMemoryDedicatedRequirements @322 :VkMemoryDedicatedRequirements;
vkMemoryDedicatedAllocateInfo @323 :VkMemoryDedicatedAllocateInfo;
vkImageViewUsageCreateInfo @324 :VkImageViewUsageCreateInfo;
vkImageViewSlicedCreateInfoEXT @325 :VkImageViewSlicedCreateInfoEXT;
vkPipelineTessellationDomainOriginStateCreateInfo @326 :VkPipelineTessellationDomainOriginStateCreateInfo;
vkSamplerYcbcrConversionInfo @327 :VkSamplerYcbcrConversionInfo;
vkSamplerYcbcrConversionCreateInfo @328 :VkSamplerYcbcrConversionCreateInfo;
vkBindImagePlaneMemoryInfo @329 :VkBindImagePlaneMemoryInfo;
vkImagePlaneMemoryRequirementsInfo @330 :VkImagePlaneMemoryRequirementsInfo;
vkPhysicalDeviceSamplerYcbcrConversionFeatures @331 :VkPhysicalDeviceSamplerYcbcrConversionFeatures;
vkSamplerYcbcrConversionImageFormatProperties @332 :VkSamplerYcbcrConversionImageFormatProperties;
vkTextureLODGatherFormatPropertiesAMD @333 :VkTextureLODGatherFormatPropertiesAMD;
vkConditionalRenderingBeginInfoEXT @334 :VkConditionalRenderingBeginInfoEXT;
vkProtectedSubmitInfo @335 :VkProtectedSubmitInfo;
vkPhysicalDeviceProtectedMemoryFeatures @336 :VkPhysicalDeviceProtectedMemoryFeatures;
vkPhysicalDeviceProtectedMemoryProperties @337 :VkPhysicalDeviceProtectedMemoryProperties;
vkDeviceQueueInfo2 @338 :VkDeviceQueueInfo2;
vkPipelineCoverageToColorStateCreateInfoNV @339 :VkPipelineCoverageToColorStateCreateInfoNV;
vkPhysicalDeviceSamplerFilterMinmaxProperties @340 :VkPhysicalDeviceSamplerFilterMinmaxProperties;
vkSampleLocationEXT @341 :VkSampleLocationEXT;
vkSampleLocationsInfoEXT @342 :VkSampleLocationsInfoEXT;
vkAttachmentSampleLocationsEXT @343 :VkAttachmentSampleLocationsEXT;
vkSubpassSampleLocationsEXT @344 :VkSubpassSampleLocationsEXT;
vkRenderPassSampleLocationsBeginInfoEXT @345 :VkRenderPassSampleLocationsBeginInfoEXT;
vkPipelineSampleLocationsStateCreateInfoEXT @346 :VkPipelineSampleLocationsStateCreateInfoEXT;
vkPhysicalDeviceSampleLocationsPropertiesEXT @347 :VkPhysicalDeviceSampleLocationsPropertiesEXT;
vkMultisamplePropertiesEXT @348 :VkMultisamplePropertiesEXT;
vkSamplerReductionModeCreateInfo @349 :VkSamplerReductionModeCreateInfo;
vkPhysicalDeviceBlendOperationAdvancedFeaturesEXT @350 :VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT;
vkPhysicalDeviceMultiDrawFeaturesEXT @351 :VkPhysicalDeviceMultiDrawFeaturesEXT;
vkPhysicalDeviceBlendOperationAdvancedPropertiesEXT @352 :VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT;
vkPipelineColorBlendAdvancedStateCreateInfoEXT @353 :VkPipelineColorBlendAdvancedStateCreateInfoEXT;
vkPhysicalDeviceInlineUniformBlockFeatures @354 :VkPhysicalDeviceInlineUniformBlockFeatures;
vkPhysicalDeviceInlineUniformBlockProperties @355 :VkPhysicalDeviceInlineUniformBlockProperties;
vkWriteDescriptorSetInlineUniformBlock @356 :VkWriteDescriptorSetInlineUniformBlock;
vkDescriptorPoolInlineUniformBlockCreateInfo @357 :VkDescriptorPoolInlineUniformBlockCreateInfo;
vkPipelineCoverageModulationStateCreateInfoNV @358 :VkPipelineCoverageModulationStateCreateInfoNV;
vkImageFormatListCreateInfo @359 :VkImageFormatListCreateInfo;
vkValidationCacheCreateInfoEXT @360 :VkValidationCacheCreateInfoEXT;
vkShaderModuleValidationCacheCreateInfoEXT @361 :VkShaderModuleValidationCacheCreateInfoEXT;
vkPhysicalDeviceMaintenance3Properties @362 :VkPhysicalDeviceMaintenance3Properties;
vkPhysicalDeviceMaintenance4Features @363 :VkPhysicalDeviceMaintenance4Features;
vkPhysicalDeviceMaintenance4Properties @364 :VkPhysicalDeviceMaintenance4Properties;
vkPhysicalDeviceMaintenance5FeaturesKHR @365 :VkPhysicalDeviceMaintenance5FeaturesKHR;
vkPhysicalDeviceMaintenance5PropertiesKHR @366 :VkPhysicalDeviceMaintenance5PropertiesKHR;
vkRenderingAreaInfoKHR @367 :VkRenderingAreaInfoKHR;
vkDescriptorSetLayoutSupport @368 :VkDescriptorSetLayoutSupport;
vkPhysicalDeviceShaderDrawParametersFeatures @369 :VkPhysicalDeviceShaderDrawParametersFeatures;
vkPhysicalDeviceShaderFloat16Int8Features @370 :VkPhysicalDeviceShaderFloat16Int8Features;
vkPhysicalDeviceFloatControlsProperties @371 :VkPhysicalDeviceFloatControlsProperties;
vkPhysicalDeviceHostQueryResetFeatures @372 :VkPhysicalDeviceHostQueryResetFeatures;
vkNativeBufferUsage2ANDROID @373 :VkNativeBufferUsage2ANDROID;
vkNativeBufferANDROID @374 :VkNativeBufferANDROID;
vkSwapchainImageCreateInfoANDROID @375 :VkSwapchainImageCreateInfoANDROID;
vkPhysicalDevicePresentationPropertiesANDROID @376 :VkPhysicalDevicePresentationPropertiesANDROID;
vkShaderResourceUsageAMD @377 :VkShaderResourceUsageAMD;
vkShaderStatisticsInfoAMD @378 :VkShaderStatisticsInfoAMD;
vkDeviceQueueGlobalPriorityCreateInfoKHR @379 :VkDeviceQueueGlobalPriorityCreateInfoKHR;
vkPhysicalDeviceGlobalPriorityQueryFeaturesKHR @380 :VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR;
vkQueueFamilyGlobalPriorityPropertiesKHR @381 :VkQueueFamilyGlobalPriorityPropertiesKHR;
vkDebugUtilsObjectNameInfoEXT @382 :VkDebugUtilsObjectNameInfoEXT;
vkDebugUtilsObjectTagInfoEXT @383 :VkDebugUtilsObjectTagInfoEXT;
vkDebugUtilsLabelEXT @384 :VkDebugUtilsLabelEXT;
vkDebugUtilsMessengerCreateInfoEXT @385 :VkDebugUtilsMessengerCreateInfoEXT;
vkDebugUtilsMessengerCallbackDataEXT @386 :VkDebugUtilsMessengerCallbackDataEXT;
vkPhysicalDeviceDeviceMemoryReportFeaturesEXT @387 :VkPhysicalDeviceDeviceMemoryReportFeaturesEXT;
vkDeviceDeviceMemoryReportCreateInfoEXT @388 :VkDeviceDeviceMemoryReportCreateInfoEXT;
vkDeviceMemoryReportCallbackDataEXT @389 :VkDeviceMemoryReportCallbackDataEXT;
vkImportMemoryHostPointerInfoEXT @390 :VkImportMemoryHostPointerInfoEXT;
vkMemoryHostPointerPropertiesEXT @391 :VkMemoryHostPointerPropertiesEXT;
vkPhysicalDeviceExternalMemoryHostPropertiesEXT @392 :VkPhysicalDeviceExternalMemoryHostPropertiesEXT;
vkPhysicalDeviceConservativeRasterizationPropertiesEXT @393 :VkPhysicalDeviceConservativeRasterizationPropertiesEXT;
vkCalibratedTimestampInfoEXT @394 :VkCalibratedTimestampInfoEXT;
vkPhysicalDeviceShaderCorePropertiesAMD @395 :VkPhysicalDeviceShaderCorePropertiesAMD;
vkPhysicalDeviceShaderCoreProperties2AMD @396 :VkPhysicalDeviceShaderCoreProperties2AMD;
vkPipelineRasterizationConservativeStateCreateInfoEXT @397 :VkPipelineRasterizationConservativeStateCreateInfoEXT;
vkPhysicalDeviceDescriptorIndexingFeatures @398 :VkPhysicalDeviceDescriptorIndexingFeatures;
vkPhysicalDeviceDescriptorIndexingProperties @399 :VkPhysicalDeviceDescriptorIndexingProperties;
vkDescriptorSetLayoutBindingFlagsCreateInfo @400 :VkDescriptorSetLayoutBindingFlagsCreateInfo;
vkDescriptorSetVariableDescriptorCountAllocateInfo @401 :VkDescriptorSetVariableDescriptorCountAllocateInfo;
vkDescriptorSetVariableDescriptorCountLayoutSupport @402 :VkDescriptorSetVariableDescriptorCountLayoutSupport;
vkAttachmentDescription2 @403 :VkAttachmentDescription2;
vkAttachmentReference2 @404 :VkAttachmentReference2;
vkSubpassDescription2 @405 :VkSubpassDescription2;
vkSubpassDependency2 @406 :VkSubpassDependency2;
vkRenderPassCreateInfo2 @407 :VkRenderPassCreateInfo2;
vkSubpassBeginInfo @408 :VkSubpassBeginInfo;
vkSubpassEndInfo @409 :VkSubpassEndInfo;
vkPhysicalDeviceTimelineSemaphoreFeatures @410 :VkPhysicalDeviceTimelineSemaphoreFeatures;
vkPhysicalDeviceTimelineSemaphoreProperties @411 :VkPhysicalDeviceTimelineSemaphoreProperties;
vkSemaphoreTypeCreateInfo @412 :VkSemaphoreTypeCreateInfo;
vkTimelineSemaphoreSubmitInfo @413 :VkTimelineSemaphoreSubmitInfo;
vkSemaphoreWaitInfo @414 :VkSemaphoreWaitInfo;
vkSemaphoreSignalInfo @415 :VkSemaphoreSignalInfo;
vkVertexInputBindingDivisorDescriptionEXT @416 :VkVertexInputBindingDivisorDescriptionEXT;
vkPipelineVertexInputDivisorStateCreateInfoEXT @417 :VkPipelineVertexInputDivisorStateCreateInfoEXT;
vkPhysicalDeviceVertexAttributeDivisorPropertiesEXT @418 :VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT;
vkPhysicalDevicePCIBusInfoPropertiesEXT @419 :VkPhysicalDevicePCIBusInfoPropertiesEXT;
vkImportAndroidHardwareBufferInfoANDROID @420 :VkImportAndroidHardwareBufferInfoANDROID;
vkAndroidHardwareBufferUsageANDROID @421 :VkAndroidHardwareBufferUsageANDROID;
vkAndroidHardwareBufferPropertiesANDROID @422 :VkAndroidHardwareBufferPropertiesANDROID;
vkMemoryGetAndroidHardwareBufferInfoANDROID @423 :VkMemoryGetAndroidHardwareBufferInfoANDROID;
vkAndroidHardwareBufferFormatPropertiesANDROID @424 :VkAndroidHardwareBufferFormatPropertiesANDROID;
vkCommandBufferInheritanceConditionalRenderingInfoEXT @425 :VkCommandBufferInheritanceConditionalRenderingInfoEXT;
vkExternalFormatANDROID @426 :VkExternalFormatANDROID;
vkPhysicalDevice8BitStorageFeatures @427 :VkPhysicalDevice8BitStorageFeatures;
vkPhysicalDeviceConditionalRenderingFeaturesEXT @428 :VkPhysicalDeviceConditionalRenderingFeaturesEXT;
vkPhysicalDeviceVulkanMemoryModelFeatures @429 :VkPhysicalDeviceVulkanMemoryModelFeatures;
vkPhysicalDeviceShaderAtomicInt64Features @430 :VkPhysicalDeviceShaderAtomicInt64Features;
vkPhysicalDeviceShaderAtomicFloatFeaturesEXT @431 :VkPhysicalDeviceShaderAtomicFloatFeaturesEXT;
vkPhysicalDeviceShaderAtomicFloat2FeaturesEXT @432 :VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT;
vkPhysicalDeviceVertexAttributeDivisorFeaturesEXT @433 :VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT;
vkQueueFamilyCheckpointPropertiesNV @434 :VkQueueFamilyCheckpointPropertiesNV;
vkCheckpointDataNV @435 :VkCheckpointDataNV;
vkPhysicalDeviceDepthStencilResolveProperties @436 :VkPhysicalDeviceDepthStencilResolveProperties;
vkSubpassDescriptionDepthStencilResolve @437 :VkSubpassDescriptionDepthStencilResolve;
vkImageViewASTCDecodeModeEXT @438 :VkImageViewASTCDecodeModeEXT;
vkPhysicalDeviceASTCDecodeFeaturesEXT @439 :VkPhysicalDeviceASTCDecodeFeaturesEXT;
vkPhysicalDeviceTransformFeedbackFeaturesEXT @440 :VkPhysicalDeviceTransformFeedbackFeaturesEXT;
vkPhysicalDeviceTransformFeedbackPropertiesEXT @441 :VkPhysicalDeviceTransformFeedbackPropertiesEXT;
vkPipelineRasterizationStateStreamCreateInfoEXT @442 :VkPipelineRasterizationStateStreamCreateInfoEXT;
vkPhysicalDeviceRepresentativeFragmentTestFeaturesNV @443 :VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV;
vkPipelineRepresentativeFragmentTestStateCreateInfoNV @444 :VkPipelineRepresentativeFragmentTestStateCreateInfoNV;
vkPhysicalDeviceExclusiveScissorFeaturesNV @445 :VkPhysicalDeviceExclusiveScissorFeaturesNV;
vkPipelineViewportExclusiveScissorStateCreateInfoNV @446 :VkPipelineViewportExclusiveScissorStateCreateInfoNV;
vkPhysicalDeviceCornerSampledImageFeaturesNV @447 :VkPhysicalDeviceCornerSampledImageFeaturesNV;
vkPhysicalDeviceComputeShaderDerivativesFeaturesNV @448 :VkPhysicalDeviceComputeShaderDerivativesFeaturesNV;
vkPhysicalDeviceShaderImageFootprintFeaturesNV @449 :VkPhysicalDeviceShaderImageFootprintFeaturesNV;
vkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV @450 :VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV;
vkPhysicalDeviceCopyMemoryIndirectFeaturesNV @451 :VkPhysicalDeviceCopyMemoryIndirectFeaturesNV;
vkPhysicalDeviceCopyMemoryIndirectPropertiesNV @452 :VkPhysicalDeviceCopyMemoryIndirectPropertiesNV;
vkPhysicalDeviceMemoryDecompressionFeaturesNV @453 :VkPhysicalDeviceMemoryDecompressionFeaturesNV;
vkPhysicalDeviceMemoryDecompressionPropertiesNV @454 :VkPhysicalDeviceMemoryDecompressionPropertiesNV;
vkShadingRatePaletteNV @455 :VkShadingRatePaletteNV;
vkPipelineViewportShadingRateImageStateCreateInfoNV @456 :VkPipelineViewportShadingRateImageStateCreateInfoNV;
vkPhysicalDeviceShadingRateImageFeaturesNV @457 :VkPhysicalDeviceShadingRateImageFeaturesNV;
vkPhysicalDeviceShadingRateImagePropertiesNV @458 :VkPhysicalDeviceShadingRateImagePropertiesNV;
vkPhysicalDeviceInvocationMaskFeaturesHUAWEI @459 :VkPhysicalDeviceInvocationMaskFeaturesHUAWEI;
vkCoarseSampleLocationNV @460 :VkCoarseSampleLocationNV;
vkCoarseSampleOrderCustomNV @461 :VkCoarseSampleOrderCustomNV;
vkPipelineViewportCoarseSampleOrderStateCreateInfoNV @462 :VkPipelineViewportCoarseSampleOrderStateCreateInfoNV;
vkPhysicalDeviceMeshShaderFeaturesNV @463 :VkPhysicalDeviceMeshShaderFeaturesNV;
vkPhysicalDeviceMeshShaderPropertiesNV @464 :VkPhysicalDeviceMeshShaderPropertiesNV;
vkDrawMeshTasksIndirectCommandNV @465 :VkDrawMeshTasksIndirectCommandNV;
vkPhysicalDeviceMeshShaderFeaturesEXT @466 :VkPhysicalDeviceMeshShaderFeaturesEXT;
vkPhysicalDeviceMeshShaderPropertiesEXT @467 :VkPhysicalDeviceMeshShaderPropertiesEXT;
vkDrawMeshTasksIndirectCommandEXT @468 :VkDrawMeshTasksIndirectCommandEXT;
vkRayTracingShaderGroupCreateInfoNV @469 :VkRayTracingShaderGroupCreateInfoNV;
vkRayTracingShaderGroupCreateInfoKHR @470 :VkRayTracingShaderGroupCreateInfoKHR;
vkRayTracingPipelineCreateInfoNV @471 :VkRayTracingPipelineCreateInfoNV;
vkRayTracingPipelineCreateInfoKHR @472 :VkRayTracingPipelineCreateInfoKHR;
vkGeometryTrianglesNV @473 :VkGeometryTrianglesNV;
vkGeometryAABBNV @474 :VkGeometryAABBNV;
vkGeometryDataNV @475 :VkGeometryDataNV;
vkGeometryNV @476 :VkGeometryNV;
vkAccelerationStructureInfoNV @477 :VkAccelerationStructureInfoNV;
vkAccelerationStructureCreateInfoNV @478 :VkAccelerationStructureCreateInfoNV;
vkBindAccelerationStructureMemoryInfoNV @479 :VkBindAccelerationStructureMemoryInfoNV;
vkWriteDescriptorSetAccelerationStructureKHR @480 :VkWriteDescriptorSetAccelerationStructureKHR;
vkWriteDescriptorSetAccelerationStructureNV @481 :VkWriteDescriptorSetAccelerationStructureNV;
vkAccelerationStructureMemoryRequirementsInfoNV @482 :VkAccelerationStructureMemoryRequirementsInfoNV;
vkPhysicalDeviceAccelerationStructureFeaturesKHR @483 :VkPhysicalDeviceAccelerationStructureFeaturesKHR;
vkPhysicalDeviceRayTracingPipelineFeaturesKHR @484 :VkPhysicalDeviceRayTracingPipelineFeaturesKHR;
vkPhysicalDeviceRayQueryFeaturesKHR @485 :VkPhysicalDeviceRayQueryFeaturesKHR;
vkPhysicalDeviceAccelerationStructurePropertiesKHR @486 :VkPhysicalDeviceAccelerationStructurePropertiesKHR;
vkPhysicalDeviceRayTracingPipelinePropertiesKHR @487 :VkPhysicalDeviceRayTracingPipelinePropertiesKHR;
vkPhysicalDeviceRayTracingPropertiesNV @488 :VkPhysicalDeviceRayTracingPropertiesNV;
vkStridedDeviceAddressRegionKHR @489 :VkStridedDeviceAddressRegionKHR;
vkTraceRaysIndirectCommandKHR @490 :VkTraceRaysIndirectCommandKHR;
vkTraceRaysIndirectCommand2KHR @491 :VkTraceRaysIndirectCommand2KHR;
vkPhysicalDeviceRayTracingMaintenance1FeaturesKHR @492 :VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR;
vkDrmFormatModifierPropertiesListEXT @493 :VkDrmFormatModifierPropertiesListEXT;
vkDrmFormatModifierPropertiesEXT @494 :VkDrmFormatModifierPropertiesEXT;
vkPhysicalDeviceImageDrmFormatModifierInfoEXT @495 :VkPhysicalDeviceImageDrmFormatModifierInfoEXT;
vkImageDrmFormatModifierListCreateInfoEXT @496 :VkImageDrmFormatModifierListCreateInfoEXT;
vkImageDrmFormatModifierExplicitCreateInfoEXT @497 :VkImageDrmFormatModifierExplicitCreateInfoEXT;
vkImageDrmFormatModifierPropertiesEXT @498 :VkImageDrmFormatModifierPropertiesEXT;
vkImageStencilUsageCreateInfo @499 :VkImageStencilUsageCreateInfo;
vkDeviceMemoryOverallocationCreateInfoAMD @500 :VkDeviceMemoryOverallocationCreateInfoAMD;
vkPhysicalDeviceFragmentDensityMapFeaturesEXT @501 :VkPhysicalDeviceFragmentDensityMapFeaturesEXT;
vkPhysicalDeviceFragmentDensityMap2FeaturesEXT @502 :VkPhysicalDeviceFragmentDensityMap2FeaturesEXT;
vkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM @503 :VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM;
vkPhysicalDeviceFragmentDensityMapPropertiesEXT @504 :VkPhysicalDeviceFragmentDensityMapPropertiesEXT;
vkPhysicalDeviceFragmentDensityMap2PropertiesEXT @505 :VkPhysicalDeviceFragmentDensityMap2PropertiesEXT;
vkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM @506 :VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM;
vkRenderPassFragmentDensityMapCreateInfoEXT @507 :VkRenderPassFragmentDensityMapCreateInfoEXT;
vkSubpassFragmentDensityMapOffsetEndInfoQCOM @508 :VkSubpassFragmentDensityMapOffsetEndInfoQCOM;
vkPhysicalDeviceScalarBlockLayoutFeatures @509 :VkPhysicalDeviceScalarBlockLayoutFeatures;
vkSurfaceProtectedCapabilitiesKHR @510 :VkSurfaceProtectedCapabilitiesKHR;
vkPhysicalDeviceUniformBufferStandardLayoutFeatures @511 :VkPhysicalDeviceUniformBufferStandardLayoutFeatures;
vkPhysicalDeviceDepthClipEnableFeaturesEXT @512 :VkPhysicalDeviceDepthClipEnableFeaturesEXT;
vkPipelineRasterizationDepthClipStateCreateInfoEXT @513 :VkPipelineRasterizationDepthClipStateCreateInfoEXT;
vkPhysicalDeviceMemoryBudgetPropertiesEXT @514 :VkPhysicalDeviceMemoryBudgetPropertiesEXT;
vkPhysicalDeviceMemoryPriorityFeaturesEXT @515 :VkPhysicalDeviceMemoryPriorityFeaturesEXT;
vkMemoryPriorityAllocateInfoEXT @516 :VkMemoryPriorityAllocateInfoEXT;
vkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT @517 :VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT;
vkPhysicalDeviceBufferDeviceAddressFeatures @518 :VkPhysicalDeviceBufferDeviceAddressFeatures;
vkPhysicalDeviceBufferDeviceAddressFeaturesEXT @519 :VkPhysicalDeviceBufferDeviceAddressFeaturesEXT;
vkBufferDeviceAddressInfo @520 :VkBufferDeviceAddressInfo;
vkBufferOpaqueCaptureAddressCreateInfo @521 :VkBufferOpaqueCaptureAddressCreateInfo;
vkBufferDeviceAddressCreateInfoEXT @522 :VkBufferDeviceAddressCreateInfoEXT;
vkPhysicalDeviceImageViewImageFormatInfoEXT @523 :VkPhysicalDeviceImageViewImageFormatInfoEXT;
vkFilterCubicImageViewImageFormatPropertiesEXT @524 :VkFilterCubicImageViewImageFormatPropertiesEXT;
vkPhysicalDeviceImagelessFramebufferFeatures @525 :VkPhysicalDeviceImagelessFramebufferFeatures;
vkFramebufferAttachmentsCreateInfo @526 :VkFramebufferAttachmentsCreateInfo;
vkFramebufferAttachmentImageInfo @527 :VkFramebufferAttachmentImageInfo;
vkRenderPassAttachmentBeginInfo @528 :VkRenderPassAttachmentBeginInfo;
vkPhysicalDeviceTextureCompressionASTCHDRFeatures @529 :VkPhysicalDeviceTextureCompressionASTCHDRFeatures;
vkPhysicalDeviceCooperativeMatrixFeaturesNV @530 :VkPhysicalDeviceCooperativeMatrixFeaturesNV;
vkPhysicalDeviceCooperativeMatrixPropertiesNV @531 :VkPhysicalDeviceCooperativeMatrixPropertiesNV;
vkCooperativeMatrixPropertiesNV @532 :VkCooperativeMatrixPropertiesNV;
vkPhysicalDeviceYcbcrImageArraysFeaturesEXT @533 :VkPhysicalDeviceYcbcrImageArraysFeaturesEXT;
vkImageViewHandleInfoNVX @534 :VkImageViewHandleInfoNVX;
vkImageViewAddressPropertiesNVX @535 :VkImageViewAddressPropertiesNVX;
vkPresentFrameTokenGGP @536 :VkPresentFrameTokenGGP;
vkPipelineCreationFeedback @537 :VkPipelineCreationFeedback;
vkPipelineCreationFeedbackCreateInfo @538 :VkPipelineCreationFeedbackCreateInfo;
vkSurfaceFullScreenExclusiveInfoEXT @539 :VkSurfaceFullScreenExclusiveInfoEXT;
vkSurfaceFullScreenExclusiveWin32InfoEXT @540 :VkSurfaceFullScreenExclusiveWin32InfoEXT;
vkSurfaceCapabilitiesFullScreenExclusiveEXT @541 :VkSurfaceCapabilitiesFullScreenExclusiveEXT;
vkPhysicalDevicePresentBarrierFeaturesNV @542 :VkPhysicalDevicePresentBarrierFeaturesNV;
vkSurfaceCapabilitiesPresentBarrierNV @543 :VkSurfaceCapabilitiesPresentBarrierNV;
vkSwapchainPresentBarrierCreateInfoNV @544 :VkSwapchainPresentBarrierCreateInfoNV;
vkPhysicalDevicePerformanceQueryFeaturesKHR @545 :VkPhysicalDevicePerformanceQueryFeaturesKHR;
vkPhysicalDevicePerformanceQueryPropertiesKHR @546 :VkPhysicalDevicePerformanceQueryPropertiesKHR;
vkPerformanceCounterKHR @547 :VkPerformanceCounterKHR;
vkPerformanceCounterDescriptionKHR @548 :VkPerformanceCounterDescriptionKHR;
vkQueryPoolPerformanceCreateInfoKHR @549 :VkQueryPoolPerformanceCreateInfoKHR;
vkPerformanceCounterResultKHR @550 :VkPerformanceCounterResultKHR;
vkAcquireProfilingLockInfoKHR @551 :VkAcquireProfilingLockInfoKHR;
vkPerformanceQuerySubmitInfoKHR @552 :VkPerformanceQuerySubmitInfoKHR;
vkPerformanceQueryReservationInfoKHR @553 :VkPerformanceQueryReservationInfoKHR;
vkHeadlessSurfaceCreateInfoEXT @554 :VkHeadlessSurfaceCreateInfoEXT;
vkPhysicalDeviceCoverageReductionModeFeaturesNV @555 :VkPhysicalDeviceCoverageReductionModeFeaturesNV;
vkPipelineCoverageReductionStateCreateInfoNV @556 :VkPipelineCoverageReductionStateCreateInfoNV;
vkFramebufferMixedSamplesCombinationNV @557 :VkFramebufferMixedSamplesCombinationNV;
vkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL @558 :VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL;
vkPerformanceValueDataINTEL @559 :VkPerformanceValueDataINTEL;
vkPerformanceValueINTEL @560 :VkPerformanceValueINTEL;
vkInitializePerformanceApiInfoINTEL @561 :VkInitializePerformanceApiInfoINTEL;
vkQueryPoolPerformanceQueryCreateInfoINTEL @562 :VkQueryPoolPerformanceQueryCreateInfoINTEL;
vkPerformanceMarkerInfoINTEL @563 :VkPerformanceMarkerInfoINTEL;
vkPerformanceStreamMarkerInfoINTEL @564 :VkPerformanceStreamMarkerInfoINTEL;
vkPerformanceOverrideInfoINTEL @565 :VkPerformanceOverrideInfoINTEL;
vkPerformanceConfigurationAcquireInfoINTEL @566 :VkPerformanceConfigurationAcquireInfoINTEL;
vkPhysicalDeviceShaderClockFeaturesKHR @567 :VkPhysicalDeviceShaderClockFeaturesKHR;
vkPhysicalDeviceIndexTypeUint8FeaturesEXT @568 :VkPhysicalDeviceIndexTypeUint8FeaturesEXT;
vkPhysicalDeviceShaderSMBuiltinsPropertiesNV @569 :VkPhysicalDeviceShaderSMBuiltinsPropertiesNV;
vkPhysicalDeviceShaderSMBuiltinsFeaturesNV @570 :VkPhysicalDeviceShaderSMBuiltinsFeaturesNV;
vkPhysicalDeviceFragmentShaderInterlockFeaturesEXT @571 :VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT;
vkPhysicalDeviceSeparateDepthStencilLayoutsFeatures @572 :VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures;
vkAttachmentReferenceStencilLayout @573 :VkAttachmentReferenceStencilLayout;
vkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT @574 :VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT;
vkAttachmentDescriptionStencilLayout @575 :VkAttachmentDescriptionStencilLayout;
vkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR @576 :VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR;
vkPipelineInfoKHR @577 :VkPipelineInfoKHR;
vkPipelineExecutablePropertiesKHR @578 :VkPipelineExecutablePropertiesKHR;
vkPipelineExecutableInfoKHR @579 :VkPipelineExecutableInfoKHR;
vkPipelineExecutableStatisticValueKHR @580 :VkPipelineExecutableStatisticValueKHR;
vkPipelineExecutableStatisticKHR @581 :VkPipelineExecutableStatisticKHR;
vkPipelineExecutableInternalRepresentationKHR @582 :VkPipelineExecutableInternalRepresentationKHR;
vkPhysicalDeviceShaderDemoteToHelperInvocationFeatures @583 :VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures;
vkPhysicalDeviceTexelBufferAlignmentFeaturesEXT @584 :VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT;
vkPhysicalDeviceTexelBufferAlignmentProperties @585 :VkPhysicalDeviceTexelBufferAlignmentProperties;
vkPhysicalDeviceSubgroupSizeControlFeatures @586 :VkPhysicalDeviceSubgroupSizeControlFeatures;
vkPhysicalDeviceSubgroupSizeControlProperties @587 :VkPhysicalDeviceSubgroupSizeControlProperties;
vkPipelineShaderStageRequiredSubgroupSizeCreateInfo @588 :VkPipelineShaderStageRequiredSubgroupSizeCreateInfo;
vkSubpassShadingPipelineCreateInfoHUAWEI @589 :VkSubpassShadingPipelineCreateInfoHUAWEI;
vkPhysicalDeviceSubpassShadingPropertiesHUAWEI @590 :VkPhysicalDeviceSubpassShadingPropertiesHUAWEI;
vkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI @591 :VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI;
vkMemoryOpaqueCaptureAddressAllocateInfo @592 :VkMemoryOpaqueCaptureAddressAllocateInfo;
vkDeviceMemoryOpaqueCaptureAddressInfo @593 :VkDeviceMemoryOpaqueCaptureAddressInfo;
vkPhysicalDeviceLineRasterizationFeaturesEXT @594 :VkPhysicalDeviceLineRasterizationFeaturesEXT;
vkPhysicalDeviceLineRasterizationPropertiesEXT @595 :VkPhysicalDeviceLineRasterizationPropertiesEXT;
vkPipelineRasterizationLineStateCreateInfoEXT @596 :VkPipelineRasterizationLineStateCreateInfoEXT;
vkPhysicalDevicePipelineCreationCacheControlFeatures @597 :VkPhysicalDevicePipelineCreationCacheControlFeatures;
vkPhysicalDeviceVulkan11Features @598 :VkPhysicalDeviceVulkan11Features;
vkPhysicalDeviceVulkan11Properties @599 :VkPhysicalDeviceVulkan11Properties;
vkPhysicalDeviceVulkan12Features @600 :VkPhysicalDeviceVulkan12Features;
vkPhysicalDeviceVulkan12Properties @601 :VkPhysicalDeviceVulkan12Properties;
vkPhysicalDeviceVulkan13Features @602 :VkPhysicalDeviceVulkan13Features;
vkPhysicalDeviceVulkan13Properties @603 :VkPhysicalDeviceVulkan13Properties;
vkPipelineCompilerControlCreateInfoAMD @604 :VkPipelineCompilerControlCreateInfoAMD;
vkPhysicalDeviceCoherentMemoryFeaturesAMD @605 :VkPhysicalDeviceCoherentMemoryFeaturesAMD;
vkFaultData @606 :VkFaultData;
vkFaultCallbackInfo @607 :VkFaultCallbackInfo;
vkPhysicalDeviceToolProperties @608 :VkPhysicalDeviceToolProperties;
vkSamplerCustomBorderColorCreateInfoEXT @609 :VkSamplerCustomBorderColorCreateInfoEXT;
vkPhysicalDeviceCustomBorderColorPropertiesEXT @610 :VkPhysicalDeviceCustomBorderColorPropertiesEXT;
vkPhysicalDeviceCustomBorderColorFeaturesEXT @611 :VkPhysicalDeviceCustomBorderColorFeaturesEXT;
vkSamplerBorderColorComponentMappingCreateInfoEXT @612 :VkSamplerBorderColorComponentMappingCreateInfoEXT;
vkPhysicalDeviceBorderColorSwizzleFeaturesEXT @613 :VkPhysicalDeviceBorderColorSwizzleFeaturesEXT;
vkDeviceOrHostAddressKHR @614 :VkDeviceOrHostAddressKHR;
vkDeviceOrHostAddressConstKHR @615 :VkDeviceOrHostAddressConstKHR;
vkDeviceOrHostAddressConstAMDX @616 :VkDeviceOrHostAddressConstAMDX;
vkAccelerationStructureGeometryTrianglesDataKHR @617 :VkAccelerationStructureGeometryTrianglesDataKHR;
vkAccelerationStructureGeometryAabbsDataKHR @618 :VkAccelerationStructureGeometryAabbsDataKHR;
vkAccelerationStructureGeometryInstancesDataKHR @619 :VkAccelerationStructureGeometryInstancesDataKHR;
vkAccelerationStructureGeometryDataKHR @620 :VkAccelerationStructureGeometryDataKHR;
vkAccelerationStructureGeometryKHR @621 :VkAccelerationStructureGeometryKHR;
vkAccelerationStructureBuildGeometryInfoKHR @622 :VkAccelerationStructureBuildGeometryInfoKHR;
vkAccelerationStructureBuildRangeInfoKHR @623 :VkAccelerationStructureBuildRangeInfoKHR;
vkAccelerationStructureCreateInfoKHR @624 :VkAccelerationStructureCreateInfoKHR;
vkAabbPositionsKHR @625 :VkAabbPositionsKHR;
vkTransformMatrixKHR @626 :VkTransformMatrixKHR;
vkAccelerationStructureInstanceKHR @627 :VkAccelerationStructureInstanceKHR;
vkAccelerationStructureDeviceAddressInfoKHR @628 :VkAccelerationStructureDeviceAddressInfoKHR;
vkAccelerationStructureVersionInfoKHR @629 :VkAccelerationStructureVersionInfoKHR;
vkCopyAccelerationStructureInfoKHR @630 :VkCopyAccelerationStructureInfoKHR;
vkCopyAccelerationStructureToMemoryInfoKHR @631 :VkCopyAccelerationStructureToMemoryInfoKHR;
vkCopyMemoryToAccelerationStructureInfoKHR @632 :VkCopyMemoryToAccelerationStructureInfoKHR;
vkRayTracingPipelineInterfaceCreateInfoKHR @633 :VkRayTracingPipelineInterfaceCreateInfoKHR;
vkPipelineLibraryCreateInfoKHR @634 :VkPipelineLibraryCreateInfoKHR;
vkRefreshObjectKHR @635 :VkRefreshObjectKHR;
vkRefreshObjectListKHR @636 :VkRefreshObjectListKHR;
vkPhysicalDeviceExtendedDynamicStateFeaturesEXT @637 :VkPhysicalDeviceExtendedDynamicStateFeaturesEXT;
vkPhysicalDeviceExtendedDynamicState2FeaturesEXT @638 :VkPhysicalDeviceExtendedDynamicState2FeaturesEXT;
vkPhysicalDeviceExtendedDynamicState3FeaturesEXT @639 :VkPhysicalDeviceExtendedDynamicState3FeaturesEXT;
vkPhysicalDeviceExtendedDynamicState3PropertiesEXT @640 :VkPhysicalDeviceExtendedDynamicState3PropertiesEXT;
vkColorBlendEquationEXT @641 :VkColorBlendEquationEXT;
vkColorBlendAdvancedEXT @642 :VkColorBlendAdvancedEXT;
vkRenderPassTransformBeginInfoQCOM @643 :VkRenderPassTransformBeginInfoQCOM;
vkCopyCommandTransformInfoQCOM @644 :VkCopyCommandTransformInfoQCOM;
vkCommandBufferInheritanceRenderPassTransformInfoQCOM @645 :VkCommandBufferInheritanceRenderPassTransformInfoQCOM;
vkPhysicalDeviceDiagnosticsConfigFeaturesNV @646 :VkPhysicalDeviceDiagnosticsConfigFeaturesNV;
vkDeviceDiagnosticsConfigCreateInfoNV @647 :VkDeviceDiagnosticsConfigCreateInfoNV;
vkPipelineOfflineCreateInfo @648 :VkPipelineOfflineCreateInfo;
vkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures @649 :VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures;
vkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR @650 :VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR;
vkPhysicalDeviceRobustness2FeaturesEXT @651 :VkPhysicalDeviceRobustness2FeaturesEXT;
vkPhysicalDeviceRobustness2PropertiesEXT @652 :VkPhysicalDeviceRobustness2PropertiesEXT;
vkPhysicalDeviceImageRobustnessFeatures @653 :VkPhysicalDeviceImageRobustnessFeatures;
vkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR @654 :VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR;
vkPhysicalDevicePortabilitySubsetFeaturesKHR @655 :VkPhysicalDevicePortabilitySubsetFeaturesKHR;
vkPhysicalDevicePortabilitySubsetPropertiesKHR @656 :VkPhysicalDevicePortabilitySubsetPropertiesKHR;
vkPhysicalDevice4444FormatsFeaturesEXT @657 :VkPhysicalDevice4444FormatsFeaturesEXT;
vkPhysicalDeviceSubpassShadingFeaturesHUAWEI @658 :VkPhysicalDeviceSubpassShadingFeaturesHUAWEI;
vkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI @659 :VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI;
vkBufferCopy2 @660 :VkBufferCopy2;
vkImageCopy2 @661 :VkImageCopy2;
vkImageBlit2 @662 :VkImageBlit2;
vkBufferImageCopy2 @663 :VkBufferImageCopy2;
vkImageResolve2 @664 :VkImageResolve2;
vkCopyBufferInfo2 @665 :VkCopyBufferInfo2;
vkCopyImageInfo2 @666 :VkCopyImageInfo2;
vkBlitImageInfo2 @667 :VkBlitImageInfo2;
vkCopyBufferToImageInfo2 @668 :VkCopyBufferToImageInfo2;
vkCopyImageToBufferInfo2 @669 :VkCopyImageToBufferInfo2;
vkResolveImageInfo2 @670 :VkResolveImageInfo2;
vkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT @671 :VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT;
vkFragmentShadingRateAttachmentInfoKHR @672 :VkFragmentShadingRateAttachmentInfoKHR;
vkPipelineFragmentShadingRateStateCreateInfoKHR @673 :VkPipelineFragmentShadingRateStateCreateInfoKHR;
vkPhysicalDeviceFragmentShadingRateFeaturesKHR @674 :VkPhysicalDeviceFragmentShadingRateFeaturesKHR;
vkPhysicalDeviceFragmentShadingRatePropertiesKHR @675 :VkPhysicalDeviceFragmentShadingRatePropertiesKHR;
vkPhysicalDeviceFragmentShadingRateKHR @676 :VkPhysicalDeviceFragmentShadingRateKHR;
vkPhysicalDeviceShaderTerminateInvocationFeatures @677 :VkPhysicalDeviceShaderTerminateInvocationFeatures;
vkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV @678 :VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV;
vkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV @679 :VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV;
vkPipelineFragmentShadingRateEnumStateCreateInfoNV @680 :VkPipelineFragmentShadingRateEnumStateCreateInfoNV;
vkAccelerationStructureBuildSizesInfoKHR @681 :VkAccelerationStructureBuildSizesInfoKHR;
vkPhysicalDeviceImage2DViewOf3DFeaturesEXT @682 :VkPhysicalDeviceImage2DViewOf3DFeaturesEXT;
vkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT @683 :VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT;
vkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT @684 :VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT;
vkPhysicalDeviceMutableDescriptorTypeFeaturesEXT @685 :VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT;
vkMutableDescriptorTypeListEXT @686 :VkMutableDescriptorTypeListEXT;
vkMutableDescriptorTypeCreateInfoEXT @687 :VkMutableDescriptorTypeCreateInfoEXT;
vkPhysicalDeviceDepthClipControlFeaturesEXT @688 :VkPhysicalDeviceDepthClipControlFeaturesEXT;
vkPipelineViewportDepthClipControlCreateInfoEXT @689 :VkPipelineViewportDepthClipControlCreateInfoEXT;
vkPhysicalDeviceVertexInputDynamicStateFeaturesEXT @690 :VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT;
vkPhysicalDeviceExternalMemoryRDMAFeaturesNV @691 :VkPhysicalDeviceExternalMemoryRDMAFeaturesNV;
vkVertexInputBindingDescription2EXT @692 :VkVertexInputBindingDescription2EXT;
vkVertexInputAttributeDescription2EXT @693 :VkVertexInputAttributeDescription2EXT;
vkPhysicalDeviceColorWriteEnableFeaturesEXT @694 :VkPhysicalDeviceColorWriteEnableFeaturesEXT;
vkPipelineColorWriteCreateInfoEXT @695 :VkPipelineColorWriteCreateInfoEXT;
vkMemoryBarrier2 @696 :VkMemoryBarrier2;
vkImageMemoryBarrier2 @697 :VkImageMemoryBarrier2;
vkBufferMemoryBarrier2 @698 :VkBufferMemoryBarrier2;
vkDependencyInfo @699 :VkDependencyInfo;
vkSemaphoreSubmitInfo @700 :VkSemaphoreSubmitInfo;
vkCommandBufferSubmitInfo @701 :VkCommandBufferSubmitInfo;
vkSubmitInfo2 @702 :VkSubmitInfo2;
vkQueueFamilyCheckpointProperties2NV @703 :VkQueueFamilyCheckpointProperties2NV;
vkCheckpointData2NV @704 :VkCheckpointData2NV;
vkPhysicalDeviceSynchronization2Features @705 :VkPhysicalDeviceSynchronization2Features;
vkPhysicalDeviceHostImageCopyFeaturesEXT @706 :VkPhysicalDeviceHostImageCopyFeaturesEXT;
vkPhysicalDeviceHostImageCopyPropertiesEXT @707 :VkPhysicalDeviceHostImageCopyPropertiesEXT;
vkMemoryToImageCopyEXT @708 :VkMemoryToImageCopyEXT;
vkImageToMemoryCopyEXT @709 :VkImageToMemoryCopyEXT;
vkCopyMemoryToImageInfoEXT @710 :VkCopyMemoryToImageInfoEXT;
vkCopyImageToMemoryInfoEXT @711 :VkCopyImageToMemoryInfoEXT;
vkCopyImageToImageInfoEXT @712 :VkCopyImageToImageInfoEXT;
vkHostImageLayoutTransitionInfoEXT @713 :VkHostImageLayoutTransitionInfoEXT;
vkSubresourceHostMemcpySizeEXT @714 :VkSubresourceHostMemcpySizeEXT;
vkHostImageCopyDevicePerformanceQueryEXT @715 :VkHostImageCopyDevicePerformanceQueryEXT;
vkPhysicalDeviceVulkanSC10Properties @716 :VkPhysicalDeviceVulkanSC10Properties;
vkPipelinePoolSize @717 :VkPipelinePoolSize;
vkDeviceObjectReservationCreateInfo @718 :VkDeviceObjectReservationCreateInfo;
vkCommandPoolMemoryReservationCreateInfo @719 :VkCommandPoolMemoryReservationCreateInfo;
vkCommandPoolMemoryConsumption @720 :VkCommandPoolMemoryConsumption;
vkPhysicalDeviceVulkanSC10Features @721 :VkPhysicalDeviceVulkanSC10Features;
vkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT @722 :VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT;
vkPhysicalDeviceLegacyDitheringFeaturesEXT @723 :VkPhysicalDeviceLegacyDitheringFeaturesEXT;
vkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT @724 :VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT;
vkSubpassResolvePerformanceQueryEXT @725 :VkSubpassResolvePerformanceQueryEXT;
vkMultisampledRenderToSingleSampledInfoEXT @726 :VkMultisampledRenderToSingleSampledInfoEXT;
vkPhysicalDevicePipelineProtectedAccessFeaturesEXT @727 :VkPhysicalDevicePipelineProtectedAccessFeaturesEXT;
vkQueueFamilyVideoPropertiesKHR @728 :VkQueueFamilyVideoPropertiesKHR;
vkQueueFamilyQueryResultStatusPropertiesKHR @729 :VkQueueFamilyQueryResultStatusPropertiesKHR;
vkVideoProfileListInfoKHR @730 :VkVideoProfileListInfoKHR;
vkPhysicalDeviceVideoFormatInfoKHR @731 :VkPhysicalDeviceVideoFormatInfoKHR;
vkVideoFormatPropertiesKHR @732 :VkVideoFormatPropertiesKHR;
vkVideoProfileInfoKHR @733 :VkVideoProfileInfoKHR;
vkVideoCapabilitiesKHR @734 :VkVideoCapabilitiesKHR;
vkVideoSessionMemoryRequirementsKHR @735 :VkVideoSessionMemoryRequirementsKHR;
vkBindVideoSessionMemoryInfoKHR @736 :VkBindVideoSessionMemoryInfoKHR;
vkVideoPictureResourceInfoKHR @737 :VkVideoPictureResourceInfoKHR;
vkVideoReferenceSlotInfoKHR @738 :VkVideoReferenceSlotInfoKHR;
vkVideoDecodeCapabilitiesKHR @739 :VkVideoDecodeCapabilitiesKHR;
vkVideoDecodeUsageInfoKHR @740 :VkVideoDecodeUsageInfoKHR;
vkVideoDecodeInfoKHR @741 :VkVideoDecodeInfoKHR;
vkVideoDecodeH264ProfileInfoKHR @742 :VkVideoDecodeH264ProfileInfoKHR;
vkVideoDecodeH264CapabilitiesKHR @743 :VkVideoDecodeH264CapabilitiesKHR;
vkVideoDecodeH264SessionParametersAddInfoKHR @744 :VkVideoDecodeH264SessionParametersAddInfoKHR;
vkVideoDecodeH264SessionParametersCreateInfoKHR @745 :VkVideoDecodeH264SessionParametersCreateInfoKHR;
vkVideoDecodeH264PictureInfoKHR @746 :VkVideoDecodeH264PictureInfoKHR;
vkVideoDecodeH264DpbSlotInfoKHR @747 :VkVideoDecodeH264DpbSlotInfoKHR;
vkVideoDecodeH265ProfileInfoKHR @748 :VkVideoDecodeH265ProfileInfoKHR;
vkVideoDecodeH265CapabilitiesKHR @749 :VkVideoDecodeH265CapabilitiesKHR;
vkVideoDecodeH265SessionParametersAddInfoKHR @750 :VkVideoDecodeH265SessionParametersAddInfoKHR;
vkVideoDecodeH265SessionParametersCreateInfoKHR @751 :VkVideoDecodeH265SessionParametersCreateInfoKHR;
vkVideoDecodeH265PictureInfoKHR @752 :VkVideoDecodeH265PictureInfoKHR;
vkVideoDecodeH265DpbSlotInfoKHR @753 :VkVideoDecodeH265DpbSlotInfoKHR;
vkVideoSessionCreateInfoKHR @754 :VkVideoSessionCreateInfoKHR;
vkVideoSessionParametersCreateInfoKHR @755 :VkVideoSessionParametersCreateInfoKHR;
vkVideoSessionParametersUpdateInfoKHR @756 :VkVideoSessionParametersUpdateInfoKHR;
vkVideoEncodeSessionParametersGetInfoKHR @757 :VkVideoEncodeSessionParametersGetInfoKHR;
vkVideoEncodeSessionParametersFeedbackInfoKHR @758 :VkVideoEncodeSessionParametersFeedbackInfoKHR;
vkVideoBeginCodingInfoKHR @759 :VkVideoBeginCodingInfoKHR;
vkVideoEndCodingInfoKHR @760 :VkVideoEndCodingInfoKHR;
vkVideoCodingControlInfoKHR @761 :VkVideoCodingControlInfoKHR;
vkVideoEncodeUsageInfoKHR @762 :VkVideoEncodeUsageInfoKHR;
vkVideoEncodeInfoKHR @763 :VkVideoEncodeInfoKHR;
vkQueryPoolVideoEncodeFeedbackCreateInfoKHR @764 :VkQueryPoolVideoEncodeFeedbackCreateInfoKHR;
vkVideoEncodeQualityLevelInfoKHR @765 :VkVideoEncodeQualityLevelInfoKHR;
vkPhysicalDeviceVideoEncodeQualityLevelInfoKHR @766 :VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR;
vkVideoEncodeQualityLevelPropertiesKHR @767 :VkVideoEncodeQualityLevelPropertiesKHR;
vkVideoEncodeRateControlInfoKHR @768 :VkVideoEncodeRateControlInfoKHR;
vkVideoEncodeRateControlLayerInfoKHR @769 :VkVideoEncodeRateControlLayerInfoKHR;
vkVideoEncodeCapabilitiesKHR @770 :VkVideoEncodeCapabilitiesKHR;
vkVideoEncodeH264CapabilitiesEXT @771 :VkVideoEncodeH264CapabilitiesEXT;
vkVideoEncodeH264QualityLevelPropertiesEXT @772 :VkVideoEncodeH264QualityLevelPropertiesEXT;
vkVideoEncodeH264SessionCreateInfoEXT @773 :VkVideoEncodeH264SessionCreateInfoEXT;
vkVideoEncodeH264SessionParametersAddInfoEXT @774 :VkVideoEncodeH264SessionParametersAddInfoEXT;
vkVideoEncodeH264SessionParametersCreateInfoEXT @775 :VkVideoEncodeH264SessionParametersCreateInfoEXT;
vkVideoEncodeH264SessionParametersGetInfoEXT @776 :VkVideoEncodeH264SessionParametersGetInfoEXT;
vkVideoEncodeH264SessionParametersFeedbackInfoEXT @777 :VkVideoEncodeH264SessionParametersFeedbackInfoEXT;
vkVideoEncodeH264DpbSlotInfoEXT @778 :VkVideoEncodeH264DpbSlotInfoEXT;
vkVideoEncodeH264PictureInfoEXT @779 :VkVideoEncodeH264PictureInfoEXT;
vkVideoEncodeH264ProfileInfoEXT @780 :VkVideoEncodeH264ProfileInfoEXT;
vkVideoEncodeH264NaluSliceInfoEXT @781 :VkVideoEncodeH264NaluSliceInfoEXT;
vkVideoEncodeH264RateControlInfoEXT @782 :VkVideoEncodeH264RateControlInfoEXT;
vkVideoEncodeH264QpEXT @783 :VkVideoEncodeH264QpEXT;
vkVideoEncodeH264FrameSizeEXT @784 :VkVideoEncodeH264FrameSizeEXT;
vkVideoEncodeH264GopRemainingFrameInfoEXT @785 :VkVideoEncodeH264GopRemainingFrameInfoEXT;
vkVideoEncodeH264RateControlLayerInfoEXT @786 :VkVideoEncodeH264RateControlLayerInfoEXT;
vkVideoEncodeH265CapabilitiesEXT @787 :VkVideoEncodeH265CapabilitiesEXT;
vkVideoEncodeH265QualityLevelPropertiesEXT @788 :VkVideoEncodeH265QualityLevelPropertiesEXT;
vkVideoEncodeH265SessionCreateInfoEXT @789 :VkVideoEncodeH265SessionCreateInfoEXT;
vkVideoEncodeH265SessionParametersAddInfoEXT @790 :VkVideoEncodeH265SessionParametersAddInfoEXT;
vkVideoEncodeH265SessionParametersCreateInfoEXT @791 :VkVideoEncodeH265SessionParametersCreateInfoEXT;
vkVideoEncodeH265SessionParametersGetInfoEXT @792 :VkVideoEncodeH265SessionParametersGetInfoEXT;
vkVideoEncodeH265SessionParametersFeedbackInfoEXT @793 :VkVideoEncodeH265SessionParametersFeedbackInfoEXT;
vkVideoEncodeH265PictureInfoEXT @794 :VkVideoEncodeH265PictureInfoEXT;
vkVideoEncodeH265NaluSliceSegmentInfoEXT @795 :VkVideoEncodeH265NaluSliceSegmentInfoEXT;
vkVideoEncodeH265RateControlInfoEXT @796 :VkVideoEncodeH265RateControlInfoEXT;
vkVideoEncodeH265QpEXT @797 :VkVideoEncodeH265QpEXT;
vkVideoEncodeH265FrameSizeEXT @798 :VkVideoEncodeH265FrameSizeEXT;
vkVideoEncodeH265GopRemainingFrameInfoEXT @799 :VkVideoEncodeH265GopRemainingFrameInfoEXT;
vkVideoEncodeH265RateControlLayerInfoEXT @800 :VkVideoEncodeH265RateControlLayerInfoEXT;
vkVideoEncodeH265ProfileInfoEXT @801 :VkVideoEncodeH265ProfileInfoEXT;
vkVideoEncodeH265DpbSlotInfoEXT @802 :VkVideoEncodeH265DpbSlotInfoEXT;
vkPhysicalDeviceInheritedViewportScissorFeaturesNV @803 :VkPhysicalDeviceInheritedViewportScissorFeaturesNV;
vkCommandBufferInheritanceViewportScissorInfoNV @804 :VkCommandBufferInheritanceViewportScissorInfoNV;
vkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT @805 :VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT;
vkPhysicalDeviceProvokingVertexFeaturesEXT @806 :VkPhysicalDeviceProvokingVertexFeaturesEXT;
vkPhysicalDeviceProvokingVertexPropertiesEXT @807 :VkPhysicalDeviceProvokingVertexPropertiesEXT;
vkPipelineRasterizationProvokingVertexStateCreateInfoEXT @808 :VkPipelineRasterizationProvokingVertexStateCreateInfoEXT;
vkCuModuleCreateInfoNVX @809 :VkCuModuleCreateInfoNVX;
vkCuFunctionCreateInfoNVX @810 :VkCuFunctionCreateInfoNVX;
vkCuLaunchInfoNVX @811 :VkCuLaunchInfoNVX;
vkPhysicalDeviceDescriptorBufferFeaturesEXT @812 :VkPhysicalDeviceDescriptorBufferFeaturesEXT;
vkPhysicalDeviceDescriptorBufferPropertiesEXT @813 :VkPhysicalDeviceDescriptorBufferPropertiesEXT;
vkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT @814 :VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT;
vkDescriptorAddressInfoEXT @815 :VkDescriptorAddressInfoEXT;
vkDescriptorBufferBindingInfoEXT @816 :VkDescriptorBufferBindingInfoEXT;
vkDescriptorBufferBindingPushDescriptorBufferHandleEXT @817 :VkDescriptorBufferBindingPushDescriptorBufferHandleEXT;
vkDescriptorDataEXT @818 :VkDescriptorDataEXT;
vkDescriptorGetInfoEXT @819 :VkDescriptorGetInfoEXT;
vkBufferCaptureDescriptorDataInfoEXT @820 :VkBufferCaptureDescriptorDataInfoEXT;
vkImageCaptureDescriptorDataInfoEXT @821 :VkImageCaptureDescriptorDataInfoEXT;
vkImageViewCaptureDescriptorDataInfoEXT @822 :VkImageViewCaptureDescriptorDataInfoEXT;
vkSamplerCaptureDescriptorDataInfoEXT @823 :VkSamplerCaptureDescriptorDataInfoEXT;
vkAccelerationStructureCaptureDescriptorDataInfoEXT @824 :VkAccelerationStructureCaptureDescriptorDataInfoEXT;
vkOpaqueCaptureDescriptorDataCreateInfoEXT @825 :VkOpaqueCaptureDescriptorDataCreateInfoEXT;
vkPhysicalDeviceShaderIntegerDotProductFeatures @826 :VkPhysicalDeviceShaderIntegerDotProductFeatures;
vkPhysicalDeviceShaderIntegerDotProductProperties @827 :VkPhysicalDeviceShaderIntegerDotProductProperties;
vkPhysicalDeviceDrmPropertiesEXT @828 :VkPhysicalDeviceDrmPropertiesEXT;
vkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR @829 :VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR;
vkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR @830 :VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR;
vkPhysicalDeviceRayTracingMotionBlurFeaturesNV @831 :VkPhysicalDeviceRayTracingMotionBlurFeaturesNV;
vkAccelerationStructureGeometryMotionTrianglesDataNV @832 :VkAccelerationStructureGeometryMotionTrianglesDataNV;
vkAccelerationStructureMotionInfoNV @833 :VkAccelerationStructureMotionInfoNV;
vkSRTDataNV @834 :VkSRTDataNV;
vkAccelerationStructureSRTMotionInstanceNV @835 :VkAccelerationStructureSRTMotionInstanceNV;
vkAccelerationStructureMatrixMotionInstanceNV @836 :VkAccelerationStructureMatrixMotionInstanceNV;
vkAccelerationStructureMotionInstanceDataNV @837 :VkAccelerationStructureMotionInstanceDataNV;
vkAccelerationStructureMotionInstanceNV @838 :VkAccelerationStructureMotionInstanceNV;
vkMemoryGetRemoteAddressInfoNV @839 :VkMemoryGetRemoteAddressInfoNV;
vkImportMemoryBufferCollectionFUCHSIA @840 :VkImportMemoryBufferCollectionFUCHSIA;
vkBufferCollectionImageCreateInfoFUCHSIA @841 :VkBufferCollectionImageCreateInfoFUCHSIA;
vkBufferCollectionBufferCreateInfoFUCHSIA @842 :VkBufferCollectionBufferCreateInfoFUCHSIA;
vkBufferCollectionCreateInfoFUCHSIA @843 :VkBufferCollectionCreateInfoFUCHSIA;
vkBufferCollectionPropertiesFUCHSIA @844 :VkBufferCollectionPropertiesFUCHSIA;
vkBufferConstraintsInfoFUCHSIA @845 :VkBufferConstraintsInfoFUCHSIA;
vkSysmemColorSpaceFUCHSIA @846 :VkSysmemColorSpaceFUCHSIA;
vkImageFormatConstraintsInfoFUCHSIA @847 :VkImageFormatConstraintsInfoFUCHSIA;
vkImageConstraintsInfoFUCHSIA @848 :VkImageConstraintsInfoFUCHSIA;
vkBufferCollectionConstraintsInfoFUCHSIA @849 :VkBufferCollectionConstraintsInfoFUCHSIA;
vkPhysicalDeviceRGBA10X6FormatsFeaturesEXT @850 :VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT;
vkFormatProperties3 @851 :VkFormatProperties3;
vkDrmFormatModifierPropertiesList2EXT @852 :VkDrmFormatModifierPropertiesList2EXT;
vkDrmFormatModifierProperties2EXT @853 :VkDrmFormatModifierProperties2EXT;
vkAndroidHardwareBufferFormatProperties2ANDROID @854 :VkAndroidHardwareBufferFormatProperties2ANDROID;
vkPipelineRenderingCreateInfo @855 :VkPipelineRenderingCreateInfo;
vkRenderingInfo @856 :VkRenderingInfo;
vkRenderingAttachmentInfo @857 :VkRenderingAttachmentInfo;
vkRenderingFragmentShadingRateAttachmentInfoKHR @858 :VkRenderingFragmentShadingRateAttachmentInfoKHR;
vkRenderingFragmentDensityMapAttachmentInfoEXT @859 :VkRenderingFragmentDensityMapAttachmentInfoEXT;
vkPhysicalDeviceDynamicRenderingFeatures @860 :VkPhysicalDeviceDynamicRenderingFeatures;
vkCommandBufferInheritanceRenderingInfo @861 :VkCommandBufferInheritanceRenderingInfo;
vkAttachmentSampleCountInfoAMD @862 :VkAttachmentSampleCountInfoAMD;
vkMultiviewPerViewAttributesInfoNVX @863 :VkMultiviewPerViewAttributesInfoNVX;
vkPhysicalDeviceImageViewMinLodFeaturesEXT @864 :VkPhysicalDeviceImageViewMinLodFeaturesEXT;
vkImageViewMinLodCreateInfoEXT @865 :VkImageViewMinLodCreateInfoEXT;
vkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT @866 :VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT;
vkPhysicalDeviceLinearColorAttachmentFeaturesNV @867 :VkPhysicalDeviceLinearColorAttachmentFeaturesNV;
vkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT @868 :VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT;
vkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT @869 :VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT;
vkGraphicsPipelineLibraryCreateInfoEXT @870 :VkGraphicsPipelineLibraryCreateInfoEXT;
vkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE @871 :VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE;
vkDescriptorSetBindingReferenceVALVE @872 :VkDescriptorSetBindingReferenceVALVE;
vkDescriptorSetLayoutHostMappingInfoVALVE @873 :VkDescriptorSetLayoutHostMappingInfoVALVE;
vkPhysicalDeviceShaderModuleIdentifierFeaturesEXT @874 :VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT;
vkPhysicalDeviceShaderModuleIdentifierPropertiesEXT @875 :VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT;
vkPipelineShaderStageModuleIdentifierCreateInfoEXT @876 :VkPipelineShaderStageModuleIdentifierCreateInfoEXT;
vkShaderModuleIdentifierEXT @877 :VkShaderModuleIdentifierEXT;
vkImageCompressionControlEXT @878 :VkImageCompressionControlEXT;
vkPhysicalDeviceImageCompressionControlFeaturesEXT @879 :VkPhysicalDeviceImageCompressionControlFeaturesEXT;
vkImageCompressionPropertiesEXT @880 :VkImageCompressionPropertiesEXT;
vkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT @881 :VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT;
vkImageSubresource2KHR @882 :VkImageSubresource2KHR;
vkSubresourceLayout2KHR @883 :VkSubresourceLayout2KHR;
vkRenderPassCreationControlEXT @884 :VkRenderPassCreationControlEXT;
vkRenderPassCreationFeedbackInfoEXT @885 :VkRenderPassCreationFeedbackInfoEXT;
vkRenderPassCreationFeedbackCreateInfoEXT @886 :VkRenderPassCreationFeedbackCreateInfoEXT;
vkRenderPassSubpassFeedbackInfoEXT @887 :VkRenderPassSubpassFeedbackInfoEXT;
vkRenderPassSubpassFeedbackCreateInfoEXT @888 :VkRenderPassSubpassFeedbackCreateInfoEXT;
vkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT @889 :VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT;
vkMicromapBuildInfoEXT @890 :VkMicromapBuildInfoEXT;
vkMicromapCreateInfoEXT @891 :VkMicromapCreateInfoEXT;
vkMicromapVersionInfoEXT @892 :VkMicromapVersionInfoEXT;
vkCopyMicromapInfoEXT @893 :VkCopyMicromapInfoEXT;
vkCopyMicromapToMemoryInfoEXT @894 :VkCopyMicromapToMemoryInfoEXT;
vkCopyMemoryToMicromapInfoEXT @895 :VkCopyMemoryToMicromapInfoEXT;
vkMicromapBuildSizesInfoEXT @896 :VkMicromapBuildSizesInfoEXT;
vkMicromapUsageEXT @897 :VkMicromapUsageEXT;
vkMicromapTriangleEXT @898 :VkMicromapTriangleEXT;
vkPhysicalDeviceOpacityMicromapFeaturesEXT @899 :VkPhysicalDeviceOpacityMicromapFeaturesEXT;
vkPhysicalDeviceOpacityMicromapPropertiesEXT @900 :VkPhysicalDeviceOpacityMicromapPropertiesEXT;
vkAccelerationStructureTrianglesOpacityMicromapEXT @901 :VkAccelerationStructureTrianglesOpacityMicromapEXT;
vkPhysicalDeviceDisplacementMicromapFeaturesNV @902 :VkPhysicalDeviceDisplacementMicromapFeaturesNV;
vkPhysicalDeviceDisplacementMicromapPropertiesNV @903 :VkPhysicalDeviceDisplacementMicromapPropertiesNV;
vkAccelerationStructureTrianglesDisplacementMicromapNV @904 :VkAccelerationStructureTrianglesDisplacementMicromapNV;
vkPipelinePropertiesIdentifierEXT @905 :VkPipelinePropertiesIdentifierEXT;
vkPhysicalDevicePipelinePropertiesFeaturesEXT @906 :VkPhysicalDevicePipelinePropertiesFeaturesEXT;
vkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD @907 :VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD;
vkExternalMemoryAcquireUnmodifiedEXT @908 :VkExternalMemoryAcquireUnmodifiedEXT;
vkExportMetalObjectCreateInfoEXT @909 :VkExportMetalObjectCreateInfoEXT;
vkExportMetalObjectsInfoEXT @910 :VkExportMetalObjectsInfoEXT;
vkExportMetalDeviceInfoEXT @911 :VkExportMetalDeviceInfoEXT;
vkExportMetalCommandQueueInfoEXT @912 :VkExportMetalCommandQueueInfoEXT;
vkExportMetalBufferInfoEXT @913 :VkExportMetalBufferInfoEXT;
vkImportMetalBufferInfoEXT @914 :VkImportMetalBufferInfoEXT;
vkExportMetalTextureInfoEXT @915 :VkExportMetalTextureInfoEXT;
vkImportMetalTextureInfoEXT @916 :VkImportMetalTextureInfoEXT;
vkExportMetalIOSurfaceInfoEXT @917 :VkExportMetalIOSurfaceInfoEXT;
vkImportMetalIOSurfaceInfoEXT @918 :VkImportMetalIOSurfaceInfoEXT;
vkExportMetalSharedEventInfoEXT @919 :VkExportMetalSharedEventInfoEXT;
vkImportMetalSharedEventInfoEXT @920 :VkImportMetalSharedEventInfoEXT;
vkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT @921 :VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT;
vkPhysicalDevicePipelineRobustnessFeaturesEXT @922 :VkPhysicalDevicePipelineRobustnessFeaturesEXT;
vkPipelineRobustnessCreateInfoEXT @923 :VkPipelineRobustnessCreateInfoEXT;
vkPhysicalDevicePipelineRobustnessPropertiesEXT @924 :VkPhysicalDevicePipelineRobustnessPropertiesEXT;
vkImageViewSampleWeightCreateInfoQCOM @925 :VkImageViewSampleWeightCreateInfoQCOM;
vkPhysicalDeviceImageProcessingFeaturesQCOM @926 :VkPhysicalDeviceImageProcessingFeaturesQCOM;
vkPhysicalDeviceImageProcessingPropertiesQCOM @927 :VkPhysicalDeviceImageProcessingPropertiesQCOM;
vkPhysicalDeviceTilePropertiesFeaturesQCOM @928 :VkPhysicalDeviceTilePropertiesFeaturesQCOM;
vkTilePropertiesQCOM @929 :VkTilePropertiesQCOM;
vkPhysicalDeviceAmigoProfilingFeaturesSEC @930 :VkPhysicalDeviceAmigoProfilingFeaturesSEC;
vkAmigoProfilingSubmitInfoSEC @931 :VkAmigoProfilingSubmitInfoSEC;
vkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT @932 :VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT;
vkPhysicalDeviceDepthClampZeroOneFeaturesEXT @933 :VkPhysicalDeviceDepthClampZeroOneFeaturesEXT;
vkPhysicalDeviceAddressBindingReportFeaturesEXT @934 :VkPhysicalDeviceAddressBindingReportFeaturesEXT;
vkDeviceAddressBindingCallbackDataEXT @935 :VkDeviceAddressBindingCallbackDataEXT;
vkPhysicalDeviceOpticalFlowFeaturesNV @936 :VkPhysicalDeviceOpticalFlowFeaturesNV;
vkPhysicalDeviceOpticalFlowPropertiesNV @937 :VkPhysicalDeviceOpticalFlowPropertiesNV;
vkOpticalFlowImageFormatInfoNV @938 :VkOpticalFlowImageFormatInfoNV;
vkOpticalFlowImageFormatPropertiesNV @939 :VkOpticalFlowImageFormatPropertiesNV;
vkOpticalFlowSessionCreateInfoNV @940 :VkOpticalFlowSessionCreateInfoNV;
vkOpticalFlowSessionCreatePrivateDataInfoNV @941 :VkOpticalFlowSessionCreatePrivateDataInfoNV;
vkOpticalFlowExecuteInfoNV @942 :VkOpticalFlowExecuteInfoNV;
vkPhysicalDeviceFaultFeaturesEXT @943 :VkPhysicalDeviceFaultFeaturesEXT;
vkDeviceFaultAddressInfoEXT @944 :VkDeviceFaultAddressInfoEXT;
vkDeviceFaultVendorInfoEXT @945 :VkDeviceFaultVendorInfoEXT;
vkDeviceFaultCountsEXT @946 :VkDeviceFaultCountsEXT;
vkDeviceFaultInfoEXT @947 :VkDeviceFaultInfoEXT;
vkDeviceFaultVendorBinaryHeaderVersionOneEXT @948 :VkDeviceFaultVendorBinaryHeaderVersionOneEXT;
vkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT @949 :VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT;
vkDepthBiasInfoEXT @950 :VkDepthBiasInfoEXT;
vkDepthBiasRepresentationInfoEXT @951 :VkDepthBiasRepresentationInfoEXT;
vkDecompressMemoryRegionNV @952 :VkDecompressMemoryRegionNV;
vkPhysicalDeviceShaderCoreBuiltinsPropertiesARM @953 :VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM;
vkPhysicalDeviceShaderCoreBuiltinsFeaturesARM @954 :VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM;
vkFrameBoundaryEXT @955 :VkFrameBoundaryEXT;
vkPhysicalDeviceFrameBoundaryFeaturesEXT @956 :VkPhysicalDeviceFrameBoundaryFeaturesEXT;
vkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT @957 :VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT;
vkSurfacePresentModeEXT @958 :VkSurfacePresentModeEXT;
vkSurfacePresentScalingCapabilitiesEXT @959 :VkSurfacePresentScalingCapabilitiesEXT;
vkSurfacePresentModeCompatibilityEXT @960 :VkSurfacePresentModeCompatibilityEXT;
vkPhysicalDeviceSwapchainMaintenance1FeaturesEXT @961 :VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT;
vkSwapchainPresentFenceInfoEXT @962 :VkSwapchainPresentFenceInfoEXT;
vkSwapchainPresentModesCreateInfoEXT @963 :VkSwapchainPresentModesCreateInfoEXT;
vkSwapchainPresentModeInfoEXT @964 :VkSwapchainPresentModeInfoEXT;
vkSwapchainPresentScalingCreateInfoEXT @965 :VkSwapchainPresentScalingCreateInfoEXT;
vkReleaseSwapchainImagesInfoEXT @966 :VkReleaseSwapchainImagesInfoEXT;
vkPhysicalDeviceDepthBiasControlFeaturesEXT @967 :VkPhysicalDeviceDepthBiasControlFeaturesEXT;
vkPhysicalDeviceRayTracingInvocationReorderFeaturesNV @968 :VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV;
vkPhysicalDeviceRayTracingInvocationReorderPropertiesNV @969 :VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV;
vkDirectDriverLoadingInfoLUNARG @970 :VkDirectDriverLoadingInfoLUNARG;
vkDirectDriverLoadingListLUNARG @971 :VkDirectDriverLoadingListLUNARG;
vkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM @972 :VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM;
vkPhysicalDeviceRayTracingPositionFetchFeaturesKHR @973 :VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR;
vkDeviceImageSubresourceInfoKHR @974 :VkDeviceImageSubresourceInfoKHR;
vkPhysicalDeviceShaderCorePropertiesARM @975 :VkPhysicalDeviceShaderCorePropertiesARM;
vkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM @976 :VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM;
vkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM @977 :VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM;
vkQueryLowLatencySupportNV @978 :VkQueryLowLatencySupportNV;
vkMemoryMapInfoKHR @979 :VkMemoryMapInfoKHR;
vkMemoryUnmapInfoKHR @980 :VkMemoryUnmapInfoKHR;
vkPhysicalDeviceShaderObjectFeaturesEXT @981 :VkPhysicalDeviceShaderObjectFeaturesEXT;
vkPhysicalDeviceShaderObjectPropertiesEXT @982 :VkPhysicalDeviceShaderObjectPropertiesEXT;
vkShaderCreateInfoEXT @983 :VkShaderCreateInfoEXT;
vkPhysicalDeviceShaderTileImageFeaturesEXT @984 :VkPhysicalDeviceShaderTileImageFeaturesEXT;
vkPhysicalDeviceShaderTileImagePropertiesEXT @985 :VkPhysicalDeviceShaderTileImagePropertiesEXT;
vkImportScreenBufferInfoQNX @986 :VkImportScreenBufferInfoQNX;
vkScreenBufferPropertiesQNX @987 :VkScreenBufferPropertiesQNX;
vkScreenBufferFormatPropertiesQNX @988 :VkScreenBufferFormatPropertiesQNX;
vkExternalFormatQNX @989 :VkExternalFormatQNX;
vkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX @990 :VkPhysicalDeviceExternalMemoryScreenBufferFeaturesQNX;
vkPhysicalDeviceCooperativeMatrixFeaturesKHR @991 :VkPhysicalDeviceCooperativeMatrixFeaturesKHR;
vkCooperativeMatrixPropertiesKHR @992 :VkCooperativeMatrixPropertiesKHR;
vkPhysicalDeviceCooperativeMatrixPropertiesKHR @993 :VkPhysicalDeviceCooperativeMatrixPropertiesKHR;
vkPhysicalDeviceShaderEnqueuePropertiesAMDX @994 :VkPhysicalDeviceShaderEnqueuePropertiesAMDX;
vkPhysicalDeviceShaderEnqueueFeaturesAMDX @995 :VkPhysicalDeviceShaderEnqueueFeaturesAMDX;
vkExecutionGraphPipelineCreateInfoAMDX @996 :VkExecutionGraphPipelineCreateInfoAMDX;
vkPipelineShaderStageNodeCreateInfoAMDX @997 :VkPipelineShaderStageNodeCreateInfoAMDX;
vkExecutionGraphPipelineScratchSizeAMDX @998 :VkExecutionGraphPipelineScratchSizeAMDX;
vkDispatchGraphInfoAMDX @999 :VkDispatchGraphInfoAMDX;
vkDispatchGraphCountInfoAMDX @1000 :VkDispatchGraphCountInfoAMDX;
vkPhysicalDeviceCubicClampFeaturesQCOM @1001 :VkPhysicalDeviceCubicClampFeaturesQCOM;
vkPhysicalDeviceYcbcrDegammaFeaturesQCOM @1002 :VkPhysicalDeviceYcbcrDegammaFeaturesQCOM;
vkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM @1003 :VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM;
vkPhysicalDeviceCubicWeightsFeaturesQCOM @1004 :VkPhysicalDeviceCubicWeightsFeaturesQCOM;
vkSamplerCubicWeightsCreateInfoQCOM @1005 :VkSamplerCubicWeightsCreateInfoQCOM;
vkBlitImageCubicWeightsInfoQCOM @1006 :VkBlitImageCubicWeightsInfoQCOM;
vkPhysicalDeviceImageProcessing2FeaturesQCOM @1007 :VkPhysicalDeviceImageProcessing2FeaturesQCOM;
vkPhysicalDeviceImageProcessing2PropertiesQCOM @1008 :VkPhysicalDeviceImageProcessing2PropertiesQCOM;
vkSamplerBlockMatchWindowCreateInfoQCOM @1009 :VkSamplerBlockMatchWindowCreateInfoQCOM;
vkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV @1010 :VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV;
vkPhysicalDeviceLayeredDriverPropertiesMSFT @1011 :VkPhysicalDeviceLayeredDriverPropertiesMSFT;
}
}

struct PUserData {
pFNvkInternalAllocationNotification @0 :UInt64;
pFNvkInternalFreeNotification @1 :UInt64;
pFNvkReallocationFunction @2 :UInt64;
pFNvkAllocationFunction @3 :UInt64;
pFNvkFreeFunction @4 :UInt64;
pFNvkVoidFunction @5 :UInt64;
pFNvkDebugReportCallbackEXT @6 :UInt64;
pFNvkDebugUtilsMessengerCallbackEXT @7 :UInt64;
pFNvkFaultCallbackFunction @8 :UInt64;
pFNvkDeviceMemoryReportCallbackEXT @9 :UInt64;
pFNvkGetInstanceProcAddrLUNARG @10 :UInt64;
}


    struct Sync {
        devicememory @0 :UInt64;
        mem @1 :UInt64;
        starts @2 :List(UInt64);
        lengths @3 :List(UInt64);
        hashes @4 :List(Text);
        buffers @5 :List(Data);
    }
    


    struct Message {
        uuid @0 :Int64;
        union {
        sync @1 :Sync;
    
pFNvkInternalAllocationNotification @2 :PFNvkInternalAllocationNotification;
pFNvkInternalFreeNotification @3 :PFNvkInternalFreeNotification;
pFNvkReallocationFunction @4 :PFNvkReallocationFunction;
pFNvkAllocationFunction @5 :PFNvkAllocationFunction;
pFNvkFreeFunction @6 :PFNvkFreeFunction;
pFNvkVoidFunction @7 :PFNvkVoidFunction;
pFNvkDebugReportCallbackEXT @8 :PFNvkDebugReportCallbackEXT;
pFNvkDebugUtilsMessengerCallbackEXT @9 :PFNvkDebugUtilsMessengerCallbackEXT;
pFNvkFaultCallbackFunction @10 :PFNvkFaultCallbackFunction;
pFNvkDeviceMemoryReportCallbackEXT @11 :PFNvkDeviceMemoryReportCallbackEXT;
pFNvkGetInstanceProcAddrLUNARG @12 :PFNvkGetInstanceProcAddrLUNARG;
vkCreateInstance @13 :VkCreateInstance;
vkDestroyInstance @14 :VkDestroyInstance;
vkEnumeratePhysicalDevices @15 :VkEnumeratePhysicalDevices;
vkGetDeviceProcAddr @16 :VkGetDeviceProcAddr;
vkGetInstanceProcAddr @17 :VkGetInstanceProcAddr;
vkGetPhysicalDeviceProperties @18 :VkGetPhysicalDeviceProperties;
vkGetPhysicalDeviceQueueFamilyProperties @19 :VkGetPhysicalDeviceQueueFamilyProperties;
vkGetPhysicalDeviceMemoryProperties @20 :VkGetPhysicalDeviceMemoryProperties;
vkGetPhysicalDeviceFeatures @21 :VkGetPhysicalDeviceFeatures;
vkGetPhysicalDeviceFormatProperties @22 :VkGetPhysicalDeviceFormatProperties;
vkGetPhysicalDeviceImageFormatProperties @23 :VkGetPhysicalDeviceImageFormatProperties;
vkCreateDevice @24 :VkCreateDevice;
vkDestroyDevice @25 :VkDestroyDevice;
vkEnumerateInstanceVersion @26 :VkEnumerateInstanceVersion;
vkEnumerateInstanceLayerProperties @27 :VkEnumerateInstanceLayerProperties;
vkEnumerateInstanceExtensionProperties @28 :VkEnumerateInstanceExtensionProperties;
vkEnumerateDeviceLayerProperties @29 :VkEnumerateDeviceLayerProperties;
vkEnumerateDeviceExtensionProperties @30 :VkEnumerateDeviceExtensionProperties;
vkGetDeviceQueue @31 :VkGetDeviceQueue;
vkQueueSubmit @32 :VkQueueSubmit;
vkQueueWaitIdle @33 :VkQueueWaitIdle;
vkDeviceWaitIdle @34 :VkDeviceWaitIdle;
vkAllocateMemory @35 :VkAllocateMemory;
vkFreeMemory @36 :VkFreeMemory;
vkMapMemory @37 :VkMapMemory;
vkUnmapMemory @38 :VkUnmapMemory;
vkFlushMappedMemoryRanges @39 :VkFlushMappedMemoryRanges;
vkInvalidateMappedMemoryRanges @40 :VkInvalidateMappedMemoryRanges;
vkGetDeviceMemoryCommitment @41 :VkGetDeviceMemoryCommitment;
vkGetBufferMemoryRequirements @42 :VkGetBufferMemoryRequirements;
vkBindBufferMemory @43 :VkBindBufferMemory;
vkGetImageMemoryRequirements @44 :VkGetImageMemoryRequirements;
vkBindImageMemory @45 :VkBindImageMemory;
vkGetImageSparseMemoryRequirements @46 :VkGetImageSparseMemoryRequirements;
vkGetPhysicalDeviceSparseImageFormatProperties @47 :VkGetPhysicalDeviceSparseImageFormatProperties;
vkQueueBindSparse @48 :VkQueueBindSparse;
vkCreateFence @49 :VkCreateFence;
vkDestroyFence @50 :VkDestroyFence;
vkResetFences @51 :VkResetFences;
vkGetFenceStatus @52 :VkGetFenceStatus;
vkWaitForFences @53 :VkWaitForFences;
vkCreateSemaphore @54 :VkCreateSemaphore;
vkDestroySemaphore @55 :VkDestroySemaphore;
vkCreateEvent @56 :VkCreateEvent;
vkDestroyEvent @57 :VkDestroyEvent;
vkGetEventStatus @58 :VkGetEventStatus;
vkSetEvent @59 :VkSetEvent;
vkResetEvent @60 :VkResetEvent;
vkCreateQueryPool @61 :VkCreateQueryPool;
vkDestroyQueryPool @62 :VkDestroyQueryPool;
vkGetQueryPoolResults @63 :VkGetQueryPoolResults;
vkResetQueryPool @64 :VkResetQueryPool;
vkCreateBuffer @65 :VkCreateBuffer;
vkDestroyBuffer @66 :VkDestroyBuffer;
vkCreateBufferView @67 :VkCreateBufferView;
vkDestroyBufferView @68 :VkDestroyBufferView;
vkCreateImage @69 :VkCreateImage;
vkDestroyImage @70 :VkDestroyImage;
vkGetImageSubresourceLayout @71 :VkGetImageSubresourceLayout;
vkCreateImageView @72 :VkCreateImageView;
vkDestroyImageView @73 :VkDestroyImageView;
vkCreateShaderModule @74 :VkCreateShaderModule;
vkDestroyShaderModule @75 :VkDestroyShaderModule;
vkCreatePipelineCache @76 :VkCreatePipelineCache;
vkDestroyPipelineCache @77 :VkDestroyPipelineCache;
vkGetPipelineCacheData @78 :VkGetPipelineCacheData;
vkMergePipelineCaches @79 :VkMergePipelineCaches;
vkCreateGraphicsPipelines @80 :VkCreateGraphicsPipelines;
vkCreateComputePipelines @81 :VkCreateComputePipelines;
vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI @82 :VkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI;
vkDestroyPipeline @83 :VkDestroyPipeline;
vkCreatePipelineLayout @84 :VkCreatePipelineLayout;
vkDestroyPipelineLayout @85 :VkDestroyPipelineLayout;
vkCreateSampler @86 :VkCreateSampler;
vkDestroySampler @87 :VkDestroySampler;
vkCreateDescriptorSetLayout @88 :VkCreateDescriptorSetLayout;
vkDestroyDescriptorSetLayout @89 :VkDestroyDescriptorSetLayout;
vkCreateDescriptorPool @90 :VkCreateDescriptorPool;
vkDestroyDescriptorPool @91 :VkDestroyDescriptorPool;
vkResetDescriptorPool @92 :VkResetDescriptorPool;
vkAllocateDescriptorSets @93 :VkAllocateDescriptorSets;
vkFreeDescriptorSets @94 :VkFreeDescriptorSets;
vkUpdateDescriptorSets @95 :VkUpdateDescriptorSets;
vkCreateFramebuffer @96 :VkCreateFramebuffer;
vkDestroyFramebuffer @97 :VkDestroyFramebuffer;
vkCreateRenderPass @98 :VkCreateRenderPass;
vkDestroyRenderPass @99 :VkDestroyRenderPass;
vkGetRenderAreaGranularity @100 :VkGetRenderAreaGranularity;
vkGetRenderingAreaGranularityKHR @101 :VkGetRenderingAreaGranularityKHR;
vkCreateCommandPool @102 :VkCreateCommandPool;
vkDestroyCommandPool @103 :VkDestroyCommandPool;
vkResetCommandPool @104 :VkResetCommandPool;
vkAllocateCommandBuffers @105 :VkAllocateCommandBuffers;
vkFreeCommandBuffers @106 :VkFreeCommandBuffers;
vkBeginCommandBuffer @107 :VkBeginCommandBuffer;
vkEndCommandBuffer @108 :VkEndCommandBuffer;
vkResetCommandBuffer @109 :VkResetCommandBuffer;
vkCmdBindPipeline @110 :VkCmdBindPipeline;
vkCmdSetAttachmentFeedbackLoopEnableEXT @111 :VkCmdSetAttachmentFeedbackLoopEnableEXT;
vkCmdSetViewport @112 :VkCmdSetViewport;
vkCmdSetScissor @113 :VkCmdSetScissor;
vkCmdSetLineWidth @114 :VkCmdSetLineWidth;
vkCmdSetDepthBias @115 :VkCmdSetDepthBias;
vkCmdSetBlendConstants @116 :VkCmdSetBlendConstants;
vkCmdSetDepthBounds @117 :VkCmdSetDepthBounds;
vkCmdSetStencilCompareMask @118 :VkCmdSetStencilCompareMask;
vkCmdSetStencilWriteMask @119 :VkCmdSetStencilWriteMask;
vkCmdSetStencilReference @120 :VkCmdSetStencilReference;
vkCmdBindDescriptorSets @121 :VkCmdBindDescriptorSets;
vkCmdBindIndexBuffer @122 :VkCmdBindIndexBuffer;
vkCmdBindVertexBuffers @123 :VkCmdBindVertexBuffers;
vkCmdDraw @124 :VkCmdDraw;
vkCmdDrawIndexed @125 :VkCmdDrawIndexed;
vkCmdDrawMultiEXT @126 :VkCmdDrawMultiEXT;
vkCmdDrawMultiIndexedEXT @127 :VkCmdDrawMultiIndexedEXT;
vkCmdDrawIndirect @128 :VkCmdDrawIndirect;
vkCmdDrawIndexedIndirect @129 :VkCmdDrawIndexedIndirect;
vkCmdDispatch @130 :VkCmdDispatch;
vkCmdDispatchIndirect @131 :VkCmdDispatchIndirect;
vkCmdSubpassShadingHUAWEI @132 :VkCmdSubpassShadingHUAWEI;
vkCmdDrawClusterHUAWEI @133 :VkCmdDrawClusterHUAWEI;
vkCmdDrawClusterIndirectHUAWEI @134 :VkCmdDrawClusterIndirectHUAWEI;
vkCmdUpdatePipelineIndirectBufferNV @135 :VkCmdUpdatePipelineIndirectBufferNV;
vkCmdCopyBuffer @136 :VkCmdCopyBuffer;
vkCmdCopyImage @137 :VkCmdCopyImage;
vkCmdBlitImage @138 :VkCmdBlitImage;
vkCmdCopyBufferToImage @139 :VkCmdCopyBufferToImage;
vkCmdCopyImageToBuffer @140 :VkCmdCopyImageToBuffer;
vkCmdCopyMemoryIndirectNV @141 :VkCmdCopyMemoryIndirectNV;
vkCmdCopyMemoryToImageIndirectNV @142 :VkCmdCopyMemoryToImageIndirectNV;
vkCmdUpdateBuffer @143 :VkCmdUpdateBuffer;
vkCmdFillBuffer @144 :VkCmdFillBuffer;
vkCmdClearColorImage @145 :VkCmdClearColorImage;
vkCmdClearDepthStencilImage @146 :VkCmdClearDepthStencilImage;
vkCmdClearAttachments @147 :VkCmdClearAttachments;
vkCmdResolveImage @148 :VkCmdResolveImage;
vkCmdSetEvent @149 :VkCmdSetEvent;
vkCmdResetEvent @150 :VkCmdResetEvent;
vkCmdWaitEvents @151 :VkCmdWaitEvents;
vkCmdPipelineBarrier @152 :VkCmdPipelineBarrier;
vkCmdBeginQuery @153 :VkCmdBeginQuery;
vkCmdEndQuery @154 :VkCmdEndQuery;
vkCmdBeginConditionalRenderingEXT @155 :VkCmdBeginConditionalRenderingEXT;
vkCmdEndConditionalRenderingEXT @156 :VkCmdEndConditionalRenderingEXT;
vkCmdResetQueryPool @157 :VkCmdResetQueryPool;
vkCmdWriteTimestamp @158 :VkCmdWriteTimestamp;
vkCmdCopyQueryPoolResults @159 :VkCmdCopyQueryPoolResults;
vkCmdPushConstants @160 :VkCmdPushConstants;
vkCmdBeginRenderPass @161 :VkCmdBeginRenderPass;
vkCmdNextSubpass @162 :VkCmdNextSubpass;
vkCmdEndRenderPass @163 :VkCmdEndRenderPass;
vkCmdExecuteCommands @164 :VkCmdExecuteCommands;
vkCreateAndroidSurfaceKHR @165 :VkCreateAndroidSurfaceKHR;
vkGetPhysicalDeviceDisplayPropertiesKHR @166 :VkGetPhysicalDeviceDisplayPropertiesKHR;
vkGetPhysicalDeviceDisplayPlanePropertiesKHR @167 :VkGetPhysicalDeviceDisplayPlanePropertiesKHR;
vkGetDisplayPlaneSupportedDisplaysKHR @168 :VkGetDisplayPlaneSupportedDisplaysKHR;
vkGetDisplayModePropertiesKHR @169 :VkGetDisplayModePropertiesKHR;
vkCreateDisplayModeKHR @170 :VkCreateDisplayModeKHR;
vkGetDisplayPlaneCapabilitiesKHR @171 :VkGetDisplayPlaneCapabilitiesKHR;
vkCreateDisplayPlaneSurfaceKHR @172 :VkCreateDisplayPlaneSurfaceKHR;
vkCreateSharedSwapchainsKHR @173 :VkCreateSharedSwapchainsKHR;
vkDestroySurfaceKHR @174 :VkDestroySurfaceKHR;
vkGetPhysicalDeviceSurfaceSupportKHR @175 :VkGetPhysicalDeviceSurfaceSupportKHR;
vkGetPhysicalDeviceSurfaceCapabilitiesKHR @176 :VkGetPhysicalDeviceSurfaceCapabilitiesKHR;
vkGetPhysicalDeviceSurfaceFormatsKHR @177 :VkGetPhysicalDeviceSurfaceFormatsKHR;
vkGetPhysicalDeviceSurfacePresentModesKHR @178 :VkGetPhysicalDeviceSurfacePresentModesKHR;
vkCreateSwapchainKHR @179 :VkCreateSwapchainKHR;
vkDestroySwapchainKHR @180 :VkDestroySwapchainKHR;
vkGetSwapchainImagesKHR @181 :VkGetSwapchainImagesKHR;
vkAcquireNextImageKHR @182 :VkAcquireNextImageKHR;
vkQueuePresentKHR @183 :VkQueuePresentKHR;
vkCreateViSurfaceNN @184 :VkCreateViSurfaceNN;
vkCreateWaylandSurfaceKHR @185 :VkCreateWaylandSurfaceKHR;
vkGetPhysicalDeviceWaylandPresentationSupportKHR @186 :VkGetPhysicalDeviceWaylandPresentationSupportKHR;
vkCreateWin32SurfaceKHR @187 :VkCreateWin32SurfaceKHR;
vkGetPhysicalDeviceWin32PresentationSupportKHR @188 :VkGetPhysicalDeviceWin32PresentationSupportKHR;
vkCreateXlibSurfaceKHR @189 :VkCreateXlibSurfaceKHR;
vkGetPhysicalDeviceXlibPresentationSupportKHR @190 :VkGetPhysicalDeviceXlibPresentationSupportKHR;
vkCreateXcbSurfaceKHR @191 :VkCreateXcbSurfaceKHR;
vkGetPhysicalDeviceXcbPresentationSupportKHR @192 :VkGetPhysicalDeviceXcbPresentationSupportKHR;
vkCreateDirectFBSurfaceEXT @193 :VkCreateDirectFBSurfaceEXT;
vkGetPhysicalDeviceDirectFBPresentationSupportEXT @194 :VkGetPhysicalDeviceDirectFBPresentationSupportEXT;
vkCreateImagePipeSurfaceFUCHSIA @195 :VkCreateImagePipeSurfaceFUCHSIA;
vkCreateStreamDescriptorSurfaceGGP @196 :VkCreateStreamDescriptorSurfaceGGP;
vkCreateScreenSurfaceQNX @197 :VkCreateScreenSurfaceQNX;
vkGetPhysicalDeviceScreenPresentationSupportQNX @198 :VkGetPhysicalDeviceScreenPresentationSupportQNX;
vkCreateDebugReportCallbackEXT @199 :VkCreateDebugReportCallbackEXT;
vkDestroyDebugReportCallbackEXT @200 :VkDestroyDebugReportCallbackEXT;
vkDebugReportMessageEXT @201 :VkDebugReportMessageEXT;
vkDebugMarkerSetObjectNameEXT @202 :VkDebugMarkerSetObjectNameEXT;
vkDebugMarkerSetObjectTagEXT @203 :VkDebugMarkerSetObjectTagEXT;
vkCmdDebugMarkerBeginEXT @204 :VkCmdDebugMarkerBeginEXT;
vkCmdDebugMarkerEndEXT @205 :VkCmdDebugMarkerEndEXT;
vkCmdDebugMarkerInsertEXT @206 :VkCmdDebugMarkerInsertEXT;
vkGetPhysicalDeviceExternalImageFormatPropertiesNV @207 :VkGetPhysicalDeviceExternalImageFormatPropertiesNV;
vkGetMemoryWin32HandleNV @208 :VkGetMemoryWin32HandleNV;
vkCmdExecuteGeneratedCommandsNV @209 :VkCmdExecuteGeneratedCommandsNV;
vkCmdPreprocessGeneratedCommandsNV @210 :VkCmdPreprocessGeneratedCommandsNV;
vkCmdBindPipelineShaderGroupNV @211 :VkCmdBindPipelineShaderGroupNV;
vkGetGeneratedCommandsMemoryRequirementsNV @212 :VkGetGeneratedCommandsMemoryRequirementsNV;
vkCreateIndirectCommandsLayoutNV @213 :VkCreateIndirectCommandsLayoutNV;
vkDestroyIndirectCommandsLayoutNV @214 :VkDestroyIndirectCommandsLayoutNV;
vkGetPhysicalDeviceFeatures2 @215 :VkGetPhysicalDeviceFeatures2;
vkGetPhysicalDeviceProperties2 @216 :VkGetPhysicalDeviceProperties2;
vkGetPhysicalDeviceFormatProperties2 @217 :VkGetPhysicalDeviceFormatProperties2;
vkGetPhysicalDeviceImageFormatProperties2 @218 :VkGetPhysicalDeviceImageFormatProperties2;
vkGetPhysicalDeviceQueueFamilyProperties2 @219 :VkGetPhysicalDeviceQueueFamilyProperties2;
vkGetPhysicalDeviceMemoryProperties2 @220 :VkGetPhysicalDeviceMemoryProperties2;
vkGetPhysicalDeviceSparseImageFormatProperties2 @221 :VkGetPhysicalDeviceSparseImageFormatProperties2;
vkCmdPushDescriptorSetKHR @222 :VkCmdPushDescriptorSetKHR;
vkTrimCommandPool @223 :VkTrimCommandPool;
vkGetPhysicalDeviceExternalBufferProperties @224 :VkGetPhysicalDeviceExternalBufferProperties;
vkGetMemoryWin32HandleKHR @225 :VkGetMemoryWin32HandleKHR;
vkGetMemoryWin32HandlePropertiesKHR @226 :VkGetMemoryWin32HandlePropertiesKHR;
vkGetMemoryFdKHR @227 :VkGetMemoryFdKHR;
vkGetMemoryFdPropertiesKHR @228 :VkGetMemoryFdPropertiesKHR;
vkGetMemoryZirconHandleFUCHSIA @229 :VkGetMemoryZirconHandleFUCHSIA;
vkGetMemoryZirconHandlePropertiesFUCHSIA @230 :VkGetMemoryZirconHandlePropertiesFUCHSIA;
vkGetMemoryRemoteAddressNV @231 :VkGetMemoryRemoteAddressNV;
vkGetMemorySciBufNV @232 :VkGetMemorySciBufNV;
vkGetPhysicalDeviceExternalMemorySciBufPropertiesNV @233 :VkGetPhysicalDeviceExternalMemorySciBufPropertiesNV;
vkGetPhysicalDeviceSciBufAttributesNV @234 :VkGetPhysicalDeviceSciBufAttributesNV;
vkGetPhysicalDeviceExternalSemaphoreProperties @235 :VkGetPhysicalDeviceExternalSemaphoreProperties;
vkGetSemaphoreWin32HandleKHR @236 :VkGetSemaphoreWin32HandleKHR;
vkImportSemaphoreWin32HandleKHR @237 :VkImportSemaphoreWin32HandleKHR;
vkGetSemaphoreFdKHR @238 :VkGetSemaphoreFdKHR;
vkImportSemaphoreFdKHR @239 :VkImportSemaphoreFdKHR;
vkGetSemaphoreZirconHandleFUCHSIA @240 :VkGetSemaphoreZirconHandleFUCHSIA;
vkImportSemaphoreZirconHandleFUCHSIA @241 :VkImportSemaphoreZirconHandleFUCHSIA;
vkGetPhysicalDeviceExternalFenceProperties @242 :VkGetPhysicalDeviceExternalFenceProperties;
vkGetFenceWin32HandleKHR @243 :VkGetFenceWin32HandleKHR;
vkImportFenceWin32HandleKHR @244 :VkImportFenceWin32HandleKHR;
vkGetFenceFdKHR @245 :VkGetFenceFdKHR;
vkImportFenceFdKHR @246 :VkImportFenceFdKHR;
vkGetFenceSciSyncFenceNV @247 :VkGetFenceSciSyncFenceNV;
vkGetFenceSciSyncObjNV @248 :VkGetFenceSciSyncObjNV;
vkImportFenceSciSyncFenceNV @249 :VkImportFenceSciSyncFenceNV;
vkImportFenceSciSyncObjNV @250 :VkImportFenceSciSyncObjNV;
vkGetSemaphoreSciSyncObjNV @251 :VkGetSemaphoreSciSyncObjNV;
vkImportSemaphoreSciSyncObjNV @252 :VkImportSemaphoreSciSyncObjNV;
vkGetPhysicalDeviceSciSyncAttributesNV @253 :VkGetPhysicalDeviceSciSyncAttributesNV;
vkCreateSemaphoreSciSyncPoolNV @254 :VkCreateSemaphoreSciSyncPoolNV;
vkDestroySemaphoreSciSyncPoolNV @255 :VkDestroySemaphoreSciSyncPoolNV;
vkReleaseDisplayEXT @256 :VkReleaseDisplayEXT;
vkAcquireXlibDisplayEXT @257 :VkAcquireXlibDisplayEXT;
vkGetRandROutputDisplayEXT @258 :VkGetRandROutputDisplayEXT;
vkAcquireWinrtDisplayNV @259 :VkAcquireWinrtDisplayNV;
vkGetWinrtDisplayNV @260 :VkGetWinrtDisplayNV;
vkDisplayPowerControlEXT @261 :VkDisplayPowerControlEXT;
vkRegisterDeviceEventEXT @262 :VkRegisterDeviceEventEXT;
vkRegisterDisplayEventEXT @263 :VkRegisterDisplayEventEXT;
vkGetSwapchainCounterEXT @264 :VkGetSwapchainCounterEXT;
vkGetPhysicalDeviceSurfaceCapabilities2EXT @265 :VkGetPhysicalDeviceSurfaceCapabilities2EXT;
vkEnumeratePhysicalDeviceGroups @266 :VkEnumeratePhysicalDeviceGroups;
vkGetDeviceGroupPeerMemoryFeatures @267 :VkGetDeviceGroupPeerMemoryFeatures;
vkBindBufferMemory2 @268 :VkBindBufferMemory2;
vkBindImageMemory2 @269 :VkBindImageMemory2;
vkCmdSetDeviceMask @270 :VkCmdSetDeviceMask;
vkGetDeviceGroupPresentCapabilitiesKHR @271 :VkGetDeviceGroupPresentCapabilitiesKHR;
vkGetDeviceGroupSurfacePresentModesKHR @272 :VkGetDeviceGroupSurfacePresentModesKHR;
vkAcquireNextImage2KHR @273 :VkAcquireNextImage2KHR;
vkCmdDispatchBase @274 :VkCmdDispatchBase;
vkGetPhysicalDevicePresentRectanglesKHR @275 :VkGetPhysicalDevicePresentRectanglesKHR;
vkCreateDescriptorUpdateTemplate @276 :VkCreateDescriptorUpdateTemplate;
vkDestroyDescriptorUpdateTemplate @277 :VkDestroyDescriptorUpdateTemplate;
vkUpdateDescriptorSetWithTemplate @278 :VkUpdateDescriptorSetWithTemplate;
vkCmdPushDescriptorSetWithTemplateKHR @279 :VkCmdPushDescriptorSetWithTemplateKHR;
vkSetHdrMetadataEXT @280 :VkSetHdrMetadataEXT;
vkGetSwapchainStatusKHR @281 :VkGetSwapchainStatusKHR;
vkGetRefreshCycleDurationGOOGLE @282 :VkGetRefreshCycleDurationGOOGLE;
vkGetPastPresentationTimingGOOGLE @283 :VkGetPastPresentationTimingGOOGLE;
vkCreateIOSSurfaceMVK @284 :VkCreateIOSSurfaceMVK;
vkCreateMacOSSurfaceMVK @285 :VkCreateMacOSSurfaceMVK;
vkCreateMetalSurfaceEXT @286 :VkCreateMetalSurfaceEXT;
vkCmdSetViewportWScalingNV @287 :VkCmdSetViewportWScalingNV;
vkCmdSetDiscardRectangleEXT @288 :VkCmdSetDiscardRectangleEXT;
vkCmdSetDiscardRectangleEnableEXT @289 :VkCmdSetDiscardRectangleEnableEXT;
vkCmdSetDiscardRectangleModeEXT @290 :VkCmdSetDiscardRectangleModeEXT;
vkCmdSetSampleLocationsEXT @291 :VkCmdSetSampleLocationsEXT;
vkGetPhysicalDeviceMultisamplePropertiesEXT @292 :VkGetPhysicalDeviceMultisamplePropertiesEXT;
vkGetPhysicalDeviceSurfaceCapabilities2KHR @293 :VkGetPhysicalDeviceSurfaceCapabilities2KHR;
vkGetPhysicalDeviceSurfaceFormats2KHR @294 :VkGetPhysicalDeviceSurfaceFormats2KHR;
vkGetPhysicalDeviceDisplayProperties2KHR @295 :VkGetPhysicalDeviceDisplayProperties2KHR;
vkGetPhysicalDeviceDisplayPlaneProperties2KHR @296 :VkGetPhysicalDeviceDisplayPlaneProperties2KHR;
vkGetDisplayModeProperties2KHR @297 :VkGetDisplayModeProperties2KHR;
vkGetDisplayPlaneCapabilities2KHR @298 :VkGetDisplayPlaneCapabilities2KHR;
vkGetBufferMemoryRequirements2 @299 :VkGetBufferMemoryRequirements2;
vkGetImageMemoryRequirements2 @300 :VkGetImageMemoryRequirements2;
vkGetImageSparseMemoryRequirements2 @301 :VkGetImageSparseMemoryRequirements2;
vkGetDeviceBufferMemoryRequirements @302 :VkGetDeviceBufferMemoryRequirements;
vkGetDeviceImageMemoryRequirements @303 :VkGetDeviceImageMemoryRequirements;
vkGetDeviceImageSparseMemoryRequirements @304 :VkGetDeviceImageSparseMemoryRequirements;
vkCreateSamplerYcbcrConversion @305 :VkCreateSamplerYcbcrConversion;
vkDestroySamplerYcbcrConversion @306 :VkDestroySamplerYcbcrConversion;
vkGetDeviceQueue2 @307 :VkGetDeviceQueue2;
vkCreateValidationCacheEXT @308 :VkCreateValidationCacheEXT;
vkDestroyValidationCacheEXT @309 :VkDestroyValidationCacheEXT;
vkGetValidationCacheDataEXT @310 :VkGetValidationCacheDataEXT;
vkMergeValidationCachesEXT @311 :VkMergeValidationCachesEXT;
vkGetDescriptorSetLayoutSupport @312 :VkGetDescriptorSetLayoutSupport;
vkGetSwapchainGrallocUsageANDROID @313 :VkGetSwapchainGrallocUsageANDROID;
vkGetSwapchainGrallocUsage2ANDROID @314 :VkGetSwapchainGrallocUsage2ANDROID;
vkAcquireImageANDROID @315 :VkAcquireImageANDROID;
vkQueueSignalReleaseImageANDROID @316 :VkQueueSignalReleaseImageANDROID;
vkGetShaderInfoAMD @317 :VkGetShaderInfoAMD;
vkSetLocalDimmingAMD @318 :VkSetLocalDimmingAMD;
vkGetPhysicalDeviceCalibrateableTimeDomainsEXT @319 :VkGetPhysicalDeviceCalibrateableTimeDomainsEXT;
vkGetCalibratedTimestampsEXT @320 :VkGetCalibratedTimestampsEXT;
vkSetDebugUtilsObjectNameEXT @321 :VkSetDebugUtilsObjectNameEXT;
vkSetDebugUtilsObjectTagEXT @322 :VkSetDebugUtilsObjectTagEXT;
vkQueueBeginDebugUtilsLabelEXT @323 :VkQueueBeginDebugUtilsLabelEXT;
vkQueueEndDebugUtilsLabelEXT @324 :VkQueueEndDebugUtilsLabelEXT;
vkQueueInsertDebugUtilsLabelEXT @325 :VkQueueInsertDebugUtilsLabelEXT;
vkCmdBeginDebugUtilsLabelEXT @326 :VkCmdBeginDebugUtilsLabelEXT;
vkCmdEndDebugUtilsLabelEXT @327 :VkCmdEndDebugUtilsLabelEXT;
vkCmdInsertDebugUtilsLabelEXT @328 :VkCmdInsertDebugUtilsLabelEXT;
vkCreateDebugUtilsMessengerEXT @329 :VkCreateDebugUtilsMessengerEXT;
vkDestroyDebugUtilsMessengerEXT @330 :VkDestroyDebugUtilsMessengerEXT;
vkSubmitDebugUtilsMessageEXT @331 :VkSubmitDebugUtilsMessageEXT;
vkGetMemoryHostPointerPropertiesEXT @332 :VkGetMemoryHostPointerPropertiesEXT;
vkCmdWriteBufferMarkerAMD @333 :VkCmdWriteBufferMarkerAMD;
vkCreateRenderPass2 @334 :VkCreateRenderPass2;
vkCmdBeginRenderPass2 @335 :VkCmdBeginRenderPass2;
vkCmdNextSubpass2 @336 :VkCmdNextSubpass2;
vkCmdEndRenderPass2 @337 :VkCmdEndRenderPass2;
vkGetSemaphoreCounterValue @338 :VkGetSemaphoreCounterValue;
vkWaitSemaphores @339 :VkWaitSemaphores;
vkSignalSemaphore @340 :VkSignalSemaphore;
vkGetAndroidHardwareBufferPropertiesANDROID @341 :VkGetAndroidHardwareBufferPropertiesANDROID;
vkGetMemoryAndroidHardwareBufferANDROID @342 :VkGetMemoryAndroidHardwareBufferANDROID;
vkCmdDrawIndirectCount @343 :VkCmdDrawIndirectCount;
vkCmdDrawIndexedIndirectCount @344 :VkCmdDrawIndexedIndirectCount;
vkCmdSetCheckpointNV @345 :VkCmdSetCheckpointNV;
vkGetQueueCheckpointDataNV @346 :VkGetQueueCheckpointDataNV;
vkCmdBindTransformFeedbackBuffersEXT @347 :VkCmdBindTransformFeedbackBuffersEXT;
vkCmdBeginTransformFeedbackEXT @348 :VkCmdBeginTransformFeedbackEXT;
vkCmdEndTransformFeedbackEXT @349 :VkCmdEndTransformFeedbackEXT;
vkCmdBeginQueryIndexedEXT @350 :VkCmdBeginQueryIndexedEXT;
vkCmdEndQueryIndexedEXT @351 :VkCmdEndQueryIndexedEXT;
vkCmdDrawIndirectByteCountEXT @352 :VkCmdDrawIndirectByteCountEXT;
vkCmdSetExclusiveScissorNV @353 :VkCmdSetExclusiveScissorNV;
vkCmdSetExclusiveScissorEnableNV @354 :VkCmdSetExclusiveScissorEnableNV;
vkCmdBindShadingRateImageNV @355 :VkCmdBindShadingRateImageNV;
vkCmdSetViewportShadingRatePaletteNV @356 :VkCmdSetViewportShadingRatePaletteNV;
vkCmdSetCoarseSampleOrderNV @357 :VkCmdSetCoarseSampleOrderNV;
vkCmdDrawMeshTasksNV @358 :VkCmdDrawMeshTasksNV;
vkCmdDrawMeshTasksIndirectNV @359 :VkCmdDrawMeshTasksIndirectNV;
vkCmdDrawMeshTasksIndirectCountNV @360 :VkCmdDrawMeshTasksIndirectCountNV;
vkCmdDrawMeshTasksEXT @361 :VkCmdDrawMeshTasksEXT;
vkCmdDrawMeshTasksIndirectEXT @362 :VkCmdDrawMeshTasksIndirectEXT;
vkCmdDrawMeshTasksIndirectCountEXT @363 :VkCmdDrawMeshTasksIndirectCountEXT;
vkCompileDeferredNV @364 :VkCompileDeferredNV;
vkCreateAccelerationStructureNV @365 :VkCreateAccelerationStructureNV;
vkCmdBindInvocationMaskHUAWEI @366 :VkCmdBindInvocationMaskHUAWEI;
vkDestroyAccelerationStructureKHR @367 :VkDestroyAccelerationStructureKHR;
vkDestroyAccelerationStructureNV @368 :VkDestroyAccelerationStructureNV;
vkGetAccelerationStructureMemoryRequirementsNV @369 :VkGetAccelerationStructureMemoryRequirementsNV;
vkBindAccelerationStructureMemoryNV @370 :VkBindAccelerationStructureMemoryNV;
vkCmdCopyAccelerationStructureNV @371 :VkCmdCopyAccelerationStructureNV;
vkCmdCopyAccelerationStructureKHR @372 :VkCmdCopyAccelerationStructureKHR;
vkCopyAccelerationStructureKHR @373 :VkCopyAccelerationStructureKHR;
vkCmdCopyAccelerationStructureToMemoryKHR @374 :VkCmdCopyAccelerationStructureToMemoryKHR;
vkCopyAccelerationStructureToMemoryKHR @375 :VkCopyAccelerationStructureToMemoryKHR;
vkCmdCopyMemoryToAccelerationStructureKHR @376 :VkCmdCopyMemoryToAccelerationStructureKHR;
vkCopyMemoryToAccelerationStructureKHR @377 :VkCopyMemoryToAccelerationStructureKHR;
vkCmdWriteAccelerationStructuresPropertiesKHR @378 :VkCmdWriteAccelerationStructuresPropertiesKHR;
vkCmdWriteAccelerationStructuresPropertiesNV @379 :VkCmdWriteAccelerationStructuresPropertiesNV;
vkCmdBuildAccelerationStructureNV @380 :VkCmdBuildAccelerationStructureNV;
vkWriteAccelerationStructuresPropertiesKHR @381 :VkWriteAccelerationStructuresPropertiesKHR;
vkCmdTraceRaysKHR @382 :VkCmdTraceRaysKHR;
vkCmdTraceRaysNV @383 :VkCmdTraceRaysNV;
vkGetRayTracingShaderGroupHandlesKHR @384 :VkGetRayTracingShaderGroupHandlesKHR;
vkGetRayTracingCaptureReplayShaderGroupHandlesKHR @385 :VkGetRayTracingCaptureReplayShaderGroupHandlesKHR;
vkGetAccelerationStructureHandleNV @386 :VkGetAccelerationStructureHandleNV;
vkCreateRayTracingPipelinesNV @387 :VkCreateRayTracingPipelinesNV;
vkCreateRayTracingPipelinesKHR @388 :VkCreateRayTracingPipelinesKHR;
vkGetPhysicalDeviceCooperativeMatrixPropertiesNV @389 :VkGetPhysicalDeviceCooperativeMatrixPropertiesNV;
vkCmdTraceRaysIndirectKHR @390 :VkCmdTraceRaysIndirectKHR;
vkCmdTraceRaysIndirect2KHR @391 :VkCmdTraceRaysIndirect2KHR;
vkGetDeviceAccelerationStructureCompatibilityKHR @392 :VkGetDeviceAccelerationStructureCompatibilityKHR;
vkGetRayTracingShaderGroupStackSizeKHR @393 :VkGetRayTracingShaderGroupStackSizeKHR;
vkCmdSetRayTracingPipelineStackSizeKHR @394 :VkCmdSetRayTracingPipelineStackSizeKHR;
vkGetImageViewHandleNVX @395 :VkGetImageViewHandleNVX;
vkGetImageViewAddressNVX @396 :VkGetImageViewAddressNVX;
vkGetPhysicalDeviceSurfacePresentModes2EXT @397 :VkGetPhysicalDeviceSurfacePresentModes2EXT;
vkGetDeviceGroupSurfacePresentModes2EXT @398 :VkGetDeviceGroupSurfacePresentModes2EXT;
vkAcquireFullScreenExclusiveModeEXT @399 :VkAcquireFullScreenExclusiveModeEXT;
vkReleaseFullScreenExclusiveModeEXT @400 :VkReleaseFullScreenExclusiveModeEXT;
vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR @401 :VkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR;
vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR @402 :VkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR;
vkAcquireProfilingLockKHR @403 :VkAcquireProfilingLockKHR;
vkReleaseProfilingLockKHR @404 :VkReleaseProfilingLockKHR;
vkGetImageDrmFormatModifierPropertiesEXT @405 :VkGetImageDrmFormatModifierPropertiesEXT;
vkGetBufferOpaqueCaptureAddress @406 :VkGetBufferOpaqueCaptureAddress;
vkGetBufferDeviceAddress @407 :VkGetBufferDeviceAddress;
vkCreateHeadlessSurfaceEXT @408 :VkCreateHeadlessSurfaceEXT;
vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV @409 :VkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV;
vkInitializePerformanceApiINTEL @410 :VkInitializePerformanceApiINTEL;
vkUninitializePerformanceApiINTEL @411 :VkUninitializePerformanceApiINTEL;
vkCmdSetPerformanceMarkerINTEL @412 :VkCmdSetPerformanceMarkerINTEL;
vkCmdSetPerformanceStreamMarkerINTEL @413 :VkCmdSetPerformanceStreamMarkerINTEL;
vkCmdSetPerformanceOverrideINTEL @414 :VkCmdSetPerformanceOverrideINTEL;
vkAcquirePerformanceConfigurationINTEL @415 :VkAcquirePerformanceConfigurationINTEL;
vkReleasePerformanceConfigurationINTEL @416 :VkReleasePerformanceConfigurationINTEL;
vkQueueSetPerformanceConfigurationINTEL @417 :VkQueueSetPerformanceConfigurationINTEL;
vkGetPerformanceParameterINTEL @418 :VkGetPerformanceParameterINTEL;
vkGetDeviceMemoryOpaqueCaptureAddress @419 :VkGetDeviceMemoryOpaqueCaptureAddress;
vkGetPipelineExecutablePropertiesKHR @420 :VkGetPipelineExecutablePropertiesKHR;
vkGetPipelineExecutableStatisticsKHR @421 :VkGetPipelineExecutableStatisticsKHR;
vkGetPipelineExecutableInternalRepresentationsKHR @422 :VkGetPipelineExecutableInternalRepresentationsKHR;
vkCmdSetLineStippleEXT @423 :VkCmdSetLineStippleEXT;
vkGetFaultData @424 :VkGetFaultData;
vkGetPhysicalDeviceToolProperties @425 :VkGetPhysicalDeviceToolProperties;
vkCreateAccelerationStructureKHR @426 :VkCreateAccelerationStructureKHR;
vkCmdBuildAccelerationStructuresKHR @427 :VkCmdBuildAccelerationStructuresKHR;
vkCmdBuildAccelerationStructuresIndirectKHR @428 :VkCmdBuildAccelerationStructuresIndirectKHR;
vkBuildAccelerationStructuresKHR @429 :VkBuildAccelerationStructuresKHR;
vkGetAccelerationStructureDeviceAddressKHR @430 :VkGetAccelerationStructureDeviceAddressKHR;
vkCreateDeferredOperationKHR @431 :VkCreateDeferredOperationKHR;
vkDestroyDeferredOperationKHR @432 :VkDestroyDeferredOperationKHR;
vkGetDeferredOperationMaxConcurrencyKHR @433 :VkGetDeferredOperationMaxConcurrencyKHR;
vkGetDeferredOperationResultKHR @434 :VkGetDeferredOperationResultKHR;
vkDeferredOperationJoinKHR @435 :VkDeferredOperationJoinKHR;
vkGetPipelineIndirectMemoryRequirementsNV @436 :VkGetPipelineIndirectMemoryRequirementsNV;
vkGetPipelineIndirectDeviceAddressNV @437 :VkGetPipelineIndirectDeviceAddressNV;
vkCmdSetCullMode @438 :VkCmdSetCullMode;
vkCmdSetFrontFace @439 :VkCmdSetFrontFace;
vkCmdSetPrimitiveTopology @440 :VkCmdSetPrimitiveTopology;
vkCmdSetViewportWithCount @441 :VkCmdSetViewportWithCount;
vkCmdSetScissorWithCount @442 :VkCmdSetScissorWithCount;
vkCmdBindIndexBuffer2KHR @443 :VkCmdBindIndexBuffer2KHR;
vkCmdBindVertexBuffers2 @444 :VkCmdBindVertexBuffers2;
vkCmdSetDepthTestEnable @445 :VkCmdSetDepthTestEnable;
vkCmdSetDepthWriteEnable @446 :VkCmdSetDepthWriteEnable;
vkCmdSetDepthCompareOp @447 :VkCmdSetDepthCompareOp;
vkCmdSetDepthBoundsTestEnable @448 :VkCmdSetDepthBoundsTestEnable;
vkCmdSetStencilTestEnable @449 :VkCmdSetStencilTestEnable;
vkCmdSetStencilOp @450 :VkCmdSetStencilOp;
vkCmdSetPatchControlPointsEXT @451 :VkCmdSetPatchControlPointsEXT;
vkCmdSetRasterizerDiscardEnable @452 :VkCmdSetRasterizerDiscardEnable;
vkCmdSetDepthBiasEnable @453 :VkCmdSetDepthBiasEnable;
vkCmdSetLogicOpEXT @454 :VkCmdSetLogicOpEXT;
vkCmdSetPrimitiveRestartEnable @455 :VkCmdSetPrimitiveRestartEnable;
vkCmdSetTessellationDomainOriginEXT @456 :VkCmdSetTessellationDomainOriginEXT;
vkCmdSetDepthClampEnableEXT @457 :VkCmdSetDepthClampEnableEXT;
vkCmdSetPolygonModeEXT @458 :VkCmdSetPolygonModeEXT;
vkCmdSetRasterizationSamplesEXT @459 :VkCmdSetRasterizationSamplesEXT;
vkCmdSetSampleMaskEXT @460 :VkCmdSetSampleMaskEXT;
vkCmdSetAlphaToCoverageEnableEXT @461 :VkCmdSetAlphaToCoverageEnableEXT;
vkCmdSetAlphaToOneEnableEXT @462 :VkCmdSetAlphaToOneEnableEXT;
vkCmdSetLogicOpEnableEXT @463 :VkCmdSetLogicOpEnableEXT;
vkCmdSetColorBlendEnableEXT @464 :VkCmdSetColorBlendEnableEXT;
vkCmdSetColorBlendEquationEXT @465 :VkCmdSetColorBlendEquationEXT;
vkCmdSetColorWriteMaskEXT @466 :VkCmdSetColorWriteMaskEXT;
vkCmdSetRasterizationStreamEXT @467 :VkCmdSetRasterizationStreamEXT;
vkCmdSetConservativeRasterizationModeEXT @468 :VkCmdSetConservativeRasterizationModeEXT;
vkCmdSetExtraPrimitiveOverestimationSizeEXT @469 :VkCmdSetExtraPrimitiveOverestimationSizeEXT;
vkCmdSetDepthClipEnableEXT @470 :VkCmdSetDepthClipEnableEXT;
vkCmdSetSampleLocationsEnableEXT @471 :VkCmdSetSampleLocationsEnableEXT;
vkCmdSetColorBlendAdvancedEXT @472 :VkCmdSetColorBlendAdvancedEXT;
vkCmdSetProvokingVertexModeEXT @473 :VkCmdSetProvokingVertexModeEXT;
vkCmdSetLineRasterizationModeEXT @474 :VkCmdSetLineRasterizationModeEXT;
vkCmdSetLineStippleEnableEXT @475 :VkCmdSetLineStippleEnableEXT;
vkCmdSetDepthClipNegativeOneToOneEXT @476 :VkCmdSetDepthClipNegativeOneToOneEXT;
vkCmdSetViewportWScalingEnableNV @477 :VkCmdSetViewportWScalingEnableNV;
vkCmdSetViewportSwizzleNV @478 :VkCmdSetViewportSwizzleNV;
vkCmdSetCoverageToColorEnableNV @479 :VkCmdSetCoverageToColorEnableNV;
vkCmdSetCoverageToColorLocationNV @480 :VkCmdSetCoverageToColorLocationNV;
vkCmdSetCoverageModulationModeNV @481 :VkCmdSetCoverageModulationModeNV;
vkCmdSetCoverageModulationTableEnableNV @482 :VkCmdSetCoverageModulationTableEnableNV;
vkCmdSetCoverageModulationTableNV @483 :VkCmdSetCoverageModulationTableNV;
vkCmdSetShadingRateImageEnableNV @484 :VkCmdSetShadingRateImageEnableNV;
vkCmdSetCoverageReductionModeNV @485 :VkCmdSetCoverageReductionModeNV;
vkCmdSetRepresentativeFragmentTestEnableNV @486 :VkCmdSetRepresentativeFragmentTestEnableNV;
vkCreatePrivateDataSlot @487 :VkCreatePrivateDataSlot;
vkDestroyPrivateDataSlot @488 :VkDestroyPrivateDataSlot;
vkSetPrivateData @489 :VkSetPrivateData;
vkGetPrivateData @490 :VkGetPrivateData;
vkCmdCopyBuffer2 @491 :VkCmdCopyBuffer2;
vkCmdCopyImage2 @492 :VkCmdCopyImage2;
vkCmdBlitImage2 @493 :VkCmdBlitImage2;
vkCmdCopyBufferToImage2 @494 :VkCmdCopyBufferToImage2;
vkCmdCopyImageToBuffer2 @495 :VkCmdCopyImageToBuffer2;
vkCmdResolveImage2 @496 :VkCmdResolveImage2;
vkCmdRefreshObjectsKHR @497 :VkCmdRefreshObjectsKHR;
vkGetPhysicalDeviceRefreshableObjectTypesKHR @498 :VkGetPhysicalDeviceRefreshableObjectTypesKHR;
vkCmdSetFragmentShadingRateKHR @499 :VkCmdSetFragmentShadingRateKHR;
vkGetPhysicalDeviceFragmentShadingRatesKHR @500 :VkGetPhysicalDeviceFragmentShadingRatesKHR;
vkCmdSetFragmentShadingRateEnumNV @501 :VkCmdSetFragmentShadingRateEnumNV;
vkGetAccelerationStructureBuildSizesKHR @502 :VkGetAccelerationStructureBuildSizesKHR;
vkCmdSetVertexInputEXT @503 :VkCmdSetVertexInputEXT;
vkCmdSetColorWriteEnableEXT @504 :VkCmdSetColorWriteEnableEXT;
vkCmdSetEvent2 @505 :VkCmdSetEvent2;
vkCmdResetEvent2 @506 :VkCmdResetEvent2;
vkCmdWaitEvents2 @507 :VkCmdWaitEvents2;
vkCmdPipelineBarrier2 @508 :VkCmdPipelineBarrier2;
vkQueueSubmit2 @509 :VkQueueSubmit2;
vkCmdWriteTimestamp2 @510 :VkCmdWriteTimestamp2;
vkCmdWriteBufferMarker2AMD @511 :VkCmdWriteBufferMarker2AMD;
vkGetQueueCheckpointData2NV @512 :VkGetQueueCheckpointData2NV;
vkCopyMemoryToImageEXT @513 :VkCopyMemoryToImageEXT;
vkCopyImageToMemoryEXT @514 :VkCopyImageToMemoryEXT;
vkCopyImageToImageEXT @515 :VkCopyImageToImageEXT;
vkTransitionImageLayoutEXT @516 :VkTransitionImageLayoutEXT;
vkGetCommandPoolMemoryConsumption @517 :VkGetCommandPoolMemoryConsumption;
vkGetPhysicalDeviceVideoCapabilitiesKHR @518 :VkGetPhysicalDeviceVideoCapabilitiesKHR;
vkGetPhysicalDeviceVideoFormatPropertiesKHR @519 :VkGetPhysicalDeviceVideoFormatPropertiesKHR;
vkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR @520 :VkGetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR;
vkCreateVideoSessionKHR @521 :VkCreateVideoSessionKHR;
vkDestroyVideoSessionKHR @522 :VkDestroyVideoSessionKHR;
vkCreateVideoSessionParametersKHR @523 :VkCreateVideoSessionParametersKHR;
vkUpdateVideoSessionParametersKHR @524 :VkUpdateVideoSessionParametersKHR;
vkGetEncodedVideoSessionParametersKHR @525 :VkGetEncodedVideoSessionParametersKHR;
vkDestroyVideoSessionParametersKHR @526 :VkDestroyVideoSessionParametersKHR;
vkGetVideoSessionMemoryRequirementsKHR @527 :VkGetVideoSessionMemoryRequirementsKHR;
vkBindVideoSessionMemoryKHR @528 :VkBindVideoSessionMemoryKHR;
vkCmdDecodeVideoKHR @529 :VkCmdDecodeVideoKHR;
vkCmdBeginVideoCodingKHR @530 :VkCmdBeginVideoCodingKHR;
vkCmdControlVideoCodingKHR @531 :VkCmdControlVideoCodingKHR;
vkCmdEndVideoCodingKHR @532 :VkCmdEndVideoCodingKHR;
vkCmdEncodeVideoKHR @533 :VkCmdEncodeVideoKHR;
vkCmdDecompressMemoryNV @534 :VkCmdDecompressMemoryNV;
vkCmdDecompressMemoryIndirectCountNV @535 :VkCmdDecompressMemoryIndirectCountNV;
vkCreateCuModuleNVX @536 :VkCreateCuModuleNVX;
vkCreateCuFunctionNVX @537 :VkCreateCuFunctionNVX;
vkDestroyCuModuleNVX @538 :VkDestroyCuModuleNVX;
vkDestroyCuFunctionNVX @539 :VkDestroyCuFunctionNVX;
vkCmdCuLaunchKernelNVX @540 :VkCmdCuLaunchKernelNVX;
vkGetDescriptorSetLayoutSizeEXT @541 :VkGetDescriptorSetLayoutSizeEXT;
vkGetDescriptorSetLayoutBindingOffsetEXT @542 :VkGetDescriptorSetLayoutBindingOffsetEXT;
vkGetDescriptorEXT @543 :VkGetDescriptorEXT;
vkCmdBindDescriptorBuffersEXT @544 :VkCmdBindDescriptorBuffersEXT;
vkCmdSetDescriptorBufferOffsetsEXT @545 :VkCmdSetDescriptorBufferOffsetsEXT;
vkCmdBindDescriptorBufferEmbeddedSamplersEXT @546 :VkCmdBindDescriptorBufferEmbeddedSamplersEXT;
vkGetBufferOpaqueCaptureDescriptorDataEXT @547 :VkGetBufferOpaqueCaptureDescriptorDataEXT;
vkGetImageOpaqueCaptureDescriptorDataEXT @548 :VkGetImageOpaqueCaptureDescriptorDataEXT;
vkGetImageViewOpaqueCaptureDescriptorDataEXT @549 :VkGetImageViewOpaqueCaptureDescriptorDataEXT;
vkGetSamplerOpaqueCaptureDescriptorDataEXT @550 :VkGetSamplerOpaqueCaptureDescriptorDataEXT;
vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT @551 :VkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT;
vkSetDeviceMemoryPriorityEXT @552 :VkSetDeviceMemoryPriorityEXT;
vkAcquireDrmDisplayEXT @553 :VkAcquireDrmDisplayEXT;
vkGetDrmDisplayEXT @554 :VkGetDrmDisplayEXT;
vkWaitForPresentKHR @555 :VkWaitForPresentKHR;
vkCreateBufferCollectionFUCHSIA @556 :VkCreateBufferCollectionFUCHSIA;
vkSetBufferCollectionBufferConstraintsFUCHSIA @557 :VkSetBufferCollectionBufferConstraintsFUCHSIA;
vkSetBufferCollectionImageConstraintsFUCHSIA @558 :VkSetBufferCollectionImageConstraintsFUCHSIA;
vkDestroyBufferCollectionFUCHSIA @559 :VkDestroyBufferCollectionFUCHSIA;
vkGetBufferCollectionPropertiesFUCHSIA @560 :VkGetBufferCollectionPropertiesFUCHSIA;
vkCmdBeginRendering @561 :VkCmdBeginRendering;
vkCmdEndRendering @562 :VkCmdEndRendering;
vkGetDescriptorSetLayoutHostMappingInfoVALVE @563 :VkGetDescriptorSetLayoutHostMappingInfoVALVE;
vkGetDescriptorSetHostMappingVALVE @564 :VkGetDescriptorSetHostMappingVALVE;
vkCreateMicromapEXT @565 :VkCreateMicromapEXT;
vkCmdBuildMicromapsEXT @566 :VkCmdBuildMicromapsEXT;
vkBuildMicromapsEXT @567 :VkBuildMicromapsEXT;
vkDestroyMicromapEXT @568 :VkDestroyMicromapEXT;
vkCmdCopyMicromapEXT @569 :VkCmdCopyMicromapEXT;
vkCopyMicromapEXT @570 :VkCopyMicromapEXT;
vkCmdCopyMicromapToMemoryEXT @571 :VkCmdCopyMicromapToMemoryEXT;
vkCopyMicromapToMemoryEXT @572 :VkCopyMicromapToMemoryEXT;
vkCmdCopyMemoryToMicromapEXT @573 :VkCmdCopyMemoryToMicromapEXT;
vkCopyMemoryToMicromapEXT @574 :VkCopyMemoryToMicromapEXT;
vkCmdWriteMicromapsPropertiesEXT @575 :VkCmdWriteMicromapsPropertiesEXT;
vkWriteMicromapsPropertiesEXT @576 :VkWriteMicromapsPropertiesEXT;
vkGetDeviceMicromapCompatibilityEXT @577 :VkGetDeviceMicromapCompatibilityEXT;
vkGetMicromapBuildSizesEXT @578 :VkGetMicromapBuildSizesEXT;
vkGetShaderModuleIdentifierEXT @579 :VkGetShaderModuleIdentifierEXT;
vkGetShaderModuleCreateInfoIdentifierEXT @580 :VkGetShaderModuleCreateInfoIdentifierEXT;
vkGetImageSubresourceLayout2KHR @581 :VkGetImageSubresourceLayout2KHR;
vkGetPipelinePropertiesEXT @582 :VkGetPipelinePropertiesEXT;
vkExportMetalObjectsEXT @583 :VkExportMetalObjectsEXT;
vkGetFramebufferTilePropertiesQCOM @584 :VkGetFramebufferTilePropertiesQCOM;
vkGetDynamicRenderingTilePropertiesQCOM @585 :VkGetDynamicRenderingTilePropertiesQCOM;
vkGetPhysicalDeviceOpticalFlowImageFormatsNV @586 :VkGetPhysicalDeviceOpticalFlowImageFormatsNV;
vkCreateOpticalFlowSessionNV @587 :VkCreateOpticalFlowSessionNV;
vkDestroyOpticalFlowSessionNV @588 :VkDestroyOpticalFlowSessionNV;
vkBindOpticalFlowSessionImageNV @589 :VkBindOpticalFlowSessionImageNV;
vkCmdOpticalFlowExecuteNV @590 :VkCmdOpticalFlowExecuteNV;
vkGetDeviceFaultInfoEXT @591 :VkGetDeviceFaultInfoEXT;
vkCmdSetDepthBias2EXT @592 :VkCmdSetDepthBias2EXT;
vkReleaseSwapchainImagesEXT @593 :VkReleaseSwapchainImagesEXT;
vkGetDeviceImageSubresourceLayoutKHR @594 :VkGetDeviceImageSubresourceLayoutKHR;
vkMapMemory2KHR @595 :VkMapMemory2KHR;
vkUnmapMemory2KHR @596 :VkUnmapMemory2KHR;
vkCreateShadersEXT @597 :VkCreateShadersEXT;
vkDestroyShaderEXT @598 :VkDestroyShaderEXT;
vkGetShaderBinaryDataEXT @599 :VkGetShaderBinaryDataEXT;
vkCmdBindShadersEXT @600 :VkCmdBindShadersEXT;
vkGetScreenBufferPropertiesQNX @601 :VkGetScreenBufferPropertiesQNX;
vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR @602 :VkGetPhysicalDeviceCooperativeMatrixPropertiesKHR;
vkGetExecutionGraphPipelineScratchSizeAMDX @603 :VkGetExecutionGraphPipelineScratchSizeAMDX;
vkGetExecutionGraphPipelineNodeIndexAMDX @604 :VkGetExecutionGraphPipelineNodeIndexAMDX;
vkCreateExecutionGraphPipelinesAMDX @605 :VkCreateExecutionGraphPipelinesAMDX;
vkCmdInitializeGraphScratchMemoryAMDX @606 :VkCmdInitializeGraphScratchMemoryAMDX;
vkCmdDispatchGraphAMDX @607 :VkCmdDispatchGraphAMDX;
vkCmdDispatchGraphIndirectAMDX @608 :VkCmdDispatchGraphIndirectAMDX;
vkCmdDispatchGraphIndirectCountAMDX @609 :VkCmdDispatchGraphIndirectCountAMDX;
}}

