#include <stdio.h>

int main(){
    float valor1,valor2,valor3,media;
        printf("Digite o 1 Numero:\n");
        scanf("%f", &valor1);
        printf("Digite o 2 Numero:\n");
        scanf("%f", &valor2);
        printf("Digite o 3 Numero:\n");
        scanf("%f", &valor3);
    
        media=(valor1+valor2+valor3)/3;
    
        printf("A media dos valores %.1f,%.1f e %.1f = %.3f\n", valor1,valor2,valor3,media);

    return 0

}