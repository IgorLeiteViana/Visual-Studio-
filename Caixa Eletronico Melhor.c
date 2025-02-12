#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    char senha[20];
    int idade;
    int dinheiro ;
} Usuario ;
Usuario usuario;
int cadastrado = 0;

void Cadastro() {
    printf("Digite seu nome: ");
    scanf("%s", usuario.nome);
    printf("Digite sua senha: ");
    scanf("%s", usuario.senha);
    printf("Digite sua idade: ");
    scanf("%d", &usuario.idade);
    usuario.dinheiro = 0;
    cadastrado = 1;
    printf("Cadastro realizado com sucesso!\n");
}

void logar() {
    if (cadastrado) {
        printf("Login successful!\n");
        printf("Perfil:\n");
        printf("Nome: %s\n", usuario.nome);
        printf("Idade: %d\n", usuario.idade);
        printf("Saldo: $%d\n", usuario.dinheiro);
    } else {
        printf("Você precisa se cadastrar primeiro!\n");
        Cadastro();
    }
}


void sair() {
    printf("Obrigado por usar nosso caixa eletrônico! Tenha um ótimo dia. Bradenukabank Agradeçe\n");
    exit(0);
}
void fun5ção (){
    int escolha;
    printf("1 - Depositar dinheiro\n");
    printf("2 - Sacar dinheiro\n");
    printf("3 - Verificar saldo\n");
    printf("4-  Cadastrar");
    printf("5 - Logar\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1 :
        
        break;
    case 2 :

        break;
    case 3 :

        break;
    case 4 :
    
        break;
    case 5 :
    
        break;
    default:
        printf("\nOpção inválida! Tente novamente.\n");
        break;
    } while (escolha != 0);
}

int main() {
    função();
    return 0;
}