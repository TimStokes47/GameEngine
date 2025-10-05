cmake_minimum_required(VERSION 3.26)

add_library(Engine
        ${CMAKE_CURRENT_SOURCE_DIR}/src/core/application.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/src/core/application.h)