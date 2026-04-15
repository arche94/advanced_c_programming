#pragma once

class Rettangolo {
 protected:
  float base, height;

 public:
  Rettangolo();
  float get_base();
  void set_base(float _base);
  float get_height();
  void set_height(float _height);
  float perimeter();
};