#include <stdio.h>

int main() {
  // Dichiara variabile int val1
  int val1;
  // Dichiara variabile in con nome a scelta
  int val1_cpy;

  // Assegna a val1 120
  val1 = 120;
  // Assegna a seconda variabile val1
  val1_cpy = val1;

  // Stampa entrambe le variabili
  printf("val1 : %d\t| val1_cpy : %d", val1, val1_cpy);

  return 0;
}