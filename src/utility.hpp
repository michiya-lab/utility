#ifndef UTILITY_HPP
#define UTILITY_HPP

#include <iostream>
#include <string>
#include <regex>

namespace utility
{
    bool is_number(const std::string &);
    bool is_int_number(const std::string &);
    bool is_unsigned_int_number(const std::string &);
    bool is_real_number(const std::string &);
    bool is_unsigned_real_number(const std::string &);

} // namespace utility

#endif // UTILITY_HPP
