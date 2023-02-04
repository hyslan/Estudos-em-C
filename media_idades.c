#include <stdio.h>


    int main()
    {
        int idade;
        float media;
        int quantidade = 0;
        float soma;
scanf("%d", &idade);
        while (idade != 0)
        {
          
           soma = soma + idade;
           quantidade = quantidade + 1;
            scanf("%d", &idade);
        }
        media = soma / quantidade;
        printf("%.2f", media);
    }