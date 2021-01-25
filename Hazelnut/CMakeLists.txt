add_executable(

    Hazelnut
    src/EditorLayer.cpp 
    src/HazelnutApp.cpp  
    src/Panels/SceneHierarchyPanel.cpp
    
    )

target_link_libraries( Hazelnut PUBLIC Hazel )
