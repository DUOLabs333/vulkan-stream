from utils import *
import re
import copy

write("""
#include <ThreadStruct.hpp>
#include <stdexcept>
#include <shared_mutex>
#include <future>
#include "vk_enum_string_helper.h"

#include <nlohmann/json.hpp>
using json = nlohmann::json;

#include <vulkan/vulkan.h>

#include <Serialization.hpp>
#include <Server.hpp>
#include <Synchronization.hpp>

#ifdef CLIENT
    #include <Surface.hpp>
    
    std::map<uintptr_t, VkDeviceSize> devicememory_to_size;
    void registerDeviceMemory(VkDeviceMemory memory, VkDeviceSize size){
        devicememory_to_size[(uintptr_t)memory]=size;
    }
#endif

typedef std::shared_mutex Lock;

Lock MemoryMapLock;
Lock MemoryOperationLock; //This is not needed (but may be preferred, at the expense of unneccessary locking)
""")

def registerDeviceMemoryMap(name,mem):
    memory="memory"
    size="size"
    if "2" in name:
        memory=f"pMemoryMapInfo->{memory}"
        size=f"pMemoryMapInfo->{size}"
        
    return f"*ppData=registerDeviceMemoryMap({memory},{size},*ppData,{mem});"
    
write("#ifndef CLIENT")
write("""
#ifdef __APPLE__
    std::string vulkan_library_name="libvulkan.dylib";
#endif
#include <dlfcn.h>
auto vulkan_library=dlopen(vulkan_library_name.c_str(), RTLD_LAZY | RTLD_GLOBAL);
auto get_instance_proc_addr=(PFN_vkGetInstanceProcAddr)dlsym(vulkan_library,"vkGetInstanceProcAddr");
auto get_device_proc_addr=(PFN_vkGetDeviceProcAddr)dlsym(vulkan_library,"vkGetDeviceProcAddr");
""")

