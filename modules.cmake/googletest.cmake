#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
macro(SET_GOOGLETEST_VARIABLES)
    if(NOT DEFINED GOOGLETEST_INSTALL_DESTINATION)
        set(GOOGLETEST_INSTALL_DESTINATION ${CMAKE_BINARY_DIR}/googletest)
        set(GOOGLETEST_ROOT ${GOOGLETEST_INSTALL_DESTINATION})
        set(GOOGLETEST_INCLUDE_DIR ${GOOGLETEST_ROOT}/include)
        set(GOOGLETEST_LIBRARY_DIR ${GOOGLETEST_ROOT}/lib)
        set(GOOGLETEST_LIB gtest;gtest_main;pthread)
    endif()
endmacro()
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
macro(fetch_googletesst)
    if(NOT TARGET EXTERNAL_GOOGLETEST_PROJECT)
        SET_GOOGLETEST_VARIABLES()
        include(ExternalProject)
        ExternalProject_Add(
            EXTERNAL_GOOGLETEST_PROJECT
            GIT_REPOSITORY https://github.com/google/googletest
            GIT_TAG release-1.10.0
            CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${GOOGLETEST_INSTALL_DESTINATION}
        )
    endif()
endmacro()
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
macro(LOAD_DEPENDENCIES_GOOGLETEST_MODULE MACRO_ARG)
    if(NOT TARGET EXTERNAL_GOOGLETEST_PROJECT)
        fetch_googletesst()
    endif()
    SET_GOOGLETEST_VARIABLES()
    add_dependencies(${MACRO_ARG} EXTERNAL_GOOGLETEST_PROJECT)
endmacro()
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
macro(LOAD_LINK_DIRS_GOOGLETEST_MODULE MACRO_ARG)
    if(NOT TARGET EXTERNAL_GOOGLETEST_PROJECT)
        fetch_googletesst()
    endif()
    SET_GOOGLETEST_VARIABLES()
    target_link_directories(
        ${MACRO_ARG}
        PRIVATE ${GOOGLETEST_LIBRARY_DIR}
    )
endmacro()
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
macro(LOAD_LINK_GOOGLETEST_MODULE MACRO_ARG)
    if(NOT TARGET EXTERNAL_GOOGLETEST_PROJECT)
        fetch_googletesst()
    endif()
    SET_GOOGLETEST_VARIABLES()
    target_link_libraries(
        ${MACRO_ARG}
        PRIVATE ${GOOGLETEST_LIB}
        )
endmacro()
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
macro(LOAD_INCLUDE_GOOGLETEST_MODULE MACRO_ARG)
    if(NOT TARGET EXTERNAL_GOOGLETEST_PROJECT)
        fetch_googletesst()
    endif()
    SET_GOOGLETEST_VARIABLES()
    target_include_directories(
        ${MACRO_ARG}
        PRIVATE ${GOOGLETEST_INCLUDE_DIR}
        )
endmacro()
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
macro(LOAD_SETTING_GOOGLETEST_MODULE MACRO_ARG)
    LOAD_DEPENDENCIES_GOOGLETEST_MODULE(${MACRO_ARG})
    LOAD_LINK_DIRS_GOOGLETEST_MODULE(${MACRO_ARG})
    LOAD_LINK_GOOGLETEST_MODULE(${MACRO_ARG})
    LOAD_INCLUDE_GOOGLETEST_MODULE(${MACRO_ARG})
endmacro()
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
