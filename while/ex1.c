#include <stdio.h>

void ex5()
{

    int numero1, numero2;

    printf("Digite um numero\n digite aqui: ");
    scanf("%d", &numero1);

    printf("Digite um numero\n digite aqui: ");
    scanf("%d", &numero2);

    while ((numero1 < 0 || numero1 > 100) || (numero2 < 0 || numero2 > 100))
    {

        printf("Voce deve digitar um numero entre 0 a 100 para os dois valores \n");

        printf("Digite um numero\n digite aqui: ");
        scanf("%d", &numero1);

        printf("Digite um numero\n digite aqui: ");
        scanf("%d", &numero2);
    }

    printf("%d", (numero1 + numero2) / 2);
}

void ex4()
{
    int numero1, numero2;

    printf("Digite um numero\n digite aqui: ");
    scanf("%d", &numero1);

    printf("Digite um numero\n digite aqui: ");
    scanf("%d", &numero2);

    if (numero2 == 0)
    {

        while (numero2 == 0)
        {
            printf("Digite um numero novo\n digite aqui: ");
            scanf("%d", &numero2);
        }
    }

    printf("\n%d", numero1 / numero2);
}

void ex3()
{

    int numero;

    printf("Digite um numero\n digite aqui: ");
    scanf("%d", &numero);

    if (numero > 0)
    {
        while (numero >= 0)
        {
            printf("%d\n", numero);
            numero--;
        }
    }
    else
    {
        while (numero <= 0)
        {
            printf("%d\n", numero);
            numero++;
        }
    }
}

void ex2()
{
    int numero;

    printf("Digite quantos funcionarios tem: ");

    scanf("%d", &numero);

    while (numero >= 1)
    {

        int id = numero;
        float salario;
        char sexo;
        char ferias;

        printf("Digite o salario: \n");
        scanf("%f", &salario);

        printf("sexo: \n");
        scanf("%c", &sexo);
        scanf("%c", &sexo);

        printf("ferias: \n");
        scanf("%c", &ferias);
        scanf("%c", &ferias);

        printf("Empregador:\nID=%d\nSALARIO=%f\nSEXO%c\nFERIAS=%c \n", numero, salario, sexo, ferias);

        numero--;
    }
}

void ex1()
{
    int numero;

    printf("Digite um numero maior que 10\n digite aqui: ");
    scanf("%d", &numero);

    if (numero >= 10)
    {
        while (numero <= 10)
        {
            printf("%d\n", numero);
            numero--;
        }
    }
}

int main()
{
    ex5();

    return 1;
}