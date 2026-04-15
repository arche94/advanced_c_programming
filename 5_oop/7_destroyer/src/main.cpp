/*
Definisci classe Rettangolo:
- float base, height
- costruttore default base = 4. altezza = 5.
- costruttore specifico
- distruttore che stampa "Oggetto di tipo Rettangolo distrutto con successo"

Testa con due oggetti di tipo Rettangolo, stampandone le dimensioni.
*/

#include <bits/stdc++.h>

#include "Rettangolo.hpp"

using namespace std;

int main() {
  Rettangolo r1;
  Rettangolo r2(10., 3.);

  cout << "Il rettangolo r1 ha base " << r1.base << " e altezza " << r1.height
       << endl;
  cout << "Il rettangolo r2 ha base " << r2.base << " e altezza " << r2.height
       << endl;
}