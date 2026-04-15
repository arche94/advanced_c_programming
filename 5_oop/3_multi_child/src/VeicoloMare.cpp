#include "VeicoloMare.hpp"

VeicoloMare::VeicoloMare() { rpm_propeller = 0; }

int VeicoloMare::get_propeller_rpm() { return rpm_propeller; }

void VeicoloMare::propeller_accelerate() { rpm_propeller++; }