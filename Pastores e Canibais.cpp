#include <iostream>

using namespace std;

int main() {
    int pastores = 3, canibais = 3; // Quantidade inicial de pastores e canibais
    int escolha;

    // Loop da situação atual, até todos atravessarem
    while (pastores > 0 || canibais > 0) {
        cout << "Escolha sua acao: \n";
        cout << "1 - Levar dois canibais para a margem\n";
        cout << "2 - Levar dois pastores para a margem\n";
        cout << "3 - Levar um pastor e um canibal para a margem\n";
        cout << "4 - Mostrar situacao atual\n";
        cin >> escolha;

        if (escolha == 1) {  // Levar dois canibais
            if (canibais >= 2) {
                cout << "Você leva dois canibais para a margem final.\n";
                canibais -= 2;
            } else {
                cout << "Não há canibais suficientes na margem inicial.\n";
            }
        } else if (escolha == 2) {  // Levar dois pastores
            if (pastores >= 2) {
                cout << "Você leva dois pastores para a margem final.\n";
                pastores -= 2;
            } else {
                cout << "Não há pastores suficientes na margem inicial.\n";
            }
        } else if (escolha == 3) {  // Levar um pastor e um canibal
            if (pastores >= 1 && canibais >= 1) {
                cout << "Você leva um pastor e um canibal para a margem final.\n";
                pastores -= 1;
                canibais -= 1;
            } else {
                cout << "Não há pastores ou canibais suficientes na margem inicial.\n";
            }
        } else if (escolha == 4) {  // Mostrar situação atual
            cout << "Situação atual:\n";
            cout << "Pastores restantes na margem inicial: " << pastores << endl;
            cout << "Canibais restantes na margem inicial: " << canibais << endl;
        } else {
            cout << "Escolha inválida. Tente novamente.\n";
        }

        // Verificação de condições perigosas (condição de derrota)
        if (pastores > 0 && pastores < canibais) {
            cout << "Algo deu errado! Os canibais comeram os pastores na margem inicial!\n";
            break;
        }
    }

    if (pastores == 0 && canibais == 0) {
        cout << "Parabéns! Você conseguiu atravessar todos em segurança!\n";
    }

    return 0;
}




   