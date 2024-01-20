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

random_string = lambda seed: ''.join(random.Random(json.dumps(seed)).choices(string.ascii_uppercase + string.ascii_lowercase, k=7))

def is_void(name):
    return name["type"]=="void" and name["num_indirection"]==0

def proto_concat(beginning, middle, end):
    return beginning+"."+middle+end.title()

def native_concat(beginning, middle, end):
    return "("+beginning+("." if middle["kind"]=="member" else "")+end+")"
    
def convert(native,proto,attr,info, serialize, initialize=False):
    """
    If serializing: C++ object to Builder
    If not: Reader to C++ object
    """
    
    if is_void(info):
        return ""
        
    val=copy.deepcopy(info)
    
    num_indirection=val["num_indirection"]
    length=val["length"].copy()
    type=val['type']
    kind=parsed[type]["kind"]
    
    deserialize=not serialize
    if serialize:
        initialize=False
        
    result="[&](){"
    
    if deserialize and val.get("const",False) and not(len(length)>0 and num_indirection==0): #Const pointer, which can be reassigned
        if initialize:
            temp_variable="temp_"+random_string(val)
            result+=val["header"].replace("const","").replace(val["name"],temp_variable)
            
            val["const"]=False
            result+=convert(native,proto,attr,val,serialize,initialize)
            result+=f"{native_concat(native,info,attr)}={temp_variable};"
            result+="}();"
            return result
        else: #Not initializing, so won't make any sense to override
            return ""
    elif "alias" in val:
        val=parsed[val["alias"]]
        val["num_indirection"]+=num_indirection
        result+=convert(native,proto, attr,val,serialize,initialize)
        
        result+="}();"
        return result
        
    if num_indirection>0:
        if serialize:
            result+=f"""
            if ({native_concat(native,info,attr)}==NULL){{
                {proto_concat(proto,"disown",attr)}();
            }}
            """
        else:
            result+=f"""
            if (!{proto_concat(native,"has",attr)}()){{
                {native_concat(native,info,attr)}=NULL;
            }}
            """
        result +="return;"
        
    if (type=="void" and num_indirection==1):
        val["type"]="char"
        if len(length)==0: #Doesn't have predefined length
            val["length"].append("null-terminated")
        
        if serialize:
            temp=f"(char*){native_concat(native,val,attr)}"
        else:
            temp=f"{temp}_{random_string(val)}"
            result+=f"char* {temp};"
            
        result+=convert(temp,proto,attr,val,serialize,initialize)
        if not serialize:
            result+=f"{native_concat(native,val,attr)}={temp};"
    
    elif (info["kind"]=="external_handle" and num_indirection<2):
            if serialize:
                result+=f"""{proto_concat(proto,"set",attr)}((uintptr_t){native_concat(native,info,attr)});"""
            else:
                result+=f"""{native_concat(native,info,attr)}=(uintptr_t){proto_concat(proto,"get",attr)}();"""
                
    elif len(length)>0:
        size=length[-1]
        temp_iterator=random_string(val)
        
        val["num_indirection"]-=1
        val["length"].pop()
        
        if size=="null-terminated":
            if serialize:
                size=f"strlen({native_concat(native,val,attr)})+1"
            else:
                size=f"""{proto_concat(proto,"get",attr)}().size();"""
                
        if deserialize and num_indirection>0: #Dynamic array, so each element of char** would be char*
            if initialize:
                result+=f"""{{native_concat(native,val,attr)}}=({type+("*"*num_indirection)})malloc({size}*sizeof({type+("*"*(num_indirection-1))}));"""
            val["num_indirection"]-=1 
            
        index=f"[{temp_iterator}]"
        
        native_arr=native_concat(native,val,attr)
        
        if serialize:
            proto_arr=f"""{proto_concat(proto,"init",attr)}({size})"""
        else:
            proto_arr=f"""{proto_concat(proto,"get",attr)}()"""
            
        result+=f"""
        auto arr={proto_arr};
        for(int {temp_iterator}=0; {temp_iterator} < {size}; {temp_iterator}++){{
            auto temp=arr{index};
            {convert(native_arr+index,"temp",attr,val,serialize,initialize)}
        }}
        """
    
    elif kind in ["struct","funcpointer"]: #pNext is handled specially as a union
        if serialize:
            result+=f"""
            auto temp={proto_concat(proto,"init",attr)};
            return serialize_{type}({native_concat(native,info,attr)}, temp);
            """
        else:
            if kind=="funcpointer":
                result+="#ifdef CLIENT"
                
            result+=f"""
            auto temp={proto_concat(proto,"get",attr)};
            {native_concat(native,info,attr)}=deserialize_{type}(temp);
            """
            if kind=="funcpointer":
                result+="#endif"
                
    elif kind=="primitive": #Handle primitives inline
        if serialize:
            result+=f"""return {proto_concat(proto,"set",attr)}({native_concat(native,info,attr)});"""
        else:
            result+=f"""{native_concat(native,info,attr)}={proto_concat(proto,"get",attr)}();"""
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