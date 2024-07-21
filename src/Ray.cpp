#include "Ray.h"

glm::vec3 Ray::at(double t)
{
  return m_orig + m_dir * glm::vec3(t);
};