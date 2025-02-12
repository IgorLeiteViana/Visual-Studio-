#include <iostream>
#include <vector>
using namespace std;

int main(){

    cout << "Digite o tamanho do Vector ";
    int tam;
    cin >> tam;

    int * vec = new int [tam];
for (int i = 0; i < tam; i++) {
    cout << "Digite o valor do Vetor " << i << " : ";
    cin >> vec[i];
}
    cout << "Vetor: ";
for (int i = 0; i < tam; i++) {
    cout << vec[i] << " ";
    }
    delete[] vec;
    return 0;
}