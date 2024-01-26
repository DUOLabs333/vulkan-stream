#include <boost/json.hpp>

#include "Server.hpp"
#include <ThreadStruct.hpp>
#include <Synchronization.hpp>
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
        
        object json;
        while(true){
            try{
            json=readFromConn();
            
            if (currStruct()->uuid==-1){
                currStruct()->uuid=value_to<int>(json["uuid"]);
            }
            
            if (value_to<StreamType>(json)==SYNC){
                handle_sync_init(json);
            }
            else{
                handle_command(json);
            }
            
            }
            catch (const RWError& e){
                currStruct()->conn->close();
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


void serializeInt(uint8_t *buf, uint32_t val) { //Assumes that val is a 32-bit number (almost always true). Serializes in little endian in endian-agnostic way
    buf[0] = (val) & 0xFF;
    buf[1] = (val >> 8) & 0xFF;
    buf[2] = (val >> 16) & 0xFF;
    buf[3] = (val >> 24) & 0xFF;
}

uint32_t deserializeInt(uint8_t* buf){ //Deserialzes from little endian in endian-agnostic way
    return buf[0] | (buf[1] << 8) | (buf[2] << 16) | (buf[3] << 24);
}

boost::json::object readFromConn(){
    auto curr=currStruct();
      
    asio::error_code ec;
    
    /*
    asio::read(*(curr->conn), asio::buffer(cur->size_buf,4), asio::transfer_exactly(4), ec);
    auto size=deserializeInt(curr->size_buf);
    
    if (ec){
        throw RWError(ec);
    }
    */
    
    auto buf = asio::buffer(curr->data_buf, BUFFER_SIZE);
    
    curr->parser.reset();
    
    while (true){
    auto bytes_read = asio::read(*(curr->conn), buf, ec);
    if (ec){
        throw RWError(ec);
    }
    
    if (bytes_read==0){
        continue;
    }
    //size-=bytes_read;
    
    curr->parser.write(curr->data_buf, bytes_read);
    
    //if (size==0){ //All of the bytes have been read
    try{
        return curr->parser.release().as_object();
    }
    catch (boost::json::system_error){ //Not done parsing yet
        continue;
    }
    }

}

void writeToConn(boost::json::object& json){
    
    json["uuid"]=uuid;
    auto curr=currStruct();
    asio::error_code ec;
    
    /*
    std::size_t size = 0;
    auto size_buf=(uint8_t*)malloc(4*sizeof(uint8_t)); //Buffer to hold the size to transfer
    auto size=sizeof(capnp::word)*computeSerializedSizeInWords(m);
    serializeInt(size_buf, size);
    asio::write(*(curr->conn),asio::buffer(size_buf),ec);
    free(size_buf);
    if (ec){
        throw RWError(ec);
    }
    */
    
    curr->serializer.reset(&json);
    
    std::size_t bytes_serialized=0; //Also serves to point to the first non-empty space in data_buf
    
    while(true){
    bytes_serialized+=(curr->serializer.read(&(curr->data_buf[bytes_serialized]), BUFFER_SIZE-bytes_serialized).size());
    
    if ((bytes_serialized==BUFFER_SIZE) || (curr->serializer.done())){
        asio::write(*(curr->conn), asio::buffer(curr->data_buf, bytes_serialized), ec);
        if (ec){
            throw RWError(ec);
        }
        bytes_serialized=0;
        
        if (curr->serializer.done()){
            return;
        }
    }
    }
}