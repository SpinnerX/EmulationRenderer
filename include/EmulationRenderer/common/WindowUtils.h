#pragma once
#include <GLFW/glfw3.h>
#include <string>

/**
 * @brief 
 * 
 * Data for the window (properties of a window when created)
 * 
 */

struct WindowUtils{
    int width;
    int height;
    std::string title;
};