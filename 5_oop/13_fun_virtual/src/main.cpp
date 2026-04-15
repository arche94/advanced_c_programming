/*
Definisci classe Triangolo:
- float edge1, edge2, edge3
- default costruttore
- metodo perimeter

Definisci classe TriangoloEquilatero:
- float edge
- default costruttore
- override metodo perimeter

Testa polimorfismo e metodo invocato
*/

#include <bits/stdc++.h>

#include "Triangolo.hpp"
#include "TriangoloEquilatero.hpp"

using namespace std;

int main() {
  Triangolo t;
  TriangoloEquilatero te;

  cout << t.perimeter() << endl;
  cout << te.perimeter() << endl;

  Triangolo* p_t = &te;

  cout << p_t->perimeter() << endl;
}