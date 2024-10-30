/* Solicite ao usuário o nome, idade e sexo (F/M) de algumas pessoas. A cada entrevista, o sistema deverá perguntar se o usuário deseja continuar a 
informar dados, e caso não queira, apresente a média de idade das mulheres. */

#include <stdio.h>

char nome[30], sexo, continuar;
int idade, numpessoas, mulheres, x;
float mediaIDM;

int main (){

    printf("Quantas pessoas deseja cadastrar: ");
    scanf("%d",&numpessoas);

    for(x = 0; x < numpessoas; x ++){
        printf("Informe o nome da pessoa: ");
        gets(nome);

        printf("Informe a idade: ");
        scanf("%d", &idade);

        printf("Informe o sexo (F/M): ");
        scanf(" %c", &sexo);

        if (sexo == 'F' || sexo == 'f') {
            mediaIDM += idade;
            mulheres ++;
        }
    }

    printf("A media de idade das mulheres eh: %.2f\n", mediaIDM / mulheres);

    x = 0;
    mulheres = 0;
    mediaIDM = 0;
    while (x < numpessoas){

        printf("Informe o nome da pessoa: ");
        gets(nome);

        printf("Informe a idade: ");
        scanf("%d", &idade);

        printf("Informe o sexo (F/M): ");
        scanf(" %c", &sexo);

        if (sexo == 'F' || sexo == 'f') {
            mediaIDM += idade;
            mulheres ++;
        }

        x ++;
    }

    printf("A media de idade das mulheres eh: %.2f\n", mediaIDM / mulheres);

    do {
        printf("Informe o nome da pessoa: ");
        gets(nome);

        printf("Informe a idade: ");
        scanf("%d", &idade);

        printf("Informe o sexo (F/M): ");
        scanf(" %c", &sexo);

        if (sexo == 'F' || sexo == 'f') {
            mediaIDM += idade;
            mulheres ++;
        }

        printf("Deseja continuar? (S/N)");
        scanf(" %c",&continuar);
    } while (continuar == 'S' || continuar == 's');

    printf("A media de idade das mulheres eh: %.2f\n", mediaIDM / mulheres);

    return 0;
}