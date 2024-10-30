/* Exercício 3:Concatene duas strings que representamo primeiro e o último nome de umautor usando strcat() */

#include <stdio.h>
#include <string.h>

int main (){

    char string1[100], string2[100];

    printf("Informe o nome do Autor: \n");
    gets(string1);

    printf("Informe o ultimo sobrenome do Autor: \n");
    gets(string2);

    strcat(string1," ");
    strcat(string1,string2);

    printf("Nome do autor: %s ",string1);

    return 0;
}