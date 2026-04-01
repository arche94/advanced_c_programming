#include <stdio.h>

float half_float(float n);

void half_float_ref(float* n);

int main() {
  /*
  Definisci due funzioni:
  - una dimezza un float per valore (ritorna risultato)
  - una dimezza un float per side effects (non restituisce niente)

  Testa entrambe le funzioni

  */
  float a = 15.;
  float res = half_float(a);

  printf("La meta' di %.2f e' %.2f\n", a, res);
  printf("Il valore di a e' %.2f\n\n", a);

  float* a_ref = &a;
  half_float_ref(a_ref);
  printf(
      "Il nuovo valore di a e' %.2f che e' la meta' del suo valore originale\n",
      a);
  half_float_ref(&a);
  printf(
      "Il nuovo valore di a e' %.2f che e' la meta' del suo valore precedente",
      a);

  return 0;
}

float half_float(float n) { return n / 2.; }

void half_float_ref(float* n) { *n = *n / 2.; }