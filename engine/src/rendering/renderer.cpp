#include "renderer.h"
#include "rendererFactory.h"
#include "rendererAPI.h"

void Engine::Renderer::initialise() {
    s_api = RendererFactory::getInstance()->createRendererAPI();
    s_api->create();
}

void Engine::Renderer::terminate() {
    s_api->destroy();
    s_api.reset();
}

std::unique_ptr<Engine::RendererAPI> Engine::Renderer::s_api;