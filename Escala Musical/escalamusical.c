#include <stdio.h>

// Vetor com 12 notas musicais
char* notas[] = {"C", "C#","D","D#","E","F","F#", "G","G#","A","A#","B"};

int main(){

   int posicao;
   
   // Lendo a posicao a ser lida no vetor de notas
   scanf("%d", &posicao);
   
   //Imprimir nota na posicao informada
   printf("%s",notas[posicao]);
   
   // Imprimir as proximas notas estabelecendo os intervalos da escala maior
   printf(" -- %s -- %s - %s -- %s -- %s -- %s - %s", notas[posicao+2], notas[posicao+4],  notas[posicao+5], notas[posicao+7], notas[posicao+9], notas[posicao+11], notas[posicao]);
   
   
   return 0;
}
