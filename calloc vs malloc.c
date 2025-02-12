#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i, *vet1, *vet2;
    vet1 = malloc(10*sizeof(int));
    vet2 = calloc(10 ,sizeof(int));

    printf("\n Com MALLOC: ");
    for (i = 0; i < 10; i++)
    {
    printf("%d  ", vet1[i]);
    }
    printf("\n Com CALLOC: ");
    for (i = 0; i < 10; i++)
    {
    printf("%d  ", vet2[i]);
    }
    
return 0;
}