/*
Definisci classe Veicolo:
- int wheels, int seats
- default constructor

Definisci classe VeicoloCivile
- extend Veicolo
- bool abs, bool esp
- default constructor

Definisci classe VeicoloMilitare
- extend Veicolo
- bool earth, bool amphibian
- default constructor

Definisci classe Hammer
- extend VeicoloCivile, VeicoloMilitare
- string color, string model
- default constructor

Testa e verifica problema a diamante
*/

#include <bits/stdc++.h>

#include "Hammer.hpp"
#include "Veicolo.hpp"
#include "VeicoloCivile.hpp"
#include "VeicoloMilitare.hpp"

using namespace std;

int main() {
  Hammer h;
  cout << "Hammer wheels " << h.get_wheels() << endl;
}