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
include _deps/flatbuffers-build/CMakeFiles/flathash.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include _deps/flatbuffers-build/CMakeFiles/flathash.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/flatbuffers-build/CMakeFiles/flathash.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/flatbuffers-build/CMakeFiles/flathash.dir/flags.make

_deps/flatbuffers-build/CMakeFiles/flathash.dir/src/flathash.cpp.o: _deps/flatbuffers-build/CMakeFiles/flathash.dir/flags.make
_deps/flatbuffers-build/CMakeFiles/flathash.dir/src/flathash.cpp.o: flatbuffers/src/flathash.cpp
_deps/flatbuffers-build/CMakeFiles/flathash.dir/src/flathash.cpp.o: _deps/flatbuffers-build/CMakeFiles/flathash.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object _deps/flatbuffers-build/CMakeFiles/flathash.dir/src/flathash.cpp.o"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/flatbuffers-build && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/flatbuffers-build/CMakeFiles/flathash.dir/src/flathash.cpp.o -MF CMakeFiles/flathash.dir/src/flathash.cpp.o.d -o CMakeFiles/flathash.dir/src/flathash.cpp.o -c /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/flatbuffers/src/flathash.cpp

_deps/flatbuffers-build/CMakeFiles/flathash.dir/src/flathash.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/flathash.dir/src/flathash.cpp.i"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/flatbuffers-build && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/flatbuffers/src/flathash.cpp > CMakeFiles/flathash.dir/src/flathash.cpp.i

_deps/flatbuffers-build/CMakeFiles/flathash.dir/src/flathash.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/flathash.dir/src/flathash.cpp.s"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/flatbuffers-build && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/flatbuffers/src/flathash.cpp -o CMakeFiles/flathash.dir/src/flathash.cpp.s

# Object files for target flathash
flathash_OBJECTS = \
"CMakeFiles/flathash.dir/src/flathash.cpp.o"

# External object files for target flathash
flathash_EXTERNAL_OBJECTS =

_deps/flatbuffers-build/flathash: _deps/flatbuffers-build/CMakeFiles/flathash.dir/src/flathash.cpp.o
_deps/flatbuffers-build/flathash: _deps/flatbuffers-build/CMakeFiles/flathash.dir/build.make
_deps/flatbuffers-build/flathash: _deps/flatbuffers-build/CMakeFiles/flathash.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable flathash"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/flatbuffers-build && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/flathash.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/flatbuffers-build/CMakeFiles/flathash.dir/build: _deps/flatbuffers-build/flathash
.PHONY : _deps/flatbuffers-build/CMakeFiles/flathash.dir/build

_deps/flatbuffers-build/CMakeFiles/flathash.dir/clean:
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/flatbuffers-build && $(CMAKE_COMMAND) -P CMakeFiles/flathash.dir/cmake_clean.cmake
.PHONY : _deps/flatbuffers-build/CMakeFiles/flathash.dir/clean

_deps/flatbuffers-build/CMakeFiles/flathash.dir/depend:
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/examples/minimal /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/flatbuffers /Users/bhushansharma/Programs/Qt6/EyeVideoPlay /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/flatbuffers-build /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/flatbuffers-build/CMakeFiles/flathash.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : _deps/flatbuffers-build/CMakeFiles/flathash.dir/depend

