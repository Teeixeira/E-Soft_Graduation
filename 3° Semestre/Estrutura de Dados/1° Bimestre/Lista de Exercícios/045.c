/* Construa  um  programa  em  linguagem  C  que,  através  de  alocação  dinâmica  de  memória, solicite 3 valores do tipo float; */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float *num;

    num = malloc(3 * sizeof(float));

    if (num != NULL) {
        printf("Alocação bem sucedida de memória.\n");
        return;
    } else {
        printf("Erro ao alocar memória.\n");
    }

    for (int i = 0; i < 3; i++) {
        printf("Digite o %d valor: ", i + 1);
        scanf("%f", &num[i]);
    }

    printf("\nnum digitados:\n");
    for (int i = 0; i < 3; i++) {
        printf("Valor %d: %.2f\n", i + 1, num[i]);
    }

    free(num);

    return 0;
}

