#pragma once

class Veicolo {
 public:
  Veicolo();
  int get_wheels();
  int get_seats();

 private:
  int wheels, seats;
};