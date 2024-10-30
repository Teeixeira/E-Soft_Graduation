/* remover espaços em branco: Escreva um programa que remova todos os espaçoes em branco de uma string */

#include <stdio.h>
#include <string.h>

char frase[300], frasesemespaco[300];
int x, y = 0;

int main() {
    printf("Digite a sua citacao favorita abaixo:\n");
    gets(frase);

    for (x = 0; x < strlen(frase); x++) {
        if (frase[x] != ' ') {
            frasesemespaco[y] = frase[x];
            y++;
        }
    }
    frasesemespaco[y] = '\0';

    printf("A frase sem espaco ficou: %s\n", frasesemespaco);

    return 0;
}