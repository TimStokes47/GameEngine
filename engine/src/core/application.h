#ifndef ENGINE_APPLICATION_H
#define ENGINE_APPLICATION_H
#include <memory>

namespace Engine {
    class Window;

    class Application {
    public:
        static void create();
        static void destroy();
        static std::unique_ptr<Application>& getInstance();

        Application();
        ~Application();

        std::unique_ptr<Window>& getWindow();
        void run();

    private:
        static std::unique_ptr<Application> s_instance;

        std::unique_ptr<Window> m_window;
    };
}
#endif