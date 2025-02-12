#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome;
    char senha;
    int idade;
    int dinheiro;
} Usuario;

Usuario usuario;
int logado = 0;
int cadastro=0;
void Cadastro() {
    printf("Digite seu nome: ");
    scanf("%s", &usuario.nome);
    printf("Digite sua senha: ");
    scanf("%s", &usuario.senha);
    printf("Digite sua idade: ");
    scanf("%d", &usuario.idade);
    usuario.dinheiro = 0;
    cadastro=1;
    printf("Cadastro realizado com sucesso!\n");
    printf("Caso queira voce pode ir para logar para ver seu perfil e saldo");
}

void logar_e_perfil() {
    if (logado=1) {
        printf("Login certo!\n");
        printf("Perfil:\n");
        printf("Nome: %s\n", usuario.nome);
        printf("Idade: %d\n", usuario.idade);
        printf("Saldo: $%d\n", usuario.dinheiro);
    } else {
        printf("Você precisa se cadastrar primeiro e logar!\n");
        
    }
}
void login(){
    char nome;
    char senha;
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite sua senha: ");
    scanf("%s", &senha);
    if (cadastro){
        printf("Logado com sucesso");
        logado = 1;
    }else
    {
        printf("Erro ao enserir as informaçoes");
    }
}



void Tirardinheiro(int quantidade) {
    if (quantidade > 0 && quantidade <= usuario.dinheiro) {
        usuario.dinheiro -= quantidade;
        printf("Retirado da conta $%d. Sobra: $%d\n", quantidade, usuario.dinheiro);
    } else {
        printf("Sem dinheiro suficiente ou valor invalidado\n");
    }
}

void colocarDinheiro() {
    int valor;
    printf("Digite o valor que deseja depositar: ");
    scanf("%d", &valor);
    usuario.dinheiro += valor;
    printf("Deposito realizado com sucesso! Seu saldo atual é de $%d\n", usuario.dinheiro);
}

void sair() {
    printf("Obrigado por usar nosso caixa eletrônico! Tenha um ótimo dia.\n");
    exit(0);
}

void funcao() {
    int escolha;
    do {
        printf("1 - Depositar dinheiro\n");
        printf("2 - Sacar dinheiro\n");
        printf("3 - Cadastrar\n");
        printf("4 - Ver Perfil\n");
        printf("5 - Logar\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &escolha);
        switch (escolha) {
            case 1:
                if (logado) colocarDinheiro();
                else printf("Você precisa logar primeiro! :[:[:[\n");
                break;
            case 2:
                if (logado) {
                    printf("Digite o valor a ser sacado: ");
                    int quantidade;
                    scanf("%d", &quantidade);
                    Tirardinheiro(quantidade);
                } else {
                    printf("Você precisa logar primeiro!\n");
                }
                break;
            case 3:
                Cadastro();
                break;
            case 4:
                if(logado=1){
                logar_e_perfil();
                }
                break;
            case 5:
            if (cadastro)
            {
                login();
            }
            break;
            case 0:
                sair();
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
                break;
        }
    } while (escolha != 0);
}

int main() {
    funcao();
    return 0;
}
