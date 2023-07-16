#include <stdio.h>
    // PA Recursiva com While
    int main() {
        int termo1, razao, n;
        int termo_atual, pa;

        scanf("%d %d %d", &termo1, &razao, &n);
        pa = termo1;
            while (termo_atual <= n)
            {
                pa = pa + razao;
                termo_atual = termo_atual + 1;
            }
            printf("%d", pa);
    }