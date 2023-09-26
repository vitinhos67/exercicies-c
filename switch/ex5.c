#include <stdio.h>

int main()
{

    char resposta;

    printf("Quanto e 1x1:\na: 1\nb: 2\nc: 3\nd: 4 \n \nDigite Aqui:");
    scanf("%c", &resposta);

    switch (resposta)
    {
    case 'a':
        printf("acertou");
        break;
    case 'b':
        printf("errou");
        break;
    case 'c':
        printf("errou");
        break;
    case 'd':
        printf("errou");
        break;

    default:
        printf("Digite um resposta valido");
        break;
    }

    return 0;
}