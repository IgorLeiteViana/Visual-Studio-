#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display(int var, int *ptr){
    printf("\n\n");
    printf("conteudo de var:%d\n",&var);
    printf("conteudo de var:%p\n",&var);
    printf("conteudo apontedo por ptr = %d\n",&ptr);
    printf("conteudo apontedo por ptr = %p\n",ptr);
    printf("endereco por ptr = %p\n",&ptr);
}

void update(int *p){
    *p= *p+1;
}
//char  8
//int 32
//float 32
// double 64
//void 0
void display(int var, int *ptr);
void update(int *p);
int main()
{
    int var = 15;
    int *ptr;

    ptr = &var;
    display(var,ptr);
    update(&var);
    display(var,ptr);

    printf("\n\nEnd.");
    while(1);
    return 0;
}