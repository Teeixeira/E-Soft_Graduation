#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

    setlocale(LC_ALL,"Portuguese");

    int quad;
    double raiz;

    printf("Informe o numero que deseja saber se e um quadrado perfeito: ");
    scanf("%d",&quad);

    raiz = sqrt(quad);

    if (raiz * raiz == quad) {
        printf("O numero e um quadrado perfeito");
    } else {
        printf("O numero nao e um quadrado perfeito");
    }

    return 0;
}