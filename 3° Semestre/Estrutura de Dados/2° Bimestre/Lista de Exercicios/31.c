#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int num;
    struct No *proximo;
} No;

void push(No **topo, int valor) {
    No *novo = malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro ao alocar memória\n");
    }
    novo -> num = valor;
    novo -> proximo = *topo;
    *topo = novo;
}

int pop(No **topo) {
    if (*topo == NULL) {
        printf("Erro: pilha vazia.\n");
    }
    No *temp = *topo;
    int valor = temp -> num;
    *topo = temp -> proximo;
    free(temp);

    return valor;
}

int main() {
    No *pilha = NULL;
    int x, soma = 0;

    push(&pilha, 2);
    push(&pilha, 4);
    push(&pilha, 3);
    push(&pilha, 5);

    x = pop(&pilha);
    soma += x;
    x = 10;

    push(&pilha, x);
    x = 12;

    push(&pilha, x);

    x = pop(&pilha);

    soma += x;

    printf("Valor final da soma: %d\n", soma);

    return 0;
}