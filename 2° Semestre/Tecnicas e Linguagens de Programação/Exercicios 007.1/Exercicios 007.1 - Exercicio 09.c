#include <stdio.h>
int main(){
    int v, v1;
    printf("Descubra se um valor e um numero primo \n");
    printf("Digite um valor \n");
    scanf("%d",&v);
    v1 = v / 2;
    if(v == 2){
        printf("Ele e primo");
    }else if(v % 2 == 0 && v % v1 == 0)
        {
            printf("Numero nao e primo");
         }else {
            printf("Ele e primo");
         }


    return 0;
}