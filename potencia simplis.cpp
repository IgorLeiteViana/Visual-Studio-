#include <iostream>
#include <cstdio> 

using namespace std;

int main(int argc, char** argv){
    float x;
    float port2, port3, port4;

    cout << "Digite um numero para saber a potencia\n";
    cin >> x;

    port2 = x * x;         // Quadrado
    port3 = x * x * x;     // Cubo
    port4 = port2 * port2; // Quarta potência

    cout << x << " elevado ao quadrado é " << port2 << "\n";
    cout << x << " elevado ao cubo é " << port3 << "\n";
    cout << x << " elevado à quarta potencia é " << port4 << "\n";

    return 0;
}
