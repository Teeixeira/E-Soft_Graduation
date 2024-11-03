/* Operações com Dois Vetores:
- Somar dois vetores.
- Subtrair dois vetores.
- Realizar a soma entre dois vetores, porém deve-se somar a posição + 1 do primeiro vetor, e o resultado 
deve ser atribuído em outro vetor do mesmo tipo.
- Apresente todos os vetores.
- Verificar se dois vetores são iguais */

/* Calcular a média dos elementos de um vetor */

#include <stdio.h> 

int x, vetor0[10], vetor1[10], vetor2[10];
int v1, v2;
float calculo;
char op;

void solicitaVetor1(){
    printf("Informe o primeiro vetor da operacao: ");
    scanf("%d",&v1);

    if(v1 > 10 || v1 < 0){
        printf("O valor deve ser entre 1 e 10!");
        solicitaVetor1();
    }

    return;
}

void solicitaVetor2(){
    printf("Informe o segundo vetor da operacao: ");
    scanf("%d",&v2);

    if(v2 > 10 || v2 < 0){
        printf("O valor deve ser entre 1 e 10!");
        solicitaVetor1();
    }

    return;
}

void operacao(){
    printf("Informe a operacao (+ ou -): ");
    scanf(" %c",&op);

    if(op != '+' && op != '-'){
        printf("Informe novamente, a operacao deve ser mais (+) ou menos (-)");
        operacao();
    }

    return;
}

int main (){
   
    for(x = 0; x < 10; x ++){
        printf("Digite o %d numero do vetor 1: ",x + 1);
        scanf("%d",&vetor0[x]);
    }

    for(x = 0; x < 10; x ++){
        printf("Digite o %d numero do vetor 2: ",x + 1);
        scanf("%d",&vetor1[x]);
    }

    solicitaVetor1();
    solicitaVetor2();
    operacao();

    if(op == '+'){
        calculo = vetor0[v1 - 1] + vetor1[v2 - 1];
    } else {
        calculo = vetor0[v1 - 1] - vetor1[v2 - 1];
    }

    for(x = 0; x < 10; x ++){
        if(x == 10){
            vetor2[x] = vetor0[x] + vetor1[x]; 
        } else {
            vetor2[x] = vetor0[x + 1] + vetor1[x];
        }
    }   

    printf("teste de escrita do vetor1: %d %d %d %d %d %d %d %d %d %d", vetor0);

    printf("Vetor1:  /  Vetor2:  /  Vetor3: \n");
    for(x = 0; x < 10; x ++){
        printf("    %d    /    %d    /    %d \n",vetor0[x], vetor1[x], vetor2[x]);
    }   

    for(x = 0; x < 10; x ++){
        if(vetor0[x] == vetor1[x]){
            printf("O vetor1 %d posicao eh iguao ao vetor2 na mesma posicao!", x + 1);
        }
    }   

    return 0;
}