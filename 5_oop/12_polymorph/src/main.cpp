/*
Definisci classe Rettangolo:
- protected float base height
- default costruttore
- getter/setter
- metodo perimetro

Definisci classe Quadrato da Rettangolo:
- private float edge
- costruttore default
- getter/setter
- override perimetro

Testa:
- istanzia oggetti separati
- istanza Quadrato su variabile Rettangolo
*/

#include <bits/stdc++.h>

#include "Quadrato.hpp"
#include "Rettangolo.hpp"

using namespace std;

int main() {
  Rettangolo r;
  Quadrato q;

  cout << "Rettangolo: base = " << r.get_base()
       << " altezza = " << r.get_height() << " perimetro = " << r.perimeter()
       << endl;
  cout << "Quadrato: lato = " << q.get_edge()
       << " perimetro = " << q.perimeter() << endl;
  cout << endl;

  r.set_base(4.);
  r.set_height(5.);

  q.set_edge(6);

  cout << "Rettangolo: base = " << r.get_base()
       << " altezza = " << r.get_height() << " perimetro = " << r.perimeter()
       << endl;
  cout << "Quadrato: lato = " << q.get_edge()
       << " perimetro = " << q.perimeter() << endl;
  cout << endl;

  Rettangolo* r2 = &q;

  cout << "Rettangolo 2: perimetro = " << r2->perimeter() << endl;
}