#include <stdio.h>
//ASCII
// De numeral 65 a 90 é Maiúscula;
// De numeral 97 a 122 é Minúscula;


    int main(){
        char entrada;
        int i;
 
   for (;entrada != '0'; )
    {
    scanf(" %c", &entrada);
        if (entrada >= 'a' && entrada <= 'z')
        {
           printf("%d\n",1);
        }
       else if (entrada >= 'A' && entrada <= 'Z')
        {
            printf("%d\n",2);
        }
        else{
           printf("%d\n", -1);
        }  
    }
    
        return 0;
    }