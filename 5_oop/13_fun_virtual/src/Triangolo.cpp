#include "Triangolo.hpp"

#include <bits/stdc++.h>

Triangolo::Triangolo() {
  edge1 = 3;
  edge2 = 5;
  edge3 = 7;
}

float Triangolo::perimeter() {
  std::cout << "Perimetro triangolo" << std::endl;
  return edge1 + edge2 + edge3;
}