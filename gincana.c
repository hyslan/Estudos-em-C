#include <stdio.h>
    int main() {
        int inicio, fim;
        inicio <= 24;
        fim <= 24;
            scanf("%d %d", &inicio, &fim);
                if (inicio == 0 && fim == 0)
                {
                    printf("%d \n", 24);
                }
                else if (inicio > fim)
                {
                    printf("%d \n", (24 - inicio) + fim);
                }
                else if (inicio < fim)
                {
                    printf("%d \n", ((24 - fim) - (24 - inicio)) * -1);
                }
                return 0;
    }