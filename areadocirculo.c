#include <stdio.h>

int main() {
  double pi = 3.14159;
  double area;

  scanf("%lf", &area);

  printf("A=%.4lf\n", pi *area* area);
  return 0;
}