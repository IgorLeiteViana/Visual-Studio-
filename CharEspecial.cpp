#include <iostream>
using namespace std;

int main() {
    char alarme = '\a'; // Caractere de beep
    int senha;

    cout << "Digite a senha: ______________\b\b\b\b\b\b\b\b\b\b\b\b";
    cin >> senha;

    cout << alarme << " Sua senha foi roubada!\a\n";
    cout << "Joaozinho \"O hacker\"\nesteve aqui!\n";

    return 0;
}
