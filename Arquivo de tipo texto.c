#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Criando a variavel ponteiro para o arquivo
    FILE *pont_arq;

    // abrindo o arquivo
    pont_arq = fopen("arquivo.txt", "a");
    
    // fechamento arquivo
    fclose(pont_arq);

    if (pont_arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1; // Encerra o programa com código de erro
    } else {
    printf("O arquivo foi criado com sucesso.\n");
    }
    system("pause");
    return 0; 
}
