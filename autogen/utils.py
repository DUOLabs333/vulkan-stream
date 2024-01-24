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
import sys

sys.path.append("../parse")
from parse import normalize_field, normalize_type

parsed=json.load(open("../parse/parsed.json"))

random_string = lambda seed: ''.join(random.Random(json.dumps(seed)).choices(string.ascii_uppercase + string.ascii_lowercase, k=7))

def is_void(name):
    return name.get("type","")=="void" and name["num_indirection"]==0

def update_dict(info, alias):
    alias_dict=parsed[alias]
    
    info["length"]=alias_dict["length"]+info["length"]
    info["num_indirection"]+=alias_dict["num_indirection"]
    
    if alias_dict["kind"]=="primitive":
        info["type"]=alias
    else:
        info["type"]=alias_dict["type"]
        
    if "alias" in alias_dict:
        info["alias"]=alias_dict["alias"]
    elif "alias" in info:
        del info["alias"]

def normalize_attr(string):
    return normalize_type(string)

import re
def normalize_which(string):
    string=string.replace("_","")
    string=re.sub(r"(.)(?=([A-Z]))", r"\1_",string)
    return string.upper()
    
def convert(native,proto,attr,info, serialize, initialize=False):
    """
    If serializing: C++ object to Builder
    If not: Reader to C++ object
    """
    
    info=copy.deepcopy(info) #To avoid modifying the mutable arguments
    
    if is_void(info):
        return ""
    
    #Make it easier to refer to
    num_indirection=info["num_indirection"]
    length=info["length"]
    type=info['type']
    kind=parsed[type]["kind"]
    
    def proto_concat(action, argument=""):
        relation=info["relation"]
        args=([] if argument=="" else [argument])
        
        if relation=="index":
            if action=="set":
                child=f".{action}"
                args.insert(0,attr)
            elif action=="init":
                if len(length)>0:
                    if kind=="struct":
                        child=f"[{attr}]" #When a list of structs are initialized, each element is also initialized, so nothing has to be done
                        args=None
                    else:
                        child=f".{action}"
                        args.insert(0,attr)
                else:
                    child=f"[{attr}]" #When a list of primitives are initialized, each element is also initialized, so nothing has to be done
                    args=None
            elif action=="get":
                child=f"[{attr}]"
                args=None
            else:
                raise ValueError("Unsupported action for Lists! Something has gone wrong.")
                
        else:
            _attr=attr
            _attr=normalize_attr(_attr)
            child=f".{action}{_attr}"
        
        if args is None:
            args=""
        else:
            args=f"({','.join(args)})"
            
        return proto+child+args
    
    def native_concat():
        relation=info["relation"]
        
        if relation=="index":
            child=f"[{attr}]"
        elif relation=="member":
            child=f".{attr}"
        elif relation in ["param", "return"]: #In this case, parent MUST be ""
            child=attr
            
        return "("+native+child+")"
    def args():
        curr_frame=inspect.currentframe()
        parent_frame=curr_frame.f_back
        parent_function=curr_frame.f_globals[parent_frame.f_code.co_name]
        
        args_dict=inspect.signature(parent_function,follow_wrapped=False).parameters
        return [parent_frame.f_locals[arg] for arg in args_dict]
    
    deserialize=not serialize
    if serialize:
        initialize=False
        
    result="[&](){"
    
    if deserialize and info.get("const",False) and not(len(length)>0 and num_indirection==0): #Const pointer, which can be reassigned
        if initialize:
            temp_variable="temp_"+random_string(info)
            result+=info["header"].replace("const","").replace(info["name"],temp_variable)
            
            info["const"]=False
            result+=convert(*args())
            result+=f"{native_concat()}={temp_variable};"
            result+="}();"
            return result
        else: #Not initializing, so won't make any sense to override
            return ""
    elif "alias" in info:
        update_dict(info, info["alias"])
        result+=convert(*args())
        
        result+="}();"
        return result
        
    if num_indirection>0: #Must be a list
        if serialize:
            result+=f"""
            if ({native_concat()}==NULL){{
                {proto_concat("init","0")};
            """
        else:
            result+=f"""
            if (!{proto_concat("get")}.size()==0){{
                {native_concat()}=NULL;
            """
        result +="return; }"
        
    if (type=="void" and num_indirection==1):
        info["type"]="char"
        if len(length)==0: #Doesn't have predefined length
            info["length"].append("null-terminated")
        
        if serialize:
            native=f"(char*){native_concat()}"
        else:
            old_native=native
            new_native=f"temp_{random_string(info)}"
            
            native=new_native
            result+=f"char* {native};"
            
        result+=convert(*args())
        
        if not serialize:
            native=old_native
            result+=f"{native_concat()}={new_native};"
    
    elif (kind=="external_handle" and num_indirection<2):
            if serialize:
                result+=f"""{proto_concat("set","(uintptr_t)"+native_concat())};"""
            else:
                result+=f"""{native_concat()}=(uintptr_t){proto_concat("get")};"""
                
    elif len(length)>0:
        size=length.pop()
        temp_iterator=random_string(info)
        
        if size=="null-terminated":
            if serialize:
                size=f"strlen({native_concat()})+1"
            else:
                size=f"""{proto_concat("get")}.size();"""
                
        if deserialize and num_indirection>0: #Dynamic array, so each element of char** would be char*
            if initialize:
                result+=f"""{{native_concat()}}=({type+("*"*num_indirection)})malloc({size}*sizeof({type+("*"*(num_indirection-1))}));"""
        
        info["num_indirection"]-=1
        
        native=native_concat()
        
        if serialize:
            proto_arr=f"""{proto_concat("init",size)}"""
        else:
            proto_arr=f"""{proto_concat("get",size)}"""
        
        attr=temp_iterator
        info["relation"]="index"
        proto="proto_arr"
        
        result+=f"""
        auto proto_arr={proto_arr};
        for(int {temp_iterator}=0; {temp_iterator} < {size}; {temp_iterator}++){{
            {convert(*args())}
        }}
        """
    
    elif kind=="pUserData": #Has to be handled specially as we are dealing with the parent, not just the child
        #Deserializing on the client shouldn't do anything --- similarly on the server
        if serialize:
            result+=f"""
            auto temp={proto_concat("init",attr)};
            return serialize_{kind}({native}, temp);
            """
        else:
            result+=f"""
            auto temp={proto_concat("get")};
            {native_concat()}=deserialize_{kind}(temp, native);
            """
            
    elif kind in ["struct","funcpointer"]: #pNext is handled specially as a union
        if serialize:
            result+=f"""
            auto temp={proto_concat("init",attr)};
            return serialize_{kind}(temp, {native_concat()}, );
            """
        else:
            if kind=="funcpointer":
                result+="\n#ifndef CLIENT"
                
            result+=f"""
            auto temp={proto_concat("get")};
            {native_concat()}=deserialize_{kind}(temp);
            """
            if kind=="funcpointer":
                result+="#endif\n"
                
    elif kind=="primitive":
        if serialize:
            result+=f"""return {proto_concat("set", native_concat())};"""
        else:
            result+=f"""{native_concat()}={proto_concat("get")};"""
    elif kind=="basetype":
        update_dict(info, type)
        result+=convert(*args())
    elif kind=="handle":
        if serialize:
            result+=f"""return {proto_concat("set", f"serialize_handle{native_concat()}")};"""
        else:
            result+=f"""{native_concat()}=deserialize_{type}({proto_concat("get")});"""
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