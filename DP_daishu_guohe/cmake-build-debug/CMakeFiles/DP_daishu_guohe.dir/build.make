# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /home/yh/clion-2017.1.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/yh/clion-2017.1.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yh/CLionProjects/DP_daishu_guohe

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yh/CLionProjects/DP_daishu_guohe/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/DP_daishu_guohe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/DP_daishu_guohe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DP_daishu_guohe.dir/flags.make

CMakeFiles/DP_daishu_guohe.dir/main.cpp.o: CMakeFiles/DP_daishu_guohe.dir/flags.make
CMakeFiles/DP_daishu_guohe.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yh/CLionProjects/DP_daishu_guohe/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DP_daishu_guohe.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/DP_daishu_guohe.dir/main.cpp.o -c /home/yh/CLionProjects/DP_daishu_guohe/main.cpp

CMakeFiles/DP_daishu_guohe.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DP_daishu_guohe.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yh/CLionProjects/DP_daishu_guohe/main.cpp > CMakeFiles/DP_daishu_guohe.dir/main.cpp.i

CMakeFiles/DP_daishu_guohe.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DP_daishu_guohe.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yh/CLionProjects/DP_daishu_guohe/main.cpp -o CMakeFiles/DP_daishu_guohe.dir/main.cpp.s

CMakeFiles/DP_daishu_guohe.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/DP_daishu_guohe.dir/main.cpp.o.requires

CMakeFiles/DP_daishu_guohe.dir/main.cpp.o.provides: CMakeFiles/DP_daishu_guohe.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/DP_daishu_guohe.dir/build.make CMakeFiles/DP_daishu_guohe.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/DP_daishu_guohe.dir/main.cpp.o.provides

CMakeFiles/DP_daishu_guohe.dir/main.cpp.o.provides.build: CMakeFiles/DP_daishu_guohe.dir/main.cpp.o


# Object files for target DP_daishu_guohe
DP_daishu_guohe_OBJECTS = \
"CMakeFiles/DP_daishu_guohe.dir/main.cpp.o"

# External object files for target DP_daishu_guohe
DP_daishu_guohe_EXTERNAL_OBJECTS =

DP_daishu_guohe: CMakeFiles/DP_daishu_guohe.dir/main.cpp.o
DP_daishu_guohe: CMakeFiles/DP_daishu_guohe.dir/build.make
DP_daishu_guohe: CMakeFiles/DP_daishu_guohe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yh/CLionProjects/DP_daishu_guohe/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable DP_daishu_guohe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DP_daishu_guohe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DP_daishu_guohe.dir/build: DP_daishu_guohe

.PHONY : CMakeFiles/DP_daishu_guohe.dir/build

CMakeFiles/DP_daishu_guohe.dir/requires: CMakeFiles/DP_daishu_guohe.dir/main.cpp.o.requires

.PHONY : CMakeFiles/DP_daishu_guohe.dir/requires

CMakeFiles/DP_daishu_guohe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DP_daishu_guohe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DP_daishu_guohe.dir/clean

CMakeFiles/DP_daishu_guohe.dir/depend:
	cd /home/yh/CLionProjects/DP_daishu_guohe/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yh/CLionProjects/DP_daishu_guohe /home/yh/CLionProjects/DP_daishu_guohe /home/yh/CLionProjects/DP_daishu_guohe/cmake-build-debug /home/yh/CLionProjects/DP_daishu_guohe/cmake-build-debug /home/yh/CLionProjects/DP_daishu_guohe/cmake-build-debug/CMakeFiles/DP_daishu_guohe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DP_daishu_guohe.dir/depend

