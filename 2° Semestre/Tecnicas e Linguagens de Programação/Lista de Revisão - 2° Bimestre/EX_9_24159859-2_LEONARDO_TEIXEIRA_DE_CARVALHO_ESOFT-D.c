#include <stdio.h>

float c, f;

int main(){

    printf("Quantos graus quer converter? ");
    scanf("%f",&c);

    f = (c * 9/5) + 32;

    printf("A conversao de graus para fahrenheit e de: %.1f F",f);

return 0;

}