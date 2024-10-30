/* Solicite a idade de 5 pessoas. No final, apresente a pessoa mais velha e também a pessoa mais jovem */

#include <stdio.h>

int x, idade[5], velho, jovem;

int main (){

    for(x = 0; x < 5; x ++){
        printf("Informa a idade da %d pessoa: ",x + 1);
        scanf("%d",&idade[x]);

        if(x == 0){
            velho = idade[x];
            jovem = idade[x];
        } else {
            if(idade[x] > velho){
                velho = idade[x];
            } else if(idade[x] < jovem){
                jovem = idade[x];
            }
        }
    }

    printf("A pessoa mais velha tem %d anos.\n", velho);
    printf("A pessoa mais jovem tem %d anos.\n", jovem);

    x = 0;
    while(x < 5){
        printf("Informa a idade da %d pessoa: ",x + 1);
        scanf("%d",&idade[x]);

        if(x == 0){
            velho = idade[x];
            jovem = idade[x];
        } else {
            if(idade[x] > velho){
                velho = idade[x];
            } else if(idade[x] < jovem){
                jovem = idade[x];
            }
        }
        x ++;
    }

    printf("A pessoa mais velha tem %d anos.\n", velho);
    printf("A pessoa mais jovem tem %d anos.\n", jovem);

    do {
        printf("Informa a idade da %d pessoa: ",x + 1);
        scanf("%d",&idade[x]);

        if(x == 0){
            velho = idade[x];
            jovem = idade[x];
        } else {
            if(idade[x] > velho){
                velho = idade[x];
            } else if(idade[x] < jovem){
                jovem = idade[x];
            }
        }
        x ++;
    } while (x < 5);

    return 0;
}