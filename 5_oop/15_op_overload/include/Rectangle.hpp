#pragma once

#include "Shape.hpp"

class Rectangle : Shape {
 public:
  float base, height;
  Rectangle();
  float area();
  float operator*(Rectangle& r);
};