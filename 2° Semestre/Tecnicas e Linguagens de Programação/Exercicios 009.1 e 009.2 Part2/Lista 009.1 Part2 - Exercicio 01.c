/* Imprima os números pares de 2 a 20 usando um laço for.*/

#include <stdio.h>

int num[20];
int i;

int main (){

    for(i = 0; i < 20; i ++){
        num[i] = i + 1;
        if(num[i] % 2 == 0){
            printf("%d ,",num[i]);
        }
    }

    return 0;

}