////////////////////////////////////////////////////////////////////////
///  Copyright (c) 2015-2020, Michiya Imachi, All Rights Reserved.
////////////////////////////////////////////////////////////////////////

#include <utility.hpp>
#include <gtest/gtest.h>

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TEST(UTILITY, is_number)
{
    // TRUE
    // integer
    ASSERT_TRUE(utility::is_number("0"));
    ASSERT_TRUE(utility::is_number("1"));
    ASSERT_TRUE(utility::is_number("+1"));
    ASSERT_TRUE(utility::is_number("-1"));
    ASSERT_TRUE(utility::is_number("123"));
    ASSERT_TRUE(utility::is_number("+123"));
    ASSERT_TRUE(utility::is_number("-123"));
    ASSERT_TRUE(utility::is_number("0000123456789"));
    ASSERT_TRUE(utility::is_number("+0000123456789"));
    ASSERT_TRUE(utility::is_number("-0000123456789"));
    // real
    ASSERT_TRUE(utility::is_number("1.2"));
    ASSERT_TRUE(utility::is_number("+1.2"));
    ASSERT_TRUE(utility::is_number("-1.2"));
    ASSERT_TRUE(utility::is_number("1.20000"));
    ASSERT_TRUE(utility::is_number("+1.20000"));
    ASSERT_TRUE(utility::is_number("-1.20000"));
    ASSERT_TRUE(utility::is_number("0001.2"));
    ASSERT_TRUE(utility::is_number("+00001.2"));
    ASSERT_TRUE(utility::is_number("-00001.2"));
    ASSERT_TRUE(utility::is_number("0001.20000"));
    ASSERT_TRUE(utility::is_number("+00001.20000"));
    ASSERT_TRUE(utility::is_number("-00001.20000"));
    // exponential
    ASSERT_TRUE(utility::is_number("1.2e1"));
    ASSERT_TRUE(utility::is_number("1.2e+1"));
    ASSERT_TRUE(utility::is_number("1.2e-1"));
    ASSERT_TRUE(utility::is_number("1.2E1"));
    ASSERT_TRUE(utility::is_number("1.2E+1"));
    ASSERT_TRUE(utility::is_number("1.2E-1"));
    ASSERT_TRUE(utility::is_number("1.2e10000"));
    ASSERT_TRUE(utility::is_number("1.2e+10000"));
    ASSERT_TRUE(utility::is_number("1.2e-10000"));
    ASSERT_TRUE(utility::is_number("1.2e00001"));
    ASSERT_TRUE(utility::is_number("1.2e+00001"));
    ASSERT_TRUE(utility::is_number("1.2e-00001"));
    ASSERT_TRUE(utility::is_number("00001.2e00001"));
    ASSERT_TRUE(utility::is_number("00001.2e+00001"));
    ASSERT_TRUE(utility::is_number("00001.2e-00001"));
    ASSERT_TRUE(utility::is_number("00001.2e1"));
    ASSERT_TRUE(utility::is_number("00001.2e+1"));
    ASSERT_TRUE(utility::is_number("00001.2e-1"));
    ASSERT_TRUE(utility::is_number("+1.2e1"));
    ASSERT_TRUE(utility::is_number("+1.2e+1"));
    ASSERT_TRUE(utility::is_number("+1.2e-1"));
    ASSERT_TRUE(utility::is_number("+1.2e1"));
    ASSERT_TRUE(utility::is_number("+1.2e+1"));
    ASSERT_TRUE(utility::is_number("+1.2e-1"));
    ASSERT_TRUE(utility::is_number("-1.2e1"));
    ASSERT_TRUE(utility::is_number("-1.2e+1"));
    ASSERT_TRUE(utility::is_number("-1.2e-1"));
    // FALSE
    ASSERT_FALSE(utility::is_number(""));
    ASSERT_FALSE(utility::is_number(" 1"));
    ASSERT_FALSE(utility::is_number("1 "));
    ASSERT_FALSE(utility::is_number("1,0"));
    ASSERT_FALSE(utility::is_number(" "));
    ASSERT_FALSE(utility::is_number("O"));
    ASSERT_FALSE(utility::is_number("    "));
    ASSERT_FALSE(utility::is_number("1."));
    ASSERT_FALSE(utility::is_number("1.."));
    ASSERT_FALSE(utility::is_number(".1"));
    ASSERT_FALSE(utility::is_number("+.1"));
    ASSERT_FALSE(utility::is_number("-.1"));
    ASSERT_FALSE(utility::is_number(".1e0"));
    ASSERT_FALSE(utility::is_number("0.1e"));
    ASSERT_FALSE(utility::is_number("0.1E"));
    ASSERT_FALSE(utility::is_number("0.1E0E"));
    ASSERT_FALSE(utility::is_number("0.e"));
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TEST(UTILITY, is_int_number)
{
// TRUE
    // integer
    ASSERT_TRUE(utility::is_int_number("0"));
    ASSERT_TRUE(utility::is_int_number("1"));
    ASSERT_TRUE(utility::is_int_number("+1"));
    ASSERT_TRUE(utility::is_int_number("-1"));
    ASSERT_TRUE(utility::is_int_number("123"));
    ASSERT_TRUE(utility::is_int_number("+123"));
    ASSERT_TRUE(utility::is_int_number("-123"));
    ASSERT_TRUE(utility::is_int_number("0000123456789"));
    ASSERT_TRUE(utility::is_int_number("+0000123456789"));
    ASSERT_TRUE(utility::is_int_number("-0000123456789"));
    // real
    ASSERT_FALSE(utility::is_int_number("1.2"));
    ASSERT_FALSE(utility::is_int_number("+1.2"));
    ASSERT_FALSE(utility::is_int_number("-1.2"));
    ASSERT_FALSE(utility::is_int_number("1.20000"));
    ASSERT_FALSE(utility::is_int_number("+1.20000"));
    ASSERT_FALSE(utility::is_int_number("-1.20000"));
    ASSERT_FALSE(utility::is_int_number("0001.2"));
    ASSERT_FALSE(utility::is_int_number("+00001.2"));
    ASSERT_FALSE(utility::is_int_number("-00001.2"));
    ASSERT_FALSE(utility::is_int_number("0001.20000"));
    ASSERT_FALSE(utility::is_int_number("+00001.20000"));
    ASSERT_FALSE(utility::is_int_number("-00001.20000"));
    // exponential
    ASSERT_FALSE(utility::is_int_number("1.2e1"));
    ASSERT_FALSE(utility::is_int_number("1.2e+1"));
    ASSERT_FALSE(utility::is_int_number("1.2e-1"));
    ASSERT_FALSE(utility::is_int_number("1.2E1"));
    ASSERT_FALSE(utility::is_int_number("1.2E+1"));
    ASSERT_FALSE(utility::is_int_number("1.2E-1"));
    ASSERT_FALSE(utility::is_int_number("1.2e10000"));
    ASSERT_FALSE(utility::is_int_number("1.2e+10000"));
    ASSERT_FALSE(utility::is_int_number("1.2e-10000"));
    ASSERT_FALSE(utility::is_int_number("1.2e00001"));
    ASSERT_FALSE(utility::is_int_number("1.2e+00001"));
    ASSERT_FALSE(utility::is_int_number("1.2e-00001"));
    ASSERT_FALSE(utility::is_int_number("00001.2e00001"));
    ASSERT_FALSE(utility::is_int_number("00001.2e+00001"));
    ASSERT_FALSE(utility::is_int_number("00001.2e-00001"));
    ASSERT_FALSE(utility::is_int_number("00001.2e1"));
    ASSERT_FALSE(utility::is_int_number("00001.2e+1"));
    ASSERT_FALSE(utility::is_int_number("00001.2e-1"));
    ASSERT_FALSE(utility::is_int_number("+1.2e1"));
    ASSERT_FALSE(utility::is_int_number("+1.2e+1"));
    ASSERT_FALSE(utility::is_int_number("+1.2e-1"));
    ASSERT_FALSE(utility::is_int_number("+1.2e1"));
    ASSERT_FALSE(utility::is_int_number("+1.2e+1"));
    ASSERT_FALSE(utility::is_int_number("+1.2e-1"));
    ASSERT_FALSE(utility::is_int_number("-1.2e1"));
    ASSERT_FALSE(utility::is_int_number("-1.2e+1"));
    ASSERT_FALSE(utility::is_int_number("-1.2e-1"));
    // FALSE
    ASSERT_FALSE(utility::is_int_number(""));
    ASSERT_FALSE(utility::is_int_number(" 1"));
    ASSERT_FALSE(utility::is_int_number("1 "));
    ASSERT_FALSE(utility::is_int_number("1,0"));
    ASSERT_FALSE(utility::is_int_number(" "));
    ASSERT_FALSE(utility::is_int_number("O"));
    ASSERT_FALSE(utility::is_int_number("    "));
    ASSERT_FALSE(utility::is_int_number("1."));
    ASSERT_FALSE(utility::is_int_number("1.."));
    ASSERT_FALSE(utility::is_int_number(".1"));
    ASSERT_FALSE(utility::is_int_number("+.1"));
    ASSERT_FALSE(utility::is_int_number("-.1"));
    ASSERT_FALSE(utility::is_int_number(".1e0"));
    ASSERT_FALSE(utility::is_int_number("0.1e"));
    ASSERT_FALSE(utility::is_int_number("0.1E"));
    ASSERT_FALSE(utility::is_int_number("0.1E0E"));
    ASSERT_FALSE(utility::is_int_number("0.e"));
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TEST(UTILITY, is_unsigned_int_number)
{
    // TRUE
    // integer
    ASSERT_TRUE(utility::is_unsigned_int_number("0"));
    ASSERT_TRUE(utility::is_unsigned_int_number("1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("+1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("-1"));
    ASSERT_TRUE(utility::is_unsigned_int_number("123"));
    ASSERT_FALSE(utility::is_unsigned_int_number("+123"));
    ASSERT_FALSE(utility::is_unsigned_int_number("-123"));
    ASSERT_TRUE(utility::is_unsigned_int_number("0000123456789"));
    ASSERT_FALSE(utility::is_unsigned_int_number("+0000123456789"));
    ASSERT_FALSE(utility::is_unsigned_int_number("-0000123456789"));
    // real
    ASSERT_FALSE(utility::is_unsigned_int_number("1.2"));
    ASSERT_FALSE(utility::is_unsigned_int_number("+1.2"));
    ASSERT_FALSE(utility::is_unsigned_int_number("-1.2"));
    ASSERT_FALSE(utility::is_unsigned_int_number("1.20000"));
    ASSERT_FALSE(utility::is_unsigned_int_number("+1.20000"));
    ASSERT_FALSE(utility::is_unsigned_int_number("-1.20000"));
    ASSERT_FALSE(utility::is_unsigned_int_number("0001.2"));
    ASSERT_FALSE(utility::is_unsigned_int_number("+00001.2"));
    ASSERT_FALSE(utility::is_unsigned_int_number("-00001.2"));
    ASSERT_FALSE(utility::is_unsigned_int_number("0001.20000"));
    ASSERT_FALSE(utility::is_unsigned_int_number("+00001.20000"));
    ASSERT_FALSE(utility::is_unsigned_int_number("-00001.20000"));
    // exponential
    ASSERT_FALSE(utility::is_unsigned_int_number("1.2e1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("1.2e+1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("1.2e-1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("1.2E1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("1.2E+1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("1.2E-1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("1.2e10000"));
    ASSERT_FALSE(utility::is_unsigned_int_number("1.2e+10000"));
    ASSERT_FALSE(utility::is_unsigned_int_number("1.2e-10000"));
    ASSERT_FALSE(utility::is_unsigned_int_number("1.2e00001"));
    ASSERT_FALSE(utility::is_unsigned_int_number("1.2e+00001"));
    ASSERT_FALSE(utility::is_unsigned_int_number("1.2e-00001"));
    ASSERT_FALSE(utility::is_unsigned_int_number("00001.2e00001"));
    ASSERT_FALSE(utility::is_unsigned_int_number("00001.2e+00001"));
    ASSERT_FALSE(utility::is_unsigned_int_number("00001.2e-00001"));
    ASSERT_FALSE(utility::is_unsigned_int_number("00001.2e1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("00001.2e+1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("00001.2e-1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("+1.2e1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("+1.2e+1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("+1.2e-1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("+1.2e1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("+1.2e+1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("+1.2e-1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("-1.2e1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("-1.2e+1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("-1.2e-1"));
    // FALSE
    ASSERT_FALSE(utility::is_unsigned_int_number(""));
    ASSERT_FALSE(utility::is_unsigned_int_number(" 1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("1 "));
    ASSERT_FALSE(utility::is_unsigned_int_number("1,0"));
    ASSERT_FALSE(utility::is_unsigned_int_number(" "));
    ASSERT_FALSE(utility::is_unsigned_int_number("O"));
    ASSERT_FALSE(utility::is_unsigned_int_number("    "));
    ASSERT_FALSE(utility::is_unsigned_int_number("1."));
    ASSERT_FALSE(utility::is_unsigned_int_number("1.."));
    ASSERT_FALSE(utility::is_unsigned_int_number(".1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("+.1"));
    ASSERT_FALSE(utility::is_unsigned_int_number("-.1"));
    ASSERT_FALSE(utility::is_unsigned_int_number(".1e0"));
    ASSERT_FALSE(utility::is_unsigned_int_number("0.1e"));
    ASSERT_FALSE(utility::is_unsigned_int_number("0.1E"));
    ASSERT_FALSE(utility::is_unsigned_int_number("0.1E0E"));
    ASSERT_FALSE(utility::is_unsigned_int_number("0.e"));
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TEST(UTILITY, is_real_number)
{
    // TRUE
    // integer
    ASSERT_FALSE(utility::is_real_number("0"));
    ASSERT_FALSE(utility::is_real_number("1"));
    ASSERT_FALSE(utility::is_real_number("+1"));
    ASSERT_FALSE(utility::is_real_number("-1"));
    ASSERT_FALSE(utility::is_real_number("123"));
    ASSERT_FALSE(utility::is_real_number("+123"));
    ASSERT_FALSE(utility::is_real_number("-123"));
    ASSERT_FALSE(utility::is_real_number("0000123456789"));
    ASSERT_FALSE(utility::is_real_number("+0000123456789"));
    ASSERT_FALSE(utility::is_real_number("-0000123456789"));
    // real
    ASSERT_TRUE(utility::is_real_number("1.2"));
    ASSERT_TRUE(utility::is_real_number("+1.2"));
    ASSERT_TRUE(utility::is_real_number("-1.2"));
    ASSERT_TRUE(utility::is_real_number("1.20000"));
    ASSERT_TRUE(utility::is_real_number("+1.20000"));
    ASSERT_TRUE(utility::is_real_number("-1.20000"));
    ASSERT_TRUE(utility::is_real_number("0001.2"));
    ASSERT_TRUE(utility::is_real_number("+00001.2"));
    ASSERT_TRUE(utility::is_real_number("-00001.2"));
    ASSERT_TRUE(utility::is_real_number("0001.20000"));
    ASSERT_TRUE(utility::is_real_number("+00001.20000"));
    ASSERT_TRUE(utility::is_real_number("-00001.20000"));
    // exponential
    ASSERT_TRUE(utility::is_real_number("1.2e1"));
    ASSERT_TRUE(utility::is_real_number("1.2e+1"));
    ASSERT_TRUE(utility::is_real_number("1.2e-1"));
    ASSERT_TRUE(utility::is_real_number("1.2E1"));
    ASSERT_TRUE(utility::is_real_number("1.2E+1"));
    ASSERT_TRUE(utility::is_real_number("1.2E-1"));
    ASSERT_TRUE(utility::is_real_number("1.2e10000"));
    ASSERT_TRUE(utility::is_real_number("1.2e+10000"));
    ASSERT_TRUE(utility::is_real_number("1.2e-10000"));
    ASSERT_TRUE(utility::is_real_number("1.2e00001"));
    ASSERT_TRUE(utility::is_real_number("1.2e+00001"));
    ASSERT_TRUE(utility::is_real_number("1.2e-00001"));
    ASSERT_TRUE(utility::is_real_number("00001.2e00001"));
    ASSERT_TRUE(utility::is_real_number("00001.2e+00001"));
    ASSERT_TRUE(utility::is_real_number("00001.2e-00001"));
    ASSERT_TRUE(utility::is_real_number("00001.2e1"));
    ASSERT_TRUE(utility::is_real_number("00001.2e+1"));
    ASSERT_TRUE(utility::is_real_number("00001.2e-1"));
    ASSERT_TRUE(utility::is_real_number("+1.2e1"));
    ASSERT_TRUE(utility::is_real_number("+1.2e+1"));
    ASSERT_TRUE(utility::is_real_number("+1.2e-1"));
    ASSERT_TRUE(utility::is_real_number("+1.2e1"));
    ASSERT_TRUE(utility::is_real_number("+1.2e+1"));
    ASSERT_TRUE(utility::is_real_number("+1.2e-1"));
    ASSERT_TRUE(utility::is_real_number("-1.2e1"));
    ASSERT_TRUE(utility::is_real_number("-1.2e+1"));
    ASSERT_TRUE(utility::is_real_number("-1.2e-1"));
    // FALSE
    ASSERT_FALSE(utility::is_real_number(""));
    ASSERT_FALSE(utility::is_real_number(" 1"));
    ASSERT_FALSE(utility::is_real_number("1 "));
    ASSERT_FALSE(utility::is_real_number("1,0"));
    ASSERT_FALSE(utility::is_real_number(" "));
    ASSERT_FALSE(utility::is_real_number("O"));
    ASSERT_FALSE(utility::is_real_number("    "));
    ASSERT_FALSE(utility::is_real_number("1."));
    ASSERT_FALSE(utility::is_real_number("1.."));
    ASSERT_FALSE(utility::is_real_number(".1"));
    ASSERT_FALSE(utility::is_real_number("+.1"));
    ASSERT_FALSE(utility::is_real_number("-.1"));
    ASSERT_FALSE(utility::is_real_number(".1e0"));
    ASSERT_FALSE(utility::is_real_number("0.1e"));
    ASSERT_FALSE(utility::is_real_number("0.1E"));
    ASSERT_FALSE(utility::is_real_number("0.1E0E"));
    ASSERT_FALSE(utility::is_real_number("0.e"));
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TEST(UTILITY, is_unsigned_real_number)
{
    // TRUE
    // integer
    ASSERT_FALSE(utility::is_unsigned_real_number("0"));
    ASSERT_FALSE(utility::is_unsigned_real_number("1"));
    ASSERT_FALSE(utility::is_unsigned_real_number("+1"));
    ASSERT_FALSE(utility::is_unsigned_real_number("-1"));
    ASSERT_FALSE(utility::is_unsigned_real_number("123"));
    ASSERT_FALSE(utility::is_unsigned_real_number("+123"));
    ASSERT_FALSE(utility::is_unsigned_real_number("-123"));
    ASSERT_FALSE(utility::is_unsigned_real_number("0000123456789"));
    ASSERT_FALSE(utility::is_unsigned_real_number("+0000123456789"));
    ASSERT_FALSE(utility::is_unsigned_real_number("-0000123456789"));
    // real
    ASSERT_TRUE(utility::is_unsigned_real_number("1.2"));
    ASSERT_FALSE(utility::is_unsigned_real_number("+1.2"));
    ASSERT_FALSE(utility::is_unsigned_real_number("-1.2"));
    ASSERT_TRUE(utility::is_unsigned_real_number("1.20000"));
    ASSERT_FALSE(utility::is_unsigned_real_number("+1.20000"));
    ASSERT_FALSE(utility::is_unsigned_real_number("-1.20000"));
    ASSERT_TRUE(utility::is_unsigned_real_number("0001.2"));
    ASSERT_FALSE(utility::is_unsigned_real_number("+00001.2"));
    ASSERT_FALSE(utility::is_unsigned_real_number("-00001.2"));
    ASSERT_TRUE(utility::is_unsigned_real_number("0001.20000"));
    ASSERT_FALSE(utility::is_unsigned_real_number("+00001.20000"));
    ASSERT_FALSE(utility::is_unsigned_real_number("-00001.20000"));
    // exponential
    ASSERT_TRUE(utility::is_unsigned_real_number("1.2e1"));
    ASSERT_TRUE(utility::is_unsigned_real_number("1.2e+1"));
    ASSERT_TRUE(utility::is_unsigned_real_number("1.2e-1"));
    ASSERT_TRUE(utility::is_unsigned_real_number("1.2E1"));
    ASSERT_TRUE(utility::is_unsigned_real_number("1.2E+1"));
    ASSERT_TRUE(utility::is_unsigned_real_number("1.2E-1"));
    ASSERT_TRUE(utility::is_unsigned_real_number("1.2e10000"));
    ASSERT_TRUE(utility::is_unsigned_real_number("1.2e+10000"));
    ASSERT_TRUE(utility::is_unsigned_real_number("1.2e-10000"));
    ASSERT_TRUE(utility::is_unsigned_real_number("1.2e00001"));
    ASSERT_TRUE(utility::is_unsigned_real_number("1.2e+00001"));
    ASSERT_TRUE(utility::is_unsigned_real_number("1.2e-00001"));
    ASSERT_TRUE(utility::is_unsigned_real_number("00001.2e00001"));
    ASSERT_TRUE(utility::is_unsigned_real_number("00001.2e+00001"));
    ASSERT_TRUE(utility::is_unsigned_real_number("00001.2e-00001"));
    ASSERT_TRUE(utility::is_unsigned_real_number("00001.2e1"));
    ASSERT_TRUE(utility::is_unsigned_real_number("00001.2e+1"));
    ASSERT_TRUE(utility::is_unsigned_real_number("00001.2e-1"));
    ASSERT_FALSE(utility::is_unsigned_real_number("+1.2e1"));
    ASSERT_FALSE(utility::is_unsigned_real_number("+1.2e+1"));
    ASSERT_FALSE(utility::is_unsigned_real_number("+1.2e-1"));
    ASSERT_FALSE(utility::is_unsigned_real_number("+1.2e1"));
    ASSERT_FALSE(utility::is_unsigned_real_number("+1.2e+1"));
    ASSERT_FALSE(utility::is_unsigned_real_number("+1.2e-1"));
    ASSERT_FALSE(utility::is_unsigned_real_number("-1.2e1"));
    ASSERT_FALSE(utility::is_unsigned_real_number("-1.2e+1"));
    ASSERT_FALSE(utility::is_unsigned_real_number("-1.2e-1"));
    // FALSE
    ASSERT_FALSE(utility::is_unsigned_real_number(""));
    ASSERT_FALSE(utility::is_unsigned_real_number(" 1"));
    ASSERT_FALSE(utility::is_unsigned_real_number("1 "));
    ASSERT_FALSE(utility::is_unsigned_real_number("1,0"));
    ASSERT_FALSE(utility::is_unsigned_real_number(" "));
    ASSERT_FALSE(utility::is_unsigned_real_number("O"));
    ASSERT_FALSE(utility::is_unsigned_real_number("    "));
    ASSERT_FALSE(utility::is_unsigned_real_number("1."));
    ASSERT_FALSE(utility::is_unsigned_real_number("1.."));
    ASSERT_FALSE(utility::is_unsigned_real_number(".1"));
    ASSERT_FALSE(utility::is_unsigned_real_number("+.1"));
    ASSERT_FALSE(utility::is_unsigned_real_number("-.1"));
    ASSERT_FALSE(utility::is_unsigned_real_number(".1e0"));
    ASSERT_FALSE(utility::is_unsigned_real_number("0.1e"));
    ASSERT_FALSE(utility::is_unsigned_real_number("0.1E"));
    ASSERT_FALSE(utility::is_unsigned_real_number("0.1E0E"));
    ASSERT_FALSE(utility::is_unsigned_real_number("0.e"));
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>