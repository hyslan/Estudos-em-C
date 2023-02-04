#include <stdio.h>
    int exponenciacao(x, y){
        if (y == 0)
        {
          //  printf("%d", 1);
          return 1;
        }
        return x * exponenciacao(x, y-1);
    }

    int main(){
        int x, y;
        scanf("%d %d", &x, &y);
            printf("%d", exponenciacao(x,y));

            return 0;
    }