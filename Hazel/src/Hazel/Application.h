#pragma once 

#include "Core.h"


#include "Hazel/Window.h"
#include "Hazel/LayerStack.h"
#include "Hazel/Events/Event.h"
#include "Hazel/Events/ApplicationEvent.h"





namespace Hazel{
    class Application
    {
        public:
            Application();
            virtual ~Application();

            void Run();

            void OnEvent(Event &e);

            void PushLayer(Layer* layer);
		    void PushOverlay(Layer* layer);


		    inline Window& GetWindow() { return *m_Window; }

		    inline static Application& Get() { return *s_Instance; }

        private:
            static Application* s_Instance;
            bool OnWindowClosed(WindowCloseEvent& e);

            std::unique_ptr<Window> m_Window; 
            bool m_Running = true;
            LayerStack m_LayerStack;

    };

    //To be defined in CLIENT
    Application* CreateApplication();

} // namespace Hazel 