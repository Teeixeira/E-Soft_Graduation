/* Contagem de Números Pares e Ímpares
Desenvolva um programa que:
Peça ao usuário para inserir 10 números inteiros.
Armazene esses números em um vetor de int.
Conte e exiba quantos desses números são pares e quantos são ímpares. */

#include <stdio.h> 

int main (){

    int x, inteiros[10];
    int par = 0, impar = 0;
   
    for(x = 0; x < 10; x ++){
        printf("Digite o %d numero: ",x + 1);
        scanf("%d",&inteiros[x]);

        if(inteiros[x] %2 == 0){
            printf("O %d numero eh par!\n", x + 1);
            par ++;
        } else {
            printf("O %d numero eh impar!\n", x + 1);
            impar ++;
        }
    }

    printf("A quantidade total eh %d pares e %d impares!", par, impar);

    return 0;
}