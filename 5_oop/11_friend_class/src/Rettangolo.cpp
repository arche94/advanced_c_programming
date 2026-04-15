#include "Rettangolo.hpp"

Rettangolo::Rettangolo() {
  base = 5.;
  height = 3.;
}

float Rettangolo::perimeter() { return 2. * (base + height); }

float Rettangolo::area() { return base * height; }