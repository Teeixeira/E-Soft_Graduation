/* Média de Notas
Crie um programa que:
Solicite ao usuário que informe a quantidade de notas que deseja inserir.
Crie um vetor de float para armazenar essas notas.
Após a entrada das notas, calcule e exiba a média delas. */

#include <stdio.h>

int x, quant;
float nota[100], media = 0;

void quantnotas(){
    printf("Quantas notas deseja inserir? ");
    scanf("%d",&quant);
    
    if (quant > 100 || quant < 0) {
        printf("O numero maximo de notas eh entre 0 e 100!\n Informe novamente: \n");
        quantnotas();
    } else {
        return;
    }
}

int main() {

    quantnotas();

    for (int x = 0; x < quant; x ++) {
        printf("Digite a %d nota: ", x + 1);
        scanf("%f", &nota[x]);
        
        media += nota[x];
    }

    printf("As notas sao:\n");
    for (x = 0; x < quant; x ++) {
        printf("%.1f, ", nota[x]);
    }

    printf("E a media das notas eh: %.1f", media / quant);

    return 0;
}
