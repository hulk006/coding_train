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
CMAKE_SOURCE_DIR = /home/yh/CLionProjects/englishCharacter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yh/CLionProjects/englishCharacter/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/englishCharacter.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/englishCharacter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/englishCharacter.dir/flags.make

CMakeFiles/englishCharacter.dir/main.cpp.o: CMakeFiles/englishCharacter.dir/flags.make
CMakeFiles/englishCharacter.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yh/CLionProjects/englishCharacter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/englishCharacter.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/englishCharacter.dir/main.cpp.o -c /home/yh/CLionProjects/englishCharacter/main.cpp

CMakeFiles/englishCharacter.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/englishCharacter.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yh/CLionProjects/englishCharacter/main.cpp > CMakeFiles/englishCharacter.dir/main.cpp.i

CMakeFiles/englishCharacter.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/englishCharacter.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yh/CLionProjects/englishCharacter/main.cpp -o CMakeFiles/englishCharacter.dir/main.cpp.s

CMakeFiles/englishCharacter.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/englishCharacter.dir/main.cpp.o.requires

CMakeFiles/englishCharacter.dir/main.cpp.o.provides: CMakeFiles/englishCharacter.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/englishCharacter.dir/build.make CMakeFiles/englishCharacter.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/englishCharacter.dir/main.cpp.o.provides

CMakeFiles/englishCharacter.dir/main.cpp.o.provides.build: CMakeFiles/englishCharacter.dir/main.cpp.o


# Object files for target englishCharacter
englishCharacter_OBJECTS = \
"CMakeFiles/englishCharacter.dir/main.cpp.o"

# External object files for target englishCharacter
englishCharacter_EXTERNAL_OBJECTS =

englishCharacter: CMakeFiles/englishCharacter.dir/main.cpp.o
englishCharacter: CMakeFiles/englishCharacter.dir/build.make
englishCharacter: CMakeFiles/englishCharacter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yh/CLionProjects/englishCharacter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable englishCharacter"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/englishCharacter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/englishCharacter.dir/build: englishCharacter

.PHONY : CMakeFiles/englishCharacter.dir/build

CMakeFiles/englishCharacter.dir/requires: CMakeFiles/englishCharacter.dir/main.cpp.o.requires

.PHONY : CMakeFiles/englishCharacter.dir/requires

CMakeFiles/englishCharacter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/englishCharacter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/englishCharacter.dir/clean

CMakeFiles/englishCharacter.dir/depend:
	cd /home/yh/CLionProjects/englishCharacter/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yh/CLionProjects/englishCharacter /home/yh/CLionProjects/englishCharacter /home/yh/CLionProjects/englishCharacter/cmake-build-debug /home/yh/CLionProjects/englishCharacter/cmake-build-debug /home/yh/CLionProjects/englishCharacter/cmake-build-debug/CMakeFiles/englishCharacter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/englishCharacter.dir/depend

