#Clone vulkan-headers
#Write proto-make in Python: recompile file if modified time is different than modified time on compiled .o file (set modified time on .o file after compiling)

declare -a REPOS=( "KhronosGroup/Vulkan-Headers" "nlohmann/json" "okdshin/PicoSHA2" "chronoxor/CppServer" "lassik/shm_open_anon" "qt/qtbase","chriskohlhoff/asio")

for repo in ${REPOS[@]}; do
	folder= $(echo $repo |  awk -F/ '{print $NF}' )
	rm -rf external/$folder
	git clone --depth=1 https://github.com/$repo external/$folder
	if [ "$folder" == "qtbase" ]; then
		echo "Building QT"
		cd external/$folder
		mkdir build
		cd build
		cmake -DBUILD_SHARED_LIBS=OFF -DINPUT_gui=OFF -DINPUT_network=ON -DCMAKE_POSITION_INDEPENDENT_CODE=ON -DINPUT_widgets=no -DINPUT_dbus=no -DINPUT_timezone=no -DINPUT_icu=no -DINPUT_opengl=no -DINPUT_harfbuzz=no -DINPUT_zstd=no -DINPUT_libb2=qt -DINPUT_mimetype_database_compression=none -DINPUT_system_zlib=no -DINPUT_pcre2=on -DINPUT_system_pcre2=no -DINPUT_png=qt -DINPUT_glib=no -DINPUT_vnc=no -DINPUT_directfb=no  -DINPUT_linuxfb=no -DINPUT_testlib=no -DINPUT_sql=no -DINPUT_textmarkdownreader=no -DINPUT_imageformatplugin=no -DINPUT_libinput=no -DINPUT_system_xcb_xinput=on -DINPUT_fontconfig=no -DINPUT_freetype=no -DINPUT_evdev=no -DINPUT_tslib=no -DINPUT_vulkan=no -DFEATURE_concurrent=OFF -DFEATURE_xml=OFF -DINPUT_brotli=no -DFEATURE_gssapi=no .. && cmake --build . --parallel 3
	fi
done
