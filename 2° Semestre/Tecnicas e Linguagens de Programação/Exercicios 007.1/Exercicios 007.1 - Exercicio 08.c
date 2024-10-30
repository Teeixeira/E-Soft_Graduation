#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    float dist, cons, gas, gasto;

    printf("De quantos KM sera a viagem?: ");
    scanf("%f",&dist);
    printf("Qual o valor da gasolina?: ");
    scanf("%f",&gas);
    printf("Qual o consumo medio do veiculo que utilizara para viajar?: ");
    scanf("%f",&cons);

    gasto = (dist / cons) * gas;

    printf("O gasto total de percuso sera de: %.2f R$",gasto);

    return 0;
}