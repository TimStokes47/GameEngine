#include "factory.h"

#include <iostream>

#include "glfw/glfwFactory.h"

#ifdef USE_GLFW
void Engine::Factory::create() {
    s_instance = std::make_unique<GlfwFactory>();
    std::cout << "GLFW Factory created" << std::endl;
}
#else
#error "Platform is not defined"
#endif

void Engine::Factory::destroy() {
    s_instance.reset();
}

std::unique_ptr<Engine::Factory> & Engine::Factory::getInstance() {
    return s_instance;
}

std::unique_ptr<Engine::Factory> Engine::Factory::s_instance;