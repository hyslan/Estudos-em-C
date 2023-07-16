#include <stdio.h>

int main() {
    // Número de átomos
    int N; 
    // Energia inicial do sistema
    int X;
    // Energia gasta na reação
    int energy_used = 0;
    // Isótopo
    int isotope; 
    int i;
    scanf("%d", &N);
    scanf("%d", &X);

    // Para cada átomo simulamos a reação
    for (int i = 0; i < N; i++) {
        scanf("%d", &isotope);

        int energy_req = isotope * 10;

        // Verificamos se tem energia suficiente
        if ((X - energy_used) >= energy_req) {
            // Caso seja, começamos a reação
            X -= energy_used;
            energy_used = energy_req;
            X += (energy_used * 1.5);
        } else {
            // Caso contrario saimos do loop e exibimos a mensagem
            printf("Reacao nao finalizada: %d\n", energy_req - (X - energy_used));
            break;
        }
    }

    X -= energy_used; // Adicionando linha ao código para corrigir a saída não mostrada

    // Se chegar até aqui é porque a reação foi concluida
    if (i == N) {
        printf("Reacao finalizada: %d\n", X);
    }

    return 0;
}
