# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/eigen"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/eigen-build"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/tmp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/src/eigen-populate-stamp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/src"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/src/eigen-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/src/eigen-populate-stamp/${subDir}")
endforeach()
