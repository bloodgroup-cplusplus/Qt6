cmake_minimum_required(VERSION 3.14)

project(InterfaceSegregation LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(InterfaceSegregation
  main.cpp
  Interfaces/iBad.h
  Interfaces/iFlying.h
  Interfaces/iMachine.h
  airplane.cpp
  airplane.h
  helicopter.cpp
  helicopter.h
  bird.h
  bird.cpp
)
target_link_libraries(InterfaceSegregation Qt${QT_VERSION_MAJOR}::Core)

install(TARGETS InterfaceSegregation
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
