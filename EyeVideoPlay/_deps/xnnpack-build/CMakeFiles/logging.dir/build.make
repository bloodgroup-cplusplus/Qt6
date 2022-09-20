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
include _deps/xnnpack-build/CMakeFiles/logging.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include _deps/xnnpack-build/CMakeFiles/logging.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/xnnpack-build/CMakeFiles/logging.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/xnnpack-build/CMakeFiles/logging.dir/flags.make

_deps/xnnpack-build/CMakeFiles/logging.dir/src/datatype-strings.c.o: _deps/xnnpack-build/CMakeFiles/logging.dir/flags.make
_deps/xnnpack-build/CMakeFiles/logging.dir/src/datatype-strings.c.o: xnnpack/src/datatype-strings.c
_deps/xnnpack-build/CMakeFiles/logging.dir/src/datatype-strings.c.o: _deps/xnnpack-build/CMakeFiles/logging.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object _deps/xnnpack-build/CMakeFiles/logging.dir/src/datatype-strings.c.o"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/xnnpack-build/CMakeFiles/logging.dir/src/datatype-strings.c.o -MF CMakeFiles/logging.dir/src/datatype-strings.c.o.d -o CMakeFiles/logging.dir/src/datatype-strings.c.o -c /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack/src/datatype-strings.c

_deps/xnnpack-build/CMakeFiles/logging.dir/src/datatype-strings.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/logging.dir/src/datatype-strings.c.i"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack/src/datatype-strings.c > CMakeFiles/logging.dir/src/datatype-strings.c.i

_deps/xnnpack-build/CMakeFiles/logging.dir/src/datatype-strings.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/logging.dir/src/datatype-strings.c.s"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack/src/datatype-strings.c -o CMakeFiles/logging.dir/src/datatype-strings.c.s

_deps/xnnpack-build/CMakeFiles/logging.dir/src/node-type.c.o: _deps/xnnpack-build/CMakeFiles/logging.dir/flags.make
_deps/xnnpack-build/CMakeFiles/logging.dir/src/node-type.c.o: xnnpack/src/node-type.c
_deps/xnnpack-build/CMakeFiles/logging.dir/src/node-type.c.o: _deps/xnnpack-build/CMakeFiles/logging.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object _deps/xnnpack-build/CMakeFiles/logging.dir/src/node-type.c.o"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/xnnpack-build/CMakeFiles/logging.dir/src/node-type.c.o -MF CMakeFiles/logging.dir/src/node-type.c.o.d -o CMakeFiles/logging.dir/src/node-type.c.o -c /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack/src/node-type.c

_deps/xnnpack-build/CMakeFiles/logging.dir/src/node-type.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/logging.dir/src/node-type.c.i"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack/src/node-type.c > CMakeFiles/logging.dir/src/node-type.c.i

_deps/xnnpack-build/CMakeFiles/logging.dir/src/node-type.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/logging.dir/src/node-type.c.s"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack/src/node-type.c -o CMakeFiles/logging.dir/src/node-type.c.s

_deps/xnnpack-build/CMakeFiles/logging.dir/src/operator-strings.c.o: _deps/xnnpack-build/CMakeFiles/logging.dir/flags.make
_deps/xnnpack-build/CMakeFiles/logging.dir/src/operator-strings.c.o: xnnpack/src/operator-strings.c
_deps/xnnpack-build/CMakeFiles/logging.dir/src/operator-strings.c.o: _deps/xnnpack-build/CMakeFiles/logging.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object _deps/xnnpack-build/CMakeFiles/logging.dir/src/operator-strings.c.o"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/xnnpack-build/CMakeFiles/logging.dir/src/operator-strings.c.o -MF CMakeFiles/logging.dir/src/operator-strings.c.o.d -o CMakeFiles/logging.dir/src/operator-strings.c.o -c /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack/src/operator-strings.c

_deps/xnnpack-build/CMakeFiles/logging.dir/src/operator-strings.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/logging.dir/src/operator-strings.c.i"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack/src/operator-strings.c > CMakeFiles/logging.dir/src/operator-strings.c.i

_deps/xnnpack-build/CMakeFiles/logging.dir/src/operator-strings.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/logging.dir/src/operator-strings.c.s"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack/src/operator-strings.c -o CMakeFiles/logging.dir/src/operator-strings.c.s

_deps/xnnpack-build/CMakeFiles/logging.dir/src/ukernel-strings.c.o: _deps/xnnpack-build/CMakeFiles/logging.dir/flags.make
_deps/xnnpack-build/CMakeFiles/logging.dir/src/ukernel-strings.c.o: xnnpack/src/ukernel-strings.c
_deps/xnnpack-build/CMakeFiles/logging.dir/src/ukernel-strings.c.o: _deps/xnnpack-build/CMakeFiles/logging.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object _deps/xnnpack-build/CMakeFiles/logging.dir/src/ukernel-strings.c.o"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT _deps/xnnpack-build/CMakeFiles/logging.dir/src/ukernel-strings.c.o -MF CMakeFiles/logging.dir/src/ukernel-strings.c.o.d -o CMakeFiles/logging.dir/src/ukernel-strings.c.o -c /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack/src/ukernel-strings.c

_deps/xnnpack-build/CMakeFiles/logging.dir/src/ukernel-strings.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/logging.dir/src/ukernel-strings.c.i"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack/src/ukernel-strings.c > CMakeFiles/logging.dir/src/ukernel-strings.c.i

_deps/xnnpack-build/CMakeFiles/logging.dir/src/ukernel-strings.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/logging.dir/src/ukernel-strings.c.s"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build && /Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack/src/ukernel-strings.c -o CMakeFiles/logging.dir/src/ukernel-strings.c.s

logging: _deps/xnnpack-build/CMakeFiles/logging.dir/src/datatype-strings.c.o
logging: _deps/xnnpack-build/CMakeFiles/logging.dir/src/node-type.c.o
logging: _deps/xnnpack-build/CMakeFiles/logging.dir/src/operator-strings.c.o
logging: _deps/xnnpack-build/CMakeFiles/logging.dir/src/ukernel-strings.c.o
logging: _deps/xnnpack-build/CMakeFiles/logging.dir/build.make
.PHONY : logging

# Rule to build all files generated by this target.
_deps/xnnpack-build/CMakeFiles/logging.dir/build: logging
.PHONY : _deps/xnnpack-build/CMakeFiles/logging.dir/build

_deps/xnnpack-build/CMakeFiles/logging.dir/clean:
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build && $(CMAKE_COMMAND) -P CMakeFiles/logging.dir/cmake_clean.cmake
.PHONY : _deps/xnnpack-build/CMakeFiles/logging.dir/clean

_deps/xnnpack-build/CMakeFiles/logging.dir/depend:
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/examples/minimal /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack /Users/bhushansharma/Programs/Qt6/EyeVideoPlay /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/xnnpack-build/CMakeFiles/logging.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : _deps/xnnpack-build/CMakeFiles/logging.dir/depend
