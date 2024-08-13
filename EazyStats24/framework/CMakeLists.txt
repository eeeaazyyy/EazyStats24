set(APP_NAME eazy_framework)

cmake_minimum_required(VERSION 3.5)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_PREFIX_PATH "C:/Qt/6.6.0/mingw_64")
set(QT_PLUGINS_DIR "C:/Qt/6.6.0/mingw_64/plugins")

set (CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

set(HEADERS eazystatswindow.hpp)
set(SOURCES eazystatswindow.cpp)

add_library(${APP_NAME} SHARED ${SOURCES} ${HEADERS})

target_link_libraries(${APP_NAME} PRIVATE Qt6::Core)
target_link_libraries(${APP_NAME} PRIVATE Qt6::Gui)
target_link_libraries(${APP_NAME} PRIVATE Qt6::Widgets)

install(TARGETS ${APP_NAME}
        RUNTIME DESTINATION ${INSTALL_DIRECTORY} LIBRARY DESTINATION ${INSTALL_DIRECTORY})
