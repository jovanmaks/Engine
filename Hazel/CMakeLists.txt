add_library(
    Hazel
    
    src/Hazel/Application.h
    src/Hazel/Application.cpp
    src/Hazel/Core.h
    src/Hazel/EntryPoint.h
    
    src/Hazel.h
    )

    target_include_directories( Hazel PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src" )
