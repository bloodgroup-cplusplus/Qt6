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
CMAKE_SOURCE_DIR = /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild

# Utility rule file for gemmlowp-populate.

# Include any custom commands dependencies for this target.
include CMakeFiles/gemmlowp-populate.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/gemmlowp-populate.dir/progress.make

CMakeFiles/gemmlowp-populate: CMakeFiles/gemmlowp-populate-complete

CMakeFiles/gemmlowp-populate-complete: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-install
CMakeFiles/gemmlowp-populate-complete: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-mkdir
CMakeFiles/gemmlowp-populate-complete: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-download
CMakeFiles/gemmlowp-populate-complete: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-update
CMakeFiles/gemmlowp-populate-complete: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-patch
CMakeFiles/gemmlowp-populate-complete: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-configure
CMakeFiles/gemmlowp-populate-complete: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-build
CMakeFiles/gemmlowp-populate-complete: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-install
CMakeFiles/gemmlowp-populate-complete: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-test
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'gemmlowp-populate'"
	/opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -E make_directory /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/CMakeFiles
	/opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -E touch /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/CMakeFiles/gemmlowp-populate-complete
	/opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -E touch /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-done

gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-update:
.PHONY : gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-update

gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-build: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No build step for 'gemmlowp-populate'"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-build && /opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -E echo_append
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-build && /opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -E touch /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-build

gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-configure: gemmlowp-populate-prefix/tmp/gemmlowp-populate-cfgcmd.txt
gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-configure: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "No configure step for 'gemmlowp-populate'"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-build && /opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -E echo_append
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-build && /opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -E touch /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-configure

gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-download: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-gitinfo.txt
gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-download: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'gemmlowp-populate'"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay && /opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -P /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/gemmlowp-populate-prefix/tmp/gemmlowp-populate-gitclone.cmake
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay && /opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -E touch /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-download

gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-install: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No install step for 'gemmlowp-populate'"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-build && /opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -E echo_append
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-build && /opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -E touch /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-install

gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'gemmlowp-populate'"
	/opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -P /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/gemmlowp-populate-prefix/tmp/gemmlowp-populate-mkdirs.cmake
	/opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -E touch /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-mkdir

gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-patch: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-update
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'gemmlowp-populate'"
	/opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -E echo_append
	/opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -E touch /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-patch

gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-update:
.PHONY : gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-update

gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-test: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No test step for 'gemmlowp-populate'"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-build && /opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -E echo_append
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-build && /opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -E touch /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-test

gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-update: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Performing update step for 'gemmlowp-populate'"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/gemmlowp && /opt/homebrew/Cellar/cmake/3.23.2/bin/cmake -P /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/gemmlowp-populate-prefix/tmp/gemmlowp-populate-gitupdate.cmake

gemmlowp-populate: CMakeFiles/gemmlowp-populate
gemmlowp-populate: CMakeFiles/gemmlowp-populate-complete
gemmlowp-populate: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-build
gemmlowp-populate: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-configure
gemmlowp-populate: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-download
gemmlowp-populate: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-install
gemmlowp-populate: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-mkdir
gemmlowp-populate: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-patch
gemmlowp-populate: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-test
gemmlowp-populate: gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/gemmlowp-populate-update
gemmlowp-populate: CMakeFiles/gemmlowp-populate.dir/build.make
.PHONY : gemmlowp-populate

# Rule to build all files generated by this target.
CMakeFiles/gemmlowp-populate.dir/build: gemmlowp-populate
.PHONY : CMakeFiles/gemmlowp-populate.dir/build

CMakeFiles/gemmlowp-populate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gemmlowp-populate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gemmlowp-populate.dir/clean

CMakeFiles/gemmlowp-populate.dir/depend:
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/CMakeFiles/gemmlowp-populate.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gemmlowp-populate.dir/depend

