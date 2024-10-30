#include <stdio.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL,"Portuguese");

    float valor;

    printf("Qual o valor do produto? ");
    scanf("%f",&valor);

    if (valor >= 500) {
        valor = valor * 0.8;
        printf("Com desconto de 20 porcento o total e: %.2f",valor);
    } else if (valor < 500 && valor >= 100){
        valor = valor * 0.9;
        printf("Com desconto de 10 porcento o total e: %.2f",valor);        
    } else {
        printf("O desconto nao se aplica!");
    }

    return 0;
}