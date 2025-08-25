//Ler um valor de hora (e minuto), calcular e mostrar quantos minutos se passaram desde o início do dia
#include <stdio.h>
#include <math.h>
    int main(){
    float hora,minutos,hora_minutos,minutos_minutos;        
    printf("Valor do hora:\n");
    scanf("%f", &hora);  
    printf("Valor do minutos\n");
    scanf("%f", &minutos);  
    
    hora_minutos=hora*60;
    minutos_minutos=hora_minutos+minutos;

    printf("Se passou %.2f minutos desde o incio do dia:\n", minutos_minutos);

        return 0;

}