#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    string escolha;
    float x, x2;
    float Soma, Divisao, multiplicacao, diminuicao;

    cout << "Digite um numero\n";
    cin >> x;
    cout << "Digite outro numero\n";
    cin >> x2;
    cout << "Escolha entre Soma, Divisao, multiplicacao ou diminuicao \n";
    cin >> escolha;

    //Operações corretas
    Soma = x + x2;                 // Soma correta
    Divisao = x / x2;              // Divisão correta
    multiplicacao = x * x2;        // Multiplicação correta
    diminuicao = x - x2;           // Subtração correta

    // Comparar a escolha e exibir o resultado adequado
    if (escolha == "Soma" || escolha == "S" || escolha == "soma" || escolha == "s") {
        cout << "O resultado da soma: " << Soma << "\n";
    } else if (escolha == "Divisao" || escolha == "D" || escolha == "divisao" || escolha == "d") {
        if (x2 != 0) {  // Evitar divisão por zero
            cout << "O resultado da divisao: " << Divisao << "\n";
        } else {
            cout << "Erro: Divisão por zero não permitida.\n";
        }
    } else if (escolha == "multiplicacao" || escolha == "M" || escolha == "Multiplicacao" || escolha == "m") {
        cout << "O resultado da multiplicacao: " << multiplicacao << "\n";
    } else if (escolha == "diminuicao" || escolha == "D" || escolha == "Diminuicao" || escolha == "d") {
        cout << "O resultado da diminuicao: " << diminuicao << "\n";
    } else {
        cout << "Escolha invalida \n";
    }

    return 0;
}
