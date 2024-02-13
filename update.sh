#Clone vulkan-headers
#Write proto-make in Python: recompile file if modified time is different than modified time on compiled .o file (set modified time on .o file after compiling)

declare -a REPOS=( "KhronosGroup/Vulkan-Headers" "lz4/lz4" "lassik/shm_open_anon" "chriskohlhoff/asio" "avaneev/komihash")

for repo in ${REPOS[@]}; do
	folder= $(echo $repo |  awk -F/ '{print $NF}' )
	rm -rf external/$folder
	git clone --depth=1 https://github.com/$repo external/$folder
done

echo "Downloading boost..."
wget "https://boostorg.jfrog.io/artifactory/main/release/1.84.0/source/boost_1_84_0.tar.gz"
tar -xvzf boost*.tar.gz -C external
rm boost*.tar.gz
mv external/boost* external/boost

echo "Building lz4..."
(cd external/lz4 && make liblz4.a)