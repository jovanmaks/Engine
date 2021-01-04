#pragma once

extern Hazel::Application* Hazel::CreateApplication();


int main(int argc, char** argv)
{

    printf("Proradilo govno 3\n");
    auto app = Hazel::CreateApplication();  
    app->Run();
    delete app;


}  