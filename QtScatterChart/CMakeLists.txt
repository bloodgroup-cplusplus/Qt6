cmake_minimum_required(VERSION 3.16)

project(QtScatterChart VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 COMPONENTS Quick REQUIRED)
find_package(Qt6 6.2 COMPONENTS Widgets REQUIRED)

qt_add_executable(appQtScatterChart
    main.cpp
)

qt_add_qml_module(appQtScatterChart
    URI QtScatterChart
    VERSION 1.0
    QML_FILES main.qml 
)

set_target_properties(appQtScatterChart PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appQtScatterChart
    PRIVATE Qt6::Quick)

target_link_libraries(appQtScatterChart PRIVATE Qt6::Widgets)

install(TARGETS appQtScatterChart
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
