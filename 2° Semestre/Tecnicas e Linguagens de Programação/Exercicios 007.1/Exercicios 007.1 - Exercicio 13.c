#include <stdio.h>
int main(){
    int pontos;
    printf("Digite a quantidade de pontos de funcionario \n");
    scanf("%d",&pontos);
    if(pontos < 0){
        printf("Valor da pontuacao invalido");
    }else if(pontos <= 100){
        printf("Sem premiacao");
    }else if(pontos <= 500){
        printf("Premio de bronze");
    }else if(pontos <= 1000){
        printf("Premio de prata");
    }else{
        printf("Premio de ouro");
    }
}