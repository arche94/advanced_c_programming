#include <stdio.h>

int main() {
  // Dichiara una variabile char
  char c;

  // Stampa valore
  printf("c: %c\n", c);

  // Assegna lettera z
  c = 'z';

  // Stampa valore
  printf("c: %c\n", c);

  // Stampa dimensione
  printf("Size of c: %zu bytes", sizeof(c));

  return 0;
}