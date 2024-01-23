#include <vulkan/vulkan.h>

typedef struct StreamStructure{
    VkStructureType sType;
    const void* pNext;
} StreamStructure;

#include <debug.hpp>
typedef void* pNext;
void* memdup(const void* mem, size_t size);
void* copyVkStruct (const void* data);
