#include <boost/json.hpp>
#include "ThreadStruct.hpp"
#include <thread>
#include <debug.hpp>
#include <asio/io_context.hpp>
#include <asio/connect.hpp>
#include <unordered_map>
#include <shared_mutex>

std::string address;
std::string port;
std::unordered_map<std::thread::id,ThreadStruct*> thread_to_struct;
std::shared_mutex thread_lock;

asio::io_context client_context;
tcp::resolver resolver(client_context);

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
    port=port_temp;
}

ThreadStruct* currStruct(){
    auto thread_id=std::this_thread::get_id();
    
    thread_lock.lock_shared();
    if (!thread_to_struct.contains(thread_id)){
        thread_lock.unlock_shared();
        auto result=new ThreadStruct();
        
        result->uuid=-1;
        result->is=new std::istream(&result->buf);
        
        #ifdef CLIENT
            setAddressandPort();
            
            auto endpoints=resolver.resolve(address, port);
            
            result->conn= new tcp::socket(client_context);
            
            asio::error_code ec;
            while (true){
                asio::connect(*(result->conn), endpoints, ec);
                if (!ec){
                    break;
                }
            }
            
            result->conn->set_option( asio::ip::tcp::no_delay( true) );
            
        #endif
        
        thread_lock.lock();
        thread_to_struct[thread_id]=result;
        thread_lock.unlock();
        
        thread_lock.lock_shared();
    }
    
    auto result=thread_to_struct[thread_id];
    thread_lock.unlock_shared();
    return result;
}

void deleteCurrStruct(){
    thread_lock.lock();
    thread_to_struct.erase(std::this_thread::get_id());
    thread_lock.unlock();
}