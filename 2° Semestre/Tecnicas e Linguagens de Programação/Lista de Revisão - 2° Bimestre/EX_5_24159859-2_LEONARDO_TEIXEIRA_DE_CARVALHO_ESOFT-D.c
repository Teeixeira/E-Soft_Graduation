#include <stdio.h>

int main(){

    char nome[50], sobrenome[50];

    printf("Informe seu nome: ");
    gets(nome);

    printf("Informe seu sobrenome: ");
    gets(sobrenome);

    printf("O nome completo e: %s %s",nome, sobrenome);


return 0;

}
