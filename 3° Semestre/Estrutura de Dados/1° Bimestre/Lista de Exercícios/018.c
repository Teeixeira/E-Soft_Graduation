#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n1, *ptr = &n1;

int main (){

    printf("Digite o valor de n1: ");
    scanf("%d",&n1);

    printf("n1: %d, endereco de memoria de n1: %p", n1, &n1);
    printf("\nEndereco de memoria de n1: %p", &n1);
    printf("\nO valor da variavel ptr: %d", *ptr);
    printf("\nO endereco de memoria da variavel ptr: %p", &ptr);
    printf("\nO valor ao qual a variavel ptr esta apontando: %d", *ptr);
    printf("\nO endereco de memoria da qual a variavel ptr esta apontando: %p", ptr);
    printf("\nO tamanho em bytes da variavel n1: %d bytes", sizeof(n1));
    printf("\nO tamanho em bytes da variavel ptr: %d bytes", sizeof(*ptr));
    printf("\nO tamanho em bytes ao qual a variavel ptr esta apontando: %d bytes", sizeof(ptr));

    return 0;
}