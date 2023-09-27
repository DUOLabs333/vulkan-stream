auto service = std::make_shared<CppServer::Asio::Service>();

std::string address=std::getenv("STREAM_ADDRESS");
std::string port_string=std::getenv("STREAM_PORT");

if (address==NULL){
    address="192.168.64.1";
}

if (port_string==NULL){
    port_string="2000";
}
int port=std::stoi(port_string);

ThreadStruct currStruct(){
    auto thread_id=pthread_self();
    if (!thread_to_struct.contains(thread_id)){
        auto result=new ThreadStruct();
        #ifdef CLIENT
            service->Start(); //Make sure service is up
            result->conn=std::make_shared<CppServer::Asio::TCPClient>(service, address, port);
            result->conn->Start();
        #endif
        
        thread_to_struct[pthread_self]=result;
    }
    
    return thread_to_struct[thread_id];
}