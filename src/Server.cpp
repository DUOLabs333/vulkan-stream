#include <pthread.h>
#include <Server.hpp>
#include <ThreadStruct.hpp>

using namespace CppServer::Asio;

#ifndef CLIENT
    void *thread_func(void *session){
        //Will only be called by the server
        currStruct()->conn=std::make_shared<TCPSession>((TCPSession*)session);
        
        while(true){
            if(!isConnConnected()){
                break;
            }
            json data=readfromConn();
            
            std::string type=data["type"];
            if (type=="sync_init"){
                handle_sync_init(data);
                //Keep synced_memories (set) here: when sync point (eg, WaitForFences), sync all of them
            }
            else if (type.rfind("command_",0)==0){
                handle_command(data);
            }
            else if (type.rfind("funcpointer_",0)==0){
                handle_funcpointer(data);
        }
    }
    
    class StreamServer : public TCPServer
    {
    
    public:
        using TCPServer::TCPServer;
    
    protected:
        void onConnected(std::shared_ptr< TCPSession > &session){
                pthread_create(NULL,NULL,thread_func,(void*)session.get());
        }
    };
    
    auto startServer(){
        setAddressandPort();
        auto server = std::make_shared<StreamServer>(service, address,port);
        server->Start();
        return server;
    }
    
#else
    bool isConnConnected(){
        //Will only be called by the server
        return currStruct()->conn->IsConnected();
    }
#endif

json readFromConn(){
    auto conn=currStruct()->conn;
    auto stream=currStruct()->conn_ss;
            
    
    while(true){
        std::string word;
        getline(*stream,word);
        if (!stream->eof()){ //Must have gotten a \n
           return json::parse(word);
        }else{
            *stream << conn->Receive(64);
        }
    }
}

void writeToConn(json data){
    currStruct()->conn->Send(data.dump()+"\n");
}