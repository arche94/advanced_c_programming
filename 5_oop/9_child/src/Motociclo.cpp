#include "Motociclo.hpp"

Motociclo::Motociclo() {
  speed = 0.;
  engine_type = "combustione interna";
}

float Motociclo::get_speed() { return speed; }

void Motociclo::set_speed(float _speed) { speed = _speed; }