#include <utility.hpp>

namespace michiya
{
    namespace utility
    {
        //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
        bool is_int_number(const std::string &str)
        {
            return std::regex_match(str, std::regex("[+-]?\\d+"));
        }
        //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
        bool is_unsigned_int_number(const std::string &str)
        {
            return std::regex_match(str, std::regex("\\d+"));
        }
        //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
        bool is_real_number(const std::string &str)
        {
            return std::regex_match(str, std::regex("[+-]?\\d+(\\.\\d+)((e|E)[+-]?\\d+)?"));
        }
        //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
        bool is_unsigned_real_number(const std::string &str)
        {
            return std::regex_match(str, std::regex("\\d+(\\.\\d+)((e|E)[+-]?\\d+)?"));
        }
        //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
        bool is_number(const std::string &str)
        {
            return std::regex_match(str, std::regex("[+-]?\\d+(\\.\\d+)?((e|E)[+-]?\\d+)?"));
        }
        //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    } // namespace utility
} // namespace michiya
