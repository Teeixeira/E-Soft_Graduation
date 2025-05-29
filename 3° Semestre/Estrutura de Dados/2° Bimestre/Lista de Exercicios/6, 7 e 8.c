/* 6. Desenvolva um programa denominado PILHA1 em linguagem C que implemente as operações de uma 
pilha (pop, push e imprimir) cujo nó deverá conter nome[30] e idade. 
 
7. Com base no exercício anterior (PILHA1), construa uma função que retorne a quantidade de elementos na pilha. 
 
8. Ainda com base no programa PILHA1, faça a alteração onde o campo nome deverá ter tamanho dinâmico. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

short int op;

typedef struct apelido_pessoa{
    char nome [30];
    short int idade;
    struct apelido_pessoa *proximo;
} pessoa;

pessoa *top = NULL;

void operacao();
void empilhar();
void desempilhar();
void mostrar_pilha();


int main (){

    do {
    printf("Escolhar uma das operacoes:\nEmpilhar = 1\nDesempilhar = 2\nImprimir = 3\nEncerrar = 4\n");
    scanf("%d",&op);
    fflush(stdin);

    switch (op) {
    case 1:
        
        break;
    
    default:
        break;
    }

    } while (op != 4);

    return 0;
}

void empilhar(pessoa p) {
    pessoa *novo = malloc(sizeof(pessoa));
    if(novo){
        *novo = p;
        novo -> proximo = top;
        top = novo;
    } else {
        printf("Nao foi possivel empilhar a pessoa!\n");
    }

    printf("Pessoa %s empilhada com sucesso!\n", p.nome);
}

void desempilhar () {
    if(top == NULL){
        printf("A pilha esta vazia!\n");
    } else {
        pessoa *temp;
        temp = top;
        top = top -> proximo;
        printf("Pessoa %s removida da pilha!\n\n", temp->nome);
        free(temp);
    }
}
