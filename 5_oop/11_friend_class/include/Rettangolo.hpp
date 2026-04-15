#pragma once

class Rettangolo {
 public:
  Rettangolo();
  friend class Sommatore;

 private:
  float base, height;
  float perimeter();
  float area();
};