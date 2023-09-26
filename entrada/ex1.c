#include<stdio.h>
#include<stdlib.h>


int main() {

    int num1, num2, num3, num4;

    printf("Digite 4 numeros (EX: 1 2 3 4): \n");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    int r = num1 + num2 + num3 + num4;

    printf("O valor total é: %d \n", r);

    return 0;
}