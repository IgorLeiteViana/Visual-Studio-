#include <iostream>
using namespace std;


int main(){
    int total = 6;//declara variavel
    int * ptr;//ponteiro

    ptr = &total;//atribui endereço de total

    cout << "conteudo de total = " << total << endl;
    cout << "conteudo apontado = " << *ptr << endl;

    cout << "endereço de total = " << &total << endl;
    cout << "Conteudo de total = " << ptr << endl;

    *ptr=*ptr+1;//altera valor
    cout << "agora total vale = " << total << endl;
}