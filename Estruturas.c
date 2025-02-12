#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct Livro {
 char nome[100];
 char autor[100];
 char categoria[100];
 int id;
} Livro;


int main(void){
// 
    Livro livro1;
    Livro livro2;

    strcpy(livro1.autor, "Livros");
    strcpy(livro1.nome, "Livraria");
    strcpy(livro1.categoria, "Livro");
    livro1.id = 1;

    strcpy(livro2.autor, "G.G.RK");
    strcpy(livro2.nome, "Jhon");
    strcpy(livro2.categoria, "Ventura");
    livro2.id = 2;

    printf("livro 1 nome %s \n", livro1.nome);
    printf("livro 1 categoria %s \n", livro1.categoria);
    printf("livro 1 autor %s \n", livro1.autor);
    printf("livro 1 id %d \n", livro1.id);

    
    printf("livro 2 nome %s \n", livro2.nome);
    printf("livro 2 categoria %s \n", livro2.categoria);
    printf("livro 2 autor %s \n", livro2.autor);
    printf("livro 2 id %d \n", livro2.id);



    system("pause");
    return 0;
}
