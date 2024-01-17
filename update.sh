#Clone vulkan-headers
#Write proto-make in Python: recompile file if modified time is different than modified time on compiled .o file (set modified time on .o file after compiling)

declare -a REPOS=( "KhronosGroup/Vulkan-Headers" "nlohmann/json" "okdshin/PicoSHA2" "chronoxor/CppServer" "lassik/shm_open_anon" "chriskohlhoff/asio")

for repo in ${REPOS[@]}; do
	folder= $(echo $repo |  awk -F/ '{print $NF}' )
	rm -rf external/$folder
	git clone --depth=1 https://github.com/$repo external/$folder
done
