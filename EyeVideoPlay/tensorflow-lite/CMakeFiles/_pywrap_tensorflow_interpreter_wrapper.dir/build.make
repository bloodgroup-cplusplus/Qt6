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
include tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/compiler_depend.make

# Include the progress variables for this target.
include tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/progress.make

# Include the compile flags for this target's objects.
include tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/flags.make

tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper.cc.o: tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/flags.make
tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper.cc.o: /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/python/interpreter_wrapper/interpreter_wrapper.cc
tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper.cc.o: tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper.cc.o"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/tensorflow-lite && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper.cc.o -MF CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper.cc.o.d -o CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper.cc.o -c /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/python/interpreter_wrapper/interpreter_wrapper.cc

tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper.cc.i"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/tensorflow-lite && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/python/interpreter_wrapper/interpreter_wrapper.cc > CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper.cc.i

tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper.cc.s"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/tensorflow-lite && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/python/interpreter_wrapper/interpreter_wrapper.cc -o CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper.cc.s

tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper_pybind11.cc.o: tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/flags.make
tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper_pybind11.cc.o: /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/python/interpreter_wrapper/interpreter_wrapper_pybind11.cc
tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper_pybind11.cc.o: tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper_pybind11.cc.o"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/tensorflow-lite && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper_pybind11.cc.o -MF CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper_pybind11.cc.o.d -o CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper_pybind11.cc.o -c /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/python/interpreter_wrapper/interpreter_wrapper_pybind11.cc

tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper_pybind11.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper_pybind11.cc.i"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/tensorflow-lite && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/python/interpreter_wrapper/interpreter_wrapper_pybind11.cc > CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper_pybind11.cc.i

tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper_pybind11.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper_pybind11.cc.s"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/tensorflow-lite && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/python/interpreter_wrapper/interpreter_wrapper_pybind11.cc -o CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper_pybind11.cc.s

tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/numpy.cc.o: tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/flags.make
tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/numpy.cc.o: /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/python/interpreter_wrapper/numpy.cc
tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/numpy.cc.o: tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/numpy.cc.o"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/tensorflow-lite && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/numpy.cc.o -MF CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/numpy.cc.o.d -o CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/numpy.cc.o -c /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/python/interpreter_wrapper/numpy.cc

tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/numpy.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/numpy.cc.i"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/tensorflow-lite && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/python/interpreter_wrapper/numpy.cc > CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/numpy.cc.i

tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/numpy.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/numpy.cc.s"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/tensorflow-lite && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/python/interpreter_wrapper/numpy.cc -o CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/numpy.cc.s

tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_error_reporter.cc.o: tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/flags.make
tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_error_reporter.cc.o: /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/python/interpreter_wrapper/python_error_reporter.cc
tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_error_reporter.cc.o: tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_error_reporter.cc.o"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/tensorflow-lite && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_error_reporter.cc.o -MF CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_error_reporter.cc.o.d -o CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_error_reporter.cc.o -c /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/python/interpreter_wrapper/python_error_reporter.cc

tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_error_reporter.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_error_reporter.cc.i"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/tensorflow-lite && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/python/interpreter_wrapper/python_error_reporter.cc > CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_error_reporter.cc.i

tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_error_reporter.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_error_reporter.cc.s"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/tensorflow-lite && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/python/interpreter_wrapper/python_error_reporter.cc -o CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_error_reporter.cc.s

tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_utils.cc.o: tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/flags.make
tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_utils.cc.o: /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/python/interpreter_wrapper/python_utils.cc
tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_utils.cc.o: tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_utils.cc.o"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/tensorflow-lite && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_utils.cc.o -MF CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_utils.cc.o.d -o CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_utils.cc.o -c /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/python/interpreter_wrapper/python_utils.cc

tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_utils.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_utils.cc.i"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/tensorflow-lite && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/python/interpreter_wrapper/python_utils.cc > CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_utils.cc.i

tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_utils.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_utils.cc.s"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/tensorflow-lite && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/python/interpreter_wrapper/python_utils.cc -o CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_utils.cc.s

# Object files for target _pywrap_tensorflow_interpreter_wrapper
_pywrap_tensorflow_interpreter_wrapper_OBJECTS = \
"CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper.cc.o" \
"CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper_pybind11.cc.o" \
"CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/numpy.cc.o" \
"CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_error_reporter.cc.o" \
"CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_utils.cc.o"

