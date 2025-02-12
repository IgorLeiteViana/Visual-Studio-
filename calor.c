#include <stdio.h>
#include<stdlib.h>
int main() {
  float celsius, fahrenheit;

  // Entrada da temperatura em Celsius
  printf("Digite a temperatura em graus Celsius: ");
  scanf("%f", &celsius);

  // Cálculo da temperatura em Fahrenheit
  fahrenheit = ((9 * celsius) / 5) + 32;

  // Impressão da temperatura em Fahrenheit
  printf("A temperatura em Fahrenheit é: %.2f\n", fahrenheit);

  return 0;
}
