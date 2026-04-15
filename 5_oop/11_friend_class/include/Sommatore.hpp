#pragma once

#include "Rettangolo.hpp"
#include "Triangolo.hpp"

class Sommatore {
 public:
  float total_perimeter, total_area;
  Sommatore();
  void update_perimeter(Rettangolo r);
  void update_perimeter(Triangolo t);
  void update_area(Rettangolo r);
  void update_area(Triangolo t);
};