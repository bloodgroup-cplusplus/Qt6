cmake_minimum_required(VERSION 3.5)

project(OpenCvEyes LANGUAGES CXX)

find_package( OpenCV REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(OpenCvEyes
    main.cpp
    pictureclub.cpp
    pictureclub.h
)

target_link_libraries( OpenCvEyes ${OpenCV_LIBS})

install(TARGETS OpenCvEyes
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
