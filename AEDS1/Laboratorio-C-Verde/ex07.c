#include <stdio.h>
int main(){
    int a1,a2,an,soma,razao,n;
        printf("Digite o valor do 1 termo:\n");
        scanf("%d", &a1);
        printf("Digite o valor do 2 termo:\n");
        scanf("%d", &a2);
        printf("Digite o numero de termos:\n");
        scanf("%d", &n);

        razao=a2-a1;
        an=a1+(n-1)*razao;
        soma=n*(a1+an)/2;

    printf("Soma = %d", soma);


}       