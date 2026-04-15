/*
Definisci classe Rettangolo:
- float base, altezza
- costruttore default base = 4. altezza = 5.

Testa stampando attributi
*/

#include <bits/stdc++.h>

#include "Rettangolo.hpp"

using namespace std;

int main() {
  Rettangolo r;
  cout << "Il rettangolo di default ha base " << setprecision(2) << r.base
       << " e altezza " << setprecision(2) << r.height << endl;
}