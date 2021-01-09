

add_library(
    imgui
   
    # morao si da odes u submodul jer na docking grani ima nekih izmjena i u ostalim fajlovima koji uticu

    ../../../vendor/ImGUI/backends/imgui_impl_glfw.cpp
    ../../../vendor/ImGUI/backends/imgui_impl_opengl3.cpp

    ../../../vendor/ImGUI/imgui.cpp
    ../../../vendor/ImGUI/imgui_demo.cpp
    ../../../vendor/ImGUI/imgui_draw.cpp
    ../../../vendor/ImGUI/imgui_widgets.cpp
    ../../../vendor/ImGUI/imgui_tables.cpp


    )

target_include_directories(imgui PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_link_libraries(Hazel PUBLIC imgui  )