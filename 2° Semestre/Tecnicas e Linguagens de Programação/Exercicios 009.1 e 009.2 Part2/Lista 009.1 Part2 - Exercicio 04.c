/* Crie um programa que exiba a tabuada do 7 usando um laço for */

#include <stdio.h>

int i;

int main (){

    for(i = 0; i <= 10; i ++){
        printf("7x%d = %d \n",i, 7 * i);
    }

    return 0;
}