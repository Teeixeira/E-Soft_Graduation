/* contar palavras: crie um programa que conte o numero de palavras em uma frase, considerando palavras separadas por espaços. */

#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];
    int x, palavras = 1;

    printf("Digite a string: ");
    gets(frase);

    for (x = 0; x < strlen(frase); x ++) {
        if (frase[x] == ' ') {
            palavras ++; 
        } 
    }

    printf("O numero de palavras na frase eh de: %d", palavras);

    return 0;
}