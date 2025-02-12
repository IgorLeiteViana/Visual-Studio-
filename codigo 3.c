#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
float media(float prova, float trabalho, float tarefa, char Tipomedia) {
    float mediaAridimendica = (prova + trabalho + tarefa) / 3;
    float mediaPonderada = (5 * prova) + (3 * trabalho) + (2 * tarefa) / 10;

    if (Tipomedia == 'A' || Tipomedia == 'a') {
        return mediaAridimendica;
    } else if (Tipomedia == 'P' || Tipomedia == 'p') {
        return mediaPonderada; 
    } else {
        printf("Seu tipo de calculo e indefinido \n ");
        return -1; // Retorna um valor negativo para indicar erro
    }
}
int main (){
    float prova, trabalho, tarefa, calc;
    char Tipomedia;

    printf("digite o tipo de media sendo p ou P ponderado e A ou a Aridimetica \n");
    scanf("%c", &Tipomedia);

    printf("nota da prova 1 a 10 \n");
    scanf("%f", &prova);

    printf("nota do trabalho 1 a 10 \n");
    scanf("%f", &trabalho);

    printf("nota da tarefa 1 a 10 \n");
    scanf("%f", &tarefa);
    
    calc = media(prova, trabalho, tarefa, Tipomedia);
    if (calc != -1) { // Verifica se houve erro no cálculo da média
        printf("Sua media: \n %f",calc); // Converte a média para inteiro para impressão
    }
    printf("Média: \n %f", calc);
    system("pause");
    return 0;
}
