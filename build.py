import os
import sys
import subprocess
import itertools
import glob
import re

CLIENT=os.environ.get("CLIENT","0")
#Proto-make (only recompile if changed), but don't want to deal with setting up make/cmake

VK_LIB_PATH="/opt/homebrew/lib"
#Rewrite to use glob, and substitue into SRC_FILES, which will then be flattened
SRC_FILES=["autogen/*","src/*","external/shm_open_anon/shm_open_anon.c"]
INCLUDE_PATHS=["autogen","src", "external/json/single_include", "external/PicoSHA2", "external/shm_open_anon", "external/qtbase/build/include", "external/Vulkan-Headers/include"]
FLAGS=(["-DCLIENT"] if CLIENT=="1" else [])+["-Wfatal-errors","-fPIC","-Winvalid-pch"]+os.environ["VK_HEADER_FLAGS"].split(" ")
STATIC_LIBS=["external/qtbase/build/lib/*"]
SHARED_LIBS_PATHS=[VK_LIB_PATH]
SHARED_LIBS=(["double-conversion"] if sys.platform=="linux" else ["resolv"])+(["vulkan"] if CLIENT=="0" else [])
FRAMEWORKS=["CoreFoundation","CFNetwork","CoreServices","IOKit","AppKit","Foundation","SystemConfiguration","Security"]

def get_object_file(name):
    if not (name.endswith(".cpp") or name.endswith(".c")):
        return None
    return re.sub(r"^(.*)\.(.*)$",r"\1.o",name)
   
INCLUDE_PATHS=list(itertools.chain.from_iterable([['-I', x] for x in INCLUDE_PATHS]))
SHARED_LIBS=["-l"+_ for _ in SHARED_LIBS]
SHARED_LIBS_PATHS=["-L"+_ for _ in SHARED_LIBS_PATHS]
FRAMEWORKS=list(itertools.chain.from_iterable([['-framework',x] for x in FRAMEWORKS]))

for i, e in enumerate(SRC_FILES):
   SRC_FILES[i]=[_ for _ in glob.glob(e) if get_object_file(_)]
   
SRC_FILES=list(itertools.chain.from_iterable(SRC_FILES))

for i, e in enumerate(STATIC_LIBS):
   STATIC_LIBS[i]=[_ for _ in glob.glob(e) if _.endswith(".a")]
STATIC_LIBS=list(itertools.chain.from_iterable(STATIC_LIBS))
STATIC_LIBS=(["-Wl,--start-group"] if sys.platform!="darwin" else [])+STATIC_LIBS+(["-Wl,--end-group"] if sys.platform!="darwin" else [])

for file in SRC_FILES:
    object_file=get_object_file(file)
    if not object_file:
        continue
    
    if os.environ.get("CLEAN","0")=="1":
        try:
            os.remove(object_file)
        except OSError:
            pass
        continue
        
    if os.path.exists(object_file):
        if int(os.path.getmtime(object_file))==int(os.path.getmtime(file)):
            continue
            
    modified_time=int(os.path.getmtime(file))
    CPP=file.endswith(".cpp")

    subprocess.run([("g++" if CPP else "gcc")]+[("-std=c++20" if CPP else "-std=gnu99"),"-fsanitize=address,undefined","-g"]+ FLAGS+ ["-o",object_file,"-c",file]+ INCLUDE_PATHS)
    os.utime(object_file, (modified_time, modified_time))

if os.environ.get("CLEAN","0")=="0":
    subprocess.run(["g++","-fsanitize=address,undefined"]+(["-shared","-o","vulkan_stream.so"] if CLIENT=="1" else ["-o","vulkan_stream"])+[get_object_file(_) for _ in SRC_FILES]+(FRAMEWORKS if sys.platform=="darwin" else [])+["-Wl,-rpath",(VK_LIB_PATH if sys.platform=="darwin" else "")]+STATIC_LIBS+SHARED_LIBS_PATHS+SHARED_LIBS)

