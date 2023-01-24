cmake_minimum_required(VERSION 3.5)

project(EyesInDlib LANGUAGES CXX)

find_package(dlib REQUIRED)
find_package(OpenCV REQUIRED)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${dlib_INCLUDE_DIRS})
include_directories(${OpenCV_INCLUDE_DIRS})
add_executable(EyesInDlib

    main.cpp
)

target_link_libraries( EyesInDlib  ${dlib_LIBS}  ${OpenCV_LIBS} )
target_link_libraries(${PROJECT_NAME}  private "-framework ApplicationServices" )

install(TARGETS EyesInDlib
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
