add_library(
    Hazel 
    src/hzpch.h
    src/hzpch.cpp

    src/Platform/Windows/WindowsWindow.cpp
    src/Platform/Windows/WindowsInput.cpp

    
    src/Hazel/ImGui/ImGuiLayer.cpp
    src/Hazel/ImGui/ImGuiBuild.cpp


    src/Hazel/Core/Application.cpp
    # src/Hazel/EntryPoint.h
    src/Hazel/Core/Log.cpp  
    src/Hazel/Core/Layer.cpp
    src/Hazel/Core/LayerStack.cpp
    src/Hazel/Renderer/OrthographicCameraController.cpp



    src/Platform/OpenGL/OpenGLContext.cpp
    src/Platform/OpenGL/OpenGLBuffer.cpp
    src/Platform/OpenGL/OpenGLVertexArray.cpp
    src/Platform/OpenGL/OpenGLRendererAPI.cpp
    src/Platform/OpenGL/OpenGLShader.cpp
    src/Platform/OpenGL/OpenGLTexture.cpp


    

    
    src/Hazel/Renderer/Shader.cpp
    src/Hazel/Renderer/Buffer.cpp
    src/Hazel/Renderer/Renderer.cpp
    src/Hazel/Renderer/VertexArray.cpp
    src/Hazel/Renderer/RenderCommand.cpp
    src/Hazel/Renderer/RendererAPI.cpp
    src/Hazel/Renderer/OrthographicCamera.cpp
    src/Hazel/Renderer/Texture.cpp

    vendor/stb_image/stb_image.cpp

    )

add_compile_definitions(GLFW_INCLUDE_NONE)

target_link_libraries( Hazel PUBLIC spdlog::spdlog)
target_link_libraries( Hazel PUBLIC glad )
target_link_libraries( Hazel PUBLIC glfw )
target_link_libraries( Hazel PUBLIC imgui )
# target_link_libraries( Hazel PUBLIC stb_image )




target_include_directories( Hazel PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src" )

# ${CMAKE_DL_LIBS}