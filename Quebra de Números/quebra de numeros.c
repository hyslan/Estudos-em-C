#include <stdio.h>
    int main() {
        int numero, unidade, dezena, centena;

        scanf("%d", &numero );
            centena = numero / 100;
            dezena = numero / 10 % 10;
            unidade = numero % 10;
            printf("%d\n", centena );
            printf("%d\n", dezena );
            printf("%d", unidade );


return 0;
    }