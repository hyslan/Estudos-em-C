#include <stdio.h>

int soma_digitos(int n) {
    int soma_posicao = 0;
    
    if (n == 0) {
        return ;
    }
   
   
    while(n > 0){
    soma_posicao += n % 10;
    n = (n /10);
    }

    return soma_posicao;
}

int main() {
    int n;
    scanf("%d", &n);
    int resultado = soma_digitos(n);
    
    printf("%d\n", resultado);
    return 0;
}
