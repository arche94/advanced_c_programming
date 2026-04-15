#include "Triangolo.hpp"

Triangolo::Triangolo() {
  base = 6.;
  height = 13.;
  edge = 15.;
}

float Triangolo::perimeter() { return (2. * edge) + base; }

float Triangolo::area() { return (base * height) / 2.; }