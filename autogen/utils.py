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
import copy
parsed=json.load(open("../parse/parsed.json"))

def serialize(variable,value):
    val=copy.deepcopy(value)
    
    name=val["name"]
    num_indirection=val["num_indirection"]
    length=val["length"].copy()
    type=val['type']
    if value.get("const",False):
        return ""
        
    result=f"""{variable}=[&]() {{
    json result=json({{}});
    """
    if num_indirection>0:
        result+=f"""
        if ({name}==NULL){{
            result["null"]=true;
            return result;
        }}
        """
    if (type in ["char", "void"] and num_indirection==1):
        result+=f"return serialize_{type}_p({name});\n"
    
    elif (len(length)>0 and (length[-1]!="")):
        val["name"]+="[i]"
        val["num_indirection"]-=1
        val["length"].pop()
        
        result+=f"""
        result["members"]={{}};
        for(int i=0; i < {length[-1]}; i++){{
            json temp;
            {serialize('temp',val)}
            result["members"][std::to_string(i)].push_back(temp);
        }}
        return result;
        """
    elif num_indirection>0:
        val["name"]="*"+name
        val["num_indirection"]-=1
       
        result+=(serialize("result",val)+"\n")
    else:
        result+=(f"""
        #ifdef CLIENT
        return serialize_{type}({name});
        #endif
        """ 
        if type in parsed["funcpointers"]
        else
        f"return serialize_{type}({name});"
        )
    
    result+="}();"
    return result

def deserialize(variable,value):
    val=copy.deepcopy(value)
    
    name=val["name"]
    num_indirection=val["num_indirection"]
    length=val["length"].copy()
    type=val['type']
    if value.get("const",False):
        return ""

    if num_indirection==0 and (len(length)>0 and length[-1]!=""): #Arrays can't be returned
        result=f"[&]() {{\n"
    else:
        result=f"{variable}=[&]() -> {type}{'*'*num_indirection} {{\n"
        
    if num_indirection>0:
        result+=f"""
        if ({name}.contains("null")){{
        return NULL;
        }}
    """
    if (type in ["char", "void"] and num_indirection==1):
        result+=f"return deserialize_{type}_p({name});\n"
        
    elif (len(length)>0 and (length[-1]!="")):
        if num_indirection==0: #Array
            array=variable
        else:
            result+=f"""auto members=({type}{"*"*num_indirection})malloc({length[-1]}*sizeof({type+"*"*(num_indirection-1)}));"""
            array="members"
        val["name"]+='["members"][i]'
        val["num_indirection"]-=1
        val["length"].pop()
        result+=f"""
        for (int i=0; i < {length[-1]}; i++){{
            {deserialize(array+'[i]',val)};
        }}
        """
        if num_indirection>0:
            result+="return members;\n"
        
    elif num_indirection>0:
        val["num_indirection"]-=1
        result+=f"""
         auto pointer=({type}{'*'*num_indirection})malloc(sizeof({type}{'*'*(num_indirection-1)}));
         {deserialize('*pointer',val)}
         return pointer;
        """
    else:
        result+=(f"""
        #ifndef CLIENT
        return deserialize_{type}({name});
        #else
        return {variable};
        #endif
        """ 
        if type in parsed["funcpointers"]
        else
        f"return deserialize_{type}({name});"
        )
    
    result+="}();"
    
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