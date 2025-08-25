//Ler dois números reais e salvá-los nas variáveis A e B. Em seguida, troque os valores das duas
//variáveis de forma que a variável A passe a ter o valor da variável B e vice-versa. No final, mostre
//os valores finais.
#include <stdio.h>
#include <math.h>

int main(){
 int a,b,c;
 printf("Valor de a:\n");
 scanf("%d", &a);
 printf("Valor de b:\n");
 scanf("%d", &b); 

 c=a;
 a=b;
 b=c;

 printf("O valor de de a eh:%d\nO valor de b eh:%d\n", a, b);
 
 return 0;
}