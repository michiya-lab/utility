cmake_minimum_required(VERSION 3.17)

PROJECT(utility CXX)

include("${CMAKE_CURRENT_LIST_DIR}/../modules.cmake/myconfig.cmake")
LOAD_MY_CONFIG()
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
# include
include("${CMAKE_CURRENT_SOURCE_DIR}/../modules.cmake/utility.cmake")
SET_UTILITY_VARIABLES()
CHECK_DIRECTORIES_EXIST(${UTILITY_SOURCE_DIR})
CHECK_DIRECTORIES_EXIST(${UTILITY_INCLUDE_DIR})
FIND_CPP(MY_UTILITY_SOURCES "${UTILITY_SOURCE_DIR}")
FIND_HPP(MY_UTILITY_HEADERS "${UTILITY_INCLUDE_DIR}")
list(APPEND MY_SOURCES ${MY_UTILITY_SOURCES})
list(APPEND MY_HEADERS ${MY_UTILITY_HEADERS})
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
# main
DEFINE_ADD_LIBRARY(${UTILITY_LIB_NAME} "${MY_SOURCES}")
LOAD_INCLUDES_UTILITY_MODULE(${UTILITY_LIB_NAME})
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
## install
set_target_properties(
    ${UTILITY_LIB_NAME}
    PROPERTIES
    PUBLIC_HEADER "${MY_HEADERS}"
  )
install(
    TARGETS ${UTILITY_LIB_NAME}
    EXPORT ${UTILITY_LIB_NAME}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
    LIBRARY DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_PREFIX}/include
  )
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
