//Ler do teclado um número inteiro com três dígitos (no formato CDU - centena, dezena e unidade) e mostrar o número invertido (no formato UDC). O número invertido deve ser armazenado emo
//outra variável antes de ser mostrado.

#include <stdio.h>
    int main(){
         int num1, c, d, u;
        printf("Digite um valor de tres digitos;\n");
        scanf("%d", &num1);
        c=num1/100;
        num1=num1%100;
        d=num1/10;
        u=num1%10;
        num1=u*100+d*10+c;
        printf("Novo valor:%d", num1);
   return 0;
    }

    
