cmake_minimum_required(VERSION 3.17)

project(GTEST_DATATYPE_CONVETER CXX)

file(GLOB SOURCE "*.cpp")
add_executable(${PROJECT_NAME} ${SOURCE})
target_include_directories(
    ${PROJECT_NAME}
    PRIVATE ${GOOGLETEST_INCLUDE_DIR}
    PRIVATE ${UTILITY_INCLUDE_DIR}
)
target_link_directories(
    ${PROJECT_NAME}
    PRIVATE ${GOOGLETEST_LIBRARY_DIR}
)
target_link_libraries(
    ${PROJECT_NAME}
    PRIVATE ${GOOGLETEST_LIB}
    PRIVATE ${UTILITY_LIB}
)

add_test(
    NAME TEST_DATATYPE_CONVETER
    COMMAND ${PROJECT_NAME}
    )
set_tests_properties(TEST_DATATYPE_CONVETER PROPERTIES TIMEOUT 1)
