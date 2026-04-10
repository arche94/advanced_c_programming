#include <bits/stdc++.h>

using namespace std;

/*
Usa std namespace per usare string.

Definisci funzione add con overload:
- input 2 float e stampa la somma
- input 2 string e le stampa su righe separate
*/

void add(float a, float b) { cout << a + b << endl; }

void add(string a, string b) { cout << a << endl << b << endl; }

int main() {
  float x = 2, y = 3;
  cout << "Adding: " << x << ", " << y << endl;
  add(x, y);

  string s1 = "Pippo", s2 = "Topolino";
  cout << "Printing: " << s1 << ", " << s2 << endl;
  add(s1, s2);

  return 0;
}