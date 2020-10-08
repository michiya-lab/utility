////////////////////////////////////////////////////////////////////////
///  Copyright (c) 2015-2020, Michiya Imachi, All Rights Reserved.
////////////////////////////////////////////////////////////////////////

#include <gtest/gtest.h>
#include <string_editor.hpp>

//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TEST(string_editor, split_comma)
{
    std::string target = "mafiweo,faoeijaowie,ffaoiem,,efaiwweo,,,,";
    auto splited_target = michiya::utility::string_editor::split(target, ',');
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
    auto splited_target = michiya::utility::string_editor::split(target, ' ');
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
TEST(string_editor, trim_right_char)
{
    { //
        std::string target = "abc";
        ASSERT_EQ(michiya::utility::string_editor::trim_right(target, 'c'), "ab");
        ASSERT_EQ(michiya::utility::string_editor::trim_right(target, 'b'), "abc");
    } //
    { // local scope
        std::string target = "aaabcccc";
        ASSERT_EQ(michiya::utility::string_editor::trim_right(target, 'c'), "aaab");
        ASSERT_EQ(michiya::utility::string_editor::trim_right(target, 'b'), "aaabcccc");
    } // local scope
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TEST(string_editor, trim_right_string)
{
    { //
        std::string target = "abc";
        ASSERT_EQ(michiya::utility::string_editor::trim_right(target, "bc"), "a");
        ASSERT_EQ(michiya::utility::string_editor::trim_right(target, "c"), "ab");
    } //
    { //
        std::string target = "asdfbc.csv";
        ASSERT_EQ(michiya::utility::string_editor::trim_right(target, ".csv"), "asdfbc");
        ASSERT_EQ(michiya::utility::string_editor::trim_right(target, "dfbc.csv"), "as");
    } //
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TEST(string_editor, trim_left_char)
{
    { //
        std::string target = "abc";
        ASSERT_EQ(michiya::utility::string_editor::trim_left(target, 'a'), "bc");
        ASSERT_EQ(michiya::utility::string_editor::trim_left(target, 'b'), "abc");
    } //
    { // local scope
        std::string target = "aaabcccc";
        ASSERT_EQ(michiya::utility::string_editor::trim_left(target, 'a'), "bcccc");
        ASSERT_EQ(michiya::utility::string_editor::trim_left(target, 'b'), "aaabcccc");
    } // local scope
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TEST(string_editor, trim_left_string)
{
    { //
        std::string target = "abc";
        ASSERT_EQ(michiya::utility::string_editor::trim_left(target, "ab"), "c");
        ASSERT_EQ(michiya::utility::string_editor::trim_left(target, "a"), "bc");
    } //
    { //
        std::string target = "asdfbc.csv";
        ASSERT_EQ(michiya::utility::string_editor::trim_left(target, "asdf"), "bc.csv");
        ASSERT_EQ(michiya::utility::string_editor::trim_left(target, "asdfbc.csv"), "");
    } //
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TEST(string_editor, trim_both_chara)
{
    { //
        std::string target = "abc";
        ASSERT_EQ(michiya::utility::string_editor::trim_both(target, 'a'), "bc");
        ASSERT_EQ(michiya::utility::string_editor::trim_both(target, 'b'), "abc");
    } //
    { //
        std::string target = "aaabccccaaaa";
        ASSERT_EQ(michiya::utility::string_editor::trim_both(target, 'a'), "bcccc");
    } //
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TEST(string_editor, trim_both_string)
{
    { //
        std::string target = "abcabca";
        ASSERT_EQ(michiya::utility::string_editor::trim_both(target, "a"), "bcabc");
        ASSERT_EQ(michiya::utility::string_editor::trim_both(target, "abca"), "bca");
    } //
    { //
        std::string target = "abcabcabc";
        ASSERT_EQ(michiya::utility::string_editor::trim_both(target, "abc"), "abc");
    } //
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
TEST(string_editor, remove)
{
    namespace m_util = michiya::utility;
    std::string str = "123456789";
    ASSERT_EQ(m_util::string_editor::remove(str, '1'), "23456789");
    ASSERT_EQ(m_util::string_editor::remove(str, '2'), "13456789");
    ASSERT_EQ(m_util::string_editor::remove(str, '3'), "12456789");
    ASSERT_EQ(m_util::string_editor::remove(str, '4'), "12356789");
    ASSERT_EQ(m_util::string_editor::remove(str, '5'), "12346789");
    ASSERT_EQ(m_util::string_editor::remove(str, '6'), "12345789");
    ASSERT_EQ(m_util::string_editor::remove(str, '7'), "12345689");
    ASSERT_EQ(m_util::string_editor::remove(str, '8'), "12345679");
    ASSERT_EQ(m_util::string_editor::remove(str, '9'), "12345678");
    ASSERT_EQ(m_util::string_editor::remove(str, 'a'), "123456789");
}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>