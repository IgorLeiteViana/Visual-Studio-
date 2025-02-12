#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
int fatorial(int valor){
    if (valor == 1)
        return (1);
    else
        return (valor*fatorial(valor-1));
}

main (){
    int valor, result, i;
    printf("escolha seu numero para calculo da fatorial \n");
    scanf("%d" , valor);

    result = fatorial(valor);

    printf("o resultado do fatorial é %d ", fatorial );

    for (i = 1; i <= valor; i++)
    {
        print("O fatorial de %d e %d \n" , valor,result);
    }
    
    system("pause");
    return 0;
}