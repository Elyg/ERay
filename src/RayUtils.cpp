#include "RayUtils.h"

glm::vec3 RayUtils::unit_vector(const glm::vec3& v)
{
  return v / glm::vec3(v.length());
}

glm::vec3 RayUtils::ray_color(const Ray& r)
{
  glm::vec3 unit_direction = RayUtils::unit_vector(r.getDirection());
  auto a = 0.5 * (unit_direction[1] + 1.0);
  return glm::vec3(1.0 - a) * glm::vec3(1.0, 1.0, 1.0) + glm::vec3(a) * glm::vec3(0.5, 0.7, 1.0);
}