#include <stdio.h>
#include <stdlib.h>
 
 int main(void)
 {
    int vetor[5];
    int x, i;
    
    printf ("digite 5 numeros\n");
 
    for (i = 0; i < 5; i++)   //Este laco faz o scan de cada elemento do vetor
    {
       scanf("%d", &vetor[i]);
    }
    i = 1;
    x = vetor[0];
 
    while (i < 5)              //Este laco compara cada elemento do vetor
    {
        if (vetor[i] > x)
        {
           x = vetor[i];
        }
        i++;
    }
 
    printf("\n O maior numero que voce digitou foi %d .\n",x);
    
    

    //int x[8];
    //printf("%d" "\n" , sizeof(int)); // 4
    //printf("%d" "\n", sizeof(x)); // x 8 x 4 int = 32
    system("pause");
    return 0;
}