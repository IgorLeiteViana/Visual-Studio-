#include <iostream>

using namespace std;

int main() {
    // Variáveis para rastrear onde cada um está (0: neste lado do rio, 1: outro lado do rio)
    int Homi = 0, Galo = 0, Arroz = 0, Cachorro = 0, escolha; 
    

    cout << "Um homem precisa atravessar um rio com um barco que possui capacidade de\n";
    cout << "transportar apenas ele e mais uma de suas tres cargas, que sao: um cachorro,\n";
    cout << "uma galinha e um saco de milho. O que o homem deve fazer para conseguir\n";
    cout << "atravessar o rio sem perder as suas cargas?\n";
    cout << "O cachorro nao pode ficar sozinho com a galinha, senao ele a come.\n";
    cout << "A galinha nao pode ficar sozinha com o arroz, senao ela o come.\n";
    cout << "Comeca no lado direito do rio e devece mover para esquerdo\n";
    cout << "Suas escolhas sao: \n";
    cout << "1 - Mover o arroz\n";
    cout << "2 - Mover o cachorro\n";
    cout << "3 - Mover a galinha\n";
    cout << "4 - Mover apenas o homem\n";
    cout << "5 - Mostrar a situacao atual\n";

    // Loop da situação atual , até algo de ruim ocorrer ou jogador ganhar
    while (Homi != 1 || Galo != 1 || Arroz != 1 || Cachorro != 1) {
        cout << "Escolha sua acao: ";
        cin >> escolha;

        if (escolha == 1) {  // Move o arroz
            if (Homi == Arroz) {  // Só pode mover se o homem estiver com o arroz
                Arroz = !Arroz;    // Move para o outro lado (0 -> 1 ou 1 -> 0)
                Homi = !Homi;      // O homem também se move
                cout << "O homem move o arroz para o outro lado do rio.\n";
            } else {
                cout << "O homem precisa estar com o arroz para movê-lo!\n";
            }
        } else if (escolha == 2) {  // Move o cachorro
            if (Homi == Cachorro) {
                Cachorro = !Cachorro;
                Homi = !Homi;   // O homem também se move
                cout << "O homem move o cachorro para o outro lado do rio.\n";
            } else {
                cout << "O homem precisa estar com o cachorro para movê-lo!\n";
            }
        } else if (escolha == 3) {  // Move a galinha
            if (Homi == Galo) {
                Galo = !Galo;
                Homi = !Homi; // O homem também se move
                cout << "O homem move a galinha para o outro lado do rio.\n";
            } else {
                cout << "O homem precisa estar com a galinha para movê-la!\n";
            }
        } else if (escolha == 4) {  // Move o homem sozinho
            Homi = !Homi;  // O homem se move para o outro lado
            cout << "O homem atravessa o rio sozinho.\n";
        } else if (escolha == 5) {  // Mostrar situação atual
            cout << "Situacao atual:\n";
            cout << "Homem: " << (Homi == 0 ? "Margem do Rio Direita" : "Margem do Rio Esquerda") << endl;
            cout << "Arroz: " << (Arroz == 0 ? "Margem do Rio Direita" : "Margem do Rio Esquerdao") << endl;
            cout << "Cachorro: " << (Cachorro == 0 ? "Margem do Rio Direita" : "Margem do Rio Esquerda") << endl;
            cout << "Galinha: " << (Galo == 0 ? "Margem do Rio Direita" : "Margem do Rio Esquerda") << endl;
        }

        // Verificação de condições perigosas ou seja condição de derrota
        if ((Cachorro == Galo && Homi != Cachorro) || (Galo == Arroz && Homi != Galo)) {
            cout << "Algo deu errado! O cachorro comeu a galinha ou a galinha comeu o arroz!\n";
            break;
        }
    }

    if (Homi == 1 && Galo == 1 && Arroz == 1 && Cachorro == 1) {
        cout << "Parabens! Voce conseguiu atravessar todos em segurança!\n";
    }

    return 0;
}

