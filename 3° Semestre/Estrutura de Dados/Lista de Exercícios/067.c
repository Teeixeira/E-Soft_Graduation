/*Implemente um programa em linguagem C que utilize alocação dinâmica de memória para criar e preencher uma matriz de inteiros com dimensões 3x5, armazenando 
valores sequenciais de 0 a 15. 
Após isso, o programa deve realocar dinamicamente a matriz para as novas dimensões 5x5, preservando os dados já inseridos e preenchendo os novos elementos 
com os valores sequenciais de 15 a 24. 
O programa deve exibir a matriz ao usuário duas vezes: 
1. Após o preenchimento da matriz 3x5. 
2. Após a realocação e o preenchimento dos novos elementos n a matriz 5x5. 
Obs. Como a apresentação da matriz será efetuada duas vezes,  utilize um procedimento. */

#include <stdio.h>
#include <stdlib.h>

void imprimirMatriz(int *matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%2d ", *(matriz + i * colunas + j));
        }
        printf("\n");
    }
    printf("\n");
}

int linhas = 3, colunas = 5;
int novoTam = 5;
int valor = 0;

int main() {

    int *matriz = (int *)malloc(linhas * colunas * sizeof(int));
    if (matriz == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }

    for (int i = 0; i < linhas * colunas; i++) {
        matriz[i] = valor++;
    }

    printf("Matriz 3x5:\n");
    imprimirMatriz(matriz, linhas, colunas);

    matriz = realloc(matriz, novoTam * novoTam * sizeof(int));
    if (matriz == NULL) {
        printf("Erro ao realocar memoria!\n");
        return 1;
    }

    for (int i = linhas * colunas; i < novoTam * novoTam; i++) {
        matriz[i] = valor++;
    }

    printf("Matriz 5x5 apos realocacao:\n");
    imprimirMatriz(matriz, novoTam, novoTam);

    free(matriz);

    return 0;
}
