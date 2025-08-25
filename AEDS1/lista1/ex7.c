//Ler os valores dos catetos de um triângulo retângulo e mostrar a hipotenusa.
#include <stdio.h>
#include <math.h>
int main(){
    float cateto1,cateto2,hipotenusa;
    printf("Informe o valor de cateto1:");
    scanf("%f", &cateto1);
    printf("Informe o valor de cateto2:");
    scanf("%f", &cateto2);
    
    hipotenusa=sqrt(pow(cateto1, 2)+pow(cateto2, 2));

    printf("O valor da hipotenusa eh:%.2f.\n", hipotenusa); 

    return 0;
}