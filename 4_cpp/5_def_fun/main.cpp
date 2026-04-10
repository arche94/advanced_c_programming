#include <bits/stdc++.h>

using namespace std;

/*
Definisci funzione calcolo_peso che accetta due argomenti: massa e gravita'.
  - calcola peso come prodotto degli argomenti
  - gravita' ha un default a 9.81
  - restuisce il peso calcolato
*/

float calcola_peso(float mass, float gravity = 9.81) { return mass * gravity; }

int main() {
  float weight = 77.8;
  cout << "Sulla Terra, con una massa di " << weight
       << " kg, il tuo peso e' di " << calcola_peso(weight) << " N" << endl;

  float jupiter_gravity = 24.79;
  cout << "Su Giove, che ha un'accelerazione gravitazionale di "
       << jupiter_gravity << " m/s2, con una massa di " << weight
       << " kg, il tuo peso e' di " << calcola_peso(weight, jupiter_gravity)
       << " N" << endl;

  return 0;
}
