#include <stdio.h>

int main(){

    float n1,n2,n3,n4,result;
    char escolha;

    printf("Escolha o tipo de media: \n A - Aritmetica \n P - Ponderada \n H - Harmonica\n");
    scanf("%c",&escolha);

    printf("Digite a primeira nota: ");
    scanf("%f",&n1);

    printf("Digite a segunda nota: ");
    scanf("%f",&n2);

    printf("Digite a terceira nota: ");
    scanf("%f",&n3);

    printf("Digite a quarta nota: ");
    scanf("%f",&n4);

    if (escolha == 'A')
    {
        result = (n1+n2+n3+n4)/4;
    }
    if (escolha == 'P')
    {
        result = (2*n1+3*n2+5*n3+10*n4)/20;
    }
    if (escolha == 'H')
    {
        result = 4/((1/n1)+(1/n2)+(1/n3)+(1/n4));
    }

    printf("A media %c e de %.2f",escolha,result);

return 0;

}