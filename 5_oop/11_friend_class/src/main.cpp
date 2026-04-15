/*
Definisci classe Rettangolo:
- float base, height
- costruttore default
- metodi perimetro e area

Definisci classe TriangoloIsoscele:
- float lato_isoscele, base, height
- costruttore default
- metodi perimetro, area

Definisci classe Sommatore:
- float total_area, total_perimeter
- costruttore default
- metodi aggiorna perimetro, aggiorna area

Testa
*/

#include <bits/stdc++.h>

#include "Rettangolo.hpp"
#include "Sommatore.hpp"
#include "Triangolo.hpp"

using namespace std;

int main() {
  Rettangolo r;
  Triangolo t;
  Sommatore s;

  cout << "Perimetro totale: " << s.total_perimeter << endl;
  cout << "Area totale: " << s.total_area << endl << endl;

  s.update_perimeter(r);
  s.update_area(r);
  cout << "Perimetro totale: " << s.total_perimeter << endl;
  cout << "Area totale: " << s.total_area << endl << endl;

  s.update_perimeter(t);
  s.update_area(t);
  cout << "Perimetro totale: " << s.total_perimeter << endl;
  cout << "Area totale: " << s.total_area << endl << endl;
}