/* Exercício 2: Declare duas strings: uma como nome da biblioteca e outra vazia.Copie o nome da biblioteca para a string 
vazia usando strcpy() e imprima a segunda string. */

#include <stdio.h>
#include <string.h>

int main (){

    char biblioteca[300], string2[300];

    printf("Informe qual sera a biblioteca de caracteres: \n");
    gets(biblioteca);

    strcpy(string2,biblioteca);

    printf("String2 eh: %s ",string2);

    return 0;
}