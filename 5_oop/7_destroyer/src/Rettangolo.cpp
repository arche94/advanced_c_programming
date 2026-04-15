#include "Rettangolo.hpp"

#include <bits/stdc++.h>

Rettangolo::Rettangolo() {
  base = 4.;
  height = 5.;
}

Rettangolo::Rettangolo(float _base, float _height) {
  base = _base;
  height = _height;
}

Rettangolo::~Rettangolo() {
  std::cout << "Oggetto di tipo Rettangolo distrutto con successo" << std::endl;
}