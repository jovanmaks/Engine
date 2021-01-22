cmake_minimum_required( VERSION 3.17.4 )
project( Arabesque VERSION  0.2 )
include( GNUInstallDirs )


set( GLFWM_VERSION_MAJOR "3" )
set( GLFWM_VERSION_MINOR "2" )
#set(CMAKE_BUILD_TYPE Debug)
#This also disables optimization.
#For profiling instead of debugging, you generally want both optimization and symbols (aka -g O2).

find_package( OpenGL REQUIRED )
find_package( glfw3 REQUIRED )

add_compile_options(-fPIC)


add_subdirectory( Hazel )
add_subdirectory( Hazel/vendor/spdlog )
add_subdirectory( Hazel/vendor/glad )
add_subdirectory( Hazel/vendor/glm )



#imgui
add_subdirectory( Hazel/src/Platform/OpenGL )
# add_subdirectory( Hazel/vendor/ImGui )



add_subdirectory( Sandbox )
add_subdirectory( Hazelnut )



