#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Nov/16/2023

int v[4];

float v1[3];

int main()
{
    v[0] = 45;
    v[1] = 55;
    v[2] = 65;
    v[3] = 75;

    for(int i=0; i<3; i++)
    {
        printf(" Digite um valor: ");
        scanf("%f", &v1[i]);
    }

    printf("\n\n\tVALORES DIGITADOS:\n\n");

    for(int i=0; i<3; i++)
    {
        printf(" %.1f  ", v1[i]);
    }

    printf("\n");

    return 0;
}
