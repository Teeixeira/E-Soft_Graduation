/* encontrar o maior prefixo comum: implemente um programa que encontre o maior prefixo comum entre duas strings. */

#include <stdio.h>
#include <string.h>

int main() {
    char string1[50], string2[50];
    char pref[50];
    int x;

    printf("Digite a primeira string: ");
    gets(string1);

    printf("Digite a segunda string: ");
    gets(string2);

    for (x = 0; string1[x] != '\0' && string2[x] != '\0'; x++) {
        if (string1[x] != string2[x]) {
            break;
        }
        pref[x] = string1[x];
    }

    if (x > 0) {
        printf("O maior prefixo comum eh: %s\n", pref);
    } else {
        printf("Nao tem prefixo comum\n");
    }

    return 0;
}
