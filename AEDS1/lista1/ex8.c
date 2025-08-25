//Ler a razão e o primeiro termo de uma PA e mostrar o seu décimo termo.
#include <stdio.h>
#include <math.h>
    int main(){
        int razao,a1,a10;
        printf("informe o primeiro termo:");
        scanf("%d", &a1);
        printf("informe o valor da razao:");
        scanf("%d", &razao);

        a10=a1+razao*9;

        printf("O valor do decimo termo:%d\n",a10);

        return 0;
    }