#pragma once

class VeicoloMare {
 public:
  VeicoloMare();
  int get_propeller_rpm();
  void propeller_accelerate();

 protected:
  int rpm_propeller;
};