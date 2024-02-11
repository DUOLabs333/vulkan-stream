import os
import sys
from sys import platform as PLATFORM
import subprocess
import itertools
import glob
import re
#Proto-make (only recompile if changed), but don't want to deal with setting up make/cmake

CLIENT=os.environ.get("CLIENT","0")
DEBUG=os.environ.get("DEBUG","1")

VK_LIB_PATH=os.path.expanduser(os.environ.get("VK_LIB_PATH","~/.nix-profile/lib"))


SRC_FILES=["autogen/*","src/*","external/shm_open_anon/shm_open_anon.c","simdjson/simdjson.c"]
INCLUDE_PATHS=["autogen","src", "external/shm_open_anon", "external/Vulkan-Headers/include","external/asio/asio/include","external/boost","external/lz4/lib","external/komihash","simdjson/include"]
FLAGS=(["-DCLIENT"] if CLIENT=="1" else []) + (["-g","-DDEBUG"] if DEBUG=="1" else ["-O3","-DNDEBUG"]) + ["-Wfatal-errors","-fPIC","-Winvalid-pch"]+os.environ["VK_HEADER_FLAGS"].split(" ")+(["-g","-ggdb"] if PLATFORM=="linux" else [])+([] if DEBUG=="1" else ["-mcpu=apple-a14" if PLATFORM=="darwin" else "-march=native"])

STATIC_LIBS=["external/lz4/lib/liblz4.a"]
SHARED_LIBS_PATHS=[VK_LIB_PATH]
SHARED_LIBS=(["vulkan"] if CLIENT=="0" else (["xcb","X11","xcb-image"] if PLATFORM=="linux" else []))

def get_object_file(name):
    if not (name.endswith(".cpp") or name.endswith(".c")):
        return None
    return re.sub(r"^(.*)\.(.*)$",r"\1.o",name)
   
INCLUDE_PATHS=list(itertools.chain.from_iterable([['-I', x] for x in INCLUDE_PATHS]))
SHARED_LIBS=["-l"+_ for _ in SHARED_LIBS]
SHARED_LIBS_PATHS=["-L"+_ for _ in SHARED_LIBS_PATHS]

for i, e in enumerate(SRC_FILES):
   SRC_FILES[i]=[_ for _ in glob.glob(e) if get_object_file(_)]
   
SRC_FILES=list(itertools.chain.from_iterable(SRC_FILES))

for i, e in enumerate(STATIC_LIBS):
   STATIC_LIBS[i]=[_ for _ in glob.glob(e) if _.endswith(".a")]
STATIC_LIBS=list(itertools.chain.from_iterable(STATIC_LIBS))
STATIC_LIBS=(["-Wl,--start-group"] if PLATFORM!="darwin" else [])+STATIC_LIBS+(["-Wl,--end-group"] if PLATFORM!="darwin" else [])

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
        os.remove(object_file)
            
    modified_time=int(os.path.getmtime(file))
    CPP=file.endswith(".cpp")
    
    subprocess.run([("g++" if CPP else "gcc")]+[("-std=c++20" if CPP else "-std=gnu99")]+ FLAGS+ ["-o",object_file,"-c",file]+ INCLUDE_PATHS)
    os.utime(object_file, (modified_time, modified_time))

if os.environ.get("CLEAN","0")=="0":
    subprocess.run(["g++"]+(["-shared","-o","vulkan_stream.so"] if CLIENT=="1" else ["-o","vulkan_stream"])+[get_object_file(_) for _ in SRC_FILES]+FLAGS+STATIC_LIBS+SHARED_LIBS_PATHS+SHARED_LIBS)

