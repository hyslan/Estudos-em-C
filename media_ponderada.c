#include <stdio.h>
    int main() {
            float nota1, nota2, media;
            int peso1, peso2;
            
            scanf("%f %f %d %d", &nota1, &nota2, &peso1, &peso2);
        media = ((nota1 * peso1 + nota2 * peso2) / (peso1 + peso2));
            printf("%f", media);
        return 0;
    }