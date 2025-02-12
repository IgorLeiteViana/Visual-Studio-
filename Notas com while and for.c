#include <stdio.h>
#include<stdlib.h>

float calcular_media(float notas[], int tamanho) {
  float soma = 0.0;
  for (int i = 0; i < tamanho; i++) {
    soma += notas[i];
  }
  return soma / tamanho;
}

int main() {
  int n;
  float notas[5];
  float media;

  // Loop para calcular a média várias vezes
  while (1) {
    // Leitura do número de notas
    printf("Digite o número de notas (0 para sair): ");
    scanf("%d", &n);

    // Leitura das notas
    if (n > 0 && n <= 30) {
      for (int i = 0; i < n; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
      }
    
      

      // Cálculo e exibição da média
      media = calcular_media(notas, n);
      printf("A média é: %.2f\n", media);

      // Verificação da aprovação
      if (media >= 6) {
        printf("Você foi aprovado pelo conselho estudantil, boa sorte!\n");
      } else {
        printf("Você não passou pela matéria, tente novamente ano que vem.\n");
      }
    } else {
      // Número de notas inválido
      printf("Número de notas inválido. Digite um número entre 1 e 5.\n");
    }

    // Pergunta para continuar
    char continuar;
    printf("Deseja calcular a média novamente? (S/N) ");
    scanf(" %c", &continuar);
    if (continuar != 'S' && continuar != 's') {
      break;
    }
  }

  return 0;
}
