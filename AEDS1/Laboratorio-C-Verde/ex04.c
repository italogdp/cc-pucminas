#include <stdio.h>

int main(){
    float valor1,valor2,valor3,soma;
        printf("Digite o 1 Valor:\n");
        scanf("%f", &valor1);
        printf("Digite o 2 Valor:\n");
        scanf("%f", &valor2);
        printf("Digite o 3 Valor:\n");
        scanf("%f", &valor3);
    
        soma=valor1+valor2+valor3;
    
        printf("Soma de %.1f+%.1f+%.1f=%.1f\n", valor1,valor2,valor3,soma);

    return 0;

}