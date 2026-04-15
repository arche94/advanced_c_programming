#include "VeicoloAnfibio.hpp"

VeicoloAnfibio::VeicoloAnfibio() {
  rpm_wheel = 0;
  rpm_propeller = 0;
  is_propeller_active = false;
}

int VeicoloAnfibio::get_rpm() {
  if (is_propeller_active) {
    return rpm_propeller;
  } else {
    return rpm_wheel;
  }
}

void VeicoloAnfibio::accelerate() {
  if (is_propeller_active) {
    rpm_propeller++;
  } else {
    rpm_wheel++;
  }
}

bool VeicoloAnfibio::active_propeller() { return is_propeller_active; }

void VeicoloAnfibio::switch_propeller() {
  is_propeller_active = !is_propeller_active;
}
