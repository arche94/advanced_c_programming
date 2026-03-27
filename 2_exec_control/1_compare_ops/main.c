#include <stdio.h>

int main() {
  // Difinisci due float
  float f1 = 12.5, f2 = 21.;

  // Definire due variablili per maggioranza e disuguaglianza
  int is_greater = f1 > f2;
  int is_different = f1 != f2;

  // Stampa a video
  printf("f1 > f2: %d\n", is_greater);
  printf("f1 != f2: %d\n", is_different);

  printf("f1%s e' maggiore di f2\n", is_greater ? "" : " non");
  printf("f1%s e' uguale a f2\n", is_different ? " non" : "");

  return 0;
}
