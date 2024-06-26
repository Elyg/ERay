#include <iostream>
#include <string>

#include "VulkanApp.h"

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
  VulkanApp app = VulkanApp();
  try {
    app.run();
  }
  catch (const std::exception& e) {
    std::cerr << e.what() << std::endl;
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;

}



