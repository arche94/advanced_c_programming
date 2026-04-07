#include <bits/stdc++.h>
#include <math.h>

using namespace std;

/*
Definisci un namespace Geometria:

  - Definisci struct PuntoCartesiano con coordinate x, y float.

  - Definisci funzione traccia_segmento che prenda due punti cartesiani e
restituisca la lunghezza del segmento [Lunghezza segmento = sqrt(( x2 - x1
)**2
+ ( y2 - y1 )**2)]

Testa namespace:
  - crea due punti di coordinate (2; 3) e (3; 7)
  - stampa coordinate
  - stampa lunghezza segmento
*/

namespace Geometria {
struct PuntoCartesiano {
  float x;
  float y;
};

float traccia_segmento(PuntoCartesiano a, PuntoCartesiano b) {
  return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}
}  // namespace Geometria

int main() {
  Geometria::PuntoCartesiano p1;
  p1.x = 2;
  p1.y = 3;
  cout << "P1 = (" << p1.x << "; " << p1.y << ")" << endl;

  Geometria::PuntoCartesiano p2;
  p2.x = 3;
  p2.y = 7;
  cout << "P2 = (" << p2.x << "; " << p2.y << ")" << endl;

  cout << "Lunghezza segmento P1-P2 =" << Geometria::traccia_segmento(p1, p2)
       << endl;

  return 0;
}