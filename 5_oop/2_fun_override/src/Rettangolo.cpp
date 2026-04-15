#include "Rettangolo.hpp"

#include <bits/stdc++.h>

Rettangolo::Rettangolo(float _base, float _height) {
  base = _base;
  height = _height;
}

float Rettangolo::area() {
  std::cout << "Metodo originale" << std::endl;
  return base * height;
}