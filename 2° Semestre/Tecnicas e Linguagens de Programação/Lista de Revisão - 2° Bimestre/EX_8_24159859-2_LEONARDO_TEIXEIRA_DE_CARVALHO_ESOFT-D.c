#include <stdio.h>

int main(){

    float pi,raio,perimetro,diametro;

    pi = 3.1416;

    printf("O valor do raio: ");
    scanf("%f",&raio);

    diametro=(raio*raio);
    perimetro=(pi*diametro);

    printf("O perimetro do circulo e de: %f",perimetro);

return 0;

}
