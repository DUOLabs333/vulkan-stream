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
#include <shm_open_anon.h>

#include <Serialization.hpp>
#include <Server.hpp>
#include <Synchronization.hpp>
#include <sys/mman.h>
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
        call_function=(PFN_{name})get_instance_proc_addr((VkInstance)(data_json["parent"]["handle"].get<uintptr_t>()),"{name}");
    }}else if(data_json["parent"]["type"]=="Device"){{
        call_function=(PFN_{name})get_device_proc_addr((VkDevice)(data_json["parent"]["handle"].get<uintptr_t>()),"{name}");
    }}  
    """
    )
    
    call_arguments=", ".join([param["name"] for param in command["params"]])
    return_prefix="auto return_value=" if not is_void(command) else ""
    write(return_prefix+"call_function"+"("+call_arguments+")"+";")
    
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

for name, command in parsed["commands"].items():

    write(command["header"]+"{")
        
    write("//Will only be called by the client")
    
    write("auto data_json=json({});")
    
    write(f"""data_json["type"]="command_{name}";""")
    
    head=command["params"][0]
    head_name=head["name"]
    #Just set the children's struct ot the parent
    if head["type"] in parsed["handles"]:
        write(f"""
        auto parent=handle_to_parent_handle_struct[(uintptr_t){head_name}];
        if (parent.device!=NULL){{
            data_json["parent"]["type"]="Device";
            data_json["parent"]["handle"]=(uintptr_t)parent.device;
        }}else{{
            data_json["parent"]["type"]="Instance";
            data_json["parent"]["handle"]=(uintptr_t)parent.instance;
        }}
        """)
    else:
        write("""
        data_json["parent"]["type"]="Instance";
        data_json["parent"]["handle"]=NULL;
        """)
    write(register_DeviceMemory(name))
    write("{") #Use scoping to allow us to overwrite const parameters as needed
    
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
    
    if name in ["vkGetInstanceProcAddr","vkGetDeviceProcAddr"]:
        #Case switch for the different commands (iterator variable funcpointer_command)
        write(f"{command['type']} return_value;")
        write("""
        if (false){
        }
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
        uintptr_t server_mem=result["members"]["ppData"]["ptr"];
        
        client_to_server_mem[client_mem]=server_mem;
        server_to_client_mem[server_mem]=client_mem;
        
        memcpy(info->mem,*ppData,info->size);
        
        *ppData=mmap(NULL,{size},PROT_EXEC | PROT_READ | PROT_WRITE, MAP_SHARED,info->fd,{offset});
        
        info->mapped_ranges.push_back(*ppData);
        
        """)
        
    for creation_function in ["^vkAllocate(.*)s$","^vkCreate(.*)$","^vkEnumerate(.*)s$"]:
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
    