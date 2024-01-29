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
    debug_printf("Reading!...\n");
    auto curr=currStruct();
      
    asio::error_code ec;
    
    /*
    asio::read(*(curr->conn), asio::buffer(cur->size_buf,4), asio::transfer_exactly(4), ec);
    auto size=deserializeInt(curr->size_buf);
    
    if (ec){
        throw RWError(ec);
    }
    */
    
    auto size_buf = asio::buffer(curr->size_buf, 4);
    auto data_buf = asio::buffer(curr->data_buf, BUFFER_SIZE);
    
    curr->parser.reset();
    
    while (true){
    asio::read(*(curr->conn), size_buf, asio::transfer_exactly(4), ec);
    if (ec){
        throw RWError(ec);
    }
    
    auto bytes_read=deserializeInt(curr->size_buf);
    asio::read(*(curr->conn), data_buf, asio::transfer_exactly(bytes_read), ec);
    if (ec){
        throw RWError(ec);
    }
    
    //size-=bytes_read;
    
    curr->parser.write(curr->data_buf, bytes_read);
    
    //if (size==0){ //All of the bytes have been read
    if(curr->parser.done()){
        auto json=curr->parser.release().as_object();
        debug_printf("Type to recieve: %d\n", value_to<int>(json["stream_type"]));
        return json;
    }else{
        continue;
    }
    }

}

void writeToConn(boost::json::object& json){
    json["uuid"]=uuid;
    auto curr=currStruct();
    asio::error_code ec;
    
    debug_printf("Type to send: %d\n", value_to<int>(json["stream_type"]));
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
    
    std::size_t bytes_serialized=0; //Also serves to point to the first empty space in data_buf
    auto size_buf=asio::buffer(curr->size_buf, 4);
    
    while(true){
    auto written_chars=curr->serializer.read(&(curr->data_buf[bytes_serialized]), BUFFER_SIZE-bytes_serialized);
    bytes_serialized+=(written_chars.size());
    
    if ((bytes_serialized==BUFFER_SIZE) || (curr->serializer.done())){
        serializeInt(curr->size_buf, bytes_serialized);
        asio::write(*(curr->conn), size_buf, ec);
        if (ec){
            throw RWError(ec);
        }
        
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