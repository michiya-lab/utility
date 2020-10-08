#include <datatype_converter.hpp>

namespace michiya
{
    namespace utility
    {
        //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
        bool datatype_converter::to_value(int &val, const std::string &str)
        {
            if (utility::is_int_number(str))
            {
                try
                {
                    val = std::stoi(str);
                    return true;
                }
                catch (...)
                {
                    return false;
                }
            } // if str
            return false;
        }
        //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
        bool datatype_converter::to_value(unsigned &val, const std::string &str)
        {
            if (utility::is_unsigned_int_number(str))
            {
                try
                {
                    unsigned long val_ul = std::stoul(str);
                    if (val_ul <= std::numeric_limits<unsigned>::max())
                    {
                        val = (unsigned)val_ul;
                        return true;
                    } // if val_ul
                    else
                    {
                        return false;
                    }
                }
                catch (...)
                {
                    return false;
                }
            } // if str
            return false;
        }
        //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
        bool datatype_converter::to_value(long &val, const std::string &str)
        {
            if (utility::is_int_number(str))
            {
                try
                {
                    val = std::stol(str);
                    return true;
                }
                catch (...)
                {
                    return false;
                }
            } // if str
            return false;
        }
        //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
        bool datatype_converter::to_value(unsigned long &val, const std::string &str)
        {
            if (utility::is_int_number(str))
            {
                try
                {
                    val = std::stoul(str);
                    return true;
                }
                catch (...)
                {
                    return false;
                }
            } // if str
            return false;
        }
        //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
        bool datatype_converter::to_value(float &val, const std::string &str)
        {
            if (utility::is_number(str))
            {
                try
                {
                    val = std::stof(str);
                    return true;
                }
                catch (...)
                {
                    return false;
                }
            } // if str
            return false;
        }
        //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
        bool datatype_converter::to_value(double &val, const std::string &str)
        {
            if (utility::is_number(str))
            {
                try
                {
                    val = std::stod(str);
                    return true;
                }
                catch (...)
                {
                    return false;
                }
            } // if str
            return false;
        }
        //>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    } // namespace utility
} // namespace michiya
