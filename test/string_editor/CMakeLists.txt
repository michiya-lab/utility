cmake_minimum_required(VERSION 3.17)

project(GTEST_string_editor CXX)

file(GLOB SOURCE "*.cpp")
add_executable(${PROJECT_NAME} ${SOURCE})
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
# include
include("${CMAKE_CURRENT_SOURCE_DIR}/../../modules.cmake/utility.cmake")
LOAD_SETTING_UTILITY_MODULE(${PROJECT_NAME})
include("${CMAKE_CURRENT_SOURCE_DIR}/../../modules.cmake/googletest.cmake")
LOAD_SETTING_GOOGLETEST_MODULE(${PROJECT_NAME})
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

add_test(
    NAME TEST_STRING_EDITOR
    COMMAND ${PROJECT_NAME}  --gtest_output=xml:
    )
set_tests_properties(TEST_STRING_EDITOR PROPERTIES TIMEOUT 1)
