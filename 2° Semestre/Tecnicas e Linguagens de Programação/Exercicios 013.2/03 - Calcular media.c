/* Calcular a média dos elementos de um vetor */

#include <stdio.h> 

int main (){

    int x, inteiros[10];
    float soma;
   
    for(x = 0; x < 10; x ++){
        printf("Digite o %d numero: ",x + 1);
        scanf("%d",&inteiros[x]);

        soma += inteiros[x];
    }

    printf("A soma total eh %.1f, e sua media: %.1f",soma, soma / x);

    return 0;
}