/* Escreva um programa que verifique se um número é primo usando um laço for */

#include <stdio.h>

int i, num, primo;


int main() {
    int num, i, primo;

    printf("Digite onumero que deseja saber se eh primo: ");
    scanf("%d", &num);

    primo = 1;

    if (num <= 1) {
        primo = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                primo = 0;
            }
        }
    }

    if (primo == 1) {
        printf("%d e um numero primo.\n", num);
    } else {
        printf("%d nao eh um numero primo.\n", num);
    }

    return 0;
}