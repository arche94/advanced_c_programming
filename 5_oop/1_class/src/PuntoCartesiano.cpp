#include "PuntoCartesiano.hpp"

#include <bits/stdc++.h>
#include <math.h>

using namespace std;

PuntoCartesiano::PuntoCartesiano() {
  x = 0.;
  y = 0.;
}
PuntoCartesiano::PuntoCartesiano(float _x, float _y) {
  x = _x;
  y = _y;
}
void PuntoCartesiano::print_coordinates() {
  cout << "(" << x << ", " << y << ")" << endl;
}
float PuntoCartesiano::segment_length(PuntoCartesiano p) {
  return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
}