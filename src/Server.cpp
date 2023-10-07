#include <Server.hpp>
#include <ThreadStruct.hpp>
//Maybe use QT for JSON later

//Use QT Network and QThread (copy sockdescriptor to thread)
//Subclass incomingConnection
//QByteArray QIODevice::readLine
//Use QThread::create
//qint64 QIODevice::write(const char *data)

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
    
    class StreamServer : public QTcpServer
    {
    protected:
        std::vector<QThread*> threads;
        void incomingConnection(qintptr socketDescriptor){
                auto thread=QThread::create(handleConnections,socketDescriptor);
                thread->start();
                threads.push_back(thread);
        }
    };
    
    auto startServer(){
        setAddressandPort();
        auto server = StreamServer();
        server.listen(address,port);
        return server;
    }
    
#else
    bool isConnConnected(){
        //Will only be called by the server
        return currStruct()->conn->state()==QAbstractSocket::ConnectedState;
    }
#endif

json readFromConn(){
    //Check if line is empty
    auto conn=currStruct()->conn;
            
    while(true){
        auto line=conn->readLine().toStdString();
        if (line.size()>0){
           return json::parse(line);
        }
    }
}

void writeToConn(json data){
    currStruct()->conn->write(QByteArray::fromStdString(data.dump()+"\n"));
}