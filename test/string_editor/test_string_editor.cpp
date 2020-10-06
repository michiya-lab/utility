////////////////////////////////////////////////////////////////////////
///  Copyright (c) 2015-2020, Michiya Imachi, All Rights Reserved.
////////////////////////////////////////////////////////////////////////

#include <gtest/gtest.h>
#include <string_editor.hpp>

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TEST(string_editor, split_comma)
{
    std::string target = "mafiweo,faoeijaowie,ffaoiem,,efaiwweo,,,,";
    auto splited_target = string_editor::split(target, ',');
    ASSERT_EQ(splited_target.size(), 8);
    ASSERT_EQ(splited_target[0], "mafiweo");
    ASSERT_EQ(splited_target[1], "faoeijaowie");
    ASSERT_EQ(splited_target[2], "ffaoiem");
    ASSERT_EQ(splited_target[3], "");
    ASSERT_EQ(splited_target[4], "efaiwweo");
    ASSERT_EQ(splited_target[5], "");
    ASSERT_EQ(splited_target[6], "");
    ASSERT_EQ(splited_target[7], "");
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TEST(string_editor, split_space)
{
    std::string target = "apewja faeopw   awepifjiefjp eaifj e ae";
    auto splited_target = string_editor::split(target, ' ');
    ASSERT_EQ(splited_target.size(), 8);
    ASSERT_EQ(splited_target[0], "apewja");
    ASSERT_EQ(splited_target[1], "faeopw");
    ASSERT_EQ(splited_target[2], "");
    ASSERT_EQ(splited_target[3], "");
    ASSERT_EQ(splited_target[4], "awepifjiefjp");
    ASSERT_EQ(splited_target[5], "eaifj");
    ASSERT_EQ(splited_target[6], "e");
    ASSERT_EQ(splited_target[7], "ae");
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TEST(string_editor, remove)
{
    std::string str = "123456789";
    ASSERT_EQ(string_editor::remove(str, '1'), "23456789");
    ASSERT_EQ(string_editor::remove(str, '2'), "13456789");
    ASSERT_EQ(string_editor::remove(str, '3'), "12456789");
    ASSERT_EQ(string_editor::remove(str, '4'), "12356789");
    ASSERT_EQ(string_editor::remove(str, '5'), "12346789");
    ASSERT_EQ(string_editor::remove(str, '6'), "12345789");
    ASSERT_EQ(string_editor::remove(str, '7'), "12345689");
    ASSERT_EQ(string_editor::remove(str, '8'), "12345679");
    ASSERT_EQ(string_editor::remove(str, '9'), "12345678");
    ASSERT_EQ(string_editor::remove(str, 'a'), "123456789");
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>