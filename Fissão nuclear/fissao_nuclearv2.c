#include<stdio.h>
 
int main(){
    int N, X; // N = número de átomos; X = energia inicial do sistema
    int energiaConsumida, energiaGerada, energiaRemanescente;
    
    scanf("%d %d", &N, &X); //Ler os valores de N e X
    
    energiaConsumida = 0;
    energiaGerada = 0;
    energiaRemanescente = X; //Inicia a energia remanescente com o valor de X
    
    for(int i = 0; i < N; i++){ //Loop para percorrer todos os isótopos
        int isotopo;
        scanf("%d", &isotopo); //Ler o valor do istopo
        
        energiaConsumida += isotopo * 10; //Calcula a energia consumida
        
        if(energiaRemanescente < energiaConsumida){ //Verificando se a energia remanescente é suficiente para continuar a reação
            printf("Reacao nao finalizada \n%d\n", energiaConsumida - energiaRemanescente); //Imprimindo a mensagem requerida e a diferença entre a energia consumida e a energia remanescente
            return 0;
        }
        
        //Calculando a energia gerada pela reação
        energiaGerada += (isotopo * 10) * 0.5;
        
        //Calculando a energia remanescente
        energiaRemanescente = energiaRemanescente - energiaConsumida + energiaGerada;
    }
    printf("Reacao finalizada \n%d\n", energiaRemanescente); //Imprime a mensagem requerida seguinda da energia remanescente
    return 0;
}
