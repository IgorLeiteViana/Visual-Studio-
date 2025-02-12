#include <iostream>
#include <math.h>
using namespace std;

// Função para exibir o número em binário (16 bits)
void imprimirBinario(unsigned short &numero) {
    for (int i = 15; i >= 0; --i) {
        cout << ((numero & (1 << i)) ? '1' : '0');
    }
    cout << endl;
}

void imprimirBinario2(unsigned short &numero) {
    // Imprimir os bits de 15 a 8 
    for (int i = 15; i >= 8; --i) {
        cout << ((numero & (1 << i)) ? '1' : '0');
    }
}
void imprimirBinario3(unsigned short &numero) {
    // Imprimir os bits de 15 a 8
    for (int i = 15; i >= 8; --i) {
        cout << '0'; // Forçar saída como zero
    }
    for (int i = 7; i >= 0; --i) {
        cout << ((numero & (1 << i)) ? '1' : '0');
    }
    // Zerar os bits de 7 a 0 
    for (int i = 7; i >= 0; --i) {
        cout << '0'; // Forçar saída como zero
    }
}


// Função que calcula o peso e o valor com base na solução
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

    // Exemplo de números para teste binário
    int numero;
    unsigned short a = 60204;
    unsigned short b = 25000;
    unsigned short c = 12329;
    unsigned short d = 38054;
    unsigned short e = 1259;
    unsigned short f = 732;

    int *bin;
    int *bin2;
    int *bin3;
    bin = &numero;
    bin2 = &numero;
    bin3 = &numero;

    cout << "Número em binário (a = 60204): ";
    imprimirBinario2(a);
    cout << "Número em binário (b = 25000): ";
    imprimirBinario3(b);

    // Operação AND entre dois números
    unsigned short result_and = a & b;

    cout << "Resultado da operação AND entre 'a' e 'b' em binário: ";
    imprimirBinario(result_and);

    // Operação na mochila (problema dos 16 objetos)
    int peso, valor;
    int solucao = 43690; // Exemplo de solução em binário (arbitrário)

    // Calcula o peso e o valor da solução
    result(result_and, peso, valor);

    // Verifica se o peso está dentro do limite da mochila (20Kg)
    bool dentroDoLimite = peso <= 20;

    // Imprime os resultados do problema da mochila
    cout << "\nProblema da Mochila:\n";
    cout << "Solução em binário: ";
    imprimirBinario(result_and);
    cout << "Peso: " << peso << " Kg\n";
    cout << "Valor: $" << valor << "\n";
    cout << "Dentro do limite (20 Kg): " << (dentroDoLimite ? "Sim" : "Não") << "\n";

    return 0;
}

