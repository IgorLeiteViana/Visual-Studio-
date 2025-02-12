#include <stdio.h>

int main() {
    int matriz[3][3];
    int i = 0, j = 0;

    // Preenchendo a matriz com valores fornecidos pelo usuário
    printf("Insira os valores para a matriz 3x3:\n");

    do {
        j = 0; // Resetar o índice da coluna para 0 para cada nova linha
        do {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            j++;
        } while (j < 3);
        i++;
    } while (i < 3);

    // Imprimindo a matriz
    printf("A matriz 3x3 é:\n");

    i = 0; // Resetar o índice da linha para 0 para impressão
    do {
        j = 0; // Resetar o índice da coluna para 0 para cada nova linha
        do {
            printf("%d ", matriz[i][j]);
            j++;
        } while (j < 3);
        printf("\n"); // Nova linha após imprimir cada linha da matriz
        i++;
    } while (i < 3);

    return 0;
}
