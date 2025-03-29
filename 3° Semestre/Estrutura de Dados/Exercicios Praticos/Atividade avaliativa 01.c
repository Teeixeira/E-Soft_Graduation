/* Alocação Dinâmica de Memória:
-------------------------------------------
Crie um vetor dinâmico contendo 10 elementos numéricos (não repetidos) no intervalo de 10 a 100, utilizando a função malloc.
Os dados poderão ser gerados aleatoriamente, digitados ou via arquivo texto.
Exiba na tela o endereço de memória do vetor.
Exiba na tela o valor de cada elemento do vetor e seu respectivo endereço através da implementação de um procedimento 

Expansão do Vetor:
---------------------------
Redimensione o vetor para conter 15 elementos.
Gere valores aleatórios (entre 100 e 199 não repetidos), para os novos elementos.
Utilize o mesmo procedimento mencionado anteriormente para exibir os elementos atualizados, com seus respectivos valores e endereços 
de memória.

Redução do Vetor:
-------------------------
Reduza o tamanho do vetor para 8 elementos.
Apresente novamente os valores e endereços de memória dos elementos, conforme o procedimento já implementado.

Liberação de Memória:
-------------------------------
Certifique-se de liberar a memória alocada ao final da execução do programa, utilizando a função free. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *vet, tam, i, j;

void exibirponteiro(int *vet, int tam){
    for(i = 0; i < tam; i ++){
        printf("\nvet[%d] = %d, aponta para: %p",i, vet[i], (vet + i));
    }
}

int main () {

    srand(time(NULL));

    tam = 10;

    vet = malloc(tam*sizeof(int));

    if(vet){
        printf("\n\nMemoria alocada com sucesso! Memoria: %p\n", vet);
        for(i = 0; i < tam; i ++){
            *(vet + i) = rand() % 90 + 10;
            for(j = 0; j < i; j ++){
                if(*(vet + i) == *(vet + j)){
                    i--;
                }
            }
        }
    } else {
        printf("\n\nFalha na alocação da memoria!\n");
    }

    exibirponteiro(vet, tam);    

    tam = tam + 5;

    vet = realloc(vet, tam*sizeof(int));

    if(vet){
        printf("\n\nMemoria alocada com sucesso! Memoria: %p\n", vet);
        for(i = 10; i < tam; i ++){
            *(vet + i) = rand() % 100 + 100;
            for(j = 0; j < i; j ++){
                if(*(vet + i) == *(vet + j)){
                    i--;
                }
            }
        }
    } else {
        printf("\n\nFalha na alocação da memoria!\n");
    }

    exibirponteiro(vet, tam);

    tam = tam - 7;

    vet = realloc(vet, tam*sizeof(int));

    if(vet){
        printf("\n\nMemoria alocada com sucesso! Memoria: %p\n", vet);
    } else {
        printf("\n\nFalha na alocação da memoria!\n");
    }

    exibirponteiro(vet, tam);

    free(vet);

    return 0;
}