cmake_minimum_required(VERSION 3.17)

project(GTEST CXX)

include(ExternalProject)
set(GOOGLETEST_INSTALL_DESTINATION ${CMAKE_BINARY_DIR}/googletest)

ExternalProject_Add(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${GOOGLETEST_INSTALL_DESTINATION}
)

set(GOOGLETEST_ROOT ${GOOGLETEST_INSTALL_DESTINATION})

# find_package(
    # GTest REQUIRED
    # PATHS ${GOOGLETEST_ROOT}
# )
# include(GoogleTest)

file(GLOB SOURCE "*.cpp")
add_executable(${PROJECT_NAME} ${SOURCE})
target_include_directories(
    ${PROJECT_NAME}
    PRIVATE ${GOOGLETEST_ROOT}/include
    PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../../src/string_editor
)
target_link_directories(
    ${PROJECT_NAME}
    PRIVATE ${GOOGLETEST_ROOT}/lib
)
target_link_libraries(${PROJECT_NAME} PRIVATE gtest gtest_main pthread string_editor)


add_test(
    NAME TEST_STRING_EDITOR
    COMMAND ${PROJECT_NAME}
    )

add_custom_target(check
COMMAND ${CMAKE_CTEST_COMMAND} --verbose
DEPENDS ${PROJECT_NAME})