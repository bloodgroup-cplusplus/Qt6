cmake_minimum_required(VERSION 3.14)

project(LiskovSubstitution LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Network)
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(LiskovSubstitution
  main.cpp
  mysocket.cpp
  mysocket.h

)
target_link_libraries(LiskovSubstitution Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(LiskovSubstitution  Qt${QT_VERSION_MAJOR}::Network)


install(TARGETS LiskovSubstitution
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
