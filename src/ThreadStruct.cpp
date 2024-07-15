#include <boost/json.hpp>
#include "ThreadStruct.hpp"
#include <thread>
#include <debug.hpp>
#include <unordered_map>
#include <shared_mutex>

std::unordered_map<std::thread::id,ThreadStruct> thread_to_struct;
std::shared_mutex thread_lock;

ThreadStruct& currStruct(){
    auto thread_id=std::this_thread::get_id();
    
    thread_lock.lock_shared();
    auto contains=thread_to_struct.contains(thread_id);
    thread_lock.unlock_shared();

    thread_lock.lock();
    auto& result=thread_to_struct[thread_id];
    thread_lock.unlock();

    if (!contains){    
        result.uuid=-1;
        
        #ifdef CLIENT
            result->conn=asio_connect(0);
        #endif
    }
    
    return result;
}

void deleteCurrStruct(){
    thread_lock.lock();
    asio_close(thread_to_struct[std::this_thread::get_id()].conn);
    thread_to_struct.erase(std::this_thread::get_id());
    thread_lock.unlock();
}
