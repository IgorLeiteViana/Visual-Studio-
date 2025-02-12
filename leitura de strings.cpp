#include <iostream>

using namespace std;

int main(){
    const int TamVet = 20;

    char nome [TamVet];
    char sobremesa[TamVet];

    cout << "Entre com seu nome: \n";
    cin.getline(nome,20);
    cout << "Entre com seu sobrenome favorito: \n";
    cin >> sobremesa;
    cout << "Eu tenho um " << sobremesa ;
    cout << " para você, " << nome << endl;
}