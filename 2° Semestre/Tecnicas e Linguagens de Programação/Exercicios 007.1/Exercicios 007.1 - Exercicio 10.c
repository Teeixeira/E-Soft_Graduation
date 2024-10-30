#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    float alunos = 0, media = 0, nota = 0;

    printf("A minima para aprovação da institução é de 6,0");

    printf("\nNota do 1° aluno: ");
    scanf("%f",&nota);
    media += nota;
    alunos ++;
    printf("\nNota do 2° aluno: ");
    scanf("%f",&nota);
    media += nota;
    alunos ++;
    printf("\nNota do 3° aluno: ");
    scanf("%f",&nota);
    media += nota;
    alunos ++;
    printf("\nNota do 4° aluno: ");
    scanf("%f",&nota);
    media += nota;
    alunos ++;
    printf("\nNota do 5° aluno: ");
    scanf("%f",&nota);
    media += nota;
    alunos ++;
    printf("\nNota do 6° aluno: ");
    scanf("%f",&nota);
    media += nota;
    alunos ++;
    printf("\nNota do 7° aluno: ");
    scanf("%f",&nota);
    media += nota;
    alunos ++;
    printf("\nNota do 8° aluno: ");
    scanf("%f",&nota);
    media += nota;
    alunos ++;
    printf("\nNota do 9° aluno: ");
    scanf("%f",&nota);
    media += nota;
    alunos ++;
    printf("\nNota do 10° aluno: ");
    scanf("%f",&nota);
    media += nota;
    alunos ++;

    media = media / alunos;

    if(media >= 6){
        printf("\nA turma esta aprovada!!!");
    } else {
        printf("\nA turma esta reprovada :(");
    }
    printf("\nA media final da turma foi de: %.1f",media);   

    return 0;
}