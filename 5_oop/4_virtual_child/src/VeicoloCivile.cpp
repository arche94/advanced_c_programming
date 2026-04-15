#include "VeicoloCivile.hpp"

VeicoloCivile::VeicoloCivile() {
  abs = true;
  esp = false;
}

bool VeicoloCivile::is_abs() { return abs; }

bool VeicoloCivile::is_esp() { return esp; }