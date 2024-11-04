/*Solicite 10 números ao usuário. Acada número solicitado, apresente a mensagem PAR ou ÍMPAR no fim, apresente a média dos números ímpares. */

#include <stdio.h>

int num[10], x;
float impar = 0, contimpar = 0;

int main (){

    for(x = 0; x < 10; x ++){
        printf("Informe o %d numero: ",x + 1);
        scanf("%d",&num[x]);

        if(num[x] % 2 == 0){
            printf("O numero informado eh par!\n");
        } else {
            printf("O numero informado eh impar!\n");
            impar += num[x];
            contimpar ++;
        }
    }

    printf("A media dos numeros impares eh de: %.2f\n",impar / contimpar);

    x = 0;
    impar = 0;
    contimpar = 0;
    while (x < 10){
        printf("Informe o %d numero: ",x + 1);
        scanf("%d",&num[x]);

        if(num[x] % 2 == 0){
            printf("O numero informado eh par!\n");
        } else {
            printf("O numero informado eh impar!\n");
            impar += num[x];
            contimpar ++;
        }

        x ++;
    }

    printf("A media dos numeros impares eh de: %.2f\n",impar / contimpar);

    x = 0;
    impar = 0;
    contimpar = 0;
    do {
        printf("Informe o %d numero: ",x + 1);
        scanf("%d",&num[x]);

        if(num[x] % 2 == 0){
            printf("O numero informado eh par!\n");
        } else {
            printf("O numero informado eh impar!\n");
            impar += num[x];
            contimpar ++;
        }

        x ++;
    } while (x < 10);

    printf("A media dos numeros impares eh de: %.2f\n",impar / 10);

    return 0;
}