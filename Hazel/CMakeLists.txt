add_library(
    Hazel 

    src/hzpch.h
    src/hzpch.cpp
       

    src/Hazel/Core/Application.cpp
    # src/Hazel/EntryPoint.h
    src/Hazel/Core/Log.cpp  
    src/Hazel/Core/Layer.cpp
    src/Hazel/Core/LayerStack.cpp
    # src/Hazel/Core/Window.cpp//this is for platform detection

    src/Hazel/Math/Math.cpp

    
    src/Hazel/ImGui/ImGuiLayer.cpp
    src/Hazel/ImGui/ImGuiBuild.cpp        
    
    src/Hazel/Renderer/Shader.cpp
    src/Hazel/Renderer/Buffer.cpp
    src/Hazel/Renderer/Renderer.cpp
    src/Hazel/Renderer/VertexArray.cpp
    src/Hazel/Renderer/RenderCommand.cpp
    src/Hazel/Renderer/RendererAPI.cpp
    src/Hazel/Renderer/OrthographicCamera.cpp
    src/Hazel/Renderer/Texture.cpp
    src/Hazel/Renderer/Renderer2D.cpp
    src/Hazel/Renderer/OrthographicCameraController.cpp
    src/Hazel/Renderer/GraphicsContext.cpp
    src/Hazel/Renderer/Framebuffer.cpp
    src/Hazel/Renderer/EditorCamera.cpp
    

    ######################### MOJE ###################
    src/Hazel/Renderer/World.cpp
    ##################################################



    src/Hazel/Scene/Scene.cpp
    src/Hazel/Scene/Entity.cpp  
    src/Hazel/Scene/SceneCamera.cpp  
    src/Hazel/Scene/SceneSerializer.cpp      

    
    src/Platform/OpenGL/OpenGLContext.cpp
    src/Platform/OpenGL/OpenGLBuffer.cpp
    src/Platform/OpenGL/OpenGLVertexArray.cpp
    src/Platform/OpenGL/OpenGLRendererAPI.cpp
    src/Platform/OpenGL/OpenGLShader.cpp
    src/Platform/OpenGL/OpenGLTexture.cpp
    src/Platform/OpenGL/OpenGLFramebuffer.cpp  
        
    src/Platform/Windows/WindowsWindow.cpp
    src/Platform/Windows/WindowsInput.cpp
    
    vendor/stb_image/stb_image.cpp
    
    )
    
    add_compile_definitions(GLFW_INCLUDE_NONE)
    
    target_link_libraries( Hazel PUBLIC spdlog::spdlog)
    target_link_libraries( Hazel PUBLIC glfw )        
    
    target_include_directories( Hazel PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src" )
    



    
add_library(
    imgui   
    # morao si da odes u submodul jer na docking grani ima nekih izmjena i u ostalim fajlovima koji uticu

    vendor/ImGUI/backends/imgui_impl_glfw.cpp
    vendor/ImGUI/backends/imgui_impl_opengl3.cpp
    vendor/ImGUI/imgui.cpp
    vendor/ImGUI/imgui_demo.cpp
    vendor/ImGUI/imgui_draw.cpp
    vendor/ImGUI/imgui_widgets.cpp
    vendor/ImGUI/imgui_tables.cpp

    vendor/ImGuizmo/ImGuizmo.h
    vendor/ImGuizmo/ImGuizmo.cpp


)

target_link_libraries(Hazel PUBLIC imgui  )

target_include_directories(imgui PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

# add_library(
#     yaml




# )


# ${CMAKE_DL_LIBS}
