#include <stdio.h>
#include<stdlib.h>

int main (){
float nota1,nota2,nota3, media;
int repetir=1;
char digito;
while (repetir){
    printf ("Digite as tres notas do aluno:");
    scanf ("%f %f %f", &nota1,&nota2,&nota3);
    media = (nota1 + nota2 + nota3)/3;
    printf ("A media eh: %f \n", media) ;
    printf ("continuar s/n: ");
    fflush (stdin) ;
    scanf ("%c", &digito);
    if (digito!='s') repetir = 0;
}
}