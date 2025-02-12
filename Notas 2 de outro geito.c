#include <stdio.h>

int main() {
  int n;
  int notas[30];
  float media;
  long long soma = 0; // Use long long para maior precisão

  // Loop para calcular a média várias vezes
  while (1) {
    // Leitura do número de notas
    printf("Digite o número de notas (0 para sair): ");
    scanf("%d", &n);

    // Validação do número de notas
    if (n < 1 || n > 30) {
      printf("Número de notas inválido. Digite um número entre 1 e 30.\n");
      continue;
    }

    // Leitura das notas
    for (int i = 0; i < n; i++) {
      printf("Digite a nota %d: ", i + 1);
      scanf("%d", &notas[i]);

      // Validação das notas
      if (notas[i] < 0 || notas[i] > 100) {
        printf("Nota %d inválida. As notas devem estar entre 0 e 100.\n", i + 1);
        return 1;
      }
      soma += notas[i];
    }

    // Cálculo e exibição da média
    media = (float)soma / n;
    printf("A média é: %.2f\n", media);

    // Verificação da aprovação
    if (media >= 6) {
      printf("Parabéns! Você foi aprovado com média %.2f. A média mínima para aprovação era 6.0.\n", media);
    } else {
      printf("Infelizmente, você não foi aprovado nesta disciplina. Sua média foi %.2f. Consulte o boletim oficial para mais informações e continue se esforçando nos próximos estudos.\n", media);
    }

    // Pergunta para continuar
    char continuar;
    printf("Deseja calcular a média novamente? (S/N) ");
    scanf(" %c", &continuar); // Consome caractere restante no buffer
    if (continuar != 'S' && continuar != 's') {
      break;
    }

    soma = 0; // Reinicializa a soma para o próximo cálculo
  }

  return 0;
}
