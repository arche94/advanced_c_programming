#include <stdbool.h>
#include <stdio.h>

int main() {
  // Definisci due variabili, una a true e l'altra a false
  bool b1 = true;
  bool b2 = false;

  // Stampa la prima come intero e la seconda come stringa true/false
  printf("b1: %d\nb2: %s", b1, b2 ? "true" : "false");

  return 0;
}