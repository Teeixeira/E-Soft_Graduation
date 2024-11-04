/* Construa um algoritmo que solicite os dados dos alunos (nome, nota 1 e nota 2) em uma sala de aula contendo 32 alunos. Posteriormente, apresente a média 
da turma e percentual de aprovados e reprovados, considerando que a média mínima para aprovação é 6,0. Obs. As notas fornecidas deverão ser validadas entre 0 e 10.. */

#include <stdio.h>

void solicitanota(){
    printf("Informe a primeira nota do %d aluno", x + 1);
    scanf("%f",&nota1);

    if(nota1 > 10 || nota1 < 0){
        printf("Nota invalida, informe novamente\n");
        solicitanota();
    }

    printf("Informe a segunda nota do %d aluno", x + 1);
    scanf("%f",&nota2);

    if(nota2 > 10 || nota2 < 0){
        printf("Nota invalida, informe novamente\n");
        solicitanota();
    }
}

void resultado(){
    if((nota1 + nota2) > 6){
        printf("Aluno %d aprovado!\n",x + 1);
        aprovados ++;
    } else {
        printf("Aluno %d reprovado!\n",x + 1);
        reprovados ++;
    }
}

char nome[30];
float nota1, nota2, mediaT = 0, aprovados = 0, reprovados = 0;
int x, alunos = 32;

int main (){

    for(x = 0; x < alunos; x ++){
        solicitanota();
        mediaT += (nota1 + nota2) / 2;
        resultado();
    }

    reprovados = 100 - ((aprovados / 32) * 100);

    printf("Tivemos a media da turma em %.1f\n",mediaT / 32);
    printf("Tivemos %.0f %% de alunos aprovados e %.0f %% de alunos reprovados", (aprovados / 32) * 100, reprovados);

    return 0;
}