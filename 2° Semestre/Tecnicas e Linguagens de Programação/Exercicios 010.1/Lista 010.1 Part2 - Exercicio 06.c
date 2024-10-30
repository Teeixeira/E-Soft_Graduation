/* remover vogais: escreva um programa que remova todas as vogais de uma string. */

#include <stdio.h>
#include <string.h>

int main() {
    char frase[100], frasesemvogais[100];
    int x, y = 0;

    printf("Digite a string: ");
    gets(frase);

    for (x = 0; x < strlen(frase); x ++) {
        if (frase[x] != 'a' && frase[x] != 'e' && frase[x] != 'i' && frase[x] != 'o' && frase[x] != 'u' && frase[x] != 'A' && frase[x] != 'E' && frase[x] != 'I' && frase[x] != 'O' && frase[x] != 'U') {
            frasesemvogais[y] = frase[x];
            y ++;
        }
    }

    printf("A frase sem vogais eh: %s\n", frasesemvogais);

    return 0;
}

