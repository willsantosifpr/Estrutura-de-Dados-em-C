#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Nov/16/2023

struct pessoa
{
    int idade;
    float altura;
    char sexo;
};

typedef struct pessoa Pessoa;

int main()
{
    Pessoa p1;

    p1.idade = 30;
    p1.altura = 1.65;
    p1.sexo = 'M';

    printf(" A idade da pessoa eh: %d\n", p1.idade);
    printf(" A altura da pessoa eh: %.2f\n", p1.altura);
    printf(" Sexo: %c\n", p1.sexo);

    return 0;
}
