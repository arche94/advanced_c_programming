#pragma once

#include "MezzoDiTrasporto.hpp"

class Aereo : MezzoDiTrasporto {
 public:
  Aereo();
  float get_speed();
  void set_speed(float _speed);
};