The only setup that is supported is with a MacOS computer as the server and a Linux computer as the client (though other setups shouldn't be too hard t adjust the program for)

On MacOS, the server must have MoltenVK >= 1.2.7, and vulkan-loader >= 1.3.275

To compile:
	On both the server and client:
		1. Clone this repo
		2. Clone my tools repo (https://github.com/DUOLabs333/tools) and asio_c (https://github.com/DUOLabs333/asio_c) in the same parent directory where your cloned this repo
		3. Run `build.sh`.
		4. Profit

	
	Caveats:
		Make sure that the loader can pick up MoltenVK when being loaded.

		For maximum performance, compile with `DEBUG=0`

		Make sure that your C++ compiler fully supports C++20 --- for gcc, this would mean you need at least g++ >=14

To use:
	On the server, simply run `./vulkan_stream`. On the client, simply run `VK_ICD_FILENAMES=./stream_icd.aarch64.json <application>`

	Caveats:
		On both the server and the client, set `CONN_STREAM_ADDRESS` and `CONN_STREAM_PORT` to values that both the server can connect on, and the client can connect to.
