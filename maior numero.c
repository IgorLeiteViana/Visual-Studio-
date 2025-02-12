#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
int maiorValor(int num1, int num2, int num3) {
  int maior;
  if (num1 >= num2 && num1 >= num3) {
    maior = num1;
  } else if (num2 >= num1 && num2 >= num3) {
    maior = num2;
  } else {
    maior = num3;
  }

  return maior;  



/*
  ou maior = num
  if num2 > maior
    maior = num2;
  if num3 > maior
    maior = num3
return maior  
  */
}

main (){
   // float num, num2, num3, result;
   int num, num2,num3, result;
    printf("escolha os seus 3 numeros para calculo que qual é o maior \n");
    scanf("%d" , &num);
    scanf("%d" , &num2);
    scanf("%d" , &num3);

    result = maiorValor(num, num2,num3);

    printf("o resultado que qual e o maior %f ou isso/*maiorvalor(num,num2,num3)*/ ", result );

    system("pause");
    return 0;
}