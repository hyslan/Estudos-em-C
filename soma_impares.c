#include <stdio.h>
    int soma_impares(int atual, int final){
        if (atual > final) {
            return 0;
        }
        if (atual % 2 !=0)
        {
            return atual + soma_impares(atual+2, final);
        }
        return soma_impares(atual+1, final);
}
    int main() {
        int x, y;
        scanf("%d %d", &x, &y);
        printf("%d", soma_impares(x, y));

    }