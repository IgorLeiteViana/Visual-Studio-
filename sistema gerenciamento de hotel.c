#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int numero;
    char tipo[20]; // Por exemplo, "Simples", "Duplo", "Suíte"
    char status[10]; // "Disponível" ou "Ocupado"
    double preco;
} Quarto;

adicionarQuarto();
editarQuarto();
excluirQuarto();
listarQuarto();

typedef struct {
    int id;
    char nome[100];
    char contato[50];
    char checkin[11]; // Data no formato "DD/MM/AAAA"
    char checkout[11]; // Data no formato "DD/MM/AAAA"
} Hospede;
adicionarHospede();
editarHospede();
excluirHospede();
listarHospede();

typedef struct {
    int idReserva;
    int idQuarto;
    int idHospede;
    char dataReserva[11]; // Data no formato "DD/MM/AAAA"
    int duracao; // Duração da estadia em dias
} Reserva;

fazerResersa();
EditarReserva();
cancelarReserva();
listarReserva();

void exibirMenu() {
    int escolha;
    do {
        printf("\n\nSistema de Gerenciamento de Hotel\n");
        printf("---------------------------------\n");
        printf("[1] Gerenciar Quartos\n");
        printf("[2] Gerenciar Hóspedes\n");
        printf("[3] Gerenciar Reservas\n");
        printf("[0] Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                // Chamar funções para gerenciar quartos
                break;
            case 2:
                // Chamar funções para gerenciar hóspedes
                break;
            case 3:
                // Chamar funções para gerenciar reservas
                break;
            case 0:
                printf("\nSaindo do programa...\n");
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
        }
    } while (escolha != 0);
}

int main() {
    exibirMenu();
    return 0;
}
