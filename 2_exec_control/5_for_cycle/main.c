#include <stdio.h>

int main() {
  /*
  Definisci un ciclo per contare tutti i multipli di 3 da 3 a 30 e salvi il
  numero di numeri in una variabile.

  Definisci un array di tale dimensione e salva tutti i multipli di 3 da 3 a 30,
  oltre a stamparli uno per uno.

  Stampa a video l'array stampando ciascun elemento un numero di volte pari al
  proprio valore
  */

  int count = 0;
  for (int i = 3; i <= 30; i++) {
    if ((i % 3) == 0) {
      count++;
    }
  }
  printf("Tra 3 e 30 ci sono %d multipli di 3\n", count);

  int mult_three[count];
  int idx = 0;
  for (int i = 3; i <= 30; i++) {
    if ((i % 3) == 0) {
      printf("%d e' multiplo di 3\n", i);
      mult_three[idx] = i;
      idx++;
    }
  }

  for (int i = 0; i < count; i++) {
    for (int j = 0; j < mult_three[i]; j++) {
      printf("%d ", mult_three[i]);
    }
    printf("\n");
  }

  return 0;
}