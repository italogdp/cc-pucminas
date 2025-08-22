//Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada.
#include <stdio.h>
int main(){
float nota1,peso1,nota2,peso2,nota3,peso3,soma,media;

printf("Digite a nota1:\n");
scanf("%f",&nota1);
printf("Digite o peso:\n");
scanf("%f",&peso1);

printf("Digite a nota2:\n");
scanf("%f",&nota2);
printf("Digite o peso:\n");
scanf("%f",&peso2);

printf("Digite a nota1:\n");
scanf("%f",&nota3);
printf("Digite o peso:\n");
scanf("%f",&peso3);

media=(nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);
printf("O valor da media ponderada e:%.2f\n",media);
}