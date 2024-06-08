# CMakeList.txt : CMake project for ProjectTemplateCmake1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
set(CMAKE_CXX_STANDARD 20)
set(PROJECT_NAME "ERay")

set(EXTERNAL_LIBS "D:/Projects/ExternalLibs")
set(USD_INSTALL_DIR "${EXTERNAL_LIBS}/src/usd_build")
set(GLFW_INSTALL_DIR "${EXTERNAL_LIBS}/glfw-3.4.bin.WIN64")
set(GLM_DIR "${EXTERNAL_LIBS}/glm-1.0.1")
set(VULKAN_DIR "C:/VulkanSDK/1.3.268.0") 

project(${PROJECT_NAME} 
        VERSION 1.0 
        DESCRIPTION "Raytracing with vulkan" 
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

# Define the source files explicitly
set(SOURCES
    "src/main.cpp"
    "src/TestMe.cpp"
     "src/HelloTriangleApplication.cpp"
)

# Add source to this project's executable.
add_executable(${PROJECT_NAME} ${SOURCES})

# Vulkan
target_include_directories(${PROJECT_NAME} PUBLIC "${VULKAN_DIR}/include")
find_library(VULKAN_LIBRARY NAMES vulkan-1 PATHS "${VULKAN_DIR}/Lib")
if(NOT VULKAN_LIBRARY)
    message(FATAL_ERROR "Could not find VULKAN library")
endif()
target_link_libraries(${PROJECT_NAME} ${VULKAN_LIBRARY})

# GLFW
list(APPEND CMAKE_PREFIX_PATH "${GLFW_INSTALL_DIR}/lib-vc2022")
target_include_directories(${PROJECT_NAME} PUBLIC "${GLFW_INSTALL_DIR}/include")
find_library(GLFW_LIBRARY NAMES glfw3 glfw "${GLFW_INSTALL_DIR}/lib-vc2022")
if(NOT GLFW_LIBRARY)
    message(FATAL_ERROR "Could not find GLFW library")
endif()
target_link_libraries(${PROJECT_NAME} ${GLFW_LIBRARY})

# GLM
target_include_directories(${PROJECT_NAME} PUBLIC "${GLM_DIR}")

# USD
# Add the directory containing pxrTargets.cmake to CMake module path
list(APPEND CMAKE_MODULE_PATH "${USD_INSTALL_DIR}/cmake")
# Include the pxrTargets.cmake file
include(pxrTargets)
include(pxrTargets-relwithdebinfo)
# Find the USD package
find_package(pxr REQUIRED)
target_link_libraries(${PROJECT_NAME} usd)

# Target include headers
target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_SOURCE_DIR}/include")

# Set the output directory for the executable
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)
