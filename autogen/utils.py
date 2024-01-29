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
import re

parsed=json.load(open("../parse/parsed.json"))

random_string = lambda seed: ''.join(random.Random(json.dumps(seed)).choices(string.ascii_uppercase + string.ascii_lowercase, k=7))

def is_void(name):
    return name.get("type","")=="void" and name["num_indirection"]==0

def update_dict(info, alias):
    alias_dict=parsed[alias]
    
    old_type=info["type"]
    alias_num_indirection=alias_dict["num_indirection"]
    
    info["length"]=alias_dict["length"]+info["length"]
    info["num_indirection"]+=alias_dict["num_indirection"]
    
    if alias_dict["kind"]=="primitive":
        info["type"]=alias
    else:
        info["type"]=alias_dict["type"]
    new_type=info["type"]
        
    if "alias" in alias_dict:
        info["alias"]=alias_dict["alias"]
    elif "alias" in info:
        del info["alias"]
    
    info["header"]=info["header"].replace(old_type, new_type+("*"*alias_num_indirection))

def convert(variable, value, info, serialize, initialize=False):
    info=copy.deepcopy(info) #To avoid modifying the mutable arguments
    
    """
    variable is the C++ object
    value is the JSON object
    """
    if is_void(info):
        return ""
    
    if (not serialize) and info.get("name","")=="blendConstants":
        pass
        #print(info)
    #Make it easier to refer to
    num_indirection=info["num_indirection"]
    length=info["length"]
    type=info['type']
    kind=parsed[type]["kind"]
    
    def args():
        curr_frame=inspect.currentframe()
        parent_frame=curr_frame.f_back
        parent_function=curr_frame.f_globals[parent_frame.f_code.co_name]
        
        args_dict=inspect.signature(parent_function,follow_wrapped=False).parameters
        return [parent_frame.f_locals[arg] for arg in args_dict]
    
    deserialize=not serialize
    if serialize:
        initialize=False
    
    temp_variable="temp_"+random_string(info)
    old_variable=variable
        
    result="[&](){"
    
    if deserialize and info.get("const",False) and not(len(length)>0 and num_indirection==0): #Const pointer, which can be reassigned
        if initialize:
            variable=temp_variable
            info["header"]=info["header"].replace("const","")
            
            result+=re.sub(fr"""\b{info["name"]}\b""",temp_variable,info["header"])+";"
            
            info["const"]=False
            result+=convert(*args())
            result+=f"{old_variable}={temp_variable};"
            result+="}();"
            return result
        else: #Not initializing, so won't make any sense to override
            return ""
        
    if num_indirection>0: #Must be a list
        if serialize:
            result+=f"""
            if ({variable}==NULL){{
                {value}=boost::json::array();
            """
        else:
            result+=f"""
            if ({value}.get_array().size()==0){{
                {variable}=NULL;
            """
        result +="return; }"
        
    if (type=="void" and num_indirection==1):
        info["type"]="char"
        
        if "header" in info:
            info["header"]=info["header"].replace("void","char",1)
            
        if serialize:
            variable=f"((char*)({variable}))"
        else:
            variable=temp_variable
            result+=f"char* {temp_variable};"
            initialize=True
            
        result+=convert(*args())
        
        if deserialize:
            result+=f"{old_variable}={temp_variable};"
    
    elif (kind=="external_handle" and num_indirection<=1):
            if serialize:
                result+=f"""{value}=(uintptr_t){variable};"""
            else:
                cast_header=re.sub(fr"""\b{info["name"]}\b""","",info["header"]).replace(";","")
                
                result+=f"""{variable}=({cast_header})(value_to<uintptr_t>({value}));"""
                
    elif len(length)>0:
        size=length.pop()
        temp_iterator=random_string(info)
        
        if size=="null-terminated":
            if serialize:
                size=f"strlen({variable})+1"
            else:
                size=f"""{value}.get_array().size()"""
                
        if deserialize and num_indirection>0: #Dynamic array, so each element of char** would be char*
            if initialize:
                result+=f"""{variable}=({type+("*"*num_indirection)})malloc({size}*sizeof({type+("*"*(num_indirection-1))}));"""
        
        info["num_indirection"]-=1
        
        if "header" in info:
            if "*" in info["header"]:
                info["header"]=info["header"].replace("*","",1) #Since the the array is one smaller
            else:
                info["header"]=re.sub(r"\[.*?\]","", info["header"],count=1)
        
        if serialize:
            result+=f"{value}=boost::json::array({size});"
        
        arr=f"{value}.get_array()"
        arr_json=f"arr_{random_string(info)}"
        
        variable+=f"[{temp_iterator}]"
        value=f"{arr_json}[{temp_iterator}]"
        
        result+=f"""
        auto& {arr_json}={arr};
        for(int {temp_iterator}=0; {temp_iterator} < {size}; {temp_iterator}++){{
            {convert(*args())}
        }}
        """
    
    elif kind=="pUserData": #Has to be handled specially as we are dealing with the parent, not just the child
        #Deserializing on the client shouldn't do anything --- similarly on the server
        raise ValueError("This is an error!")
    elif kind in ["struct","funcpointer"]:
        if info["type"]=="pNext": #pNext is handled specially
            kind=info["type"]
        elif kind=="funcpointer":
            kind=type
            
        if serialize:
            result+=f"""
            auto& temp={value}.emplace_object();
            return serialize_{kind}(temp, {variable});
            """
        else:
            if kind=="funcpointer":
                result+="\n#ifndef CLIENT"
                
            result+=f"""
            auto& temp={value}.get_object();
            deserialize_{kind}(temp,{variable});
            """
            if kind=="funcpointer":
                result+="#endif\n"
                
    elif kind=="primitive":
        if serialize:
            result+=f"""{value}={variable};"""
        else:
            result+=f"""
            if ({value}.is_uint64()){{
                {variable}=static_cast<{type}>({value}.get_uint64());
            }}else if ({value}.is_int64()){{
                {variable}=static_cast<{type}>({value}.get_int64());
            }}else{{
                {variable}=static_cast<{type}>({value}.get_double());
            }}
            """
    elif kind=="handle":
        if serialize:
            result+=f"serialize_{type}({value},{variable});"
        else:
            result+=f"""deserialize_{type}({value}, {variable});"""
    elif ("alias" in info) or (kind=="basetype"):
        if "alias" in info:
            type_to_replace=info["alias"]
        else:
            type_to_replace=type
        
        update_dict(info, type_to_replace)
        
        if deserialize:
            result+=f"""{info["type"]}{"*"*info["num_indirection"]} {temp_variable};"""
            variable=temp_variable
            initialize=True
            
        result+=convert(*args())
        
        if deserialize:
            result+=f"{old_variable}=({type}){temp_variable};"
            
        result+="}();"
        return result
    elif kind in ["enum", "bitmask"]:
        info["alias"]="int"
        result+=convert(*args())
    else:
        raise ValueError("Unhandled type! This shouldn't happen")
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