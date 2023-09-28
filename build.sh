(cd autogen && ls *.py | xargs -L 1 python)

COMPILE_FLAGS="autogen/*.cpp src/*.cpp -I autogen -I src -I external/json/single_include -I external/PicoSHA2 -I external/CppServer/include -I external/Vulkan-Headers/include -I external/CppServer/modules/asio/asio/include -Iexternal/CppServer/modules/CppCommon/include -I external/CppServer/modules/CppCommon/modules/fmt/include -L external/CppServer/bin -lcppserver"

g++ -DCLIENT=1 -std=c++20 -shared -o vulkan_stream.so $COMPILE_FLAGS

g++ -o vulkan_stream $COMPILE_FLAGS
