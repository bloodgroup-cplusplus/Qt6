# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/cpuinfo"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/cpuinfo-build"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/cpuinfo-subbuild/cpuinfo-populate-prefix"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/cpuinfo-subbuild/cpuinfo-populate-prefix/tmp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/cpuinfo-subbuild/cpuinfo-populate-prefix/src/cpuinfo-populate-stamp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/cpuinfo-subbuild/cpuinfo-populate-prefix/src"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/cpuinfo-subbuild/cpuinfo-populate-prefix/src/cpuinfo-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/cpuinfo-subbuild/cpuinfo-populate-prefix/src/cpuinfo-populate-stamp/${subDir}")
endforeach()
