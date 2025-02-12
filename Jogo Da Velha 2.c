#include <stdlib.h>
#include <stdio.h>

void dor(char jogodavelha[3][3]){
    printf(" %c | %c | %c\n", jogodavelha[0][0], jogodavelha[0][1], jogodavelha[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", jogodavelha[1][0], jogodavelha[1][1], jogodavelha[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", jogodavelha[2][0], jogodavelha[2][1], jogodavelha[2][2]);

    return;
}

int main() {
    char jogodavelha[3][3], jogador;
    int i, j, rodada, linha, coluna, vitoria = 0; // Inicializando vitoria com 0
    char JogarNovamente;
    

    do {
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                jogodavelha[i][j] = ' ';
                
            }
        }
    dor(jogodavelha);
        rodada = 1;
        for (rodada = 1; rodada <= 9 && vitoria == 0; rodada++) {

            // Define o jogador da rodada.
            if (rodada % 2 == 1) {
                jogador = 'X';
            } else {
                jogador = 'O';
            }

            do {
                printf("Digite as coordenadas (de 1 a 3) em que quer colocar o '%c': ", jogador);
                scanf("%d %d", &linha, &coluna);
            } while (linha < 1 || linha > 3 || coluna < 1 || coluna > 3 || jogodavelha[linha - 1][coluna - 1] != ' ');

            // Faz a jogada do jogador.
            jogodavelha[linha - 1][coluna - 1] = jogador;

            // Imprime o tabuleiro.
            dor(jogodavelha);

            // Verifica se o jogador ganhou.
            // Verifica se a linha onde jogou esta toda com o mesmo marcador.
            if (jogodavelha[linha - 1][0] == jogodavelha[linha - 1][1] && jogodavelha[linha - 1][1] == jogodavelha[linha - 1][2]) {
                vitoria = 1;
            } else {
                // Verifica se a coluna onde jogou esta toda com o mesmo marcador.
                if (jogodavelha[0][coluna - 1] == jogodavelha[1][coluna - 1] && jogodavelha[1][coluna - 1] == jogodavelha[2][coluna - 1]) {
                    vitoria = 1;
                } else {
                    // Verifica se jogou na diagonal principal e se todos os marcadores dela sao iguais.
                    if (linha == coluna && jogodavelha[0][0] == jogodavelha[1][1] && jogodavelha[1][1] == jogodavelha[2][2]) {
                        vitoria = 1;
                    } else {
                        // Verifica se jogou na diagonal secundaria e se todos os marcadores dela sao iguais.
                        if (linha + coluna == 4 && jogodavelha[0][2] == jogodavelha[1][1] && jogodavelha[1][1] == jogodavelha[2][0]) {
                            vitoria = 1;
                        }
                    }
                }
            }
        }

        if (vitoria == 0) {
            printf("\nDeu velha!\n");
        } else {
            printf("\nO jogador '%c' ganhou!\n", jogador);
        }

        printf("\nDeseja jogar novamente? (S/N): ");
        scanf(" %c", &JogarNovamente);

        system("pause"); // Modificado aqui
        return 0;
    } while (JogarNovamente == 'S' || JogarNovamente == 's');
    printf("\nJogo finalizado! Obrigado por jogar!");
}
