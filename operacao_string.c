#include <stdio.h>
#include <string.h>

// Declarando Strings 
char S1[20], S2[20];

int main (){
    
    printf("Digite a String S1: ");
    scanf("%s", S1);

    printf("Digite a String S2: ");
    scanf("%s", S2);

    // Imprimir o tamanho da string S1:
    printf("Tamanho da String S1: %d\n", strlen(S1));
    
    // Comparar a string S1 com a string S2 
      printf("Comparação entre S1 e S2: %d\n", strcmp(S1,S2));

      // Concatenar a string S1 com a S2 
    strcat(S1,S2);
    printf("Concatenação de S1 e S2: %s\n", S1);

    // Imprimir a string S1 de forma reversa
    reverseString(S1);
      
    // Imprimir S1 e S2 em ordem alfabética 
    char *temp;
    int i, j;
     
    for (i = 0; i < strlen(S1) - 1; i++) {
        for (j = i + 1; j < strlen(S1); j++){
            if (S1[i] > S1[j]){
                temp = S1[i];
                S1[i] = S1[j];
                S1[j] = temp;
            }
        }
    }
    
    printf("S1 em ordem alfabetica: %s\n", S1); 

    return 0;
}

// Função para imprimir string reversed 
void reverseString(char s[]) 
{ 
    int length = strlen(s), i; 
    for (i = length - 1; i >= 0; i--) 
        printf("%c", s[i]); 
    printf("\n"); 
} 
