#ifndef STRING_EDITOR_HPP
#define STRING_EDITOR_HPP

#include <string>
#include <sstream>
#include <vector>
#include <iostream>

class string_editor
{
public:
    string_editor() { ; }
    virtual ~string_editor() { ; }
    static std::vector<std::string> split(const std::string &, const char &);
    static std::string trim_right(const std::string &, const char &);
    static std::string trim_left(const std::string &, const char &);
    static std::string trim_both(const std::string &, const char &);
    static std::string remove(const std::string &, const char &);

private:
    /* code */
}; // class string_editor

#endif // STRING_EDITOR_HPP
