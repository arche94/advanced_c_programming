#pragma once

class Triangolo {
 private:
  float edge1, edge2, edge3;

 public:
  Triangolo();
  virtual float perimeter();
};