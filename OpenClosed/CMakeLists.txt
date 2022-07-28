cmake_minimum_required(VERSION 3.14)

project(OpenClosed LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(OpenClosed
  main.cpp
  Interfaces/iBrew.h
  shop.h
  shop.cpp
  coffeemachine.cpp
  coffeemachine.h
  caffinator3000.cpp
  caffinator3000.h
)
target_link_libraries(OpenClosed Qt${QT_VERSION_MAJOR}::Core)
