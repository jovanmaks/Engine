#include "../hzpch.h"
#include "Hazel/Application.h"


#include "Hazel/Log.h"


#include <glad/glad.h>   
#include "Hazel/Renderer/Renderer.h"
#include "Input.h"

#include <GLFW/glfw3.h>


namespace Hazel {

#define BIND_EVENT_FN(x) std::bind(&Application::x, this, std::placeholders::_1)

    Application* Application::s_Instance = nullptr;

    



    Application::Application()
        
    {
        HZ_CORE_ASSERT(!s_Instance, "Application already exists!");
		s_Instance = this;

        m_Window = std::unique_ptr<Window>(Window::Create());
        m_Window ->SetEventCallback(BIND_EVENT_FN(OnEvent));

        Renderer::Init();

        m_ImGuiLayer = new ImGuiLayer();
		PushOverlay(m_ImGuiLayer);

      
    }

   

    void Application::PushLayer(Layer* layer)
	{
		m_LayerStack.PushLayer(layer);
	}

	void Application::PushOverlay(Layer* layer)
	{
		m_LayerStack.PushOverlay(layer);
	}



    void Application::OnEvent(Event &e)
    {
        EventDispatcher dispatcher(e);
        dispatcher.Dispatch<WindowCloseEvent>(BIND_EVENT_FN(OnWindowClosed));

        HZ_CORE_TRACE("{0}",e);
        for (auto it = m_LayerStack.end(); it != m_LayerStack.begin(); )
		{
			(*--it)->OnEvent(e);
			if (e.Handled)
				break;
		}
    }

    
  

    void Application::Run()
    {
   
       
        while(m_Running)
        {
         

           float time = (float)glfwGetTime();
			Timestep timestep = time - m_LastFrameTime;
			m_LastFrameTime = time;

            for (Layer* layer : m_LayerStack)
				layer->OnUpdate(timestep);


            m_ImGuiLayer->Begin();

			for (Layer* layer : m_LayerStack)
				layer->OnImGuiRender();
			m_ImGuiLayer->End();

            m_Window->OnUpdate();

            
        }
    }

    bool Application::OnWindowClosed(WindowCloseEvent& e)
    {
        m_Running = false;
        return true;
        
    }


}