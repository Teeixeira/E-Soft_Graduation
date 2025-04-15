/*Construa um programa em linguagem C que solicite 4 palavras com no máximo 10 caracteres (armazenando-as em um vetor)  e posteriormente apresente: 
a)  O tamanho do vetor (em bytes); 
b)  A quantidade de caracteres de cada elemento do vetor; 
c) O endereço de memória do vetor; 
d)  O endereço de memória de cada elemento do vetor*/

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
