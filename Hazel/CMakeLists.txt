add_library(
    Hazel 
    src/hzpch.h
    src/hzpch.cpp

    src/Platform/Windows/WindowsWindow.cpp
    src/Platform/Windows/WindowsInput.cpp

    
    src/Hazel/ImGui/ImGuiLayer.cpp
    src/Hazel/ImGui/ImGuiBuild.cpp


    src/Hazel/Application.cpp
    src/Hazel/EntryPoint.h
    src/Hazel/Log.cpp  
    src/Hazel/Layer.cpp
    src/Hazel/LayerStack.cpp

    src/Platform/OpenGL/OpenGLContext.cpp
    src/Platform/OpenGL/OpenGLBuffer.cpp

    
    src/Hazel/Renderer/Shader.cpp
    src/Hazel/Renderer/Buffer.cpp
    src/Hazel/Renderer/Renderer.cpp


    )

add_compile_definitions(GLFW_INCLUDE_NONE)

target_link_libraries( Hazel PUBLIC spdlog::spdlog)
target_link_libraries( Hazel PUBLIC glad )
target_link_libraries( Hazel PUBLIC glfw )
target_link_libraries( Hazel PUBLIC imgui )



target_include_directories( Hazel PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src" )

# ${CMAKE_DL_LIBS}