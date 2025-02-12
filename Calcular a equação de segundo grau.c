#include <stdio.h>
#include <stdlib.h>
#include <math.h> // biblioteca matematica sqrt(xxx)
int main(){
    float a, b, c, delta, baskara ;
    printf("digite numero do a \n");
    scanf("%f",&a);
    printf("digite numero do b \n");
    scanf("%f",&b);
    printf("digite numero do c \n");
    scanf("%f",&c);

    delta=pow(b,2) -4 * a *c;
    

    printf("Delta é %.2f ,a= %f b= %f , c=%f, \n", delta, a,b,c);

    if (delta > 0) {
    baskara = (-b + sqrt(delta)) / (2 * a);
    printf("Raiz 1: %.2f\n", baskara);

    baskara = (-b - sqrt(delta)) / (2 * a);
    printf("Raiz 2: %.2f\n", baskara);
  } else if (delta == 0){
    float x = b / (2 * a);
    printf("o delta é igual a 0 portanto x = %.2f / (2*%.2f) = %.1f \n",b,a,x);
    }else {
    printf("Raízes complexas!\n");
  }
return 0;    
}