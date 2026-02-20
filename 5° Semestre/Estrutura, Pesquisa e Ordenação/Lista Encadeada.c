#include <stdio.h>
#include <stdlib.h>


struct tp_ponto{
    float x;
    float y;
    struct tp_ponto *prox;
};

typedef struct tp_ponto Ponto;

void main(){

    Ponto *p = (Ponto*) malloc(sizeof(Ponto));
    p -> x = 1;
    p -> y = 5;

    Ponto *p1 = (Ponto*) malloc(sizeof(Ponto));
    p1 -> x = 3;
    p1 -> y = 9;

    Ponto *p2 = (Ponto*) malloc(sizeof(Ponto));
    p2 -> x = 4;
    p2 -> y = 7;

    p -> prox = p1;
    p1 -> prox = p2;
    p2 -> prox = NULL;

    printf("X = %.0f, Y = %.0f\n", p -> x, p -> y);
    printf("X = %.0f, Y = %.0f\n", p -> prox -> x, p -> prox -> y);
    printf("X = %.0f, Y = %.0f", p -> prox -> prox -> x, p -> prox -> prox -> y);


    return 0;
}