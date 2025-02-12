#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char nome[100];
    char email[40];
    char telefone[30];
    int numDisciplinas;
    struct {
        char codigo[20];
        char nome[30];
    } disciplinas[4];
} Aluno;

void adicionarAluno(Aluno *alunos, int *contador);
void listarAlunos(Aluno *alunos, int contador);
void buscarAlunoPorID(Aluno *alunos, int contador, int id);
void salvarAlunosNoArquivo(Aluno *alunos, int contador, const char *nomeArquivo);
void carregarAlunosDoArquivo(Aluno *alunos, int *contador, const char *nomeArquivo);

int main() {
    Aluno alunos[100];
    int contador = 0;
    int escolha, id;

    carregarAlunosDoArquivo(alunos, &contador, "alunos.txt");

    do {
        printf("\n\nSistema de Gerenciamento de Alunos\n");
        printf("---------------------------------\n");
        printf("[1] Adicionar Aluno\n");
        printf("[2] Listar Todos os Alunos\n");
        printf("[3] Pesquisar Aluno\n");
        printf("[0] Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                adicionarAluno(alunos, &contador);
                salvarAlunosNoArquivo(alunos, contador, "alunos.txt");
                break;
            case 2:
                listarAlunos(alunos, contador);
                break;
            case 3:
                printf("Digite o ID do aluno: ");
                scanf("%d", &id);
                buscarAlunoPorID(alunos, contador, id);
                break;
            case 0:
                printf("\nSaindo do programa...\n");
                salvarAlunosNoArquivo(alunos, contador, "alunos.txt");
                break;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
        }
    } while (escolha != 0);

    return 0;
}

void adicionarAluno(Aluno *alunos, int *contador) {
    Aluno novoAluno;
    printf("Digite o ID do aluno: ");
    scanf("%d", &novoAluno.id);
    printf("Digite o nome do aluno: ");
    scanf("%s", novoAluno.nome);
    printf("Digite o email do aluno: ");
    scanf("%s", novoAluno.email);
    printf("Digite o telefone do aluno: ");
    scanf("%s", novoAluno.telefone);
    printf("Digite o número de disciplinas: ");
    scanf("%d", &novoAluno.numDisciplinas);
    for (int i = 0; i < novoAluno.numDisciplinas; i++) {
        printf("Digite o código da disciplina %d: ", i + 1);
        scanf("%s", novoAluno.disciplinas[i].codigo);
        printf("Digite o nome da disciplina %d: ", i + 1);
        scanf("%s", novoAluno.disciplinas[i].nome);
    }
    alunos[*contador] = novoAluno;
    (*contador)++;
}

void listarAlunos(Aluno *alunos, int contador) {
    for (int i = 0; i < contador; i++) {
        printf("ID: %d\n", alunos[i].id);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Email: %s\n", alunos[i].email);
        printf("Telefone: %s\n", alunos[i].telefone);
        printf("Disciplinas:\n");
        for (int j = 0; j < alunos[i].numDisciplinas; j++) {
            printf("\tCódigo: %s, Nome: %s\n", alunos[i].disciplinas[j].codigo, alunos[i].disciplinas[j].nome);
        }
        printf("--------------------------\n");
    }
}

void buscarAlunoPorID(Aluno *alunos, int contador, int id) {
    for (int i = 0; i < contador; i++) {
        if (alunos[i].id == id) {
            printf("ID: %d\n", alunos[i].id);
            printf("Nome: %s\n", alunos[i].nome);
            printf("Email: %s\n", alunos[i].email);
            printf("Telefone: %s\n", alunos[i].telefone);
            printf("Disciplinas:\n");
            for (int j = 0; j < alunos[i].numDisciplinas; j++) {
                printf("\tCódigo: %s, Nome: %s\n", alunos[i].disciplinas[j].codigo, alunos[i].disciplinas[j].nome);
            }
            return;
        }
    }
    printf("Aluno com ID %d não encontrado.\n", id);
}

void salvarAlunosNoArquivo(Aluno *alunos, int contador, const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "a");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }
    for (int i = 0; i < contador; i++) {
        fprintf(arquivo, "%d %s %s %s %d", alunos[i].id, alunos[i].nome, alunos[i].email, alunos[i].telefone, alunos[i].numDisciplinas);
        for (int j = 0; j < alunos[i].numDisciplinas; j++) {
            fprintf(arquivo, " %s %s", alunos[i].disciplinas[j].codigo, alunos[i].disciplinas[j].nome);
        }
        fprintf(arquivo, "\n");
    }
    fclose(arquivo);
}

void carregarAlunosDoArquivo(Aluno *alunos, int *contador, const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Arquivo não encontrado. Um novo será criado ao salvar.\n");
        return;
    }
    while (fscanf(arquivo, "%d %s %s %s %d", &alunos[*contador].id, alunos[*contador].nome, alunos[*contador].email, alunos[*contador].telefone, &alunos[*contador].numDisciplinas)!= EOF) {
        for (int j = 0; j < alunos[*contador].numDisciplinas; j++) {
            fscanf(arquivo, "%s %s", alunos[*contador].disciplinas[j].codigo, alunos[*contador].disciplinas[j].nome);
        }
        (*contador)++;
    }
    fclose(arquivo);
}