#include <iostream>

using namespace std;

int main() {
    int vetor[20] = {0}; // Inicializa todos os elementos do vetor com 0
    
    for (int i = 0; i < 19; i++) {
        vetor[i+1] = 3 + vetor[i];
        cout << vetor[i+1] << "\n";
    }

    return 0;
}
