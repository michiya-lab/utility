#include <string_editor.hpp>

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
std::vector<std::string> string_editor::split(const std::string &str, const char &chara)
{
    std::vector<std::string> ret_vec;
    std::stringstream ss(str);
    ss.str(str);
    std::string buf;
    while (std::getline(ss, buf, chara))
    {
        ret_vec.push_back(buf);
    }
    return ret_vec;
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
std::string string_editor::trim_right(const std::string &str, const char &chara)
{
    std::string ret = "";
    bool flag = false;
    for (long i = str.size(); i > 0; i--)
    {
        long index = i - 1;
        if (str[index] != chara)
        {
            flag = true;
        } // if
        if (flag)
        {
            ret = str[index] + ret;
        } // if flag
    }     // for i
    return ret;
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
std::string string_editor::trim_left(const std::string &str, const char &chara)
{
    std::string ret;
    bool flag = false;
    for (unsigned long i = 0; i < str.size(); ++i)
    {
        if (str[i] != chara)
        {
            flag = true;
        } // if
        if (flag)
        {
            ret.push_back(str[i]);
        } // if flag
    }     // for i
    return ret;
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
std::string string_editor::trim_both(const std::string &str, const char &chara)
{
    return string_editor::trim_right(string_editor::trim_left(str, chara), chara);
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
std::string string_editor::remove(const std::string &str, const char &chara)
{
    std::string ret;
    for (unsigned long i = 0; i < str.size(); ++i)
    {
        if (str[i] != chara)
        {
            ret.push_back(str[i]);
        } // if
    }     // for i
    return ret;
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>