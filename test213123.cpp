#include <iostream>
using namespace std;

int main()
{
    cout << "Digite um número inteiro: ";
    unsigned char estado;
    cin >> estado;

    cout << "Número em binário: ";
    for (int i = 16; i >= 0; --i) {
        unsigned char binaop = 1 << i;
        cout << ((estado & binaop) ? '1' : '0');
    }
    cout << endl;

    return 0;
}
