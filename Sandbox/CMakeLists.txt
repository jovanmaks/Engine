add_executable(

    SandboxApp 
    src/SandboxApp.cpp 
    src/Sandbox2D.cpp  
    src/ExampleLayer.cpp
    
    )

target_link_libraries(SandboxApp PUBLIC Hazel )

