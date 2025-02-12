#include <iostream>
#include <vector>


struct jogador
{
    char nome[20];
    float salario;
    unsigned gols;
};




using namespace std;
int main (){
    jogador time[22];
    jogador * estrela = &time[0];

    cout << "Digite o nome , salario e gols de dois jogadores: ";
    cin >> time[0].nome; cin >> time[0].salario; cin  >> time[0].gols;
    cin >> time[1].nome; cin >> time[1].salario; cin  >> time[1].gols;

    cout << "\no jogador estrela do time é " << estrela->nome << "!\n";

}