/* 6. Desenvolva um programa denominado PILHA1 em linguagem C que implemente as operações de uma 
pilha (pop, push e imprimir) cujo nó deverá conter nome[30] e idade. 
 
7. Com base no exercício anterior (PILHA1), construa uma função que retorne a quantidade de elementos na pilha. 
 
8. Ainda com base no programa PILHA1, faça a alteração onde o campo nome deverá ter tamanho dinâmico. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int op;

typedef struct apelido_pessoa{
    char nome [30];
    int idade;
    struct apelido_pessoa *proximo;
} pessoa;

pessoa *top = NULL;

void empilhar(pessoa p);
void desempilhar();
void liberarpilha();
void mostrar_pilha();
void quantidade();
pessoa entradadados();

int main (){

    pessoa pessoas;

    do {
    printf("\nEscolha uma das operacoes:\nEmpilhar = 1\nDesempilhar = 2\nLimpar Memoria = 3\nImprimir = 4\nEncerrar = 5\n");
    scanf("%d",&op);
    fflush(stdin);

    switch (op) {
        case 1:
            pessoas = entradadados();
            empilhar(pessoas);
            break;
        case 2:
            desempilhar();
            break;
        case 3:
            liberarpilha();
            break;    
        case 4:
            mostrar_pilha();
            break;
        case 5:
            break;
        default:
            printf("Opcao invalida");
    }

    } while (op != 5);

    liberarpilha();

    printf("\nFim do programa.\n");

    return 0;
}

void empilhar(pessoa p) {
    pessoa *novo = malloc(sizeof(pessoa));
    if(novo){
        *novo = p;
        novo -> proximo = top;
        top = novo;
    } else {
        printf("\nNao foi possivel empilhar a pessoa!\n");
    }

    printf("\nPessoa %s empilhada com sucesso!\n", p.nome);
}

void desempilhar () {
    if(top == NULL){
        printf("\nA pilha esta vazia!\n");
    } else {
        pessoa *temp;
        temp = top;
        top = top -> proximo;
        printf("\nPessoa %s removida da pilha!\n\n", temp->nome);
        free(temp);
    }
}

void liberarpilha() {
    while (top != NULL){
        desempilhar();
    }
    printf("\nMemoria liberada com sucesso.\n");
}

pessoa entradadados(){
    pessoa pes;

    printf("\nCadastro de Pessoa:\n");
    printf("Nome: ");
    scanf("%s",pes.nome);
    fflush(stdin);
    printf("Idade: ");
    scanf("%d",&pes.idade);

    return pes;
}

void mostrar_pilha() {
    if (top == NULL) {
        printf("\nA pilha esta vazia!\n");
        return;
    }
    pessoa *temp;
    temp = top;

    printf("\nMostrando Pilha...\n");

    while (temp != NULL){
        printf("Nome: %s\n", temp -> nome);
        printf("Idade: %d\n", temp -> idade);
        temp = temp -> proximo;
    }
}

void quantidade(){

}