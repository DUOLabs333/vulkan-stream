#include <boost/json.hpp>

#include "Server.hpp"
#include <ThreadStruct.hpp>
#include <Synchronization.hpp>
#include <simdjson.h>
#include <Serialization.hpp>
#include <Commands.hpp>
#include <thread>
#include <string_view>

#include <sstream>
#include <random>
#include <asio/read.hpp>
#include <asio/write.hpp>
#include <lz4.h>

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
        
        socket->set_option( asio::ip::tcp::no_delay( true) );
        currStruct()->conn=socket;
        
        boost::json::object json;
        while(true){
            try{
            json=readFromConn();
            
            if (currStruct()->uuid==-1){
                currStruct()->uuid=value_to<int>(json["uuid"]);
            }
            
            if (static_cast<StreamType>(value_to<int>(json["stream_type"]))==SYNC){
                handle_sync_init(json);
            }
            else{
                handle_command(json);
            }
            
            }
            catch (const RWError& e){
                currStruct()->conn->close();
                deleteCurrStruct();
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


void serializeInt(std::array<uint8_t,8>& buf, int i, uint32_t val) { //Assumes that val is a 32-bit number (almost always true). Serializes in little endian in endian-agnostic way
    buf[i+0] = (val) & 0xFF;
    buf[i+1] = (val >> 8) & 0xFF;
    buf[i+2] = (val >> 16) & 0xFF;
    buf[i+3] = (val >> 24) & 0xFF;
}

uint32_t deserializeInt(std::array<uint8_t,8>& buf, int i){ //Deserialzes from little endian in endian-agnostic way
    return buf[i+0] | (buf[i+1] << 8) | (buf[i+2] << 16) | (buf[i+3] << 24);
}

boost::json::object readFromConn(){
    auto curr=currStruct();
    asio::error_code ec;
    
    uint8_t is_compressed=0;
    asio::read(*(curr->conn), std::vector<asio::mutable_buffer>{asio::buffer(&is_compressed,1),asio::buffer(curr->size_buf, 8)}, ec);
    if (ec){
        throw RWError(ec);
    }
    
    auto compressed_size=deserializeInt(curr->size_buf, 0);
    auto input_size=deserializeInt(curr->size_buf, 4);
    

    auto compressed_data=(char*)malloc(compressed_size);
    char* input;
    
    asio::read(*(curr->conn), asio::buffer(compressed_data, compressed_size), asio::transfer_exactly(compressed_size), ec);
    
    if (ec){
        throw RWError(ec);
    }
    
    if (is_compressed){
        input=(char*)malloc(input_size);
        LZ4_decompress_safe(compressed_data, input, compressed_size, input_size);
    }else{
        input=compressed_data;
    }
    
    auto line=std::string_view(input,input_size);
    auto simdjson_line=simdjson::padded_string(line);
    
    simdjson::ondemand::parser parser;
    auto doc=parser.iterate(simdjson_line);
    auto object = doc.get_object();
    
    boost::json::object json;
    for (auto field: object){
        auto key=field.unescaped_key().value();
        if (key=="uuid"){
            json[key]=field.value().get_uint64().value();
            continue;
        }
        if (key=="stream_type"){ //Use Boost for anything that isn't a Sync
            auto stream_type=field.value().get_uint64().value();
            if (stream_type!= static_cast<int>(SYNC)){
                 json=boost::json::parse(line,{}, {.max_depth=180,.allow_invalid_utf8=true,.allow_infinity_and_nan=true}).get_object();
                 break;
            }else{
                json[key]=stream_type;
                continue;
            }
        }
        if (key=="devicememory" || key=="mem"){
            json[key]=field.value().get_uint64().value();
        }else if (key=="unmap"){
            json[key]=field.value().get_bool().value();
        }else{
            auto& boost_array=json[key].emplace_array();
            auto simd_value=field.value().get_array();
            simdjson::ondemand::array simd_array;
            if (simd_value.error()){
                continue;
            }else{
                simd_array=simd_value.value();
            }
            for (auto elem: simd_array){
                if (key=="buffers"){
                    boost_array.emplace_back(std::string(elem.value().get_string().value()));
                }else{
                    boost_array.emplace_back(elem.value().get_uint64().value());
                }
            }
    }
        }
    
    free(input);
    
    if(is_compressed){
        free(compressed_data);
    }
    
    return json;
}

//Conditionally compress at 1000000/4

//static int COMPRESSION_CUTOFF= 1000000/4;
static int COMPRESSION_CUTOFF= std::numeric_limits<int>::max(); //Effectively disable compression

void writeToConn(boost::json::object& json){
    auto curr=currStruct();
    
    json["uuid"]=uuid;
    
    auto line=boost::json::serialize(json,boost::json::serialize_options{.allow_infinity_and_nan=true});

    auto input_size=line.size();
    auto input=line.c_str();
    
    char* compressed_data;
    int compressed_size;
    uint8_t is_compressed;
    
    if (input_size>=COMPRESSION_CUTOFF){
        auto max_compressed_size=LZ4_compressBound(input_size);
        compressed_data=(char*)malloc(max_compressed_size);
        
        compressed_size=LZ4_compress_default(input, compressed_data, input_size, max_compressed_size);
        is_compressed=1;
    }else{
        compressed_size=input_size;
        compressed_data=const_cast<char*>(input); //Unsafe, but we should not be editing input
        is_compressed=0;
    }
    
    serializeInt(curr->size_buf, 0, compressed_size);
    serializeInt(curr->size_buf, 4, input_size);
    asio::error_code ec;
    
    asio::write(*(curr->conn), std::vector<asio::const_buffer>{asio::buffer(&is_compressed,1),asio::buffer(curr->size_buf,8), asio::buffer(compressed_data,compressed_size)}, ec);
    
    if (ec){
        throw RWError(ec);
    }
    
    if(is_compressed){
        free(compressed_data);
    }
}