/*
Definisci classe MezzoDiTrasporto:
- string engine_type, float speed
- costruttore default speed = 0.

Definisci classe Aereo da MezzoDiTrasporto:
- costruttore default engine_type = propulsione, speed = 0.
- setter getter speed

Definisci classe Motociclo da MezzoDiTrasporto:
- costruttore default engine_type = combustione, speed = 0.

Testa:
- crea Aereo e Motociclo
- cambia velocità
*/

#include <bits/stdc++.h>

#include "Aereo.hpp"
#include "Motociclo.hpp"

using namespace std;

int main() {
  Aereo a;
  Motociclo m;

  cout << "L'aereo viaggia a velocita': " << a.get_speed() << endl;
  a.set_speed(300.);
  cout << "L'aereo accelera e ora viaggia a velocita': " << a.get_speed()
       << endl;

  cout << "La moto viaggia a velocita': " << m.get_speed() << endl;
  m.set_speed(120.);
  cout << "La moto accelera e ora viaggia a velocita': " << m.get_speed()
       << endl;
}