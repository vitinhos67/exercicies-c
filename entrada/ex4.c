#include<stdio.h>
#include<stdlib.h>


int main() {

    float lado;

    printf("Area do quadrado: \n");
    scanf("%f", &lado);

    float area = lado * lado;

    printf("Area do quadrado: %.2f \n", area);

    return 0;
}