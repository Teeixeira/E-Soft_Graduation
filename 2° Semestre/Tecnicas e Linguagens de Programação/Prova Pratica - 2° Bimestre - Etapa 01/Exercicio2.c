/******************************************************************************

Leonardo Teixeira de Carvalho - RA 24159859-2 - E-Soft 2S-N-D

Questão 02

*******************************************************************************/

#include <stdio.h>

int main(){
    
    char nome[30];
    char cargo;
    int idade;
    float salario;
    
    printf("Informe seu nome: ");
    gets(nome);
    printf("Sua idade: ");
    scanf("%d",&idade);
    printf("Seu cargo?\nA = Analista\nG = Gerente\nT = Tecnico\nS = Secretaria\n");
    scanf(" %c",&cargo);
    if(cargo == 'A' || cargo == 'G' || cargo == 'T' || cargo == 'S'){
        printf("Qual o seu salario? ");
        scanf("%f",&salario);
        
        if(cargo == 'A'){
            
            if(salario >= 1499 && salario <= 2499){
            
            salario += (salario * 0.10);
            printf("Seu novo salario é de: %.2f",salario);
            } else {
                printf("Seu salario nao houve alteracao!");
            }
            
        } else if (cargo == 'G'){
            
            if(salario >= 2500 && salario <= 3499){
            
            salario += (salario * 0.15);
            printf("Seu novo salario é de: %.2f",salario);
            } else {
                printf("Seu salario nao houve alteracao!");
            }    
            
        } else if (cargo == 'T'){
        
            if(salario >= 3500 && salario <= 4999){
            
            salario += (salario * 0.05);
            printf("Seu novo salario é de: %.2f",salario);
            } else {
                printf("Seu salario nao houve alteracao!");
            }
        
    } else {
        main();
    }
    
    printf("\nApos o aumento: %s %d anos %c e seu novo salario de %.2f reais",nome, idade, cargo, salario);
    
    }
    

    return 0;
}