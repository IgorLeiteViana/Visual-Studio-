#include <iostream>
#include <string>
using namespace std;

// Estrutura do aluno
struct Aluno {
    string nome;
    int idAluno;
    string dc1;
    string dc2;
    float nota1;
    float nota2;
    bool apr;
};

// Função principal
int main() {
    Aluno ava;

    // Solicita ao usuário as informações do aluno
    cout << "Qual o nome do Aluno? ";
    cin >> ava.nome;
    cout << "Qual o ID do Aluno? ";
    cin >> ava.idAluno;
    cout << "Qual a disciplina 1? ";
    cin >> ava.dc1;
    cout << "Qual a disciplina 2? ";
    cin >> ava.dc2;
    cout << "Qual a nota da disciplina 1? ";
    cin >> ava.nota1;
    cout << "Qual a nota da disciplina 2? ";
    cin >> ava.nota2;

    // Calcula a média do aluno
    float media = (ava.nota1 + ava.nota2) / 2.0;

    // Verifica se o aluno foi aprovado
    ava.apr = (media >= 6.0);

    // Imprime o boletim de notas
    cout << "\n\n\t\t Boletim\n";
    cout << "=====================================================\n";
    cout << "RA \t NOME \n";
    cout << "=====================================================\n";
    cout << ava.idAluno << " \t " << ava.nome << endl;
    cout << "=====================================================\n";
    cout << "Disciplina \t   Nota \n";
    cout << ava.dc1 << " \t   " << ava.nota1 << endl;
    cout << "=====================================================\n";
    cout << "Disciplina \t   Nota\n";
    cout << ava.dc2 << " \t   " << ava.nota2 << endl;
    cout << "=====================================================\n";
    cout << "MEDIA \t SITUACAO\n";
    cout << media << " \t " << (ava.apr ? "Aprovado" : "Não aprovado") << endl;

    return 0;
}
