#include <iostream>
using namespace std;

// Função para aproximar a raiz quadrada usando o método de Newton-Raphson
double AproximarRaizQuadrada(int n, int iteracoes) {
    double xanterior = n / 2.0;  
    double xnova;

    
    for (int i = 0; i < iteracoes; i++) {
        xnova = (xanterior + (n / xanterior)) / 2.0;  
        xanterior = xnova; 
    }

    return xnova;  
}

int main() {
    int n, iteracoes;

    
    do {
        cout << "Digite um numero inteiro positivo: ";
        cin >> n;
        if (n <= 0) {
            cout << "Erro: o numero deve ser inteiro positivo.\n";
        }
    } while (n <= 0);

    
    cout << "Digite o número de iterações desejadas: ";
    cin >> iteracoes;

    
    double resultado = AproximarRaizQuadrada(n, iteracoes);

    
    cout << "A raiz quadrada aproximada de " << n << " é: " << resultado << endl;

    return 0;
}
