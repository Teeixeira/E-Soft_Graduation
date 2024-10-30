#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    int aluguel;
    float km, total;

    printf("O valor de alguel do veiculo e de 1.500,00 R$");
    printf("\nCada KM rodado e de 0.15 R$");

    printf("\nQuantos KM foram rodados durante o periodo?\n");
    scanf("%f",&km);

    total = 1500 + (km * 0.15);

    printf("O valor total a ser pago e de %.2f R$",total);
    
    return 0;
}   