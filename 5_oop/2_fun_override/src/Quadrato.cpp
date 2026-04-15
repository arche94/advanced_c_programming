#include "Quadrato.hpp"

#include <bits/stdc++.h>

Quadrato::Quadrato(float _base) {
  base = _base;
  height = _base;
}

float Quadrato::area() {
  std::cout << "Metodo overridden" << std::endl;
  return base * base;
}