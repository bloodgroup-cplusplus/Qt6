# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/pthreadpool-source"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/pthreadpool"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/pthreadpool-download/pthreadpool-prefix"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/pthreadpool-download/pthreadpool-prefix/tmp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/pthreadpool-download/pthreadpool-prefix/src/pthreadpool-stamp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/pthreadpool-download/pthreadpool-prefix/src"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/pthreadpool-download/pthreadpool-prefix/src/pthreadpool-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/pthreadpool-download/pthreadpool-prefix/src/pthreadpool-stamp/${subDir}")
endforeach()
