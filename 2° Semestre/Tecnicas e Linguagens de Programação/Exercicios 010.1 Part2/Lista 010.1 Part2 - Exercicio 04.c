/* Exercício 4: Compare os nomes de dois autores usando strcmp() e determine qual deles viria primeiro em ordem alfabética. */

#include <stdio.h>
#include <string.h>

int main (){

    char string1[100], string2[100];
    int ordem;

    printf("Informe o nome do primeiro Autor: \n");
    gets(string1);

    printf("Informe o nome do primeiro Autor: \n");
    gets(string2);

    ordem = strcmp(string1, string2);

    if(ordem < 0){
        printf("%s vem antes de %s por odem alfabetica!", string1, string2);
    } else if (ordem > 0){
        printf("%s vem antes de %s por odem alfabetica!", string2, string1);
    } else {
        printf("O nome dos dois autores sao iguais!");
    }

    return 0;
}