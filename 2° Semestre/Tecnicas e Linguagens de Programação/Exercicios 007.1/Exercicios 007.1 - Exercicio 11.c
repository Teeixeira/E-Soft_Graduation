#include <stdio.h>
int main(){
    double m1,m2,m3;

    printf("Escreva a primeira medidas do triangulo \n");
    scanf("%lf",&m1);
    printf("Escreva a segunda medidas do triangulo \n");
    scanf("%lf",&m2);
    printf("Escreva a terceira medidas do triangulo \n");
    scanf("%lf",&m3);
    if ((m1 + m2 > m3) && (m1 + m3 > m2) && (m2 + m3 > m1)) {
        
        if (m1 == m2 && m2 == m3) {
            printf("Triângulo equilátero\n");
        } else if (m1 == m2 || m1 == m3 || m2 == m3) {
            printf("Triângulo isósceles\n");
        } else {
            printf("Triângulo escaleno\n");
        }
    } else {
        printf("As medidas não formam um triângulo válido\n");
    }

    return 0;
}