#include <stdio.h>

int main() {
  // Dichiara float e puntatore a esso
  float val1 = 3.0;
  float* val1_ref = &val1;

  // Stampa valore originario float
  printf("val1: %f\n", val1);

  // Incrementa di 2 valore prima variabile tramite puntatore
  *val1_ref = *val1_ref + 2.;

  // Stampa valore aggiornato
  printf("val1 (updated): %f\n", val1);
  printf("val1_ref value: %f", *val1_ref);

  return 0;
}