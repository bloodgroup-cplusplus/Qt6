# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/fft2d"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/fft2d-build"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/fft2d-subbuild/fft2d-populate-prefix"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/fft2d-subbuild/fft2d-populate-prefix/tmp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/fft2d-subbuild/fft2d-populate-prefix/src/fft2d-populate-stamp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/fft2d-subbuild/fft2d-populate-prefix/src"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/fft2d-subbuild/fft2d-populate-prefix/src/fft2d-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/_deps/fft2d-subbuild/fft2d-populate-prefix/src/fft2d-populate-stamp/${subDir}")
endforeach()
