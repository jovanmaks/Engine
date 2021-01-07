

add_library(
    imgui
   
    imgui.cpp
    imgui.h
    ImGuiOpenGLRenderer.cpp
    imgui_impl_glfw.cpp
    imgui_demo.cpp
    imgui_draw.cpp
    imgui_widgets.cpp
    imgui_tables.cpp

    )

target_include_directories(imgui PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")
target_link_libraries(Hazel PUBLIC imgui  )