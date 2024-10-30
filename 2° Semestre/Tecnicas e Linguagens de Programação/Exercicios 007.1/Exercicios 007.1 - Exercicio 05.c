#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    double chute;
    // int i; pode declarar a variavel para usar no for como global ou no proprio for

    int numeroAlea = rand() % 100 + 1;
    printf("Jogo de adivinhacao \n");
    printf("Voce tem 10 chances \n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um chute \n");
        scanf("%lf",&chute);
        if(chute == numeroAlea){
            printf("Parabens!! voce ganhou!!");
            break;
        }else if(chute > numeroAlea){
            printf("O numero e menor que o informado \n");
            printf("Tente novamente, %d \n", i+1);

        }else{
            printf("O numero e maior que o informado \n");
            printf("Tente novamente, %d \n", i+1);
        }
    }
        printf("Voce errou todas as tentativas o numero correto era %d \n", numeroAlea);
        printf("Fim de jogo \n");
    
    

    return 0;
}