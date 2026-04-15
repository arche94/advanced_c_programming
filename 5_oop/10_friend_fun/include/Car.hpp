#pragma once

class Car {
 public:
  bool brake_on;
  Car();
  friend bool ready_to_move(Car c);

 private:
  bool low_oil;
};