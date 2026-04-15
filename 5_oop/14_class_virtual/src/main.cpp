/*
Definisci classe astratta Animale:
- string tipo
- metodo verso

Definisci classe Gatto:
- tipo = felino
- verso = print "Il verso di questo animale e' il miagolio"

Definisci classe Topo:
- tipo = roditore
- verso = print "Il verso di questo animale e' lo squittio"

Test
*/

#include <bits/stdc++.h>

#include "Animale.hpp"
#include "Gatto.hpp"
#include "Topo.hpp"

using namespace std;

int main() {
  Gatto g;
  Topo t;

  cout << "Tipo: " << g.get_type() << endl;
  g.sound();
  cout << "Tipo: " << t.get_type() << endl;
  t.sound();
  cout << endl;

  Animale* a1 = &g;
  Animale* a2 = &t;

  cout << "Tipo: " << a1->get_type() << endl;
  a1->sound();
  cout << "Tipo: " << a2->get_type() << endl;
  a2->sound();
}