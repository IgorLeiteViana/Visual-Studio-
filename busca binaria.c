#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int numenros[5]={50,20,10,70,15};
int busca_binaria(int vetor[], int valor, int tamanho)

    {
        int achou = 0;
        int alto = tamanho,baixo = 0, meio ;
        meio = (alto + baixo)/2;
        while ((!achou) && (alto>=baixo))
        {
            printf("Baixo %d Meio %d Alto %d ");
            if (valor == vetor[meio])
                achou=1;
            else if (valor<vetor[meio])
                alto=meio-1;
            else
                baixo=meio+1;
            meio=(alto+baixo)/2;            
        }
    return((achou) ? meio: -1);
    }
    main(){
    int vetor[100], i; 
    for (i=0; i<100; i++);
        vetor[i] = i;
        printf("Resultado da busca %d \n" , busca_binaria(vetor, 33,100));
        printf("Resultado da busca %d \n" , busca_binaria(vetor, 75,100));
        printf("Resultado da busca %d \n" , busca_binaria(vetor, 1,100));
        printf("Resultado da busca %d \n" , busca_binaria(vetor, 1001,100));
    }