/* Exercício 8: Encontre e imprima a primeira ocorrência do caractere 'a' no nome de umautor usando strchr(). */

#include <stdio.h>
#include <string.h>

int main() {

    char autor[50], carac;
    char *caracresult;

    printf("Qual o nome do autor: \n");
    gets(autor);

    printf("Qual caractere deseja encontrar: ");
    scanf(" %c", &carac);

    caracresult = strchr(autor, carac);

    if (caracresult != NULL) {
        printf("O caractere %c foi encontrado na posição: %ld \n", carac, caracresult - autor);
    } else {
        printf("O caractere %c não foi encontrado!\n", carac);
    }

    return 0;
}