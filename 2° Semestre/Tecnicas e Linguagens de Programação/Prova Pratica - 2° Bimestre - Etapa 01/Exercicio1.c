/******************************************************************************

Leonardo Teixeira de Carvalho - RA 24159859-2 - E-Soft 2S-N-D

Questão 01

*******************************************************************************/

#include <stdio.h>

int main(){
    
    int resmas, op, add, rem;
    
    printf("Qual a quantidade de resmas em estoque?\n");
    scanf("%d",&resmas);
    printf("Deseja adicionar ou subtrair?\n1 = Adicionar\n2 = Subtrair\n3 = Consultar\n");
    scanf("%d",&op);
    
    if(resmas >= 1){
        switch(op){
            
            case 1: 
                printf("\nQuantas resmas vai adicionar?");
                scanf("%d",&add);
                
                resmas = resmas + add;
                printf("\nEstoque atualizado: %d resmas",resmas);
                
            break;
            
            case 2:
                printf("\nQuantas resmas vai remover?");
                scanf("%d",&rem);
                
                resmas = resmas - rem;
                if(resmas >= 1){
                    printf("\nEstoque atualizado: %d resmas",resmas);
                } else {
                    printf("\nEstoque negativo, programa finalizado!");
                }
                
            break;
            
            case 3:
                printf("\nestoque atual = %d", resmas);
            break;
        }
    } else {
        printf("Estoque negativo, programa encerrado!");
    }
    
    return 0;
}