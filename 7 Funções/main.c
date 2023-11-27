#include <stdio.h>
#include <stdlib.h>

//William Cardoso da Silva Santos - Nov/15/2023

int soma(int a, int b)
{
    int c = a + b;

    return c;
}

int sub(int a, int b)
{
    int c = a - b;

    return c;
}

int main()
{
    int num1, num2, operacao, resultado, fim;

    do
    {
        printf("Digite um valor inteiro: ");
        scanf("%d", &num1);

        printf("Digite um valor inteiro: ");
        scanf("%d", &num2);

        printf("\nEscolha a operacao:\n1 - Adicao\n2 - Subtracao\n");
        scanf("%d", &operacao);

        if(operacao == 1)
        {
            resultado = soma(num1, num2);
        }

        if(operacao == 2)
        {
            resultado = sub(num1, num2);
        }

        printf("\n O resultado eh: %d\n", resultado);

        printf("\n Digite 1 para continuar ou 0 para encerrar o programa: ");
        scanf("%d", &fim);
        printf("\n");

    }while(fim != 0);

    return 0;
}