# External object files for target _pywrap_tensorflow_interpreter_wrapper
_pywrap_tensorflow_interpreter_wrapper_EXTERNAL_OBJECTS =

tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper.cc.o
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/interpreter_wrapper_pybind11.cc.o
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/numpy.cc.o
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_error_reporter.cc.o
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/python/interpreter_wrapper/python_utils.cc.o
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/build.make
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: tensorflow-lite/libtensorflow-lite.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/flags/libabsl_flags.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/flags/libabsl_flags_internal.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/flags/libabsl_flags_marshalling.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/flags/libabsl_flags_reflection.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/flags/libabsl_flags_config.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/flags/libabsl_flags_program_name.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/flags/libabsl_flags_private_handle_accessor.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/flags/libabsl_flags_commandlineflag.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/flags/libabsl_flags_commandlineflag_internal.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/container/libabsl_raw_hash_set.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/container/libabsl_hashtablez_sampler.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/hash/libabsl_hash.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/hash/libabsl_city.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/hash/libabsl_low_level_hash.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/status/libabsl_status.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/strings/libabsl_cord.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/types/libabsl_bad_optional_access.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/strings/libabsl_cordz_info.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/strings/libabsl_cord_internal.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/strings/libabsl_cordz_functions.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/profiling/libabsl_exponential_biased.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/strings/libabsl_cordz_handle.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/strings/libabsl_str_format_internal.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/base/libabsl_strerror.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/synchronization/libabsl_synchronization.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/debugging/libabsl_stacktrace.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/debugging/libabsl_symbolize.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/debugging/libabsl_debugging_internal.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/debugging/libabsl_demangle_internal.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/synchronization/libabsl_graphcycles_internal.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/base/libabsl_malloc_internal.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/time/libabsl_time.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/strings/libabsl_strings.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/strings/libabsl_strings_internal.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/base/libabsl_throw_delegate.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/base/libabsl_base.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/base/libabsl_spinlock_wait.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/numeric/libabsl_int128.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/time/libabsl_civil_time.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/time/libabsl_time_zone.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/types/libabsl_bad_variant_access.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/base/libabsl_raw_logging_internal.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/abseil-cpp-build/absl/base/libabsl_log_severity.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/farmhash-build/libfarmhash.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/fft2d-build/libfft2d_fftsg2d.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/fft2d-build/libfft2d_fftsg.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/flatbuffers-build/libflatbuffers.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_context_get_ctx.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_context.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_frontend.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_kernel_arm.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_kernel_avx.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_kernel_avx2_fma.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_kernel_avx512.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_apply_multiplier.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_pack_arm.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_pack_avx.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_pack_avx2_fma.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_pack_avx512.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_prepare_packed_matrices.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_trmul.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_ctx.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_allocator.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_prepacked_cache.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_system_aligned_alloc.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_have_built_path_for_avx.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_have_built_path_for_avx2_fma.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_have_built_path_for_avx512.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_thread_pool.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_blocking_counter.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_wait.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_denormal.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_block_map.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_tune.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/libruy_cpuinfo.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/ruy-build/ruy/profiler/libruy_profiler_instrumentation.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/xnnpack-build/libXNNPACK.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: /Library/Developer/CommandLineTools/SDKs/MacOSX12.3.sdk/usr/lib/libm.tbd
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/cpuinfo-build/libcpuinfo.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: _deps/cpuinfo-build/deps/clog/libclog.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: pthreadpool/libpthreadpool.a
tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib: tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library _pywrap_tensorflow_interpreter_wrapper.dylib"
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/tensorflow-lite && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/build: tensorflow-lite/_pywrap_tensorflow_interpreter_wrapper.dylib
.PHONY : tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/build

tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/clean:
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/tensorflow-lite && $(CMAKE_COMMAND) -P CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/cmake_clean.cmake
.PHONY : tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/clean

tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/depend:
	cd /Users/bhushansharma/Programs/Qt6/EyeVideoPlay && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite/examples/minimal /Users/bhushansharma/Programs/tensorflow_src/tensorflow/lite /Users/bhushansharma/Programs/Qt6/EyeVideoPlay /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/tensorflow-lite /Users/bhushansharma/Programs/Qt6/EyeVideoPlay/tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tensorflow-lite/CMakeFiles/_pywrap_tensorflow_interpreter_wrapper.dir/depend
