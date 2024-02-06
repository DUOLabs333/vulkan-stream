#include <msgpack.hpp>

#include <Serialization.hpp>
#include <ThreadStruct.hpp>
#include <Synchronization.hpp>
#include "Server.hpp"
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
        
        json::map json;
        while(true){
            try{
            json=readFromConn();
            
            if (currStruct()->uuid==-1){
                currStruct()->uuid=json["uuid"].as_int64_t();
            }
            
            if (static_cast<StreamType>(json["stream_type"].as_int64_t())==SYNC){
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

bool always_reference(msgpack::type::object_type, std::size_t, void *){
    return true;
}

json::map readFromConn(){

    auto curr=currStruct();
    
    asio::error_code ec;
    asio::read(*(curr->conn), asio::buffer(curr->size_buf,4), asio::transfer_exactly(4), ec);
    if (ec){
        throw RWError(ec);
    }
    
    auto msg_size=deserializeInt(curr->size_buf);
    
    if (curr->data_buf!=NULL){
        free(curr->data_buf);
    }
    
    curr->data_buf=(char*)malloc(msg_size);
    
    asio::read(*(curr->conn), asio::buffer(curr->data_buf, msg_size), asio::transfer_exactly(msg_size), ec);
    if (ec){
        throw RWError(ec);
    }
    
    msgpack::unpack(curr->handle, curr->data_buf, msg_size, always_reference);
    
    return curr->handle.get().as<json::map>();
}

void writeToConn(json::map& json){
    json["uuid"]=uuid;
    
    auto curr=currStruct();
    auto stream = std::stringstream();
    
    msgpack::pack(stream, json); 
    
    auto data=stream.str();
    
    serializeInt(curr->size_buf, data.size());
    
    asio::error_code ec;
    asio::write(*(curr->conn), asio::buffer(curr->size_buf, 4), ec);
    if (ec){
        throw RWError(ec);
    }
    
    asio::write(*(curr->conn), asio::buffer(data), ec);
    if (ec){
        throw RWError(ec);
    }
}