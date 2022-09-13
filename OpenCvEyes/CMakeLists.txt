cmake_minimum_required(VERSION 3.5)
find_library(COCOA_LIBRARY Cocoa)

project(OpenCvEyes LANGUAGES CXX)


find_package( OpenCV REQUIRED)
find_library(CORE_FOUNDATION_LIBRARY CoreFoundation)
find_library(COCOA_LIBRARY Cocoa)
find_library(APPLICATION_SERVICES_LIBRARY ApplicationServices)




set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_FIND_FRAMEWORK ON)


include_directories(${OpenCV_INCLUDE_DIRS})
#include_directories(${CORE_FOUNDATION_LIBRARY})
#include_directories(${COCOA_INCLUDE_DIRS})
#include_directories(${APP_SERVICES_INCLUDE_DIRS})
add_executable(OpenCvEyes
    main.cpp
    pictureclub.cpp
    pictureclub.h
)
#add_executable()

target_link_libraries( OpenCvEyes ${OpenCV_LIBS})
target_link_libraries(OpenCvEyes ${COCOA_LIBRARY})
target_link_libraries(OpenCvEyes ${CORE_FOUNDATION})
#target_link_libraries(OpenCvEyes "-framework Cocoa")
#target_link_libraries(OpenCvEyes "-framework ApplicationServices")
target_link_libraries(OpenCvEyes ${APPLICATION_SERVICES_LIBRARY})
#target_link_libraries(${CORE_GRAPHICS})




install(TARGETS OpenCvEyes
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
