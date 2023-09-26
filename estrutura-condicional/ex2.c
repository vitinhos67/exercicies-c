#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num;

    printf("Escreva um numero: \n");
    scanf("%d", &num);

    if (num < 12)
    {
        printf("O valor é: %f", num * 1.30);
    }   
    else
    {
        printf("O numero de maças compradas é: %f", num * 1.00);
    }

    return 0;
}