# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/ruy"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/ruy-build"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/ruy-subbuild/ruy-populate-prefix"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/ruy-subbuild/ruy-populate-prefix/tmp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/ruy-subbuild/ruy-populate-prefix/src/ruy-populate-stamp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/ruy-subbuild/ruy-populate-prefix/src"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/ruy-subbuild/ruy-populate-prefix/src/ruy-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/ruy-subbuild/ruy-populate-prefix/src/ruy-populate-stamp/${subDir}")
endforeach()
