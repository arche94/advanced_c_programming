#include <stdio.h>

void read_user_input(char* buffer);
int write_file(char* filepath, char* mode, char* input);
void print_file(char* filepath);

int main() {
  /*
  Apri un file in modalita' scrittura

  Chiedi all'utente cosa scrivere

  Testa con 3 modalita' di scrittura
  */

  char* fp = "test_file.txt";
  char in_buf[200];

  read_user_input(in_buf);
  printf("Trying to write on file %s in WRITE mode", fp);
  if (!write_file(fp, "w", in_buf)) {
    printf("Error while trying to write on file: %s", fp);
  }
  print_file(fp);

  read_user_input(in_buf);
  printf("Trying to write on file %s in APPEND mode", fp);
  if (!write_file(fp, "a", in_buf)) {
    printf("Error while trying to write on file: %s", fp);
  }
  print_file(fp);

  read_user_input(in_buf);
  printf("Trying to write on file %s in READ+ mode", fp);
  if (!write_file(fp, "r+", in_buf)) {
    printf("Error while trying to write on file: %s", fp);
  }
  print_file(fp);

  return 0;
}

void read_user_input(char* buffer) {
  printf("Cosa vuoi scrivere sul file?\n");
  printf("Input: ");
  gets(buffer);
}

int write_file(char* filepath, char* mode, char* input) {
  FILE* f = fopen(filepath, mode);
  if (f == NULL) {
    return 0;
  }
  fprintf(f, input);

  fclose(f);
  return 1;
}

void print_file(char* filepath) {
  FILE* f = fopen(filepath, "r");
  if (f == NULL) {
    return;
  }
  printf("\n\n--------------------------\n");
  printf("File print");
  printf("\n--------------------------\n");
  char line[200];
  while (fgets(line, sizeof(line), f) != NULL) {
    printf("%s", line);
  }
  printf("\n--------------------------\n\n");

  fclose(f);
  return;
}