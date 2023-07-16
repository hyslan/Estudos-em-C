#include <stdio.h> 
#include <string.h> 
  
int main() 
{ 
    int n;
    scanf("%d\n", &n); 
  
    for (int i = 0; i < n; i++) { 
        char cep[20]; 
        scanf(" %[^\n]s\n", cep); 
          
        int n = strlen(cep); 
        char novo_cep[20]=""; 
          
        for (int j = 0; j < n; j++) { 
            if (cep[j] >= '0' && cep[j] <= '9') { 
                strncat(novo_cep, &cep[j], 1); 
            } 
        } 
        printf("%s\n", novo_cep); 
    }
    return 0; 
} 
