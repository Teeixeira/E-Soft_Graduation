#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    char product;
    double subtotal = 0;
    double valor1 = 50.0;
    double valor2 = 30.0;
    double valor3 = 20.0;
    double desconto1 = 0.10;
    double desconto2 = 0.15;
    double desconto3 = 0.05;
    int quant1 = 0, quant2 = 0, quant3 = 0;

    printf("Informe qual produto você deseja comprar:");
    printf("\n(T): Categoria 1 - Preço: R$50,00 por unidade, desconto: 10%% acima de 10 unidades");
    printf("\n(M): Categoria 2 - Preço: R$30,00 por unidade, desconto: 15%% acima de 10 unidades");
    printf("\n(P): Categoria 3 - Preço: R$20,00 por unidade, desconto: 5%% acima de 10 unidades\n");

    printf("\nEscolha a categoria (T, M, P): ");
    scanf("%c", &product);

    switch (product) {
        case 'T':
            printf("\nO valor do livro da Categoria 1 é R$50,00 por unidade!");
            printf("\nQuantas unidades deseja comprar? ");
            scanf("%d", &quant1);

            if (quant1 >= 10) {
                subtotal += (valor1 * quant1) * (1 - desconto1);
            } else {
                subtotal += (valor1 * quant1) * (1 - 0.05);
            }
        break;

        case 'M':
            printf("\nO valor do livro da Categoria 2 é R$30,00 por unidade!");
            printf("\nQuantas unidades deseja comprar? ");
            scanf("%d", &quant2);

            if (quant2 >= 10) {
                subtotal += (valor2 * quant2) * (1 - desconto2);
            } else {
                subtotal += (valor2 * quant2) * (1 - 0.10);
            }
        break;

        case 'P':
            printf("\nO valor do livro da Categoria 3 é R$20,00 por unidade!");
            printf("\nQuantas unidades deseja comprar? ");
            scanf("%d", &quant3);

            if (quant3 >= 10) {
                subtotal += (valor3 * quant3) * (1 - desconto3);
            } else {
                subtotal += (valor3 * quant3) * (1 - 0.05);
            }
        break;

        default:
            printf("\nProduto inválido! Tente novamente.");
    }

    printf("\nO total da compra é: %.2lf R$", subtotal);

    return 0;
}
