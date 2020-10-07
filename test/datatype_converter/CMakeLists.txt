cmake_minimum_required(VERSION 3.17)

project(GTEST_DATATYPE_CONVETER CXX)

file(GLOB SOURCE "*.cpp")
add_executable(${PROJECT_NAME} ${SOURCE})
target_include_directories(
    ${PROJECT_NAME}
    PRIVATE ${GOOGLETEST_ROOT}/include
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../../src
)
target_link_directories(
    ${PROJECT_NAME}
    PRIVATE ${GOOGLETEST_ROOT}/lib
)
target_link_libraries(${PROJECT_NAME} PRIVATE gtest gtest_main pthread utility)


add_test(
    NAME TEST_DATATYPE_CONVETER
    COMMAND ${PROJECT_NAME}
    )
set_tests_properties(TEST_DATATYPE_CONVETER PROPERTIES TIMEOUT 1)
