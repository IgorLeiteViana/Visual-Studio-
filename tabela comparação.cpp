#include <iostream>

void result(int solucao, int& peso, int& valor) {
    // Arrays de pesos e valores dos objetos (A, B, C, ..., P)
    int pesos[16] = {12, 3, 5, 4, 9, 1, 2, 3, 4, 1, 2, 4, 5, 2, 4, 1};
    int valores[16] = {4, 4, 8, 10, 15, 3, 1, 1, 2, 10, 20, 15, 10, 3, 4, 12};

    peso = 0;
    valor = 0;

    // Itera sobre cada bit da solução (16 bits no total)
    for (int i = 0; i < 16; ++i) {
        // Verifica se o i-ésimo bit está ligado (1) na solução
        if (solucao & (1 << i)) {
            // Se o bit está ligado, adiciona o peso e o valor do objeto correspondente
            peso += pesos[i];
            valor += valores[i];
        }
    }
}

int main() {
    int peso, valor;

    using namespace std;

    int solucao = 43690; // Exemplo 

    // Calcula o peso e o valor da solução
    result(solucao, peso, valor);

    // Verifica se o peso está dentro do limite da mochila (20Kg)
    bool dentroDoLimite = peso <= 20;

    // Imprime os resultados
    cout << "Peso: " << peso << "Kg\n";
    cout << "Valor: $" << valor << "\n";
    cout << "Dentro do limite: " << (dentroDoLimite ? "Sim" : "Nao") << "\n";

    return 0;
}
