/******************************************************************************

Leonardo Teixeira de Carvalho RA 24159859-2 

Exercicio 03

*******************************************************************************/

#include <stdio.h>

float nivel1, nivel2, nivel3, media_nivel;
float temp1, temp2, temp3, media_temp;
float maior, menor, dif;

int main() {
    
    printf("Informe o nivel do tanque 1 em porcentagem: ");
    scanf("%f",&nivel1);
    printf("Qual a temperatura do líquido do tanque 1, variando entre -50 e 150 graus Celsius: ");
    scanf("%f",&temp1);

    printf("Informe o nivel do tanque 2 em porcentagem: ");
    scanf("%f",&nivel2);
    printf("Qual a temperatura do líquido do tanque 2, variando entre -50 e 150 graus Celsius: ");
    scanf("%f",&temp2);
    
    printf("Informe o nivel do tanque 3 em porcentagem: ");
    scanf("%f",&nivel3);
    printf("Qual a temperatura do líquido do tanque 3, variando entre -50 e 150 graus Celsius: ");
    scanf("%f",&temp3);
    
    media_nivel = (nivel1 + nivel2 + nivel3) / 3;
    media_temp = (temp1 + temp2 + temp3) / 3;
    
    //verificacao 1
    
    if (nivel1 > 91){
        printf("\nO tanque 1 corre risco de transbordar, diminua seu nivel!");
    } else if (nivel1 < 9.5){
        printf("\nO tanque 1 esta com nivel muito baixo, aumente seu nivel");
    } else {
        printf("\nO nivel do tanque 1 esta ok!");
    }
    
    if (nivel2 > 91){
        printf("\nO tanque 2 corre risco de transbordar, diminua seu nivel!");
    } else if (nivel2 < 9.5){
        printf("\nO tanque 2 esta com nivel muito baixo, aumente seu nivel");
    } else {
        printf("\nO nivel do tanque 2 esta ok!");
    }

    if (nivel3 > 91){
        printf("\nO tanque 3 corre risco de transbordar, diminua seu nivel!");
    } else if (nivel3 < 9.5){
        printf("\nO tanque 3 esta com nivel muito baixo, aumente seu nivel");
    } else {
        printf("\nO nivel do tanque 3 esta ok!");
    }
    
    // verificacao 2
    
    if (temp1 > 100){
        printf("\nDesligue o sistema de aquecimento imediatamente do tanque 1");
    } else if (temp1 < 0){
        printf("\nAcione o sistema de aquecimento imediatamente do tanque 1");
    } else {
        printf("\nTemperatura do tanque 1 esta ok!");
    }
    
    if (temp2 > 100){
        printf("\nDesligue o sistema de aquecimento imediatamente do tanque 2");
    } else if (temp2 < 0){
        printf("\nAcione o sistema de aquecimento imediatamente do tanque 2");
    } else {
        printf("\nTemperatura do tanque 2 esta ok!");
    }

    if (temp3 > 100){
        printf("\nDesligue o sistema de aquecimento imediatamente do tanque 3");
    } else if (temp3 < 0){
        printf("\nAcione o sistema de aquecimento imediatamente do tanque 3");
    } else {
        printf("\nTemperatura do tanque 3 esta ok!");
    }
    
    // verificacao 3
    
    if (nivel1 > nivel2){
        maior = nivel1;
        menor = nivel2;
    } else if (nivel2 > nivel1){
        maior = nivel2;
        menor = nivel1;
    }
    
    if (maior < nivel3){
        maior = nivel3;
    } else if (menor > nivel3){
        menor = nivel3;
    }
    
    printf("\nO maior tanque esta em %.1f %%",maior);
    printf("\nO menor tanque esta em %.1f %%",menor);

    dif = (maior - menor);
    
    if (dif > 32.5){
        printf("\nA diferenca entre os tanques esta muito alta, redistribua entre eles");
    }
    
    return 0;
}