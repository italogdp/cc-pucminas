// Ler o lado de um quadrado e mostrar o seu perímetro, área e diagonal.
#include<stdio.h>
#include<math.h>
    int main(){
        float lado,perimetro,area,diagonal;
        printf("Informe o valor do lado:\n");
        scanf("%f", &lado);

        perimetro=lado*4;
        area=pow(lado, 2);
        diagonal= lado*sqrt(2);
         
        printf("O perimetro do quadrado eh:%.2f\n", perimetro);
        printf("O area do quadrado eh:%.2f\n", area);
        printf("O diagonal do quadrado eh:%.2f\n", diagonal);
    
    return 0;
    }
     







