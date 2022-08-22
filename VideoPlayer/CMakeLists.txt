cmake_minimum_required(VERSION 3.16)

project(VideoPlayer VERSION 0.1 LANGUAGES CXX)


set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(${/Users/bhushansharma/Programs/Qt6/opencv/build})
link_directories(${/Users/bhushansharma/Programs/Qt6/opencv/build/bin})
find_package(Qt6 6.2 COMPONENTS Quick REQUIRED)
find_package(Qt6 6.2 COMPONENTS Core REQUIRED)
find_package(Qt6 6.2 COMPONENTS Multimedia REQUIRED)

qt_add_executable(appVideoPlayer

    main.cpp
    res.qrc    
)



qt_add_qml_module(appVideoPlayer
    URI VideoPlayer
    VERSION 1.0
    QML_FILES main.qml 
)

set_target_properties(appVideoPlayer PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appVideoPlayer
    PRIVATE Qt6::Quick)
target_link_libraries(appVideoPlayer PRIVATE Qt6::Multimedia)
target_link_libraries(appVideoPlayer   ${/Users/bhushansharma/Programs/Qt6/opencv/build/libs})


install(TARGETS appVideoPlayer
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
