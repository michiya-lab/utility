////////////////////////////////////////////////////////////////////////
///  Copyright (c) 2015-2020, Michiya Imachi, All Rights Reserved.
////////////////////////////////////////////////////////////////////////

#include <datatype_converter.hpp>
#include <gtest/gtest.h>

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TEST(datatype_conveter, to_value_int)
{
    int val_int = 0;
    ASSERT_TRUE(utility::datatype_converter::to_value(val_int, "0"));
    ASSERT_EQ(val_int, 0);
    ASSERT_TRUE(utility::datatype_converter::to_value(val_int, "123456"));
    ASSERT_EQ(val_int, 123456);
    ASSERT_TRUE(utility::datatype_converter::to_value(val_int, "-123456"));
    ASSERT_EQ(val_int, -123456);
    ASSERT_FALSE(utility::datatype_converter::to_value(val_int, "1.2"));
    ASSERT_FALSE(utility::datatype_converter::to_value(val_int, "1.1e10"));
    ASSERT_TRUE(utility::datatype_converter::to_value(val_int, "2147483647"));
    ASSERT_EQ(val_int, 2147483647);
    ASSERT_TRUE(utility::datatype_converter::to_value(val_int, "-2147483648"));
    ASSERT_EQ(val_int, -2147483648);
    ASSERT_FALSE(utility::datatype_converter::to_value(val_int, "2147483648"));
    ASSERT_FALSE(utility::datatype_converter::to_value(val_int, "-2147483649"));
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TEST(datatype_conveter, to_value_unsigned)
{
    unsigned val_ui = 0;
    ASSERT_TRUE(utility::datatype_converter::to_value(val_ui, "0"));
    ASSERT_EQ(val_ui, 0);
    ASSERT_TRUE(utility::datatype_converter::to_value(val_ui, "123456"));
    ASSERT_EQ(val_ui, 123456);
    ASSERT_FALSE(utility::datatype_converter::to_value(val_ui, "-123456"));
    ASSERT_FALSE(utility::datatype_converter::to_value(val_ui, "1.2"));
    ASSERT_FALSE(utility::datatype_converter::to_value(val_ui, "1.1e10"));
    ASSERT_TRUE(utility::datatype_converter::to_value(val_ui, "4294967295"));
    ASSERT_EQ(val_ui, 4294967295);
    ASSERT_FALSE(utility::datatype_converter::to_value(val_ui, "4294967296"));
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TEST(datatype_conveter, to_value_long)
{
    long val_long = 0;
    ASSERT_TRUE(utility::datatype_converter::to_value(val_long, "0"));
    ASSERT_EQ(val_long, 0);
    ASSERT_TRUE(utility::datatype_converter::to_value(val_long, "123456"));
    ASSERT_EQ(val_long, 123456);
    ASSERT_TRUE(utility::datatype_converter::to_value(val_long, "-123456"));
    ASSERT_EQ(val_long, -123456);
    ASSERT_FALSE(utility::datatype_converter::to_value(val_long, "1.2"));
    ASSERT_FALSE(utility::datatype_converter::to_value(val_long, "1.1e10"));
    ASSERT_TRUE(utility::datatype_converter::to_value(val_long, "9223372036854775807"));
    ASSERT_EQ(val_long, 9223372036854775807);
    ASSERT_TRUE(utility::datatype_converter::to_value(val_long, "-9223372036854775808"));
    ASSERT_EQ(val_long, -9223372036854775807 - 1);
    ASSERT_FALSE(utility::datatype_converter::to_value(val_long, "9223372036854775808"));
    ASSERT_FALSE(utility::datatype_converter::to_value(val_long, "-9223372036854775809"));
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TEST(datatype_conveter, to_value_float)
{
    float val_float = 0.0e0;
    ASSERT_TRUE(utility::datatype_converter::to_value(val_float, "123456"));
    ASSERT_FLOAT_EQ(val_float, 123456.0);
    ASSERT_TRUE(utility::datatype_converter::to_value(val_float, "+123456"));
    ASSERT_FLOAT_EQ(val_float, 123456.0);
    ASSERT_TRUE(utility::datatype_converter::to_value(val_float, "-123456"));
    ASSERT_FLOAT_EQ(val_float, -123456.0);
    ASSERT_TRUE(utility::datatype_converter::to_value(val_float, "1.1e0"));
    ASSERT_FLOAT_EQ(val_float, 1.1e0);
    ASSERT_TRUE(utility::datatype_converter::to_value(val_float, "-1.1e0"));
    ASSERT_FLOAT_EQ(val_float, -1.1e0);
    ASSERT_TRUE(utility::datatype_converter::to_value(val_float, "3.402823e+38"));// too large
    ASSERT_FLOAT_EQ(val_float, 3.402823e+38);
    ASSERT_TRUE(utility::datatype_converter::to_value(val_float, "-3.402823e+38"));// too large
    ASSERT_FLOAT_EQ(val_float, -3.402823e+38);
    ASSERT_FALSE(utility::datatype_converter::to_value(val_float, "3.402824e+38"));// too large
    ASSERT_FALSE(utility::datatype_converter::to_value(val_float, "-3.402824e+38"));// too large
    ASSERT_FALSE(utility::datatype_converter::to_value(val_float, "-1.1e1000"));// too large

}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TEST(datatype_conveter, to_value_double)
{
    double val_double = 0.0e0;
    ASSERT_TRUE(utility::datatype_converter::to_value(val_double, "123456"));
    ASSERT_DOUBLE_EQ(val_double, 123456.0);
    ASSERT_TRUE(utility::datatype_converter::to_value(val_double, "+123456"));
    ASSERT_DOUBLE_EQ(val_double, 123456.0);
    ASSERT_TRUE(utility::datatype_converter::to_value(val_double, "-123456"));
    ASSERT_DOUBLE_EQ(val_double, -123456.0);
    ASSERT_TRUE(utility::datatype_converter::to_value(val_double, "1.1e0"));
    ASSERT_DOUBLE_EQ(val_double, 1.1e0);
    ASSERT_TRUE(utility::datatype_converter::to_value(val_double, "-1.1e0"));
    ASSERT_DOUBLE_EQ(val_double, -1.1e0);
    ASSERT_TRUE(utility::datatype_converter::to_value(val_double, "1.797693e+308"));// too large
    ASSERT_DOUBLE_EQ(val_double, 1.797693e+308);
    ASSERT_TRUE(utility::datatype_converter::to_value(val_double, "-1.797693e+308"));// too large
    ASSERT_DOUBLE_EQ(val_double, -1.797693e+308);
    ASSERT_FALSE(utility::datatype_converter::to_value(val_double, "1.797694e+308"));// too large
    ASSERT_FALSE(utility::datatype_converter::to_value(val_double, "-1.797694e+308"));// too large
    ASSERT_FALSE(utility::datatype_converter::to_value(val_double, "-1.1e1000"));// too large

}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>