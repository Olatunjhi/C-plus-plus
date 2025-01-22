cmake_minimum_required(VERSION 3.10)
project(animination)
find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)
add_executable(animination functions.cpp main.cpp)
target_link_libraries(animination sfml-system sfml-window sfml-graphics)
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_SOURCE_DIR}/../resources/texture/boxMan.png
        ${CMAKE_SOURCE_DIR}/../resources/texture/paperWallpaper.jpg 
        $<TARGET_FILE_DIR:${PROJECT_NAME}>
)