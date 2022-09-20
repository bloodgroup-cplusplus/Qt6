# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

if(EXISTS "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/src/xnnpack-populate-stamp/xnnpack-populate-gitclone-lastrun.txt" AND EXISTS "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/src/xnnpack-populate-stamp/xnnpack-populate-gitinfo.txt" AND
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/src/xnnpack-populate-stamp/xnnpack-populate-gitclone-lastrun.txt" IS_NEWER_THAN "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/src/xnnpack-populate-stamp/xnnpack-populate-gitinfo.txt")
  message(STATUS
    "Avoiding repeated git clone, stamp file is up to date: "
    "'/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/src/xnnpack-populate-stamp/xnnpack-populate-gitclone-lastrun.txt'"
  )
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git" 
            clone --no-checkout --progress --config "advice.detachedHead=false" "https://github.com/google/XNNPACK" "xnnpack"
    WORKING_DIRECTORY "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay"
    RESULT_VARIABLE error_code
  )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once: ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/google/XNNPACK'")
endif()

execute_process(
  COMMAND "/usr/bin/git" 
          checkout "8e3d3359f9bec608e09fac1f7054a2a14b1bd73c" --
  WORKING_DIRECTORY "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: '8e3d3359f9bec608e09fac1f7054a2a14b1bd73c'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git" 
            submodule update --recursive --init 
    WORKING_DIRECTORY "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack"
    RESULT_VARIABLE error_code
  )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/xnnpack'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/src/xnnpack-populate-stamp/xnnpack-populate-gitinfo.txt" "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/src/xnnpack-populate-stamp/xnnpack-populate-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/src/xnnpack-populate-stamp/xnnpack-populate-gitclone-lastrun.txt'")
endif()
