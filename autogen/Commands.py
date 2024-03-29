from utils import *
import re
import copy

write("""
#include <debug.hpp>
#include <boost/json.hpp>

#include <stdexcept>
#include <shared_mutex>
#include <future>
#include "vk_enum_string_helper.h"
#include <set>
#include <unordered_map>
#include <vulkan/vulkan.h>

#include <Serialization.hpp>
#include <Server.hpp>
#include <Synchronization.hpp>

std::unordered_map<uintptr_t, VkDeviceSize> devicememory_to_size;
std::unordered_map<uintptr_t, bool> devicememory_to_coherent;
std::unordered_map<uintptr_t, VkDeviceSize> devicememory_to_offset;
std::unordered_map<uintptr_t, VkPhysicalDeviceMemoryProperties> device_to_memory_properties;

void saveDeviceMemoryInfo(VkDevice device, VkDeviceMemory memory, int type_index, VkDeviceSize size){
    devicememory_to_size[(uintptr_t)memory]=size;
    
    auto memory_flags=device_to_memory_properties[(uintptr_t)device].memoryTypes[type_index].propertyFlags;
    
    devicememory_to_coherent[(uintptr_t)memory]=((memory_flags & VK_MEMORY_PROPERTY_HOST_COHERENT_BIT) == VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
}

void saveDeviceInfo(VkDevice device, VkPhysicalDevice physical_device){
    auto memory_properties=VkPhysicalDeviceMemoryProperties{};
    vkGetPhysicalDeviceMemoryProperties(physical_device,&memory_properties);
    
    device_to_memory_properties[(uintptr_t)device]=memory_properties;
}

#include <Surface.hpp>

typedef std::shared_mutex Lock;

Lock MemoryMapLock;
Lock MemoryOperationLock; //This is not needed (but may be preferred, at the expense of unneccessary locking)


enum ParentHandleType {
    PARENT_INSTANCE = 1,
    PARENT_DEVICE = 2
};

""")
def registerDeviceMemoryMap(name,mem):
    if name.startswith("vkMapMemory"):
        memory="memory"
        size="size"
        offset="offset"
        if "2" in name:
            memory=f"pMemoryMapInfo->{memory}"
            size=f"pMemoryMapInfo->{size}"
            offset=f"pMemoryMapInfo->{offset}"
            
        return f"""
        boost::json::value server_memory_json;
        serialize_VkDeviceMemory(server_memory_json, {memory});
        
        auto server_memory=value_to<uintptr_t>(server_memory_json); 
        
        #ifdef CLIENT
            *ppData=malloc({size});
        #endif
        
        auto coherent=devicememory_to_coherent[(uintptr_t){memory}];
        *ppData=registerDeviceMemoryMap(server_memory, {memory}, {size},*ppData, {mem}, coherent);
        
        #ifndef CLIENT
            json["mem"]={mem};
        #endif
        
        devicememory_to_offset[(uintptr_t)({memory})]={offset};
        
        #ifndef CLIENT
            *ppData=NULL; //It's faster to malloc on the client and sync than it is to send the memory at once
        #endif
        """
    else:
        return ""

def deregisterDeviceMemoryMap(name):
    if name.startswith("vkUnmapMemory"):
        memory="memory"
        if "2" in name:
            memory=f"pMemoryUnmapInfo->{memory}"
        return f"""
        deregisterDeviceMemoryMap({memory});
        devicememory_to_offset.erase((uintptr_t)({memory}));
        """
    else:
        return ""


def saveDeviceMemoryInfo(name):
    if name=="vkAllocateMemory":
        return "saveDeviceMemoryInfo(device, *pMemory, pAllocateInfo->memoryTypeIndex, pAllocateInfo->allocationSize);"
    else:
        return ""

def saveDeviceInfo(name):
    if name=="vkCreateDevice":
        return "saveDeviceInfo(*pDevice, physicalDevice);"
    else:
        return ""

