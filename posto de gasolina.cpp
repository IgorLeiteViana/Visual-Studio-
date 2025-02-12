#include <iostream>
using namespace std;

// Variáveis globais
float GAl = 0, ALC = 0, escolha = 0, sair = 0, TlV = 0;
float totalGasolina = 0, totalAlcool = 0, totalLitros = 0, lucro = 0;

int main() {
    do {
        cout << "Escolha uma opção: \n";
        cout << "1 Para Gasolina \n";
        cout << "2 Para Álcool \n";
        cout << "3 Para Sair \n";
        cin >> escolha;

        if (escolha == 1) {
            cout << "Quantos litros de gasolina você deseja abastecer? \n";
            cin >> GAl;
            TlV += GAl; // Total de litros vendidos
            totalGasolina += GAl; // Soma o total de gasolina vendida
            float valorGasolina = GAl * 3.30;
            
            // Desconto para gasolina
            if (GAl < 20) {
                valorGasolina -= GAl * 0.04 * 3.30; // Desconto de 4%
            } else {
                valorGasolina -= GAl * 0.06 * 3.30; // Desconto de 6%
            }

            cout << "O valor total a ser pago é: R$ " << valorGasolina << "\n";
            lucro += valorGasolina; // Adiciona ao lucro
        } 
        else if (escolha == 2) {
            cout << "Quantos litros de álcool você deseja abastecer? \n";
            cin >> ALC;
            TlV += ALC; // Total de litros vendidos
            totalAlcool += ALC; // Soma o total de álcool vendido
            float valorAlcool = ALC * 2.90;

            // Desconto para álcool
            if (ALC < 20) {
                valorAlcool -= ALC * 0.03 * 2.90; // Desconto de 3%
            } else {
                valorAlcool -= ALC * 0.05 * 2.90; // Desconto de 5%
            }

            cout << "O valor total a ser pago é: R$ " << valorAlcool << "\n";
            lucro += valorAlcool; // Adiciona ao lucro
        } 
        else if (escolha == 3) {
            sair = 1; // Sair do loop
        } 
        else {
            cout << "Opção inválida! Tente novamente.\n";
        }

    } while (sair == 0);

    // Relatório final do dia
    totalLitros = totalGasolina + totalAlcool;
    cout << "No fim do dia, a empresa vendeu:\n";
    cout << totalGasolina << " litros de gasolina\n";
    cout << totalAlcool << " litros de álcool\n";
    cout << "Total de " << totalLitros << " litros vendidos\n";
    cout << "Lucro total: R$ " << lucro << "\n";

    return 0;
}
