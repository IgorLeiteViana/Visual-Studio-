#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
  int valor1, valor2, soma, multi, div, sub, numero, resto, pot1, pot2;



  // Entrada dos valores e da operação
  printf("Digite o primeiro valor: ");
  scanf("%d", &valor1);//& significa endereço

  printf("Digite o segundo valor: ");
  scanf("%d", &valor2);

  soma = valor1 + valor2;
  div = valor1 / valor2;
  multi = valor1 * valor2;
  sub = valor1 - valor2;
  pot1 = pow(valor1, valor2);
  pot2 = pow(valor2, valor1);

  printf("o valor da soma de %d e %d e o resultado é: %d \n",valor1,valor2, soma);
  printf("divisao de  %d e %d  e o resultado é: %d \n",valor1,valor2, div);
  printf("multiplicação de  %d e %d  e o resultado é: %d \n",valor1,valor2, multi);
  printf("subtração de  %d e %d e o resultado é: %d \n",valor1,valor2, sub);


  printf("digite um numero inteiro\n");
  scanf("%d", &numero);

  resto = numero % 2; // dividido por 2 

  printf("resto da divisão por 2 é: %d\n", resto);
  system ("pause");
  return 0;
}