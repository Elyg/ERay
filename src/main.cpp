#include <iostream>
#include <string>

#include "HelloTriangleApplication.h"

//#define GLM_FORCE_RADIANS
//#define GLM_FORCE_DEPTH_ZERO_TO_ONE
//#include <glm/vec4.hpp>
//#include <glm/mat4x4.hpp>
//
//#define NOMINMAX 0
//#define TBB_USE_ASSERT 0 //Defines I needed for TBB to work found them in other issues on github here
//#define TBB_USE_THREADING_TOOLS 0
//#define TBB_USE_PERFORMANCE_WARNINGS 0
//#define __TBB_STATISTICS 0
//
//// IMPORT THIRD-PARTY LIBRARIES
//#include <pxr/usd/usd/stage.h>
//
//PXR_NAMESPACE_USING_DIRECTIVE


int main()
{
  HelloTriangleApplication app = HelloTriangleApplication();
  app.run();
  
  //std::cout << "Hello World!" << std::endl;
  //TestMe test1 = TestMe(5);
  //test1.print();

  ////std::cout << "Reading File" << std::endl;
  //UsdStageRefPtr stage = UsdStage::Open("..\\..\\..\\external\\sphere.usda");

  //std::cout << "Export To String" << std::endl;
  //std::string t;
  //stage->ExportToString(&t);
  //std::cout << t << std::endl;

  //std::cout << "End" << std::endl;

  //// GLFW and GLM

  //glfwInit();

  //glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
  //GLFWwindow* window = glfwCreateWindow(800, 600, "Vulkan window", nullptr, nullptr);

  //uint32_t extensionCount = 0;
  //vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);

  //std::cout << extensionCount << " extensions supported\n";

  //glm::mat4 matrix;
  //glm::vec4 vec;
  //auto test = matrix * vec;

  //while (!glfwWindowShouldClose(window)) {
  //  glfwPollEvents();
  //}

  //glfwDestroyWindow(window);

  //glfwTerminate();

  //return 0;

}



