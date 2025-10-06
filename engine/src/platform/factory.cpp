#include "factory.h"
#include "glfw/glfwFactory.h"

#ifdef USE_GLFW
void Engine::Factory::initialise() {
    s_instance = std::make_unique<GlfwFactory>();
}
#else
#error "Platform is not defined"
#endif

void Engine::Factory::terminate() {
    s_instance.reset();
}

std::unique_ptr<Engine::Factory> & Engine::Factory::getInstance() {
    return s_instance;
}

std::unique_ptr<Engine::Factory> Engine::Factory::s_instance;