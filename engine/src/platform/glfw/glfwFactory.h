#ifndef GAME_ENGINE_GLFW_FACTORY_H
#define GAME_ENGINE_GLFW_FACTORY_H

#include "platform/factory.h"

namespace Engine {
    class GlfwFactory : public Factory {
    public:
        virtual std::unique_ptr<Window> createWindow() override;
    };
}

#endif //GAME_ENGINE_GLFW_FACTORY_H