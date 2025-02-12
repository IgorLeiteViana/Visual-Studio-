#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    FILE *pont_arq;
    char c;
   

    // abrindo o arquivo
    pont_arq = fopen("arquivo.txt", "r");
    
    

    if (pont_arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1); // Encerra o programa com código de erro
    }
    printf("lendo e exibindo os dados do arquivo \n\n");
    //faça

    do
    {
        /* faz a leitura do caracter no arquivo apontado por ponto */
        c = fgetc(pont_arq);


        //exibe o caracter lido na tela
        printf("%c", c);
    } while (c != EOF);/* enquanto não for o final do arquivo */
    
    fclose(pont_arq);
    system("pause");
    return 0; 
}