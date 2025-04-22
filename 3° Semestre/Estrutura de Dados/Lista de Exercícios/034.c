/* Implemente um programa em linguagem C que leia uma string (s1) informada pelo usuário. Em seguida,  desenvolva  um  procedimento 
denominado  copia,  que  receba  duas  strings  como parâmetros. Esse procedimento deverá copiar o  conteúdo  de  s1  para  s2,  
caractere  por caractere,  simulando o comportamento da função strcpy, porém sem utilizá-la */

#include <stdio.h>

void copia(char *s1, char *s2) {
    int i = 0;
    while (s1[i] != '\0') {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
}

int main() {
    char s1[100];
    char s2[100];

    printf("Digite uma string: ");
    gets(s1);

    copia(s1, s2);

    printf("String s1: %s\n", s1);
    printf("String s2: %s\n", s2);

    return 0;
}
