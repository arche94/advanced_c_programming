#pragma once

#include "Veicolo.hpp"

class VeicoloCivile : public virtual Veicolo {
 public:
  VeicoloCivile();
  bool is_abs();
  bool is_esp();

 private:
  bool abs, esp;
};