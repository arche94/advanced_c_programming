#pragma once

#include <bits/stdc++.h>

#include "VeicoloCivile.hpp"
#include "VeicoloMilitare.hpp"

class Hammer : public VeicoloCivile, public VeicoloMilitare {
 public:
  Hammer();
  std::string get_color();
  std::string get_model();

 private:
  std::string color, model;
};