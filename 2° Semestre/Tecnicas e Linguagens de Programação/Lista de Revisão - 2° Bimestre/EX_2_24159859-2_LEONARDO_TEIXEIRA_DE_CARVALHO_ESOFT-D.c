#include <stdio.h>

float n1;
int n2;

int main(){

    printf("Informe um numero: ");
    scanf("%f",&n1);

    n2 = n1;

    printf("O numero inteiro e: %d",n2);
    printf("\nA parte flutuante e: %f",n1-n2);

return 0;

}