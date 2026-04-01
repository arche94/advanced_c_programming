#include <stdio.h>

int main() {
  /*
  Definisci una variabile intera di valore arbitrario

  Formula un ciclo while che raddoppia e stampa la variabile intera finche' non
  e' un multiplo di 17, escluso 17

  Formula un ciclo while che raddoppi la variabile intera almeno una volta e che
  si fermi se diventa superiore al primo multiplo di 5
  */

  int start = 5;
  printf("Il valore di partenza e' %d\n\n", start);

  int mul_17 = start;
  printf("Cerco multipli di 17 a partire da %d\n", mul_17);
  while ((mul_17 % 17) != 0 || mul_17 == 17) {
    mul_17 = mul_17 * 2;
    printf("Valore corrente: %d\n", mul_17);
  }
  printf("\n");

  int mul_5 = start;
  printf("Cerco il primo multiplo di 5 a partire da %d\n", mul_5);
  do {
    mul_5 = mul_5 * 2;
    printf("Valore corrente: %d\n", mul_5);
  } while ((mul_5 % 5) != 0);

  return 0;
}