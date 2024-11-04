/* Implemente um jogo de adivinhação onde o computador escolhe um número aleatório e o jogador
deve acertar usando um laço do-while. Dica: use a função rand(). */

#include <stdio.h>
#include <stdlib.h>

int num, chute;

int main (){

    printf("O Sistema ira escolher num numero aleatorio, tente adivinha-lo\n");
    num = rand() % 100;

    do {
        printf("Faca o seu chute: ");
        scanf("%d",&chute);
        if (chute > num){
            printf("Errou!! tente um numero menor!");
        } else if (chute < num){
            printf("Errou!! tente um numero maior!");
        }
    } while (chute != num);

    printf("Acertou!!! o numero aletorio era %d",num);

    return 0;
}