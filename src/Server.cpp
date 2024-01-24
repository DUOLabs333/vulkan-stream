#include <schema.capnp.h>
using namespace capnp;

#include "Server.hpp"
#include <ThreadStruct.hpp>
#include <Synchronization.hpp>
#include <Commands.hpp>
#include <thread>

#include <sstream>
#include <random>
#include <asio/read_until.hpp>
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
        
        Message m;
        while(true){
            try{
            message=readFromConn();
            
            if (currStruct()->uuid==-1){
                currStruct()->uuid=message.getUuid();
            }
            
            if (message.which()==Message::SYNC){
                handle_sync_init(message.getSync());
            }
            else{
                handle_command(message);
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

stream::Message::Reader readFromConn(){
    auto curr=currStruct();
    
    auto size_buf=(uint8_t*)malloc(4*sizeof(uint8_t)); //Buffer to hold the size to transfer
    
    asio::error_code ec;
    asio::read(*(curr->conn), asio::buffer(size_buf,4), asio::transfer_exactly(4), ec);
    auto size=deserializeInt(size_buf);
    
    if (ec){
        throw RWError(ec);
    }
    free(size_buf);
    
    asio::streambuf data_buf;
    asio::read(*(curr->conn), data_buf, asio::transfer_exactly(size), ec);
    if (ec){
        throw RWError(ec);
    }
    
    MessageBuilder m;
    std::istream data_is(&data_buf);
    readMessageCopy(data_is, m);
    
    return result.getRoot<Message>();
}

void writeToConn(MessageBuilder& m){
    m.setUuid(uuid);
    auto curr=currStruct();
    asio::error_code ec;
    
    auto size_buf=(uint8_t*)malloc(4*sizeof(uint8_t)); //Buffer to hold the size to transfer
    auto size=sizeof(capnp::word)*computeSerializedSizeInWords(m);
    serializeInt(size_buf, size);
    asio::write(*(curr->conn),asio::buffer(size_buf),ec);
    free(size_buf);
    if (ec){
        throw RWError(ec);
    }
    
    auto data=messageToFlatArray(m).asBytes();
    asio::write(*(curr->conn), asio::buffer(data), ec);
    if (ec){
        throw RWError(ec);
    }
}