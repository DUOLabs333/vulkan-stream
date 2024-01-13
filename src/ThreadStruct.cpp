#include "ThreadStruct.hpp"
#include <thread>
#include <debug.hpp>

std::string address;
int port;
std::map<std::thread::id,ThreadStruct*> thread_to_struct;

void setAddressandPort(){
    const char* address_temp=std::getenv("STREAM_ADDRESS");
    const char* port_temp=std::getenv("STREAM_PORT");
    
    if (address_temp==NULL){
        address_temp="192.168.64.1";
    }
    
    if (port_temp==NULL){
        port_temp="2000";
    }
    address=address_temp;
    port=std::stoi(port_temp);
}

ThreadStruct* currStruct(){
    auto thread_id=std::this_thread::get_id();
    if (!thread_to_struct.contains(thread_id)){
        auto result=new ThreadStruct();

        #ifdef CLIENT
            setAddressandPort();
            result->conn=new QTcpSocket();
            while(!result->conn->waitForConnected(-1)){
                result->conn->connectToHost(QString::fromStdString(address),port);
            }
        #endif
        
        thread_to_struct[thread_id]=result;
    }
    
    return thread_to_struct[thread_id];
}