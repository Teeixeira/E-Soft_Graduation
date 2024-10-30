/* Calcule a soma dos números de 1 a 100 usando um laço while. */

#include <stdio.h>

int num, soma;

int main (){

    while(num < 100){
        num ++;
        soma = soma + num;
    }

    printf("%d",soma);

    return 0;
}