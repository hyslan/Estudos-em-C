#include <stdio.h>
    int main () {
        int dia, mes, ano;
        char barra [] = "/";
        
            scanf("%d %d %d", &dia, &mes, &ano);
                printf("%d%s%d%s%d", dia, barra, mes, barra, ano, barra);
        return 0;
    }