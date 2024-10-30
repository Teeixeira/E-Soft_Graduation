/******************************************************************************

Leonardo Teixeira de Carvalho RA 24159859-2

Exercicio 03

*******************************************************************************/

#include <stdio.h>

float med1, med2, med3, med4;
float media;

void calcularmedidas(){
    if (med1 > (media + (media * 0.4)) || med1 < (media - (media * 0.4))){
            printf("\nA medida 1 esta fora dos padroes aceitaveis");
        } else if (med2 > (media + (media * 0.4)) || med2 < (media - (media * 0.4))){
            printf("\nA medida 2 esta fora dos padroes aceitaveis");
        } else if (med3 > (media + (media * 0.4)) || med3 < (media - (media * 0.4))){
            printf("\nA medida 3 esta fora dos padroes aceitaveis");
        } else if (med4 > (media + (media * 0.4)) || med4 < (media - (media * 0.4))){
            printf("\nA medida 4 esta fora dos padroes aceitaveis");
        } else {
            printf("\nTodas as medias estao dentro dos padroes");
        }
}

int main() {
    
    printf("Informe a medida da amostra 1: ");
    scanf("%f",&med1);
    
    printf("Informe a medida da amostra 2: ");
    scanf("%f",&med2);
    
    printf("Informe a medida da amostra 3: ");
    scanf("%f",&med3);
    
    printf("Informe a medida da amostra 4: ");
    scanf("%f",&med4);
    
    media = (med1 + med2 + med3 + med4) / 4;
    
    printf("A media e de: %.2f",media);
    
    calcularmedidas();

    return 0;
}