import utils

utils.write("""
#include <nlohmann/json_fwd.hpp>
using json = nlohmann::json;

#include <vulkan/vulkan.h>
""")
utils.write("""#include <cxxopts.h>""")

utils.write("""
void handle_Command(json data){
//Will only be called by the server
std::string command=data["type"].substr("Command_".length());

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


for command in utils.parsed["commands"]:
    utils.write(f"""
    void handle_{command}(json data){{
    """)
    
    for param in utils.parsed["commands"][command]:
        utils.write(param["name"]+"="+deserialize(f"""data["members"]["{param["name"]}"]""",param["type"],param["num_indirection"],param["length"])+";")
    
    utils.write(f"""{command['return_type']} return_value={command['header']};""")
    
    utils.write(f"""json result=json({{}});
        result["type"]="Response";
        result["return"]={serialize('return_value',command['return_type'],command['return_num_indirection'],[])};
    """)
    
    for param in utils.parsed["commands"][command]:
        if not param["const"]:
            utils.write(f"""result["members"]["{param["name"]}"]"""+"="+serialize(param["name"],param["type"],param["num_indirection"],param["length"])+";")
    
    utils.write("""
        sendtoConn(result);
    }""")
    
    utils.write(f"""void handle_{command}(json data);""",header=True)

utils.write("#ifdef CLIENT") #Don't want server to get confused on which command we're talking about
for command in utils.parsed["commands"]:
    utils.write(utils.parsed["commands"][command]["header"]+"{")
    utils.write("//Will only be called by the client")
    
    utils.write("data=json({});")
    for param in utils.parsed["commands"][command]:
        if not param["const"]:
            utils.write(f"""data["members"]["{param["name"]}"]"""+"="+serialize(param["name"],param["type"],param["num_indirection"],param["length"])+";")
    
    if command=="vkQueueSubmit":
        utils.write("""
            for (auto& mem: currStruct()->mem_to_sync){
                Sync((void*)mem,mem_to_info[mem].size);
            }
            currStruct()->mem_to_sync->clear();
        """)    
    utils.write("""
        sendtoConn(result);
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
    
    for param in utils.parsed["commands"][command]:
        if not param["const"]:
            utils.write(param["name"]+"="+deserialize(f"""data["members"]["{param["name"]}"]""",param["type"],param["num_indirection"],param["length"])+";")
    
    utils.write(f"""{command['return_type']} return_value={data["return"]};""")
    
    utils.write("return return_value;}")

utils.write("""
#ifndef CLIENT
int main(int argc, char** argv){
    cxxopts::Options options("vulkan-stream", "Server that forwards client requests to the host's GPU");
    options.add_options("address","Address the server should listen on",cxxopts::value<std::string>()->default_value("127.0.0.1"));
    options.add_options("p,port","Port the server should listen on",cxxopts::value<int>()->default_value(2000));
    auto result=options.parse(argc,argv);
    startServer(result["address"].as<std::string>>(), result["port"].as<int>());
    
    std::promise<void>().get_future().wait(); //Wait forever
}
#endif
""")
    