#include <stdio.h>

int main() {
  /*
  Alla fiera dell'Est, per due soldi, un topolino mio padre comprò.
  E venne il fuoco,
  che brucio' il bastone,
  che picchio' il cane,
  che morse il gatto,
  che si mangio' il topo,
  che al mercato mio padre compro'.
  */

  // Definisci variabile intera per il punto di partenza
  int start = 1;

  // Costruisci uno switch per replicare la canzone Alla Fiera dell'Est
  printf(
      "Alla fiera dell'Est, per due soldi, un topolino mio padre compro'.\nE "
      "venne ");
  switch (start) {
    case 3:
      printf("il fuoco,\nche brucio' ");
    case 2:
      printf("il bastone,\nche picchio' ");
    case 1:
      printf("il cane,\nche morse ");
    case 0:
      printf("il gatto,\nche si mangio' ");
  }
  printf("il topo,\nche al mercato mio padre compro'.\n");

  return 0;
}