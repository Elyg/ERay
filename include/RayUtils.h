#pragma once

#include <iostream>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEFAULT_ALIGNED_GENTYPES
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include "Ray.h"

namespace RayUtils
{
  glm::vec3 unit_vector(const glm::vec3& v);
  glm::vec3 ray_color(const Ray& r);
}