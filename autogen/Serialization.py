import utils

utils.write(f"""
#include <nlohmann/json.hpp>

// for convenience
using json = nlohmann::json;
""")

utils.write("""
json serialize(std::string name, std::string type, int num_indirection, std::vector<std::string> length, client){
    json result=json({});
        
    if ({name}==NULL){{
        {serialize(name,"NULL",num_indirection,length,client)}
    }}
    if 
    if ({len(length)>0 and length[-1]!=''}){{
        for(int i=0; i < {length[-1]}; i++){{
            {serialize(name+"[i]",num_indirection-1
    
    return result;
""")

utils.write("json serialize(std::string name, std::string type, int num_indirection, std::vector<std::string> length, client);",header=True)