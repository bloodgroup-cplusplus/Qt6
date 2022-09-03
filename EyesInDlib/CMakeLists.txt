cmake_minimum_required(VERSION 3.5)

project(EyesInDlib LANGUAGES CXX)

find_package(dlib REQUIRED)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${dlib_INCLUDE_DIRS})
add_executable(EyesInDlib
    main.cpp
)

target_link_libraries( EyesInDlib  ${dlib_LIBS})

install(TARGETS EyesInDlib
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
