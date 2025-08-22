// Sabendo que 100 kilowatt de energia custa um sétimo do salário mínimo, faça um algoritmo que leia o valor do salário mínimo e a quantidade de kilowatt gasta por uma residência, calcule e mostre: o valor em reais de cada kilowatt; o valor em reais a ser pago; e o novo valor a ser pago
    #include <stdio.h>
    int main(){
        
         float valor_salario,kwh,valor_1kwh,valor_pago,desconto;
         printf("Infome o valor do salrio minimo:\n");
         scanf("%f", &valor_salario);
         printf("Informe o valor do consumo de energia:\n");
         scanf("%f", &kwh);
         valor_1kwh=(valor_salario/7)/100;
         valor_pago=kwh*valor_1kwh;
         desconto=valor_pago-valor_pago*0.1;

         printf("O valor de 1kwh eh :%.2f.\n",valor_1kwh);
         printf("O valor pago eh:%.2f.\n",valor_pago);
         printf("O valor a ser pago por essa resistencia:%.2f.\n",desconto);




        






    }