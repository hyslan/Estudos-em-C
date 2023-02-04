#include <stdio.h>
    int main() {
        // bissextos são múltiplos de 4 e múltiplos de 100; 
        int ano = 0;
            scanf("%d", &ano);

                if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 100 == 0 && ano % 400 == 0))
               // Operador AND e OR juntos no IF;
                {
                 
                    printf("1");
                }                  

                   else {
                     printf("0");
                   } 


        return 0;
    }