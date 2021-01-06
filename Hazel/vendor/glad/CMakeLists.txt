

add_library(
    glad
    include/glad/glad.h
    src/glad.c
     )

target_include_directories(glad PUBLIC include/)
target_link_libraries(Hazel PUBLIC glad ${CMAKE_DL_LIBS})
