#include "rendererFactory.h"
#include "platform/opengl/openglFactory.h"

void Engine::RendererFactory::initialise() {
#ifdef USE_OPENGL
    s_instance = std::make_unique<Engine::OpenglFactory>();
#else
    #error "Renderer API not defined"
#endif
}

void Engine::RendererFactory::terminate() {
    s_instance.reset();
}

std::unique_ptr<Engine::RendererFactory> & Engine::RendererFactory::getInstance() {
    return s_instance;
}

std::unique_ptr<Engine::RendererFactory> Engine::RendererFactory::s_instance;