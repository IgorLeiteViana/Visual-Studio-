#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define JOGADOR_1 1
#define JOGADOR_2 2

// Representação do tabuleiro de xadrez
char tabuleiro[8][8];

// Função para imprimir o tabuleiro
void imprimirTabuleiro() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf(" %c |", tabuleiro[i][j]);
        }
        printf("\n");
        if (i < 7) {
            printf("---+---+---+---+---+---+---+---\n");
        }
    }
}

// Função para verificar se o movimento é válido
int verificarMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino, int jogador) {
    // Verificar se a posição origem e destino estão dentro do tabuleiro
    if (linhaOrigem < 0 || linhaOrigem >= 8 || colunaOrigem < 0 || colunaOrigem >= 8 || linhaDestino < 0 || linhaDestino >= 8 || colunaDestino < 0 || colunaDestino >= 8) {
        return 0; // Movimento fora do tabuleiro
    }

    // Verificar se há uma peça na posição de origem
    char peca = tabuleiro[linhaOrigem][colunaOrigem];
    if (peca == ' ') {
        return 0; // Sem peça para mover
    }

    // Verificar se a peça pertence ao jogador atual
    if ((jogador == JOGADOR_1 && peca >= 'a' && peca <= 'z') || (jogador == JOGADOR_2 && peca >= 'A' && peca <= 'Z')) {
        return 0; // Tentativa de mover peça do adversário
    }

    // Verificar se a posição destino está vazia ou ocupada por uma peça do adversário
    char destino = tabuleiro[linhaDestino][colunaDestino];
    if (destino != ' ') {
        // Se a posição destino está ocupada por uma peça do mesmo jogador, movimento inválido
        if ((jogador == JOGADOR_1 && destino >= 'A' && destino <= 'Z') || (jogador == JOGADOR_2 && destino >= 'a' && destino <= 'z')) {
            return 0; // Posição destino ocupada por peça do mesmo jogador
        }
    }


    // Regras específicas para cada peça
    switch (peca) {
        case 'P':
        case 'p':
            if (linhaDestino == linhaOrigem + (peca == 'P' ? 1 : -1) && colunaDestino == colunaOrigem && destino == ' ') {
                return 1; // Movimento de um passo para frente
            } else if (linhaDestino == linhaOrigem + (peca == 'P' ? 1 : -1) && abs(colunaDestino - colunaOrigem) == 1 && destino != ' ') {
                return 1; // Captura na diagonal
            }
            break;

        case 'C':
        case 'c':
            if ((abs(linhaDestino - linhaOrigem) == 2 && abs(colunaDestino - colunaOrigem) == 1) || (abs(linhaDestino - linhaOrigem) == 1 && abs(colunaDestino - colunaOrigem) == 2)) {
                return 1; // Movimento válido do cavalo
            }
            break;

        case 'K':
        case 'k':
            if (abs(linhaDestino - linhaOrigem) <= 1 && abs(colunaDestino - colunaOrigem) <= 1) {
                return 1; // Movimento válido do rei
            }
            break;

        case 'Q': // Rainha
        case 'q':
            if ((linhaDestino == linhaOrigem || colunaDestino == colunaOrigem) || 
                (abs(linhaDestino - linhaOrigem) == abs(colunaDestino - colunaOrigem))) {
                return 1; // Movimento válido da rainha (torre + bispo)
            }
            break;

        case 'T': // Torre
        case 't':
            if (linhaDestino == linhaOrigem || colunaDestino == colunaOrigem) {
                return 1; // Movimento válido da torre (linha reta)
            }
            break;

        case 'B': // Bispo
        case 'b':
            if (abs(linhaDestino - linhaOrigem) == abs(colunaDestino - colunaOrigem)) {
                return 1; // Movimento válido do bispo (diagonal)
            }
            break;
    }

    return 1; // Movimento inválido por padrão
}

// Função para fazer um movimento válido
void fazerMovimento(int linhaOrigem, int colunaOrigem, int linhaDestino, int colunaDestino) {
    // Captura a peça do destino, se houver
    char destino = tabuleiro[linhaDestino][colunaDestino];
    if (destino!=' ') {
        printf("Capturou a peça %c!\n", destino);
    }

    // Movimenta a peça para o destino
    tabuleiro[linhaDestino][colunaDestino] = tabuleiro[linhaOrigem][colunaOrigem];
    tabuleiro[linhaOrigem][colunaOrigem] =' '; // Limpa a posição de origem
}
int main() {
    // Inicializar o tabuleiro
    int vitoria = 0; // Inicializar vitoria com 0

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            tabuleiro[i][j] = ' '; // Inicializar com espaços vazios
        }
    }

    // Adicionar as peças de xadrez para o jogador 1 (branco)
    tabuleiro[0][0] = 'T'; // Torre
    tabuleiro[0][1] = 'C'; // Cavalo
    tabuleiro[0][2] = 'B'; // Bispo
    tabuleiro[0][3] = 'Q'; // Rainha
    tabuleiro[0][4] = 'K'; // Rei
    tabuleiro[0][5] = 'B'; // Bispo
    tabuleiro[0][6] = 'C'; // Cavalo
    tabuleiro[0][7] = 'T'; // Torre

    // Adicionar as peças de xadrez para o jogador 2 (preto)
    tabuleiro[7][0] = 't'; // Torre
    tabuleiro[7][1] = 'c'; // Cavalo
    tabuleiro[7][2] = 'b'; // Bispo
    tabuleiro[7][3] = 'q'; // Rainha
    tabuleiro[7][4] = 'k'; // Rei
    tabuleiro[7][5] = 'b'; // Bispo
    tabuleiro[7][6] = 'c'; // Cavalo
    tabuleiro[7][7] = 't'; // Torre

    // Adicionar peões para ambos os jogadores 
    for (int i = 0; i < 8; i++) {
        tabuleiro[1][i] = 'P'; // Peão 1
        tabuleiro[6][i] = 'p'; // Peão 2
    }

    // Loop do jogo
    int jogador = JOGADOR_1;
    while (1) {
        // Imprimir o tabuleiro
        imprimirTabuleiro();

        // Pedir ao jogador para fazer um movimento
        printf("Jogador %d, digite as coordenadas (linhaOrigem colunaOrigem linhaDestino colunaDestino): ", jogador);
        int linhaOrigem, colunaOrigem, linhaDestino, colunaDestino;
        scanf("%d %d %d %d", &linhaOrigem, &colunaOrigem, &linhaDestino, &colunaDestino);

        // Verificar se o movimento é válido
        if (verificarMovimento(linhaOrigem, colunaOrigem, linhaDestino, colunaDestino, jogador)) {
        // Fazer o movimento
        fazerMovimento(linhaOrigem, colunaOrigem, linhaDestino, colunaDestino);

            // Verificar se o jogador atual capturou o rei do adversário
            if ((jogador == JOGADOR_1 && tabuleiro[linhaDestino][colunaDestino] == 'k') || 
                (jogador == JOGADOR_2 && tabuleiro[linhaDestino][colunaDestino] == 'K')) {
                vitoria = jogador;
                break;
            }

            // Alternar entre os jogadores
            jogador = (jogador == JOGADOR_1) ? JOGADOR_2 : JOGADOR_1;
        } else {
            printf("Movimento inválido. Tente novamente.\n");
        }
    }

    // Imprimir o tabuleiro final
    imprimirTabuleiro();

    // Anunciar o vencedor
    printf("Jogador %d venceu!\n", vitoria);
    return 0;
}   
