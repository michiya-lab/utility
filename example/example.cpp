#include <iostream>

#include <utility.hpp>
#include <string_editor.hpp>
#include <datatype_converter.hpp>

int main()
{
    namespace m_util = michiya::utility;
    double val = 0.0e0;
    std::cout << std::boolalpha << m_util::datatype_converter::to_value(val, "1.23e10") << std::endl;

    return 0;
}
