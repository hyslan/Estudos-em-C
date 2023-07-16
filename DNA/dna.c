#include <stdio.h>
#include <string.h>

int main() {
    // Declaração das variáveis
    int i, N;
    char seq1[100], seq2[100];

    // Leitura da entrada 
scanf("%d", &N);
scanf("%s", seq1);
scanf("%s", seq2);

// Verificando as mutações 
int flag = 0;
for(i=0; i<N; i++) {
    if((seq1[i] == 'A' && seq2[i] != 'T') || (seq1[i] == 'T' && seq2[i] != 'A') ||
       (seq1[i] == 'C' && seq2[i] != 'G') || (seq1[i] == 'G' && seq2[i] != 'C')) {
        printf("%d %c %c\n", i, seq1[i], seq2[i]);
        flag = 1;
    }
}

// Imprimindo a saída
if(flag == 0)
    printf("-1");

return 0;

}