# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/flatbuffers"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/flatbuffers-flatc/src/flatbuffers-flatc-build"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/flatbuffers-flatc"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/flatbuffers-flatc/tmp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/flatbuffers-flatc/src/flatbuffers-flatc-stamp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/flatbuffers-flatc/src"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/flatbuffers-flatc/src/flatbuffers-flatc-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/flatbuffers-flatc/src/flatbuffers-flatc-stamp/${subDir}")
endforeach()
