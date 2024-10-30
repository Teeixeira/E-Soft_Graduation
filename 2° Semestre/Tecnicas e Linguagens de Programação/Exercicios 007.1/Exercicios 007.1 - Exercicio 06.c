#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    char product, continuar;
    double subtotal = 0, valorT = 5, valorM = 10, valorP = 0.5, valorC = 1;
    int quantT = 0, quantM = 0, quantP = 0, quantC = 0;

    printf("Informe qual produto você deseja:");
    printf("\n(T): Tijolo, esta com 5%% de desconto, acima de 10 unds são 10%%");
    printf("\n(M): Madeira, esta com 10%% de desconto, acima de 10 unds são 15%%");
    printf("\n(P): Prego, esta com 5%% de desconto, acima de 10 unds são 20%%");
    printf("\n(C): Cola, esta com 15%% de desconto, acima de 10 unds são 20%%\n");
 
    for (;;){

        printf("\nEscolha o produto (T, M, P, C): ");
        scanf(" %c", &product);

        switch (product) {
            case 'T':
                printf("\nO valor do tijolo é 5,00 R$ a unidade!");
                printf("\nDeseja quantas unidades? ");
                scanf("%d", &quantT);

                if (quantT >= 10) {
                    subtotal += (valorT * quantT) * 0.90;
                } else {
                    subtotal += (valorT * quantT) * 0.95;
                }
                printf("\nO subtotal desse item deu: %.2lf R$", subtotal);
                break;

            case 'M':
                printf("\nO valor da madeira é 10,00 R$ a unidade!");
                printf("\nDeseja quantas unidades? ");
                scanf("%d", &quantM);

                if (quantM >= 10) {
                    subtotal += (valorM * quantM) * 0.85;
                } else {
                    subtotal += (valorM * quantM) * 0.90;
                }
                printf("\nO subtotal desse item deu: %.2lf R$", subtotal);
                break;

            case 'P':
                printf("\nO valor do prego é 0,50 R$ a unidade!");
                printf("\nDeseja quantas unidades? ");
                scanf("%d", &quantP);

                if (quantP >= 10) {
                    subtotal += (valorP * quantP) * 0.80;
                } else {
                    subtotal += (valorP * quantP) * 0.95;
                }
                printf("\nO subtotal desse item deu: %.2lf R$", subtotal);
                break;

            case 'C':
                printf("\nO valor da cola é 1,00 R$ a unidade!");
                printf("\nDeseja quantas unidades? ");
                scanf("%d", &quantC);

                if (quantC >= 10) {
                    subtotal += (valorC * quantC) * 0.80;
                } else {
                    subtotal += (valorC * quantC) * 0.85;
                }
                printf("\nO subtotal desse item deu: %.2lf R$", subtotal);
                break;

            default:
                printf("\nProduto inválido! Tente novamente.");
        }

        printf("\nDeseja adicionar mais itens? (S) para continuar, (N) para finalizar a compra: ");
        scanf(" %c", &continuar);

        if (continuar == 'N') {
            break;
        }
    }

    printf("\nO total da compra deu %.2lf R$", subtotal);

    return 0;
}