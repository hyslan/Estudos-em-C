#include <stdio.h>
    int main() {
        int saque, c50, c10, c5, c1;
            scanf("%d", &saque);
        c50 = saque / 50;
            printf("%d \n", c50);
        c10 = ((saque % 50) / 10);
            printf("%d \n", c10);
        c5 = (((saque % 50) % 10) / 5);
            printf("%d \n", c5);
         c1 = ((((saque % 50) % 10) % 5) / 1);
            printf("%d \n", c1);
             
        return 0;
    }
