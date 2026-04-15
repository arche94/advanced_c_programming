#include "Aereo.hpp"

Aereo::Aereo() {
  speed = 0.;
  engine_type = "propulsione";
}

float Aereo::get_speed() { return speed; }

void Aereo::set_speed(float _speed) { speed = _speed; }