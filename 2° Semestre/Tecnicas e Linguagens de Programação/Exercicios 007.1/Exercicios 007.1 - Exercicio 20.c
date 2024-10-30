#include <stdio.h>
int main(){
    double graus;
    char tipo;
    printf("Converta a temperatura em Graus Celcius para Fahrenheit ou vice-versa \n");
    printf("Digite C para Celcius e F para Fahrenheit \n");
    scanf("%c",&tipo);
    printf("Digite o valor \n");
    scanf("%lf", &graus);
    switch (tipo)
    {
    case 'F':
        printf("A temperatura em Fahrenhei e ", (graus*9/5)+32);
        break;
    case 'C':
        printf("A temperatura em Fahrenhei e ", 5/9*(graus-32));
        break;
    default:
        printf("Escolha invalida");
        break;
    }
}