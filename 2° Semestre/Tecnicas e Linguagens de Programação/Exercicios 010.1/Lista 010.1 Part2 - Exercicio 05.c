/* extrair substring: implemente um programa de qxtraia uma substring de uma string principal, dada a posição inicial e o tamanho. */

#include <stdio.h>
#include <string.h>

int main() {
    char string[50], substring[50];
    int posicao, tamanho, x;

    printf("Digite a string: ");
    gets(string);

    printf("Digite a posicao inicial da substring: ");
    scanf("%d", &posicao);

    printf("Digite o tamanho da substring: ");
    scanf("%d", &tamanho);

    for (x = 0; x < tamanho; x ++) {
        substring[x] = string[posicao + x];
    }

    printf("A substring retirada eh: %s", substring);

    return 0;
}