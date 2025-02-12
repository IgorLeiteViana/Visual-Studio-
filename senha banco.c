#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char senha[20];
    char senhateste[20];
    int erro = 0;
    

    printf("Digite sua senha: ");
    scanf("%s", senha); // Lê a senha do usuário e armazena na variável `senha`

    do
    {
        printf("cliente , por favor digite sua senha e veja se voce lembra");
        printf("testes");
        scanf("%s" , senhateste);
        if (strcmp(senhateste, senha) == 0)
        {
            printf("parabens acertou a senha, não ira precisar ir ao banco");
            break;
        } else{
            printf("acesso negado, tente novamente");
            erro=erro + 1;
        }
    } while (erro < 3);
return 0;
system("pause");
}