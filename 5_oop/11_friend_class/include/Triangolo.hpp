#pragma once

class Triangolo {
 public:
  Triangolo();
  friend class Sommatore;

 private:
  float base, height, edge;
  float perimeter();
  float area();
};