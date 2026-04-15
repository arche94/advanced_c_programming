#include "Rettangolo.hpp"

#include <bits/stdc++.h>

Rettangolo::Rettangolo() {
  base = 0.;
  height = 0.;
}

float Rettangolo::get_base() { return base; }

void Rettangolo::set_base(float _base) { base = _base; }

float Rettangolo::get_height() { return height; }

void Rettangolo::set_height(float _height) { height = _height; }

float Rettangolo::perimeter() { return 2. * (base + height); }