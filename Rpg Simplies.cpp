#include <iostream>
#include <vector>
#include <cstdlib> // para rand()
#include <ctime>   // para time()

struct Monstro {
    std::string nome;
    int vida;
    int ataque;
    int xp;
};

// Função que cria e retorna um vetor de ponteiros para monstros
Monstro** lista_monstro(int& numMonstros) {
    numMonstros = 9; // Definindo o número de monstros
    Monstro** monstros = new Monstro*[numMonstros]; // Alocando memória para o vetor de ponteiros

    // Criando os monstros e alocando memória para cada um
    monstros[0] = new Monstro{"Dragão", 1000, 100, 1000};
    monstros[1] = new Monstro{"Goodi", 15000, 15000,15000};
    monstros[2] = new Monstro{"Troll", 1234, 20, 500};
    monstros[3] = new Monstro{"Guerreiro", 2000, 20, 300};
    monstros[4] = new Monstro{"Lenda", 200, 20, 100};
    monstros[5] = new Monstro{"Roberto Carlos", 1, 999999 , 100000};
    monstros[6] = new Monstro{"Cinema", 1000, 40, 123};
    monstros[7] = new Monstro{"X-A2", 20, 10, 10};
    monstros[8] = new Monstro{"Slime 2 A vingança", 200, 20, 30};

    return monstros; // Retorna o vetor de ponteiros
}

// Função que escolhe um monstro aleatoriamente
void monstro_escolhido() {
    int numMonstros; // Variável para armazenar o número de monstros
    Monstro** monstros = lista_monstro(numMonstros); // Obtendo a lista de monstros

    // Gerar número aleatório
    srand(time(NULL));
    int aleatorio = rand() % numMonstros; // Randômico entre 0 e o número de monstros

    // Exibir o monstro escolhido
    std::cout << "O monstro que apareceu foi '" << monstros[aleatorio]->nome << "'!" << std::endl;
    std::cout << "Vida: " << monstros[aleatorio]->vida << std::endl;
    std::cout << "Ataque: " << monstros[aleatorio]->ataque << std::endl;
    std::cout << "Xp: " << monstros[aleatorio]->xp << std::endl;


    // Liberar memória alocada
    for (int i = 0; i < numMonstros; ++i) {
        delete monstros[i]; // Deletar cada monstro
    }
    delete[] monstros; // Deletar o vetor de ponteiros
}

void Confronto(){
    
    
}

int main() {
    // Testar a função de escolha aleatória de monstro
    monstro_escolhido();
    return 0;
}
