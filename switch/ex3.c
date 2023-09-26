#include <stdio.h>

int main()
{

    int idade;

    printf("Digite sua idade:");
    scanf("%d", &idade);

    switch (idade)
    {
    case 5:
    case 7:
        printf("Infatil A");
        break;
    case 8:
    case 10:
        printf("Infatil B");
        break;
    case 11:
    case 13:
        printf("JUVENIL A");
        break;
    case 14:
    case 17:
        printf("JUVENIL B");
        break;
    default:


        if(idade >= 18) {
            printf("ADULTO");
            return 0;
        }

        if (idade <= 4)
        {

            if (idade <= 1)
            {
                printf("IDADE MENORES QUE 1 SAO IMPOSSIVEIS");
                return 0;
            }

            printf("A idade e Invalida!");
            return 0;
        }
    }

    return 0;
}