#pragma once
#include <GLFW/glfw3.h>
#include <common/WindowUtils.h>

/**
 * @brief 
 * 
 * Window
 * Handles instantiating window creating, including window data
 * 
 */

class Window{
public:
    Window() = default;
    Window(const Window&&) = delete;
    ~Window();

    void create(std::string title, int width, int height); // creating the window.
    void refresh();

private:
    WindowUtils* windowUtils;
    GLFWwindow* window; // This is the actual window for the renderer (acts as the canvas)
    bool windowState; // state if window is turned on/off.
};