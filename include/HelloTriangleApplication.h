#pragma once

#include <vulkan/vulkan.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <vector>
#include <cstring>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class HelloTriangleApplication 
{
  public:
    HelloTriangleApplication();
    ~HelloTriangleApplication();
    void run();
  private:
    void initWindow();
    void initVulkan();
    void mainLoop();
    void cleanup();
    void createInstance();
    bool checkValidationLayerSupport();
    void populateDebugMessengerCreateInfo(VkDebugUtilsMessengerCreateInfoEXT& createInfo);
    void setupDebugMessenger();

    std::vector<const char*> getRequiredExtensions();

    static VKAPI_ATTR VkBool32 VKAPI_CALL debugCallback(
      VkDebugUtilsMessageSeverityFlagBitsEXT messageSeverity,
      VkDebugUtilsMessageTypeFlagsEXT messageType,
      const VkDebugUtilsMessengerCallbackDataEXT* pCallbackData,
      void* pUserData);

    void DestroyDebugUtilsMessengerEXT(VkInstance instance,
      VkDebugUtilsMessengerEXT debugMessenger,
      const VkAllocationCallbacks* pAllocator);

    VkResult CreateDebugUtilsMessengerEXT(VkInstance instance,
      const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo,
      const VkAllocationCallbacks* pAllocator,
      VkDebugUtilsMessengerEXT* pDebugMessenger);

  private:
    GLFWwindow* m_window; // need to cleanup
    const uint32_t m_WIDTH = 800;
    const uint32_t m_HEIGHT = 600;
    VkInstance m_instance;
    VkDebugUtilsMessengerEXT m_debugMessenger;
    const std::vector<const char*> m_validationLayers = {
      "VK_LAYER_KHRONOS_validation" // standard useful validation layer
    };

  #ifdef NDEBUG
    const bool m_enableValidationLayers = false;
  #else
    const bool m_enableValidationLayers = true;
  #endif

};