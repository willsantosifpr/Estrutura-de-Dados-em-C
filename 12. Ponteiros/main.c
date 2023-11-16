#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Nov/16/2023

int *p;
int val = 5;

int main()
{
    p = &val;

    printf(" O valor apontado por 'p' eh: %d\n", *p);

    return 0;
}
