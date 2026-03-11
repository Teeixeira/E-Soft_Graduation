#include <stdio.h>
#include <stdlib.h>

typedef struct tp_produto{
	int codigo;
	char nome[100];
	struct tp_produto *prox;
};

typedef struct tp_produto Produto;

Produto *topo = NULL;

void empilhar(){
	Produto *produto = (Produto*) malloc(sizeof(Produto));
	
	printf("\nDigite o codigo: ");
	scanf("%d", &produto->codigo);

	printf("\nDigite o nome: ");
	fflush(stdin);
	gets(produto -> nome);
	
	produto -> prox = topo;
	
	topo = produto;
	
	printf("\nProduto cadastrado!");
	system("\npause");

}

void listar(){
	Produto *aux = topo;
	printf("\n===== Lista de produtos =====\n");
	
	while(aux != NULL){
		printf("\nCodigo: %d\nNome: %s\n", aux -> codigo, aux -> nome);
	
		aux = aux -> prox;
	}
	printf("============================");
	system("pause");
}

void main() {

	empilhar();
	system("CLS");

	empilhar();
	system("CLS");

	empilhar();
	system("CLS");

	printf("\nO produto 03 está no topo\n");

	listar();

	system("\npause");

	return 0;
}