/*
Definisci classe Car:
- bool private low_oil, public brake_on
- costruttore che inizializza

Definisci classe Boat:
- bool private low_fuel, public anchor_down
- costruttore default

Friend function ready_to_move:
- se Car -> !low_oil && !brake_on
- se Boat -> !low_fuel && !anchor_down

Testa
*/

#include <bits/stdc++.h>

#include "Boat.hpp"
#include "Car.hpp"

using namespace std;

bool ready_to_move(Boat b) { return !b.low_fuel && !b.anchor_down; }

bool ready_to_move(Car c) { return !c.low_oil && !c.brake_on; }

int main() {
  Boat b;
  Car c;

  cout << "La barca e' pronta a partire? " << ready_to_move(b) << endl;
  cout << "La macchina e' pronta a partire? " << ready_to_move(c) << endl;

  b.anchor_down = true;
  cout << endl;
  cout << "La barca e' pronta a partire? " << ready_to_move(b) << endl;
  cout << "La macchina e' pronta a partire? " << ready_to_move(c) << endl;

  c.brake_on = true;
  cout << endl;
  cout << "La barca e' pronta a partire? " << ready_to_move(b) << endl;
  cout << "La macchina e' pronta a partire? " << ready_to_move(c) << endl;
}