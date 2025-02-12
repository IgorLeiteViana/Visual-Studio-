#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    
FILE *pont_arq;// variável ponteiro p arquivo
char palavra[20]; // variável do tipo string

//abrindo o arquivo com tipo de abertura w
pont_arq = fopen("arquivo_palavra.txt", "w");
// testando se o arquivo foi realmente criado
if(pont_arq == NULL)
{
printf ("Erro na abertura do arquivo!");
return 1;
}

// gravando no arquivo

printf("Escreva uma palavra para testar a gravacao de arquivo");
scanf("%s", palavra);

//usando fprinf para armazenar a string no arquivo
fclose(pont_arq);

getch();



    system("pause");
    return 0;
}