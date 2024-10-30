/* Exercício 1:Crie uma string que armazene o nome da biblioteca qualquer e imprima seu comprimento usando strlen(). */

#include <stdio.h>
#include <string.h>

int main (){

    char biblioteca[300];
    int tamanho = 0;

    printf("Informe qual string deseja saber seu comprimento: ");
    gets(biblioteca);

    tamanho = strlen(biblioteca);

    printf("%s / Tamanho: %d",biblioteca,tamanho);


    return 0;
}