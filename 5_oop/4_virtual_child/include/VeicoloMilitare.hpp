#pragma once

#include "Veicolo.hpp"

class VeicoloMilitare : public virtual Veicolo {
 public:
  VeicoloMilitare();
  bool is_earth();
  bool is_amphibian();

 private:
  bool earth, amphibian;
};