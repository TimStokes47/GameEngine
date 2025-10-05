#include "glfwFactory.h"
#include "platform/glfw/glfwWindow.h"

std::unique_ptr<Engine::Window> Engine::GlfwFactory::createWindow() {
    return std::make_unique<Engine::GlfwWindow>();
}
