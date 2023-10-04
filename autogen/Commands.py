from utils import *
import re
funcpointer_commands={}

def base_name(name):
    if name.startswith("funcpointer_"):
        return name.replace("funcpointer_","",1)
    else:
        return name
        
for command in parsed["commands"]:
    funcpointer_command="funcpointer_"+command
    funcpointer_commands[funcpointer_command]=parsed["commands"][command]
    funcpointer_commands[funcpointer_command]["header"]=funcpointer_commands[funcpointer_command]["header"].replace(command,funcpointer_command,1) #Replace "{type} {former_name} {rest_of_header}" with "{type} {name} {rest_of_header}"

parsed["commands"] = funcpointer_commands | parsed["commands"]
    
write("""
#include <nlohmann/json.hpp>
using json = nlohmann::json;

#include <Serialization.hpp>
#include <Server.hpp>
#include <Synchronization.hpp>
#include <ThreadStruct.hpp>
#include <vulkan/vulkan.h>
#include <stdexcept>
""")

def is_funcpointer(name):
    return name!=base_name(name)

write("#ifndef CLIENT")
write("std::map<uintptr_t,PFN_vkVoidFunction> id_to_PFN_vkVoidFunction;")
for name, command in parsed["commands"].items():
    write(f"""
    void handle_{name}(json data){{
    //Will only be called by the server
    """)
    
    for param in command["params"]:
        
        param_copy=param.copy()
        param_copy["name"]=f"""data["members"]["{param["name"]}"]"""
        param_copy["const"]=False
        
        write(param["header"]+";")
        write(deserialize(param["name"],param_copy))
    
    #call_arguments
    call_function =f"""({base_name(name)})id_to_PFN_vkVoidFunction[data["id"]]""" if is_funcpointer(name) else name
    call_arguments=", ".join([param["name"] for param in command["params"]])
    return_prefix="auto return_value=" if not is_void(command) else ""
    write(return_prefix+call_function+"("+call_arguments+")"+";")
    
    return_value=command.copy()
    return_value["name"]="return_value"
    return_value["length"]=[]
    
    write("""json result=json({});
        result["type"]="Response";
    """)
    if base_name(name) in ["vkGetInstanceProcAddr","vkGetDeviceProcAddr"]:
        write("id_to_PFN_vkVoidFunction[(uintptr_t)return_value]=return_value;")
        write('result["return"]=(uintptr_t)return_value;')
    else:
        write(serialize('result["return"]',return_value))
    
    for param in command["params"]:
        write(serialize(f"""result["members"]["{param["name"]}"]""",param))
            
    if base_name(name)=="vkWaitForFences":
        write("""
            for (auto& mem: *(currStruct()->mem_to_sync)){
                    auto mem_info=devicememory_to_mem_info[mem];
                    Sync(mem_info->mem,mem_info->size);
            }
            currStruct()->mem_to_sync->clear();
        """)
        
    write("""
        writeToConn(result);
    }""")
    
    write(f"""void handle_{command}(json data);""",header=True)

write("#else") #Don't want server to get confused on which command we're talking about
write("std::map<uintptr_t,std::map<std::string,uintptr_t>> vk_object_and_name_to_id;""")
write("""extern "C" {""")

for name, command in parsed["commands"].items():
    if is_funcpointer(name):
        write(command["header"]+";")
        
