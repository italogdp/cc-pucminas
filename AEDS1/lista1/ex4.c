//Ler o raio de um círculo e mostrar o seu perímetro e área.
    #include<stdio.h>
    #include<math.h>
    int main(){
        float raio,perimetro,area,pi=3.14;
        printf("Informe o valor do raio:\n");
        scanf("%f", &raio);


        perimetro= 2*pi*raio;
        area=pi*pow(raio, 2);

        printf("Valor do perimetro eh:%.2f./n", perimetro);
        printf("Valor da area eh:%.2f./n", area);

        return 0;
    }