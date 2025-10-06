#ifndef GAME_ENGINE_RENDERER_H
#define GAME_ENGINE_RENDERER_H

#include <memory>

namespace Engine {
    class RendererAPI;

    class Renderer {
    public:
        static void initialise();
        static void terminate();

    private:
        static std::unique_ptr<RendererAPI> s_api;
    };
}

#endif //GAME_ENGINE_RENDERER_H