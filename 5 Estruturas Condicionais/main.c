#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Nov/12/2023

int main()
{
    int num, soma;

    printf("\n Digite um numero: ");
    scanf("%d", &num);

    if(num != 0)
    {
        printf(" O valor da variavel 'num' eh diferente de 0\n");
    }
    else
    {
        printf(" O valor da variavel 'num' eh 0\n");
    }

    soma = num + 5;

    printf(" O valor da variavel 'num' + 5 eh: %d\n", soma);

    return 0;
}
