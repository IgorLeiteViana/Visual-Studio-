#include <stdio.h>
#include<stdlib.h>
#include<string.h>
// tive que pesquisar para achar isso 
typedef struct Pessoa {
  char nome[20];
  int idade;
} Pessoa;

void alterar(struct Pessoa *pessoa){
    pessoa -> idade += 20;
}

int main(){
Pessoa pessoa1 ;
printf("Qual é o seu nome \n");
scanf("%s", pessoa1.nome);

printf("Qual é a sua idade ?\n");
scanf("%d", &pessoa1.idade);

printf("Valores antes de mudar?\n");
printf("Seu nome é %s?\n", pessoa1.nome);
printf("Sua idade é %d ?\n", pessoa1.idade);

alterar(&pessoa1);

printf("Valores depois de mudar?\n");
printf("Seu nome continua sendo %s\n", pessoa1.nome);
printf("Sua idade atualizada é %d ?\n", pessoa1.idade);







return 0;
}