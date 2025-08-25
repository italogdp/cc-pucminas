//Ler o numerador e o denominador de uma fração e transformá-la em um número decimal.
#include <stdio.h>
int main(){
    float numerador,denominador,decimal;
    printf("Valor do numerador:\n");
    scanf("%f", &numerador);
    printf("Valor de denominador:\n");
    scanf("%f", &denominador); 
    
    if(denominador==0){
        printf("erro no denominador");
        return 1;
    }else(decimal=numerador/denominador);{
        printf("o valor em decimal eh:%.2f.", decimal);
    } 
    return 0;

}