def syncRanges(name):
    if name=="vkFlushMappedMemoryRanges":
        guard="#ifdef CLIENT"
    elif name=="vkInvalidateMappedMemoryRanges":
        guard="#ifndef CLIENT"
    else:
        return ""
        
    return f"""
    {guard}
        for(int i=0; i< memoryRangeCount; i++){{
            auto range=pMemoryRanges[i];
            SyncOne(range.memory, range.offset-devicememory_to_offset[(uintptr_t)range.memory], range.size, false);
        }}
    #endif
    """

write("#ifndef CLIENT")
write("""
auto get_instance_proc_addr=vkGetInstanceProcAddr;
auto get_device_proc_addr=vkGetDeviceProcAddr;
""")

for name, command in parsed.items():
    if command["kind"]!="command" or ("alias" in command): #When deserializing message we'll get the base (we're assuming there's only one layer of aliases)
        continue
        
    write(f"""
    void handle_{name}(boost::json::object& json){{
    //Will only be called by the server
    """)

    for param in command["params"]:
        param=copy.deepcopy(param) #Since we're initializing the variables, we have the priviledge of making everything non-const
        
        param["header"]=param["header"].replace("const","")
        param["const"]=False
        
        write(param["header"]+";")
        write(convert(param["name"],f"""json["{param["name"]}"]""",param,serialize=False,initialize=True))

    write(f"""
    PFN_{name} call_function;
    
    auto parent_json=json["parent"].get_object();
    auto parent_type=static_cast<ParentHandleType>(value_to<int>(parent_json["type"]));
    auto& parent_handle=parent_json["handle"];
    
    if(parent_type==PARENT_INSTANCE){{
        VkInstance parent;
        deserialize_VkInstance(parent_handle,parent);
        call_function=(PFN_{name})get_instance_proc_addr(parent,"{name}");
    }}else if(parent_type==PARENT_DEVICE){{
        VkDevice parent;
        deserialize_VkDevice(parent_handle,parent);
        call_function=(PFN_{name})get_device_proc_addr(parent,"{name}");
    }}  
    """
    )
    
    call_arguments=", ".join([param["name"] for param in command["params"]])
    
    if not is_void(command):
        write(re.match(r"(.*?)"+re.escape(name),command["header"]).group(1)+" result;")
        return_prefix="result=" 
    else:
        return_prefix=""
    
    write("{") #Use scoping to allow us to overwrite const parameters as needed
    if name=="vkCreateInstance":
        write("""

        VkInstanceCreateInfo* temp_info=pCreateInfo;

        VkInstanceCreateInfo* pCreateInfo=temp_info;

        //Instead, copy to a set, do modification, then copy it back
        
        std::set<std::string> extensions_set;
        
        for(int i=0; i< pCreateInfo->enabledExtensionCount; i++){
            extensions_set.insert(std::string(pCreateInfo->ppEnabledExtensionNames[i]));
        }
        #ifdef VK_USE_PLATFORM_METAL_EXT
            extensions_set.erase(std::string("VK_KHR_xcb_surface"));
            extensions_set.erase(std::string("VK_KHR_xlib_surface"));
        #endif
        
        extensions_set.insert(std::string(VK_EXT_HEADLESS_SURFACE_EXTENSION_NAME));
        //extensions_set.insert(std::string(VK_EXT_HOST_IMAGE_COPY_EXTENSION_NAME));
        extensions_set.insert(std::string(VK_EXT_SURFACE_MAINTENANCE_1_EXTENSION_NAME));
        extensions_set.insert(std::string(VK_KHR_GET_SURFACE_CAPABILITIES_2_EXTENSION_NAME));
        
        #ifdef VK_USE_PLATFORM_METAL_EXT
            extensions_set.insert(std::string(VK_KHR_PORTABILITY_ENUMERATION_EXTENSION_NAME));
        #endif
        
        auto extensions_length=extensions_set.size();
        auto extensions_list=(char **)malloc(extensions_length*sizeof(char*));
        
        int i=0;
        for (auto& elem: extensions_set){
            extensions_list[i]=strdup(elem.c_str());
            i++;
        }
        
        for (int i=0; i< extensions_length; i++){
            debug_printf("Final extension: %s\\n",extensions_list[i]);
        }

        pCreateInfo->ppEnabledExtensionNames=extensions_list;
        pCreateInfo->enabledExtensionCount=extensions_length;
        pCreateInfo->flags|=VK_INSTANCE_CREATE_ENUMERATE_PORTABILITY_BIT_KHR;            
        """)
    elif name=="vkCreateDevice":
        write("""
        VkDeviceCreateInfo* temp_info=pCreateInfo;

        VkDeviceCreateInfo* pCreateInfo=temp_info;

        //Instead, copy to a set, do modification, then copy it back
        
        std::set<std::string> extensions_set;
        
        for(int i=0; i< pCreateInfo->enabledExtensionCount; i++){
            extensions_set.insert(std::string(pCreateInfo->ppEnabledExtensionNames[i]));
        }
        
        extensions_set.insert(std::string(VK_EXT_SWAPCHAIN_MAINTENANCE_1_EXTENSION_NAME));
        
        #ifdef VK_USE_PLATFORM_METAL_EXT
            //extensions_set.insert(std::string(VK_KHR_PORTABILITY_SUBSET_EXTENSION_NAME)); //VK_KHR_PORTABILITY_SUBSET_EXTENSION_NAME is in vulkan_beta, so we can't include it yet
            extensions_set.insert("VK_KHR_portability_subset");
        #endif
        
        auto extensions_length=extensions_set.size();
        auto extensions_list=(char **)malloc(extensions_length*sizeof(char*));
        
        int i=0;
        for (auto& elem: extensions_set){
            extensions_list[i]=strdup(elem.c_str());
            i++;
        }
        
        for (int i=0; i< extensions_length; i++){
            debug_printf("Final extension: %s\\n",extensions_list[i]);
        }

        pCreateInfo->ppEnabledExtensionNames=extensions_list;
        pCreateInfo->enabledExtensionCount=extensions_length;            
        """)
    write(return_prefix+"call_function"+"("+call_arguments+")"+";")
    write("}")
    if (name=="vkGetInstanceProcAddr"):
        write('debug_printf("Getting %s\\n",pName);')
    
    write("json.clear();")
    write(f"""json["stream_type"]={name.upper()};""")
    
    if name in ["vkGetInstanceProcAddr","vkGetDeviceProcAddr"]:
        write("""json["result"]=(uintptr_t)result;""")
    else:
        write(convert("result","""json["result"]""",command, serialize=True))
    
    write(registerDeviceMemoryMap(name,"(uintptr_t)(*ppData)"))
    
    for param in command["params"]:
        write(convert(param["name"],f"""json["{param["name"]}"]""", param, serialize=True))
            
    if name=="vkWaitForFences":
        write("""
            if ((result!=VK_TIMEOUT) && (timeout!=VK_STREAM_TIMEOUT)){ //Special value to avoid syncing 
                SyncAll();
            }
            """)
            
    write(syncRanges(name))
    write(saveDeviceMemoryInfo(name))
    write(saveDeviceInfo(name))
    
    write("""
        writeToConn(json);
    }""")

