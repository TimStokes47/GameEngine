#include "application.h"
#include "core/window.h"
#include "core/input.h"
#include "platform/factory.h"
#include <iostream>

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
    Engine::Factory::create();
    m_window = Engine::Factory::getInstance()->createWindow();
    m_window->create();
}

Engine::Application::~Application() {
    m_window->destroy();
}

std::unique_ptr<Engine::Window> & Engine::Application::getWindow() {
    return m_window;
}

void Engine::Application::run() {
    while (!m_window->shouldClose()) {
        m_window->swapBuffers();
        InputHandler::pollEvents();

        if (InputHandler::isInputPressed(KeyCode::GLFW_KEY_A)) {
            std::cout << "A";
        }
    }
}

std::unique_ptr<Engine::Application> Engine::Application::s_instance;
