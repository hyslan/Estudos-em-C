#include <stdio.h>
    int main() {
       int num1, num2, num3;
       int  square_num1,  square_num2,  square_num3;
         scanf("%d %d %d", &num1, &num2, &num3);
           
           square_num1 = num1 * num1;
            square_num2 = num2 * num2;
            square_num3 = num3 * num3;

            if (square_num1 == square_num2 + square_num3)
            {
                printf("1 %d", square_num1);
            }
                else if (square_num2 == square_num3 + square_num1)
                {
                    printf("1 %d", square_num2);
                }
                else if (square_num3 == square_num1 + square_num2)
                {
                    printf("1 %d", square_num3);
                }
            else {
                printf("0");
            }
            
    return 0;
    }