#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int input_choice();

void read_user_input(int choice, char* buffer);

int main() {
  /*
  Definisci una funzione che chieda all'utente se vuole inserire una parola o
  una frase.

  Restituisci la scelta e invoca la funzione opportuna.

  Calcola la lunghezza della stringa digitata dall'utente.
  */

  int option = input_choice();

  char incoming[100];
  read_user_input(option, incoming);
  printf("Hai scritto: %s\n", incoming);
  printf("La lunghezza della stringa digitata e': %zu", strlen(incoming));

  return 0;
}

int input_choice() {
  int choice;
  while (true) {
    printf("Cosa vuoi inserire? (Scegli l'opzione)\n");
    printf("1) Singola parola\n");
    printf("2) Frase\n");
    printf("Inserisci la tua scelta: ");

    scanf("%d", &choice);

    if (choice == 1 || choice == 2) {
      break;
    }

    printf("Opzione non esistente. Riprova\n\n");
  }

  return choice;
}

void read_user_input(int choice, char* buffer) {
  // cleanup buffer
  char c;
  while ((c = getchar()) != '\n' && c != EOF);

  // get user input
  switch (choice) {
    case 1: {
      printf("Digita la parola: ");
      scanf("%s", buffer);
      break;
    }
    case 2: {
      printf("Digita la frase: ");
      gets(buffer);
      break;
    }
  }
}