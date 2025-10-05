#include "application.h"
#include "core/window.h"
#include "platform/factory.h"
#include <iostream>

void Engine::Application::run() {
    Engine::Factory::create();
    std::cout << "Factory created" << std::endl;
    std::unique_ptr<Window> window = std::move(Engine::Factory::getInstance()->createWindow());
    std::cout << (window == nullptr) << std::endl;
    window->create();
    while (!window->shouldClose()) {
        window->swapBuffers();
    }
    window->destroy();
}
