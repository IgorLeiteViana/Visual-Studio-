#include <stdio.h>
#include<stdlib.h>

int main(){
    float N1,N2,N3,NF;

    printf("Digite sua Primeira nota \n");
    scanf("%f", &N1);

    printf("Digite sua Segunda nota \n");
    scanf("%f", &N2);

    NF= (N1 + N2 +N3) / 2 ;

    printf("sua notas das materias foram %.2f e %.2f e %.2f o resultado da media foi %.2f \n", N1, N2,N3, NF);

    if(NF >=6){
        printf("voce foi aprovado pelo conselho estudantil, boa sorte");
    } else{
        printf("voce nao passou pela materia , tente novamente ano que vem");
    }
return 0;
}