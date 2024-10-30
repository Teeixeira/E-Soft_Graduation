#include <stdio.h>

int main(){

    float n1, n2, n3, m;

    printf("Informe o primeiro numero: ");
    scanf("%f",&n1);
    printf("Informe o segundo numero: ");
    scanf("%f",&n2);
    printf("Informe o terceiro numero: ");
    scanf("%f",&n3);

    m = (n1 + n2 + n3) / 3;

    printf("A media entre os numeros informados e: %.2f",m);

return 0;

}
