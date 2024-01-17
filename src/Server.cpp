#include <boost/json.hpp>
using namespace boost::json;

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
        
        object data;
        while(true){
            try{
            data=readFromConn();
            
            if (currStruct()->uuid==-1){
                currStruct()->uuid=value_to<int>(data["uuid"]);
            }
            
            auto type=value_to<std::string>(data["type"]);
            if (type=="sync_init"){
                handle_sync_init(data);
            }
            else if (type.rfind("command_",0)==0){
                handle_command(data);
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


object readFromConn(){

    auto curr=currStruct();
    std::string line;
    
    asio::error_code ec;
    asio::read_until(*(curr->conn), curr->buf, '\n', ec);
    if (ec){
        throw RWError(ec);
    }
    
    std::getline(*(curr->is),line);
    
    object result=parse(line,{}, {.allow_infinity_and_nan=true}).as_object();
    debug_printf("%s\n",value_to<std::string>(result["type"]).c_str());
    
    return result;
}

void writeToConn(object& data){
    debug_printf("%s\n",value_to<std::string>(data["type"]).c_str());
    data["uuid"]=uuid;
    
    asio::error_code ec;
    asio::write(*(currStruct()->conn), asio::buffer(serialize(data,serialize_options{.allow_infinity_and_nan=true})+"\n"), ec);
    
    if (ec){
        throw RWError(ec);
    }
}