/* calcular a frequencia de caracters: crie um programa que calcule a frequencia de cada caracter em uam string e exiba os resultado. */

#include <stdio.h>
#include <string.h>

int main() {
    char string[100], caracter;
    int x, y, contador;

    printf("Digite a string: ");
    gets(string);

    printf("Frequência de caracteres: ");

    for (x = 0; x < strlen(string); x ++) {
        caracter = string[x];
        contador = 1;

        for (y = 0; y < x; y ++) {
            if (string[y] == caracter) {
                contador = 0;
                break;
            }
        }

        if (contador != 0) {
            for (y = x + 1; y < strlen(string); y ++) {
                if (string[y] == caracter) {
                    contador ++;
                }
            }

            if (contador > 0) {
                printf("'%c' aparece %d vez(es)\n", caracter, contador);
            }
        }
    }

    return 0;
}

