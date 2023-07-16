#include <stdio.h>

    int main() {
      float entrada ,  media, soma = 0;
      int negativo = 0, qtdepositivos = 0;
    
     scanf("%f", &entrada);
        for (; entrada != 0;)
        {              
                    if (entrada < 0)
                    {
                        negativo ++;
                    }
                   else{
                    soma += entrada;
                    qtdepositivos++;
                   }
                  scanf("%f", &entrada); 
        }
                   media = soma / qtdepositivos;
                    printf("%.2f\n%d", media, negativo);
                    
                
    }