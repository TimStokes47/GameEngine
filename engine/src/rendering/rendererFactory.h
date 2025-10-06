#ifndef GAMEENGINE_RENDERERFACTORY_H
#define GAMEENGINE_RENDERERFACTORY_H

#include <memory>

namespace Engine {
    class RendererAPI;

    class RendererFactory {
    public:
        virtual ~RendererFactory() = default;

        static void initialise();
        static void terminate();

        static std::unique_ptr<RendererFactory>& getInstance();

        virtual std::unique_ptr<RendererAPI> createRendererAPI() = 0;

    private:
        static std::unique_ptr<RendererFactory> s_instance;
    };
}

#endif //GAMEENGINE_RENDERERFACTORY_H