#include<stdio.h>
#include<stdlib.h>
int main(void)
{
   int n = 0; // variavel inteiro
   float n2 = 6.79; // variavel que possui casas decimais utiliza 4 bits
   char letra = 'a' ; // variavel do tipo caracter 
   char frase[10] = "Bom dia" ; //string
   double n3=1.256489 ; // comporta mais casas decimais (15)do que vairavel float, utiliza 8 bits
   printf("exibindo o numero inteiro %d \n",n); //d significa inteiro decimal
   printf("exibindo numero real %f\n",n2);
   printf("exibindo um caracter %c\n",letra);
   printf(" %s\n",frase);
   printf("exibindo variavel do tipo double %f\n",n3);
   printf("valores do tipo %d %f %c %s %f\n" , n,n2,letra,frase,n3);
   printf("hello world\n");
system("pause");
return 0;
}
