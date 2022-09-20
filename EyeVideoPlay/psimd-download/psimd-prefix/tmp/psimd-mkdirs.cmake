# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/psimd-source"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/psimd"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/psimd-download/psimd-prefix"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/psimd-download/psimd-prefix/tmp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/psimd-download/psimd-prefix/src/psimd-stamp"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/psimd-download/psimd-prefix/src"
  "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/psimd-download/psimd-prefix/src/psimd-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/bhushansharma/Programs/Qt6/EyeVideoPlay/psimd-download/psimd-prefix/src/psimd-stamp/${subDir}")
endforeach()
