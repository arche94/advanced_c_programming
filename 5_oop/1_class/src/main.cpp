/*
Definisci una classe PuntoCartesiano"
- due attributi float x, y
- funzione visualizza_coordinate per stampare le coordinate del punto
- funzione traccia_segmento che restituisce lunghezza segmento tra l'istanza e
un altro punto

Testa:
- due oggetti PuntoCartesiano
- stampa punti
- stampa lunghezza segmento
*/

#include <bits/stdc++.h>

#include "PuntoCartesiano.hpp"

using namespace std;

int main() {
  PuntoCartesiano p1, p2(4., 7.);
  cout << "P1 coordinates" << endl;
  p1.print_coordinates();
  cout << "P2 coordinates" << endl;
  p2.print_coordinates();

  float seg_len = p1.segment_length(p2);
  cout << "Distance between P1 and P2: " << setprecision(3) << seg_len << endl;

  return 0;
}