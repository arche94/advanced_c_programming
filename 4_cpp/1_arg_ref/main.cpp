#include <stdio.h>

void split_c(float* n) { *n = *n / 2.; }

void split_cpp(float& n) { n = n / 2.; }

int main() {
  /*
  Definisci due funzioni che dimezzano una variabile passata per riferimento:

  - una funzione usa sintassi C
  - una funzione usa sintassu C++
  */

  float a = 20.;
  printf("La variabile a ha valore %.2f\n", a);
  split_c(&a);
  printf("La meta' di a calcolata con sintassi C e': %.2f\n\n", a);
  printf("Ora la variabile a ha valore: %.2f\n", a);
  split_cpp(a);
  printf("La meta' di a calcolata con sintassi C++ e': %.2f\n", a);

  return 0;
}
