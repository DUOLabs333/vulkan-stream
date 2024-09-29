#include <glaze/glaze.hpp>
#include <boost/json.hpp>
#include "Server.hpp"
#include "ThreadStruct.hpp"
#include "Synchronization.hpp"
#include "../autogen/Serialization.hpp"
#include "../autogen/Commands.hpp"

#include <memory>
#include <thread>
#include <string_view>
#include <random>
#include <format>
#include <functional>

typedef std::chrono::high_resolution_clock Time1;
typedef std::chrono::duration<float> fsec;
int UUID_MAX=10000000;
std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> distrib(1, UUID_MAX);
auto uuid=distrib(gen);

class RWError : public std::exception {
    std::string message;
    public:
    RWError (bool read){
	    message=std::format("Something has gone wrong with {}ing through the network", read ? "read" : "write");
    }
    std::string what () {
        return message;
    }
};

typedef struct{
	int stream_type;
	int uuid;

} MsgHeader;

template<>
struct glz::meta<MsgHeader>
{
	static constexpr auto partial_read=true;
};
void readFromConn(std::string_view& line){
	auto& curr=currStruct();
	bool err;
	char* buf;
int len;

	asio_read(curr.conn, &buf, &len, &err);

	if (err){
		throw RWError(true);
	}
	
	line=std::string_view(buf, len);
}

boost::json::object parseJSON(std::string_view& line){
	auto& curr=currStruct();
	curr.parser.write(line);
        auto json=curr.parser.release().get_object();
        curr.parser.reset();

	return json;
}

Sync parseSync(std::string_view& line, Sync& sync){
	glz::read<glz::opts{.error_on_unknown_keys=false}>(sync, line);
	return sync;
}

#ifndef CLIENT
    void handleConnection(AsioConn* conn){
        //Will only be called by the server

	auto& curr=currStruct();
        curr.conn=conn;
        
        while(true){
            try{
	    std::string_view line;
	    readFromConn(line);
		
	    MsgHeader header;
	    glz::read<glz::opts{.error_on_unknown_keys=false}>(header,line);
            
            if (curr.uuid==-1){
                curr.uuid=header.uuid;
            }
            
	    auto stream_type = static_cast<StreamType>(header.stream_type);
            if (stream_type == SYNC){
	    	auto json=parseJSON(line);
                handle_sync_init(json);
            }else if (stream_type == CMD_BUFFER_BATCH){
	    	auto batch = parseJSON(line);
	    	for (auto& cmd: batch["cmds"].get_array()){
			auto& json = cmd.get_object();
			json["batched"] = true;
			handle_command(json);
		}
		boost::json::object json;
		json["stream_type"] = CMD_BUFFER_BATCH;
		writeToConn(json);
	    }else{
	    	auto json=parseJSON(line);
                handle_command(json);
            }
            
            }
            catch (const RWError& e){
                deleteCurrStruct();
                break;
            }
            
        }
    }
    
    void startServer(){
	auto server=asio_server_init(0);       
        for (;;){
            auto conn=asio_server_accept(server);

            std::thread(handleConnection, conn).detach();
        }

	asio_close(server);
    }
    
#endif
//TODO: Write a function that uses a function (std::string_view)
boost::json::object readFromConn(){
    std::string_view line;
    readFromConn(line);
    auto json=parseJSON(line);
    return json;
}

void readFromConn(Sync& sync){	
    std::string_view line;
    readFromConn(line);
    parseSync(line, sync);
}

void writeToConn(boost::json::object& json){
    auto& curr=currStruct();
    
    json["uuid"]=uuid;

    bool err;
    
    curr.serializer.reset(&json);
    size_t size=0;
    static int BUFFER_STEP_SIZE = 4000; //By what step should we grow the buffer each time.

    char* output_buf;
    uint32_t capacity = 0;
    while(!curr.serializer.done()){
	    output_buf=asio_get_buf(curr.conn, &capacity);
	    auto str=curr.serializer.read(output_buf+size, capacity-size);
	    size+=str.size();

	    capacity+=BUFFER_STEP_SIZE;
    }

    asio_write(curr.conn, output_buf, size, &err);

    if (err){
        throw RWError(false);
    }
}
//TODO: If this works, make a writeToConn that takes a function (ThreadStruct&) and returns tuple(char*, size)  to abstract the small differences between the different writes
void writeToConn(Sync& sync){
	auto& curr=currStruct();
	
	sync.stream_type = static_cast<int>(SYNC);
	sync.uuid = uuid;
	
	bool err;
	glz::write_json(sync, curr.glaze_str);

	asio_write(curr.conn, curr.glaze_str.data(), curr.glaze_str.size(), &err);

	if (err){
        	throw RWError(false);
    	}

}
