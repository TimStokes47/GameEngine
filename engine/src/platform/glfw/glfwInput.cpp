#ifdef USE_GLFW

#include "core/input.h"
#include "core/application.h"
#include "core/window.h"

#include <GLFW/glfw3.h>

bool Engine::InputHandler::isInputPressed(Engine::KeyCode key) {
    int inputState = glfwGetKey(static_cast<GLFWwindow*>(Application::getInstance()->getWindow()->getNativeWindow()), static_cast<int>(key));
    return inputState == GLFW_PRESS;
}

void Engine::InputHandler::pollEvents() {
    glfwPollEvents();
}

#endif