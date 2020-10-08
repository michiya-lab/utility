#////////////////////////////////////////////////////////////////////////
#///  Copyright (c) 2017-2020, Michiya Imachi, All Rights Reserved.
#////////////////////////////////////////////////////////////////////////

cmake_minimum_required(VERSION 3.17)

PROJECT(UTILITY CXX)
add_subdirectory(src)
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
option (BUILD_TESTING "Build the testing tree." ON)
if (BUILD_TESTING)
    enable_testing()
    add_subdirectory(test)
endif()
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>