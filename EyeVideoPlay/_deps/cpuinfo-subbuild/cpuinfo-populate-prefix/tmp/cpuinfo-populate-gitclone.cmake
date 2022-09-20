# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

if(EXISTS "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/cpuinfo-subbuild/cpuinfo-populate-prefix/src/cpuinfo-populate-stamp/cpuinfo-populate-gitclone-lastrun.txt" AND EXISTS "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/cpuinfo-subbuild/cpuinfo-populate-prefix/src/cpuinfo-populate-stamp/cpuinfo-populate-gitinfo.txt" AND
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/cpuinfo-subbuild/cpuinfo-populate-prefix/src/cpuinfo-populate-stamp/cpuinfo-populate-gitclone-lastrun.txt" IS_NEWER_THAN "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/cpuinfo-subbuild/cpuinfo-populate-prefix/src/cpuinfo-populate-stamp/cpuinfo-populate-gitinfo.txt")
  message(STATUS
    "Avoiding repeated git clone, stamp file is up to date: "
    "'/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/cpuinfo-subbuild/cpuinfo-populate-prefix/src/cpuinfo-populate-stamp/cpuinfo-populate-gitclone-lastrun.txt'"
  )
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/cpuinfo"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/cpuinfo'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git" 
            clone --no-checkout --progress --config "advice.detachedHead=false" "https://github.com/pytorch/cpuinfo" "cpuinfo"
    WORKING_DIRECTORY "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay"
    RESULT_VARIABLE error_code
  )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once: ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/pytorch/cpuinfo'")
endif()

execute_process(
  COMMAND "/usr/bin/git" 
          checkout "5e63739504f0f8e18e941bd63b2d6d42536c7d90" --
  WORKING_DIRECTORY "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/cpuinfo"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: '5e63739504f0f8e18e941bd63b2d6d42536c7d90'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git" 
            submodule update --recursive --init 
    WORKING_DIRECTORY "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/cpuinfo"
    RESULT_VARIABLE error_code
  )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/cpuinfo'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/cpuinfo-subbuild/cpuinfo-populate-prefix/src/cpuinfo-populate-stamp/cpuinfo-populate-gitinfo.txt" "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/cpuinfo-subbuild/cpuinfo-populate-prefix/src/cpuinfo-populate-stamp/cpuinfo-populate-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/cpuinfo-subbuild/cpuinfo-populate-prefix/src/cpuinfo-populate-stamp/cpuinfo-populate-gitclone-lastrun.txt'")
endif()
