#include <stdio.h>

int main() {
  // Definisci due variabili:
  // - float con valore 13.5
  // - double con valore 133.577
  float val1 = 13.5;
  double val2 = 133.577;

  // Stampa entrambi i valori con 2 cifre decimali
  printf("val1: %.2f\t| val2: %.2f", val1, val2);

  // Dimostra che i float hanno una risoluzione minore rispetto ai double
  // definendo pi greco fino a 20 cifre decimali
  float pi_f = 3.14159265358979323846;
  double pi_d = 3.14159265358979323846;

  printf("\n Stampo con risoluzione standard:");
  printf("\nPi greco (float): %f", pi_f);
  printf("\nPi greco (double): %f", pi_d);

  printf("\n Stampo con 10 decimali:");
  printf("\nPi greco (float): %.10f", pi_f);
  printf("\nPi greco (double): %.10f", pi_d);

  printf("\n Stampo con 20 decimali:");
  printf("\nPi greco (float): %.20f", pi_f);
  printf("\nPi greco (double): %.20f", pi_d);

  return 0;
}