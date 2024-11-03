/* Básicos:
Ler 10 números inteiros e imprimir.
Ler 10 números e imprimir na ordem inversa. */

#include <stdio.h> 

int main (){

    int x;
    int inteiros[10];

    for(x = 0; x < 10; x ++){
        printf("Digite o %d numero: ",x + 1);
        scanf("%d",&inteiros[x]);
    }

    for(x = 0; x < 10; x ++){
        printf("O %d numero eh: %d\n",x + 1, inteiros[x]);
    }

    for(x = 0; x < 10; x ++){
        printf("Digite o %d numero: ",x + 1);
        scanf("%d",&inteiros[x]);
    }

    for(x = 0; x < 10; x ++){
        printf("O %d numero eh: %d\n",x + 1, inteiros[9 - x]);
    }


    return 0;
}