#pragma once

#include "MezzoDiTrasporto.hpp"

class Motociclo : MezzoDiTrasporto {
 public:
  Motociclo();
  float get_speed();
  void set_speed(float _speed);
};