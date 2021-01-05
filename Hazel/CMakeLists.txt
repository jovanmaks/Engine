add_library(
    Hazel
    src/hzpch.h
    src/hzpch.cpp

    
    src/Hazel/Application.h
    src/Hazel/Application.cpp
    src/Hazel/Core.h
    src/Hazel/EntryPoint.h
    src/Hazel/Log.h
    src/Hazel/Log.cpp
    src/Hazel/Window.h

    
    
    
    
    src/Hazel.h
    
    
    src/Hazel/Events/ApplicationEvent.h
    src/Hazel/Events/Event.h
    src/Hazel/Events/KeyEvent.h
    src/Hazel/Events/MouseEvent.h
    
    
    src/Platform/Windows/WindowsWindow.cpp
    src/Platform/Windows/WindowsWindow.h


    )


target_link_libraries(Hazel PUBLIC spdlog::spdlog)
target_link_libraries( Hazel PUBLIC glfw )
target_link_libraries( Hazel PUBLIC GL )




target_include_directories( Hazel PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src" )
    