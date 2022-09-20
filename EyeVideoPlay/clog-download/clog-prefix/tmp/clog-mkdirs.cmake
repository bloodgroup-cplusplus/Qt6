# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/clog-source"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/clog"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/clog-download/clog-prefix"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/clog-download/clog-prefix/tmp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/clog-download/clog-prefix/src/clog-stamp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/clog-download/clog-prefix/src"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/clog-download/clog-prefix/src/clog-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/clog-download/clog-prefix/src/clog-stamp/${subDir}")
endforeach()
