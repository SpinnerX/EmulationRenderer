#include <core/Window.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <unistd.h>
#include <stdio.h>

Window::~Window(){
    glfwTerminate();
}

void Window::create(std::string title, int width, int height){

    // Checking if glfw is setup correctly
    if(!glfwInit()){
        puts("GLFW did not work, is the glfw setup correctly?!\n");
        return;
    }

    // Creating window
    window = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);
    glfwMakeContextCurrent(window);
    if(!window){
        puts("Window could not be created!\n");
        return;
    }

    while(!glfwWindowShouldClose(window)){
        
        if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS){
            windowState = true;
            glfwTerminate();
        }

        refresh();
    }

    glfwTerminate();
}

void Window::refresh(){
    glfwSwapBuffers(window);
    glfwPollEvents();
}

