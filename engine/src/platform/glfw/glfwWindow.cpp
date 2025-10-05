#include "glfwWindow.h"
#include <iostream>

void Engine::GlfwWindow::create() {
    glfwInit();
    m_handle = glfwCreateWindow(960, 800, "Engine", nullptr, nullptr);
    glfwMakeContextCurrent(m_handle);
}

void Engine::GlfwWindow::destroy() {
    glfwDestroyWindow(m_handle);
    m_handle = nullptr;
}

bool Engine::GlfwWindow::shouldClose() const {
    return glfwWindowShouldClose(m_handle);
}

void Engine::GlfwWindow::swapBuffers() {
    glfwSwapBuffers(m_handle);
    glfwPollEvents();
}
