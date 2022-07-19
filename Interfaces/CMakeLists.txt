cmake_minimum_required(VERSION 3.2)

project(Interfaces LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(Interfaces
  main.cpp
  Freezer.h
  Microwave.h
  Toaster.h
  appliance.h
  appliance.cpp
)
target_link_libraries(Interfaces Qt${QT_VERSION_MAJOR}::Core)
