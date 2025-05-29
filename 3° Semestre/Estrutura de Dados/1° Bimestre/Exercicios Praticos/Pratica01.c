/*  Um grupo de amigos resolve fazer uma ação beneficente para arrecadar dinheiro com intuito de ajudar o João que 
teve seu PC avariado em uma enchente, bem como muitos outros eletrônicos.
Serão aceitas doações de no máximo 100 pessoas ou até que o valor total arrecadado seja igual ou superior a R$ 7.500,00.

Apresentando no final, a média de valor doado por pessoa. */

#include <stdio.h>

int x;
float money, total;

int main () {

    for(x = 0; x < 100 && total < 7500; x ++){
        printf("Valor da doacao do %d doador: ", x + 1);
        scanf("%f",&money);
        
        total += money;
    }

    printf("valor arrecadado: %.2f reais\n", total);
    printf("Total de doadores: %d", x);

    return 0;
}