#include <stdio.h>
#include<stdlib.h>

int main (){
float nota1,nota2,nota3, media;
char digito;
do {
    printf ("Digite as tres notas do aluno:");
    scanf ("%f %f %f", &nota1,&nota2,&nota3);
    media = (nota1 + nota2 + nota3)/3;
    printf ("A media eh: %f \n", media) ;
    printf ("continuar s para sair: ");
    fflush (stdin) ;
    scanf ("%c", &digito);
    
} while(digito!='s');

}