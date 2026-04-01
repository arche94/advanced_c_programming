#include <stdio.h>

int main() {
  char filepath[200];
  printf("Inserisci il path a un file di testo: ");
  gets(filepath);

  FILE* f = fopen(filepath, "r");
  if (f == NULL) {
    printf("Non e' stato possibile aprire il file: %s", filepath);
    return 0;
  }

  char line_buf[200];
  int line_cnt = 0;
  while (fgets(line_buf, sizeof(line_buf), f) != NULL) {
    line_cnt++;
    printf("Riga %d: %s", line_cnt, line_buf);
  }

  fclose(f);

  return 0;
}