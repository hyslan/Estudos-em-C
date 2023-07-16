#include <stdio.h>

int conta_digitos(int n) {
    int contador = 0;
    if (n == 0) {
        return 1;
    }
    while (n != 0) {
        n /= 10;
        contador++;
    }
    return contador;
}

int main() {
    int n;
    scanf("%d", &n);
    int resultado = conta_digitos(n);
    printf("%d\n", resultado);
    return 0;
}
