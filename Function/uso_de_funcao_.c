#include <stdio.h>
    // int função(parametros) {
     //   condição}
     fat(int n){ // função número fatorial.
        if (n == 0) {
            return 1;
        }
        if (n>0)
        {
           return n * fat(n-1);
        }
        return -1;
     }
     int main () {
        int n;
        scanf("%d", &n);
        printf("%d", fat(n));
     
     return 0;
    }