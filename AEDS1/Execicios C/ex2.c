//Faça um programa que receba três notas, calcule e mostre a média aritmética. 
/*Get-Content pubin.txt | .\ex1.exe > pubout.txt
 gcc ex1.c -o ex1
*/
#include <stdio.h>
int main(){
float nota1,nota2,nota3,media;
printf("Digite o valor da nota1:");
scanf("%f", &nota1);
printf("Digite o valor da nota2:");
scanf("%f", &nota2);
printf("digite o valor da nota3:");
scanf("%f", &nota3);
media=(nota1+nota2+nota3)/3;
printf("O valor da media e:%f", media);
return 0;

}