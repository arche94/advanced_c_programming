#pragma once

class Rettangolo {
 public:
  Rettangolo() {
    base = 0.;
    height = 0.;
  }
  Rettangolo(float _base, float _height);
  float area();

 protected:
  float base, height;
};