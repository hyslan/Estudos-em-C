#include <stdio.h>
    int calcula_pa(int termo1, int razao, int n)
    {
        //termo n = termo1 + razao * (n-1)
        if (n == 1)
        {
            return termo1;
        }
        return razao + calcula_pa(termo1, razao, n-1);
    }

    int main(){
        int termo1, razao, n;
        scanf("%d %d %d", &termo1, &razao, &n);

        printf("%d", calcula_pa(termo1, razao, n));
    }