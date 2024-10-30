/* Exercício 6: Concatene o nomes de dois autores usando strncat(), mas copie apenas os primeiros 3 caracteres do segundo nome. */

#include <stdio.h>
#include <string.h>

int main (){

    char autor1[50], autor2[50];

    printf("Informe o nome do primeiro autor: \n");
    gets(autor1);
    printf("Informe o nome do segundo autor: \n");
    gets(autor2);

    strcat(autor1," ");
    strncat(autor1, autor2, 3);

    printf("Os 5 primeiros caracteres do livro eh: %s", autor1);

    return 0;
}