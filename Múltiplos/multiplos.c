#include <stdio.h>

int main() {
  int x, y, i, resultado;

  printf("Digite o valor de x: ");
  scanf("%d", &x);

  printf("Digite o valor de y: ");
  scanf("%d", &y);

  for (i = 1; i <= x; i++) {
    resultado = i * y;
    printf("%d\n", resultado);
  }

  return 0;
}