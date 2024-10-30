#include <stdio.h>

float real, dolar;

int main(){

    printf("Quantidade de reais: ");
    scanf("%f",&real);
    printf("Qual a cotacao do dolar? ");
    scanf("%f",&dolar);

    dolar = real * dolar;

    printf("A conversao em dolar deu: %.2f",dolar);

return 0;

}