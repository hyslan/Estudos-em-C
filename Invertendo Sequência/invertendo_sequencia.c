#include <stdio.h>

int main () 
{
    //declara array para armazenar até 30 inteiros
    int vetor[30];
    int count = 0;
    
    printf("Insira elementos inteiros na sequência, terminando com zero!\n");

    //leitura de dados
    do 
    {
        scanf("%d", &vetor[count++]);  
    } while (vetor[count - 1] != 0 && count <= 29);
    
    printf("\nSequência Inversa:\n"); 
    for (int i = (count - 2); i >= 0; i--) {
        printf("%d ", vetor[i]); 
    }
    printf("\n");

    return 0;
}

// com limitador:
/* #include <stdio.h>

#define MAX 30

int main() {
    int vetor[MAX], i, qtd = 0;
    
    // Loop para receber os valores do usuário
    printf("Digite uma sequência de números inteiros: \n");
    do {
        scanf("%d", &vetor[qtd]);
    } while (vetor[qtd++] != 0 && qtd < MAX);
    
    // Imprime na sequência inversa
    for (i = qtd-2; i >= 0; i--)
        printf("%d\n", vetor[i]);

    return 0;
}

 */