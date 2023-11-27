#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Nov/17/2023

struct ponto
{
    float x;
    float y;
    struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *listaPontos;

void add(float x, float y)
{
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));

    p->x = x;
    p->y = y;
    p->prox = listaPontos;
    listaPontos = p;
}

int main()
{
    add(1, 5);
    add(2, 7);
    add(5, 3);

    printf("%.1f", listaPontos->prox->prox->x);

    return 0;
}
