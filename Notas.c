#include <stdio.h>
#include<stdlib.h>

int main(){
    float N1,N2,N3,N4,N5,NF;

    printf("Digite sua Primeira nota \n");
    scanf("%f %f  %f  %f  %f",    &N1, &N2, &N3, &N4, &N5 );

    NF= (N1+N2+N3+N4+N5) / 5 ;

    printf("sua notas das materias foram NOTA 1 %.2f NOTA 2  %.2f  NOTA 3 %.2f  NOTA 4 %.2f  NOTA 5 %.2f  e %.2f o resultado da media foi \n", N1, N2,N3,N4, N5, NF);

    if(NF >=6){
        printf("voce foi aprovado pelo conselho estudantil, boa sorte");
    } else{
        printf("voce nao passou pela materia , tente novamente ano que vem");
    }
return 0;
system("pause");
}