#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Nov/22/2023

struct pessoa
{
    int senha;
    struct pessoa *prox;
};

typedef struct pessoa Pessoa;

Pessoa *fila;

void add(int senha)
{
    Pessoa *p = (Pessoa*) malloc(sizeof(Pessoa));

    p->senha = senha;
    p->prox = NULL;

    if(fila == NULL)
    {
        fila = p;
    }
    else
    {
        Pessoa *filaAux = fila;
        while(filaAux->prox != NULL)
        {
            filaAux = filaAux->prox;
        }
        filaAux->prox = p;
    }
}

void removeElement()
{
    if(fila == NULL)
    {
        printf(" Fila vazia!\n");
    }
    else
    {
        fila = fila->prox;
    }
}

void imprimir(Pessoa *f)
{
    if(f != NULL)
    {
        printf(" Senha: %d\n", f->senha);
        imprimir(f->prox);
    }
}

int main()
{
    add(1);
    add(2);
    add(3);
    add(4);

    Pessoa *filaAux = fila;

    printf("\n");
    imprimir(filaAux);

    removeElement();

    filaAux = fila;

    printf("\n");
    imprimir(filaAux);

    removeElement();

    filaAux = fila;

    printf("\n");
    imprimir(filaAux);

    return 0;
}
