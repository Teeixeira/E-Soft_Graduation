/* Implemente  um  programa  em  linguagem  C  que  solicite  uma  string  e  passe  como  parâmetro 
para uma função denominada inverte, cujo objetivo é inverter a string e retornar o resultado. */

#include <stdio.h>
#include <string.h>

char texto[100];

void inverte(char *str) {
    int i, j;
    char temp;
    int tamanho = strlen(str);

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    
    printf("Digite uma string: ");
    gets(texto);

    inverte(texto);

    printf("String invertida: %s\n", texto);

    return 0;
}