#include <stdio.h>

int num;

int main(){

    printf("Informe um numero: ");
    scanf("%d",&num);

    if (num % 2 == 0){
        printf("O numero informado e par!");
    } else {
        printf("O numero informado e impar");
    }



return 0;

}