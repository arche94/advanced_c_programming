/*
Definisci classe Rettangolo:
- attributi base, altezza float
- costruttore per specificare attributi
- metodo calcolo area

Definisci classe Quadrato figlia di Rettangolo:
- construttore con input unico
- override calcolo area

Testa:
- un oggetto Rettangolo e calcola area
- un oggetto Quadrato e calcola area
*/

#include <bits/stdc++.h>

#include "Quadrato.hpp"
#include "Rettangolo.hpp"

using namespace std;

int main() {
  Rettangolo r(2., 3.);
  Quadrato q(4.);
  float r_area = r.area();
  float q_area = q.area();

  cout << "L'area del rettangolo r e' " << r_area << endl;
  cout << "L'area del quadrato q e' " << q_area << endl;
}