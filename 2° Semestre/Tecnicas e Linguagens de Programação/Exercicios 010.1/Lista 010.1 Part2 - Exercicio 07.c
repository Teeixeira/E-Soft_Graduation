/* intercalar duas string: implemente um programa que intercala os caracteres de duas strings, criando uma terceira string que contem carcteres alternados de amabas. */

#include <stdio.h>
#include <string.h>

int main() {
    char sting1[100], string2[100], unidas[200];
    int x, y = 0;

    printf("Digite a primeira string: ");
    gets(sting1);

    printf("Digite a segunda string: ");
    gets(string2);

    for (x = 0; x < strlen(sting1) || x < strlen(string2); x ++) {
        if (x < strlen(sting1)) {
            unidas[y ++] = sting1[x];
        }
        if (x < strlen(string2)) {
            unidas[y ++] = string2[x];
        }
    }

    printf("As strings unidas eh: %s", unidas);

    return 0;
}
