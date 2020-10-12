list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../module.cmake")
include(utility)
# default configration
set(execute_filename "exe")
set(CMAKE_VERBOSE_MAKEFILE on)
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wpedantic")
set(CMAKE_CXX_FLAGS_RELEASE "-Ofast -DNDEBUG -march=native -mtune=native")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  set(CMAKE_BUILD_TYPE "Release" CACHE STRING "choose build type" FORCE)
endif()
set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release" "MinSizeRel" "RelWithDebInfo")

include(ExternalProject)
set(GOOGLETEST_INSTALL_DESTINATION ${CMAKE_BINARY_DIR}/googletest)

ExternalProject_Add(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${GOOGLETEST_INSTALL_DESTINATION}
)

set(GOOGLETEST_ROOT ${GOOGLETEST_INSTALL_DESTINATION})
set(GOOGLETEST_INCLUDE_DIR ${GOOGLETEST_ROOT}/include)
set(GOOGLETEST_LIBRARY_DIR ${GOOGLETEST_ROOT}/lib)
set(GOOGLETEST_LIB gtest;gtest_main;pthread)

# find_package(
    # GTest REQUIRED
    # PATHS ${GOOGLETEST_ROOT}
# )
# include(GoogleTest)

add_subdirectory(utility)
add_subdirectory(string_editor)
add_subdirectory(datatype_converter)

add_custom_target(
    check
    COMMAND ${CMAKE_CTEST_COMMAND} --verbose
)