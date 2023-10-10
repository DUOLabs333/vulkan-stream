if [[ "$OSTYPE" == "darwin"* ]]; then
	export VK_HEADER_FLAGS="-DVK_USE_PLATFORM_METAL_EXT"
else
	export VK_HEADER_FLAGS="-DVK_USE_PLATFORM_XCB_KHR -DVK_USE_PLATFORM_XLIB_KHR"
fi

#Later, just pass in VK_HEADER_FLAGS to python (export it) and tell it to generate it to minimize writing to disk
(cd parse && g++ -E -P $VK_HEADER_FLAGS -I ../external/Vulkan-Headers/include ../external/Vulkan-Headers/include/vulkan/vulkan.h > vulkan_header.h && python parse.py)
(cd autogen && ls *.py | xargs -L 1 python)

CLEAN=1 python build.py
CLIENT=1 python build.py
#CLEAN=1 python build.py
#python build.py
