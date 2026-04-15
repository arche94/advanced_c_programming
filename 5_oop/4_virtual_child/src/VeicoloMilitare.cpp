#include "VeicoloMilitare.hpp"

VeicoloMilitare::VeicoloMilitare() {
  earth = true;
  amphibian = false;
}

bool VeicoloMilitare::is_earth() { return earth; }

bool VeicoloMilitare::is_amphibian() { return amphibian; }