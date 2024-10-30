/******************************************************************************

Leonardo Teixeira de Carvalho RA 24159859-2 

Exercicio 01

*******************************************************************************/

#include <stdio.h>

float kw1, kw2, kw3, media;

void calcularconsumo(){
    if (kw1 > (media * 2)){
        printf("\nO equipamento kw1 esta com o consumo elevado, deve ser desligado imediatamente");
    } else if (kw2 > (media * 2)){
        printf("\nO equipamento kw2 esta com o consumo elevado, deve ser desligado imediatamente");
    } else if (kw3 > (media * 2)){
        printf("\nO equipamento kw3 esta com o consumo elevado, deve ser desligado imediatamente");
    } else if (media > 1500){
        printf("\nAlto consumo de energia, desligue os equipamentos com menos consumo");
    } else {
        printf("\nTodos os equipamentos estão funcionando dentro dos parâmetros normais de consumo\n");
    }
}

int main(){
    
    printf("Informe o kWh do primeiro equipamento: ");
    scanf("%f",&kw1);
    printf("Informe o kWh do segundo equipamento: ");
    scanf("%f",&kw2);
    printf("Informe o kWh do terceiro equipamento: ");
    scanf("%f",&kw3);
    
    media = (kw1 + kw2 + kw3) / 3;
    printf("A media de kWh dos equipamentos: %.2f", media);
    
    calcularconsumo();

    return 0;
}