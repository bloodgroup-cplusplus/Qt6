# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/FP16-source"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/FP16"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/FP16-download/fp16-prefix"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/FP16-download/fp16-prefix/tmp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/FP16-download/fp16-prefix/src/fp16-stamp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/FP16-download/fp16-prefix/src"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/FP16-download/fp16-prefix/src/fp16-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/FP16-download/fp16-prefix/src/fp16-stamp/${subDir}")
endforeach()
