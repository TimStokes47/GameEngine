#include "openglRendererAPI.h"
#include "core/application.h"
#include "core/window.h"

#include <glad/gl.h>
#include <glfw/glfw3.h>
#include <print>

void Engine::OpenGLRendererAPI::create() {
    int version = gladLoadGL(glfwGetProcAddress);
    if (version == 0) {
        //std::println("Failed to initialize OpenGL context");
    }

    //std::println("Loaded OpenGL %d.%d\n", GLAD_VERSION_MAJOR(version), GLAD_VERSION_MINOR(version));
}

void Engine::OpenGLRendererAPI::destroy() {
    gladLoaderUnloadGL();
}
