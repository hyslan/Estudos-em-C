#include <stdio.h>
#include <string.h>

// Função que recebe um CPF como argumento e imprime na tela se é válido ou não
void printValidation( char *CPF ) {
  // Variáveis para armazenar as primeira e segunda partes dos números
  // antes dos dois dígitos verificadores
  int firstPart = 0;
  int secondPart = 0;


  // Iterar sobre a string contida no CPF
  for (int i = 0; i < strlen(CPF); i++) {

    // Ignorar quaisquer caracteres especiais
    if (CPF[i] == '.' || CPF[i] == '-' || CPF[i] == ' ')
      continue;

    // Acumular o valor contendo em cada posição numa variável temporária
    // Converter o caso de char para int apropriadamente para cada dígitos 
    int tempValue = CPF[i] - '0';

    // Para os primeiros nove dígitos calcular a soma por multiplicar pelos 
    //valores 10, 9, 8, 7, 6, 5, 4, 3, 2
    if (i < 9)
      firstPart += tempValue * (10 - i);


    // Para os últimos nove dígitos calcular a soma por multiplicar pelos 
    //valores 11, 10, 9, 8, 7, 6, 5, 4, 3, 
    if (i > 8)
      secondPart += tempValue * (11 - (i-9));

  }

  // Aplicar o resto da divisão por 11 para a variável primPart
  firstPart %= 11;
  // Se o resultado da divisão for maior ou igual à 2, resultado é 11 menos o valor
  if (firstPart >= 2)
    firstPart = 11 - firstPart;

  // Aplicar o resto da divisão por 11 para a variável secondPart
  secondPart %= 11;
  // Se o resultado da divisão for maior ou igual à 2, resultado é 11 menos o valor
  if (secondPart >= 2)
    secondPart = 11 - secondPart;

  // Obter o primeiro e segundo dígitos do CPF para comparação
  int firstDV = CPF[9] - '0';
  int seconDV = CPF[10] - '0';

  // Verificar se os valores obtidos são equivalentes aos dígitos verificadores 
  // presentes na string de argumento passada para a função printValidation
  if (firstDV == firstPart && seconDV == secondPart) {
    printf("SIM\n");
  } 
  else {
    printf("NAO\n");
  }

}  

int main(int argc, char const *argv[]) {

  // Exemplo de execução do CPF
 // char CPF[] = "200.225.650-00";
  printValidation(CPF);

  return 0;
}
