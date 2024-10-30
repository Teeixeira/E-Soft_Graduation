#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"Portuguese");

    int valor, c100, c50, c20, c10, c5, resto;

    printf("\nQual o valor que deseja sacar? ");
    scanf("%d",&valor);
    if (valor % 5 != 0){
        printf("Temos cedulas apenas de 5, 10, 20, 50 e 100");

        main();
    } else {

    c100 = valor / 100;
    resto = valor % 100;

    c50 = resto / 50;
    resto = resto % 50;

    c20 = resto / 20;
    resto = resto % 20;

    c10 = resto / 10;
    resto = resto % 10;

    c5 = resto / 5;
    resto = resto % 5;

    printf("Notas de 100: %d\n", c100);
    printf("Notas de 50: %d\n", c50);
    printf("Notas de 20: %d\n", c20);
    printf("Notas de 10: %d\n", c10);
    printf("Notas de 5: %d\n", c5);

    }

    return 0;
}