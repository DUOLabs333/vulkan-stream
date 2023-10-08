if [[ "$OSTYPE" == "darwin"* ]]; then
	export VK_HEADER_FLAGS="-DVK_USE_PLATFORM_METAL_EXT"
else
	export VK_HEADER_FLAGS="-DVK_USE_PLATFORM_XCB_KHR -DVK_USE_PLATFORM_XLIB_KHR"
fi

if [ -z ${ZSH_VERSION+x} ]; then
	setopt globsubst
	setopt shwordsplit
fi

#Later, just pass in VK_HEADER_FLAGS to python (export it) and tell it to generate it to minimize writing to disk
(cd parse && g++ -E -P $VK_HEADER_FLAGS -I ../external/Vulkan-Headers/include ../external/Vulkan-Headers/include/vulkan/vulkan.h > vulkan_header.h && python parse.py)
(cd autogen && ls *.py | xargs -L 1 python)

COMPILE_FLAGS="$VK_HEADER_FLAGS -std=c++20 -Wfatal-errors" 

BUILD_FILES="autogen/*.cpp src/*.cpp -I autogen -I src -I external/json/single_include -I external/PicoSHA2 -I external/shm_open_anon -I external/qtbase/build/include -I external/Vulkan-Headers/include external/qtbase/build/lib/*.a"

g++ -DCLIENT=1 -shared -o vulkan_stream.so $COMPILE_FLAGS $BUILD_FILES

g++ -o vulkan_stream $COMPILE_FLAGS $BUILD_FILES
