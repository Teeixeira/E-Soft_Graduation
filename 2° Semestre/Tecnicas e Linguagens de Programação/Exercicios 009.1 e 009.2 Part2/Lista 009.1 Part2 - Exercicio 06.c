/* Faça um programa que calcule a média de altura de uma turma de alunos usando um laço for. O número de alunos deve ser solicitado */

#include <stdio.h>

int i, turma;
float aluno, mediaA;

int main (){

    printf("Quantidade de alunos que possui a turma: ");
    scanf("%d",&turma);

    for(i = 0; i < turma; i ++){
        printf("Altura do %d aluno: \n",i + 1);
        scanf("%f",&aluno);

        mediaA = mediaA + aluno;
    }

    printf("A altura media da turma e de: %.2f",mediaA / turma);

    return 0;
}