#include <ThreadStruct.hpp>

std::shared_ptr<CppServer::Asio::Service> service = std::make_shared<CppServer::Asio::Service>();

std::string address;
int port;
std::map<pthread_t,ThreadStruct*> thread_to_struct;

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
    auto thread_id=pthread_self();
    if (!thread_to_struct.contains(thread_id)){
        auto result=new ThreadStruct();
        #ifdef CLIENT
            service->Start(); //Make sure service is up
            setAddressandPort();
            result->conn=std::make_shared<CppServer::Asio::TCPClient>(service, address, port);
            result->conn->Connect();
        #endif
        
        result->conn_ss=new std::stringstream();
        
        result->mem_to_sync=new std::set<uintptr_t>;
        
        thread_to_struct[thread_id]=result;
    }
    
    return thread_to_struct[thread_id];
}