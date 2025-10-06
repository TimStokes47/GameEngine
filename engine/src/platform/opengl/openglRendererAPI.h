#ifndef GAMEENGINE_OPENGLRENDERER_H
#define GAMEENGINE_OPENGLRENDERER_H

#include "rendering/rendererAPI.h"

namespace Engine {
    class OpenGLRendererAPI : public RendererAPI {
    public:
        void create() override;
        void destroy() override;
    };
}


#endif //GAMEENGINE_OPENGLRENDERER_H