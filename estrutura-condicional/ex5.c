#include <stdio.h>

int main()
{

    int minutos;

    printf("Digite os minutos \n");
    scanf("%d", &minutos);

    int calcularHoras = minutos / 60;
    int calcularMinutos = minutos - calcularHoras * 60;

    printf("%d:%.2d", calcularHoras, calcularMinutos);

    return 0;
}