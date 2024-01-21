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
            elif action=="disown": #This is only used when dealing indices that points to a list
                child=".init"
                args.insert(0,attr)
            elif action=="has":
                child=f"[{attr}].size" #!size() is true when list is empty
                args=None
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
            child=f".{action}{attr.title()}"
        
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
        elif relation=="param": #In this case, parent MUST be ""
            child=attr
            
        return "("+native+child+")"
    def args():
        parent_function=inspect.getouterframes( inspect.currentframe() )[1]
        args_tuple=parent_function.f_code.co_varnames
        return [locals()[arg] for arg in args_tuple]
    
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
        info=parsed[info["alias"]]
        info["num_indirection"]+=num_indirection
        result+=convert(*args())
        
        result+="}();"
        return result
        
    if num_indirection>0:
        if serialize:
            result+=f"""
            if ({native_concat()}==NULL){{
                {proto_concat("disown")};
            }}
            """
        else:
            result+=f"""
            if (!{proto_concat("has")}){{
                {native_concat()}=NULL;
            }}
            """
        result +="return;"
        
    if (type=="void" and num_indirection==1):
        info["type"]="char"
        if len(length)==0: #Doesn't have predefined length
            info["length"].append("null-terminated")
        
        if serialize:
            native=f"(char*){native_concat()}"
        else:
            native=f"{temp}_{random_string(info)}"
            result+=f"char* {native};"
            
        result+=convert(*args())
        
        if not serialize:
            result+=f"{native_concat()}={temp};"
    
    elif (info["kind"]=="external_handle" and num_indirection<2):
            if serialize:
                result+=f"""{proto_concat("set","(uintptr_t)"+native_concat(native,attr,info))};"""
            else:
                result+=f"""{native_concat()}=(uintptr_t){proto_concat("get")};"""
                
    elif len(length)>0:
        size=info["length"].pop()
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
            proto_arr=f"""{proto_concat("init")}"""
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
    
    elif kind in ["struct","funcpointer"]: #pNext is handled specially as a union
        if serialize:
            result+=f"""
            auto temp={proto_concat("init",attr)};
            return serialize_{type}({native_concat()}, temp);
            """
        else:
            if kind=="funcpointer":
                result+="#ifdef CLIENT"
                
            result+=f"""
            auto temp={proto_concat("get")};
            {native_concat()}=deserialize_{type}(temp);
            """
            if kind=="funcpointer":
                result+="#endif"
                
    elif kind=="primitive": #Handle primitives inline
        if serialize:
            result+=f"""return {proto_concat("set")}({native_concat()});"""
        else:
            result+=f"""{native_concat()}={proto_concat("get")}();"""
    elif kind=="basetype":
        info=parsed[type]
        info["num_indirection"]+=num_indirection
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