/* Faça um programa que leia várias notas de 2 disciplinas e apresente a média dos alunos de cada disciplina. Utilize laço for. */

#include <stdio.h>

float mat[2], port[2], mediamat = 0, mediaport = 0;
int alunos, x, y;

int main (){

    printf("Informe a quantidade de alunos: ");
    scanf("%d",&alunos);

    for(x = 0; x < alunos; x ++){
        for(y = 0; y < 2; y ++){
            printf("Informe a %d nota de matematematica do %d aluno: ",y + 1, x + 1);
            scanf("%f",&mat[y]);
            mediamat += mat[y];

            printf("Informe a %d nota de portugues do %d aluno: ",y + 1, x + 1);
            scanf("%f",&port[y]);
            mediaport += port[y];
        }
    }

    mediamat = (mediamat / 2) / alunos;
    mediaport = (mediaport / 2) / alunos;

    printf("A media de matematica dos %.0f alunos eh de: %.1f\n",alunos, mediamat);
    printf("A media de portugues dos %.0f alunos eh de: %.1f\n",alunos, mediaport);

    return 0;
}