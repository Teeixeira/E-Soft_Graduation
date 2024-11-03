/* Operações Básicas:
Calcular a soma de todos os elementos de um vetor.
Encontrar o maior e o menor valor de um vetor. */

#include <stdio.h> 

int main (){

    int x, maior, menor;
    int inteiros[10];
    float soma = 0;

    for(x = 0; x < 10; x ++){
        printf("Digite o %d numero: ",x + 1);
        scanf("%d",&inteiros[x]);

        soma += inteiros[x];

        if(x == 0){
            maior = inteiros[x];
            menor = inteiros[x];
        } else if (inteiros[x] > maior){
            maior = inteiros[x];
        } else if (inteiros[x] < menor){
            menor = inteiros[x];
        }
    }

    printf("A soma total eh %.1f, o maior numero eh %d e o menor numero eh %d",soma, maior, menor);

    return 0;
}