#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Nov/17/2023

int potencia(int base, int exp)
{
    if(exp == 1)
    {
        return base;
    }
    return base * potencia(base, exp-1);
}

int main()
{
    int v = potencia(2, 4); // v = 16

    printf("Potencia = %d\n", v);

    return 0;
}
