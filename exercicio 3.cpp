#include <iostream>
#include <iomanip>  // Para std::setw

// Função para posicionar o cursor (simulada aqui)
void posiciona(int x, int y) {
    std::cout << "\033[" << y << ";" << x << "H";
}

void desenharBorda() {
    // Limpa a tela (para que a borda apareça limpa)
    std::cout << "\033[2J";

    // Desenha a primeira linha de borda
    for (int x = 1; x <= 60; ++x) {
        posiciona(x, 1);
        std::cout << '+';
    }

    // Desenha as bordas laterais
    for (int y = 2; y <= 9; ++y) {
        posiciona(1, y);   // Borda esquerda
        std::cout << '+';
        posiciona(60, y);  // Borda direita
        std::cout << '+';
    }

    // Desenha a última linha de borda
    for (int x = 1; x <= 60; ++x) {
        posiciona(x, 10);
        std::cout << '+';
    }

    // Restaura a posição do cursor para evitar deixar na última linha
    std::cout << "\033[11;1H";
}

int main() {
    desenharBorda();
    return 0;
}
