#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
float nota1,nota2,nota3, media;
char nome[100];
int repetir=1;
char digito;
while (repetir){
    printf ("Digite as tres notas do aluno:");
    scanf ("%f %f %f %s", &nota1,&nota2,&nota3,&nome);
    media = (nota1 + nota2 + nota3)/3;
    printf("=======================================");
    printf ("A media eh do aluno %s: %f \n",nome, media) ;
    printf("=======================================");
    printf ("continuar s/n: ");
    fflush (stdin) ;
    scanf ("%c", &digito);
    if (digito!='s') repetir = 0;
}
}
