/* Comparar duas strings:  crie um programa que compare duas stings e diga se elas sao iguais ou diferentes, usando a função strcmp */

#include <stdio.h>
#include <string.h>

int main() {

    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    gets(str1);

    printf("Digite a segunda string: ");
    gets(str2);

    if (strcmp(str1, str2) == 0) {
        printf("As strings são iguais.\n");
    } else {
        printf("As strings são diferentes.\n");
    }

    return 0;
}