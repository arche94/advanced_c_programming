#pragma once

#include <bits/stdc++.h>

class Animale {
 protected:
  std::string type;

 public:
  std::string get_type();
  virtual void sound() = 0;
};