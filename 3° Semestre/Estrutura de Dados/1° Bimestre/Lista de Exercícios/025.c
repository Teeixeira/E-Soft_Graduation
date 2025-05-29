/*Construa um programa em linguagem C que solicite 4 palavras com no máximo 10 caracteres 
(armazenando-as em um vetor)  e posteriormente apresente: 
a)  O tamanho do vetor (em bytes); 
b)  A quantidade de caracteres de cada elemento do vetor; 
c) O endereço de memória do vetor; 
d)  O endereço de memória de cada elemento do vetor*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palavras[4][10];

int main() {

    for(int i = 0; i < 4; i ++){
        printf("Informe a %d palavra (max 10 carac): ", i + 1);
        gets(palavras[i]);
    }

    for(int i = 0; i < 4; i ++){
        int count = 0;
        for(int j = 0; j < 10; j ++){
            if(palavras[i][j] != '\0'){
                count ++;
            } else {
                break;
            }
            printf("\nEndereco de memoria do %d vetor e %d elemento: %p",j + 1, i + 1, &*(*(palavras + i) + j));
        }
        printf("\nA %d palavra tem %d caracteres!", i + 1, count);
        printf("\nEndereco de memoria do %d vetor: %p", i + 1, &*(palavras + i));
    }

    return 0;
}
