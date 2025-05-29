/* Desenvolva um programa em linguagem C que solicite ao usuário um número inteiro N (entre 10 e 50). 
Em seguida, utilize um laço for para percorrer os números, onde:

A primeira variável (i) deve ser incrementada de 1 em 1.
A segunda variável (j) deve ser incrementada de 5 em 5.
O laço deve continuar enquanto i for menor ou igual a N e j for menor ou igual a 2 * N.
Ao final, o programa deve exibir o tamanho em bytes das variáveis utilizadas usando sizeof(). */

#include <stdio.h>

short int num, memoria, x, y;

void solicnum() {
    printf("informe um numero entre 10 e 50: ");
    scanf("%d",&num);

    if(num < 10 || num > 50){
        printf("numero invalido tente novamente!\n");
        solicnum();
    }
}

int main () {

    solicnum();

    for(x = 0, y = 0; x <= num, y <= 2 * num; x ++, y += 5){
        printf("%d volta do laco!\n", x + 1);
    }

    printf("num = %d bytes\nx = %d bytes\ny = %d bytes", sizeof(num), sizeof(x), sizeof(y));

    return 0;
}