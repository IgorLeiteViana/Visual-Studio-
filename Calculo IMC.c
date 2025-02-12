#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  float Peso, Altura, IMC;
  char classificacao[20];

  // Leitura do peso e altura
  printf("Olá! Vamos calcular o seu IMC.\n");
  printf("Digite seu peso: ");
  scanf("%f", &Peso);
  printf("Digite sua altura: ");
  scanf("%f", &Altura);

  // Cálculo do IMC
  IMC = Peso / (Altura * Altura);

  // Cálculo da classificação do IMC
  if (IMC < 17) {
    strcpy(classificacao, "Muito abaixo do peso");
  } else if (IMC >= 17 && IMC <= 18.49) {
    strcpy(classificacao, "Abaixo do peso");
  } else if (IMC >= 18.50 && IMC <= 24.99) {
    strcpy(classificacao, "Peso normal");
  } else if (IMC >= 25 && IMC <= 29.99) {
    strcpy(classificacao, "Sobrepeso");
  } else if (IMC >= 30 && IMC <= 34.49) {
    strcpy(classificacao, "Obesidade grau I");
  } else if (IMC >= 35 && IMC <= 40) {
    strcpy(classificacao, "Obesidade grau II");
  } else {
    strcpy(classificacao, "Obesidade grau III");
  }

  // Impressão dos resultados
  printf("Seu peso é de %.2f kg, sua altura é de %.2f m e seu IMC é de %.2f.\n", Peso, Altura, IMC);
  printf("Sua classificação de IMC é: %s\n", classificacao);

  return 0;
}
