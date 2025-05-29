/*Construa  um  programa  em  linguagem  C  que  solicite  do  usuário  5  valores  inteiros  e  os
armazene em um vetor. Posteriormente, apresente ao usuário utilizando a técnica de aritmética
de ponteiro*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n[5], *ptr = &n;

int main() {

    for (int i = 0; i < 5; i++) {
        printf("Digite o %d valor de n: ", i + 1);
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("\n%d valor do vetor: %d", i + 1, *(n + i));
    }

    return 0;
}