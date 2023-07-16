#include<stdio.h>
#include<string.h>

int main() {
  char string[100], c;
  int count = 0;

  printf("Digite a string:\n");
  gets(string);

  printf("Digite o caractere para encontrar no conteudo da string:\n");
  scanf("%c", &c);

  for (int i = 0; i < strlen(string); i++) {
    if (string[i] == c) {
      count++;
    }
  }

  printf("O caractere %c apareceu %d vezes na string\n", c, count);

  return 0;
}
