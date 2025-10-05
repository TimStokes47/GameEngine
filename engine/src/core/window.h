#ifndef GAME_ENGINE_WINDOW_H
#define GAME_ENGINE_WINDOW_H

class Window {
public:
    virtual ~Window() = default;

    virtual void create() = 0;
    virtual void destroy() = 0;

    virtual bool shouldClose() const = 0;
    virtual void swapBuffers() = 0;
};

#endif //GAME_ENGINE_WINDOW_H