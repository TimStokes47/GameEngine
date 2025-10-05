#include <core/application.h>

int main() {
    Engine::Application::create();
    Engine::Application::getInstance()->run();
}