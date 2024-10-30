#include <stdio.h>

double peso,altura,imc;

int main () {

    printf("Qual o seu peso?\n");
    scanf("%lf",&peso);
    if (peso <= 1 || peso > 700){
        printf("Peso invalido");
    }
    printf("Qual a sua altura?\n");
    scanf("%lf",&altura);
    if (altura <= 0 || altura > 3){
        printf("Altura invalida");
    }

    imc = peso / (altura * altura);

    if (peso <= 16.9){
        printf("Muito abaixo do peso!!!");
    } else if (imc >= 17 && imc <= 18.4) {
        printf("Abaixo do peso!");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Peso normal :)");
    } else if (imc >= 25 && imc <= 29.9) {
        printf("Acima do peso!");
    } else if (imc >= 30 && imc <= 34.9) {
        printf("Obesidade grau I");
    } else if (imc >= 35 && imc <= 40) {
        printf("Obesidade grau II");
    } else if (imc > 40) {
        printf("Obesidade grau III");
    }

return 0;

}