cmake_minimum_required(VERSION 3.26)
project(GameEngine LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 23)

add_subdirectory(engine)
add_subdirectory(app)