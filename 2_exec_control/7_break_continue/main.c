#include <stdio.h>

int main() {
  /*
  Definisci un ciclo for che si interrompe se il contatore e' un multiplo di 3

  Definisci un altro ciclo for che salta l'esecuzione se il contatore e' un
  multiplo di 3
  */

  for (int i = 0; i < 11; i++) {
    if (i > 0 && (i % 3) == 0) {
      printf("Interrompo ciclo con i = %d\n", i);
      break;
    }
  }

  for (int i = 0; i < 11; i++) {
    if (i > 0 && (i % 3) == 0) {
      printf("Salto esecuzione ciclo con i = %d\n", i);
      continue;
      ;
    }
  }

  return 0;
}