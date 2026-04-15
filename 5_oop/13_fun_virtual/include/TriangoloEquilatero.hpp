#pragma once

#include "Triangolo.hpp"

class TriangoloEquilatero : public Triangolo {
 private:
  float edge;

 public:
  TriangoloEquilatero();
  float perimeter();
};