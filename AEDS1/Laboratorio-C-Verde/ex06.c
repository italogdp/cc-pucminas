#include <stdio.h>
#include <math.h>
int main(){
    float raio,altura,pi=3.14159,volume;
        printf("Digite o valor da altura:\n");
        scanf("%f", &altura);
        printf("Digite o valor do raio:\n");
        scanf("%f", &raio);

        volume=pi*pow(raio, 2)* altura;

        printf("O Volume do cilindro:%.3f", volume);


 return 0;
}