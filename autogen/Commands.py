from utils import *

funcpointer_commands={}
for command in parsed["commands"]:
    funcpointer_commands["funcpointer_"+command]=parsed["commands"][command]

parsed["commands"].update(funcpointer_commands)
    
write("""
#include <nlohmann/json_fwd.hpp>
using json = nlohmann::json;

#include <vulkan/vulkan.h>
""")

write("""
void handle_command(json data){
//Will only be called by the server
std::string command=data["type"].substr("command_".length());

switch(command){
""")

for command in parsed["commands"]:
    if command.startswith("funcpointer_"):
        continue
        
    write(f"""
        case "{command}":
            handle_{command}(data);
            break;
    """)

write("""
    default:
        break;
}
""")

write("""
void handle_funcpointer(json data){
//Will only be called by the server
std::string command=data["type"].substr("funcpointer_".length());

switch(command){
""")

for command in parsed["commands"]:
    write(f"""
        case "{command}":
            handle_{command}(data);
            break;
    """)

write("""
    default:
        break;
}
""")

def base_name(name):
    if name.startswith("funcpointer_"):
        return name.replace("funcpointer_","",1)
    else:
        return name

def is_funcpointer(name):
    return name!=base_name(name)
           
for name, command in parsed["commands"].items():
    write(f"""
    void handle_{name}(json data){{
    //Will only be called by the server
    """)
    
    for param in command["params"]:
        write(param["name"]+"="+deserialize(f"""data["members"]["{param["name"]}"]""",param["type"],param["num_indirection"],param["length"])+";")
    
    if is_funcpointer(name):
        write(f"""auto return_value=({base_name(name)})id_to_PFN_vkVoidFunction(data["id"]){command["header"].split("(",1)[1]}""")
    else:
        write(f"""auto return_value={command['header']};""")
        
    write(f"""json result=json({{}});
        result["type"]="Response";
        result["return"]={serialize('return_value',command['return_type'],command['return_num_indirection'],[])};
    """)
    
    for param in command["params"]:
        if not param["const"]:
            write(f"""result["members"]["{param["name"]}"]"""+"="+serialize(param["name"],param["type"],param["num_indirection"],param["length"])+";")
            
    if base_name(name)=="vkWaitForFences":
        write("""
            for (auto& mem: currStruct()->mem_to_sync){
                    Sync((void*)mem,mem_to_info[mem].size);
            }
            currStruct()->mem_to_sync->clear();
        """)
        
    if base_name(name) in ["vkGetInstanceProcAddr","vkGetDeviceProcAddr"]:
        write("id_to_PFN_vkVoidFunction[(uintptr_t)return_value]=return_value;")
        
    write("""
        sendtoConn(result);
    }""")
    
    write(f"""void handle_{command}(json data);""",header=True)

write("#ifdef CLIENT") #Don't want server to get confused on which command we're talking about
for name, command in parsed["commands"].items():
        
    if is_funcpointer(name):
        write(f"""
            auto {name}(uintptr_t id){{
                return [id]({command["header"].split("(",1)[1]}{{""")
    else:
        write(command["header"]+"{")
        
    write("//Will only be called by the client")
    
    write("data=json({});")
    
    if is_funcpointer(name):
        write(f"""data["type"]="{name}";""")
        write("""data["id"]=id;""")
    else:
        write(f"""data["type"]="command_{name}";""")
        
    for param in command["params"]:
        if not param["const"]:
            write(f"""data["members"]["{param["name"]}"]"""+"="+serialize(param["name"],param["type"],param["num_indirection"],param["length"])+";")
    
    if base_name(name)=="vkQueueSubmit":
        write("""
            for (auto& mem: currStruct()->mem_to_sync){
                if (devicememory_to_mem.count(mem)){
                    Sync((void*)devicememory_to_mem[mem],mem_to_info[mem].size);
                }
            }
            currStruct()->mem_to_sync->clear();
        """)
    
    write("""
        sendtoConn(data);
        bool returned=false;
        while(!returned){
            data=readFromConn();
            std::string type=result["type"];
            
            switch(type){
                case "sync_init":
                    handle_sync_init(result);
                    break;
                case "Return":
                    returned=true;
                    break;
                
    """)
    for funcpointer in parsed["funcpointers"]:
        write(f"""
        case "{funcpointer}_request":
            handle_{funcpointer}_request(result);
            break;
        """)
        
    write("""
        case default:
            break;
        }
    """)
    
    for param in command["params"]:
        if not param["const"]:
            write(param["name"]+"="+deserialize(f"""data["members"]["{param["name"]}"]""",param["type"],param["num_indirection"],param["length"])+";")
    
    if base_name(name) in ["vkGetInstanceProcAddr","vkGetDeviceProcAddr"]:
        #Case switch for the different commands (iterator variable fumcpointer_command)
        write("switch(name){")
        for funcpointer_name, funcpointer_command in parsed["commands"].items():
            if not funcpointer_name.startswith("funcpointer_"):
                continue
            
            write(f"""
            case "{base_name(funcpointer_name)}":
                auto return_value= (data["return"]==NULL) ? NULL : ({command['return_type']}){funcpointer_name}(data["return"]);
                break;
            """)
        write("""
            default:
                break;
            }
        """)
    else:
        write(f"""auto return_value={deserialize('data["return"]',command["return_type"], command["return_num_indirection"],[])};""")
        
    if base_name(name)=="vkMapMemory":
        write("""
        auto info=MemInfo();
        info.size=size;
        info.fd=shm_open_anon(); //Make sure you check to make sure you're not stepping on some other mem's toes.
        ftruncate(info.fd,info.size);
        
        mem_to_info[(uintptr_t)memory]=info;
        
        void* mem=mmap(NULL,size, PROT_EXEC | PROT_READ | PROT_WRITE, MAP_SHARED,info.fd,NULL);
        
        client_to_host_mem[(uintptr_t)mem]=(uintptr_t)*ppData;
        server_to_client_mem[(uintptr_t)*ppData]=(uintptr_t)mem;
        
        *ppData=mem;
        devicememory_to_mem[(uintptr_t)memory]=(uintptr_t)mem;
        
        """)
    write("return return_value;")
    if is_funcpointer(name):
        write("};}")
    else:
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
    