write("""
void handle_command(boost::json::object json){
//Will only be called by the server

switch (static_cast<StreamType>(value_to<int>(json["stream_type"]))){
""")

for name, command in parsed.items():
    if command["kind"]!="command":
        continue
    
    if "alias" in command:
        continue
        
    write(f"""
        case ({name.upper()}):
            handle_{name}(json);
            return;
    """)
write("""
default:
    debug_printf("Unknown command: %d!\\n",value_to<int>(json["stream_type"]));
}

}
""")

write("void handle_command(boost::json::object);", header=True)

write("#else") #Don't want server to get confused on which command we're talking about
write("""
typedef struct {
VkInstance instance;
VkDevice device;
} parent_handle_struct;

std::unordered_map<uintptr_t,parent_handle_struct> handle_to_parent_handle_struct;

""")
write("""extern "C" {""")

#Implement some driver-specific functions
write("""
VKAPI_ATTR VkResult VKAPI_CALL vk_icdNegotiateLoaderICDInterfaceVersion (uint32_t* pSupportedVersion){
    *pSupportedVersion=3;
    return VK_SUCCESS;
}
""")

write("""VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL vk_icdGetInstanceProcAddr(VkInstance instance, const char* pName){
        return vkGetInstanceProcAddr(instance,pName);
    }
""")

