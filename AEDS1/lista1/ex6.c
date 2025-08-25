//Ler três números reais a, b e c e mostrar o valor de y sendo y = a + b c+a + 2 ∗ (a − b) + log2(64).
#include <stdio.h>
#include <math.h>
    int main(){
        float a,b,c,y;
         printf("Informe o valor de a:");
         scanf("%f", &a);
         printf("Informe o valor de b:");
         scanf("%f", &b);
         printf("Informe o valor de c:");
         scanf("%f", &c);

         y=a+(b/(c+a))+2*(a-b)+log2(64);
           
         printf("O valor de y eh:%.2f.\n", y); 
   
   return 0;

 }
