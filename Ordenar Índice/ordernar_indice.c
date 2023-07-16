#include <stdio.h>

int main (void) {
  int m, B[30], i;
  float x[30];
  scanf("%d", &m);
  for (i = 0; i < m; i++) {
    scanf("%f", &x[i]);
  }
  for (i = 0; i < m; i++) {
    scanf("%d", &B[i]);
  }
  for (i = 0; i < m; i++) {
    printf("%.2f\n", x[B[i]]);
  }
  return 0;
}
//
/* #include <stdio.h>

int main(){
  int m;
  float x[30];
  int B[30];

  /* Read parameters */
/*   scanf("%d", &m);
  for (int i = 0; i < m; i++) scanf("%f", &x[i]);
  for (int i = 0; i < m; i++) scanf("%d", &B[i]);
  
  /* Print output based on the input vector B */
//  for (int i = 0; i < m; i++) printf("%.2f ", x[B[i]]);
//} 
 

/* Este programa lê dois vetores: um vetor x contendo a lista de preços dos produtos e um vetor de índices B que será usado para imprimir os elementos de x em ordem.

A variável m é usada para armazenar o tamanho desses vetores. Primeiro, é lida do teclado usando a função scanf() chamando o formato de fração binária %d. Em seguida, o loop inicia para ler os m elementos do vetor x usando o formatador da fração flutuante %f. Isso é feito na mesma maneira para os m elementos do vetor B.

Finalmente, usamos outro loop para imprimir os elementos de x na ordem especificada por B. O formatador de fração decimal com duas casas decimais %.2f é usado para inserir ponto flutuante no resultado final.
 */