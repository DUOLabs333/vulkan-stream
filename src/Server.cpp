#include <boost/json.hpp>

#include "Server.hpp"
#include <ThreadStruct.hpp>
#include <Synchronization.hpp>
#include <Serialization.hpp>
#include <Commands.hpp>
#include <thread>

#include <sstream>
#include <random>
#include <asio/read.hpp>
#include <asio/write.hpp>

int UUID_MAX=10000000;
std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> distrib(1, UUID_MAX);
auto uuid=distrib(gen);

class RWError : public std::exception {
    std::string message;
    public:
    RWError (asio::error_code ec){
        message=ec.message();
    }
    std::string what () {
        return message;
    }
};

#ifndef CLIENT
    asio::io_context server_context;
    void handleConnection(tcp::socket* socket){
        //Will only be called by the server
        
        currStruct()->conn=socket;
        
        currStruct()->conn->set_option( asio::ip::tcp::no_delay( true) );
        boost::json::object json;
        while(true){
            try{
            json=readFromConn();
            
            if (currStruct()->uuid==-1){
                currStruct()->uuid=value_to<int>(json["uuid"]);
            }
            
            if (static_cast<StreamType>(value_to<int>(json["stream_type"]))==SYNC){
                handle_sync_init(json);
            }
            else{
                handle_command(json);
            }
            
            }
            catch (const RWError& e){
                currStruct()->conn->close();
                deleteCurrStruct();
                break;
            }
            
        }
    }
    
    void startServer(){
        setAddressandPort();
        tcp::acceptor acceptor(server_context, tcp::endpoint(asio::ip::make_address(address), std::stoi(port)));
       
        for (;;){
            auto socket=new tcp::socket(server_context);
            
            acceptor.accept(*socket);
            std::thread(handleConnection, socket).detach();
        }
    }
    
#endif


void serializeInt(std::array<uint8_t,4>& buf, uint32_t val) { //Assumes that val is a 32-bit number (almost always true). Serializes in little endian in endian-agnostic way
    buf[0] = (val) & 0xFF;
    buf[1] = (val >> 8) & 0xFF;
    buf[2] = (val >> 16) & 0xFF;
    buf[3] = (val >> 24) & 0xFF;
}

uint32_t deserializeInt(std::array<uint8_t,4>& buf){ //Deserialzes from little endian in endian-agnostic way
    return buf[0] | (buf[1] << 8) | (buf[2] << 16) | (buf[3] << 24);
}

boost::json::object readFromConn(){
    auto curr=currStruct();
    asio::error_code ec;
    
    asio::read(*(curr->conn), asio::buffer(curr->size_buf, 4), ec);
    if (ec){
        throw RWError(ec);
    }
    
    auto size=deserializeInt(curr->size_buf);
    auto data=(char*)malloc(size);
    asio::read(*(curr->conn), asio::buffer(data,size), asio::transfer_exactly(size), ec);
    if (ec){
        throw RWError(ec);
    }
    
    auto json=boost::json::parse(std::string_view(data,size),{}, {.max_depth=180,.allow_invalid_utf8=true,.allow_infinity_and_nan=true}).get_object();
    
    return json;
    
}

void writeToConn(boost::json::object& json){
    auto curr=currStruct();
    json["uuid"]=uuid;
    asio::error_code ec;
    
    auto data =boost::json::serialize(json,boost::json::serialize_options{.allow_infinity_and_nan=true});
    auto size=data.size();
    
    serializeInt(curr->size_buf, size);
    asio::write(*(curr->conn), asio::buffer(curr->size_buf,4), ec);
    if (ec){
        throw RWError(ec);
    }
    
    asio::write(*(currStruct()->conn), asio::buffer(data), ec);
    if (ec){
        throw RWError(ec);
    }
}