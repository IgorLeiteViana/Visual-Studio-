#include <stdio.h> // Incluir a biblioteca padrão de entrada e saída
#include <string.h> // Incluir a biblioteca para manipulação de strings
#include <stdlib.h> // Incluir a biblioteca para funções padrão como exit()

#define MAX_ALUNOS 100 // Limite máximo de alunos

typedef struct Aluno { // Estrutura para armazenar dados de um aluno
  char id[20]; // ID do aluno (máximo 20 caracteres)
  char nome[30]; // Nome do aluno (máximo 30 caracteres)
  char email[40]; // Email do aluno (máximo 40 caracteres)
  char telefone[30]; // Telefone do aluno (máximo 30 caracteres)
  int numDisciplinas; // Número de disciplinas do aluno (entre 1 e 4)
  struct Disciplina { // Estrutura para armazenar dados de uma disciplina
    char codigo[20]; // Código da disciplina (máximo 20 caracteres)
    char nome[30]; // Nome da disciplina (máximo 30 caracteres)
  } disciplinas[4]; // Array para armazenar as disciplinas do aluno (máximo 4)
} Aluno;

// Protótipos das funções
void adicionarAluno();
void mostrarTodosAlunos();
int buscarAlunoPorId(const char *idAluno);
void buscarAluno();
void editarAluno();
void excluirAluno();
void sobreNos();
void displayStudent(Aluno student); // Função opcional para exibir detalhes do aluno

// Número máximo de alunos e contador de alunos cadastrados
struct Aluno alunos[MAX_ALUNOS];
int numAlunos = 0;

// Função para adicionar um novo aluno
void adicionarAluno() {
    if (numAlunos >= MAX_ALUNOS) {
        printf("Não é possível adicionar mais alunos. O limite foi atingido.\n");
        return;
    }

    Aluno novoAluno;

    printf("Digite o ID do aluno (máximo 20 caracteres): ");
    scanf("%s", novoAluno.id);
    // Você pode adicionar validações para o ID, se necessário

    printf("Digite o nome do aluno (máximo 30 caracteres): ");
    scanf("%s", novoAluno.nome);
    // Você pode adicionar validações para o nome, se necessário

    printf("Digite o email do aluno (máximo 40 caracteres): ");
    scanf("%s", novoAluno.email);
    // Você pode adicionar validações para o email, se necessário

    printf("Digite o telefone do aluno (máximo 30 caracteres): ");
    scanf("%s", novoAluno.telefone);
    // Você pode adicionar validações para o telefone, se necessário

    printf("Digite o número de disciplinas do aluno (entre 1 e 4): ");
    scanf("%d", &novoAluno.numDisciplinas);
    // Você pode adicionar validações para o número de disciplinas, se necessário

    printf("Digite os detalhes das disciplinas do aluno:\n");
    for (int i = 0; i < novoAluno.numDisciplinas; i++) {
        printf("Disciplina %d:\n", i + 1);
        printf("  Código: ");
        scanf("%s", novoAluno.disciplinas[i].codigo);
        // Você pode adicionar validações para o código da disciplina, se necessário

        printf("  Nome: ");
        scanf("%s", novoAluno.disciplinas[i].nome);
        // Você pode adicionar validações para o nome da disciplina, se necessário
    }

    alunos[numAlunos++] = novoAluno;
    printf("Aluno adicionado com sucesso!\n");
}

// Função para mostrar todos os alunos
void mostrarTodosAlunos() {
    if (numAlunos == 0) {
        printf("Nenhum aluno cadastrado.\n");
        return;
    }

    printf("Lista de Alunos:\n");
    for (int i = 0; i < numAlunos; i++) {
        displayStudent(alunos[i]);
    }
}

// Função opcional para exibir detalhes do aluno
void displayStudent(Aluno student) {
    printf("ID: %s\n", student.id);
    printf("Nome: %s\n", student.nome);
    printf("Email: %s\n", student.email);
    printf("Telefone: %s\n", student.telefone);
    printf("Número de Disciplinas: %d\n", student.numDisciplinas);
    printf("Disciplinas:\n");
    for (int i = 0; i < student.numDisciplinas; i++) {
        printf("  Disciplina %d:\n", i + 1);
        printf("    Código: %s\n", student.disciplinas[i].codigo);
        printf("    Nome: %s\n", student.disciplinas[i].nome);
    }
}

// Função para perguntar se deseja retornar ao menu principal ou sair do programa
void perguntarParaRetornarOuSair() {
    char choice;
    printf("\nDeseja retornar ao menu principal? (S/N): ");
    scanf(" %c", &choice);
    if (choice != 'S' && choice != 's') {
        printf("Saindo do programa...\n");
        exit(0);
    }
}


int main() {
  int escolha;

  do {
    printf("\n\nSistema de Gerenciamento de Alunos\n");
    printf("------------------------------\n");
    printf("[1] Adicionar Aluno\n");
    printf("[2] Mostrar Todos os Alunos\n");
    printf("[3] Pesquisar Aluno\n");
    printf("[4] Editar Aluno\n");
    printf("[5] Excluir Aluno\n");
    printf("[6] Sobre Nós\n");
    printf("[0] Sair\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
      case 1:
        adicionarAluno();
        perguntarParaRetornarOuSair();
        break;
      case 2:
        mostrarTodosAlunos();
        perguntarParaRetornarOuSair();
        break;
      case 3:
        buscarAluno();
        perguntarParaRetornarOuSair();
        break;
      case 4:
        editarAluno();
        perguntarParaRetornarOuSair();
        break;
      case 5:
        excluirAluno();
        perguntarParaRetornarOuSair();
        break;
      case 6:
        sobreNos();
        perguntarParaRetornarOuSair();
        break;
      case 0:
        printf("\nSaindo do programa...\n");
        break;
      default:
        printf("\nOpção inválida! Tente novamente.\n");
    }
  } while (escolha != 0);

  return 0;
}


// Função para exibir informações sobre o programa
void sobreNos() {
  printf("\n\nSistema de Gerenciamento de Alunos\n");
  printf("------------------------------\n");

  printf("\nVersão: 1.0\n");
  printf("Criado por: [Seu nome ou equipe]\n");
  printf("Data de criação: [Data de criação do programa]\n");

  printf("\nDescrição:\n");
  printf("Este programa permite gerenciar informações de alunos, incluindo:\n");
  printf("- Adicionar novos alunos\n");
  printf("- Mostrar todos os alunos\n");
    printf("- Pesquisar alunos por ID, nome ou email\n");
  printf("- Editar informações de alunos\n");
  printf("- Excluir alunos\n");

  printf("\nLicença:\n");
  printf("Este programa é licenciado sob a licença [Nome da licença].\n");

  printf("\nContato:\n");
  printf("Para dúvidas ou sugestões, entre em contato com [Seu email ou website]\n");

  printf("\n\n**Obrigado por usar o Sistema de Gerenciamento de Alunos!**\n");
}
