/* Implemente  um  programa  em  linguagem  C  que  preencha  de  forma  automática  através  de randomização, uma matriz de 
tamanho 5x4 com valores inteiros entre 100 e 200. Posteriormente, apresente a matriz ao usuário. Utilize alocação dinâmica. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int linhas = 5, colunas = 4;

int main() {

    srand(time(NULL));

    int **matriz = (int **)malloc(linhas * sizeof(int *));
    if (matriz == NULL) {
        printf("Erro ao alocar memoria para as linhas.\n");
        return;
    }

    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memoria para a coluna %d.\n", i);
            return;
        }
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = rand() % 101 + 100;
        }
    }

    printf("Matriz 5x4 com valores aleatorios:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}