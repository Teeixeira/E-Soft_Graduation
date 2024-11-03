/* Exercício 3: Ordenação de Números
Implemente um programa que:
Solicite ao usuário que insira 5 números inteiros.
Armazene esses números em um vetor de int.
Ordene o vetor em ordem crescente e exiba o vetor ordenado. */

#include <stdio.h>

int main() {
    int x, y, num;
    int numeros[5];

    for(x = 0; x < 5; x ++) {
        printf("Digite o %d numero: ", x + 1);
        scanf("%d", &numeros[x]);
    }

    for(x = 0; x < 5 - 1; x ++) {
        for(y = 0; y < 5 - x - 1; y ++) {
            if(numeros[y] > numeros[y + 1]) {
                num = numeros[y];
                numeros[y] = numeros[y + 1];
                numeros[y + 1] = num;
            }
        }
    }

    printf("Vetor ordenado: ");
    for(x = 0; x < 5; x ++) {
        if (x == 4){
            printf("%d !", numeros[x]);
        } else {
            printf("%d , ", numeros[x]);
        }
    }

    return 0;
}
