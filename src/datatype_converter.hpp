#ifndef DATATYPE_CONVERTER_HPP
#define DATATYPE_CONVERTER_HPP

#include <string>
#include <utility.hpp>

namespace michiya
{
    namespace utility
    {
        class datatype_converter
        {
        public:
            datatype_converter() { ; }
            virtual ~datatype_converter() { ; }
            static bool to_value(int &, const std::string &);
            static bool to_value(unsigned &, const std::string &);
            static bool to_value(long &, const std::string &);
            static bool to_value(unsigned long &, const std::string &);
            static bool to_value(float &, const std::string &);
            static bool to_value(double &, const std::string &);

        private:
            /* code */
        }; // class datatype_converter
    }      // namespace utility
} // namespace michiya

#endif // DATATYPE_CONVERTER_HPP