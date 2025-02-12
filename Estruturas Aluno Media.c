#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// estrutura do aluno
typedef struct aluno {
    char nome[100];
    int idAluno;
    char dc1[100];
    char dc2[100];
    float nota1;
    float nota2;
    int apr;
} aluno;
// codigo principal
int main(void) {
    struct aluno AVA;
    
    // Solicita ao usuário as informações do aluno
    printf("Qual o nome do Aluno? ");
    scanf("%s", AVA.nome);
    printf("Qual o ID do Aluno? ");
    scanf("%d", &AVA.idAluno);
    printf("Qual a disciplina 1? ");
    scanf("%s", AVA.dc1);
    printf("Qual a disciplina 2? ");
    scanf("%s", AVA.dc2);
    printf("Qual a nota da disciplina 1? ");
    scanf("%f", &AVA.nota1);
    printf("Qual a nota da disciplina 2? ");
    scanf("%f", &AVA.nota2);

    // Calcula a média do aluno
    float media = (AVA.nota1 + AVA.nota2) / 2;

    // Verifica se o aluno foi aprovado
    if (media >= 6) {
        AVA.apr = 1;
    } else {
        AVA.apr = 0;
    }

    // Imprime o boletim de notas
    printf("\n\n\t\t Boletim\n");
    printf("=====================================================\n");
    printf("RA \t NOME \n");
    printf("=====================================================\n");
    printf("%d \t %s \n", AVA.idAluno, AVA.nome);
    printf("=====================================================\n");
    printf("Disciplina \t   Nota \n");
    printf("%s \t   %.2f  \n", AVA.dc1, AVA.nota1);
    printf("=====================================================\n");
    printf("Disciplina \t   Nota\n");
    printf("%s \t   %.2f \n", AVA.dc2, AVA.nota2);
    printf("=====================================================\n");
    printf("MEDIA \t SITUACAO\n");
    printf("%.2f  \t %s \n",  media, (AVA.apr ? "Aprovado" : "Não aprovado"));
    return 0;
}