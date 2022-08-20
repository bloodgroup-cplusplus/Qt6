cmake_minimum_required(VERSION 3.16)

project(RestClient_Get_Post VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.2 COMPONENTS Quick REQUIRED)
find_package(Qt6 6.2 COMPONENTS Network REQUIRED)
find_package(Qt6 6.2 COMPONENTS QML REQUIRED)
find_package (Qt6 6.2 COMPONENTS Core REQUIRED)

qt_add_executable(appRestClient_Get_Post
    main.cpp
    restclient.cpp
    restclient.h
)

qt_add_qml_module(appRestClient_Get_Post
    URI RestClient_Get_Post
    VERSION 1.0
    QML_FILES main.qml 
)

set_target_properties(appRestClient_Get_Post PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appRestClient_Get_Post
    PRIVATE Qt6::Quick)
target_link_libraries(appRestClient_Get_Post PRIVATE Qt6::Core)
target_link_libraries(appRestClient_Get_Post PRIVATE Qt6::Network)
target_link_libraries(appRestClient_Get_Post PRIVATE Qt6::Quick)


install(TARGETS appRestClient_Get_Post
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
