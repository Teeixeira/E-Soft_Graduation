/* Solicite ao usuário que insira 5 números e calcule sua média usando um laço do-while. */

#include <stdio.h>

float media;
int num[5];
int i;

int main (){

    for(i = 0; i < 5; i ++){
        printf("Informe o %d° numero: ",i + 1);
        scanf("%d",&num[i]); 
    }

    i = 0;

    do {
        media = media + num[i];
        i ++;
    } while (i < 5);

    printf("media = %.2f",media / 5);

    return 0;
}