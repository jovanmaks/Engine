add_executable(

    Hazelnut
    src/EditorLayer.cpp 
    src/HazelnutApp.cpp  
    
    )

target_link_libraries( Hazelnut PUBLIC Hazel )
