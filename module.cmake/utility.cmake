#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
set_property(GLOBAL PROPERTY PATH_UTILITY_MODULE "${CMAKE_CURRENT_LIST_DIR}")
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
macro(SET_UTILITY_VARIABLES)
    get_property(my_module_path GLOBAL PROPERTY PATH_UTILITY_MODULE)
    if(NOT DEFINED UTILITY_LIB_NAME)
        set(UTILITY_LIB_NAME "michiya_utility")
        set(UTILITY_INCLUDE_DIR "${my_module_path}/../src/")
    endif()
endmacro()
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
macro(LOAD_DEPENDENCIES_UTILITY_MODULE MACRO_ARG)
    SET_UTILITY_VARIABLES()
    add_dependencies(${MACRO_ARG} ${UTILITY_LIB_NAME})
endmacro()
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
macro(LOAD_LINKS_UTILITY_MODULE MACRO_ARG)
    SET_UTILITY_VARIABLES()
    target_link_libraries(
        ${MACRO_ARG}
        PRIVATE ${UTILITY_LIB_NAME}
        )
endmacro()
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
macro(LOAD_INCLUDES_UTILITY_MODULE MACRO_ARG)
    SET_UTILITY_VARIABLES()
    target_include_directories(
        ${MACRO_ARG}
        PRIVATE ${UTILITY_INCLUDE_DIR}
    )
endmacro()
#>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
macro(LOAD_SETTING_UTILITY_MODULE MACRO_ARG)
    LOAD_DEPENDENCIES_UTILITY_MODULE(${MACRO_ARG})
    LOAD_LINKS_UTILITY_MODULE(${MACRO_ARG})
    LOAD_INCLUDES_UTILITY_MODULE(${MACRO_ARG})
endmacro()
#<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<