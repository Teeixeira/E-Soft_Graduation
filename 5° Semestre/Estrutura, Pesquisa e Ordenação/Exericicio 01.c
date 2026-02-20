#include <stdio.h>
#include <stdlib.h>

struct tp_produto {
    int cod;
    char nome[30];
    struct tp_produto *prox;
};

typedef struct tp_produto Produto;

Produto *primeiroLista;

void addLast(){
    Produto *produto = malloc(sizeof(Produto));
    printf("Digite o codigo: \n");
    scanf("%d",&produto -> cod);

    printf("Digite o nome: \n");
    fflush(stdin);
    fgets(produto -> nome, 100, stdin);

    produto -> prox = NULL;

    if(primeiroLista == NULL){
        primeiroLista = produto;
    } else {
        Produto *aux = primeiroLista;

        while(aux -> prox != NULL){
            aux = aux -> prox;
        }

        aux -> prox = produto;
    }
    system("CLS");
}

void imprime(Produto *aux){
    if(aux != NULL){
        printf("===== Dados do Produto =====\n");
        printf("Codigo: %d\n", aux -> cod);
        printf("Nome: %s\n", aux -> nome);

        if(aux -> prox == NULL){
            printf("Proximo Nulo!\n");
        } else {
            printf("Proximo: %d\n", aux -> prox -> cod);
        }
        printf("============================\n");
        printf("\n");
        imprime(aux -> prox);
    }
}

void main(){

    addLast();
    imprime(primeiroLista);
    addLast();
    imprime(primeiroLista);
    addLast();
    imprime(primeiroLista);

    return 0;
}