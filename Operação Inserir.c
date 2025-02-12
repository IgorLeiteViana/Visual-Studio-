#include <stdio.h>
//#include "pilha.h"

typedef struct no{
    int valor;
    struct  no *proximo;
    
    
}No;


void inserir_na_fila(No **fila, int num){
    No *aux, *novo = malloc(sizeof(No));
    if (novo){
        novo ->valor = num;
        novo->proximo = NULL;
        if (*fila == NULL)
            *fila = novo;
        else{
            aux = *fila;
            while (aux ->proximo !=NULL)
                aux = aux ->proximo;
            aux->proximo = novo;/* code */
        }
    }
    else
        printf("\nErro ao alocar a memoria \n ");
}

No* remover_da_fila(No **fila){
    No *remover = NULL;
    if (*fila)
    {
        remover = *fila;
        *fila = remover ->proximo;//fila
    }
    else
        printf("\fila vazia \n ");
    return remover;
}

void imprimir(No *fila){
    printf("\n \n");
    while (fila){
    printf("%d ", fila->valor);
    fila = fila->proximo;
}
    printf("\n\t-------Fim Fila -----------\n");
    
}