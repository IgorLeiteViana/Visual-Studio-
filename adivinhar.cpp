#include <iostream>

using namespace std;

int main() {
    int use;
    int num = 3;

    while (true) {
        cout << "Tente adivinhar um número entre 0 e 9 \n";
        cin >> use;

        if (use == num) {
            cout << "Parabéns, você acertou! \n";
            break;
        } else if (use < num) {
            cout << "O número que você digitou é menor \n";
        } else if (use > num) {
            cout << "O número que você digitou é maior \n";
        }

        if (use == 10) {  
            break;
        }
    }

    return 0;
}
