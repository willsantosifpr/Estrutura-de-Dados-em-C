#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Nov/12/2023

//      Operadores Logicos

int main()
{
    int a, b, c;

    printf("\n Digite um numero: ");
    scanf("%d", &a);

    printf("\n Digite um numero: ");
    scanf("%d", &b);

    printf("\n Digite um numero: ");
    scanf("%d", &c);

    if(a==b && b==c)
    {
        printf("\n a, b e c tem valores iguais.\n");
    }

    return 0;
}
