import inspect
import pathlib
import atexit
for frame in inspect.stack()[1:]:
        if frame.filename[0] != '<':
            output_basename=pathlib.Path(frame.filename).stem
            break

lines=[]
header_lines=[]

import json
parsed=json.load(open("../parse/parsed.json"))

def serialize(name,type,num_indirection,length):
    result=f"""json [&](){{
    json result=json({{}});
    
    if ({name}==NULL){{
        result["null"]=true;
    }}else{{
    """
    if (type in ["char", "void"] and num_indirection==1):
        result+="return serialize_{type}_p({name});\n"
    
    elif (len(length)>0 and (length[-1]!="")):
        result+=f"""
        result["members"]={{}};
        for(int i=0; i < {length[-1]}; i++){{
            result["members"][std::to_string(i)].push_back({serialize(name+"[i]",type,num_indirection-1,length[:-1])});
        }}
        """
    elif num_indirection>0:
        result+=f"""result={serialize("*"+name,type,num_indirection-1,length)};\n"""
    else:
        result+=(f"""
        #ifdef CLIENT
        return serialize_{type}(name);
        #endif
        """ 
        if type in parsed["funcpointers"]
        else
        f"return serialize_{type}(name);"
        )
    
    result+="\n}}()"
    return result

def deserialize(name,type,num_indirection,length):
    result=f"""auto [&](){{
    if ({name}.contains("null")){{
        return NULL;
    }}else{{
    """
    if (type in ["char", "void"] and num_indirection==1):
        result+="return serialize_{type}_p({name});\n"
        
    elif (len(length)>0 and (length[-1]!="")):
        if num_indirection==0:
            result+=f"auto members={type}[{length[-1]}];"
        else:
            result+=f"""auto members=malloc({length[-1]}*{type+"*"*(num_indirection-1)});"""
        result+=f"""
        for (int i=0; i < {length[-1]}; i++){{
            members[i]={deserialize(name+'["members"][i]',type,num_indirection-1,length[:-1])};
        }}
        return members;
        """
    elif num_indirection>0:
        result+=f"""
         auto pointer={deserialize(name,type,num_indirection-1,length)};
        return &pointer;
        """
    else:
        result+=(f"""
        #ifndef CLIENT
        return deserialize_{type}(name);
        #endif
        """ 
        if type in parsed["funcpointers"]
        else
        f"return deserialize_{type}(name);"
        )
    
    result+="\n}}()"
    
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
            
if __name__!="__main__":
    atexit.register(write_to_file)