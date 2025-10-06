#include "application.h"
#include "core/window.h"
#include "core/input.h"
#include "platform/factory.h"
#include "rendering/rendererFactory.h"
#include <iostream>
#include <glad/gl.h>
#include <GLFW/glfw3.h>

#include "rendering/renderer.h"

void Engine::Application::create() {
    s_instance = std::make_unique<Application>();
}

void Engine::Application::destroy() {
    s_instance.reset();
}

std::unique_ptr<Engine::Application> & Engine::Application::getInstance() {
    return s_instance;
}

Engine::Application::Application() {
    Engine::Factory::initialise();
    Engine::RendererFactory::initialise();
    m_window = Engine::Factory::getInstance()->createWindow();
    m_window->create();
    Renderer::initialise();
}

Engine::Application::~Application() {
    m_window->destroy();
    Engine::Factory::terminate();
}

std::unique_ptr<Engine::Window> & Engine::Application::getWindow() {
    return m_window;
}

void Engine::Application::run() {
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    while (!m_window->shouldClose()) {
        glClear(GL_COLOR_BUFFER_BIT);
        m_window->swapBuffers();
        InputHandler::pollEvents();

        if (InputHandler::isInputPressed(KeyCode::KEY_A)) {
            std::cout << "A";
        }
    }
}

std::unique_ptr<Engine::Application> Engine::Application::s_instance;
