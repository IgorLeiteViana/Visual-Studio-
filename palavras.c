#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void){
    char palavra[12];
    
    scanf("%s" , palavra);
    
    gets(palavra);
    
    int i;
    
    int size = strlen(palavra);

    for(i = 0; i < size / 2 ; i++){
        char tmp = palavra[i]; // armazena o caractere inicial
        palavra[i] = palavra[size - i - 1]; // troca caractere da ponta oposta
        palavra[size - i - 1] = tmp ; // armazena o caractere inicial da palavra
    }
    printf("%s \n", palavra);



   /* char palavra[12] = "INFORMATICA";
    strrev(palavra); //reversing string
    printf("O revorço de informatica é %s\n", palavra);
    
*/
    system("pause");
    return 0;
}