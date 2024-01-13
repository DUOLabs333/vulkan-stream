#include "Server.hpp"
#include <ThreadStruct.hpp>
#include <Synchronization.hpp>
#include <Commands.hpp>
#include <thread>
#include <nlohmann/json.hpp>
#include <sstream>

//Maybe use QT for JSON later

bool isConnConnected(){
    //Will only be called by the server
    return currStruct()->conn->state()==QAbstractSocket::ConnectedState;
}

#ifndef CLIENT
    void handleConnection(qintptr socketDescriptor){
        //Will only be called by the server
        
        auto socket=new QTcpSocket();
        socket->setSocketDescriptor(socketDescriptor);
        
        currStruct()->conn=socket;
        
        while(true){
            if(!isConnConnected()){
                break;
            }
            json data=readFromConn();
            
            std::string type=data["type"];
            if (type=="sync_init"){
                handle_sync_init(data);
                //Keep synced_memories (set) here: when sync point (eg, WaitForFences), sync all of them
            }
            else if (type.rfind("command_",0)==0){
                handle_command(data);
            }
        }
    }
    
    class StreamServer : public QTcpServer
    {
    protected:
        void incomingConnection(qintptr socketDescriptor){
                std::thread thread(handleConnection,socketDescriptor);
                thread.detach();
        }
    };
    
    StreamServer* startServer(){
        setAddressandPort();
        auto server = new StreamServer();
        server->listen(QHostAddress(QString::fromStdString(address)),port);
        while(server->waitForNewConnection(-1)){
        }
        return server;
    }
    
#endif


json readFromConn(){
    auto conn=currStruct()->conn;
    
    //Hold an empty buffer, as it's possible a single read does not contain the entire response
    std::stringstream line;
    while(true){
        conn->waitForReadyRead(-1);
        line << conn->readLine().toStdString();
        if ( json::accept(line.str()) ){
            json result=json::from_msgpack(json::parse(line.str()).get<std::vector<uint8_t>>());
            debug_printf("%s\n",result["type"].get<std::string>().c_str());
           return result;
        }

    }
}

void writeToConn(json data){
    debug_printf("%s\n",data["type"].get<std::string>().c_str());
    currStruct()->conn->write(QByteArray::fromStdString(json(json::to_msgpack(data)).dump()+"\n"));
    currStruct()->conn->waitForBytesWritten(-1);
}