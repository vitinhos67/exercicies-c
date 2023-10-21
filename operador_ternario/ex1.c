#include<stdio.h>

int main() {


    int x,y;

    printf("Digite o primeiro valor");
    scanf("%d", &x);
    printf("Digite o segundo valor");
    scanf("%d", &y);

    printf("%s", x > y ? "X maior" : x == y ? "Iguais" : "Y e maior1");

    char sexo;
    printf("Digite o sexo");
    scanf("%s", &sexo);

    printf("%s", sexo == 'm' ? "masculino" : "feminino");


    int x1, y1, y2;

    printf("Digite o primeiro valor");
    scanf("%d", &x1);
    printf("Digite o segundo valor");
    scanf("%d", &y1);
    printf("Digite o terceiro valor");
    scanf("%d", &y2);

    printf("%s", x1 > y1 && x1 > y2 ? "x1 maior" : y2 > y1 && y2 > x1 ? "Y2 e maior" : "y1 e maior");



    return 1;
}