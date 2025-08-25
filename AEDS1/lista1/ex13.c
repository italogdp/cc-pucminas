//Ler o valor do salário mínimo e o valor do salário de uma pessoa, calcular e mostrar quantos salários mínimos essa pessoa ganha.
#include <stdio.h>
int main (){
    float salario_minimo,salario_pessoa,total_minimo;
    printf("Valor do salrio_minimo:\n");
    scanf("%f", &salario_minimo);  
    printf("Valor do salario_pessoa:\n");
    scanf("%f", &salario_pessoa);

    total_minimo=salario_pessoa / salario_minimo;

    printf("Essa pessoa ganha %.2f.de salario:\n", total_minimo);

    return 0;
}

