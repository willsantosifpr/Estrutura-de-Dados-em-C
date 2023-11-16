#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Nov/16/2023

struct ponto
{
    float x;
    float y;
};

typedef struct ponto Ponto;

int main()
{
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));

    p->x = 1;
    p->y = 5;

    printf(" Ponto = (%.1f, %.1f)\n", p->x, p->y);

    return 0;
}
