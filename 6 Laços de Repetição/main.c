#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Nov/15/2023

int main()
{
    printf("\n\t*****Laco WHILE*****\n\n");

    int x = 0;

    while(x < 5)
    {
        printf(" Variavel 'x' eh: %d\n", x);
        x++;
    }

    printf("\n\t*****Laco FOR*****\n\n");

    for(int i=0; i<5; i++)
    {
        printf(" Variavel 'i' eh: %d\n", i);
    }

    return 0;
}
