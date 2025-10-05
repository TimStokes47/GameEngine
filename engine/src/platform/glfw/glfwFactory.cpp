#include "glfwFactory.h"

#include <iostream>

#include "platform/glfw/glfwWindow.h"

std::unique_ptr<Window> Engine::GlfwFactory::createWindow() {
    return std::make_unique<GlfwWindow>();
}
