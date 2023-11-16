#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Nov/16/2023

int m[2][2];

int main()
{
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf(" Digite um numero: ");
            scanf("%d", &m[i][j]);
        }
    }

    printf("\n");

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf(" %d", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
