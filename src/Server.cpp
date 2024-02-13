#include <memory>
#include <boost/json.hpp>
#include <cpp_yyjson.hpp>

#include <unordered_map>
#include <Serialization.hpp>
#include "Server.hpp"
#include <ThreadStruct.hpp>
#include <Synchronization.hpp>
#include <Commands.hpp>
#include <thread>
#include <string_view>

#include <sstream>
#include <iostream>
#include <random>
#include <asio/read.hpp>
#include <asio/write.hpp>
#include <lz4.h>

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
        
        socket->set_option( asio::ip::tcp::no_delay( true) );
        currStruct()->conn=socket;
        
        parsed_map json;
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


void serializeInt(std::array<uint8_t,8>& buf, int i, uint32_t val) { //Assumes that val is a 32-bit number (almost always true). Serializes in little endian in endian-agnostic way
    buf[i+0] = (val) & 0xFF;
    buf[i+1] = (val >> 8) & 0xFF;
    buf[i+2] = (val >> 16) & 0xFF;
    buf[i+3] = (val >> 24) & 0xFF;
}

uint32_t deserializeInt(std::array<uint8_t,8>& buf, int i){ //Deserialzes from little endian in endian-agnostic way
    return buf[i+0] | (buf[i+1] << 8) | (buf[i+2] << 16) | (buf[i+3] << 24);
}

parsed_map readFromConn(){
    auto curr=currStruct();
    asio::error_code ec;
    
    asio::read(*(curr->conn), asio::buffer(curr->size_buf, 8), asio::transfer_exactly(8), ec);
    if (ec){
        throw RWError(ec);
    }
    
    auto compressed_size=deserializeInt(curr->size_buf, 0);
    auto input_size=deserializeInt(curr->size_buf, 4);
    

    auto compressed_data=(char*)malloc(compressed_size);
    auto input=(char*)malloc(input_size+YYJSON_PADDING_SIZE);
    
    asio::read(*(curr->conn), asio::buffer(compressed_data, compressed_size), asio::transfer_exactly(compressed_size), ec);
    
    if (ec){
        throw RWError(ec);
    }
    
    LZ4_decompress_safe(compressed_data, input, compressed_size, input_size);

    //printf("%.*s\n",input_size,input);
    auto test = *yyjson::read(input,input_size, curr->allocator, yyjson::ReadFlag::ReadInsitu | yyjson::ReadFlag::AllowInvalidUnicode).as_object();
    
    test.size();
    auto json=map_from(test);
    free(compressed_data);
    
    if (curr->data!=NULL){
        free(curr->data);
    }
    
    curr->data=input;
    
    return json;
}

void writeToConn(boost::json::object& json){
    auto curr=currStruct();
    
    json["uuid"]=uuid;
    
    auto line=boost::json::serialize(json,boost::json::serialize_options{.allow_infinity_and_nan=true});

    auto input_size=line.size();
    auto input=line.c_str();
    auto max_compressed_size=LZ4_compressBound(input_size);
    auto compressed_data=(char*)malloc(max_compressed_size);
    
    auto compressed_size=LZ4_compress_default(input, compressed_data, input_size, max_compressed_size);
    
    serializeInt(curr->size_buf, 0, compressed_size);
    serializeInt(curr->size_buf, 4, input_size);
    asio::error_code ec;
    
    asio::write(*(curr->conn), std::vector<asio::const_buffer>{asio::buffer(curr->size_buf,8), asio::buffer(compressed_data,compressed_size)}, ec);
    
    if (ec){
        throw RWError(ec);
    }
    
    free(compressed_data);
}