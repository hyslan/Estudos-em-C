#include <stdio.h>
    // segundos pra hora = 1 / 3600, segundos pra hora = 1 / 60
    
void converte_hora(int total_segundos, int *hora, int *min, int *seg)
    {
        *hora = total_segundos / 3600;
         *min = (total_segundos % 3600) / 60;
         *seg = total_segundos % 60;
    }
// * = identifica a variável como um ponteiro
// & endereço de uma variavel

    int main(){
        int total_segundos, hora, min, seg;
        total_segundos >= 0;
            scanf("%d", &total_segundos);
            converte_hora(total_segundos, &hora, &min, &seg);
        printf("%02d:%02d:%02d\n", hora, min, seg);
        return 0;
    }