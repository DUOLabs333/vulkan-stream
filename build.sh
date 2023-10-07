VK_HEADER_FLAGS="-DVK_USE_PLATFORM_XCB_KHR -DVK_USE_PLATFORM_XLIB_KHR"
#Later, just pass in VK_HEADER_FLAGS to python (export it) and tell it to generate it to minimize writing to disk
(cd parse && g++ -E -P $VK_HEADER_FLAGS external/Vulkan-Headers/include/vulkan/vulkan.h > vulkan_header.h && python parse.py)
(cd autogen && ls *.py | xargs -L 1 python)

COMPILE_FLAGS="$VK_HEADER_FLAGS -std=c++23 -Wfatal-errors" 

BUILD_FILES="autogen/*.cpp src/*.cpp -I autogen -I src -I external/json/single_include -I external/PicoSHA2 -I external/shm_open_anon -I external/qtbase/build/include -I external/Vulkan-Headers/include external/qtbase/build/lib/*.a"

g++ -DCLIENT=1 -shared -o vulkan_stream.so $COMPILE_FLAGS $BUILD_FILES

g++ -o vulkan_stream $COMPILE_FLAGS $BUILD_FILES


cmake -DBUILD_SHARED_LIBS=OFF -DINPUT_gui=OFF -DINPUT_network=ON -DCMAKE_POSITION_INDEPENDENT_CODE=ON -DINPUT_widgets=no -DINPUT_dbus=no -DINPUT_timezone=no -DINPUT_icu=no -DINPUT_opengl=no -DINPUT_harfbuzz=no -DINPUT_zstd=no -DINPUT_libb2=qt -DINPUT_mimetype_database_compression=none -DINPUT_system_zlib=no -DINPUT_pcre2=no -DINPUT_png=qt -DINPUT_glib=no -DINPUT_vnc=no -DINPUT_directfb=no  -DINPUT_linuxfb=no -DINPUT_testlib=no -DINPUT_sql=no -DINPUT_textmarkdownreader=no -DINPUT_imageformatplugin=no -DINPUT_libinput=no -DINPUT_system_xcb_xinput=on -DINPUT_fontconfig=no -DINPUT_freetype=no -DINPUT_evdev=no -DINPUT_tslib=no -DINPUT_vulkan=no -DFEATURE_concurrent=OFF -DFEATURE_xml=OFF ..

cmake --build . --parallel 3