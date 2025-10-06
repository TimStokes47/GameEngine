#ifndef GAME_ENGINE_RENDERER_API_H
#define GAME_ENGINE_RENDERER_API_H

namespace Engine {
    class RendererContext;

    class RendererAPI {
    public:
        virtual ~RendererAPI() = default;

        virtual void create() = 0;
        virtual void destroy() = 0;
    };
}

#endif //GAME_ENGINE_RENDERER_API_H