for name, command in parsed.items():
    if command["kind"]!="command":
        continue
    
    if "alias" in command:
        alias=command["alias"]
        command=parsed[alias]
        write("__attribute__((visibility (\"hidden\"))) "+command["header"].replace(alias,name,1)+"{")
        params_list=[param["name"] for param in command["params"]]
        
        write(f"return {alias}({', '.join(params_list)});")
        write("}")
        continue
    
    memory_map_lock=0
    memory_operation_lock=False
    if re.match(r"^vk(Unmap|Map)Memory(|2KHR)$", name) is not None:
        memory_map_lock=1 #Lock for writing
        memory_operation_lock=True
    elif (name=="vkQueueSubmit") or (name=="vkWaitForFences"):
        memory_map_lock=2 #Lock for reading
        memory_operation_lock=True
        
    write("__attribute__((visibility (\"hidden\"))) "+command["header"]+"{") #All core Vulkan API functions must be hidden
        
    write("//Will only be called by the client")
    write(f'debug_printf("Executing {name}\\n");')
    
    memory_operation_lock=False
    if memory_operation_lock:
        write("MemoryOperationLock.lock();")
    if memory_map_lock==1:
        write("MemoryMapLock.lock();")
    elif memory_map_lock==2:
        write("MemoryMapLock.lock_shared();")
        
    wsi_match=re.match(r"^vkCreate(Xlib|Xcb)SurfaceKHR$",name)
    if wsi_match is not None:
        write("""
        auto create_info=VkHeadlessSurfaceCreateInfoEXT{.sType=VK_STRUCTURE_TYPE_HEADLESS_SURFACE_CREATE_INFO_EXT, .pNext=NULL, .flags=0};
        auto result=vkCreateHeadlessSurfaceEXT(instance,&create_info,pAllocator,pSurface);
        if (result!=VK_SUCCESS){
            return result;
        }
        """)
        
        write(f"""
        registerSurface(*pSurface,pCreateInfo,{wsi_match.group(1)});
        
        return result;
        }}
        """)
        continue
    if name=="vkGetPhysicalDeviceXcbPresentationSupportKHR":
        write("return VK_TRUE;") #Just stub it out, as since displaying is done with headless surfaces, this will always work
        
    
    write(f"""
    boost::json::object json;
    json.reserve({len(command["params"])}+3);
    
    json["stream_type"]={name.upper()};
    
    auto& parent_json=json["parent"].emplace_object();
    parent_json.clear();
    """)
    
    head=command["params"][0]
    
    #Just set the children's struct to the parent
    if parsed[head["type"]]["kind"]=="handle":
        write(f"""
        auto parent=handle_to_parent_handle_struct[(uintptr_t){head["name"]}];
        
        if (parent.device!=NULL){{
            parent_json["type"]=PARENT_DEVICE;
            serialize_VkDevice(parent_json["handle"], parent.device);
        }}else{{
            parent_json["type"]=PARENT_INSTANCE;
            serialize_VkInstance(parent_json["handle"], parent.instance);
        }}
        """)
    else:
        write("""
        parent_json["type"]=PARENT_INSTANCE;
        parent_json["handle"]=(uintptr_t)NULL;
        """)
    
    if name=="vkEnumerateInstanceExtensionProperties":
        write("""
        if(pProperties==NULL){
            const uint32_t DEFAULT_PROPERTIES_LENGTH=100;
            pProperties=(VkExtensionProperties*)malloc(DEFAULT_PROPERTIES_LENGTH*sizeof(VkExtensionProperties));
            *pPropertyCount=DEFAULT_PROPERTIES_LENGTH;
            
            for (uint32_t i=0; i<*pPropertyCount; i++){
                pProperties[i]=VkExtensionProperties();
            }
        }
        
        uint32_t len_of_properties_array=*pPropertyCount;
        """)
    
    if name=="vkMapMemory":
        write("""
        if (size==VK_WHOLE_SIZE){
            size=devicememory_to_size[(uintptr_t)memory]-offset;
        }
        """)
    elif name=="vkMapMemory2KHR":
        write("""
        if (pMemoryMapInfo->size==VK_WHOLE_SIZE){
            VkMemoryMapInfoKHR new_map_info=*pMemoryMapInfo;
            new_map_info.size=devicememory_to_size[(uintptr_t)new_map_info.memory]-new_map_info.offset;
            pMemoryMapInfo=&new_map_info;
        }
        """)

    write("{") #Using scoping to allow us to overwrite const parameters as needed
    
    if name.startswith("vkMapMemory"):
        write("*ppData=NULL;") #We're going to overwrite it anyway
        
    elif name=="vkQueuePresentKHR":
        write("""
        auto new_info=(VkPresentInfoKHR*)copyVkStruct(pPresentInfo);
        
        auto parent_struct=(StreamStructure*)new_info;
        void* curr_struct=copyVkStruct(parent_struct->pNext);
        VkSwapchainPresentFenceInfoEXT* swapchain_fence_info=NULL;
        
        while(curr_struct!=NULL){
            parent_struct->pNext=curr_struct;
            if (((StreamStructure*)curr_struct)->sType==VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_FENCE_INFO_EXT){
                swapchain_fence_info=(VkSwapchainPresentFenceInfoEXT*)curr_struct;
            }
            parent_struct=(StreamStructure*)curr_struct;
            curr_struct=copyVkStruct(parent_struct->pNext);
        }
            
         if (swapchain_fence_info==NULL){
            swapchain_fence_info=new VkSwapchainPresentFenceInfoEXT;
            swapchain_fence_info->sType=VK_STRUCTURE_TYPE_SWAPCHAIN_PRESENT_FENCE_INFO_EXT;
            swapchain_fence_info->pNext=NULL;
            swapchain_fence_info->swapchainCount=0;
            swapchain_fence_info->pFences=NULL;
            parent_struct->pNext=swapchain_fence_info;
         }
         
         auto old_count=swapchain_fence_info->swapchainCount;
         auto fences_list=(VkFence*)memdup(swapchain_fence_info->pFences,old_count*sizeof(VkFence));
         
         swapchain_fence_info->swapchainCount=new_info->swapchainCount;
         auto new_count=swapchain_fence_info->swapchainCount;
         fences_list=(VkFence*)realloc(fences_list,new_count*sizeof(VkFence));
         swapchain_fence_info->pFences=fences_list;
         
         auto fence_create_info=VkFenceCreateInfo{
         .sType=VK_STRUCTURE_TYPE_FENCE_CREATE_INFO,
         .pNext=NULL,
         .flags=0
         };
         
         for (int i=0; i< new_count; i++){
            if ((i>= old_count) || (fences_list[i]==VK_NULL_HANDLE)){
                vkCreateFence(getSwapchainDevice(new_info->pSwapchains[i]),&fence_create_info, NULL, &(fences_list[i]));
            }
            
            pushToQueue(fences_list[i], pPresentInfo->pSwapchains[i], pPresentInfo->pImageIndices[i]);
         }
         
         VkPresentInfoKHR* pPresentInfo=new_info;
        """)
    elif name=="vkCreateSwapchainKHR":
        write("""
        VkSwapchainCreateInfoKHR temp_info=*pCreateInfo;
        
        temp_info.imageUsage|=VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
        
        auto pCreateInfo=&temp_info;
        """)
    
    if name=="vkQueueSubmit":
        write("""
        if (submitCount!=VK_STREAM_SUBMIT_COUNT){
            SyncAll();
        }else{
            submitCount=1;
        }
        """)
        
    for param in command["params"]:
        write(convert(param["name"],f"""json["{param["name"]}"]""", param, serialize=True))
    write("}")
    
        
    write(syncRanges(name))
    
    if name=="vkFreeMemory":
        write("vkUnmapMemory(device,memory);")
        
    write(deregisterDeviceMemoryMap(name))
    write(f"""
        writeToConn(json);
        
        while(true){{
            json=readFromConn();
            
            switch(static_cast<StreamType>(value_to<int>(json["stream_type"]))){{
                case (SYNC):
                    handle_sync_init(json);
                    continue;
                case ({name.upper()}):
                    break; 
    """)
    for funcpointer in parsed:
        if parsed[funcpointer]["kind"]!="funcpointer":
            continue
        if funcpointer in ["PFN_vkGetInstanceProcAddrLUNARG","PFN_vkVoidFunction"]: #This isn't a normal funcpointer --- only makes sense on the server
            continue
        write(f"""
         case ({funcpointer.upper()}):
            handle_{funcpointer}(json);
            continue;
        """)
    
    write("""
        default:
            debug_printf("Unkown message: %d!\\n", value_to<int>(json["stream_type"]));
            continue;
        }
        
        break;
        }
    """)
    
    for param in command["params"]:
        write(convert(param["name"],f"""json["{param["name"]}"]""", param, serialize=False))
    
    if name=="vkEnumerateInstanceExtensionProperties":
        write("""
        std::set<std::string> propertiesSet;
        for(uint32_t i=0; i<*pPropertyCount; i++){
            propertiesSet.insert(std::string(pProperties[i].extensionName));
        }
        """)
        
        WSI=[]
        for platform in ["XLIB","XCB"]:
            WSI.append([f"VK_USE_PLATFORM_{platform}_KHR",f"VK_KHR_{platform}_SURFACE_EXTENSION_NAME", f"VK_KHR_{platform}_SURFACE_SPEC_VERSION"])
        
        for wsi in WSI:  #Add corresponding WSI extensions as needed
            write(f"""
            #ifdef {wsi[0]}
                if(!propertiesSet.contains(std::string({wsi[1]}))){{
                    if (*pPropertyCount<len_of_properties_array){{
                        auto property=VkExtensionProperties();
                        strcpy(property.extensionName,{wsi[1]});
                        property.specVersion={wsi[2]};
                        pProperties[*pPropertyCount]=property;
                        *pPropertyCount=*pPropertyCount+1;
                    }}
                }}
            #endif
            """)
    
    if name in ["vkGetInstanceProcAddr","vkGetDeviceProcAddr"]:
      
        write(f"{command['type']} result;")
        write(f"""
        if (strcmp(pName,"vk_icdNegotiateLoaderICDInterfaceVersion")==0){{
            result=({command['type']})vk_icdNegotiateLoaderICDInterfaceVersion;
        }}
        #ifdef VK_USE_PLATFORM_XCB_KHR
            else if (strcmp(pName,"vkCreateXcbSurfaceKHR")==0){{
                result=({command['type']})vkCreateXcbSurfaceKHR;
            }} else if (strcmp(pName,"vkGetPhysicalDeviceXcbPresentationSupportKHR")==0){{
                result=({command['type']})vkGetPhysicalDeviceXcbPresentationSupportKHR;
            }}
        #endif
        
        #ifdef VK_USE_PLATFORM_XLIB_KHR
            else if (strcmp(pName,"vkCreateXlibSurfaceKHR")==0){{
                result=({command['type']})vkCreateXlibSurfaceKHR;
            }}
        #endif
        """)
        for command_name in parsed:
            if "alias" in parsed[command_name]:
                command_name=parsed[command_name]["alias"]
            
            if parsed[command_name]["kind"]!="command":
                continue
            
            write(f"""
            else if (strcmp(pName,"{command_name}")==0){{
                debug_printf("Retrieving {command_name}...\\n");
                result= (value_to<uintptr_t>(json["result"])!=(uintptr_t)NULL) ? ({command['type']}){command_name} : NULL; //We keep track of dispatch separately
                
            }}
            """)
        write("""
            else {
                debug_printf("Unknown function: %s\\n", pName);
                result=NULL;
            }
            
            debug_printf("Address of ProcAddr: %p\\n",result);
        """)
    else:
        if not is_void(command):
            write(command["type"]+"*"*command["num_indirection"]+" result;")
            write(convert("result",f"""json["result"]""",command | {"name":"result"},serialize=False,initialize=True))
        
    for creation_function in ["^vkAllocate(.*)s$","^vkCreate(.*)$","^vkEnumerate(.*)s$","^vkGetDeviceQueue(|2)$"]:
        if re.match(creation_function,name) is not None:
            matched=False
            for param in reversed(command["params"]):
                if (parsed[param["type"]]["kind"]=="handle") and (param["num_indirection"]==1):
                    handle=param
                    matched=True
                    break
            if not matched:
                break
                
            if handle["type"]=="VkDevice":
                write(f"""handle_to_parent_handle_struct[(uintptr_t)(*{handle["name"]})]={{.instance=NULL,.device=(*{handle["name"]}) }};""")
            elif handle["type"]=="VkInstance":
                write(f"""handle_to_parent_handle_struct[(uintptr_t)(*{handle["name"]})]={{.instance=(*{handle["name"]}),.device=NULL}};""")
            elif len(handle["length"])>0 and handle["length"][-1]!="":
                write(f"""
                if ({handle["name"]}!=NULL){{
                    for (int i=0; i<{handle["length"][-1]}; i++){{
                        handle_to_parent_handle_struct[(uintptr_t)({handle["name"]}[i])]=parent;
                    }}
                }}
                """)
            else:
                write(f"""
                handle_to_parent_handle_struct[(uintptr_t)(*{handle["name"]})]=parent;
                """)
    if name=="vkCreateSwapchainKHR":
        write("registerSwapchain(*pSwapchain,device, pCreateInfo);")
    elif name=="vkCreateDevice":
        write("registerDevice(*pDevice,physicalDevice);")
        
    write(saveDeviceMemoryInfo(name))
    write(saveDeviceInfo(name))
    
    if name=="vkGetPhysicalDeviceSurfaceCapabilitiesKHR":
        write("pSurfaceCapabilities->currentExtent=VkExtent2D{0xFFFFFFFF,0xFFFFFFFF};")
    
    write(registerDeviceMemoryMap(name, """value_to<uintptr_t>(json["mem"])"""))
    
    if name.startswith("vkMapMemory"):
        write("""
        auto range=VkMappedMemoryRange{
            .sType=VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE,
            .pNext=NULL,
        """)
        if "2" not in name:
            write("""
            .memory=memory,
            .offset=offset,
            .size=size
            """)
        else:
            write("""
            .memory=pMemoryMapInfo->memory,
            .offset=pMemoryMapInfo->offset,
            .size=pMemoryMapInfo->size
            """)
        write("""
        };
        vkInvalidateMappedMemoryRanges(device, 1, &range);
        """)
        
    if name=="vkDeviceWaitIdle":
        write("waitForCounterIdle(device);")
    
    for deletion_function in ["^vkFree(.*)$","^vkDestroy(.*)$"]:
        if re.match(deletion_function,name) is not None:
            matched=False
            for param in reversed(command["params"]):
                if (parsed[param["type"]]["kind"]=="handle"):
                    handle=param
                    matched=True
                    break
            if not matched:
                break
            
            if len(handle["length"])>0:
                write(f"""
                if ({handle["name"]}!=NULL){{
                    for (int i=0; i<{handle["length"][-1]}; i++){{
                        delete_{handle["type"]}({handle["name"]}[i]);
                    }}
                }}
                """)
            else:
                write(f"""delete_{handle["type"]}({handle["name"]});""")
    
    
    if memory_map_lock==1:
        write("MemoryMapLock.unlock();")
    elif memory_map_lock==2:
        write("MemoryMapLock.unlock_shared();")
    if memory_operation_lock:
        write("MemoryOperationLock.unlock();")
        
    write(f'debug_printf("Ending {name}...\\n");')
    if not is_void(command):
        if command["type"]=="VkResult":
            write(f'debug_printf("Return value of {name} is: %s...\\n",string_VkResult(result));')
        write("return result;")
    write("}")
write("}")
write("#endif")


write("""
#ifndef CLIENT
int main(int argc, char** argv){
    startServer();
}
#endif
""")
    