#pragma once

#include <vulkan/vulkan.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class HelloTriangleApplication {
public:
  HelloTriangleApplication();
  void run();
private:
  void initWindow();
  void initVulkan();
  void mainLoop();
  void cleanup();

private:
  GLFWwindow* m_window;
  const uint32_t m_WIDTH = 800;
  const uint32_t m_HEIGHT = 600;
};