for name, command in parsed["commands"].items():
    write(f"""
    void handle_{name}(json &data_json){{
    //Will only be called by the server
    """)

    for param in command["params"]:
        
        param_copy=param.copy()
        param_copy["name"]=f"""data_json["members"]["{param["name"]}"]"""
    
        write(param["header"].replace("const ","",1)+";")
        write(deserialize(param["name"],param_copy,initialize=True))

    write(f"""
    PFN_{name} call_function;
    if(data_json["parent"]["type"]=="Instance"){{
        VkInstance parent;
        {deserialize("parent",{"name":'data_json["parent"]["handle"]' ,"type":"VkInstance","num_indirection":0,"length":[]},initialize=True)}
        call_function=(PFN_{name})get_instance_proc_addr(parent,"{name}");
    }}else if(data_json["parent"]["type"]=="Device"){{
        VkDevice parent;
        {deserialize("parent",{"name":'data_json["parent"]["handle"]' ,"type":"VkDevice","num_indirection":0,"length":[]},initialize=True)}
        call_function=(PFN_{name})get_device_proc_addr(parent,"{name}");
    }}  
    """
    )
    
    call_arguments=", ".join([param["name"] for param in command["params"]])
    
    if not is_void(command):
        write(re.match(r"(.*?)"+re.escape(name),command["header"]).group(1)+" return_value;")
        return_prefix="return_value=" 
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
        
        auto extensions_length=extensions_set.size();
        auto extensions_list=(char **)malloc(extensions_length*sizeof(char*));
        
        int i=0;
        for (auto& elem: extensions_set){
            extensions_list[i]=strdup(elem.c_str());
            i++;
        }
        
        for (int i=0; i< extensions_length; i++){
            printf("Final extension: %s\\n",extensions_list[i]);
        }

        pCreateInfo->ppEnabledExtensionNames=extensions_list;
        pCreateInfo->enabledExtensionCount=extensions_length;            
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
        
        auto extensions_length=extensions_set.size();
        auto extensions_list=(char **)malloc(extensions_length*sizeof(char*));
        
        int i=0;
        for (auto& elem: extensions_set){
            extensions_list[i]=strdup(elem.c_str());
            i++;
        }
        
        for (int i=0; i< extensions_length; i++){
            printf("Final extension: %s\\n",extensions_list[i]);
        }

        pCreateInfo->ppEnabledExtensionNames=extensions_list;
        pCreateInfo->enabledExtensionCount=extensions_length;            
        """)
    write(return_prefix+"call_function"+"("+call_arguments+")"+";")
    write("}")
    if (name=="vkGetInstanceProcAddr"):
        write('printf("%s\\n",pName);')
    
    return_value=command.copy()
    return_value["name"]="return_value"
    return_value["length"]=[]
    
    write("""json result=json({});
        result["type"]="Response";
    """)
    if name in ["vkGetInstanceProcAddr","vkGetDeviceProcAddr"]:
        write('result["return"]=(return_value!=NULL ? true: false);')
    else:
        write(serialize('result["return"]',return_value))
    
    for param in command["params"]:
        write(serialize(f"""result["members"]["{param["name"]}"]""",param))
            
    if name=="vkWaitForFences":
        write("SyncAll();")

    if name.startswith("vkMapMemory"):
       write(registerDeviceMemoryMap(name,"(uintptr_t)(*ppData)"))
       write('result["mem_ptr"]=(uintptr_t)(*ppData);')
       
    write("""
        writeToConn(result);
    }""")
    
    write(f"""void handle_{name}(json &data);""",header=True)

write("""
void handle_command(json &data){
//Will only be called by the server
std::string command=data["type"].get<std::string>().substr(std::string("command_").length());

""")

for command in parsed["commands"]:
    write(f"""
        if(command=="{command}"){{
            if (command=="vkGetPhysicalDeviceProperties2"){{
            ////printf("%s\\n",data.dump().c_str());
        }}
            handle_{command}(data);
            return;
        }}
    """)

write("}")

write("void handle_command(json &data);",header=True)

write("#else") #Don't want server to get confused on which command we're talking about
write("""
typedef struct {
VkInstance instance;
VkDevice device;
} parent_handle_struct;

std::map<uintptr_t,parent_handle_struct> handle_to_parent_handle_struct;

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

for name, command in parsed["commands"].items():
    memory_map_lock=0
    memory_operation_lock=False
    if name.startswith("vkMapMemory"):
        memory_map_lock=1 #Lock for writing
        memory_operation_lock=True
    elif (name=="vkQueueSubmit") or (name=="vkWaitForFences"):
        memory_map_lock=2 #Lock for reading
        memory_operation_lock=True
    
    if name=="vkWaitForFences": #Only for debugging purposes --- remove when done
        memory_operation_lock=False
        
    write("__attribute__((visibility (\"hidden\"))) "+command["header"]+"{") #All core Vulkan API functions must be hidden
        
    write("//Will only be called by the client")
    write(f'printf("Executing {name}\\n");')
    
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
    
    write("auto data_json=json({});")
    
    write(f"""data_json["type"]="command_{name}";""")
    
    head=command["params"][0]
    head_name=head["name"]
    #Just set the children's struct to the parent
    if head["type"] in parsed["handles"]:
        #Use serialize, since we have to map
        write(f"""
        auto parent=handle_to_parent_handle_struct[(uintptr_t){head_name}];
        if (parent.device!=NULL){{
            data_json["parent"]["type"]="Device";
            {serialize('data_json["parent"]["handle"]',{"name":"parent.device","type":"VkDevice","num_indirection":0,"length":[]})}
        }}else{{
            data_json["parent"]["type"]="Instance";
            {serialize('data_json["parent"]["handle"]',{"name":"parent.instance","type":"VkInstance","num_indirection":0,"length":[]})}
        }}
        """)
    else:
        write(f"""
        data_json["parent"]["type"]="Instance";
       {serialize('data_json["parent"]["handle"]',{"name":"NULL","type":"VkInstance","num_indirection":0,"length":[]})}
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
    
    if name=="vkQueueSubmit":
        write("""
        auto create_info=VkFenceCreateInfo{
        .sType=VK_STRUCTURE_TYPE_FENCE_CREATE_INFO,
        .pNext=NULL,
        .flags=0
        };
        auto device=handle_to_parent_handle_struct[(uintptr_t)queue].device;
        if (fence==VK_NULL_HANDLE){ //This system is only for debug purposes --- once I figure out why nothing is showing up, this should be deleted
            vkCreateFence(device, &create_info,NULL, &fence);
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
                vkCreateFence(swapchain_to_device[(uintptr_t)(new_info->pSwapchains[i])],&fence_create_info, NULL, &(fences_list[i]));
            }
         }
         
         VkPresentInfoKHR* pPresentInfo=new_info;
         
          std::thread display_thread(QueueDisplay, fences_list, (VkSwapchainKHR*)memdup(pPresentInfo->pSwapchains, new_count*sizeof(VkSwapchainKHR)), (uint32_t*)memdup(pPresentInfo->pImageIndices, new_count*sizeof(uint32_t)), new_count);
          display_thread.detach();
        """)
    elif name=="vkCreateSwapchainKHR":
        write("""
        VkSwapchainCreateInfoKHR temp_info=*pCreateInfo;
        
        temp_info.imageUsage|=VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
        
        pCreateInfo=&temp_info;
        """)
    for param in command["params"]:
        write(serialize(f"""data_json["members"]["{param["name"]}"]""",param))
    write("}")
    
    if name=="vkQueueSubmit":
        write("SyncAll();")
    
    write("""
        writeToConn(data_json);
        json result;
        while(true){
            result=readFromConn();
            std::string result_type=result["type"];
            if (result_type=="sync_init"){
                handle_sync_init(result);
            }
            else if (result_type=="Response"){
                break;
            }  
    """)
    for funcpointer in parsed["funcpointers"]:
        if funcpointer=="PFN_vkGetInstanceProcAddrLUNARG": #This isn't a normal funcpointer --- only makes sense on the server
            continue
        write(f"""
        else if (result_type=="{funcpointer}_request"){{
            handle_{funcpointer}_request(result);
        }}
        """)
        
    write("}")
    
    for param in command["params"]:
        param_copy=param.copy()
        param_copy["name"]=f"""result["members"]["{param["name"]}"]"""
        
        write(deserialize(param["name"],param_copy))
    
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
      
        write(f"{command['type']} return_value;")
        write(f"""
        if (strcmp(pName,"vk_icdNegotiateLoaderICDInterfaceVersion")==0){{
            return_value=({command['type']})vk_icdNegotiateLoaderICDInterfaceVersion;
        }}
        #ifdef VK_USE_PLATFORM_XCB_KHR
            else if (strcmp(pName,"vkCreateXcbSurfaceKHR")==0){{
                return_value=({command['type']})vkCreateXcbSurfaceKHR;
            }}
        #endif
        
        #ifdef VK_USE_PLATFORM_XLIB_KHR
            else if (strcmp(pName,"vkCreateXlibSurfaceKHR")==0){{
                return_value=({command['type']})vkCreateXlibSurfaceKHR;
            }}
        #endif
        """)
        for command_name in parsed["commands"]:
            write(f"""
            else if (strcmp(pName,"{command_name}")==0){{
                printf("Retrieving {command_name}...\\n");
                return_value= (result["return"]==true) ? ({command['type']}){command_name} : NULL; //We keep track of dispatch separately
                
            }}
            """)
        write("""
            else {
                printf("%s\\n",(std::string("Unknown function: ")+pName).c_str());
                return_value=NULL;
            }
            
            printf("Address of ProcAddr: %p\\n",return_value);
        """)
    else:
        if not is_void(command):
            return_value=command.copy()
            return_value["name"]='result["return"]'
            return_value["length"]=[]
            write(command["type"]+"*"*command["num_indirection"]+" return_value;")
            write(deserialize("return_value",return_value))
        
    for creation_function in ["^vkAllocate(.*)s$","^vkCreate(.*)$","^vkEnumerate(.*)s$","^vkGetDeviceQueue$"]:
        if re.match(creation_function,name) is not None:
            matched=False
            for param in reversed(command["params"]):
                if (param["type"] in parsed["handles"]) and (param["num_indirection"]==1):
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
    elif name=="vkAllocateMemory":
        write("registerDeviceMemory(*pMemory, pAllocateInfo->allocationSize);")
    elif name.startswith("vkMapMemory"):
        write(registerDeviceMemoryMap(name,'result["mem_ptr"]'))
    
    if memory_map_lock==1:
        write("MemoryMapLock.unlock();")
    elif memory_map_lock==2:
        write("MemoryMapLock.unlock_shared();")
    
    write(f'printf("Ending {name}...\\n");')
    if not is_void(command):
        if command["type"]=="VkResult":
            write(f'printf("Return value of {name} is: %s...\\n",string_VkResult(return_value));')
        write("return return_value;")
    write("}")
write("}")
write("#endif")


write("""
#ifndef CLIENT
int main(int argc, char** argv){
    startServer();
    std::promise<void>().get_future().wait(); //Wait forever
}
#endif
""")
    