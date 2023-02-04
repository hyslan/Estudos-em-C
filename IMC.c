#include <stdio.h>
    int main() {
           float  massa, altura;
           float imc; 

           scanf("%f %f", &massa, &altura);
imc = (massa / (altura * altura)); 
    
   // printf("%f", imc);
    if (imc <= 18.5)
    {
        printf("Magreza");
    }
    else if (imc <= 25.0){
        printf("Saudavel");
    }
    else if (imc <= 30.0){
        printf("Sobrepeso");
    }
    else if (imc <= 35.0){
        printf("Obesidade Grau I");
    }
    else if (imc <= 40.0){
        printf("Obesidade Grau II");
    }
    else if (imc >= 40.0){
        printf("Obesidade Grau III");
    }
        return 0;
    }