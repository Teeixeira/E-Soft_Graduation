#include <stdio.h>

float custoT(int numP, float precoP, int grupoG) {
    float custoTotal = numP * precoP;
    if (grupoG) {
        custoTotal -= custoTotal * 0.1;
    }

    return custoTotal;
}

int main() {

    int numP, grupoG;
    char pacote;

    printf("Escolha o pacote de viagem:");
    printf("\nA: Pacote basico (R$100 por pessoa)");
    printf("\nB: Pacote premium (R$150 por pessoa)");
    printf("\nC: Pacote luxo (R$200 por pessoa)");
    printf("\nDigite a opcao escolhida (A, B, ou C): ");
    scanf("%c", &pacote);

    float precoP;
    switch (pacote) {
        case 'A':
            precoP = 100;
        break;

        case 'B':
            precoP = 150;
        break;

        case 'C':
            precoP = 200;
        break;

        default:
            printf("Opcao invalida!\n");
            precoP = 100;
        break;
    }

    printf("Informe o numero de pessoas: ");
    scanf("%d", &numP);

    grupoG = (numP >= 10);

    float custoTotal = custoT(numP, precoP, grupoG);

    printf("O custo total da viagem e: %.2f R$\n", custoTotal);

    return 0;
}
