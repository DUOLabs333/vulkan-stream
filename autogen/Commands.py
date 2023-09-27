import utils

for command in utils.parsed["commands"]:
    utils.parsed["commands"]["funcpointer_"+command]=utils.parsed["commands"][command]
    
utils.write("""
#include <nlohmann/json_fwd.hpp>
using json = nlohmann::json;

#include <vulkan/vulkan.h>
""")

utils.write("""
void handle_command(json data){
//Will only be called by the server
std::string command=data["type"].substr("command_".length());

switch(command){
""")

for command in utils.parsed["commands"]:
    if command.startswith("funcpointer_"):
        continue
        
    utils.write(f"""
        case "{command}":
            handle_{command}(data);
            break;
    """)

utils.write("""
    default:
        break;
}
""")

utils.write("""
void handle_funcpointer(json data){
//Will only be called by the server
std::string command=data["type"].substr("funcpointer_".length());

switch(command){
""")

for command in utils.parsed["commands"]:
    utils.write(f"""
        case "{command}":
            handle_{command}(data);
            break;
    """)

utils.write("""
    default:
        break;
}
""")

def BaseName(name):
    if name.startswith("funcpointer_"):
        return name.replace("funcpointer_","",1)
    else:
        return name
        
for name, command in utils.parsed["commands"].items():
    utils.write(f"""
    void handle_{command}(json data){{
    //Will only be called by the server
    """)
    
    for param in utils.parsed["commands"][command]:
        utils.write(param["name"]+"="+deserialize(f"""data["members"]["{param["name"]}"]""",param["type"],param["num_indirection"],param["length"])+";")
    
    if funcpointer:
        utils.write("""auto return_value=({BaseName(name)})id_to_PFN_vkVoidFunction(data["id"]){header.split("(",1)[1]}""")
    else:
        utils.write(f"""auto return_value={command['header']};""")
        
    utils.write(f"""json result=json({{}});
        result["type"]="Response";
        result["return"]={serialize('return_value',command['return_type'],command['return_num_indirection'],[])};
    """)
    
    for param in utils.parsed["commands"][command]:
        if not param["const"]:
            utils.write(f"""result["members"]["{param["name"]}"]"""+"="+serialize(param["name"],param["type"],param["num_indirection"],param["length"])+";")
            
    if BaseName(name)=="vkWaitForFences":
        utils.write("""
            for (auto& mem: currStruct()->mem_to_sync){
                    Sync((void*)mem,mem_to_info[mem].size);
            }
            currStruct()->mem_to_sync->clear();
        """)
        
    if BaseName(name) in ["vkGetInstanceProcAddr","vkGetDeviceProcAddr"]:
        utils.write("id_to_PFN_vkVoidFunction[(uintptr_t)return_value]=return_value;")
        
    utils.write("""
        sendtoConn(result);
    }""")
    
    utils.write(f"""void handle_{command}(json data);""",header=True)

utils.write("#ifdef CLIENT") #Don't want server to get confused on which command we're talking about
for name, command in utils.parsed["commands"].items():
    if name.startswith("funcpointer_"):
        funcpointer=True
    else:
        funcpointer=False
        
    if funcpointer:
        utils.write(f"""
            auto {name}(uintptr_t id){{
                return [id]({command["header"].split("(",1)[1]}{{""")
    else:
        utils.write(command["header"]+"{")
        
    utils.write("//Will only be called by the client")
    
    utils.write("data=json({});")
    if funcpointer:
        utils.write(f"""data["type"]="{name}";""")
        utils.write("""data["id"]=id;""")
    else:
        utils.write(f"""data["type"]="command_{name}";""")
        
    for param in command:
        if not param["const"]:
            utils.write(f"""data["members"]["{param["name"]}"]"""+"="+serialize(param["name"],param["type"],param["num_indirection"],param["length"])+";")
    
    if BaseName(name)=="vkQueueSubmit":
        utils.write("""
            for (auto& mem: currStruct()->mem_to_sync){
                if (devicememory_to_mem.count(mem)){
                    Sync((void*)devicememory_to_mem[mem],mem_to_info[mem].size);
                }
            }
            currStruct()->mem_to_sync->clear();
        """)
    
    utils.write("""
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
    for funcpointer in utils.parsed["funcpointers"]:
        utils.write(f"""
        case "{funcpointer}_request":
            handle_{funcpointer}_request(result);
            break;
        """)
        
    utils.write("""
        case default:
            break;
        }
    """)
    
    for param in command:
        if not param["const"]:
            utils.write(param["name"]+"="+deserialize(f"""data["members"]["{param["name"]}"]""",param["type"],param["num_indirection"],param["length"])+";")
    
    if BaseName(name) in ["vkGetInstanceProcAddr","vkGetDeviceProcAddr"]:
        #Case switch for the different commands (iterator variable fumcpointer_command)
        utils.write("switch(name){")
        for funcpointer_name, funcpointer_command in utils.parsed["commands"].items():
            if not funcpointer_name.startswith("funcpointer_"):
                continue
            
            utils.write(f"""
            case "{BaseName(funcpointer_name)}":
                auto return_value= (data["return"]==NULL) ? NULL : ({command['return_type']}){funcpointer_name}(data["return"]);
                break;
            """)
        utils.write("""
            default:
                break;
            }
        """)
    else:
        utils.write(f"""{command['return_type']} return_value={deserialize(data["return"],data["return_num_indirection"],False,[])};""")
        
    if BaseName(name)=="vkMapMemory":
        utils.write("""
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
    utils.write("return return_value;")
    if funcpointer:
        utils.write("};}")
    else:
        utils.write("}")

utils.write("""
#ifndef CLIENT
int main(int argc, char** argv){
    startServer();
    std::promise<void>().get_future().wait(); //Wait forever
}
#endif
""")
    