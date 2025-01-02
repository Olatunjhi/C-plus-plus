cmake_minimum_required(VERSION 3.10)
project(createTextAndImage)
find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)
add_executable(createTextAndImage main.cpp)
target_link_libraries(createTextAndImage sfml-system sfml-window sfml-graphics)
add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${CMAKE_SOURCE_DIR}/../resources/fonts/Dosis-Light.ttf
        ${CMAKE_SOURCE_DIR}/../resources/texture/Archer.jpg
        $<TARGET_FILE_DIR:${PROJECT_NAME}>
)
