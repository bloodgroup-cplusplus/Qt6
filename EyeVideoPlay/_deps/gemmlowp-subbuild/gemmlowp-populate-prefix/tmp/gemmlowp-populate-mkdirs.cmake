# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/gemmlowp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-build"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/gemmlowp-populate-prefix"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/gemmlowp-populate-prefix/tmp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/gemmlowp-populate-prefix/src/gemmlowp-populate-stamp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/gemmlowp-populate-prefix/src"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/gemmlowp-populate-prefix/src/gemmlowp-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/gemmlowp-subbuild/gemmlowp-populate-prefix/src/gemmlowp-populate-stamp/${subDir}")
endforeach()
