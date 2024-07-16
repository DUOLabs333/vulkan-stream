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
#include <simdjson.h>
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

#ifndef CLIENT
    void handleConnection(AsioConn* conn){
        //Will only be called by the server

	auto& curr=currStruct();
        curr.conn=conn;
        
        boost::json::object json;
        while(true){
            try{
            json=readFromConn();
            
            if (curr.uuid==-1){
                curr.uuid=value_to<int>(json["uuid"]);
            }
            
            if (static_cast<StreamType>(value_to<int>(json["stream_type"]))==SYNC){
                handle_sync_init(json);
            }
            else{
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

void readFromConn(std::function<void(ThreadStruct& curr, std::string_view&)> func){
	auto& curr=currStruct();
	bool err;
	char* buf;
	int len;

	asio_read(curr.conn, &buf, &len, &err);

	if (err){
		throw RWError(true);
	}
	auto line=std::string_view(buf, len);

	func(curr, line);
}
boost::json::object readFromConn(){
	boost::json::object json;
    auto func = [&] (ThreadStruct& curr, std::string_view& line) {
	curr.parser.write(line);
        json=curr.parser.release().get_object();
        curr.parser.reset();
    };
	
    readFromConn(func);
    return json;
}

void readFromConn(Sync& sync){
	auto func = [&] (ThreadStruct&, std::string_view& line){
		glz::read_json(sync, line);
	};
	
	readFromConn(func);
}

void writeToConn(boost::json::object& json){
    auto& curr=currStruct();
    
    json["uuid"]=uuid;
    
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

    bool err;

    asio_write(curr.conn, output_buf, size, &err);

    if (err){
        throw RWError(false);
    }
}

void writeToConn(Sync& sync){
	auto& curr=currStruct();
	
	#if 0
	    auto json=boost::json::value_from<Sync>(sync); //If this doesn't work, read below for a hacky work around
	#else
		glz::write_json(sync, curr.glaze_str);
		curr.parser.write(curr.glaze_str);
		auto json=curr.parser.release().get_object();
		curr.parser.reset();
	#endif 
    	json["stream_type"]=static_cast<int>(SYNC);
	
	return writeToConn(json);
}
