#include "Json.hpp"
#include <string_view>

//yyjson::reader::const_value_ref
yyjson::reader::const_value_ref get_value(rjson& dict, std::vector<std::string> keys){
    std::vector<rjson> curr; //Since you can't reassign the variable
    
    for (int i = 0; i < keys.size()-1; i++ ){
        curr.emplace_back(*(curr.back()[keys[i]].as_object()));
    }
    
    return curr.back()[keys.back()];
}

yyjson::writer::value_ref get_value(wjson dict, std::vector<std::string> keys){
    auto curr=dict;

    for (auto& key: keys ){
        if (key==keys.back()){
            break;
        }
        
        if (!curr[key].is_object()){
            curr[key]=yyjson::writer::object();
        }
        
        curr=*(curr[key].as_object());
    }
    
    return curr[keys.back()];
}

yyjson::writer::value_ref get_value(yyjson::writer::object dict, std::vector<std::string> keys){
    yyjson::writer::object_ref curr=*(dict[keys[0]].as_object());
    
    return get_value(curr, std::vector<std::string>(keys.begin()+1,keys.end()));
}

bool get_bool(yyjson::reader::const_value_ref value){
    return *(value.as_bool());
}

bool get_bool(yyjson::writer::value value){
    return *(value.as_bool());
}

std::uint64_t get_uint(yyjson::writer::value value){
    return *(value.as_uint());
}

std::uint64_t get_uint(yyjson::reader::const_value_ref value){
    return *(value.as_uint());
}

std::int64_t get_int(yyjson::writer::value value){
    return *(value.as_sint());
}

std::int64_t get_int(yyjson::reader::const_value_ref value){
    return *(value.as_sint());
}

double get_double(yyjson::writer::value value){
    return *(value.as_real());
}

double get_double(yyjson::reader::const_value_ref value){
    return *(value.as_real());
}

std::string_view get_string(yyjson::writer::value value){
    return *(value.as_string());
}

std::string_view get_string(yyjson::reader::const_value_ref value){
    return *(value.as_string());
}

yyjson::writer::array_ref get_array(yyjson::writer::value value){
    return *(value.as_array());
}

yyjson::reader::const_array_ref get_array(yyjson::reader::const_value_ref value){
    return *(value.as_array());
}

yyjson::reader::const_object_ref get_object(yyjson::reader::const_value_ref value){
    return *(value.as_object());
}

yyjson::writer::object_ref get_object(yyjson::writer::value value){
    return *(value.as_object());
}