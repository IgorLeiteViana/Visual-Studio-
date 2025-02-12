#include <stdio.h>
#include <stdlib.h>
int main(){
int var = 15;
int *ptr;

ptr = &var;

    printf("conteudo de var %d\n", var) ;
    printf("conteudo de vare %p\n", &var) ;

    printf("endereço apontado por ptr %d\n", *ptr) ;
    printf("endereço apontado por ptr %p\n", ptr) ;
    printf("endereço de ptr %p\n", &ptr) ;

while(1);
return 0;
}