set(APP_NAME EazyStats24)

cmake_minimum_required(VERSION 3.5)



set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "C:/Qt/6.6.0/mingw_64")
set(QT_PLUGINS_DIR "C:/Qt/6.6.0/mingw_64/plugins")

find_package(Qt6 COMPONENTS Widgets REQUIRED)

add_subdirectory(framework)

add_executable(${APP_NAME} main.cpp)

target_include_directories( ${APP_NAME} PRIVATE ./framework)

target_link_libraries(${APP_NAME} PRIVATE Qt6::Core)
target_link_libraries(${APP_NAME} PRIVATE Qt6::Gui)
target_link_libraries(${APP_NAME} PRIVATE Qt6::Widgets)

target_link_libraries(${APP_NAME} PRIVATE eazy_framework)

add_custom_command(TARGET EazyStats24 POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_directory
                   ${QT_PLUGINS_DIR}/platforms
                   $<TARGET_FILE_DIR:EazyStats24>/platforms)
add_custom_command(TARGET EazyStats24 POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_if_different
                   $<TARGET_FILE:Qt6::Core> $<TARGET_FILE_DIR:EazyStats24>)
add_custom_command(TARGET EazyStats24 POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_if_different
                   $<TARGET_FILE:Qt6::Gui> $<TARGET_FILE_DIR:EazyStats24>)
add_custom_command(TARGET EazyStats24 POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_if_different
                   $<TARGET_FILE:Qt6::Widgets> $<TARGET_FILE_DIR:EazyStats24>)