cmake_minimum_required(VERSION 3.26)

add_executable(App
        ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)

target_include_directories(App PRIVATE ${PROJECT_SOURCE_DIR}/engine/src)
target_link_libraries(App PRIVATE Engine)