#include <stdio.h>
    int main() {
        int numero, unidade, dezena, centena;

        scanf("%d", &numero );
            centena = numero / 100;
            dezena = numero / 10 % 10;
            unidade = numero % 10;
            
              printf("%d", unidade*100+dezena*10+centena );
              /* printf("%d\n %d \n %d \n", unidade, dezena, centena); */
    
    return 0;
                }