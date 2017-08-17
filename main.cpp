#include <iostream>

#include <glm/gtc/color_space.hpp>
#include <glm/gtc/epsilon.hpp>
#include <glm/gtc/constants.hpp>

int main() {

  glm::vec3 const ColorSourceRGB(1.0, 0.5, 0.0);

  glm::vec3 const ColorSRGB = glm::convertLinearToSRGB(ColorSourceRGB);
  glm::vec3 const ColorRGB = glm::convertSRGBToLinear(ColorSRGB);

  std::cout << "SRGB: " << ColorSRGB.x << " " << ColorSRGB.y << " " << ColorSRGB.z << std::endl;
  std::cout << " RGB: " << ColorRGB.x << " " << ColorRGB.y << " " << ColorRGB.z << std::endl;

  return 0;
}
