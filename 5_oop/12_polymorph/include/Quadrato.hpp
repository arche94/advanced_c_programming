#pragma once

#include "Rettangolo.hpp"

class Quadrato : public Rettangolo {
 protected:
  float edge;

 public:
  Quadrato();
  float get_edge();
  void set_edge(float _edge);
  float perimeter();
};