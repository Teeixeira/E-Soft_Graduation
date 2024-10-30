#include <stdio.h>
int main(){
    char rank;
    double sal=0;
    printf("Avalie o funcionario \n");
    scanf("%c", &rank);
    printf("Digite o valor do salario \n");
    scanf("%lf", &sal);

    switch (rank){
    case 'A':
        sal = sal + (sal*0.15);
        printf("O seu salario atualizando e %lf ",sal);
        break;
    case 'B':
        sal = sal + (sal*0.10);
        printf("O seu salario atualizando e %lf ",sal);
        break;
    case 'C':
        sal = sal + (sal*0.05);
        printf("O seu salario atualizando e %lf ",sal);
        break;
    default:
        printf("Voce tem nao tem aumento");
        break;
    }
    

    return 0;
}