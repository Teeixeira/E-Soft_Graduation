/* Exercício 9: Encontre e imprima a primeira ocorrência da substring "lib" no nome da biblioteca usando strstr(). */

#include <stdio.h>
#include <string.h>

int main() {

    char biblioteca[100];
    char *resultado;

    printf("Informe o nome da biblioteca: ");
    gets(biblioteca);

    resultado = strstr(biblioteca, "lib");

    if (resultado != NULL) {
        printf("A substring lib foi encontrada na posicao: %ld\n", resultado - biblioteca);
    } else {
        printf("A substring lib nao foi encontrada na string.\n");
    }

    return 0;
}

