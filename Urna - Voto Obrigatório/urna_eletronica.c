#include <stdio.h>

    int main(){
        int eleitores = 0, candidato1 = 0, candidato2 = 0, candidato3 = 0,
        candidato4 = 0, nulo = 0, voto;
        
        for (eleitores; voto != -1; eleitores++){
            scanf("%d", &voto);
            if(voto == -1){
                goto resultado; 
            }
            
            switch (voto)
            {
                case 1:
                candidato1++;
                break;
                
                case 2:
                candidato2++;
                break;
                
                case 3:
                candidato3++;
                break;
                
                case 4:
                candidato4++;
                break;
                
                default : // aqui não aceita os operadores relativos 
                nulo++;
                break;
               
            }
        }
        resultado:
        printf("eleitores: %d\n", eleitores);
        printf("candidato 1: %d\n", candidato1);
         printf("candidato 2: %d\n", candidato2);
          printf("candidato 3: %d\n", candidato3);
           printf("candidato 4: %d\n", candidato4);
            printf("nulos: %d\n", nulo);
            
            return 0;
    }