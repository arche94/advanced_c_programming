#include <stdio.h>
#include <string.h>

int main() {
  // Definire array di char di lunghezza 3
  char arr_c_1[3];
  // Definire una stringa di lunghezza 3
  char str[] = "zio";

  // Stampa dimensione primo array con sizeof
  printf("Lunghezza arr_c_1 (sizeof): %zu\n",
         sizeof(arr_c_1) / sizeof(arr_c_1[0]));
  // Stampa lunghezza stringa nell'array
  printf("Lunghezza arr_c_1 (strlen): %zu\n", strlen(arr_c_1));

  // Stampa dimensione stringa con sizeof
  printf("Dimensione str (sizeof): %zu\n", sizeof(str) / sizeof(str[0]));
  // Stampa lunghezza stringa con metodo appropriato
  printf("Lungezza str (strlen): %zu", strlen(str));

  // Crea e inizializza array sulla stessa riga
  char arr_c_2[] = {'z', 'i', 'o'};

  return 0;
}