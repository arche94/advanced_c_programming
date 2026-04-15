#pragma once

class Boat {
 public:
  bool anchor_down;
  Boat();
  friend bool ready_to_move(Boat b);

 private:
  bool low_fuel;
};