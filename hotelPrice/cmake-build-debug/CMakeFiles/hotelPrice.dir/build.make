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
CMAKE_SOURCE_DIR = /home/yh/CLionProjects/hotelPrice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yh/CLionProjects/hotelPrice/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hotelPrice.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hotelPrice.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hotelPrice.dir/flags.make

CMakeFiles/hotelPrice.dir/main.cpp.o: CMakeFiles/hotelPrice.dir/flags.make
CMakeFiles/hotelPrice.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yh/CLionProjects/hotelPrice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hotelPrice.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hotelPrice.dir/main.cpp.o -c /home/yh/CLionProjects/hotelPrice/main.cpp

CMakeFiles/hotelPrice.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hotelPrice.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yh/CLionProjects/hotelPrice/main.cpp > CMakeFiles/hotelPrice.dir/main.cpp.i

CMakeFiles/hotelPrice.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hotelPrice.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yh/CLionProjects/hotelPrice/main.cpp -o CMakeFiles/hotelPrice.dir/main.cpp.s

CMakeFiles/hotelPrice.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/hotelPrice.dir/main.cpp.o.requires

CMakeFiles/hotelPrice.dir/main.cpp.o.provides: CMakeFiles/hotelPrice.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/hotelPrice.dir/build.make CMakeFiles/hotelPrice.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/hotelPrice.dir/main.cpp.o.provides

CMakeFiles/hotelPrice.dir/main.cpp.o.provides.build: CMakeFiles/hotelPrice.dir/main.cpp.o


# Object files for target hotelPrice
hotelPrice_OBJECTS = \
"CMakeFiles/hotelPrice.dir/main.cpp.o"

# External object files for target hotelPrice
hotelPrice_EXTERNAL_OBJECTS =

hotelPrice: CMakeFiles/hotelPrice.dir/main.cpp.o
hotelPrice: CMakeFiles/hotelPrice.dir/build.make
hotelPrice: CMakeFiles/hotelPrice.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yh/CLionProjects/hotelPrice/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hotelPrice"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hotelPrice.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hotelPrice.dir/build: hotelPrice

.PHONY : CMakeFiles/hotelPrice.dir/build

CMakeFiles/hotelPrice.dir/requires: CMakeFiles/hotelPrice.dir/main.cpp.o.requires

.PHONY : CMakeFiles/hotelPrice.dir/requires

CMakeFiles/hotelPrice.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hotelPrice.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hotelPrice.dir/clean

CMakeFiles/hotelPrice.dir/depend:
	cd /home/yh/CLionProjects/hotelPrice/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yh/CLionProjects/hotelPrice /home/yh/CLionProjects/hotelPrice /home/yh/CLionProjects/hotelPrice/cmake-build-debug /home/yh/CLionProjects/hotelPrice/cmake-build-debug /home/yh/CLionProjects/hotelPrice/cmake-build-debug/CMakeFiles/hotelPrice.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hotelPrice.dir/depend
