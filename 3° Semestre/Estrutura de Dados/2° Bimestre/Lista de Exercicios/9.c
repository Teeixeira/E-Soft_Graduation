/* Construa um programa em linguagem C que implemente uma pilha através 
de 10 elementos gerados randomicamente (não repetidos). Posteriormente, 
apresente o conteúdo da pilha. */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

typedef struct sort_num {
        int num;
        struct sort_num *prox;
    } numeros;

numeros *topo = NULL;


int main () {

    int quant;

    srand(time(NULL));

    printf("Quantidade de numeros: ");
    scanf("%d",&quant);

    for(int i = 0; i < quant; i ++){
        numeros *novo = malloc(sizeof(numeros));
        if(novo){
            novo -> num = rand() % 100;
            novo -> prox = topo;
            topo = novo -> prox;
        } else {
            printf("\nNao foi possivel alocar memoria!\n");
        }
        printf("\nNumero alocado com sucesso!\n");
    }

    return 0;
}