#include <stdio.h>
    int main() {
        int numero, centena, dezena, unidade;
        scanf("%d", &numero);
        centena = (numero / 100);
        dezena = (numero % 100) / 10;
        unidade = (numero % 100 % 10);
            if (dezena == 0 || dezena == 5)
            {
             printf("%d \n", centena + unidade);
            }
            else if (dezena == 1 || dezena == 6)
            {
                printf("%d \n", centena - unidade);
            }
            else if (dezena == 2 || dezena == 7)
            {
                 printf("%d \n", centena * unidade);
            }
            else if (dezena == 3 || dezena == 8)
            {
                 printf("%d \n", centena / unidade);
            }
            else if (dezena == 4 || dezena == 9)
            {
                 printf("%d \n", centena % unidade);
            }

        return 0;
    }