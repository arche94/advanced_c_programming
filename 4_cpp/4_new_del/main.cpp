#include <bits/stdc++.h>

using namespace std;

/*
Alloca memoria per un float, stampalo e dealloca.

Alloca memoria per un intero assegnando un valore, stampalo e dealloca.

Allora la memoria per un array con 3 float, assegnali, stampali e dealloca.
*/

int main() {
  float* f = new float();
  cout << "Il valore di f e': " << *f << endl;
  delete f;

  int* i = new int(12);
  cout << "Il valore di i e': " << *i << endl;
  delete i;

  f = new float[3];
  f[0] = 3.;
  f[1] = 5.;
  f[2] = 7.;

  for (int idx = 0; idx <= (sizeof(f) / sizeof(f[0])); idx++) {
    cout << "Il valore di f[" << idx << "] e' " << f[idx] << endl;
  }
  delete f;

  return 0;
}