#include "Rectangle.hpp"

Rectangle::Rectangle() {
  base = 4.;
  height = 5.;
}

float Rectangle::area() { return base * height; }

float Rectangle::operator*(Rectangle& r) { return this->area() + r.area(); }