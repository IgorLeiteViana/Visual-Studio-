#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int numenros[5]={50,20,10,70,15};
    int i, valor;
    printf("qual eh o valor a procurar \n");
    scanf("%d", &valor);
    for (i = 0; i <4; i++)
    {
        if (valor == numenros[i])
        {
            printf("valor encontrado... \n");
            exit(1);
        }
        printf("valor nao encontrado... \n");
    }
    
}