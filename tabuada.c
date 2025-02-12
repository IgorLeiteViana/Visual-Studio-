#include <stdlib.h>
int main (void){
    int numero, contador;

    contador = 0;

    printf("selecione o numero da tabuada \n");
    scanf("%d",&numero);

    for(contador = 0; contador<=10;contador++){
        printf("numero selecinado %d X %d = %d\n",numero , contador,numero*contador);
    }

return 0;
}