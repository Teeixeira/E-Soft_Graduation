#include <stdio.h>

int main() {
    double temperatura, umidade, sensacaoTerm;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%lf", &temperatura);

    printf("Digite a umidade relativa em porcentagem: ");
    scanf("%lf", &umidade);
    sensacaoTerm = temperatura + 0.55 * (0.55 - 0.01 * umidade) * (temperatura - 14.5);

    printf("A sensação térmica é: %.2f graus Celsius\n", sensacaoTerm);

    return 0;
}