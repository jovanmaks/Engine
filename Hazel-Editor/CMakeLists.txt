add_executable(

    Hazel-Editor 
    src/EditorLayer.cpp 
    src/HazelEditorApp.cpp  
    
    )

target_link_libraries( Hazel-Editor PUBLIC Hazel )
