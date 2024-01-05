from utils import *
import re
import copy

write("""
#include <ThreadStruct.hpp>
#include <stdexcept>
#include <future>

#include <nlohmann/json.hpp>
using json = nlohmann::json;

#include <vulkan/vulkan.h>

extern "C" {
#include <shm_open_anon.h>
}

#include <Serialization.hpp>
#include <Server.hpp>
#include <Synchronization.hpp>
#include <sys/mman.h>

#ifdef CLIENT
    #include <Surface.hpp>
#endif
""")

write("""
typedef struct {
int fd;
VkDeviceSize size;
void* mem;
std::vector<void*> mapped_ranges;
} MemInfo;
""")
write("std::map<uintptr_t,MemInfo*> devicememory_to_mem_info;")

def sync_DeviceMemory():
    return """
   for (auto& device_memory: *(currStruct()->mem_to_sync)){
       if (devicememory_to_mem_info.count(device_memory)){
           auto& mem_info=devicememory_to_mem_info[device_memory];
              Sync(mem_info->mem,mem_info->size);
           }
   }
   currStruct()->mem_to_sync->clear();
   """

def register_DeviceMemory(name):
    if name.startswith("vkMapMemory"): #Make this its own section (for both client and server --- server does not need to keep track of fd or need to sync on first map)
        memory="memory"
        if name=="vkMapMemory2KHR":
            memory="pMemoryMapInfo->memory"
            
        return f"""
        auto info=new MemInfo();
        
        VkDeviceSize whole_size;
        vkGetDeviceMemoryCommitment(device,{memory},&whole_size);
        info->size=whole_size;
        
        devicememory_to_mem_info[(uintptr_t){memory}]=info;
        """
    else:
        return ""
    
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
    write(register_DeviceMemory(name))

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

        auto extensions_length=pCreateInfo->enabledExtensionCount;
        char ** extensions=(char**)malloc(extensions_length*sizeof(char*));

        for (int i=0; i< extensions_length; i++){
            extensions[i]=strdup(pCreateInfo->ppEnabledExtensionNames[i]);
        }

        bool headless_surface_extension=false;
        bool copy_image_memory_extension=false;
            
        uint32_t i=0;
        while(i < extensions_length){
            char* extension=extensions[i];
            #ifdef VK_USE_PLATFORM_METAL_EXT
                if (strcmp(extension,"VK_KHR_xcb_surface")==0 || strcmp(extension,"VK_KHR_xlib_surface")==0){ //Later, save the values into json to pull from instead of hardcoding
                    for (uint32_t j=i; j< extensions_length-1;j++){
                        extensions[j]=extensions[j+1];
                    }
                    extensions_length--;
                    continue;
                }
                
            #endif

            if (strcmp(extension,VK_EXT_HEADLESS_SURFACE_EXTENSION_NAME)==0){
                headless_surface_extension=true;
            }
            
            if (strcmp(extension,VK_EXT_HOST_IMAGE_COPY_EXTENSION_NAME)==0){
               copy_image_memory_extension=true;
            }
            i++;
        }

        if (!headless_surface_extension){
            extensions=(char**)realloc(extensions,(extensions_length+1)*sizeof(char*));
            extensions[extensions_length]=(char*)VK_EXT_HEADLESS_SURFACE_EXTENSION_NAME;
        
            extensions_length++;
        }
        
        if (!copy_image_memory_extension){
            //extensions=(char**)realloc(extensions,(extensions_length+1)*sizeof(char*));
            //extensions[extensions_length]=(char*)VK_EXT_HOST_IMAGE_COPY_EXTENSION_NAME;
        
            //extensions_length++;
        }
        
        for (int i=0; i< extensions_length; i++){
            printf("Final extension: %s\\n",extensions[i]);
        }

        pCreateInfo->ppEnabledExtensionNames=extensions;
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
        write(sync_DeviceMemory())

    if name=="vkMapMemory":
        write("""
        info->mem=*ppData;
        result["mem_ptr"]=(uintptr_t)*ppData;
        """)
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
    write("__attribute__((visibility (\"hidden\"))) "+command["header"]+"{") #All core Vulkan API functions must be hidden
        
    write("//Will only be called by the client")
    write(f'printf("Executing {name}\\n");')
    
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
    write(register_DeviceMemory(name))
    
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
        
    write("{") #Use scoping to allow us to overwrite const parameters as needed
    
    #Override *surface with call to headless, and use that
    
    if name.startswith("vkMapMemory"): #Get entire memory, then map the parts that we need
        offset="offset"
        size="size"
        if name=="vkMapMemory2KHR":
            offset="pMemoryMapInfo->offset"
            size="pMemoryMapInfo->size"
            write("VkMemoryMapInfoKHR* pMemoryMapInfo=pMemoryMapInfo;")
        
        write(f"""
        {size}=whole_size;
        {offset}=0;
        """)

        write("*ppData=NULL;") #We're going to overwrite it anyway
    for param in command["params"]:
        write(serialize(f"""data_json["members"]["{param["name"]}"]""",param))
    write("}")
    
    if name=="vkQueueSubmit":
        write(sync_DeviceMemory())
    
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
                return_value=({command['type']})"vkCreateXcbSurfaceKHR";
            }}
        #endif
        
        #ifdef VK_USE_PLATFORM_XLIB_KHR
            else if (strcmp(pName,"vkCreateXlibSurfaceKHR")==0){{
                return_value=({command['type']})"vkCreateXlibSurfaceKHR";
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
    if name.startswith("vkMapMemory"):
        offset="offset"
        size="size"
        if name=="vkMapMemory2KHR":
            offset="pMemoryMapInfo->offset"
            size="pMemoryMapInfo->size"
            
        write(f"""
        info->fd=shm_open_anon(); //Make new place for memory
        ftruncate(info->fd,info->size);
        
        info->mem=mmap(NULL,info->size, PROT_EXEC | PROT_READ | PROT_WRITE, MAP_SHARED, info->fd,0);
        
        auto client_mem=(uintptr_t)info->mem;
        uintptr_t server_mem=result["mem_ptr"];
        
        client_to_server_mem[client_mem]=server_mem;
        server_to_client_mem[server_mem]=client_mem;
        
        memcpy(info->mem,*ppData,info->size);
        
        *ppData=mmap(NULL,{size},PROT_EXEC | PROT_READ | PROT_WRITE, MAP_SHARED,info->fd,{offset});
        
        info->mapped_ranges.push_back(*ppData);
        
        """)
        
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
        write("registerSwapchain(*pSwapchain,pCreateInfo->surface,device);")
    elif name=="vkCreateImage":
        write("registerImage(*pImage,pCreateInfo->extent);")
    elif name=="vkCreateDevice":
        write("registerDevice(*pDevice,physicalDevice);")
    elif name=="vkQueuePresentKHR":
        write("QueuePresent(pPresentInfo);") 
    if not is_void(command):
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
    