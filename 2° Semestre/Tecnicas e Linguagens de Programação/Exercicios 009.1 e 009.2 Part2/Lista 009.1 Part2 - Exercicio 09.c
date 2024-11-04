/* Faça um programa que leia uma sequência de números inteiros positivos do usuário e determine qual é o maior
e o menor número da sequência. O programa deve continuar lendo números até que o usuário insira um número negativo */

#include <stdio.h>

int num, maior, menor, cont = 0;

int main (){

    do {
        printf("Informe o numero: ");
        scanf("%d",&num);

        if (num > 0 && cont == 0){
            maior = num;
            menor = num;
        }
        
        if (num > 0){
            if(num > maior){
                maior = num;
            } else if (num < menor){
                menor = num;
            }
        }
        cont ++;
    } while (num > 0);

    printf("O maior numero eh: %d\n",maior);
    printf("O menor numero eh: %d\n",menor);
    printf("Programa encerrado, numero negativo informado!");

    return 0;
}