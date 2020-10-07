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

add_subdirectory(utility)
add_subdirectory(string_editor)
add_subdirectory(datatype_converter)

add_custom_target(
    check
    COMMAND ${CMAKE_CTEST_COMMAND} --verbose
)