for name, command in parsed["commands"].items():

    write(command["header"]+"{")
        
    write("//Will only be called by the client")
    
    write("auto data=json({});")
    
    if is_funcpointer(name):
        write(f"""data["type"]="{name}";""")
        write(f"""data["id"]=vk_object_and_name_to_id[(uintptr_t){command["params"][0]["name"]}]["{base_name(name)}"];""")
    else:
        write(f"""data["type"]="command_{name}";""")
        
    for param in command["params"]:
        write(serialize(f"""data["members"]["{param["name"]}"]""",param))
    
    if base_name(name)=="vkQueueSubmit":
        write("""
            for (auto& mem: *(currStruct()->mem_to_sync)){
                if (devicememory_to_mem_info.count(mem)){
                    auto mem_info=devicememory_to_mem_info[mem];
                    Sync(mem_info->mem,mem_info->size);
                }
            }
            currStruct()->mem_to_sync->clear();
        """)
    
    write("""
        writeToConn(data);
        bool returned=false;
        json result;
        while(true){
            result=readFromConn();
            std::string type=result["type"];
            
            if (type=="sync_init"){
                handle_sync_init(result);
            }
            else if (type=="Return"){
                break;
            }  
    """)
    for funcpointer in parsed["funcpointers"]:
        if funcpointer=="PFN_vkGetInstanceProcAddrLUNARG": #This isn't a normal funcpointer --- only makes sense on the server
            continue
        write(f"""
        else if (type=="{funcpointer}_request"){{
            handle_{funcpointer}_request(result);
        }}
        """)
        
    write("}")
    
    for param in command["params"]:
        param_copy=param.copy()
        param_copy["name"]=f"""result["members"]["{param["name"]}"]"""
        
        write(deserialize(param["name"],param_copy))
    
    if base_name(name) in ["vkGetInstanceProcAddr","vkGetDeviceProcAddr"]:
        #Case switch for the different commands (iterator variable fumcpointer_command)
        write(f"{command['type']} return_value;")
        write("""
        if (false){
        }
        """)
        for funcpointer_name, funcpointer_command in parsed["commands"].items():
            if not is_funcpointer(funcpointer_name):
                continue
            
            write(f"""
            else if (pName=="{base_name(funcpointer_name)}"){{
                
                vk_object_and_name_to_id[(uintptr_t){command["params"][0]["name"]}][pName]=result["return"];
                return_value= (result["return"]==NULL) ? NULL : ({command['type']}){funcpointer_name};
            }}
            """)
        write("""
            else {
                throw std::runtime_error(std::string("Unknown function: ")+pName);
            }
        """)
    else:
        if not is_void(command):
            return_value=command.copy()
            return_value["name"]='result["return"]'
            return_value["length"]=[]
            write(command["type"]+"*"*command["num_indirection"]+" return_value;")
            write(deserialize("return_value",return_value))
        
    if base_name(name)=="vkMapMemory": #Make this its own section (for both client and server --- server does not need to keep track of fd or need to sync on first map)
        write("""
        auto info=new MemInfo();
        if (size==VK_WHOLESIZE){
            VkDeviceSize whole_size;
            vkGetDeviceMemoryCommitment(device,memory,&whole_size);
            info->size=whole_size-offset;
        else{
            info->size=size;
        }
        info->fd=shm_open_anon(); //Make sure you check to make sure you're not stepping on some other mem's toes.
        ftruncate(info->fd,info->size);
        
        void* mem=mmap(NULL,info->size, PROT_EXEC | PROT_READ | PROT_WRITE, MAP_SHARED,info->fd,NULL);
        
        client_to_host_mem[(uintptr_t)mem]=(uintptr_t)*ppData;
        server_to_client_mem[(uintptr_t)*ppData]=(uintptr_t)mem;
        
        *ppData=mem;
        info->mem=mem;
        
        devicememory_to_mem_info[(uintptr_t)memory]=info;
        
        Sync(info->mem,info->size);
        
        """)
    if not is_void(command):
        write("return return_value;")
    write("}")
write("}")
write("#endif")

write("""
void handle_command(json data){
//Will only be called by the server
std::string command=data["type"].get<std::string>().substr(std::string("command_").length());

""")

for command in parsed["commands"]:
    if command.startswith("funcpointer_"):
        continue
        
    write(f"""
        if(command=="{command}"){{
            handle_{command}(data);
            return;
        }}
    """)

write("}")

write("""
void handle_funcpointer(json data){
//Will only be called by the server
std::string command=data["type"].get<std::string>().substr(std::string("command_").length());
""")

for command in parsed["commands"]:
    write(f"""
        if(command=="{command}"){{
            handle_{command}(data);
            return;
        }}
    """)

write("}")

write("""
#ifndef CLIENT
int main(int argc, char** argv){
    startServer();
    std::promise<void>().get_future().wait(); //Wait forever
}
#endif
""")
    