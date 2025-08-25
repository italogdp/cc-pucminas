//Ler a razão e o primeiro termo de uma PG e mostrar o seu quinto termo.
#include <stdio.h>
#include <math.h>
    int main(){
        int razao,a1,a5;
        printf("informe o primeiro termo:");
        scanf("%d", &a1);
        printf("informe o valor da razao:");
        scanf("%d", &razao);

        a5=a1*pow(razao, 4);

        printf("O valor do quinto termo:%d\n",a5);

        return 0;
    }