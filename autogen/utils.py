import inspect
import pathlib
for frame in inspect.stack()[1:]:
        if frame.filename[0] != '<':
            output_basename=pathlib.Path(frame.filename).stem
            break

lines=[]
header_lines=[]

import json
parsed=json.load("../parse/parsed.json")

def serialize(name,type,num_indirection,length,client=True):
    result=f"""
json [&](){{
    json result=json({{}});
    
    if ({name}==NULL){{
        result={serialize_null(name,client)};
    }} 
    else if ({(len(length)>0 and (length[-1] not in ['',"null-terminated"])) and not(type=="char" and num_indirection==1)}){{
        result["members"]={{}};
        for(int i=0; i < {length[-1]}; i++){{
            result["members"][std::to_string(i)].push_back({serialize(name+"[i]",num_indirection-1,length[:-1],client)});
        }}
    }}
    else if ({num_indirection>0}){{
        result={serialize("*"+name,type,num_indirection-1,length,client)};
    }}
    else {{
        result=serialize_{type}(name,{client});
    }}
    return result;
}}();
"""
    return result

def deserialize(name,type,num_indirection,length,client=True):
    result=f"""
auto [&](){{
    if ({name}["null"]){{
        return NULL;
    }}
    else if ({(len(length)>0 and (length[-1] not in ['',"null-terminated"])) and not(type=="char" and num_indirection==1)}){{
        auto members=malloc({length[-1]}*{type+"*"*(num_indirection-1)});
        for (int i=0; i < {length[-1]}; i++){{
            members[i]={deserialize({name+'["members"][i]'},type,num_indirection-1,length[:-1],client)}
        }}
        return members;
    }}
    else if ({num_indirection>0}){{
        auto pointer={deserialize(name,type,num_indirection-1,length,client)};
        return &pointer;
    }}
    else {{
        return deserialize_{type}(name,{client});
    }}
}}();
    """
    
    return result
def write(line,header=False):
    if not header:
        lines.append(line)
    else:
        header_lines.append(line)
    
def write_to_file():
    with open(output_basename+".cpp","w+") as f:
        for line in lines:
            f.write(line+"\n")
    
    with open(output_basename+".hpp","w+") as f:
        for line in header_lines:
            f.write(line+"\n")