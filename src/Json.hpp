#include <memory>
#include <cpp_yyjson.hpp>
using namespace yyjson;

typedef yyjson::reader::const_object_ref rjson;
typedef yyjson::writer::object_ref wjson;

yyjson::reader::const_value_ref get_value(rjson& dict, std::vector<std::string> keys);
yyjson::writer::value_ref get_value(wjson dict, std::vector<std::string> keys);
yyjson::writer::value_ref get_value(yyjson::writer::object dict, std::vector<std::string> keys);

bool get_bool(yyjson::reader::const_value_ref value);
bool get_bool(yyjson::writer::value value);

std::uint64_t get_uint(yyjson::writer::value value);
std::uint64_t get_uint(yyjson::reader::const_value_ref value);

std::int64_t get_int(yyjson::writer::value value);
std::int64_t get_int(yyjson::reader::const_value_ref value);

double get_double(yyjson::writer::value value);
double get_double(yyjson::reader::const_value_ref value);

std::string_view get_string(yyjson::writer::value value);
std::string_view get_string(yyjson::reader::const_value_ref value);

yyjson::writer::array_ref get_array(yyjson::writer::value value);
yyjson::reader::const_array_ref get_array(yyjson::reader::const_value_ref value);

yyjson::writer::object_ref get_object(yyjson::writer::value value);
yyjson::reader::const_object_ref get_object(yyjson::reader::const_value_ref value);
