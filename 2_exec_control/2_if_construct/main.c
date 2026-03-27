#include <stdio.h>

int main() {
  // Definire variabile int
  int var = -11;

  // Stampa "la variabile e' multiplo di 2" se e' multiplo di 2
  if ((var % 2) == 0) {
    printf("La variabile e' multiplo di 2\n");
  }

  // Stampa "la variabile e' multiplo di 3" se e' multiplo di 3
  if ((var % 3) == 0) {
    printf("La variabile e' multiplo di 3\n");
  }

  // Stampa "la variabile e' positiva" se e' maggiore di 0
  if (var > 0) {
    printf("La variabile e' positiva\n");
  }

  return 0;
}