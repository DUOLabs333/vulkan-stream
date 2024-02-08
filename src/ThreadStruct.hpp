#include <asio/ip/tcp.hpp>
#include <asio/streambuf.hpp>
#include <array>
#include <cstdint>
#include <string>
#include <set>
#include <debug.hpp>

using tcp = asio::ip::tcp;

extern std::string address;

extern std::string port;

const int BUFFER_SIZE=1000000; //1 MB
typedef struct {
    tcp::socket* conn;
    int uuid;
    msgpack::object_handle handle;
    char* data_buf = NULL; //Remember to free it before reassigning
    std::array<uint8_t,4> size_buf;
    std::ostream* os;
    asio::streambuf buf;
    
    
} ThreadStruct;
    
ThreadStruct* currStruct();
void setAddressandPort();
void deleteCurrStruct();