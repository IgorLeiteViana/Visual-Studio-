#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
main()
{
    int vetor[5] = {50, 20, 30, 10, 60};
    int i;
    int contador;
    int auxiliar;
    int ordenados = 0; // indica que os elementos adjacentes não estao ordenados
    while (ordenados == 0)
    {
        ordenados = 1; // considera que todos os elementos ordenados corretamente
        for (contador = 0; contador < 4; contador++)
        {
            /* code */
            if (vetor[contador] > vetor[(contador+1)])
            {
                /* code */
                auxiliar = vetor[contador];
                vetor[contador] = vetor[(contador + 1)];
                vetor[(contador + 1)] = auxiliar;
                ordenados = 0; // força outra passagem no laço while
            }
        }
    }
    // imprimindo os valores ordenados
    printf("\n");
    for(contador=0 ; contador<5; contador ++)
        printf("%d ", vetor[contador]);
        printf("\n");
}
