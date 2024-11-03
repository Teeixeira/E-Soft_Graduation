/* Busca:
- Verificar se um número pertence ao vetor.
- Contar quantas vezes um dado número aparece no vetor.
- Encontrar a primeira posição de um número no vetor */

#include <stdio.h> 

int main (){

    int x, loc, quant = 0, inteiros[10];

    for(x = 0; x < 10; x ++){
        printf("Digite o %d numero: ",x + 1);
        scanf("%d",&inteiros[x]);
    }

    printf("Informe o numero que deseja encontrar no vetor: ");
    scanf("%d",&loc);

    for(x = 0; x < 10; x ++){
        if(inteiros[x] == loc){
            printf("O vetor %d eh igual ao valor informado!", x + 1);
            quant ++;
            if(quant < 1){
                printf("A primeira posicao do valor informado eh: %d\n", x +1);
            }
        }
    }

    printf("O total de aparicoes eh: %d", quant);

    return 0;
}