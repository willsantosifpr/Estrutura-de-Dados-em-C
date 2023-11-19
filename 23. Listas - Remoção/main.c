#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Nov/19/2023

struct ponto
{
    float x;
    float y;
    struct ponto *prox;
};

typedef struct ponto Ponto;

Ponto *listaPontos; // Aponta para o inicio da lista

void imprimir(Ponto *p)
{
    if(p != NULL)
    {
        printf(" Ponto(%.1f, %.1f)\n", p->x, p->y);
        imprimir(p->prox);
    }
}

int length = 0;

void addIndex(float x, float y, int index)
{
    Ponto *p = (Ponto*) malloc(sizeof(Ponto));

    p->x = x;
    p->y = y;

    if(index > length)
    {
        printf("\n Posicao invalida!\n");
    }
    else
    {
        if(index == 0)
        {
            p->prox = listaPontos;
            listaPontos = p;
        }
        else
        {
            Ponto *listaAux = listaPontos;

            int i = 0;
            while(i != index-1)
            {
                listaAux = listaAux->prox;
                i++;
            }
            p->prox = listaAux->prox;
            listaAux->prox = p;
        }
        length++;
    }
}

void removeIndex(int index)
{
    if(index > length || length == 0)
    {
        printf("\n Posicao invalida ou lista vazia!\n");
    }
    else
    {
        if(index == 0)
        {
            listaPontos = listaPontos->prox;
        }
        else
        {
            Ponto *listaAux = listaPontos;

            int i = 0;
            while(i != index-1)
            {
                listaAux = listaAux->prox;
                i++;
            }
            listaAux->prox = listaAux->prox->prox;
        }
        length--;
    }
}

int main()
{
    addIndex(1, 1, 0);
    addIndex(2, 2, 1);
    addIndex(3, 3, 2);
    addIndex(4, 4, 2);
    addIndex(0, 0, 0);

    removeIndex(0);
    removeIndex(0);
    removeIndex(0);
    removeIndex(0);
    //removeIndex(0);

    Ponto *auxLista = listaPontos;
    printf("\n");
    imprimir(auxLista);

    return 0;
}
