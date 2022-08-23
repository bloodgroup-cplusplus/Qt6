cmake_minimum_required(VERSION 3.5)

project(TryGeneratingMesh LANGUAGES CXX)

find_package(OpenCV REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(TryGeneratingMesh main.cpp)
target_link_libraries( TryGeneratingMesh ${OpenCV_LIBS})

install(TARGETS TryGeneratingMesh
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
