#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Nov/29/2023

struct nodo
{
    int valor;
    struct nodo *esq;
    struct nodo *dir;
};

typedef struct nodo Nodo;

Nodo* create(int valor)
{
    Nodo *n = malloc(sizeof(Nodo));

    n->valor = valor;
    n->esq = NULL;
    n->dir = NULL;
    return n;
}

void imprimir(Nodo *n)
{
    if(n == NULL)
        return;

    printf("%d\n", n->valor);
    imprimir(n->esq);
    imprimir(n->dir);
}

void add(Nodo *n, int valor)
{
    if(valor < n->valor)
    {
        if(n->esq == NULL)
        {
            n->esq = create(valor);
        }
        else
        {
            add(n->esq, valor);
        }
    }
    else
    {
        if(n->dir == NULL)
        {
            n->dir = create(valor);
        }
        else
        {
            add(n->dir, valor);
        }
    }
}

int main()
{
    Nodo *root = create(5);

    add(root, 7);
    add(root, 3);
    add(root, 4);
    add(root, 9);
    add(root, 1);

    imprimir(root);

    return 0;
}
