#include <stdio.h>

int main()
{

    int codigo;
    int quantidade;

    printf("Escreva o codigo do produto: \nDigite Aqui:");
    scanf("%d", &codigo);

    printf("Escreva a quantidade: \nDigite Aqui:");
    scanf("%d", &quantidade);

    switch (codigo)
    {
    case 1001:
        printf("%f", quantidade * 5.32);
        break;
    case 1324:
        printf("%f", quantidade * 6.45);
        break;
    case 6548:
        printf("%f", quantidade * 2.37);
        break;
    case 987:
        printf("%f", quantidade * 4.32);
        break;

    default:
        printf("Digite um codigo valido");
         break;
    }

    return 0;
}