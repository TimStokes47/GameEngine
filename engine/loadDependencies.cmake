# Code in this file taken from TheCherno (https://github.com/TheCherno/Architecture)

include(FetchContent)

# GLFW
find_package(glfw3 3.4 QUIET)
if (NOT glfw3_FOUND)
    FetchContent_Declare(
            glfw3
            DOWNLOAD_EXTRACT_TIMESTAMP OFF
            URL https://github.com/glfw/glfw/releases/download/3.4/glfw-3.4.zip
    )
    FetchContent_GetProperties(glfw3)
    if (NOT glfw3_POPULATED)
        set(FETCHCONTENT_QUIET NO)
        FetchContent_Populate(glfw3)
        add_subdirectory(${glfw3_SOURCE_DIR} ${glfw3_BINARY_DIR})
    endif()
endif()