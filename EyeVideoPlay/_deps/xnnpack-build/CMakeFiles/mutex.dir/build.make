# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.23.2/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/examples/minimal

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bhushansharma/Programs/Qt6/EyeVideoPlay

# Include any dependencies generated for this target.
include _deps/xnnpack-build/CMakeFiles/mutex.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include _deps/xnnpack-build/CMakeFiles/mutex.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/xnnpack-build/CMakeFiles/mutex.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/xnnpack-build/CMakeFiles/mutex.dir/flags.make

_deps/xnnpack-build/CMakeFiles/mutex.dir/src/mutex.c.o: _deps/xnnpack-build/CMakeFiles/mutex.dir/flags.make
_deps/xnnpack-build/CMakeFiles/mutex.dir/src/mutex.c.o: xnnpack/src/mutex.c
_deps/xnnpack-build/CMakeFiles/mutex.dir/src/mutex.c.o: _deps/xnnpack-build/CMakeFiles/mutex.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object _deps/xnnpack-build/CMakeFiles/mutex.dir/src/mutex.c.o"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/xnnpack-build/CMakeFiles/mutex.dir/src/mutex.c.o -MF CMakeFiles/mutex.dir/src/mutex.c.o.d -o CMakeFiles/mutex.dir/src/mutex.c.o -c /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack/src/mutex.c

_deps/xnnpack-build/CMakeFiles/mutex.dir/src/mutex.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/mutex.dir/src/mutex.c.i"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack/src/mutex.c > CMakeFiles/mutex.dir/src/mutex.c.i

_deps/xnnpack-build/CMakeFiles/mutex.dir/src/mutex.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/mutex.dir/src/mutex.c.s"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack/src/mutex.c -o CMakeFiles/mutex.dir/src/mutex.c.s

mutex: _deps/xnnpack-build/CMakeFiles/mutex.dir/src/mutex.c.o
mutex: _deps/xnnpack-build/CMakeFiles/mutex.dir/build.make
.PHONY : mutex

# Rule to build all files generated by this target.
_deps/xnnpack-build/CMakeFiles/mutex.dir/build: mutex
.PHONY : _deps/xnnpack-build/CMakeFiles/mutex.dir/build

_deps/xnnpack-build/CMakeFiles/mutex.dir/clean:
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build && $(CMAKE_COMMAND) -P CMakeFiles/mutex.dir/cmake_clean.cmake
.PHONY : _deps/xnnpack-build/CMakeFiles/mutex.dir/clean

_deps/xnnpack-build/CMakeFiles/mutex.dir/depend:
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/examples/minimal /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack /Users/bhushansharma/Programs/Qt6/EyeVideoPlay /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build/CMakeFiles/mutex.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : _deps/xnnpack-build/CMakeFiles/mutex.dir/depend

