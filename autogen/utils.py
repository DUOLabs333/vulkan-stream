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
import random, string
parsed=json.load(open("../parse/parsed.json"))

random_string = lambda : ''.join(random.choices(string.ascii_uppercase +
                             string.digits, k=7))

def is_void(name):
    return name["type"]=="void" and name["num_indirection"]==0
    
def serialize(variable,value):
    
    if is_void(value):
        return ""
        
    result_json="return_"+random_string()
    val=copy.deepcopy(value)
    
    name=val["name"]
    num_indirection=val["num_indirection"]
    length=val["length"].copy()
    type=val['type']
        
    result=f"""{variable}=[&]() {{
    json {result_json}=json({{}});
    """
    if num_indirection>0:
        result+=f"""
        if ({name}==NULL){{
            {result_json}["null"]=true;
            return {result_json};
        }}
        """
    if (type in ["char", "void"] and num_indirection==1):
        result+=f"return serialize_{type}_p({name});\n"
    
    elif (type in parsed["external_handles"] and num_indirection<2):
            if num_indirection==0:
                result+=f"return serialize_{type}({name});\n"
            elif num_indirection==1:
                result+=f"return serialize_{type}_p({name});\n"
                
    elif (len(length)>0 and (length[-1]!="")):
        val["name"]+="[i]"
        val["num_indirection"]-=1
        val["length"].pop()
        
        result+=f"""
        {result_json}["members"]={{}};
        for(int i=0; i < {length[-1]}; i++){{
            json temp;
            {serialize('temp',val)}
            {result_json}["members"][std::to_string(i)].push_back(temp);
        }}
        return {result_json};
        """
    elif num_indirection>0:
        val["name"]="*"+name
        val["num_indirection"]-=1
       
        result+=(serialize(result_json,val)+"\n")
        result+=("return "+result_json+";")
    elif type in parsed["basic_types"]:
        result+=f"""return serialize_{parsed["basic_types"][type]}({name});\n"""
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
    
    if value.get("const",False) or is_void(value):
        return ""
        
    val=copy.deepcopy(value)
    
    name=val["name"]
    num_indirection=val["num_indirection"]
    length=val["length"].copy()
    type=val['type']

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
    elif (type in parsed["external_handles"] and num_indirection<2):
            if num_indirection==0:
                result+=f"return deserialize_{type}({name});\n"
            elif num_indirection==1:
                result+=f"return deserialize_{type}_p({name});\n"
    elif (len(length)>0 and (length[-1]!="")):

        if num_indirection==0: #Array
            array=variable
        else:
            result+=f"""auto members=({type}{"*"*num_indirection})malloc({length[-1]}*sizeof({type+"*"*(num_indirection-1)}));"""
            array="members"
            val["num_indirection"]-=1
        val["name"]+='["members"][i]'
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
    elif type in parsed["basic_types"]:
        result+=f"""return deserialize_{parsed["basic_types"][type]}({name});\n"""
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