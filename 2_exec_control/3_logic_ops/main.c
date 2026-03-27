#include <stdio.h>

int main() {
  // Definisci tre variabili intere
  int a = 30, b = 30, c = 30;

  // Stampa il messaggio "a e' maggiore di b e multiplo di c" se la condizione
  // e' vera
  if (a > b && (a % c) == 0) {
    printf("a e'maggiore di b e multiplo di c\n");
  }

  // Stampa il messaggio "a e' diverso da almeno una delle altre variabili" se
  // la condizione e' vera
  if (a != b || a != c) {
    printf("a e' diverso da almeno una delle altre variabili\n");
  }

  return 0;
}