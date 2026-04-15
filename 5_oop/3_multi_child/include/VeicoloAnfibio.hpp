#pragma once

#include "VeicoloMare.hpp"
#include "VeicoloTerra.hpp"

class VeicoloAnfibio : public VeicoloTerra, public VeicoloMare {
 public:
  VeicoloAnfibio();
  int get_rpm();
  void accelerate();
  bool active_propeller();
  void switch_propeller();

 private:
  bool is_propeller_active;
};