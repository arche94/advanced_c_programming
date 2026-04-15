/*
Definisci classe astatta Shape:
- metodo area

Definisci classe Rectangle:
- public float base height
- costruttore default
- override area
- override * come somma di aree

Test:
- due rectangle
- somma aree
*/

#include <bits/stdc++.h>

#include "Rectangle.hpp"

using namespace std;

int main() {
  Rectangle r1;
  Rectangle r2;

  cout << "Area r1: " << r1.area() << endl;
  cout << "Area r2: " << r2.area() << endl;
  cout << "Area r1 + r2: " << (r1 * r2) << endl;
}