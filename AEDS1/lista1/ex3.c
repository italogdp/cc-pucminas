//Ler a base e a altura de um retângulo e mostrar o seu perímetro, área e diagonal.
#include<stdio.h>
#include<math.h>
   int main(){

    int base,altura,area,perimetro,diagonal;

    printf("Infore o valor da base:\n");
    scanf("%d", &base);
    printf("Informe o valor da altura:\n");
    scanf("%d", &altura);
    perimetro=base*2+altura*2;
    area=base*altura;
    diagonal=sqrt(pow(base, 2)-pow(altura, 2));

    printf("O perimetro eh:%d\n", perimetro);
    printf("A area eh:%d\n", area);
    printf("A diagonal eh:%d\n", diagonal);
}