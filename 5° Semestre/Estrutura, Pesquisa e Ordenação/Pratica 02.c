#include <stdio.h>
#include <stdlib.h>

typedef struct tp_aluno{
	int codigo;
	char nome[100];
	struct tp_aluno *prox;
};

typedef struct tp_aluno tp_aluno;

tp_aluno *primeiroLista;

void addLast(){
	tp_aluno *aluno = (tp_aluno*) malloc(sizeof(tp_aluno));
	printf("\nDigite o codigo: ");
	scanf("%i", &aluno->codigo);
	printf("\nDigite o nome: ");
	fflush(stdin);
	fgets(aluno->nome, 100, stdin);
	aluno->prox = NULL;
	if(primeiroLista==NULL){
		primeiroLista = aluno;
	}else{
		tp_aluno *aux = primeiroLista;
		while(aux->prox!=NULL){
			aux = aux->prox;
		}
		aux->prox = aluno;
	}
	system("CLS");	
	
}

void imprime(tp_aluno *aux){	
	if(aux != NULL){
		printf("\n===== Dados do aluno =====");
		printf("\nCodigo: %i", aux->codigo);
		printf("\nNome: %s", aux->nome);
		if(aux->prox==NULL){
			printf("Prox nulo\n");
		}else{
			printf("Prox: %i", aux->prox->codigo);
		}			
		
		imprime(aux->prox);
	}
}

main() {
    addLast();
    imprime(primeiroLista);
    system("pause");
	system("CLS");		
    addLast();
    imprime(primeiroLista);
    system("pause");
	system("CLS");		
    addLast();
    imprime(primeiroLista);
    system("pause");
	system("CLS");		
}