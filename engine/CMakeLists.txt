cmake_minimum_required(VERSION 3.26)
include(loadDependencies.cmake)

add_library(Engine
        ${CMAKE_CURRENT_SOURCE_DIR}/src/core/application.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/core/application.h
        ${CMAKE_CURRENT_SOURCE_DIR}/src/platform/factory.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/platform/glfw/glfwFactory.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/platform/glfw/glfwWindow.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/platform/glfw/glfwInput.cpp
)

target_link_libraries(Engine PRIVATE glfw)
target_include_directories(Engine PRIVATE ${glfw3_SOURCE_DIR}/include ${CMAKE_CURRENT_SOURCE_DIR}/src)
target_compile_definitions(Engine PRIVATE USE_GLFW)