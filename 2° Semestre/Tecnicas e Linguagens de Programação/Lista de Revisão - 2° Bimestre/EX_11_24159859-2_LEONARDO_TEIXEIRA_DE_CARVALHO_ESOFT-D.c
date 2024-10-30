#include <stdio.h>

int n1, n2, maior;

int main(){

    printf("Informe um numero: ");
    scanf("%d",&n1);

    maior = n1;
    
    printf("Informe o segundo numero: ");
    scanf("%d",&n2);

    if (n2 > maior){
        maior = n2;
        printf("O maior numero e: %d",n2);
    } else {
        printf("O maior numero e: %d",n1);
    }



return 0;

}