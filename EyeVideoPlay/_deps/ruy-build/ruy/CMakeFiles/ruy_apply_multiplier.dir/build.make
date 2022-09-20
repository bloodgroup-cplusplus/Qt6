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
include _deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include _deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/flags.make

_deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/apply_multiplier.cc.o: _deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/flags.make
_deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/apply_multiplier.cc.o: ruy/ruy/apply_multiplier.cc
_deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/apply_multiplier.cc.o: _deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object _deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/apply_multiplier.cc.o"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/ruy-build/ruy && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/apply_multiplier.cc.o -MF CMakeFiles/ruy_apply_multiplier.dir/apply_multiplier.cc.o.d -o CMakeFiles/ruy_apply_multiplier.dir/apply_multiplier.cc.o -c /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/ruy/ruy/apply_multiplier.cc

_deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/apply_multiplier.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ruy_apply_multiplier.dir/apply_multiplier.cc.i"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/ruy-build/ruy && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/ruy/ruy/apply_multiplier.cc > CMakeFiles/ruy_apply_multiplier.dir/apply_multiplier.cc.i

_deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/apply_multiplier.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ruy_apply_multiplier.dir/apply_multiplier.cc.s"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/ruy-build/ruy && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/ruy/ruy/apply_multiplier.cc -o CMakeFiles/ruy_apply_multiplier.dir/apply_multiplier.cc.s

# Object files for target ruy_apply_multiplier
ruy_apply_multiplier_OBJECTS = \
"CMakeFiles/ruy_apply_multiplier.dir/apply_multiplier.cc.o"

# External object files for target ruy_apply_multiplier
ruy_apply_multiplier_EXTERNAL_OBJECTS =

_deps/ruy-build/ruy/libruy_apply_multiplier.a: _deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/apply_multiplier.cc.o
_deps/ruy-build/ruy/libruy_apply_multiplier.a: _deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/build.make
_deps/ruy-build/ruy/libruy_apply_multiplier.a: _deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libruy_apply_multiplier.a"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/ruy-build/ruy && $(CMAKE_COMMAND) -P CMakeFiles/ruy_apply_multiplier.dir/cmake_clean_target.cmake
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/ruy-build/ruy && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ruy_apply_multiplier.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/build: _deps/ruy-build/ruy/libruy_apply_multiplier.a
.PHONY : _deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/build

_deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/clean:
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/ruy-build/ruy && $(CMAKE_COMMAND) -P CMakeFiles/ruy_apply_multiplier.dir/cmake_clean.cmake
.PHONY : _deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/clean

_deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/depend:
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/examples/minimal /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/ruy/ruy /Users/bhushansharma/Programs/Qt6/EyeVideoPlay /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/ruy-build/ruy /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : _deps/ruy-build/ruy/CMakeFiles/ruy_apply_multiplier.dir/depend
