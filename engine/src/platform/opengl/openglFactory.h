//
// Created by nlhx46 on 06/10/2025.
//

#ifndef GAMEENGINE_OPENGLFACTORY_H
#define GAMEENGINE_OPENGLFACTORY_H

#include "rendering/rendererFactory.h"

namespace Engine {
    class RendererAPI;

    class OpenglFactory : public RendererFactory {
    public:
        std::unique_ptr<RendererAPI> createRendererAPI() override;
    };
}


#endif //GAMEENGINE_OPENGLFACTORY_H