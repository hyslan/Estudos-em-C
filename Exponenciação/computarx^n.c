#include <stdio.h>

int main() {
  int n, i;
  double x, result = 1;

  printf("Informe o valor de n: ");
  scanf("%d", &n);
  printf("Informe o valor de x: ");
  scanf("%lf", &x);

  for (i = 0; i < n; i++) {
    result = result * x;
  }

  printf("%.2lf elevado a %d = %.2lf\n", x, n, result);

  return 0;
}
