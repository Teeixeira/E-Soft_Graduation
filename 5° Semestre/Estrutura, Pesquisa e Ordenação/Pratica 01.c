#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h> 
#include <locale.h>
#include <string.h>
#include <stdbool.h>

int op;
int prox = 0;
bool sair = false;

struct alunos{
    int codigo;
    char nome[100];
    float matricula;
};

struct alunos aluno[100]; 

void menu(){
    printf("====== MENU ======\n");
    printf("1 - Cadastrar\n");
    printf("2 - Consultar\n");
    printf("3 - Listar\n");
    printf("4 - Remover\n");
    printf("5 - Sair\n");
    printf("Escolha uma opcao: ");
}

void sairDoSistema(){
    printf("\nSaindo do sistema...\n");
    sair = true;
}

void cadastrar(){
	system("CLS");
	if(prox >= 100){
		printf("Cadastro cheio...\n");
		system("pause");
	} else {		
		printf("\nDigite o codigo: ");
	    scanf("%i", &aluno[prox].codigo);
	    
	    printf("\nDigite o nome: ");
	    fflush(stdin);
    	fgets(aluno[prox].nome, 100, stdin);	
    	
	    printf("\nDigite a matricula: ");
	    scanf("%f", &aluno[prox].matricula);	
	    
	    prox++;			
	}	
}

void consultar(){
	system("CLS");
	int codigo;
	printf("Digite o codigo a ser localizado: \n");
	scanf("%i", &codigo);
	bool localizado = false;
	
	for(int i=0; i < prox; i++){
		if(codigo == aluno[i].codigo){
			printf("\n====== Dados do aluno =======");
		    printf("\nCodigo: %i", aluno[i].codigo);
	        printf("\nNome: %s", aluno[i].nome);
	        printf("matricula: %.0f", aluno[i].matricula);
	        printf("\n===============================");
	        printf("\n");
	        localizado = true;
		}		
	}
	if(!localizado){
		printf("\Aluno nao localizado!\n");
	}
	system("pause");
}

void listar(){
	system("CLS");
	for(int i=0; i < prox; i++){
		printf("\n====== Dados do aluno =======");
		printf("\nCodigo: %i", aluno[i].codigo);
	    printf("\nNome: %s", aluno[i].nome);
	    printf("matricula: %.0f", aluno[i].matricula);
	    printf("\n===============================");
	    printf("\n");
	}
	system("pause");	
}

void remover(){
	system("CLS");
	int codigo;
	printf("Digite o codigo a ser removido: \n");
	scanf("%i", &codigo);
	bool localizado = false;
	
	for(int i=0; i < prox; i++){
		if(codigo == aluno[i].codigo){			
			aluno[i].codigo = aluno[prox-1].codigo;			
			strcpy(aluno[i].nome, aluno[prox-1].nome);
			aluno[i].matricula  = aluno[prox-1].matricula;
			prox--;			
	        localizado = true;
		}		
	}
	if(!localizado){
		printf("\Aluno nao localizado!\n");
	} else {
	    printf("\nAluno removido com sucesso!\n");
	}
	system("pause");
}

int main()
{	
    setlocale(LC_ALL, "Portuguese");	
	while(sair == false){
		system("CLS");
		menu();
		scanf("%i", &op);
		switch(op){
			case 1:
				cadastrar();
				break;
			case 2:
				consultar();
				break;
			case 3:
				listar();                                           
				break;
			case 4:
				remover();
				break;
			case 5:
				sairDoSistema();
				break;
			default:
			    printf("Opcao invalida!\n");
			    system("pause");
		}
	}
	
	return 0;
}