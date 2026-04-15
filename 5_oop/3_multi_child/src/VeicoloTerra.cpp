#include "VeicoloTerra.hpp"

VeicoloTerra::VeicoloTerra() { rpm_wheel = 0; }

int VeicoloTerra::get_wheel_rpm() { return rpm_wheel; }

void VeicoloTerra::wheel_accelerate() { rpm_wheel++; }