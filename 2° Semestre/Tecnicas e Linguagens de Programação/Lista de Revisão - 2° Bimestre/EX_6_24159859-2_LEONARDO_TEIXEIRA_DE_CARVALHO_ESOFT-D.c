#include <stdio.h>

int main (){

    double n1,n2;
    char op;

    printf("Digite a operacao +, -, * ou /: ");
    scanf("%c",&op);
    printf("Digite os dois valores: ");
    scanf("%lf%lf",&n1,&n2);

    switch(op){

        case '+':
            printf("Soma = %.2f",n1+n2);
        break;

        case '-':
            printf("Subtracao = %.2f",n1-n2);
        break;

        case '*':
            printf("Multiplicacao = %.2f",n1*n2);
        break;

        case '/':
            printf("Divisao = %.2f",n1/n2);
        break;
        
    }

    return 0;

}