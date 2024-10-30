#include <stdio.h>

int main()
{
    int pedido, numInterno;
    float valor, codigo, codigo2;
    printf("Qual o numero do pedido?");
    scanf("%d", &pedido);
    printf("Qual o numero interno do dia?");
    scanf("%d", &numInterno);
    printf("Qual o valor pago?");
    scanf("%f", &valor);
    
    codigo = ((pedido / 2.15) * numInterno) * (valor *100);
    
    printf("o codigo de rastreio e %2.f \n",codigo);
    printf("Qual codigo de rastreio?");
    scanf("%f", &codigo2);
    if(codigo == codigo2){
        printf("Código de rastreio correto! encomenda se encontra em: na Receita federal, Faz o L");
    }else{
        printf("Código incorreto!");
    }
     return 0;
}