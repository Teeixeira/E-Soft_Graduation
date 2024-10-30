/* Exercício 5: Utilize strncpy() para copiar os primeiros 5 caracteres do título de um livro para uma nova string. */

#include <stdio.h>
#include <string.h>

int main (){

    char livro[50], carac[5];

    printf("Informe o nome do livro: \n");
    gets(livro);

    strncpy(carac, livro, 5);

    printf("Os 5 primeiros caracteres do livro eh: %.5s", carac);

    return 0;
}