#include <stdio.h>
int main(){
    int senha,comSenha=123456,login,compLogin=12456;
    printf("Login de acesso \n");
    printf("Digite seu login \n");
    scanf("%d", &login);
    printf("Digite sua senha \n");
    scanf("%d", &senha);

    if(login == compLogin && senha==comSenha){
        printf("Acesso Permitido \n");
    }else{
        printf("Negado \n");
    }

}