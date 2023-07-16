#include <stdio.h>
#include <string.h>

// Número máximo de caracteres no CEP: 20
#define MAX_CARACTERES 20 

int main(void) {
    int n;
    scanf("%d\n", &n);

    char ceps[n][MAX_CARACTERES];
    for (int i = 0; i < n; i++){
        scanf("%s \n" , &ceps[i]);
        int tam = strlen(ceps[i]);

        // Remove qualquer caracter, a não ser dígitos
        for (int j = 0; j<tam; j++){
            if (ceps[i][j] < 48 || ceps[i][j] > 57){
                for (int k = j; k < tam-1; k++){
                    ceps[i][k] = ceps[i][k+1];
                }
                tam--;
                j--;
            }
        }
        //Printa os dígitos descobertos
        for (int m = 0; m < tam; m++){
            printf("%c", ceps[i][m]);
        }
        printf("\n");
    }
    return 0;
} 
