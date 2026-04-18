/*
Script che legge un numero in input e invia il suo quadrato sullo stdout
*/

#include <stdio.h>

int main() {
  float n;
  scanf("%f", &n);
  printf("%.2f", n * n);
  fflush(stdout);

  return 0;
}