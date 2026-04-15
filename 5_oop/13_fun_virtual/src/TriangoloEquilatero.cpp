#include "TriangoloEquilatero.hpp"

#include <bits/stdc++.h>

TriangoloEquilatero::TriangoloEquilatero() { edge = 6; }

float TriangoloEquilatero::perimeter() {
  std::cout << "Perimetro triangolo equilatero" << std::endl;
  return 3. * edge;
}