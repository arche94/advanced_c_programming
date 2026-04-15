#include "Veicolo.hpp"

Veicolo::Veicolo() {
  wheels = 4;
  seats = 5;
}

int Veicolo::get_wheels() { return wheels; }

int Veicolo::get_seats() { return seats; }