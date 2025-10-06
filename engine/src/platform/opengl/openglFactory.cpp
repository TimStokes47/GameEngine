//
// Created by nlhx46 on 06/10/2025.
//

#include "openglFactory.h"
#include "platform/opengl/openglRendererAPI.h"

std::unique_ptr<Engine::RendererAPI> Engine::OpenglFactory::createRendererAPI() {
    return std::make_unique<OpenGLRendererAPI>();
}