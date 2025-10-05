#ifndef GAME_ENGINE_GLFW_WINDOW_H
#define GAME_ENGINE_GLFW_WINDOW_H

#include "core/window.h"

#include <GLFW/glfw3.h>

namespace Engine {
    class GlfwWindow : public Window{
    public:
        void create() override;
        void destroy() override;
        [[nodiscard]] bool shouldClose() const override;
        void swapBuffers() override;
        void* getNativeWindow() override;

    private:
        GLFWwindow* m_handle = nullptr;
    };
}


#endif //GAME_ENGINE_GLFW_WINDOW_H