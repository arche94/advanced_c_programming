#include <stdio.h>

float cust_pow(float base, int exp);

int main() {
  float b = 3.;
  int e = -2;

  printf("%.2f elevato alla %d e' %.2f", b, e, cust_pow(b, e));

  return 0;
}

float cust_pow(float base, int exp) {
  if (exp == 0) {
    return 1.;
  }

  float prod = base;
  for (int i = 1; i < (exp > 0 ? exp : -exp); i++) {
    prod *= base;
  }

  return exp > 0 ? prod : (1. / prod);
}