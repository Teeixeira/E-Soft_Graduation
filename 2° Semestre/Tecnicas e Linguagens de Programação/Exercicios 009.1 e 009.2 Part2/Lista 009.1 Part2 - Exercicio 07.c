/* Crie um conversor de unidades que converta entre Celsius e Fahrenheit utilizando um laço while */

#include <stdio.h>

int opcao;
float tempC, tempF;

int main (){

    while(1) {
        printf("\nEscolha uma opcao:\n");
        printf("1. Converter Celsius para Fahrenheit\n");
        printf("2. Converter Fahrenheit para Celsius\n");
        printf("3. Encerrar o programa\n");
        scanf("%d", &opcao);

        if(opcao == 1) {
            printf("Informe a temperatura em Celsius: ");
            scanf("%f", &tempC);
            tempF = (tempC * 9/5) + 32;
            printf("A temperatura em Fahrenheit eh: %.2f\n", tempF);
        } else if(opcao == 2) {
            printf("Informe a temperatura em Fahrenheit: ");
            scanf("%f", &tempF);
            tempC = (tempF - 32) * 5/9;
            printf("A temperatura em Celsius eh: %.2f\n", tempC);
        } else if(opcao == 3) {
            printf("Ok, encerrando o programa!");
            break;
        } else {
            printf("Escolha invalida! Tente novamente.\n");
        }
    }

    printf("Programa Finalizado!");

    return 0;
}