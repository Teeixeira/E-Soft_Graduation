/* Escreva um programa em linguagem C que solicite ao usuário um número inteiro N (entre 5 e 20). 
Em seguida, utilize um laço for para imprimir os números de 0 até N e de N até 0 simultaneamente. */

#include <stdio.h>

int num, x;

void solicnum() {
    printf("informe um numero entre 5 e 20: ");
    scanf("%d",&num);

    if(num < 5 || num > 20){
        printf("numero invalido tente novamente!\n");
        solicnum();
    }
}

int main () {

    solicnum();

    for(x = 0; x <= num; x ++){
        printf("%d, ", x);
    }

    printf("\n");

    for(x = 0; x <= num; x ++){
        printf("%d, ", num - x);
    }

    return 0;
}