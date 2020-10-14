cmake_minimum_required(VERSION 3.17)

project(GTEST_DATATYPE_CONVETER CXX)

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
    NAME TEST_DATATYPE_CONVETER
    COMMAND ${PROJECT_NAME} --gtest_output=xml:
    )
set_tests_properties(TEST_DATATYPE_CONVETER PROPERTIES TIMEOUT 1)
