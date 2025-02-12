#include <stdio.h>
#include "pilha.h"
No* empilhar(No *pilha, int num){
    No *novo = malloc(sizeof(No));
    if(novo){
        novo ->valor = num;
        novo->proximo = pilha;
        return novo;
    }
    else
        printf("\nErro ao alocar memoria\n");
    return NULL;
}

No* desempilhar(No **pilha){
    if (*pilha !=NULL){ // Só posso desempilhar se tiver alguem na pilha
    No *remover = *pilha; // Quero conteúdo do topo / Criar *remover para da pilha
    *pilha = remover->proximo; // Se removi o topo será o próximo da pilha
    return remover;   
    }
    else
        printf("\nPilha Vazia!\n");
    return NULL ; // Se pilha está vazia não tem retorno
}

void imprimir_pilha(No *pilha){
    printf("\n---------- Pilha ----------");
    while(pilha){ // Não sabemos quantos elementos terão na pilha- enquanto topo ! —_ de nulo
        imprimir_pessoa(pilha ->valor);
        pilha = pilha ->proximo; // Evitando ficar em Ilop infinito no topo
    }
    printf("\n--------- Pilha ---------\n");
}