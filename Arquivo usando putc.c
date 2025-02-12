#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    FILE *pont_arq;
    char frase[50];
    int i;
    int tamanho;


    // abrindo o arquivo
    pont_arq = fopen("arquivo.txt", "w");
    
    

    if (pont_arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1); // Encerra o programa com código de erro
    }
    printf("Digite a frase a ser gerada");
    gets(frase);

    tamanho=strlen(frase);

    for (i = 0; i < tamanho; i++)
    {
        fputc(frase[i], pont_arq);
    }
    
    // fechamento arquivo
    fclose(pont_arq);
    printf("O arquivo foi criado com sucesso.\n");





    system("pause");
    return 0;

}