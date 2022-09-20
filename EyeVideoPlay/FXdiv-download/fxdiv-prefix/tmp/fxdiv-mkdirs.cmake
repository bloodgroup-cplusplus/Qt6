# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/FXdiv-source"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/FXdiv"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/FXdiv-download/fxdiv-prefix"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/FXdiv-download/fxdiv-prefix/tmp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/FXdiv-download/fxdiv-prefix/src/fxdiv-stamp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/FXdiv-download/fxdiv-prefix/src"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/FXdiv-download/fxdiv-prefix/src/fxdiv-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/FXdiv-download/fxdiv-prefix/src/fxdiv-stamp/${subDir}")
endforeach()
