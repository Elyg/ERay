#pragma once

#include <iostream>
#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEFAULT_ALIGNED_GENTYPES
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>


class Ray
{
public:
  Ray(const glm::vec3& origin, const glm::vec3& direction) : m_orig(origin), m_dir(direction) {}

  const glm::vec3& getOrigin() const { return m_orig; }
  const glm::vec3& getDirection() const { return m_dir; }

  glm::vec3 at(double t);

private:
  glm::vec3 m_orig;
  glm::vec3 m_dir;
};