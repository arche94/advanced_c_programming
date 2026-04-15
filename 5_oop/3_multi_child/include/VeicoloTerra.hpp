#pragma once

class VeicoloTerra {
 public:
  VeicoloTerra();
  int get_wheel_rpm();
  void wheel_accelerate();

 protected:
  int rpm_wheel;
};