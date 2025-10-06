#ifndef GAME_ENGINE_FACTORY_H
#define GAME_ENGINE_FACTORY_H

#include "core/window.h"

#include <memory>

namespace Engine {
    class Factory {
    public:
        virtual ~Factory() = default;

        static void initialise();
        static void terminate();

        static std::unique_ptr<Factory>& getInstance();

        virtual std::unique_ptr<Window> createWindow() = 0;

    private:
        static std::unique_ptr<Factory> s_instance;
    };
}

#endif //GAME_ENGINE_FACTORY_H