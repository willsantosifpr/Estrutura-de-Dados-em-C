#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Nov/24/2023

struct prato
{
    char cor;
    struct prato *prox;
};

typedef struct prato Prato;

Prato *pilhaTopo;

void add(char cor)
{
    Prato *p = (Prato*) malloc(sizeof(Prato));

    p->cor = cor;
    p->prox = pilhaTopo;
    pilhaTopo = p;
}

void removeTopElement()
{
    if(pilhaTopo == NULL)
    {
        printf(" Pilha vazia!\n");
    }
    else
    {
        pilhaTopo = pilhaTopo->prox;
    }
}

void imprimir(Prato *p)
{
    if(p != NULL)
    {
        printf(" Cor do prato: %c\n", p->cor);
        imprimir(p->prox);
    }
}

int main()
{
    add('B');
    add('R');
    add('G');
    add('Y');

    Prato *pilhaTopoAux = pilhaTopo;

    printf("\n");
    imprimir(pilhaTopoAux);

    removeTopElement();

    pilhaTopoAux = pilhaTopo;

    printf("\n");
    imprimir(pilhaTopoAux);

    removeTopElement();

    pilhaTopoAux = pilhaTopo;

    printf("\n");
    imprimir(pilhaTopoAux);

    removeTopElement();

    pilhaTopoAux = pilhaTopo;

    printf("\n");
    imprimir(pilhaTopoAux);

    removeTopElement();

    pilhaTopoAux = pilhaTopo;

    printf("\n");
    imprimir(pilhaTopoAux);

    removeTopElement();

    pilhaTopoAux = pilhaTopo;

    printf("\n");
    imprimir(pilhaTopoAux);

    return 0;
}
