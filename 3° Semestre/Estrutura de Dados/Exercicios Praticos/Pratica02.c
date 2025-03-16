/* 2) Elabore um programa em linguagem C que exiba os números de 1 a 10 em ordem 
crescente e, simultaneamente, os números de 20 a 11 em ordem decrescente. */

#include <stdio.h>

int num[20], x;

int main () {

    for(x = 0; x < 20; x ++){
        num[x] = x + 1;
    }

    for(x = 0; x < 10; x ++){
        printf("%d - %d\n", num[x], num[19 - x]);
    }

    return 0;
}