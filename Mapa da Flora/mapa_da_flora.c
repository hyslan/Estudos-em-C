#include <stdio.h>
    

    int main (){
        int  i, floresta = 0, terreno = 0;
        char vegetacao;
        float area, qtdelista;
        scanf("%f", &qtdelista);
        
            for ( i = 0; i != qtdelista; i++)
            {
                scanf(" %c", &vegetacao);
                    if (vegetacao == '#')
                    {
                       floresta++;
                    }
                    else{
                        terreno++;
                    }

            }
            area =  (floresta / qtdelista) * 100;
            

        printf("%.0f\n", qtdelista);
        
        printf("%.2f\n", area);
        
        return 0;
    }