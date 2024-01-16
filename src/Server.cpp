#include "Server.hpp"
#include <ThreadStruct.hpp>
#include <Synchronization.hpp>
#include <Commands.hpp>
#include <thread>
#include <nlohmann/json.hpp>
#include <sstream>
#include <random>
#include <asio/read_until.hpp>
#include <asio/write.hpp>

int MAX=10000000;
std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> distrib(1, MAX);
auto uuid=distrib(gen);

#ifndef CLIENT
    asio::io_context server_context;
    void handleConnection(tcp::socket* socket){
        //Will only be called by the server
        
        currStruct()->conn=socket;
        
        json data;
        while(true){
            try{
            data=readFromConn();
            
            if (currStruct()->uuid==-1){
                currStruct()->uuid=data["uuid"];
            }
            
            std::string type=data["type"];
            if (type=="sync_init"){
                handle_sync_init(data);
            }
            else if (type.rfind("command_",0)==0){
                handle_command(data);
            }
            
            }
            catch (const asio::system_error& e){
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


json readFromConn(){
    //Hold an empty buffer, as it's possible a single read does not contain the entire response
    
    auto curr=currStruct();
    std::string line;
        
    asio::read_until(*(curr->conn), curr->buf, '\n');
    std::getline(*(curr->is),line);
    
    json result=json::from_msgpack(json::parse(line).get<std::vector<uint8_t>>());
    debug_printf("%s\n",result["type"].get<std::string>().c_str());
    
    return result;
}

void writeToConn(json& data){
    debug_printf("%s\n",data["type"].get<std::string>().c_str());
    data["uuid"]=uuid;
    
    asio::write(*(currStruct()->conn), asio::buffer(json(json::to_msgpack(data)).dump()+"\n"));
}