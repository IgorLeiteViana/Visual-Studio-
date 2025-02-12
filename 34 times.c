#include <stdio.h>
#include<stdlib.h>
#include<string.h>
// tive que pesquisar para achar isso 
typedef struct Time {
  int vitorias;
  int derrotas;
  int empates;
  int gols_efetuados;
  int gols_sofridos;
  int cartoes_vermelhos;
} Time;

int main() {
  

  

  Time times[34];

  for (int i = 0; i < 34; i++) {
    printf("Digite o numero de vitorias \n %d: ", i + 1);
    scanf("%d", &times[i].vitorias);
    printf("Número de derrotas: ");
    scanf("%d", &times[i].derrotas);
    printf("Número de empates: ");
    scanf("%d", &times[i].empates);
    printf("Número de gols efetuados: ");
    scanf("%d", &times[i].gols_efetuados);
    printf("Número de gols sofridos: ");
    scanf("%d", &times[i].gols_sofridos);
    printf("Quantidade de cartões vermelhos recebidos: ");
    scanf("%d", &times[i].cartoes_vermelhos);
  }
  int maior_vitorias = 0, maior_derrotas = 0;
  int saldo_gols_total = 0;
  int count_cartoes_vermelhos = 0;

  for (int i = 0; i < 34; i++) {
    if (times[i].vitorias > maior_vitorias) {
    maior_vitorias = times[i].vitorias;
  }
    if (times[i].derrotas > maior_derrotas) {
    maior_derrotas = times[i].derrotas;
  }
  }

  // Cálculo do saldo de gols total

  for (int i = 0; i < 34; i++) {
    saldo_gols_total += times[i].gols_efetuados - times[i].gols_sofridos;
  }

  // Contagem de times com mais de 3 cartões vermelhos

  for (int i = 0; i < 34; i++) {
    if (times[i].cartoes_vermelhos > 3) {
      count_cartoes_vermelhos++;
    }
  }

  // Cálculo da média de saldo de gols

  float media_saldo_gols = (float)saldo_gols_total / 34.0f;

  // Cálculo da porcentagem de times com mais de 3 cartões vermelhos

  float porcentagem_cartoes_vermelhos = (float)count_cartoes_vermelhos / 34.0f * 100.0f;

  // Exibindo os resultados

  printf("\n**Estatísticas da Copa do Mundo:**\n");
  printf("Maior número de vitórias: %d\n", maior_vitorias);
  printf("Maior número de derrotas: %d\n", maior_derrotas);
  printf("Saldo médio de gols: %.2f\n", media_saldo_gols);
  printf("Percentagem de times com mais de 3 cartões vermelhos: %.2f%%\n",
         porcentagem_cartoes_vermelhos);

  return 0;
    }

