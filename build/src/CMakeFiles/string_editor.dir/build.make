# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/cmake-3.17.2/bin/cmake

# The command to remove a file.
RM = /opt/cmake-3.17.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/imachi/work_space/git_workspace/std_string_wapper

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/imachi/work_space/git_workspace/std_string_wapper/build

# Include any dependencies generated for this target.
include src/CMakeFiles/string_editor.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/string_editor.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/string_editor.dir/flags.make

src/CMakeFiles/string_editor.dir/string_editor.cpp.o: src/CMakeFiles/string_editor.dir/flags.make
src/CMakeFiles/string_editor.dir/string_editor.cpp.o: ../src/string_editor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/imachi/work_space/git_workspace/std_string_wapper/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/string_editor.dir/string_editor.cpp.o"
	cd /home/imachi/work_space/git_workspace/std_string_wapper/build/src && /opt/llvm.gcc/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/string_editor.dir/string_editor.cpp.o -c /home/imachi/work_space/git_workspace/std_string_wapper/src/string_editor.cpp

src/CMakeFiles/string_editor.dir/string_editor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/string_editor.dir/string_editor.cpp.i"
	cd /home/imachi/work_space/git_workspace/std_string_wapper/build/src && /opt/llvm.gcc/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/imachi/work_space/git_workspace/std_string_wapper/src/string_editor.cpp > CMakeFiles/string_editor.dir/string_editor.cpp.i

src/CMakeFiles/string_editor.dir/string_editor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/string_editor.dir/string_editor.cpp.s"
	cd /home/imachi/work_space/git_workspace/std_string_wapper/build/src && /opt/llvm.gcc/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/imachi/work_space/git_workspace/std_string_wapper/src/string_editor.cpp -o CMakeFiles/string_editor.dir/string_editor.cpp.s

# Object files for target string_editor
string_editor_OBJECTS = \
"CMakeFiles/string_editor.dir/string_editor.cpp.o"

# External object files for target string_editor
string_editor_EXTERNAL_OBJECTS =

src/libstring_editor.a: src/CMakeFiles/string_editor.dir/string_editor.cpp.o
src/libstring_editor.a: src/CMakeFiles/string_editor.dir/build.make
src/libstring_editor.a: src/CMakeFiles/string_editor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/imachi/work_space/git_workspace/std_string_wapper/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libstring_editor.a"
	cd /home/imachi/work_space/git_workspace/std_string_wapper/build/src && $(CMAKE_COMMAND) -P CMakeFiles/string_editor.dir/cmake_clean_target.cmake
	cd /home/imachi/work_space/git_workspace/std_string_wapper/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/string_editor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/string_editor.dir/build: src/libstring_editor.a

.PHONY : src/CMakeFiles/string_editor.dir/build

src/CMakeFiles/string_editor.dir/clean:
	cd /home/imachi/work_space/git_workspace/std_string_wapper/build/src && $(CMAKE_COMMAND) -P CMakeFiles/string_editor.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/string_editor.dir/clean

src/CMakeFiles/string_editor.dir/depend:
	cd /home/imachi/work_space/git_workspace/std_string_wapper/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/imachi/work_space/git_workspace/std_string_wapper /home/imachi/work_space/git_workspace/std_string_wapper/src /home/imachi/work_space/git_workspace/std_string_wapper/build /home/imachi/work_space/git_workspace/std_string_wapper/build/src /home/imachi/work_space/git_workspace/std_string_wapper/build/src/CMakeFiles/string_editor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/string_editor.dir/depend

