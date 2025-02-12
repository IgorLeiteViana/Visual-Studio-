// const int num = x
// int num2{x} 
// constexpert
#include <iostream>
using namespace std;

int main(){
    int batatas[3];
    batatas[0]=7;
    batatas[1]=8;
    batatas[2]=6;

    int custo[3] = {20,30,5};

    cout << "quantidade de batatas= ";
    cout << batatas[0] + batatas[1] + batatas[2] << endl;
    cout << "O pacote com " << batatas[1] << " batatas custa ";
    cout << custo[1] << " centavos por batata.\n";

    int total = batatas[1] * custo[1];
    int total2=batatas[2] * custo[2];
    cout << "O segundo pacote custa " << total << " centavos";
    cout << "O terceiro pacote custa " << total2 << " centavos";


    return 0;
}
