#include <array>
#include <boost/json/serializer.hpp>
#include <string>
#include <set>
#include "debug.hpp"
#include <boost/json.hpp>
#include <asio_c.h>
#include <memory>

typedef struct {
	AsioConn* conn;
    boost::json::parser parser = {{}, {.max_depth=180,.allow_invalid_utf8=true,.allow_infinity_and_nan=true}};
    boost::json::serializer serializer = {{.allow_infinity_and_nan=true}};
    int uuid;

    std::string glaze_str;
} ThreadStruct;
    
ThreadStruct& currStruct();
void deleteCurrStruct();
