#include <stdio.h>
#include <math.h>

float calcularprestacao(float emprestimo, float txjuros, int parcelas) {
    float juros = txjuros / 100;
    float prestacao = (emprestimo * juros) / (1 - pow(1 + juros, - parcelas));
    
    return prestacao;
}

int main() {
    float emprestimo, txjuros;
    int parcelas;

    printf("Digite o valor do emprestimo: R$ ");
    scanf("%f", &emprestimo);

    printf("\nDigite a taxa de juros mensal (em %%): ");
    scanf("%f", &txjuros);

    printf("\nDigite o numero de parcelas: ");
    scanf("%d", &parcelas);

    float prestacao = calcularprestacao(emprestimo, txjuros, parcelas);

    printf("\nO valor da prestacao mensal e: %.2f R$\n", prestacao);
    printf("\nO valor do contrato ficaria em: %.2f R$",prestacao * parcelas);

    return 0;
}
