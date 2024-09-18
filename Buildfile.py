import os
import sys
import subprocess
conn=import_build("../asio_c")

VK_HEADER_FLAGS=os.environ.get("VK_HEADER_FLAGS", "")

if PLATFORM=="darwin":
    VK_HEADER_FLAGS+=" -DVK_USE_PLATFORM_METAL_EXT"
else:
    VK_HEADER_FLAGS+=" -DVK_USE_PLATFORM_XCB_KHR -DVK_USE_PLATFORM_XLIB_KHR"

os.environ["VK_HEADER_FLAGS"]=VK_HEADER_FLAGS

VK_HEADER_FLAGS=VK_HEADER_FLAGS.strip().split(" ")

def run_path(path,env=None):
    return subprocess.run([sys.executable, path], env=env)

class main(BuildBase):
    SRC_FILES=["autogen/*","src/*", get_dep_path("shm_open_anon", "shm_open_anon.c"), get_dep_path("simdjson", "singleheader/simdjson.cpp")]
    INCLUDE_PATHS=["autogen","src", get_dep_path("shm_open_anon"), get_dep_path("Vulkan-Headers", "include"), get_dep_path("boost"), conn.library, get_dep_path("Turbo-Base64", ""), get_dep_path("simdjson", "singleheader"), get_dep_path("glaze", "include"), get_dep_path("xxHash-3")]

    STATIC_LIBS=[conn.library, get_dep_path("Turbo-Base64", "libtb64.a"), get_dep_path("xxHash-3", "libxxhash.a")]

    FLAGS = VK_HEADER_FLAGS

    SHARED_LIBS=(["vulkan"] if not CLIENT else (["xcb","X11","xcb-image", "profiler"] if PLATFORM=="linux" else []))

    OUTPUT_NAME="vulkan_stream"

    OUTPUT_TYPE=LIB if CLIENT else EXE

class autogen(BuildBase):

    def build(cls):
        os.chdir("autogen")

        for file in os.listdir(os.getcwd()):
            if not file.endswith(".py"):
                continue

            run_path(file)

class parse(BuildBase):
    def build(cls):
        os.chdir("parse")
        run_path("parse.py",env=os.environ | {"VK_HEADER_PATH": get_dep_path("Vulkan-Headers","")})

