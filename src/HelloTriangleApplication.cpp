#include "HelloTriangleApplication.h"

HelloTriangleApplication::HelloTriangleApplication()
{
}

void HelloTriangleApplication::run()
{
  initWindow();
  initVulkan();
  mainLoop();
  cleanup();
}

void HelloTriangleApplication::initWindow()
{
  glfwInit();
  glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
  glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
  m_window = glfwCreateWindow(m_WIDTH, m_HEIGHT, "Vulkan", nullptr, nullptr);
}


void HelloTriangleApplication::initVulkan()
{
}

void HelloTriangleApplication::mainLoop()
{
  while (!glfwWindowShouldClose(m_window)) 
  {
    glfwPollEvents();
  }
}

void HelloTriangleApplication::cleanup()
{
  glfwDestroyWindow(m_window);
  glfwTerminate();
};