cmake_minimum_required(VERSION 3.5)
find_library(COCOA_LIBRARY Cocoa)

project(OpenCvEyes LANGUAGES CXX)

find_package( OpenCV REQUIRED)
find_library(COCOA_LIBRARY Cocoa)
find_library(CARBON_LIBRARY Carbon)
find_library(APP_SERVICES_LIBRARY ApplicationServices)
mark_as_advanced(CARBON_LIBRARY
    APP_SERVICES_LIBRARY
    COCOA_LIBRARY)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(EXTRA_LIBS ${CARBON_LIBRARY} ${APP_SERVICES_LIBRARY})

include_directories(${OpenCV_INCLUDE_DIRS})
include_directories(${COCOA_INCLUDE_DIRS})
include_directories(${APP_SERVICES_INCLUDE_DIRS})
add_executable(OpenCvEyes
    main.cpp
    pictureclub.cpp
    pictureclub.h
)

target_link_libraries( OpenCvEyes ${OpenCV_LIBS})
#target_link_libraries(OpenCvEyes "-framework Cocoa")
#target_link_libraries(OpenCvEyes "-framework ApplicationServices")



install(TARGETS OpenCvEyes
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
